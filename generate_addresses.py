DESCRIPTION = """
Generate memory addresses for KaizoXYZExtension.lua.
By default, requires a built ROM in the pokefirered directory.
"""
SYM_URL = 'https://raw.githubusercontent.com/pret/pokefirered/symbols/pokefirered.sym'
SETTINGS_URL = 'https://raw.githubusercontent.com/besteon/Ironmon-Tracker/master/ironmon_tracker/GameSettings.lua'

from argparse import ArgumentParser
from dataclasses import dataclass
import re
from typing import Iterable
from urllib.request import urlopen

parser = ArgumentParser(description=DESCRIPTION)
parser.add_argument('--map', default='pokefirered/pokefirered.map')
args = parser.parse_args()

with open(args.map) as f:
    map_file = f.read()

with urlopen(SYM_URL) as f:
    sym_file = f.read().decode('utf-8')

with urlopen(SETTINGS_URL) as f:
    settings_file = f.read().decode('utf-8')

map_symbols = set(m.group(1) for m in re.finditer(r'[0-9a-f]{8} +([a-zA-Z0-9_]+)\b', map_file))


def sym_address(sym: str) -> str:
    if (m := re.search(r'([0-9a-f]{8}) +' + sym + r'\b', map_file)):
        return m.group(1)
    else:
        raise Exception(f'{sym} not found in map file')


@dataclass
class Address:
    var: str
    old_address: str
    offset: int = 0
    sym: str = ''
    new_address: str = ''

    def find_sym(self) -> None:
        if re.search(self.old_address + r' . [0-9a-f]{8} ' + self.var + '$', sym_file, re.MULTILINE):
            # if the var and address match, we have the sym already
            self.sym = self.var
        elif (m := re.search(self.old_address + r' . [0-9a-f]{8} (.+)', sym_file)):
            # if only the address matches, use the corresponding sym
            self.sym = m.group(1)
        elif (m := re.search(r'([0-9a-f]{8}) . [0-9a-f]{8} ' + self.var + '$', sym_file, re.MULTILINE)):
            # otherwise, try to calculate an offset based on a matching var
            self.sym = self.var
            self.offset = int(self.old_address, 16) - int(m.group(1), 16)
        else:
            # as a last resort, find the sym with the nearest address below this one
            ref = int(self.old_address, 16)
            record = -1
            for line in sym_file.split('\n'):
                words = line.split(' ')
                if len(words) == 4:
                    addr = int(words[0], 16)
                    if addr < ref and addr > record:
                        record = addr
                        self.sym = words[-1]
            self.offset = ref - record

    def refind_sym(self):
        ref = int(self.old_address, 16)
        record = -1
        for line in sym_file.split('\n'):
            words = line.split(' ')
            if len(words) == 4:
                sym = words[-1]
                addr = int(words[0], 16)
                if sym in map_symbols and addr < ref and addr > record and ref - addr < 0x4000:
                    record = addr
                    self.sym = sym
        self.offset = ref - record

    def find_new_address(self) -> str:
        if not self.sym:
            self.find_sym()
        
        if self.sym not in map_symbols:
            self.refind_sym()
        
        self.new_address = sym_address(self.sym)
        if self.offset:
            self.new_address = hex(int(self.new_address, 16) + self.offset)[2:]
        return self.new_address


def old_addresses() -> Iterable[Address]:
    for i, match in enumerate(re.finditer(r'local (?:addresses|abilityScripts) = {(.+?)\t}$', settings_file, re.DOTALL|re.MULTILINE)):
        s = match.group(1)
        if i == 0:  # EWRAM
            for match in re.finditer(r'\t([a-zA-Z0-9_]+) = { .+?, .+?, { 0x([0-9a-fA-F]+)', s):
                yield Address(match.group(1), match.group(2))
        elif i == 1:  # IWRAM
            for match in re.finditer(r'\t([a-zA-Z0-9_]+) = { { .+? }, { .+? }, { 0x([0-9a-fA-F]+)', s):
                yield Address(match.group(1), match.group(2))
        elif i == 2 or i == 3:  # ROM
            for match in re.finditer(r'\t(?:-- ?(?:.+?FRLG: )?([a-zA-Z0-9_]+) \+ 0x([0-9a-fA-F]+)\n\t+)?([a-zA-Z0-9_]+) = {(?:.|\n)+?{ 0x([0-9a-fA-F]+), .+?, .+?, .+?, .+?, .+?, .+? },', s):
                yield Address(match.group(3), match.group(4), offset=int(match.group(2) or '0', 16), sym=match.group(1) or '')
        else:
            raise Exception('found too many address groups')


print('\t\tlocal GS = GameSettings')
for addr in old_addresses():
    try:
        addr.find_new_address()
        if int(addr.new_address, 16) != int(addr.old_address, 16):
            if addr.sym == addr.var:
                print(f'\t\tGS.{addr.var} = 0x{addr.new_address}')
            elif addr.offset:
                print(f'\t\tGS.{addr.var} = 0x{addr.new_address} -- {addr.sym} + {hex(addr.offset)}')
            else:
                print(f'\t\tGS.{addr.var} = 0x{addr.new_address} -- {addr.sym}')
    except Exception as e:
        print(f'\t\t-- {e}')