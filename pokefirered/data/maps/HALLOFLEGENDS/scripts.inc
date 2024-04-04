.set LOCALID_BRENDAN,   1
.set LOCALID_MAY,		2

HALLOFLEGENDS_MapScripts::
	.byte 0

HALLOFLEGENDS_EventScript_May::
	lock
	faceplayer
	call_if_set FLAG_DEFEATED_MAY, HALLOFLEGENDS_EventScript_May_PostBattle
	call HALLOFLEGENDS_EventScript_May_Battle
	call HALLOFLEGENDS_EventScript_May_PostBattle
	call HALLOFLEGENDS_EventScript_DefeatedMay
	end

HALLOFLEGENDS_EventScript_May_Battle::
	textcolor NPC_TEXT_COLOR_FEMALE
	trainerbattle_single TRAINER_PKMN_TRAINER_MAY, HALLOFLEGENDS_May_Text_Intro, HALLOFLEGENDS_May_Text_Defeat
	return

HALLOFLEGENDS_EventScript_May_PostBattle::
	setflag FLAG_DEFEATED_MAY
	msgbox HALLOFLEGENDS_May_Text_PostBattle
	fadescreen FADE_TO_BLACK
	closemessage
	removeobject LOCALID_MAY
	fadescreen FADE_FROM_BLACK
	release
	end

HALLOFLEGENDS_EventScript_DefeatedMay::
	setflag FLAG_DEFEATED_MAY
	msgbox HALLOFLEGENDS_May_Text_PostBattle
	fadescreen FADE_TO_BLACK
	closemessage
	removeobject LOCALID_MAY
	fadescreen FADE_FROM_BLACK
	release
	end

HALLOFLEGENDS_EventScript_Brendan::
	lock
	faceplayer
	call_if_set FLAG_DEFEATED_BRENDAN, HALLOFLEGENDS_EventScript_Brendan_PostBattle
	call HALLOFLEGENDS_EventScript_Brendan_Battle
	goto HALLOFLEGENDS_EventScript_Brendan_PostBattle
	call HALLOFLEGENDS_EventScript_DefeatedBrendan
	end

HALLOFLEGENDS_EventScript_Brendan_Battle::
	textcolor NPC_TEXT_COLOR_MALE
	trainerbattle_single TRAINER_PKMN_TRAINER_BRENDAN, HALLOFLEGENDS_Brendan_Text_Intro, HALLOFLEGENDS_Brendan_Text_Defeat
	return

HALLOFLEGENDS_EventScript_Brendan_PostBattle::
	msgbox HALLOFLEGENDS_Brendan_Text_PostBattle
	release
	end

HALLOFLEGENDS_EventScript_DefeatedBrendan::
	setflag FLAG_DEFEATED_BRENDAN
	msgbox HALLOFLEGENDS_Brendan_Text_PostBattle
	closemessage
	release
	end
