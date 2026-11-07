# 1 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 2 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_MapScripts::
# 3 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_2F_OnTransition
# 4 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_BrendansHouse_2F_OnWarp
# 5 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.byte 0
# 6 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 7 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnTransition:
# 8 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan
# 9 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_ge VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos
# 10 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 4, PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet
# 11 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call SecretBase_EventScript_SetDecorationFlags
# 12 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
# 13 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 14 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 15 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos::
# 16 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 17 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_ge VAR_BIRCH_LAB_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 18 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 19 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 20 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos::
# 21 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 22 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 23 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	@ Odd that the MaysHouse equivalent was used below instead
# 24 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 25 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectxyperm LOCALID_RIVALS_HOUSE_2F_RIVAL, 0, 2
# 26 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectmovementtype LOCALID_RIVALS_HOUSE_2F_RIVAL, MOVEMENT_TYPE_FACE_UP
# 27 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 28 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 29 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_Ret::
# 30 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 31 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 32 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan::
# 33 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 34 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan
# 35 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 36 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 37 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan::
# 38 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
# 39 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 40 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 41 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnWarp:
# 42 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor
# 43 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.2byte 0
# 44 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 45 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor::
# 46 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 47 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, SecretBase_EventScript_InitDecorations
# 48 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 49 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 50 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_RivalsPokeBall::
# 51 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 52 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan
# 53 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
# 54 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 55 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 56 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 57 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan::
# 58 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 59 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	addobject LOCALID_RIVALS_HOUSE_2F_RIVAL
# 60 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applywaitmovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters
# 61 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PIN
# 62 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applywaitmovement LOCALID_RIVALS_HOUSE_2F_RIVAL, Common_Movement_ExclamationMark
# 63 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applywaitmovement LOCALID_RIVALS_HOUSE_2F_RIVAL, Common_Movement_Delay48
# 64 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 65 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 66 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth
# 67 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth
# 68 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest
# 69 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast
# 70 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 71 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 72 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 73 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 74 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	savebgm MUS_DUMMY
# 75 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadedefaultbgm
# 76 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 77 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 78 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 79 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth::
# 80 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applywaitmovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth
# 81 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 82 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 83 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 84 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth
# 85 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth
# 86 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 87 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 88 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 89 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth::
# 90 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applywaitmovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth
# 91 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 92 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 93 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 94 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth
# 95 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth
# 96 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 97 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 98 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 99 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest::
# 100 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applywaitmovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest
# 101 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 102 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 103 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 104 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest
# 105 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest
# 106 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 107 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 108 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 109 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast::
# 110 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applywaitmovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast
# 111 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 112 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 113 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 114 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applywaitmovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast
# 115 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 116 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 117 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters:
# 118 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 119 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 120 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 121 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 122 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 123 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth:
# 124 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 125 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 126 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 127 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 128 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 129 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 130 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 131 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth:
# 132 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 133 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 134 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 135 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 136 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 137 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 138 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 139 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 140 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 141 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 142 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth:
# 143 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 144 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 145 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 146 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 147 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 148 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 149 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 150 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 151 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 152 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth:
# 153 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 154 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 155 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 156 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 157 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 158 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth:
# 159 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 160 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 161 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 162 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 163 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 164 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 165 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 166 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 167 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth:
# 168 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 169 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 170 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 171 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 172 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 173 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 174 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 175 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest:
# 176 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 177 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 178 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 179 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 180 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 181 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 182 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest:
# 183 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 184 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 185 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 186 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 187 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 188 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 189 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 190 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 191 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 192 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 193 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest:
# 194 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_8
# 195 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 196 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 197 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 198 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 199 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 200 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 201 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 202 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast:
# 203 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 204 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 205 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 206 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 207 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 208 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_down
# 209 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 210 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 211 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast:
# 212 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 213 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 214 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 215 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 216 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 217 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 218 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
@ Unused, the player is already facing this direction so its unneeded
# 219 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanEast:
# 220 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 221 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 222 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 223 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 224 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 225 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_PC::
# 226 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 227 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 228 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC
# 229 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC
# 230 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 231 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 232 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC::
# 233 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 234 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 235 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_ON
# 236 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 237 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special BedroomPC
# 238 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 239 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 240 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 241 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TurnOffPlayerPC::
# 242 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 243 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 244 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 245 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 246 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 247 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 248 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC::
# 249 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 250 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 251 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 252 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 253 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_Notebook::
# 254 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_Notebook, MSGBOX_SIGN
# 255 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 256 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 257 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_GameCube::
# 258 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_ItsAGameCube, MSGBOX_SIGN
# 259 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 260 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 261 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ClockIsStopped:
# 262 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The clock is stopped…\p"
# 263 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Better set it and start it!$"
# 264 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 265 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_HowDoYouLikeYourRoom:
# 266 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "MOM: {PLAYER}, how do you like your\n"
# 267 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "new room?\p"
# 268 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Good! Everything's put away neatly!\p"
# 269 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "They finished moving everything in\n"
# 270 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "downstairs, too.\p"
# 271 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "POKéMON movers are so convenient!\p"
# 272 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Oh, you should make sure that\n"
# 273 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "everything's all there on your desk.$"
# 274 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 275 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_Notebook:
# 276 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} flipped open the notebook.\p"
# 277 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "ADVENTURE RULE NO. 1\n"
# 278 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Open the MENU with START.\p"
# 279 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "ADVENTURE RULE NO. 2\n"
# 280 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Record your progress with SAVE.\p"
# 281 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The remaining pages are blank…$"
# 282 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 283 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
Common_Text_LookCloserAtMap:
# 284 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} took a closer look at the\n"
# 285 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "HOENN region map.$"
# 286 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 287 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ItsAGameCube:
# 288 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's a Nintendo GameCube.\p"
# 289 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A Game Boy Advance is connected to\n"
# 290 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "serve as the Controller.$"
