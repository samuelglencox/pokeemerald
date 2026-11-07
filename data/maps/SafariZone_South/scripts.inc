# 1 "data/maps/SafariZone_South/scripts.pory"

# 2 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_MapScripts::
# 3 "data/maps/SafariZone_South/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SafariZone_South_OnTransition
# 4 "data/maps/SafariZone_South/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SafariZone_South_OnFrame
# 5 "data/maps/SafariZone_South/scripts.pory"
	.byte 0
# 6 "data/maps/SafariZone_South/scripts.pory"

# 7 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_OnFrame:
# 8 "data/maps/SafariZone_South/scripts.pory"
	map_script_2 VAR_SAFARI_ZONE_STATE, 2, SafariZone_South_EventScript_EnterSafariZone
# 9 "data/maps/SafariZone_South/scripts.pory"
	.2byte 0
# 10 "data/maps/SafariZone_South/scripts.pory"

# 11 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_EventScript_EnterSafariZone::
# 12 "data/maps/SafariZone_South/scripts.pory"
	lockall
# 13 "data/maps/SafariZone_South/scripts.pory"
	applywaitmovement LOCALID_PLAYER, SafariZone_South_Movement_PlayerEnter
# 14 "data/maps/SafariZone_South/scripts.pory"
	applywaitmovement LOCALID_SAFARI_EXIT_ATTENDANT, SafariZone_South_Movement_ExitAttendantBlockDoor
# 15 "data/maps/SafariZone_South/scripts.pory"
	setobjectxyperm LOCALID_SAFARI_EXIT_ATTENDANT, 32, 34
# 16 "data/maps/SafariZone_South/scripts.pory"
	setvar VAR_SAFARI_ZONE_STATE, 0
# 17 "data/maps/SafariZone_South/scripts.pory"
	releaseall
# 18 "data/maps/SafariZone_South/scripts.pory"
	end
# 19 "data/maps/SafariZone_South/scripts.pory"

# 20 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_OnTransition:
# 21 "data/maps/SafariZone_South/scripts.pory"
	call_if_eq VAR_SAFARI_ZONE_STATE, 2, SafariZone_South_EventScript_SetExitAttendantAside
# 22 "data/maps/SafariZone_South/scripts.pory"
	end
# 23 "data/maps/SafariZone_South/scripts.pory"

# 24 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_EventScript_SetExitAttendantAside::
# 25 "data/maps/SafariZone_South/scripts.pory"
	setobjectxyperm LOCALID_SAFARI_EXIT_ATTENDANT, 31, 34
# 26 "data/maps/SafariZone_South/scripts.pory"
	return
# 27 "data/maps/SafariZone_South/scripts.pory"

# 28 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_Movement_PlayerEnter:
# 29 "data/maps/SafariZone_South/scripts.pory"
	walk_down
# 30 "data/maps/SafariZone_South/scripts.pory"
	step_end
# 31 "data/maps/SafariZone_South/scripts.pory"

# 32 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_Movement_ExitAttendantBlockDoor:
# 33 "data/maps/SafariZone_South/scripts.pory"
	walk_right
# 34 "data/maps/SafariZone_South/scripts.pory"
	walk_in_place_faster_down
# 35 "data/maps/SafariZone_South/scripts.pory"
	step_end
# 36 "data/maps/SafariZone_South/scripts.pory"

# 37 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_EventScript_Boy::
# 38 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_South_Text_Boy, MSGBOX_NPC
# 39 "data/maps/SafariZone_South/scripts.pory"
	end
# 40 "data/maps/SafariZone_South/scripts.pory"

# 41 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_EventScript_Man::
# 42 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_South_Text_Man, MSGBOX_NPC
# 43 "data/maps/SafariZone_South/scripts.pory"
	end
# 44 "data/maps/SafariZone_South/scripts.pory"

# 45 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_EventScript_Youngster::
# 46 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_South_Text_Youngster, MSGBOX_NPC
# 47 "data/maps/SafariZone_South/scripts.pory"
	end
# 48 "data/maps/SafariZone_South/scripts.pory"

# 49 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_EventScript_ExitAttendant::
# 50 "data/maps/SafariZone_South/scripts.pory"
	lock
# 51 "data/maps/SafariZone_South/scripts.pory"
	faceplayer
# 52 "data/maps/SafariZone_South/scripts.pory"
	goto_if_unset FLAG_GOOD_LUCK_SAFARI_ZONE, SafariZone_South_EventScript_GoodLuck
# 53 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_South_Text_StillHaveTimeExit, MSGBOX_YESNO
# 54 "data/maps/SafariZone_South/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SafariZone_South_EventScript_ExitEarly
# 55 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_South_Text_EnjoyTheRestOfYourAdventure, MSGBOX_DEFAULT
# 56 "data/maps/SafariZone_South/scripts.pory"
	release
# 57 "data/maps/SafariZone_South/scripts.pory"
	end
# 58 "data/maps/SafariZone_South/scripts.pory"

# 59 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_EventScript_GoodLuck::
# 60 "data/maps/SafariZone_South/scripts.pory"
	setflag FLAG_GOOD_LUCK_SAFARI_ZONE
# 61 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_South_Text_GoodLuck, MSGBOX_DEFAULT
# 62 "data/maps/SafariZone_South/scripts.pory"
	release
# 63 "data/maps/SafariZone_South/scripts.pory"
	end
# 64 "data/maps/SafariZone_South/scripts.pory"

# 65 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_EventScript_ExitEarly::
# 66 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_South_Text_ExitEarlyThankYouForPlaying, MSGBOX_DEFAULT
# 67 "data/maps/SafariZone_South/scripts.pory"
	closemessage
# 68 "data/maps/SafariZone_South/scripts.pory"
	switch VAR_FACING
# 69 "data/maps/SafariZone_South/scripts.pory"
	case DIR_NORTH, SafariZone_South_EventScript_ExitEarlyNorth
# 70 "data/maps/SafariZone_South/scripts.pory"
	case DIR_EAST, SafariZone_South_EventScript_ExitEarlyEast
# 71 "data/maps/SafariZone_South/scripts.pory"
	end
# 72 "data/maps/SafariZone_South/scripts.pory"

# 73 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_EventScript_ExitEarlyNorth::
# 74 "data/maps/SafariZone_South/scripts.pory"
	applywaitmovement LOCALID_SAFARI_EXIT_ATTENDANT, SafariZone_South_Movement_MoveExitAttendantNorth
# 75 "data/maps/SafariZone_South/scripts.pory"
	applywaitmovement LOCALID_PLAYER, SafariZone_South_Movement_PlayerExitNorth
# 76 "data/maps/SafariZone_South/scripts.pory"
	goto SafariZone_South_EventScript_Exit
# 77 "data/maps/SafariZone_South/scripts.pory"
	end
# 78 "data/maps/SafariZone_South/scripts.pory"

# 79 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_EventScript_ExitEarlyEast::
# 80 "data/maps/SafariZone_South/scripts.pory"
	applywaitmovement LOCALID_SAFARI_EXIT_ATTENDANT, SafariZone_South_Movement_MoveExitAttendantEast
# 81 "data/maps/SafariZone_South/scripts.pory"
	applywaitmovement LOCALID_PLAYER, SafariZone_South_Movement_PlayerExitEast
# 82 "data/maps/SafariZone_South/scripts.pory"
	goto SafariZone_South_EventScript_Exit
# 83 "data/maps/SafariZone_South/scripts.pory"
	end
# 84 "data/maps/SafariZone_South/scripts.pory"

# 85 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_EventScript_Exit::
# 86 "data/maps/SafariZone_South/scripts.pory"
	setvar VAR_SAFARI_ZONE_STATE, 1
# 87 "data/maps/SafariZone_South/scripts.pory"
	special ExitSafariMode
# 88 "data/maps/SafariZone_South/scripts.pory"
	warpdoor MAP_ROUTE121_SAFARI_ZONE_ENTRANCE, 2, 5
# 89 "data/maps/SafariZone_South/scripts.pory"
	waitstate
# 90 "data/maps/SafariZone_South/scripts.pory"
	end
# 91 "data/maps/SafariZone_South/scripts.pory"

# 92 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_Movement_PlayerExitNorth:
# 93 "data/maps/SafariZone_South/scripts.pory"
	walk_up
# 94 "data/maps/SafariZone_South/scripts.pory"
	step_end
# 95 "data/maps/SafariZone_South/scripts.pory"

# 96 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_Movement_PlayerExitEast:
# 97 "data/maps/SafariZone_South/scripts.pory"
	walk_right
# 98 "data/maps/SafariZone_South/scripts.pory"
	walk_in_place_faster_up
# 99 "data/maps/SafariZone_South/scripts.pory"
	step_end
# 100 "data/maps/SafariZone_South/scripts.pory"

# 101 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_Movement_MoveExitAttendantNorth:
# 102 "data/maps/SafariZone_South/scripts.pory"
	walk_left
# 103 "data/maps/SafariZone_South/scripts.pory"
	walk_in_place_faster_right
# 104 "data/maps/SafariZone_South/scripts.pory"
	step_end
# 105 "data/maps/SafariZone_South/scripts.pory"

# 106 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_Movement_MoveExitAttendantEast:
# 107 "data/maps/SafariZone_South/scripts.pory"
	walk_down
# 108 "data/maps/SafariZone_South/scripts.pory"
	walk_in_place_faster_up
# 109 "data/maps/SafariZone_South/scripts.pory"
	step_end
# 110 "data/maps/SafariZone_South/scripts.pory"

# 111 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_EventScript_ConstructionWorker1::
# 112 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_South_Text_AreaOffLimits1, MSGBOX_NPC
# 113 "data/maps/SafariZone_South/scripts.pory"
	end
# 114 "data/maps/SafariZone_South/scripts.pory"

# 115 "data/maps/SafariZone_South/scripts.pory"
SafariZone_Southeast_EventScript_ExpansionZoneAttendant::
# 116 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_Southeast_Text_ExpansionIsFinished, MSGBOX_NPC
# 117 "data/maps/SafariZone_South/scripts.pory"
	end
# 118 "data/maps/SafariZone_South/scripts.pory"

# 119 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_EventScript_ConstructionWorker2::
# 120 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_South_Text_AreaOffLimits2, MSGBOX_NPC
# 121 "data/maps/SafariZone_South/scripts.pory"
	end
# 122 "data/maps/SafariZone_South/scripts.pory"

# 123 "data/maps/SafariZone_South/scripts.pory"
SafariZone_Southeast_EventScript_LittleGirl::
# 124 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_Southeast_Text_LittleGirl, MSGBOX_NPC
# 125 "data/maps/SafariZone_South/scripts.pory"
	end
# 126 "data/maps/SafariZone_South/scripts.pory"

# 127 "data/maps/SafariZone_South/scripts.pory"
SafariZone_Southeast_EventScript_FatMan::
# 128 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_Southeast_Text_FatMan, MSGBOX_NPC
# 129 "data/maps/SafariZone_South/scripts.pory"
	end
# 130 "data/maps/SafariZone_South/scripts.pory"

# 131 "data/maps/SafariZone_South/scripts.pory"
SafariZone_Southeast_EventScript_RichBoy::
# 132 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_Southeast_Text_RichBoy, MSGBOX_NPC
# 133 "data/maps/SafariZone_South/scripts.pory"
	end
# 134 "data/maps/SafariZone_South/scripts.pory"

# 135 "data/maps/SafariZone_South/scripts.pory"
SafariZone_Northeast_EventScript_Boy::
# 136 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_Northeast_Text_Boy, MSGBOX_NPC
# 137 "data/maps/SafariZone_South/scripts.pory"
	end
# 138 "data/maps/SafariZone_South/scripts.pory"

# 139 "data/maps/SafariZone_South/scripts.pory"
SafariZone_Northeast_EventScript_Woman::
# 140 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_Northeast_Text_Woman, MSGBOX_NPC
# 141 "data/maps/SafariZone_South/scripts.pory"
	end
# 142 "data/maps/SafariZone_South/scripts.pory"

# 143 "data/maps/SafariZone_South/scripts.pory"
SafariZone_Northeast_EventScript_Girl::
# 144 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_Northeast_Text_Girl, MSGBOX_NPC
# 145 "data/maps/SafariZone_South/scripts.pory"
	end
