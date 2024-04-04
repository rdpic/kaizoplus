Route19_MapScripts::
	.byte 0

Route19_EventScript_RouteSign::
	msgbox Route19_Text_RouteSign, MSGBOX_SIGN
	end

Route19_EventScript_NurseJoy::
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
