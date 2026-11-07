# 1 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 2 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_MapScripts::
# 3 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SeafloorCavern_Entrance_OnResume
# 4 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.byte 0
# 5 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 6 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_OnResume:
# 7 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	setdivewarp MAP_UNDERWATER_SEAFLOOR_CAVERN, 6, 5
# 8 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	setescapewarp MAP_UNDERWATER_SEAFLOOR_CAVERN, 6, 5
# 9 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	end
# 10 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 11 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_Grunt::
# 12 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	lockall
# 13 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	goto_if_eq VAR_HAS_TALKED_TO_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, 1, SeafloorCavern_Entrance_EventScript_GruntSpeechShort
# 14 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitse
# 15 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	playse SE_PIN
# 16 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applywaitmovement LOCALID_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, Common_Movement_ExclamationMark
# 17 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applywaitmovement LOCALID_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, Common_Movement_Delay48
# 18 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	delay 20
# 19 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SeafloorCavern_Entrance_EventScript_GruntFacePlayerWest
# 20 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SeafloorCavern_Entrance_EventScript_GruntFacePlayerEast
# 21 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SeafloorCavern_Entrance_EventScript_GruntFacePlayerNorth
# 22 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	delay 30
# 23 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	setvar VAR_HAS_TALKED_TO_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, 1
# 24 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	copyobjectxytoperm LOCALID_SEAFLOOR_CAVERN_ENTRANCE_GRUNT
# 25 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	msgbox SeafloorCavern_Entrance_Text_HearMagmaNearMossdeep, MSGBOX_DEFAULT
# 26 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	closemessage
# 27 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applywaitmovement LOCALID_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, Common_Movement_WalkInPlaceFasterUp
# 28 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	releaseall
# 29 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	end
# 30 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 31 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_GruntSpeechShort::
# 32 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SeafloorCavern_Entrance_EventScript_GruntFacePlayerWest
# 33 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SeafloorCavern_Entrance_EventScript_GruntFacePlayerEast
# 34 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SeafloorCavern_Entrance_EventScript_GruntFacePlayerNorth
# 35 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	msgbox SeafloorCavern_Entrance_Text_HearMagmaNearMossdeepShort, MSGBOX_DEFAULT
# 36 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	closemessage
# 37 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applywaitmovement LOCALID_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, Common_Movement_WalkInPlaceFasterUp
# 38 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	releaseall
# 39 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	end
# 40 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 41 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_GruntFacePlayerEast::
# 42 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applywaitmovement LOCALID_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, Common_Movement_WalkInPlaceFasterLeft
# 43 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	return
# 44 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 45 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_GruntFacePlayerWest::
# 46 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applywaitmovement LOCALID_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, Common_Movement_WalkInPlaceFasterRight
# 47 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	return
# 48 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 49 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_GruntFacePlayerNorth::
# 50 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applywaitmovement LOCALID_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, Common_Movement_WalkInPlaceFasterDown
# 51 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	return
# 52 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 53 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_Text_HearMagmaNearMossdeep:
# 54 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "Hey!\n"
# 55 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "I remember your face!\p"
# 56 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "If you're here, it must mean that\n"
# 57 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "you're about to mess with us again!\p"
# 58 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "A punk like you, do you really think\n"
# 59 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "you can take on TEAM AQUA?\p"
# 60 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "I'd say you're too early by about\n"
# 61 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "a trillion years!\p"
# 62 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "You're a perfect fit for the likes of\n"
# 63 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "TEAM MAGMA!\p"
# 64 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "Speaking of TEAM MAGMA, I hear they\n"
# 65 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "were spotted near MOSSDEEP.\p"
# 66 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "That bunch of goons, they sure don't\n"
# 67 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "look good near the sea!$"
# 68 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 69 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_Text_HearMagmaNearMossdeepShort:
# 70 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "A punk like you, do you really think\n"
# 71 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "you can take on TEAM AQUA?\p"
# 72 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "I'd say you're too early by about\n"
# 73 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "a trillion years!\p"
# 74 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "You're a perfect fit for the likes of\n"
# 75 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "TEAM MAGMA!\p"
# 76 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "Speaking of TEAM MAGMA, I hear they\n"
# 77 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "were spotted near MOSSDEEP.\p"
# 78 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "That bunch of goons, they sure don't\n"
# 79 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "look good near the sea!$"
