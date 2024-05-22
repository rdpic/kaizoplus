#!/bin/bash

HACK="Kaizo XYZ"

case `pwd` in
*firered)
TARGET="pokefirered_rev1"
SUFFIX="_fr"
CODE="BPRE"
HACK="FireRed $HACK"
;;
*emerald)
TARGET="pokeemerald"
SUFFIX="_em"
CODE="BPEE"
HACK="Emerald $HACK"
;;
esac

rm -rf dist
mkdir dist
grep -f symbols.txt $TARGET.map | tr -s ' ' | cut --delimiter=' ' -f2-3 > dist/offsets.txt
tools/inigen/inigen $TARGET.elf dist/custom_offsets.ini --code $CODE --name "$HACK"
cat dist/offsets.txt | node -r fs -p "JSON.stringify(fs.readFileSync(0,'utf8').split(/\s+/).slice(0,-1).reduce((acc,val,ind,arr)=>acc[val]?acc:Object.assign(acc,{[arr[ind+1]]:Number(val)}),{}));" > dist/offsets$SUFFIX.json