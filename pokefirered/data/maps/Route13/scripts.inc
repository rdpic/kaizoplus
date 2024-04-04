Route13_MapScripts::
	.byte 0

Route13_EventScript_TrainerTips1::
	msgbox Route13_Text_LookToLeftOfThatPost, MSGBOX_SIGN
	end

Route13_EventScript_TrainerTips2::
	msgbox Route13_Text_SelectToSwitchItems, MSGBOX_SIGN
	end

Route13_EventScript_RouteSign::
	msgbox Route13_Text_RouteSign, MSGBOX_SIGN
	end

Route13_EventScript_NurseJoy::
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
