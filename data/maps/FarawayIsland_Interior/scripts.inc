# 1 "data/maps/FarawayIsland_Interior/scripts.pory"

# 2 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_MapScripts::
# 3 "data/maps/FarawayIsland_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FarawayIsland_Interior_OnResume
# 4 "data/maps/FarawayIsland_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FarawayIsland_Interior_OnTransition
# 5 "data/maps/FarawayIsland_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FarawayIsland_Interior_OnFrame
# 6 "data/maps/FarawayIsland_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, FarawayIsland_Interior_OnReturnToField
# 7 "data/maps/FarawayIsland_Interior/scripts.pory"
	.byte 0
# 8 "data/maps/FarawayIsland_Interior/scripts.pory"

# 9 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_OnReturnToField:
# 10 "data/maps/FarawayIsland_Interior/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, FarawayIsland_Interior_EventScript_TrySetMewAboveGrass
# 11 "data/maps/FarawayIsland_Interior/scripts.pory"
	end
# 12 "data/maps/FarawayIsland_Interior/scripts.pory"

# 13 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_TrySetMewAboveGrass::
# 14 "data/maps/FarawayIsland_Interior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 15 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, FarawayIsland_Interior_EventScript_SetMewAboveGrass
# 16 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, FarawayIsland_Interior_EventScript_SetMewAboveGrass
# 17 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, FarawayIsland_Interior_EventScript_SetMewAboveGrass
# 18 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_MON_TELEPORTED, FarawayIsland_Interior_EventScript_SetMewAboveGrass
# 19 "data/maps/FarawayIsland_Interior/scripts.pory"
	return
# 20 "data/maps/FarawayIsland_Interior/scripts.pory"

# 21 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_SetMewAboveGrass::
# 22 "data/maps/FarawayIsland_Interior/scripts.pory"
	setvar VAR_0x8004, 1
# 23 "data/maps/FarawayIsland_Interior/scripts.pory"
	special SetMewAboveGrass
# 24 "data/maps/FarawayIsland_Interior/scripts.pory"
	return
# 25 "data/maps/FarawayIsland_Interior/scripts.pory"

# 26 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_OnResume:
# 27 "data/maps/FarawayIsland_Interior/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, FarawayIsland_Interior_EventScript_TryRemoveMew
# 28 "data/maps/FarawayIsland_Interior/scripts.pory"
	end
# 29 "data/maps/FarawayIsland_Interior/scripts.pory"

# 30 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_TryRemoveMew::
# 31 "data/maps/FarawayIsland_Interior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 32 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 33 "data/maps/FarawayIsland_Interior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 34 "data/maps/FarawayIsland_Interior/scripts.pory"
	return
# 35 "data/maps/FarawayIsland_Interior/scripts.pory"

# 36 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_OnTransition:
# 37 "data/maps/FarawayIsland_Interior/scripts.pory"
	setvar VAR_FARAWAY_ISLAND_STEP_COUNTER, 0
# 38 "data/maps/FarawayIsland_Interior/scripts.pory"
	setvar VAR_TEMP_1, 1
# 39 "data/maps/FarawayIsland_Interior/scripts.pory"
	call_if_unset FLAG_CAUGHT_MEW, FarawayIsland_Interior_EventScript_TryShowMew
# 40 "data/maps/FarawayIsland_Interior/scripts.pory"
	end
# 41 "data/maps/FarawayIsland_Interior/scripts.pory"

# 42 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_TryShowMew::
# 43 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto_if_set FLAG_DEFEATED_MEW, Common_EventScript_NopReturn
# 44 "data/maps/FarawayIsland_Interior/scripts.pory"
	clearflag FLAG_HIDE_MEW
# 45 "data/maps/FarawayIsland_Interior/scripts.pory"
	setvar VAR_TEMP_1, 0
# 46 "data/maps/FarawayIsland_Interior/scripts.pory"
	return
# 47 "data/maps/FarawayIsland_Interior/scripts.pory"

# 48 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_OnFrame:
# 49 "data/maps/FarawayIsland_Interior/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, FarawayIsland_Interior_EventScript_FindMew
# 50 "data/maps/FarawayIsland_Interior/scripts.pory"
	.2byte 0
# 51 "data/maps/FarawayIsland_Interior/scripts.pory"

# 52 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_FindMew::
# 53 "data/maps/FarawayIsland_Interior/scripts.pory"
	lockall
# 54 "data/maps/FarawayIsland_Interior/scripts.pory"
	playse SE_PIN
# 55 "data/maps/FarawayIsland_Interior/scripts.pory"
	applywaitmovement LOCALID_FARAWAY_ISLAND_MEW, Common_Movement_ExclamationMark
# 56 "data/maps/FarawayIsland_Interior/scripts.pory"
	applywaitmovement LOCALID_FARAWAY_ISLAND_MEW, Common_Movement_Delay48
# 57 "data/maps/FarawayIsland_Interior/scripts.pory"
	applywaitmovement LOCALID_FARAWAY_ISLAND_MEW, FarawayIsland_Interior_Movement_MewMoveAndHide
# 58 "data/maps/FarawayIsland_Interior/scripts.pory"
	copyobjectxytoperm LOCALID_FARAWAY_ISLAND_MEW
# 59 "data/maps/FarawayIsland_Interior/scripts.pory"
	setvar VAR_TEMP_1, 1
# 60 "data/maps/FarawayIsland_Interior/scripts.pory"
	releaseall
# 61 "data/maps/FarawayIsland_Interior/scripts.pory"
	end
# 62 "data/maps/FarawayIsland_Interior/scripts.pory"

# 63 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_Movement_MewMoveAndHide:
# 64 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_up
# 65 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_up
# 66 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_up
# 67 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_in_place_faster_down
# 68 "data/maps/FarawayIsland_Interior/scripts.pory"
	set_invisible
# 69 "data/maps/FarawayIsland_Interior/scripts.pory"
	step_end
# 70 "data/maps/FarawayIsland_Interior/scripts.pory"

# 71 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_Movement_MewAppear:
# 72 "data/maps/FarawayIsland_Interior/scripts.pory"
	set_visible
# 73 "data/maps/FarawayIsland_Interior/scripts.pory"
	step_end
# 74 "data/maps/FarawayIsland_Interior/scripts.pory"

# 75 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_Movement_MewFloatUpNorth:
# 76 "data/maps/FarawayIsland_Interior/scripts.pory"
	lock_facing_direction
# 77 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_fast_up
# 78 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_fast_up
# 79 "data/maps/FarawayIsland_Interior/scripts.pory"
	unlock_facing_direction
# 80 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_in_place_down
# 81 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_in_place_down
# 82 "data/maps/FarawayIsland_Interior/scripts.pory"
	step_end
# 83 "data/maps/FarawayIsland_Interior/scripts.pory"

# 84 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_Movement_MewFloatUpSouth:
# 85 "data/maps/FarawayIsland_Interior/scripts.pory"
	lock_facing_direction
# 86 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_fast_up
# 87 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_fast_up
# 88 "data/maps/FarawayIsland_Interior/scripts.pory"
	unlock_facing_direction
# 89 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_in_place_up
# 90 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_in_place_up
# 91 "data/maps/FarawayIsland_Interior/scripts.pory"
	step_end
# 92 "data/maps/FarawayIsland_Interior/scripts.pory"

# 93 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_Movement_MewFloatUpWest:
# 94 "data/maps/FarawayIsland_Interior/scripts.pory"
	lock_facing_direction
# 95 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_fast_up
# 96 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_fast_up
# 97 "data/maps/FarawayIsland_Interior/scripts.pory"
	unlock_facing_direction
# 98 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_in_place_right
# 99 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_in_place_right
# 100 "data/maps/FarawayIsland_Interior/scripts.pory"
	step_end
# 101 "data/maps/FarawayIsland_Interior/scripts.pory"

# 102 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_Movement_MewFloatUpEast:
# 103 "data/maps/FarawayIsland_Interior/scripts.pory"
	lock_facing_direction
# 104 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_fast_up
# 105 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_fast_up
# 106 "data/maps/FarawayIsland_Interior/scripts.pory"
	unlock_facing_direction
# 107 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_in_place_left
# 108 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_in_place_left
# 109 "data/maps/FarawayIsland_Interior/scripts.pory"
	step_end
# 110 "data/maps/FarawayIsland_Interior/scripts.pory"

# 111 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_Mew::
# 112 "data/maps/FarawayIsland_Interior/scripts.pory"
	lock
# 113 "data/maps/FarawayIsland_Interior/scripts.pory"
	faceplayer
# 114 "data/maps/FarawayIsland_Interior/scripts.pory"
	applywaitmovement LOCALID_FARAWAY_ISLAND_MEW, FarawayIsland_Interior_Movement_MewAppear
# 115 "data/maps/FarawayIsland_Interior/scripts.pory"
	setvar VAR_0x8004, 0
# 116 "data/maps/FarawayIsland_Interior/scripts.pory"
	special SetMewAboveGrass
# 117 "data/maps/FarawayIsland_Interior/scripts.pory"
	message FarawayIsland_Interior_Text_Mew
# 118 "data/maps/FarawayIsland_Interior/scripts.pory"
	waitse
# 119 "data/maps/FarawayIsland_Interior/scripts.pory"
	playmoncry SPECIES_MEW, CRY_MODE_ENCOUNTER
# 120 "data/maps/FarawayIsland_Interior/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, FarawayIsland_Interior_EventScript_FoundMewNorth
# 121 "data/maps/FarawayIsland_Interior/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, FarawayIsland_Interior_EventScript_FoundMewSouth
# 122 "data/maps/FarawayIsland_Interior/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, FarawayIsland_Interior_EventScript_FoundMewWest
# 123 "data/maps/FarawayIsland_Interior/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, FarawayIsland_Interior_EventScript_FoundMewEast
# 124 "data/maps/FarawayIsland_Interior/scripts.pory"
	special DestroyMewEmergingGrassSprite
# 125 "data/maps/FarawayIsland_Interior/scripts.pory"
	delay 40
# 126 "data/maps/FarawayIsland_Interior/scripts.pory"
	waitmoncry
# 127 "data/maps/FarawayIsland_Interior/scripts.pory"
	seteventmon SPECIES_MEW, 30
# 128 "data/maps/FarawayIsland_Interior/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 129 "data/maps/FarawayIsland_Interior/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 130 "data/maps/FarawayIsland_Interior/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 131 "data/maps/FarawayIsland_Interior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 132 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, FarawayIsland_Interior_EventScript_MewDefeated
# 133 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, FarawayIsland_Interior_EventScript_PlayerOrMewRan
# 134 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, FarawayIsland_Interior_EventScript_PlayerOrMewRan
# 135 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_MON_TELEPORTED, FarawayIsland_Interior_EventScript_PlayerOrMewRan
# 136 "data/maps/FarawayIsland_Interior/scripts.pory"
	setflag FLAG_CAUGHT_MEW
# 137 "data/maps/FarawayIsland_Interior/scripts.pory"
	release
# 138 "data/maps/FarawayIsland_Interior/scripts.pory"
	end
# 139 "data/maps/FarawayIsland_Interior/scripts.pory"

# 140 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_MewDefeated::
# 141 "data/maps/FarawayIsland_Interior/scripts.pory"
	setflag FLAG_DEFEATED_MEW
# 142 "data/maps/FarawayIsland_Interior/scripts.pory"
	setvar VAR_0x8004, SPECIES_MEW
# 143 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 144 "data/maps/FarawayIsland_Interior/scripts.pory"
	end
# 145 "data/maps/FarawayIsland_Interior/scripts.pory"

# 146 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_PlayerOrMewRan::
# 147 "data/maps/FarawayIsland_Interior/scripts.pory"
	setvar VAR_0x8004, SPECIES_MEW
# 148 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 149 "data/maps/FarawayIsland_Interior/scripts.pory"
	end
# 150 "data/maps/FarawayIsland_Interior/scripts.pory"

# 151 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_FoundMewNorth::
# 152 "data/maps/FarawayIsland_Interior/scripts.pory"
	applywaitmovement LOCALID_FARAWAY_ISLAND_MEW, FarawayIsland_Interior_Movement_MewFloatUpNorth
# 153 "data/maps/FarawayIsland_Interior/scripts.pory"
	return
# 154 "data/maps/FarawayIsland_Interior/scripts.pory"

# 155 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_FoundMewSouth::
# 156 "data/maps/FarawayIsland_Interior/scripts.pory"
	applywaitmovement LOCALID_FARAWAY_ISLAND_MEW, FarawayIsland_Interior_Movement_MewFloatUpSouth
# 157 "data/maps/FarawayIsland_Interior/scripts.pory"
	return
# 158 "data/maps/FarawayIsland_Interior/scripts.pory"

# 159 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_FoundMewWest::
# 160 "data/maps/FarawayIsland_Interior/scripts.pory"
	applywaitmovement LOCALID_FARAWAY_ISLAND_MEW, FarawayIsland_Interior_Movement_MewFloatUpWest
# 161 "data/maps/FarawayIsland_Interior/scripts.pory"
	return
# 162 "data/maps/FarawayIsland_Interior/scripts.pory"

# 163 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_FoundMewEast::
# 164 "data/maps/FarawayIsland_Interior/scripts.pory"
	applywaitmovement LOCALID_FARAWAY_ISLAND_MEW, FarawayIsland_Interior_Movement_MewFloatUpEast
# 165 "data/maps/FarawayIsland_Interior/scripts.pory"
	return
# 166 "data/maps/FarawayIsland_Interior/scripts.pory"

# 167 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_HideMewWhenGrassCut::
# 168 "data/maps/FarawayIsland_Interior/scripts.pory"
	lockall
# 169 "data/maps/FarawayIsland_Interior/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 170 "data/maps/FarawayIsland_Interior/scripts.pory"
	setflag FLAG_HIDE_MEW
# 171 "data/maps/FarawayIsland_Interior/scripts.pory"
	removeobject LOCALID_FARAWAY_ISLAND_MEW
# 172 "data/maps/FarawayIsland_Interior/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 173 "data/maps/FarawayIsland_Interior/scripts.pory"
	msgbox FarawayIsland_Interior_Text_TheFeelingOfBeingWatchedFaded, MSGBOX_DEFAULT
# 174 "data/maps/FarawayIsland_Interior/scripts.pory"
	closemessage
# 175 "data/maps/FarawayIsland_Interior/scripts.pory"
	releaseall
# 176 "data/maps/FarawayIsland_Interior/scripts.pory"
	end
# 177 "data/maps/FarawayIsland_Interior/scripts.pory"

# 178 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_Text_TheFeelingOfBeingWatchedFaded:
# 179 "data/maps/FarawayIsland_Interior/scripts.pory"
	.string "The feeling of being watched faded…$"
