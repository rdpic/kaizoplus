const u16 *const gLevelUpLearnsets[NUM_SPECIES] =
{
    [SPECIES_NONE] = sBulbasaurLevelUpLearnset,
    [SPECIES_BULBASAUR] = sBulbasaurLevelUpLearnset,
    [SPECIES_IVYSAUR] = sIvysaurLevelUpLearnset,
    [SPECIES_VENUSAUR] = sVenusaurLevelUpLearnset,
    [SPECIES_CHARMANDER] = sCharmanderLevelUpLearnset,
    [SPECIES_CHARMELEON] = sCharmeleonLevelUpLearnset,
    [SPECIES_CHARIZARD] = sCharizardLevelUpLearnset,
    [SPECIES_SQUIRTLE] = sSquirtleLevelUpLearnset,
    [SPECIES_WARTORTLE] = sWartortleLevelUpLearnset,
    [SPECIES_BLASTOISE] = sBlastoiseLevelUpLearnset,
    [SPECIES_CATERPIE] = sCaterpieLevelUpLearnset,
    [SPECIES_METAPOD] = sMetapodLevelUpLearnset,
    [SPECIES_BUTTERFREE] = sButterfreeLevelUpLearnset,
    [SPECIES_WEEDLE] = sWeedleLevelUpLearnset,
    [SPECIES_KAKUNA] = sKakunaLevelUpLearnset,
    [SPECIES_BEEDRILL] = sBeedrillLevelUpLearnset,
    [SPECIES_PIDGEY] = sPidgeyLevelUpLearnset,
    [SPECIES_PIDGEOTTO] = sPidgeottoLevelUpLearnset,
    [SPECIES_PIDGEOT] = sPidgeotLevelUpLearnset,
    [SPECIES_RATTATA] = sRattataLevelUpLearnset,
    [SPECIES_RATICATE] = sRaticateLevelUpLearnset,
    [SPECIES_SPEAROW] = sSpearowLevelUpLearnset,
    [SPECIES_FEAROW] = sFearowLevelUpLearnset,
    [SPECIES_EKANS] = sEkansLevelUpLearnset,
    [SPECIES_ARBOK] = sArbokLevelUpLearnset,
    [SPECIES_PIKACHU] = sPikachuLevelUpLearnset,
    [SPECIES_RAICHU] = sRaichuLevelUpLearnset,
    [SPECIES_SANDSHREW] = sSandshrewLevelUpLearnset,
    [SPECIES_SANDSLASH] = sSandslashLevelUpLearnset,
    [SPECIES_NIDORAN_F] = sNidoranFLevelUpLearnset,
    [SPECIES_NIDORINA] = sNidorinaLevelUpLearnset,
    [SPECIES_NIDOQUEEN] = sNidoqueenLevelUpLearnset,
    [SPECIES_NIDORAN_M] = sNidoranMLevelUpLearnset,
    [SPECIES_NIDORINO] = sNidorinoLevelUpLearnset,
    [SPECIES_NIDOKING] = sNidokingLevelUpLearnset,
    [SPECIES_CLEFAIRY] = sClefairyLevelUpLearnset,
    [SPECIES_CLEFABLE] = sClefableLevelUpLearnset,
    [SPECIES_VULPIX] = sVulpixLevelUpLearnset,
    [SPECIES_NINETALES] = sNinetalesLevelUpLearnset,
    [SPECIES_JIGGLYPUFF] = sJigglypuffLevelUpLearnset,
    [SPECIES_WIGGLYTUFF] = sWigglytuffLevelUpLearnset,
    [SPECIES_ZUBAT] = sZubatLevelUpLearnset,
    [SPECIES_GOLBAT] = sGolbatLevelUpLearnset,
    [SPECIES_ODDISH] = sOddishLevelUpLearnset,
    [SPECIES_GLOOM] = sGloomLevelUpLearnset,
    [SPECIES_VILEPLUME] = sVileplumeLevelUpLearnset,
    [SPECIES_PARAS] = sParasLevelUpLearnset,
    [SPECIES_PARASECT] = sParasectLevelUpLearnset,
    [SPECIES_VENONAT] = sVenonatLevelUpLearnset,
    [SPECIES_VENOMOTH] = sVenomothLevelUpLearnset,
    [SPECIES_DIGLETT] = sDiglettLevelUpLearnset,
    [SPECIES_DUGTRIO] = sDugtrioLevelUpLearnset,
    [SPECIES_MEOWTH] = sMeowthLevelUpLearnset,
    [SPECIES_PERSIAN] = sPersianLevelUpLearnset,
    [SPECIES_PSYDUCK] = sPsyduckLevelUpLearnset,
    [SPECIES_GOLDUCK] = sGolduckLevelUpLearnset,
    [SPECIES_MANKEY] = sMankeyLevelUpLearnset,
    [SPECIES_PRIMEAPE] = sPrimeapeLevelUpLearnset,
    [SPECIES_GROWLITHE] = sGrowlitheLevelUpLearnset,
    [SPECIES_ARCANINE] = sArcanineLevelUpLearnset,
    [SPECIES_POLIWAG] = sPoliwagLevelUpLearnset,
    [SPECIES_POLIWHIRL] = sPoliwhirlLevelUpLearnset,
    [SPECIES_POLIWRATH] = sPoliwrathLevelUpLearnset,
    [SPECIES_ABRA] = sAbraLevelUpLearnset,
    [SPECIES_KADABRA] = sKadabraLevelUpLearnset,
    [SPECIES_ALAKAZAM] = sAlakazamLevelUpLearnset,
    [SPECIES_MACHOP] = sMachopLevelUpLearnset,
    [SPECIES_MACHOKE] = sMachokeLevelUpLearnset,
    [SPECIES_MACHAMP] = sMachampLevelUpLearnset,
    [SPECIES_BELLSPROUT] = sBellsproutLevelUpLearnset,
    [SPECIES_WEEPINBELL] = sWeepinbellLevelUpLearnset,
    [SPECIES_VICTREEBEL] = sVictreebelLevelUpLearnset,
    [SPECIES_TENTACOOL] = sTentacoolLevelUpLearnset,
    [SPECIES_TENTACRUEL] = sTentacruelLevelUpLearnset,
    [SPECIES_GEODUDE] = sGeodudeLevelUpLearnset,
    [SPECIES_GRAVELER] = sGravelerLevelUpLearnset,
    [SPECIES_GOLEM] = sGolemLevelUpLearnset,
    [SPECIES_PONYTA] = sPonytaLevelUpLearnset,
    [SPECIES_RAPIDASH] = sRapidashLevelUpLearnset,
    [SPECIES_SLOWPOKE] = sSlowpokeLevelUpLearnset,
    [SPECIES_SLOWBRO] = sSlowbroLevelUpLearnset,
    [SPECIES_MAGNEMITE] = sMagnemiteLevelUpLearnset,
    [SPECIES_MAGNETON] = sMagnetonLevelUpLearnset,
    [SPECIES_FARFETCHD] = sFarfetchdLevelUpLearnset,
    [SPECIES_DODUO] = sDoduoLevelUpLearnset,
    [SPECIES_DODRIO] = sDodrioLevelUpLearnset,
    [SPECIES_SEEL] = sSeelLevelUpLearnset,
    [SPECIES_DEWGONG] = sDewgongLevelUpLearnset,
    [SPECIES_GRIMER] = sGrimerLevelUpLearnset,
    [SPECIES_MUK] = sMukLevelUpLearnset,
    [SPECIES_SHELLDER] = sShellderLevelUpLearnset,
    [SPECIES_CLOYSTER] = sCloysterLevelUpLearnset,
    [SPECIES_GASTLY] = sGastlyLevelUpLearnset,
    [SPECIES_HAUNTER] = sHaunterLevelUpLearnset,
    [SPECIES_GENGAR] = sGengarLevelUpLearnset,
    [SPECIES_ONIX] = sOnixLevelUpLearnset,
    [SPECIES_DROWZEE] = sDrowzeeLevelUpLearnset,
    [SPECIES_HYPNO] = sHypnoLevelUpLearnset,
    [SPECIES_KRABBY] = sKrabbyLevelUpLearnset,
    [SPECIES_KINGLER] = sKinglerLevelUpLearnset,
    [SPECIES_VOLTORB] = sVoltorbLevelUpLearnset,
    [SPECIES_ELECTRODE] = sElectrodeLevelUpLearnset,
    [SPECIES_EXEGGCUTE] = sExeggcuteLevelUpLearnset,
    [SPECIES_EXEGGUTOR] = sExeggutorLevelUpLearnset,
    [SPECIES_CUBONE] = sCuboneLevelUpLearnset,
    [SPECIES_MAROWAK] = sMarowakLevelUpLearnset,
    [SPECIES_HITMONLEE] = sHitmonleeLevelUpLearnset,
    [SPECIES_HITMONCHAN] = sHitmonchanLevelUpLearnset,
    [SPECIES_LICKITUNG] = sLickitungLevelUpLearnset,
    [SPECIES_KOFFING] = sKoffingLevelUpLearnset,
    [SPECIES_WEEZING] = sWeezingLevelUpLearnset,
    [SPECIES_RHYHORN] = sRhyhornLevelUpLearnset,
    [SPECIES_RHYDON] = sRhydonLevelUpLearnset,
    [SPECIES_CHANSEY] = sChanseyLevelUpLearnset,
    [SPECIES_TANGELA] = sTangelaLevelUpLearnset,
    [SPECIES_KANGASKHAN] = sKangaskhanLevelUpLearnset,
    [SPECIES_HORSEA] = sHorseaLevelUpLearnset,
    [SPECIES_SEADRA] = sSeadraLevelUpLearnset,
    [SPECIES_GOLDEEN] = sGoldeenLevelUpLearnset,
    [SPECIES_SEAKING] = sSeakingLevelUpLearnset,
    [SPECIES_STARYU] = sStaryuLevelUpLearnset,
    [SPECIES_STARMIE] = sStarmieLevelUpLearnset,
    [SPECIES_MR_MIME] = sMrMimeLevelUpLearnset,
    [SPECIES_SCYTHER] = sScytherLevelUpLearnset,
    [SPECIES_JYNX] = sJynxLevelUpLearnset,
    [SPECIES_ELECTABUZZ] = sElectabuzzLevelUpLearnset,
    [SPECIES_MAGMAR] = sMagmarLevelUpLearnset,
    [SPECIES_PINSIR] = sPinsirLevelUpLearnset,
    [SPECIES_TAUROS] = sTaurosLevelUpLearnset,
    [SPECIES_MAGIKARP] = sMagikarpLevelUpLearnset,
    [SPECIES_GYARADOS] = sGyaradosLevelUpLearnset,
    [SPECIES_LAPRAS] = sLaprasLevelUpLearnset,
    [SPECIES_DITTO] = sDittoLevelUpLearnset,
    [SPECIES_EEVEE] = sEeveeLevelUpLearnset,
    [SPECIES_VAPOREON] = sVaporeonLevelUpLearnset,
    [SPECIES_JOLTEON] = sJolteonLevelUpLearnset,
    [SPECIES_FLAREON] = sFlareonLevelUpLearnset,
    [SPECIES_PORYGON] = sPorygonLevelUpLearnset,
    [SPECIES_OMANYTE] = sOmanyteLevelUpLearnset,
    [SPECIES_OMASTAR] = sOmastarLevelUpLearnset,
    [SPECIES_KABUTO] = sKabutoLevelUpLearnset,
    [SPECIES_KABUTOPS] = sKabutopsLevelUpLearnset,
    [SPECIES_AERODACTYL] = sAerodactylLevelUpLearnset,
    [SPECIES_SNORLAX] = sSnorlaxLevelUpLearnset,
    [SPECIES_ARTICUNO] = sArticunoLevelUpLearnset,
    [SPECIES_ZAPDOS] = sZapdosLevelUpLearnset,
    [SPECIES_MOLTRES] = sMoltresLevelUpLearnset,
    [SPECIES_DRATINI] = sDratiniLevelUpLearnset,
    [SPECIES_DRAGONAIR] = sDragonairLevelUpLearnset,
    [SPECIES_DRAGONITE] = sDragoniteLevelUpLearnset,
    [SPECIES_MEWTWO] = sMewtwoLevelUpLearnset,
    [SPECIES_MEW] = sMewLevelUpLearnset,
    [SPECIES_CHIKORITA] = sChikoritaLevelUpLearnset,
    [SPECIES_BAYLEEF] = sBayleefLevelUpLearnset,
    [SPECIES_MEGANIUM] = sMeganiumLevelUpLearnset,
    [SPECIES_CYNDAQUIL] = sCyndaquilLevelUpLearnset,
    [SPECIES_QUILAVA] = sQuilavaLevelUpLearnset,
    [SPECIES_TYPHLOSION] = sTyphlosionLevelUpLearnset,
    [SPECIES_TOTODILE] = sTotodileLevelUpLearnset,
    [SPECIES_CROCONAW] = sCroconawLevelUpLearnset,
    [SPECIES_FERALIGATR] = sFeraligatrLevelUpLearnset,
    [SPECIES_SENTRET] = sSentretLevelUpLearnset,
    [SPECIES_FURRET] = sFurretLevelUpLearnset,
    [SPECIES_HOOTHOOT] = sHoothootLevelUpLearnset,
    [SPECIES_NOCTOWL] = sNoctowlLevelUpLearnset,
    [SPECIES_LEDYBA] = sLedybaLevelUpLearnset,
    [SPECIES_LEDIAN] = sLedianLevelUpLearnset,
    [SPECIES_SPINARAK] = sSpinarakLevelUpLearnset,
    [SPECIES_ARIADOS] = sAriadosLevelUpLearnset,
    [SPECIES_CROBAT] = sCrobatLevelUpLearnset,
    [SPECIES_CHINCHOU] = sChinchouLevelUpLearnset,
    [SPECIES_LANTURN] = sLanturnLevelUpLearnset,
    [SPECIES_PICHU] = sPichuLevelUpLearnset,
    [SPECIES_CLEFFA] = sCleffaLevelUpLearnset,
    [SPECIES_IGGLYBUFF] = sIgglybuffLevelUpLearnset,
    [SPECIES_TOGEPI] = sTogepiLevelUpLearnset,
    [SPECIES_TOGETIC] = sTogeticLevelUpLearnset,
    [SPECIES_NATU] = sNatuLevelUpLearnset,
    [SPECIES_XATU] = sXatuLevelUpLearnset,
    [SPECIES_MAREEP] = sMareepLevelUpLearnset,
    [SPECIES_FLAAFFY] = sFlaaffyLevelUpLearnset,
    [SPECIES_AMPHAROS] = sAmpharosLevelUpLearnset,
    [SPECIES_BELLOSSOM] = sBellossomLevelUpLearnset,
    [SPECIES_MARILL] = sMarillLevelUpLearnset,
    [SPECIES_AZUMARILL] = sAzumarillLevelUpLearnset,
    [SPECIES_SUDOWOODO] = sSudowoodoLevelUpLearnset,
    [SPECIES_POLITOED] = sPolitoedLevelUpLearnset,
    [SPECIES_HOPPIP] = sHoppipLevelUpLearnset,
    [SPECIES_SKIPLOOM] = sSkiploomLevelUpLearnset,
    [SPECIES_JUMPLUFF] = sJumpluffLevelUpLearnset,
    [SPECIES_AIPOM] = sAipomLevelUpLearnset,
    [SPECIES_SUNKERN] = sSunkernLevelUpLearnset,
    [SPECIES_SUNFLORA] = sSunfloraLevelUpLearnset,
    [SPECIES_YANMA] = sYanmaLevelUpLearnset,
    [SPECIES_WOOPER] = sWooperLevelUpLearnset,
    [SPECIES_QUAGSIRE] = sQuagsireLevelUpLearnset,
    [SPECIES_ESPEON] = sEspeonLevelUpLearnset,
    [SPECIES_UMBREON] = sUmbreonLevelUpLearnset,
    [SPECIES_MURKROW] = sMurkrowLevelUpLearnset,
    [SPECIES_SLOWKING] = sSlowkingLevelUpLearnset,
    [SPECIES_MISDREAVUS] = sMisdreavusLevelUpLearnset,
    [SPECIES_UNOWN] = sUnownLevelUpLearnset,
    [SPECIES_WOBBUFFET] = sWobbuffetLevelUpLearnset,
    [SPECIES_GIRAFARIG] = sGirafarigLevelUpLearnset,
    [SPECIES_PINECO] = sPinecoLevelUpLearnset,
    [SPECIES_FORRETRESS] = sForretressLevelUpLearnset,
    [SPECIES_DUNSPARCE] = sDunsparceLevelUpLearnset,
    [SPECIES_GLIGAR] = sGligarLevelUpLearnset,
    [SPECIES_STEELIX] = sSteelixLevelUpLearnset,
    [SPECIES_SNUBBULL] = sSnubbullLevelUpLearnset,
    [SPECIES_GRANBULL] = sGranbullLevelUpLearnset,
    [SPECIES_QWILFISH] = sQwilfishLevelUpLearnset,
    [SPECIES_SCIZOR] = sScizorLevelUpLearnset,
    [SPECIES_SHUCKLE] = sShuckleLevelUpLearnset,
    [SPECIES_HERACROSS] = sHeracrossLevelUpLearnset,
    [SPECIES_SNEASEL] = sSneaselLevelUpLearnset,
    [SPECIES_TEDDIURSA] = sTeddiursaLevelUpLearnset,
    [SPECIES_URSARING] = sUrsaringLevelUpLearnset,
    [SPECIES_SLUGMA] = sSlugmaLevelUpLearnset,
    [SPECIES_MAGCARGO] = sMagcargoLevelUpLearnset,
    [SPECIES_SWINUB] = sSwinubLevelUpLearnset,
    [SPECIES_PILOSWINE] = sPiloswineLevelUpLearnset,
    [SPECIES_CORSOLA] = sCorsolaLevelUpLearnset,
    [SPECIES_REMORAID] = sRemoraidLevelUpLearnset,
    [SPECIES_OCTILLERY] = sOctilleryLevelUpLearnset,
    [SPECIES_DELIBIRD] = sDelibirdLevelUpLearnset,
    [SPECIES_MANTINE] = sMantineLevelUpLearnset,
    [SPECIES_SKARMORY] = sSkarmoryLevelUpLearnset,
    [SPECIES_HOUNDOUR] = sHoundourLevelUpLearnset,
    [SPECIES_HOUNDOOM] = sHoundoomLevelUpLearnset,
    [SPECIES_KINGDRA] = sKingdraLevelUpLearnset,
    [SPECIES_PHANPY] = sPhanpyLevelUpLearnset,
    [SPECIES_DONPHAN] = sDonphanLevelUpLearnset,
    [SPECIES_PORYGON2] = sPorygon2LevelUpLearnset,
    [SPECIES_STANTLER] = sStantlerLevelUpLearnset,
    [SPECIES_SMEARGLE] = sSmeargleLevelUpLearnset,
    [SPECIES_TYROGUE] = sTyrogueLevelUpLearnset,
    [SPECIES_HITMONTOP] = sHitmontopLevelUpLearnset,
    [SPECIES_SMOOCHUM] = sSmoochumLevelUpLearnset,
    [SPECIES_ELEKID] = sElekidLevelUpLearnset,
    [SPECIES_MAGBY] = sMagbyLevelUpLearnset,
    [SPECIES_MILTANK] = sMiltankLevelUpLearnset,
    [SPECIES_BLISSEY] = sBlisseyLevelUpLearnset,
    [SPECIES_RAIKOU] = sRaikouLevelUpLearnset,
    [SPECIES_ENTEI] = sEnteiLevelUpLearnset,
    [SPECIES_SUICUNE] = sSuicuneLevelUpLearnset,
    [SPECIES_LARVITAR] = sLarvitarLevelUpLearnset,
    [SPECIES_PUPITAR] = sPupitarLevelUpLearnset,
    [SPECIES_TYRANITAR] = sTyranitarLevelUpLearnset,
    [SPECIES_LUGIA] = sLugiaLevelUpLearnset,
    [SPECIES_HO_OH] = sHoOhLevelUpLearnset,
    [SPECIES_CELEBI] = sCelebiLevelUpLearnset,
    [SPECIES_OLD_UNOWN_B] = sSpecies252LevelUpLearnset,
    [SPECIES_OLD_UNOWN_C] = sSpecies253LevelUpLearnset,
    [SPECIES_OLD_UNOWN_D] = sSpecies254LevelUpLearnset,
    [SPECIES_OLD_UNOWN_E] = sSpecies255LevelUpLearnset,
    [SPECIES_OLD_UNOWN_F] = sSpecies256LevelUpLearnset,
    [SPECIES_OLD_UNOWN_G] = sSpecies257LevelUpLearnset,
    [SPECIES_OLD_UNOWN_H] = sSpecies258LevelUpLearnset,
    [SPECIES_OLD_UNOWN_I] = sSpecies259LevelUpLearnset,
    [SPECIES_OLD_UNOWN_J] = sSpecies260LevelUpLearnset,
    [SPECIES_OLD_UNOWN_K] = sSpecies261LevelUpLearnset,
    [SPECIES_OLD_UNOWN_L] = sSpecies262LevelUpLearnset,
    [SPECIES_OLD_UNOWN_M] = sSpecies263LevelUpLearnset,
    [SPECIES_OLD_UNOWN_N] = sSpecies264LevelUpLearnset,
    [SPECIES_OLD_UNOWN_O] = sSpecies265LevelUpLearnset,
    [SPECIES_OLD_UNOWN_P] = sSpecies266LevelUpLearnset,
    [SPECIES_OLD_UNOWN_Q] = sSpecies267LevelUpLearnset,
    [SPECIES_OLD_UNOWN_R] = sSpecies268LevelUpLearnset,
    [SPECIES_OLD_UNOWN_S] = sSpecies269LevelUpLearnset,
    [SPECIES_OLD_UNOWN_T] = sSpecies270LevelUpLearnset,
    [SPECIES_OLD_UNOWN_U] = sSpecies271LevelUpLearnset,
    [SPECIES_OLD_UNOWN_V] = sSpecies272LevelUpLearnset,
    [SPECIES_OLD_UNOWN_W] = sSpecies273LevelUpLearnset,
    [SPECIES_OLD_UNOWN_X] = sSpecies274LevelUpLearnset,
    [SPECIES_OLD_UNOWN_Y] = sSpecies275LevelUpLearnset,
    [SPECIES_OLD_UNOWN_Z] = sSpecies276LevelUpLearnset,
    [SPECIES_TREECKO] = sTreeckoLevelUpLearnset,
    [SPECIES_GROVYLE] = sGrovyleLevelUpLearnset,
    [SPECIES_SCEPTILE] = sSceptileLevelUpLearnset,
    [SPECIES_TORCHIC] = sTorchicLevelUpLearnset,
    [SPECIES_COMBUSKEN] = sCombuskenLevelUpLearnset,
    [SPECIES_BLAZIKEN] = sBlazikenLevelUpLearnset,
    [SPECIES_MUDKIP] = sMudkipLevelUpLearnset,
    [SPECIES_MARSHTOMP] = sMarshtompLevelUpLearnset,
    [SPECIES_SWAMPERT] = sSwampertLevelUpLearnset,
    [SPECIES_POOCHYENA] = sPoochyenaLevelUpLearnset,
    [SPECIES_MIGHTYENA] = sMightyenaLevelUpLearnset,
    [SPECIES_ZIGZAGOON] = sZigzagoonLevelUpLearnset,
    [SPECIES_LINOONE] = sLinooneLevelUpLearnset,
    [SPECIES_WURMPLE] = sWurmpleLevelUpLearnset,
    [SPECIES_SILCOON] = sSilcoonLevelUpLearnset,
    [SPECIES_BEAUTIFLY] = sBeautiflyLevelUpLearnset,
    [SPECIES_CASCOON] = sCascoonLevelUpLearnset,
    [SPECIES_DUSTOX] = sDustoxLevelUpLearnset,
    [SPECIES_LOTAD] = sLotadLevelUpLearnset,
    [SPECIES_LOMBRE] = sLombreLevelUpLearnset,
    [SPECIES_LUDICOLO] = sLudicoloLevelUpLearnset,
    [SPECIES_SEEDOT] = sSeedotLevelUpLearnset,
    [SPECIES_NUZLEAF] = sNuzleafLevelUpLearnset,
    [SPECIES_SHIFTRY] = sShiftryLevelUpLearnset,
    [SPECIES_NINCADA] = sNincadaLevelUpLearnset,
    [SPECIES_NINJASK] = sNinjaskLevelUpLearnset,
    [SPECIES_SHEDINJA] = sShedinjaLevelUpLearnset,
    [SPECIES_TAILLOW] = sTaillowLevelUpLearnset,
    [SPECIES_SWELLOW] = sSwellowLevelUpLearnset,
    [SPECIES_SHROOMISH] = sShroomishLevelUpLearnset,
    [SPECIES_BRELOOM] = sBreloomLevelUpLearnset,
    [SPECIES_SPINDA] = sSpindaLevelUpLearnset,
    [SPECIES_WINGULL] = sWingullLevelUpLearnset,
    [SPECIES_PELIPPER] = sPelipperLevelUpLearnset,
    [SPECIES_SURSKIT] = sSurskitLevelUpLearnset,
    [SPECIES_MASQUERAIN] = sMasquerainLevelUpLearnset,
    [SPECIES_WAILMER] = sWailmerLevelUpLearnset,
    [SPECIES_WAILORD] = sWailordLevelUpLearnset,
    [SPECIES_SKITTY] = sSkittyLevelUpLearnset,
    [SPECIES_DELCATTY] = sDelcattyLevelUpLearnset,
    [SPECIES_KECLEON] = sKecleonLevelUpLearnset,
    [SPECIES_BALTOY] = sBaltoyLevelUpLearnset,
    [SPECIES_CLAYDOL] = sClaydolLevelUpLearnset,
    [SPECIES_NOSEPASS] = sNosepassLevelUpLearnset,
    [SPECIES_TORKOAL] = sTorkoalLevelUpLearnset,
    [SPECIES_SABLEYE] = sSableyeLevelUpLearnset,
    [SPECIES_BARBOACH] = sBarboachLevelUpLearnset,
    [SPECIES_WHISCASH] = sWhiscashLevelUpLearnset,
    [SPECIES_LUVDISC] = sLuvdiscLevelUpLearnset,
    [SPECIES_CORPHISH] = sCorphishLevelUpLearnset,
    [SPECIES_CRAWDAUNT] = sCrawdauntLevelUpLearnset,
    [SPECIES_FEEBAS] = sFeebasLevelUpLearnset,
    [SPECIES_MILOTIC] = sMiloticLevelUpLearnset,
    [SPECIES_CARVANHA] = sCarvanhaLevelUpLearnset,
    [SPECIES_SHARPEDO] = sSharpedoLevelUpLearnset,
    [SPECIES_TRAPINCH] = sTrapinchLevelUpLearnset,
    [SPECIES_VIBRAVA] = sVibravaLevelUpLearnset,
    [SPECIES_FLYGON] = sFlygonLevelUpLearnset,
    [SPECIES_MAKUHITA] = sMakuhitaLevelUpLearnset,
    [SPECIES_HARIYAMA] = sHariyamaLevelUpLearnset,
    [SPECIES_ELECTRIKE] = sElectrikeLevelUpLearnset,
    [SPECIES_MANECTRIC] = sManectricLevelUpLearnset,
    [SPECIES_NUMEL] = sNumelLevelUpLearnset,
    [SPECIES_CAMERUPT] = sCameruptLevelUpLearnset,
    [SPECIES_SPHEAL] = sSphealLevelUpLearnset,
    [SPECIES_SEALEO] = sSealeoLevelUpLearnset,
    [SPECIES_WALREIN] = sWalreinLevelUpLearnset,
    [SPECIES_CACNEA] = sCacneaLevelUpLearnset,
    [SPECIES_CACTURNE] = sCacturneLevelUpLearnset,
    [SPECIES_SNORUNT] = sSnoruntLevelUpLearnset,
    [SPECIES_GLALIE] = sGlalieLevelUpLearnset,
    [SPECIES_LUNATONE] = sLunatoneLevelUpLearnset,
    [SPECIES_SOLROCK] = sSolrockLevelUpLearnset,
    [SPECIES_AZURILL] = sAzurillLevelUpLearnset,
    [SPECIES_SPOINK] = sSpoinkLevelUpLearnset,
    [SPECIES_GRUMPIG] = sGrumpigLevelUpLearnset,
    [SPECIES_PLUSLE] = sPlusleLevelUpLearnset,
    [SPECIES_MINUN] = sMinunLevelUpLearnset,
    [SPECIES_MAWILE] = sMawileLevelUpLearnset,
    [SPECIES_MEDITITE] = sMedititeLevelUpLearnset,
    [SPECIES_MEDICHAM] = sMedichamLevelUpLearnset,
    [SPECIES_SWABLU] = sSwabluLevelUpLearnset,
    [SPECIES_ALTARIA] = sAltariaLevelUpLearnset,
    [SPECIES_WYNAUT] = sWynautLevelUpLearnset,
    [SPECIES_DUSKULL] = sDuskullLevelUpLearnset,
    [SPECIES_DUSCLOPS] = sDusclopsLevelUpLearnset,
    [SPECIES_ROSELIA] = sRoseliaLevelUpLearnset,
    [SPECIES_SLAKOTH] = sSlakothLevelUpLearnset,
    [SPECIES_VIGOROTH] = sVigorothLevelUpLearnset,
    [SPECIES_SLAKING] = sSlakingLevelUpLearnset,
    [SPECIES_GULPIN] = sGulpinLevelUpLearnset,
    [SPECIES_SWALOT] = sSwalotLevelUpLearnset,
    [SPECIES_TROPIUS] = sTropiusLevelUpLearnset,
    [SPECIES_WHISMUR] = sWhismurLevelUpLearnset,
    [SPECIES_LOUDRED] = sLoudredLevelUpLearnset,
    [SPECIES_EXPLOUD] = sExploudLevelUpLearnset,
    [SPECIES_CLAMPERL] = sClamperlLevelUpLearnset,
    [SPECIES_HUNTAIL] = sHuntailLevelUpLearnset,
    [SPECIES_GOREBYSS] = sGorebyssLevelUpLearnset,
    [SPECIES_ABSOL] = sAbsolLevelUpLearnset,
    [SPECIES_SHUPPET] = sShuppetLevelUpLearnset,
    [SPECIES_BANETTE] = sBanetteLevelUpLearnset,
    [SPECIES_SEVIPER] = sSeviperLevelUpLearnset,
    [SPECIES_ZANGOOSE] = sZangooseLevelUpLearnset,
    [SPECIES_RELICANTH] = sRelicanthLevelUpLearnset,
    [SPECIES_ARON] = sAronLevelUpLearnset,
    [SPECIES_LAIRON] = sLaironLevelUpLearnset,
    [SPECIES_AGGRON] = sAggronLevelUpLearnset,
    [SPECIES_CASTFORM] = sCastformLevelUpLearnset,
    [SPECIES_VOLBEAT] = sVolbeatLevelUpLearnset,
    [SPECIES_ILLUMISE] = sIllumiseLevelUpLearnset,
    [SPECIES_LILEEP] = sLileepLevelUpLearnset,
    [SPECIES_CRADILY] = sCradilyLevelUpLearnset,
    [SPECIES_ANORITH] = sAnorithLevelUpLearnset,
    [SPECIES_ARMALDO] = sArmaldoLevelUpLearnset,
    [SPECIES_RALTS] = sRaltsLevelUpLearnset,
    [SPECIES_KIRLIA] = sKirliaLevelUpLearnset,
    [SPECIES_GARDEVOIR] = sGardevoirLevelUpLearnset,
    [SPECIES_BAGON] = sBagonLevelUpLearnset,
    [SPECIES_SHELGON] = sShelgonLevelUpLearnset,
    [SPECIES_SALAMENCE] = sSalamenceLevelUpLearnset,
    [SPECIES_BELDUM] = sBeldumLevelUpLearnset,
    [SPECIES_METANG] = sMetangLevelUpLearnset,
    [SPECIES_METAGROSS] = sMetagrossLevelUpLearnset,
    [SPECIES_REGIROCK] = sRegirockLevelUpLearnset,
    [SPECIES_REGICE] = sRegiceLevelUpLearnset,
    [SPECIES_REGISTEEL] = sRegisteelLevelUpLearnset,
    [SPECIES_KYOGRE] = sKyogreLevelUpLearnset,
    [SPECIES_GROUDON] = sGroudonLevelUpLearnset,
    [SPECIES_RAYQUAZA] = sRayquazaLevelUpLearnset,
    [SPECIES_LATIAS] = sLatiasLevelUpLearnset,
    [SPECIES_LATIOS] = sLatiosLevelUpLearnset,
    [SPECIES_JIRACHI] = sJirachiLevelUpLearnset,
    [SPECIES_DEOXYS] = sDeoxysLevelUpLearnset,
    [SPECIES_CHIMECHO] = sChimechoLevelUpLearnset,
    [SPECIES_TURTWIG] = sTurtwigLevelUpLearnset,
    [SPECIES_GROTLE] = sGrotleLevelUpLearnset,
    [SPECIES_TORTERRA] = sTorterraLevelUpLearnset,
    [SPECIES_CHIMCHAR] = sChimcharLevelUpLearnset,
    [SPECIES_MONFERNO] = sMonfernoLevelUpLearnset,
    [SPECIES_INFERNAPE] = sInfernapeLevelUpLearnset,
    [SPECIES_PIPLUP] = sPiplupLevelUpLearnset,
    [SPECIES_PRINPLUP] = sPrinplupLevelUpLearnset,
    [SPECIES_EMPOLEON] = sEmpoleonLevelUpLearnset,
    [SPECIES_STARLY] = sStarlyLevelUpLearnset,
    [SPECIES_STARAVIA] = sStaraviaLevelUpLearnset,
    [SPECIES_STARAPTOR] = sStaraptorLevelUpLearnset,
    [SPECIES_BIDOOF] = sBidoofLevelUpLearnset,
    [SPECIES_BIBAREL] = sBibarelLevelUpLearnset,
    [SPECIES_KRICKETOT] = sKricketotLevelUpLearnset,
    [SPECIES_KRICKETUNE] = sKricketuneLevelUpLearnset,
    [SPECIES_SHINX] = sShinxLevelUpLearnset,
    [SPECIES_LUXIO] = sLuxioLevelUpLearnset,
    [SPECIES_LUXRAY] = sLuxrayLevelUpLearnset,
    [SPECIES_BUDEW] = sBudewLevelUpLearnset,
    [SPECIES_ROSERADE] = sRoseradeLevelUpLearnset,
    [SPECIES_CRANIDOS] = sCranidosLevelUpLearnset,
    [SPECIES_RAMPARDOS] = sRampardosLevelUpLearnset,
    [SPECIES_SHIELDON] = sShieldonLevelUpLearnset,
    [SPECIES_BASTIODON] = sBastiodonLevelUpLearnset,
    [SPECIES_BURMY] = sBurmyLevelUpLearnset,
    [SPECIES_WORMADAM] = sWormadamLevelUpLearnset,
    [SPECIES_MOTHIM] = sMothimLevelUpLearnset,
    [SPECIES_COMBEE] = sCombeeLevelUpLearnset,
    [SPECIES_VESPIQUEN] = sVespiquenLevelUpLearnset,
    [SPECIES_PACHIRISU] = sPachirisuLevelUpLearnset,
    [SPECIES_BUIZEL] = sBuizelLevelUpLearnset,
    [SPECIES_FLOATZEL] = sFloatzelLevelUpLearnset,
    [SPECIES_CHERUBI] = sCherubiLevelUpLearnset,
    [SPECIES_CHERRIM] = sCherrimLevelUpLearnset,
    [SPECIES_SHELLOS] = sShellosLevelUpLearnset,
    [SPECIES_GASTRODON] = sGastrodonLevelUpLearnset,
    [SPECIES_AMBIPOM] = sAmbipomLevelUpLearnset,
    [SPECIES_DRIFLOON] = sDrifloonLevelUpLearnset,
    [SPECIES_DRIFBLIM] = sDrifblimLevelUpLearnset,
    [SPECIES_BUNEARY] = sBunearyLevelUpLearnset,
    [SPECIES_LOPUNNY] = sLopunnyLevelUpLearnset,
    [SPECIES_MISMAGIUS] = sMismagiusLevelUpLearnset,
    [SPECIES_HONCHKROW] = sHonchkrowLevelUpLearnset,
    [SPECIES_GLAMEOW] = sGlameowLevelUpLearnset,
    [SPECIES_PURUGLY] = sPuruglyLevelUpLearnset,
    [SPECIES_CHINGLING] = sChinglingLevelUpLearnset,
    [SPECIES_STUNKY] = sStunkyLevelUpLearnset,
    [SPECIES_SKUNTANK] = sSkuntankLevelUpLearnset,
    [SPECIES_BRONZOR] = sBronzorLevelUpLearnset,
    [SPECIES_BRONZONG] = sBronzongLevelUpLearnset,
    [SPECIES_BONSLY] = sBonslyLevelUpLearnset,
    [SPECIES_MIME_JR] = sMimeJrLevelUpLearnset,
    [SPECIES_HAPPINY] = sHappinyLevelUpLearnset,
    [SPECIES_CHATOT] = sChatotLevelUpLearnset,
    [SPECIES_SPIRITOMB] = sSpiritombLevelUpLearnset,
    [SPECIES_GIBLE] = sGibleLevelUpLearnset,
    [SPECIES_GABITE] = sGabiteLevelUpLearnset,
    [SPECIES_GARCHOMP] = sGarchompLevelUpLearnset,
    [SPECIES_MUNCHLAX] = sMunchlaxLevelUpLearnset,
    [SPECIES_RIOLU] = sRioluLevelUpLearnset,
    [SPECIES_LUCARIO] = sLucarioLevelUpLearnset,
    [SPECIES_HIPPOPOTAS] = sHippopotasLevelUpLearnset,
    [SPECIES_HIPPOWDON] = sHippowdonLevelUpLearnset,
    [SPECIES_SKORUPI] = sSkorupiLevelUpLearnset,
    [SPECIES_DRAPION] = sDrapionLevelUpLearnset,
    [SPECIES_CROAGUNK] = sCroagunkLevelUpLearnset,
    [SPECIES_TOXICROAK] = sToxicroakLevelUpLearnset,
    [SPECIES_CARNIVINE] = sCarnivineLevelUpLearnset,
    [SPECIES_FINNEON] = sFinneonLevelUpLearnset,
    [SPECIES_LUMINEON] = sLumineonLevelUpLearnset,
    [SPECIES_MANTYKE] = sMantykeLevelUpLearnset,
    [SPECIES_SNOVER] = sSnoverLevelUpLearnset,
    [SPECIES_ABOMASNOW] = sAbomasnowLevelUpLearnset,
    [SPECIES_WEAVILE] = sWeavileLevelUpLearnset,
    [SPECIES_MAGNEZONE] = sMagnezoneLevelUpLearnset,
    [SPECIES_LICKILICKY] = sLickilickyLevelUpLearnset,
    [SPECIES_RHYPERIOR] = sRhyperiorLevelUpLearnset,
    [SPECIES_TANGROWTH] = sTangrowthLevelUpLearnset,
    [SPECIES_ELECTIVIRE] = sElectivireLevelUpLearnset,
    [SPECIES_MAGMORTAR] = sMagmortarLevelUpLearnset,
    [SPECIES_TOGEKISS] = sTogekissLevelUpLearnset,
    [SPECIES_YANMEGA] = sYanmegaLevelUpLearnset,
    [SPECIES_LEAFEON] = sLeafeonLevelUpLearnset,
    [SPECIES_GLACEON] = sGlaceonLevelUpLearnset,
    [SPECIES_GLISCOR] = sGliscorLevelUpLearnset,
    [SPECIES_MAMOSWINE] = sMamoswineLevelUpLearnset,
    [SPECIES_PORYGON_Z] = sPorygon_ZLevelUpLearnset,
    [SPECIES_GALLADE] = sGalladeLevelUpLearnset,
    [SPECIES_PROBOPASS] = sProbopassLevelUpLearnset,
    [SPECIES_DUSKNOIR] = sDusknoirLevelUpLearnset,
    [SPECIES_FROSLASS] = sFroslassLevelUpLearnset,
    [SPECIES_ROTOM] = sRotomLevelUpLearnset,
    [SPECIES_UXIE] = sUxieLevelUpLearnset,
    [SPECIES_MESPRIT] = sMespritLevelUpLearnset,
    [SPECIES_AZELF] = sAzelfLevelUpLearnset,
    [SPECIES_DIALGA] = sDialgaLevelUpLearnset,
    [SPECIES_PALKIA] = sPalkiaLevelUpLearnset,
    [SPECIES_HEATRAN] = sHeatranLevelUpLearnset,
    [SPECIES_REGIGIGAS] = sRegigigasLevelUpLearnset,
    [SPECIES_GIRATINA] = sGiratinaLevelUpLearnset,
    [SPECIES_CRESSELIA] = sCresseliaLevelUpLearnset,
    [SPECIES_PHIONE] = sPhioneLevelUpLearnset,
    [SPECIES_MANAPHY] = sManaphyLevelUpLearnset,
    [SPECIES_DARKRAI] = sDarkraiLevelUpLearnset,
    [SPECIES_SHAYMIN] = sShayminLevelUpLearnset,
    [SPECIES_ARCEUS] = sArceusLevelUpLearnset,
    [SPECIES_VICTINI] = sVictiniLevelUpLearnset,
    [SPECIES_SNIVY] = sSnivyLevelUpLearnset,
    [SPECIES_SERVINE] = sServineLevelUpLearnset,
    [SPECIES_SERPERIOR] = sSerperiorLevelUpLearnset,
    [SPECIES_TEPIG] = sTepigLevelUpLearnset,
    [SPECIES_PIGNITE] = sPigniteLevelUpLearnset,
    [SPECIES_EMBOAR] = sEmboarLevelUpLearnset,
    [SPECIES_OSHAWOTT] = sOshawottLevelUpLearnset,
    [SPECIES_DEWOTT] = sDewottLevelUpLearnset,
    [SPECIES_SAMUROTT] = sSamurottLevelUpLearnset,
    [SPECIES_PATRAT] = sPatratLevelUpLearnset,
    [SPECIES_WATCHOG] = sWatchogLevelUpLearnset,
    [SPECIES_LILLIPUP] = sLillipupLevelUpLearnset,
    [SPECIES_HERDIER] = sHerdierLevelUpLearnset,
    [SPECIES_STOUTLAND] = sStoutlandLevelUpLearnset,
    [SPECIES_PURRLOIN] = sPurrloinLevelUpLearnset,
    [SPECIES_LIEPARD] = sLiepardLevelUpLearnset,
    [SPECIES_PANSAGE] = sPansageLevelUpLearnset,
    [SPECIES_SIMISAGE] = sSimisageLevelUpLearnset,
    [SPECIES_PANSEAR] = sPansearLevelUpLearnset,
    [SPECIES_SIMISEAR] = sSimisearLevelUpLearnset,
    [SPECIES_PANPOUR] = sPanpourLevelUpLearnset,
    [SPECIES_SIMIPOUR] = sSimipourLevelUpLearnset,
    [SPECIES_MUNNA] = sMunnaLevelUpLearnset,
    [SPECIES_MUSHARNA] = sMusharnaLevelUpLearnset,
    [SPECIES_PIDOVE] = sPidoveLevelUpLearnset,
    [SPECIES_TRANQUILL] = sTranquillLevelUpLearnset,
    [SPECIES_UNFEZANT] = sUnfezantLevelUpLearnset,
    [SPECIES_BLITZLE] = sBlitzleLevelUpLearnset,
    [SPECIES_ZEBSTRIKA] = sZebstrikaLevelUpLearnset,
    [SPECIES_ROGGENROLA] = sRoggenrolaLevelUpLearnset,
    [SPECIES_BOLDORE] = sBoldoreLevelUpLearnset,
    [SPECIES_GIGALITH] = sGigalithLevelUpLearnset,
    [SPECIES_WOOBAT] = sWoobatLevelUpLearnset,
    [SPECIES_SWOOBAT] = sSwoobatLevelUpLearnset,
    [SPECIES_DRILBUR] = sDrilburLevelUpLearnset,
    [SPECIES_EXCADRILL] = sExcadrillLevelUpLearnset,
    [SPECIES_AUDINO] = sAudinoLevelUpLearnset,
    [SPECIES_TIMBURR] = sTimburrLevelUpLearnset,
    [SPECIES_GURDURR] = sGurdurrLevelUpLearnset,
    [SPECIES_CONKELDURR] = sConkeldurrLevelUpLearnset,
    [SPECIES_TYMPOLE] = sTympoleLevelUpLearnset,
    [SPECIES_PALPITOAD] = sPalpitoadLevelUpLearnset,
    [SPECIES_SEISMITOAD] = sSeismitoadLevelUpLearnset,
    [SPECIES_THROH] = sThrohLevelUpLearnset,
    [SPECIES_SAWK] = sSawkLevelUpLearnset,
    [SPECIES_SEWADDLE] = sSewaddleLevelUpLearnset,
    [SPECIES_SWADLOON] = sSwadloonLevelUpLearnset,
    [SPECIES_LEAVANNY] = sLeavannyLevelUpLearnset,
    [SPECIES_VENIPEDE] = sVenipedeLevelUpLearnset,
    [SPECIES_WHIRLIPEDE] = sWhirlipedeLevelUpLearnset,
    [SPECIES_SCOLIPEDE] = sScolipedeLevelUpLearnset,
    [SPECIES_COTTONEE] = sCottoneeLevelUpLearnset,
    [SPECIES_WHIMSICOTT] = sWhimsicottLevelUpLearnset,
    [SPECIES_PETILIL] = sPetililLevelUpLearnset,
    [SPECIES_LILLIGANT] = sLilligantLevelUpLearnset,
    [SPECIES_BASCULIN] = sBasculinLevelUpLearnset,
    [SPECIES_SANDILE] = sSandileLevelUpLearnset,
    [SPECIES_KROKOROK] = sKrokorokLevelUpLearnset,
    [SPECIES_KROOKODILE] = sKrookodileLevelUpLearnset,
    [SPECIES_DARUMAKA] = sDarumakaLevelUpLearnset,
    [SPECIES_DARMANITAN] = sDarmanitanLevelUpLearnset,
    [SPECIES_MARACTUS] = sMaractusLevelUpLearnset,
    [SPECIES_DWEBBLE] = sDwebbleLevelUpLearnset,
    [SPECIES_CRUSTLE] = sCrustleLevelUpLearnset,
    [SPECIES_SCRAGGY] = sScraggyLevelUpLearnset,
    [SPECIES_SCRAFTY] = sScraftyLevelUpLearnset,
    [SPECIES_SIGILYPH] = sSigilyphLevelUpLearnset,
    [SPECIES_YAMASK] = sYamaskLevelUpLearnset,
    [SPECIES_COFAGRIGUS] = sCofagrigusLevelUpLearnset,
    [SPECIES_TIRTOUGA] = sTirtougaLevelUpLearnset,
    [SPECIES_CARRACOSTA] = sCarracostaLevelUpLearnset,
    [SPECIES_ARCHEN] = sArchenLevelUpLearnset,
    [SPECIES_ARCHEOPS] = sArcheopsLevelUpLearnset,
    [SPECIES_TRUBBISH] = sTrubbishLevelUpLearnset,
    [SPECIES_GARBODOR] = sGarbodorLevelUpLearnset,
    [SPECIES_ZORUA] = sZoruaLevelUpLearnset,
    [SPECIES_ZOROARK] = sZoroarkLevelUpLearnset,
    [SPECIES_MINCCINO] = sMinccinoLevelUpLearnset,
    [SPECIES_CINCCINO] = sCinccinoLevelUpLearnset,
    [SPECIES_GOTHITA] = sGothitaLevelUpLearnset,
    [SPECIES_GOTHORITA] = sGothoritaLevelUpLearnset,
    [SPECIES_GOTHITELLE] = sGothitelleLevelUpLearnset,
    [SPECIES_SOLOSIS] = sSolosisLevelUpLearnset,
    [SPECIES_DUOSION] = sDuosionLevelUpLearnset,
    [SPECIES_REUNICLUS] = sReuniclusLevelUpLearnset,
    [SPECIES_DUCKLETT] = sDucklettLevelUpLearnset,
    [SPECIES_SWANNA] = sSwannaLevelUpLearnset,
    [SPECIES_VANILLITE] = sVanilliteLevelUpLearnset,
    [SPECIES_VANILLISH] = sVanillishLevelUpLearnset,
    [SPECIES_VANILLUXE] = sVanilluxeLevelUpLearnset,
    [SPECIES_DEERLING] = sDeerlingLevelUpLearnset,
    [SPECIES_SAWSBUCK] = sSawsbuckLevelUpLearnset,
    [SPECIES_EMOLGA] = sEmolgaLevelUpLearnset,
    [SPECIES_KARRABLAST] = sKarrablastLevelUpLearnset,
    [SPECIES_ESCAVALIER] = sEscavalierLevelUpLearnset,
    [SPECIES_FOONGUS] = sFoongusLevelUpLearnset,
    [SPECIES_AMOONGUSS] = sAmoongussLevelUpLearnset,
    [SPECIES_FRILLISH] = sFrillishLevelUpLearnset,
    [SPECIES_JELLICENT] = sJellicentLevelUpLearnset,
    [SPECIES_ALOMOMOLA] = sAlomomolaLevelUpLearnset,
    [SPECIES_JOLTIK] = sJoltikLevelUpLearnset,
    [SPECIES_GALVANTULA] = sGalvantulaLevelUpLearnset,
    [SPECIES_FERROSEED] = sFerroseedLevelUpLearnset,
    [SPECIES_FERROTHORN] = sFerrothornLevelUpLearnset,
    [SPECIES_KLINK] = sKlinkLevelUpLearnset,
    [SPECIES_KLANG] = sKlangLevelUpLearnset,
    [SPECIES_KLINKLANG] = sKlinklangLevelUpLearnset,
    [SPECIES_TYNAMO] = sTynamoLevelUpLearnset,
    [SPECIES_EELEKTRIK] = sEelektrikLevelUpLearnset,
    [SPECIES_EELEKTROSS] = sEelektrossLevelUpLearnset,
    [SPECIES_ELGYEM] = sElgyemLevelUpLearnset,
    [SPECIES_BEHEEYEM] = sBeheeyemLevelUpLearnset,
    [SPECIES_LITWICK] = sLitwickLevelUpLearnset,
    [SPECIES_LAMPENT] = sLampentLevelUpLearnset,
    [SPECIES_CHANDELURE] = sChandelureLevelUpLearnset,
    [SPECIES_AXEW] = sAxewLevelUpLearnset,
    [SPECIES_FRAXURE] = sFraxureLevelUpLearnset,
    [SPECIES_HAXORUS] = sHaxorusLevelUpLearnset,
    [SPECIES_CUBCHOO] = sCubchooLevelUpLearnset,
    [SPECIES_BEARTIC] = sBearticLevelUpLearnset,
    [SPECIES_CRYOGONAL] = sCryogonalLevelUpLearnset,
    [SPECIES_SHELMET] = sShelmetLevelUpLearnset,
    [SPECIES_ACCELGOR] = sAccelgorLevelUpLearnset,
    [SPECIES_STUNFISK] = sStunfiskLevelUpLearnset,
    [SPECIES_MIENFOO] = sMienfooLevelUpLearnset,
    [SPECIES_MIENSHAO] = sMienshaoLevelUpLearnset,
    [SPECIES_DRUDDIGON] = sDruddigonLevelUpLearnset,
    [SPECIES_GOLETT] = sGolettLevelUpLearnset,
    [SPECIES_GOLURK] = sGolurkLevelUpLearnset,
    [SPECIES_PAWNIARD] = sPawniardLevelUpLearnset,
    [SPECIES_BISHARP] = sBisharpLevelUpLearnset,
    [SPECIES_BOUFFALANT] = sBouffalantLevelUpLearnset,
    [SPECIES_RUFFLET] = sRuffletLevelUpLearnset,
    [SPECIES_BRAVIARY] = sBraviaryLevelUpLearnset,
    [SPECIES_VULLABY] = sVullabyLevelUpLearnset,
    [SPECIES_MANDIBUZZ] = sMandibuzzLevelUpLearnset,
    [SPECIES_HEATMOR] = sHeatmorLevelUpLearnset,
    [SPECIES_DURANT] = sDurantLevelUpLearnset,
    [SPECIES_DEINO] = sDeinoLevelUpLearnset,
    [SPECIES_ZWEILOUS] = sZweilousLevelUpLearnset,
    [SPECIES_HYDREIGON] = sHydreigonLevelUpLearnset,
    [SPECIES_LARVESTA] = sLarvestaLevelUpLearnset,
    [SPECIES_VOLCARONA] = sVolcaronaLevelUpLearnset,
    [SPECIES_COBALION] = sCobalionLevelUpLearnset,
    [SPECIES_TERRAKION] = sTerrakionLevelUpLearnset,
    [SPECIES_VIRIZION] = sVirizionLevelUpLearnset,
    [SPECIES_TORNADUS] = sTornadusLevelUpLearnset,
    [SPECIES_THUNDURUS] = sThundurusLevelUpLearnset,
    [SPECIES_LANDORUS] = sLandorusLevelUpLearnset,
    [SPECIES_RESHIRAM] = sReshiramLevelUpLearnset,
    [SPECIES_ZEKROM] = sZekromLevelUpLearnset,
    [SPECIES_KYUREM_W] = sKyuremWLevelUpLearnset,
    [SPECIES_KYUREM_B] = sKyuremBLevelUpLearnset,
    [SPECIES_KELDEO] = sKeldeoLevelUpLearnset,
    [SPECIES_MELOETTA_A] = sMeloettaALevelUpLearnset,
    [SPECIES_MELOETTA_P] = sMeloettaPLevelUpLearnset,
    [SPECIES_GENESECT] = sGenesectLevelUpLearnset,
    [SPECIES_CHESPIN] = sChespinLevelUpLearnset,
    [SPECIES_QUILLADIN] = sQuilladinLevelUpLearnset,
    [SPECIES_CHESNAUGHT] = sChesnaughtLevelUpLearnset,
    [SPECIES_FENNEKIN] = sFennekinLevelUpLearnset,
    [SPECIES_BRAIXEN] = sBraixenLevelUpLearnset,
    [SPECIES_DELPHOX] = sDelphoxLevelUpLearnset,
    [SPECIES_FROAKIE] = sFroakieLevelUpLearnset,
    [SPECIES_FROGADIER] = sFrogadierLevelUpLearnset,
    [SPECIES_GRENINJA] = sGreninjaLevelUpLearnset,
    [SPECIES_BUNNELBY] = sBunnelbyLevelUpLearnset,
    [SPECIES_DIGGERSBY] = sDiggersbyLevelUpLearnset,
    [SPECIES_FLETCHLING] = sFletchlingLevelUpLearnset,
    [SPECIES_FLETCHINDER] = sFletchinderLevelUpLearnset,
    [SPECIES_TALONFLAME] = sTalonflameLevelUpLearnset,
    [SPECIES_SCATTERBUG] = sScatterbugLevelUpLearnset,
    [SPECIES_SPEWPA] = sSpewpaLevelUpLearnset,
    [SPECIES_VIVILLON] = sVivillonLevelUpLearnset,
    [SPECIES_LITLEO] = sLitleoLevelUpLearnset,
    [SPECIES_PYROAR] = sPyroarLevelUpLearnset,
    [SPECIES_FLABEBE] = sFlabebeLevelUpLearnset,
    [SPECIES_FLOETTE] = sFloetteLevelUpLearnset,
    [SPECIES_FLORGES] = sFlorgesLevelUpLearnset,
    [SPECIES_SKIDDO] = sSkiddoLevelUpLearnset,
    [SPECIES_GOGOAT] = sGogoatLevelUpLearnset,
    [SPECIES_PANCHAM] = sPanchamLevelUpLearnset,
    [SPECIES_PANGORO] = sPangoroLevelUpLearnset,
    [SPECIES_FURFROU] = sFurfrouLevelUpLearnset,
    [SPECIES_ESPURR] = sEspurrLevelUpLearnset,
    [SPECIES_MEOWSTIC] = sMeowsticLevelUpLearnset,
    [SPECIES_HONEDGE] = sHonedgeLevelUpLearnset,
    [SPECIES_DOUBLADE] = sDoubladeLevelUpLearnset,
    [SPECIES_AEGISLASH] = sAegislashLevelUpLearnset,
    [SPECIES_SPRITZEE] = sSpritzeeLevelUpLearnset,
    [SPECIES_AROMATISSE] = sAromatisseLevelUpLearnset,
    [SPECIES_SWIRLIX] = sSwirlixLevelUpLearnset,
    [SPECIES_SLURPUFF] = sSlurpuffLevelUpLearnset,
    [SPECIES_INKAY] = sInkayLevelUpLearnset,
    [SPECIES_MALAMAR] = sMalamarLevelUpLearnset,
    [SPECIES_BINACLE] = sBinacleLevelUpLearnset,
    [SPECIES_BARBARACLE] = sBarbaracleLevelUpLearnset,
    [SPECIES_SKRELP] = sSkrelpLevelUpLearnset,
    [SPECIES_DRAGALGE] = sDragalgeLevelUpLearnset,
    [SPECIES_CLAUNCHER] = sClauncherLevelUpLearnset,
    [SPECIES_CLAWITZER] = sClawitzerLevelUpLearnset,
    [SPECIES_HELIOPTILE] = sHelioptileLevelUpLearnset,
    [SPECIES_HELIOLISK] = sHelioliskLevelUpLearnset,
    [SPECIES_TYRUNT] = sTyruntLevelUpLearnset,
    [SPECIES_TYRANTRUM] = sTyrantrumLevelUpLearnset,
    [SPECIES_AMAURA] = sAmauraLevelUpLearnset,
    [SPECIES_AURORUS] = sAurorusLevelUpLearnset,
    [SPECIES_SYLVEON] = sSylveonLevelUpLearnset,
    [SPECIES_HAWLUCHA] = sHawluchaLevelUpLearnset,
    [SPECIES_DEDENNE] = sDedenneLevelUpLearnset,
    [SPECIES_CARBINK] = sCarbinkLevelUpLearnset,
    [SPECIES_GOOMY] = sGoomyLevelUpLearnset,
    [SPECIES_SLIGGOO] = sSliggooLevelUpLearnset,
    [SPECIES_GOODRA] = sGoodraLevelUpLearnset,
    [SPECIES_KLEFKI] = sKlefkiLevelUpLearnset,
    [SPECIES_PHANTUMP] = sPhantumpLevelUpLearnset,
    [SPECIES_TREVENANT] = sTrevenantLevelUpLearnset,
    [SPECIES_PUMPKABOO] = sPumpkabooLevelUpLearnset,
    [SPECIES_GOURGEIST] = sGourgeistLevelUpLearnset,
    [SPECIES_BERGMITE] = sBergmiteLevelUpLearnset,
    [SPECIES_AVALUGG] = sAvaluggLevelUpLearnset,
    [SPECIES_NOIBAT] = sNoibatLevelUpLearnset,
    [SPECIES_NOIVERN] = sNoivernLevelUpLearnset,
    [SPECIES_XERNEAS] = sXerneasLevelUpLearnset,
    [SPECIES_YVELTAL] = sYveltalLevelUpLearnset,
    [SPECIES_ZYGARDE] = sZygardeLevelUpLearnset,
    [SPECIES_DIANCIE] = sDiancieLevelUpLearnset,
    [SPECIES_HOOPA] = sHoopaLevelUpLearnset,
    [SPECIES_VOLCANION] = sVolcanionLevelUpLearnset,
    [SPECIES_PRIMARINA] = sPrimarinaLevelUpLearnset,
    [SPECIES_GOLISOPOD] = sGolisopodLevelUpLearnset,
    [SPECIES_MARSHADOW] = sMarshadowLevelUpLearnset,
    [SPECIES_DREEPY] = sDreepyLevelUpLearnset,
    [SPECIES_DRAKLOAK] = sDrakloakLevelUpLearnset,
    [SPECIES_DRAGAPULT] = sDragapultLevelUpLearnset,
    [SPECIES_REGIELEKI] = sRegielekiLevelUpLearnset,
    [SPECIES_REGIDRAGO] = sRegidragoLevelUpLearnset,
    [SPECIES_TINKATON] = sTinkatonLevelUpLearnset,
    [SPECIES_FLUTTER_MANE] = sFlutterManeLevelUpLearnset,
    [SPECIES_IRON_VALIANT] = sIronValiantLevelUpLearnset,
    [SPECIES_CHARCADET] = sCharcadetLevelUpLearnset,
    [SPECIES_ARMAROUGE] = sArmarougeLevelUpLearnset,
    [SPECIES_CERULEDGE] = sCeruledgeLevelUpLearnset,
    
};
