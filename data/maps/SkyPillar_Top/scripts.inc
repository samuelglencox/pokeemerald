# 1 "data/maps/SkyPillar_Top/scripts.pory"

# 2 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_MapScripts::
# 3 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SkyPillar_Top_OnResume
# 4 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_Top_OnTransition
# 5 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SkyPillar_Top_OnWarp
# 6 "data/maps/SkyPillar_Top/scripts.pory"
	.byte 0
# 7 "data/maps/SkyPillar_Top/scripts.pory"

# 8 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnResume:
# 9 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, SkyPillar_Top_EventScript_TryRemoveRayquaza
# 10 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 11 "data/maps/SkyPillar_Top/scripts.pory"

# 12 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_TryRemoveRayquaza::
# 13 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 14 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 15 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 16 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 17 "data/maps/SkyPillar_Top/scripts.pory"

# 18 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnTransition:
# 19 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_lt VAR_SKY_PILLAR_STATE, 2, SkyPillar_Top_EventScript_SetCleanLayout
# 20 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_ge VAR_SKY_PILLAR_STATE, 2, SkyPillar_Top_EventScript_TryShowRayquaza
# 21 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 22 "data/maps/SkyPillar_Top/scripts.pory"

# 23 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_SetCleanLayout::
# 24 "data/maps/SkyPillar_Top/scripts.pory"
	setmaplayoutindex LAYOUT_SKY_PILLAR_TOP_CLEAN
# 25 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_RAYQUAZA_SLEEPING, MOVEMENT_TYPE_FACE_DOWN
# 26 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 27 "data/maps/SkyPillar_Top/scripts.pory"

# 28 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_TryShowRayquaza::
# 29 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_unset FLAG_DEFEATED_RAYQUAZA, SkyPillar_Top_EventScript_ShowRayquaza
# 30 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 31 "data/maps/SkyPillar_Top/scripts.pory"

# 32 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ShowRayquaza::
# 33 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA_STILL
# 34 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 35 "data/maps/SkyPillar_Top/scripts.pory"

# 36 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnWarp:
# 37 "data/maps/SkyPillar_Top/scripts.pory"
	map_script_2 VAR_SKY_PILLAR_STATE, 0, SkyPillar_Top_EventScript_RayquazaFaceDown
# 38 "data/maps/SkyPillar_Top/scripts.pory"
	.2byte 0
# 39 "data/maps/SkyPillar_Top/scripts.pory"

# 40 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RayquazaFaceDown::
# 41 "data/maps/SkyPillar_Top/scripts.pory"
	turnobject LOCALID_RAYQUAZA_SLEEPING, DIR_SOUTH
# 42 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 43 "data/maps/SkyPillar_Top/scripts.pory"

# 44 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Rayquaza::
# 45 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 46 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 47 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 48 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 49 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 50 "data/maps/SkyPillar_Top/scripts.pory"
	setwildbattle SPECIES_RAYQUAZA, 70
# 51 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 52 "data/maps/SkyPillar_Top/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 53 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 54 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 55 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SkyPillar_Top_EventScript_DefeatedRayquaza
# 56 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SkyPillar_Top_EventScript_RanFromRayquaza
# 57 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SkyPillar_Top_EventScript_RanFromRayquaza
# 58 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_RAYQUAZA
# 59 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 60 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 61 "data/maps/SkyPillar_Top/scripts.pory"

# 62 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_DefeatedRayquaza::
# 63 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_RAYQUAZA
# 64 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_DefeatedRayquaza2
# 65 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 66 "data/maps/SkyPillar_Top/scripts.pory"

# 67 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RanFromRayquaza::
# 68 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_RAYQUAZA
# 69 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_RanFromRayquaza2
# 70 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 71 "data/maps/SkyPillar_Top/scripts.pory"

# 72 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_DefeatedRayquaza2::
# 73 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 74 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 75 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 76 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 77 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 78 "data/maps/SkyPillar_Top/scripts.pory"

# 79 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RanFromRayquaza2::
# 80 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 81 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 82 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 83 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 84 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
# 85 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 86 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 87 "data/maps/SkyPillar_Top/scripts.pory"

# 88 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_AwakenRayquaza::
# 89 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 90 "data/maps/SkyPillar_Top/scripts.pory"
	fadeoutbgm 1
# 91 "data/maps/SkyPillar_Top/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_FaceUp
# 92 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 93 "data/maps/SkyPillar_Top/scripts.pory"
	applywaitmovement LOCALID_CAMERA, SkyPillar_Top_Movement_CameraPanUp
# 94 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 95 "data/maps/SkyPillar_Top/scripts.pory"
	applywaitmovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaStir
# 96 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 97 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 98 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 99 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 100 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 101 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 102 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 103 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 104 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 105 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 106 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 107 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 108 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 109 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 110 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 111 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 112 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 113 "data/maps/SkyPillar_Top/scripts.pory"
	applywaitmovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaFlyOff
# 114 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_RAYQUAZA_SLEEPING
# 115 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_RayquazaFlewOff, MSGBOX_DEFAULT
# 116 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 117 "data/maps/SkyPillar_Top/scripts.pory"
	delay 20
# 118 "data/maps/SkyPillar_Top/scripts.pory"
	fadeinbgm 1
# 119 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 120 "data/maps/SkyPillar_Top/scripts.pory"
	applywaitmovement LOCALID_CAMERA, SkyPillar_Top_Movement_CameraPanDown
# 121 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 122 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 5
# 123 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 1
# 124 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_RAYQUAZA_CRY_DONE, 1
# 125 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 126 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 127 "data/maps/SkyPillar_Top/scripts.pory"

# 128 "data/maps/SkyPillar_Top/scripts.pory"
@ Rayquaza has unusual movement frames
# 129 "data/maps/SkyPillar_Top/scripts.pory"
@ See comments, or sAnimTable_Rayquaza
# 130 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaStir:
# 131 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 132 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_fast_left  @ Coiled, awake
# 133 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 134 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 135 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 136 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 137 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 138 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_left  @ Coiled, mouth open
# 139 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 140 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_right  @ Normal, awake
# 141 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 142 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 143 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 144 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 145 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 146 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 147 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 148 "data/maps/SkyPillar_Top/scripts.pory"

# 149 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaFlyOff:
# 150 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 151 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_down  @ Coiled, asleep
# 152 "data/maps/SkyPillar_Top/scripts.pory"
	delay_8
# 153 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_right  @ Normal, awake
# 154 "data/maps/SkyPillar_Top/scripts.pory"
	delay_8
# 155 "data/maps/SkyPillar_Top/scripts.pory"
	walk_faster_up  @ Fly up
# 156 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 157 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 158 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 159 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 160 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 161 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 162 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 163 "data/maps/SkyPillar_Top/scripts.pory"

# 164 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CameraPanUp:
# 165 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 166 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 167 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 168 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 169 "data/maps/SkyPillar_Top/scripts.pory"

# 170 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CameraPanDown:
# 171 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 172 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 173 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 174 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 175 "data/maps/SkyPillar_Top/scripts.pory"

# 176 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_RayquazaFlewOff:
# 177 "data/maps/SkyPillar_Top/scripts.pory"
	.string "The awakened RAYQUAZA flew off…$"
