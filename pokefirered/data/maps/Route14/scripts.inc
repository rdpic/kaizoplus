Route14_MapScripts::
	.byte 0

Route14_EventScript_RouteSign::
	msgbox Route14_Text_RouteSign, MSGBOX_SIGN
	end

Route14_EventScript_NurseJoy::
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
