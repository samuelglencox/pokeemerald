# 1 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
BattleFrontier_BattleArenaCorridor_MapScripts::
# 3 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleArenaCorridor_OnFrame
# 4 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	.byte 0
# 5 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"

# 6 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
BattleFrontier_BattleArenaCorridor_OnFrame:
# 7 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattleArenaCorridor_EventScript_WalkToBattleRoom
# 8 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	.2byte 0
# 9 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"

# 10 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
BattleFrontier_BattleArenaCorridor_EventScript_WalkToBattleRoom::
# 11 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	delay 16
# 12 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	setvar VAR_TEMP_0, 1
# 13 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	applymovement LOCALID_ARENA_CORRIDOR_ATTENDANT, BattleFrontier_BattleArenaCorridor_Movement_AttendantWalkToDoor
# 14 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaCorridor_Movement_PlayerWalkToDoor
# 15 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	waitmovement 0
# 16 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	applywaitmovement LOCALID_ARENA_CORRIDOR_ATTENDANT, BattleFrontier_BattleArenaCorridor_Movement_AttendantFacePlayer
# 17 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	msgbox BattleFrontier_BattleArenaCorridor_Text_PleaseStepIn, MSGBOX_SIGN
# 18 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	applywaitmovement LOCALID_ARENA_CORRIDOR_ATTENDANT, BattleFrontier_BattleArenaCorridor_Movement_AttendantMoveOutOfWay
# 19 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	applywaitmovement LOCALID_PLAYER, BattleFrontier_BattleArenaCorridor_Movement_PlayerEnterDoor
# 20 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	setvar VAR_0x8006, 0
# 21 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_ARENA_BATTLE_ROOM, 7, 5
# 22 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	waitstate
# 23 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	end
# 24 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"

# 25 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
BattleFrontier_BattleArenaCorridor_Movement_PlayerWalkToDoor:
# 26 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 27 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 28 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 29 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 30 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 31 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 32 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 33 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 34 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 35 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 36 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 37 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 38 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 39 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 40 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 41 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 42 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 43 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_right
# 44 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_right
# 45 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_right
# 46 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	step_end
# 47 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"

# 48 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
BattleFrontier_BattleArenaCorridor_Movement_PlayerEnterDoor:
# 49 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_right
# 50 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	set_invisible
# 51 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	step_end
# 52 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"

# 53 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
BattleFrontier_BattleArenaCorridor_Movement_AttendantWalkToDoor:
# 54 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 55 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 56 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 57 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 58 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 59 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 60 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 61 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 62 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 63 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 64 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 65 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 66 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 67 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 68 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 69 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 70 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_right
# 71 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_right
# 72 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_right
# 73 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_right
# 74 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	step_end
# 75 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"

# 76 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
BattleFrontier_BattleArenaCorridor_Movement_AttendantFacePlayer:
# 77 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_in_place_faster_left
# 78 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	step_end
# 79 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"

# 80 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
BattleFrontier_BattleArenaCorridor_Movement_AttendantMoveOutOfWay:
# 81 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 82 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_in_place_faster_down
# 83 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	step_end
# 84 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"

# 85 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
BattleFrontier_BattleArenaCorridor_Text_PleaseStepIn:
# 86 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	.string "Your battles shall be waged in\n"
# 87 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	.string "the next room. Please step in!$"
