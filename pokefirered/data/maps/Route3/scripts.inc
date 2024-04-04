Route3_MapScripts::
	.byte 0

Route3_EventScript_Youngster::
	msgbox Route3_Text_TunnelFromCeruleanTiring, MSGBOX_NPC
	end

Route3_EventScript_RouteSign::
	msgbox Route3_Text_RouteSign, MSGBOX_SIGN
	end

Route3_EventScript_NurseJoy::
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
	