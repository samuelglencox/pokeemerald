# 1 "data/maps/SkyPillar_Outside/scripts.pory"

# 2 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_MapScripts::
# 3 "data/maps/SkyPillar_Outside/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_Outside_OnTransition
# 4 "data/maps/SkyPillar_Outside/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SkyPillar_Outside_OnLoad
# 5 "data/maps/SkyPillar_Outside/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SkyPillar_Outside_OnFrame
# 6 "data/maps/SkyPillar_Outside/scripts.pory"
	.byte 0
# 7 "data/maps/SkyPillar_Outside/scripts.pory"

# 8 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_OnTransition:
# 9 "data/maps/SkyPillar_Outside/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SkyPillar_Outside_EventScript_HideMapNamePopup
# 10 "data/maps/SkyPillar_Outside/scripts.pory"
	call_if_ge VAR_SOOTOPOLIS_CITY_STATE, 4, SkyPillar_Outside_EventScript_CheckSetAbnormalWeather
# 11 "data/maps/SkyPillar_Outside/scripts.pory"
	end
# 12 "data/maps/SkyPillar_Outside/scripts.pory"

# 13 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_HideMapNamePopup::
# 14 "data/maps/SkyPillar_Outside/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 15 "data/maps/SkyPillar_Outside/scripts.pory"
	return
# 16 "data/maps/SkyPillar_Outside/scripts.pory"

# 17 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_CheckSetAbnormalWeather::
# 18 "data/maps/SkyPillar_Outside/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 19 "data/maps/SkyPillar_Outside/scripts.pory"
	return
# 20 "data/maps/SkyPillar_Outside/scripts.pory"

# 21 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_OnLoad:
# 22 "data/maps/SkyPillar_Outside/scripts.pory"
	call_if_set FLAG_WALLACE_GOES_TO_SKY_PILLAR, SkyPillar_Outside_EventScript_OpenDoor
# 23 "data/maps/SkyPillar_Outside/scripts.pory"
	end
# 24 "data/maps/SkyPillar_Outside/scripts.pory"

# 25 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_OpenDoor::
# 26 "data/maps/SkyPillar_Outside/scripts.pory"
	setmetatile 14, 4, METATILE_Pacifidlog_SkyPillar_DoorOpen_Top, FALSE
# 27 "data/maps/SkyPillar_Outside/scripts.pory"
	setmetatile 14, 5, METATILE_Pacifidlog_SkyPillar_DoorOpen_Bottom, FALSE
# 28 "data/maps/SkyPillar_Outside/scripts.pory"
	return
# 29 "data/maps/SkyPillar_Outside/scripts.pory"

# 30 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_OnFrame:
# 31 "data/maps/SkyPillar_Outside/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 3, SkyPillar_Outside_EventScript_WallaceScene
# 32 "data/maps/SkyPillar_Outside/scripts.pory"
	.2byte 0
# 33 "data/maps/SkyPillar_Outside/scripts.pory"

# 34 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_WallaceScene::
# 35 "data/maps/SkyPillar_Outside/scripts.pory"
	lockall
# 36 "data/maps/SkyPillar_Outside/scripts.pory"
	applywaitmovement LOCALID_SKY_PILLAR_WALLACE, SkyPillar_Outside_Movement_WallaceApproachPlayer
# 37 "data/maps/SkyPillar_Outside/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 38 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_OpenedDoorToSkyPillar, MSGBOX_DEFAULT
# 39 "data/maps/SkyPillar_Outside/scripts.pory"
	closemessage
# 40 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 30
# 41 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 42 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 43 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 44 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 45 "data/maps/SkyPillar_Outside/scripts.pory"
	special ShakeCamera
# 46 "data/maps/SkyPillar_Outside/scripts.pory"
	waitstate
# 47 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 40
# 48 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_EarthquakeNotMomentToWaste, MSGBOX_DEFAULT
# 49 "data/maps/SkyPillar_Outside/scripts.pory"
	closemessage
# 50 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_PLAYER, SkyPillar_Outside_Movement_PlayerClimbSkyPillar
# 51 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_SKY_PILLAR_WALLACE, SkyPillar_Outside_Movement_WallaceClimbSkyPillar
# 52 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 53 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8004, 1   @ vertical pan
# 54 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8005, 3   @ horizontal pan
# 55 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8006, 20  @ num shakes
# 56 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8007, 5   @ shake delay
# 57 "data/maps/SkyPillar_Outside/scripts.pory"
	special ShakeCamera
# 58 "data/maps/SkyPillar_Outside/scripts.pory"
	waitstate
# 59 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 20
# 60 "data/maps/SkyPillar_Outside/scripts.pory"
	applywaitmovement LOCALID_SKY_PILLAR_WALLACE, Common_Movement_WalkInPlaceFasterLeft
# 61 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 10
# 62 "data/maps/SkyPillar_Outside/scripts.pory"
	applywaitmovement LOCALID_SKY_PILLAR_WALLACE, Common_Movement_WalkInPlaceFasterRight
# 63 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 20
# 64 "data/maps/SkyPillar_Outside/scripts.pory"
	applywaitmovement LOCALID_SKY_PILLAR_WALLACE, Common_Movement_WalkInPlaceFasterDown
# 65 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 30
# 66 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_SituationGettingWorse, MSGBOX_DEFAULT
# 67 "data/maps/SkyPillar_Outside/scripts.pory"
	closemessage
# 68 "data/maps/SkyPillar_Outside/scripts.pory"
	setflag FLAG_SYS_WEATHER_CTRL
# 69 "data/maps/SkyPillar_Outside/scripts.pory"
	setweather WEATHER_ABNORMAL
# 70 "data/maps/SkyPillar_Outside/scripts.pory"
	doweather
# 71 "data/maps/SkyPillar_Outside/scripts.pory"
	special WaitWeather
# 72 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 30
# 73 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_GotToGoBackForSootopolis, MSGBOX_DEFAULT
# 74 "data/maps/SkyPillar_Outside/scripts.pory"
	closemessage
# 75 "data/maps/SkyPillar_Outside/scripts.pory"
	playse SE_EXIT
# 76 "data/maps/SkyPillar_Outside/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 77 "data/maps/SkyPillar_Outside/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 78 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 4
# 79 "data/maps/SkyPillar_Outside/scripts.pory"
	removeobject LOCALID_SKY_PILLAR_WALLACE
# 80 "data/maps/SkyPillar_Outside/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE
# 81 "data/maps/SkyPillar_Outside/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 82 "data/maps/SkyPillar_Outside/scripts.pory"
	releaseall
# 83 "data/maps/SkyPillar_Outside/scripts.pory"
	end
# 84 "data/maps/SkyPillar_Outside/scripts.pory"

# 85 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Movement_WallaceApproachPlayer:
# 86 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 87 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 88 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 89 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 90 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 91 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 92 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 93 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 94 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 95 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 96 "data/maps/SkyPillar_Outside/scripts.pory"
	step_end
# 97 "data/maps/SkyPillar_Outside/scripts.pory"

# 98 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Movement_WallaceClimbSkyPillar:
# 99 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 100 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 101 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 102 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 103 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 104 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 105 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 106 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 107 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 108 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 109 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 110 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 111 "data/maps/SkyPillar_Outside/scripts.pory"
	step_end
# 112 "data/maps/SkyPillar_Outside/scripts.pory"

# 113 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Movement_PlayerClimbSkyPillar:
# 114 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 115 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 116 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 117 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 118 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 119 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 120 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 121 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 122 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 123 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 124 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 125 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 126 "data/maps/SkyPillar_Outside/scripts.pory"
	step_end
# 127 "data/maps/SkyPillar_Outside/scripts.pory"

# 128 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_Wallace::
# 129 "data/maps/SkyPillar_Outside/scripts.pory"
	end
# 130 "data/maps/SkyPillar_Outside/scripts.pory"

# 131 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_ClosedDoor::
# 132 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_DoorIsClosed, MSGBOX_SIGN
# 133 "data/maps/SkyPillar_Outside/scripts.pory"
	end
# 134 "data/maps/SkyPillar_Outside/scripts.pory"

# 135 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Text_DoorIsClosed:
# 136 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "The door is closed.$"
# 137 "data/maps/SkyPillar_Outside/scripts.pory"

# 138 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Text_OpenedDoorToSkyPillar:
# 139 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "WALLACE: Oh, my, I'm terribly sorry!\p"
# 140 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "In my haste, I didn't notice that\n"
# 141 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "I'd left you behind!\p"
# 142 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "I've opened the locked door of\n"
# 143 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "the SKY PILLAR.\p"
# 144 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "{PLAYER}{KUN}, let's be on our way!$"
# 145 "data/maps/SkyPillar_Outside/scripts.pory"

# 146 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Text_EarthquakeNotMomentToWaste:
# 147 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "WALLACE: It's an earthquake!\p"
# 148 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "There's not a moment to waste!\n"
# 149 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "We've got to hurry!$"
# 150 "data/maps/SkyPillar_Outside/scripts.pory"

# 151 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Text_SituationGettingWorse:
# 152 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "WALLACE: Hmm…\n"
# 153 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "The situation is getting worse…$"
# 154 "data/maps/SkyPillar_Outside/scripts.pory"

# 155 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Text_GotToGoBackForSootopolis:
# 156 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "WALLACE: This isn't good…\p"
# 157 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "The weather distortion is spreading\n"
# 158 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "even here…\p"
# 159 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "{PLAYER}{KUN}.\p"
# 160 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "RAYQUAZA should be farther up\n"
# 161 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "from here.\p"
# 162 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "I'm worried about SOOTOPOLIS.\n"
# 163 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "I've got to go back.\p"
# 164 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "Everything is in your hands now.\n"
# 165 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "Don't fail us!$"
