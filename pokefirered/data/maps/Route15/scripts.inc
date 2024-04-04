Route15_MapScripts::
	.byte 0

Route15_EventScript_NurseJoy::
	lock
	faceplayer
	special HealPlayerParty
	msgbox Text_RestoredPkmnToFullHealth
	closemessage
	nurse_joy_bow
	delay_4
	step_end
	release
	end
