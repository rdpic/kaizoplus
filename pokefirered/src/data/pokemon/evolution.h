const struct Evolution gEvolutionTable[NUM_SPECIES][EVOS_PER_MON] =
{
    [SPECIES_BULBASAUR]  = {{EVO_LEVEL, 16, SPECIES_IVYSAUR}},
    [SPECIES_IVYSAUR]    = {{EVO_LEVEL, 30, SPECIES_VENUSAUR}},
    [SPECIES_CHARMANDER] = {{EVO_LEVEL, 16, SPECIES_CHARMELEON}},
    [SPECIES_CHARMELEON] = {{EVO_LEVEL, 30, SPECIES_CHARIZARD}},
    [SPECIES_SQUIRTLE]   = {{EVO_LEVEL, 16, SPECIES_WARTORTLE}},
    [SPECIES_WARTORTLE]  = {{EVO_LEVEL, 30, SPECIES_BLASTOISE}},
    [SPECIES_CATERPIE]   = {{EVO_LEVEL,  7, SPECIES_METAPOD}},
    [SPECIES_METAPOD]    = {{EVO_LEVEL, 10, SPECIES_BUTTERFREE}},
    [SPECIES_WEEDLE]     = {{EVO_LEVEL,  7, SPECIES_KAKUNA}},
    [SPECIES_KAKUNA]     = {{EVO_LEVEL, 10, SPECIES_BEEDRILL}},
    [SPECIES_PIDGEY]     = {{EVO_LEVEL, 14, SPECIES_PIDGEOTTO}},
    [SPECIES_PIDGEOTTO]  = {{EVO_LEVEL, 22, SPECIES_PIDGEOT}},
    [SPECIES_RATTATA]    = {{EVO_LEVEL, 14, SPECIES_RATICATE}},
    [SPECIES_SPEAROW]    = {{EVO_LEVEL, 14, SPECIES_FEAROW}},
    [SPECIES_EKANS]      = {{EVO_LEVEL, 14, SPECIES_ARBOK}},
    [SPECIES_PIKACHU]    = {{EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_RAICHU}},
    [SPECIES_SANDSHREW]  = {{EVO_LEVEL, 16, SPECIES_SANDSLASH}},
    [SPECIES_NIDORAN_F]  = {{EVO_LEVEL, 14, SPECIES_NIDORINA}},
    [SPECIES_NIDORINA]   = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_NIDOQUEEN}},
    [SPECIES_NIDORAN_M]  = {{EVO_LEVEL, 14, SPECIES_NIDORINO}},
    [SPECIES_NIDORINO]   = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_NIDOKING}},
    [SPECIES_CLEFAIRY]   = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_CLEFABLE}},
    [SPECIES_VULPIX]     = {{EVO_ITEM, ITEM_FIRE_STONE, SPECIES_NINETALES}},
    [SPECIES_JIGGLYPUFF] = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_WIGGLYTUFF}},
    [SPECIES_ZUBAT]      = {{EVO_LEVEL, 14, SPECIES_GOLBAT}},
    [SPECIES_GOLBAT]     = {{EVO_FRIENDSHIP, 0, SPECIES_CROBAT}},
    [SPECIES_ODDISH]     = {{EVO_LEVEL, 14, SPECIES_GLOOM}},
    [SPECIES_GLOOM]      = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_VILEPLUME},
                            {EVO_ITEM, ITEM_SUN_STONE, SPECIES_BELLOSSOM}},
    [SPECIES_PARAS]      = {{EVO_LEVEL, 14, SPECIES_PARASECT}},
    [SPECIES_VENONAT]    = {{EVO_LEVEL, 14, SPECIES_VENOMOTH}},
    [SPECIES_DIGLETT]    = {{EVO_LEVEL, 14, SPECIES_DUGTRIO}},
    [SPECIES_MEOWTH]     = {{EVO_LEVEL, 18, SPECIES_PERSIAN}},
    [SPECIES_PSYDUCK]    = {{EVO_LEVEL, 18, SPECIES_GOLDUCK}},
    [SPECIES_MANKEY]     = {{EVO_LEVEL, 16, SPECIES_PRIMEAPE}},
    [SPECIES_GROWLITHE]  = {{EVO_ITEM, ITEM_FIRE_STONE, SPECIES_ARCANINE}},
    [SPECIES_POLIWAG]    = {{EVO_LEVEL, 15, SPECIES_POLIWHIRL}},
    [SPECIES_POLIWHIRL]  = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_POLIWRATH}},
    [SPECIES_ABRA]       = {{EVO_LEVEL, 16, SPECIES_KADABRA}},
    [SPECIES_KADABRA]    = {{EVO_LEVEL, 30, SPECIES_ALAKAZAM}},
    [SPECIES_MACHOP]     = {{EVO_LEVEL, 18, SPECIES_MACHOKE}},
    [SPECIES_MACHOKE]    = {{EVO_LEVEL, 30, SPECIES_MACHAMP}},
    [SPECIES_BELLSPROUT] = {{EVO_LEVEL, 14, SPECIES_WEEPINBELL}},
    [SPECIES_WEEPINBELL] = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_VICTREEBEL}},
    [SPECIES_TENTACOOL]  = {{EVO_LEVEL, 18, SPECIES_TENTACRUEL}},
    [SPECIES_GEODUDE]    = {{EVO_LEVEL, 15, SPECIES_GRAVELER}},
    [SPECIES_GRAVELER]   = {{EVO_LEVEL, 30, SPECIES_GOLEM}},
    [SPECIES_PONYTA]     = {{EVO_LEVEL, 18, SPECIES_RAPIDASH}},
    [SPECIES_SLOWPOKE]   = {{EVO_LEVEL, 18, SPECIES_SLOWBRO}},
    [SPECIES_MAGNEMITE]  = {{EVO_LEVEL, 18, SPECIES_MAGNETON}},
    [SPECIES_MAGNETON]   = {{EVO_LEVEL, 30, SPECIES_MAGNEZONE}},
    [SPECIES_DODUO]      = {{EVO_LEVEL, 18, SPECIES_DODRIO}},
    [SPECIES_SEEL]       = {{EVO_LEVEL, 18, SPECIES_DEWGONG}},
    [SPECIES_GRIMER]     = {{EVO_LEVEL, 14, SPECIES_MUK}},
    [SPECIES_SHELLDER]   = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_CLOYSTER}},
    [SPECIES_GASTLY]     = {{EVO_LEVEL, 18, SPECIES_HAUNTER}},
    [SPECIES_HAUNTER]    = {{EVO_LEVEL, 30, SPECIES_GENGAR}},
    [SPECIES_ONIX]       = {{EVO_LEVEL, 30, SPECIES_STEELIX}},
    [SPECIES_DROWZEE]    = {{EVO_LEVEL, 20, SPECIES_HYPNO}},
    [SPECIES_KRABBY]     = {{EVO_LEVEL, 18, SPECIES_KINGLER}},
    [SPECIES_VOLTORB]    = {{EVO_LEVEL, 18, SPECIES_ELECTRODE}},
    [SPECIES_EXEGGCUTE]  = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_EXEGGUTOR}},
    [SPECIES_CUBONE]     = {{EVO_LEVEL, 16, SPECIES_MAROWAK}},
    [SPECIES_LICKITUNG]  = {{EVO_LEVEL, 16, SPECIES_LICKILICKY}},
    [SPECIES_KOFFING]    = {{EVO_LEVEL, 14, SPECIES_WEEZING}},
    [SPECIES_RHYHORN]    = {{EVO_LEVEL, 30, SPECIES_RHYDON}},
    [SPECIES_RHYDON]     = {{EVO_LEVEL, 30, SPECIES_RHYPERIOR}},
    [SPECIES_CHANSEY]    = {{EVO_FRIENDSHIP, 0, SPECIES_BLISSEY}},
    [SPECIES_TANGELA]    = {{EVO_LEVEL, 18, SPECIES_TANGROWTH}},
    [SPECIES_HORSEA]     = {{EVO_LEVEL, 18, SPECIES_SEADRA}},
    [SPECIES_SEADRA]     = {{EVO_LEVEL, 30, SPECIES_KINGDRA}},
    [SPECIES_GOLDEEN]    = {{EVO_LEVEL, 18, SPECIES_SEAKING}},
    [SPECIES_STARYU]     = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_STARMIE}},
    [SPECIES_SCYTHER]    = {{EVO_LEVEL, 22, SPECIES_SCIZOR}},
    /* [SPECIES_ELECTABUZZ] = {{EVO_ITEM, ITEM_ELECTIRIZER, SPECIES_ELECTIVIRE}}, */
    /* [SPECIES_MAGMAR] = {{EVO_ITEM, ITEM_MAGMARIZER, SPECIES_MAGMORTAR}}, */
    [SPECIES_MAGIKARP]   = {{EVO_LEVEL, 14, SPECIES_GYARADOS}},
    [SPECIES_EEVEE]      = {{EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_JOLTEON},
                            {EVO_ITEM, ITEM_WATER_STONE, SPECIES_VAPOREON},
                            {EVO_ITEM, ITEM_FIRE_STONE, SPECIES_FLAREON},
                            {EVO_ITEM, ITEM_SUN_STONE, SPECIES_ESPEON},
                            {EVO_ITEM, ITEM_MOON_STONE, SPECIES_UMBREON}
                            /* {EVO_ITEM, ITEM_ICE_STONE SPECIES_GLACEON},
                            {EVO_ITEM, ITEM_LEAF_STONE, SPECIES_LEAFEON},
                            {EVO_ITEM, ITEM_SHINY_STONE, SPECIES_SYLVEON} */},
    [SPECIES_PORYGON]    = {{EVO_ITEM, ITEM_UP_GRADE, SPECIES_PORYGON2}},
    [SPECIES_OMANYTE]    = {{EVO_LEVEL, 18, SPECIES_OMASTAR}},
    [SPECIES_KABUTO]     = {{EVO_LEVEL, 18, SPECIES_KABUTOPS}},
    [SPECIES_DRATINI]    = {{EVO_LEVEL, 22, SPECIES_DRAGONAIR}},
    [SPECIES_DRAGONAIR]  = {{EVO_LEVEL, 45, SPECIES_DRAGONITE}},
    [SPECIES_CHIKORITA]  = {{EVO_LEVEL, 16, SPECIES_BAYLEEF}},
    [SPECIES_BAYLEEF]    = {{EVO_LEVEL, 30, SPECIES_MEGANIUM}},
    [SPECIES_CYNDAQUIL]  = {{EVO_LEVEL, 14, SPECIES_QUILAVA}},
    [SPECIES_QUILAVA]    = {{EVO_LEVEL, 30, SPECIES_TYPHLOSION}},
    [SPECIES_TOTODILE]   = {{EVO_LEVEL, 18, SPECIES_CROCONAW}},
    [SPECIES_CROCONAW]   = {{EVO_LEVEL, 30, SPECIES_FERALIGATR}},
    [SPECIES_SENTRET]    = {{EVO_LEVEL, 14, SPECIES_FURRET}},
    [SPECIES_HOOTHOOT]   = {{EVO_LEVEL, 14, SPECIES_NOCTOWL}},
    [SPECIES_LEDYBA]     = {{EVO_LEVEL, 14, SPECIES_LEDIAN}},
    [SPECIES_SPINARAK]   = {{EVO_LEVEL, 10, SPECIES_ARIADOS}},
    [SPECIES_CHINCHOU]   = {{EVO_LEVEL, 18, SPECIES_LANTURN}},
    [SPECIES_PICHU]      = {{EVO_FRIENDSHIP, 0, SPECIES_PIKACHU}},
    [SPECIES_CLEFFA]     = {{EVO_FRIENDSHIP, 0, SPECIES_CLEFAIRY}},
    [SPECIES_IGGLYBUFF]  = {{EVO_FRIENDSHIP, 0, SPECIES_JIGGLYPUFF}},
    [SPECIES_TOGEPI]     = {{EVO_FRIENDSHIP, 0, SPECIES_TOGETIC}},
    /* [SPECIES_TOGETIC]    = {{EVO_ITEM, ITEM_SHINY_STONE, SPECIES_TOGEKISS}}, */
    [SPECIES_NATU]       = {{EVO_LEVEL, 16, SPECIES_XATU}},
    [SPECIES_MAREEP]     = {{EVO_LEVEL, 14, SPECIES_FLAAFFY}},
    [SPECIES_FLAAFFY]    = {{EVO_LEVEL, 30, SPECIES_AMPHAROS}},
    [SPECIES_MARILL]     = {{EVO_LEVEL, 18, SPECIES_AZUMARILL}},
    [SPECIES_HOPPIP]     = {{EVO_LEVEL, 16, SPECIES_SKIPLOOM}},
    [SPECIES_SKIPLOOM]   = {{EVO_LEVEL, 24, SPECIES_JUMPLUFF}},
    [SPECIES_AIPOM]      = {{EVO_LEVEL, 16, SPECIES_AMBIPOM}},
    [SPECIES_SUNKERN]    = {{EVO_ITEM, ITEM_SUN_STONE, SPECIES_SUNFLORA}},
    [SPECIES_YANMA]      = {{EVO_LEVEL, 16, SPECIES_YANMEGA}},
    [SPECIES_WOOPER]     = {{EVO_LEVEL, 18, SPECIES_QUAGSIRE}},
    [SPECIES_MURKROW]    = {{EVO_ITEM, ITEM_DUSK_STONE, SPECIES_HONCHKROW}},
    [SPECIES_MISDREAVUS] = {{EVO_ITEM, ITEM_DUSK_STONE, SPECIES_MISMAGIUS}},
    [SPECIES_PINECO]     = {{EVO_LEVEL, 14, SPECIES_FORRETRESS}},
    [SPECIES_GLIGAR]     = {{EVO_LEVEL, 16, SPECIES_GLISCOR}},
    [SPECIES_SNUBBULL]   = {{EVO_LEVEL, 16, SPECIES_GRANBULL}},
    [SPECIES_SNEASEL]    = {{EVO_LEVEL, 16, SPECIES_WEAVILE}},
    [SPECIES_TEDDIURSA]  = {{EVO_LEVEL, 18, SPECIES_URSARING}},
    [SPECIES_SLUGMA]     = {{EVO_LEVEL, 16, SPECIES_MAGCARGO}},
    [SPECIES_SWINUB]     = {{EVO_LEVEL, 16, SPECIES_PILOSWINE}},
    [SPECIES_PILOSWINE]  = {{EVO_LEVEL, 22, SPECIES_MAMOSWINE}},
    [SPECIES_REMORAID]   = {{EVO_LEVEL, 16, SPECIES_OCTILLERY}},
    [SPECIES_HOUNDOUR]   = {{EVO_LEVEL, 16, SPECIES_HOUNDOOM}},
    [SPECIES_PHANPY]     = {{EVO_LEVEL, 16, SPECIES_DONPHAN}},
    /* [SPECIES_PORYGON2]   = {{EVO_ITEM, ITEM_DUBIOUS_DISC, SPECIES_PORYGON_Z}}, */
    [SPECIES_TYROGUE]    = {{EVO_FRIENDSHIP, 0, SPECIES_HITMONTOP}},
    [SPECIES_SMOOCHUM]   = {{EVO_FRIENDSHIP, 0, SPECIES_JYNX}},
    [SPECIES_ELEKID]     = {{EVO_FRIENDSHIP, 0, SPECIES_ELECTABUZZ}},
    [SPECIES_MAGBY]      = {{EVO_FRIENDSHIP, 0, SPECIES_MAGMAR}},
    [SPECIES_LARVITAR]   = {{EVO_FRIENDSHIP, 0, SPECIES_PUPITAR}},
    [SPECIES_PUPITAR]    = {{EVO_LEVEL, 55, SPECIES_TYRANITAR}},
    [SPECIES_TREECKO]    = {{EVO_LEVEL, 16, SPECIES_GROVYLE}},
    [SPECIES_GROVYLE]    = {{EVO_LEVEL, 30, SPECIES_SCEPTILE}},
    [SPECIES_TORCHIC]    = {{EVO_LEVEL, 16, SPECIES_COMBUSKEN}},
    [SPECIES_COMBUSKEN]  = {{EVO_LEVEL, 30, SPECIES_BLAZIKEN}},
    [SPECIES_MUDKIP]     = {{EVO_LEVEL, 16, SPECIES_MARSHTOMP}},
    [SPECIES_MARSHTOMP]  = {{EVO_LEVEL, 30, SPECIES_SWAMPERT}},
    [SPECIES_POOCHYENA]  = {{EVO_LEVEL, 14, SPECIES_MIGHTYENA}},
    [SPECIES_ZIGZAGOON]  = {{EVO_FRIENDSHIP, 0, SPECIES_LINOONE}},
    [SPECIES_WURMPLE]    = {{EVO_LEVEL, 7, SPECIES_SILCOON}},
    [SPECIES_SILCOON]    = {{EVO_LEVEL, 10, SPECIES_BEAUTIFLY}},
    [SPECIES_CASCOON]    = {{EVO_LEVEL, 10, SPECIES_DUSTOX}},
    [SPECIES_LOTAD]      = {{EVO_LEVEL, 14, SPECIES_LOMBRE}},
    [SPECIES_LOMBRE]     = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_LUDICOLO}},
    [SPECIES_SEEDOT]     = {{EVO_LEVEL, 14, SPECIES_NUZLEAF}},
    [SPECIES_NUZLEAF]    = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_SHIFTRY}},
    [SPECIES_NINCADA]    = {{EVO_LEVEL, 12, SPECIES_NINJASK}},
    [SPECIES_TAILLOW]    = {{EVO_LEVEL, 14, SPECIES_SWELLOW}},
    [SPECIES_SHROOMISH]  = {{EVO_LEVEL, 14, SPECIES_BRELOOM}},
    [SPECIES_WINGULL]    = {{EVO_FRIENDSHIP, 0, SPECIES_PELIPPER}},
    [SPECIES_SURSKIT]    = {{EVO_FRIENDSHIP, 0, SPECIES_MASQUERAIN}},
    [SPECIES_WAILMER]    = {{EVO_LEVEL, 22, SPECIES_WAILORD}},
    [SPECIES_SKITTY]     = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_DELCATTY}},
    [SPECIES_BALTOY]     = {{EVO_FRIENDSHIP, 0, SPECIES_CLAYDOL}},
    [SPECIES_NOSEPASS]   = {{EVO_LEVEL, 16, SPECIES_PROBOPASS}},
    [SPECIES_BARBOACH]   = {{EVO_LEVEL, 16, SPECIES_WHISCASH}},
    [SPECIES_CORPHISH]   = {{EVO_LEVEL, 18, SPECIES_CRAWDAUNT}},
    [SPECIES_FEEBAS]     = {{EVO_FRIENDSHIP, 0, SPECIES_MILOTIC}},
    [SPECIES_CARVANHA]   = {{EVO_LEVEL, 16, SPECIES_SHARPEDO}},
    [SPECIES_TRAPINCH]   = {{EVO_LEVEL, 14, SPECIES_VIBRAVA}},
    [SPECIES_VIBRAVA]    = {{EVO_LEVEL, 45, SPECIES_FLYGON}},
    [SPECIES_MAKUHITA]   = {{EVO_LEVEL, 16, SPECIES_HARIYAMA}},
    [SPECIES_ELECTRIKE]  = {{EVO_LEVEL, 18, SPECIES_MANECTRIC}},
    /* [SPECIES_ROSELIA]    = {{EVO_ITEM, ITEM_SHINY_STONE, SPECIES_ROSERADE}}, */
    [SPECIES_NUMEL]      = {{EVO_LEVEL, 18, SPECIES_CAMERUPT}},
    [SPECIES_SPHEAL]     = {{EVO_LEVEL, 18, SPECIES_SEALEO}},
    [SPECIES_SEALEO]     = {{EVO_LEVEL, 30, SPECIES_WALREIN}},
    [SPECIES_CACNEA]     = {{EVO_LEVEL, 16, SPECIES_CACTURNE}},
    [SPECIES_SNORUNT]    = {{EVO_FRIENDSHIP, 0, SPECIES_GLALIE}},
    [SPECIES_AZURILL]    = {{EVO_FRIENDSHIP, 0, SPECIES_MARILL}},
    [SPECIES_SPOINK]     = {{EVO_FRIENDSHIP, 0, SPECIES_GRUMPIG}},
    [SPECIES_MEDITITE]   = {{EVO_LEVEL, 16, SPECIES_MEDICHAM}},
    [SPECIES_SWABLU]     = {{EVO_LEVEL, 16, SPECIES_ALTARIA}},
    [SPECIES_WYNAUT]     = {{EVO_FRIENDSHIP, 0, SPECIES_WOBBUFFET}},
    [SPECIES_DUSKULL]    = {{EVO_LEVEL, 18, SPECIES_DUSCLOPS}},
    [SPECIES_DUSCLOPS]   = {{EVO_LEVEL, 30, SPECIES_DUSKNOIR}},
    [SPECIES_SLAKOTH]    = {{EVO_LEVEL, 18, SPECIES_VIGOROTH}},
    [SPECIES_VIGOROTH]   = {{EVO_LEVEL, 30, SPECIES_SLAKING}},
    [SPECIES_GULPIN]     = {{EVO_LEVEL, 14, SPECIES_SWALOT}},
    [SPECIES_WHISMUR]    = {{EVO_LEVEL, 16, SPECIES_LOUDRED}},
    [SPECIES_LOUDRED]    = {{EVO_LEVEL, 30, SPECIES_EXPLOUD}},
    [SPECIES_CLAMPERL]   = {{EVO_FRIENDSHIP, 0, SPECIES_GOREBYSS}},
    [SPECIES_SHUPPET]    = {{EVO_LEVEL, 16, SPECIES_BANETTE}},
    [SPECIES_ARON]       = {{EVO_LEVEL, 16, SPECIES_LAIRON}},
    [SPECIES_LAIRON]     = {{EVO_LEVEL, 30, SPECIES_AGGRON}},
    [SPECIES_LILEEP]     = {{EVO_LEVEL, 18, SPECIES_CRADILY}},
    [SPECIES_ANORITH]    = {{EVO_LEVEL, 18, SPECIES_ARMALDO}},
    [SPECIES_RALTS]      = {{EVO_FRIENDSHIP, 0, SPECIES_KIRLIA}},
    [SPECIES_KIRLIA]     = {{EVO_LEVEL, 22, SPECIES_GARDEVOIR}},
    [SPECIES_BAGON]      = {{EVO_LEVEL, 22, SPECIES_SHELGON}},
    [SPECIES_SHELGON]    = {{EVO_LEVEL, 45, SPECIES_SALAMENCE}},
    [SPECIES_BELDUM]     = {{EVO_LEVEL, 20, SPECIES_METANG}},
    [SPECIES_METANG]     = {{EVO_LEVEL, 40, SPECIES_METAGROSS}},
    [SPECIES_TURTWIG]    = {{EVO_LEVEL, 16, SPECIES_GROTLE}},
    [SPECIES_GROTLE]     = {{EVO_LEVEL, 30, SPECIES_TORTERRA}},
    [SPECIES_CHIMCHAR]   = {{EVO_LEVEL, 16, SPECIES_MONFERNO}},
    [SPECIES_MONFERNO]   = {{EVO_LEVEL, 30, SPECIES_INFERNAPE}},
    [SPECIES_PIPLUP]     = {{EVO_LEVEL, 16, SPECIES_PRINPLUP}},
    [SPECIES_PRINPLUP]   = {{EVO_LEVEL, 30, SPECIES_EMPOLEON}},
    [SPECIES_STARLY]     = {{EVO_LEVEL, 14, SPECIES_STARAVIA}},
    [SPECIES_STARAVIA]   = {{EVO_LEVEL, 22, SPECIES_STARAPTOR}},
    [SPECIES_BIDOOF]     = {{EVO_LEVEL, 14, SPECIES_BIBAREL}},
    [SPECIES_KRICKETOT]  = {{EVO_LEVEL, 10, SPECIES_KRICKETUNE}},
    [SPECIES_SHINX]      = {{EVO_LEVEL, 14, SPECIES_LUXIO}},
    [SPECIES_LUXIO]      = {{EVO_LEVEL, 24, SPECIES_LUXRAY}},
    [SPECIES_BUDEW]      = {{EVO_FRIENDSHIP, 0, SPECIES_ROSELIA}},
    [SPECIES_CRANIDOS]   = {{EVO_LEVEL, 14, SPECIES_RAMPARDOS}},
    [SPECIES_SHIELDON]   = {{EVO_LEVEL, 14, SPECIES_BASTIODON}},
    [SPECIES_BURMY]      = {{EVO_LEVEL, 10, SPECIES_WORMADAM}},
    [SPECIES_COMBEE]     = {{EVO_FRIENDSHIP, 0, SPECIES_VESPIQUEN}},
    [SPECIES_BUIZEL]     = {{EVO_LEVEL, 16, SPECIES_FLOATZEL}},
    [SPECIES_CHERUBI]    = {{EVO_FRIENDSHIP, 0, SPECIES_CHERRIM}},
    [SPECIES_SHELLOS]    = {{EVO_LEVEL, 14, SPECIES_GASTRODON}},
    [SPECIES_DRIFLOON]   = {{EVO_LEVEL, 14, SPECIES_DRIFBLIM}},
    [SPECIES_BUNEARY]    = {{EVO_FRIENDSHIP, 0, SPECIES_LOPUNNY}},
    [SPECIES_GLAMEOW]    = {{EVO_LEVEL, 14, SPECIES_PURUGLY}},
    [SPECIES_CHINGLING]  = {{EVO_FRIENDSHIP, 0, SPECIES_CHIMECHO}},
    [SPECIES_STUNKY]     = {{EVO_LEVEL, 14, SPECIES_SKUNTANK}},
    [SPECIES_BRONZOR]    = {{EVO_LEVEL, 18, SPECIES_BRONZONG}},
    [SPECIES_BONSLY]     = {{EVO_FRIENDSHIP, 0, SPECIES_SUDOWOODO}},
    [SPECIES_MIME_JR]    = {{EVO_FRIENDSHIP, 0, SPECIES_MR_MIME}},
    [SPECIES_HAPPINY]    = {{EVO_FRIENDSHIP, 0, SPECIES_CHANSEY}},
    [SPECIES_GIBLE]      = {{EVO_LEVEL, 20, SPECIES_GABITE}},
    [SPECIES_GABITE]     = {{EVO_LEVEL, 40, SPECIES_GARCHOMP}},
    [SPECIES_MUNCHLAX]   = {{EVO_FRIENDSHIP, 0, SPECIES_SNORLAX}},
    [SPECIES_RIOLU]      = {{EVO_FRIENDSHIP, 0, SPECIES_LUCARIO}},
    [SPECIES_HIPPOPOTAS] = {{EVO_LEVEL, 14, SPECIES_HIPPOWDON}},
    [SPECIES_SKORUPI]    = {{EVO_LEVEL, 12, SPECIES_DRAPION}},
    [SPECIES_CROAGUNK]   = {{EVO_LEVEL, 16, SPECIES_TOXICROAK}},
    [SPECIES_FINNEON]    = {{EVO_LEVEL, 14, SPECIES_LUMINEON}},
    [SPECIES_MANTYKE]    = {{EVO_FRIENDSHIP, 0, SPECIES_MANTINE}},
    [SPECIES_SNOVER]     = {{EVO_LEVEL, 14, SPECIES_ABOMASNOW}},
    [SPECIES_SNIVY]      = {{EVO_LEVEL, 16, SPECIES_SERVINE}},
    [SPECIES_SERVINE]    = {{EVO_LEVEL, 30, SPECIES_SERPERIOR}},
    [SPECIES_TEPIG]      = {{EVO_LEVEL, 16, SPECIES_PIGNITE}},
    [SPECIES_PIGNITE]    = {{EVO_LEVEL, 30, SPECIES_EMBOAR}},
    [SPECIES_OSHAWOTT]   = {{EVO_LEVEL, 16, SPECIES_DEWOTT}},
    [SPECIES_DEWOTT]     = {{EVO_LEVEL, 30, SPECIES_SAMUROTT}},
    [SPECIES_LILLIPUP]   = {{EVO_LEVEL, 14, SPECIES_HERDIER}},
    [SPECIES_HERDIER]    = {{EVO_LEVEL, 20, SPECIES_STOUTLAND}},
    [SPECIES_PURRLOIN]   = {{EVO_LEVEL, 14, SPECIES_LIEPARD}},
    [SPECIES_PANSAGE]    = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_SIMISAGE}},
    [SPECIES_PANSEAR]    = {{EVO_ITEM, ITEM_FIRE_STONE, SPECIES_SIMISEAR}},
    [SPECIES_PANPOUR]    = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_SIMIPOUR}},
    [SPECIES_MUNNA]      = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_MUSHARNA}},
    [SPECIES_PIDOVE]     = {{EVO_LEVEL, 14, SPECIES_TRANQUILL}},
    [SPECIES_TRANQUILL]  = {{EVO_LEVEL, 22, SPECIES_UNFEZANT}},
    [SPECIES_BLITZLE]    = {{EVO_LEVEL, 16, SPECIES_ZEBSTRIKA}},
    [SPECIES_ROGGENROLA] = {{EVO_LEVEL, 12, SPECIES_BOLDORE}},
    [SPECIES_BOLDORE]    = {{EVO_LEVEL, 22, SPECIES_GIGALITH}},
    [SPECIES_WOOBAT]     = {{EVO_FRIENDSHIP, 0, SPECIES_SWOOBAT}},
    [SPECIES_DRILBUR]    = {{EVO_LEVEL, 14, SPECIES_EXCADRILL}},
    [SPECIES_TIMBURR]    = {{EVO_LEVEL, 16, SPECIES_GURDURR}},
    [SPECIES_GURDURR]    = {{EVO_LEVEL, 24, SPECIES_CONKELDURR}},
    [SPECIES_TYMPOLE]    = {{EVO_LEVEL, 12, SPECIES_PALPITOAD}},
    [SPECIES_PALPITOAD]  = {{EVO_LEVEL, 20, SPECIES_SEISMITOAD}},
    [SPECIES_SEWADDLE]   = {{EVO_LEVEL, 10, SPECIES_SWADLOON}},
    [SPECIES_SWADLOON]   = {{EVO_FRIENDSHIP, 0, SPECIES_LEAVANNY}},
    [SPECIES_VENIPEDE]   = {{EVO_LEVEL, 10, SPECIES_SWADLOON}},
    [SPECIES_WHIRLIPEDE] = {{EVO_LEVEL, 16, SPECIES_SCOLIPEDE}},
    [SPECIES_COTTONEE]   = {{EVO_ITEM, ITEM_SUN_STONE, SPECIES_WHIMSICOTT}},
    [SPECIES_PETILIL]    = {{EVO_ITEM, ITEM_SUN_STONE, SPECIES_LILLIGANT}},
};
