# 1 "data/maps/TrainerHill_Elevator/scripts.pory"

# 2 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_MapScripts::
# 3 "data/maps/TrainerHill_Elevator/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerHill_Elevator_OnFrame
# 4 "data/maps/TrainerHill_Elevator/scripts.pory"
	.byte 0
# 5 "data/maps/TrainerHill_Elevator/scripts.pory"

# 6 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_OnFrame:
# 7 "data/maps/TrainerHill_Elevator/scripts.pory"
	map_script_2 VAR_TEMP_4, 0, TrainerHill_Elevator_EventScript_EnterElevator
# 8 "data/maps/TrainerHill_Elevator/scripts.pory"
	.2byte 0
# 9 "data/maps/TrainerHill_Elevator/scripts.pory"

# 10 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_EventScript_Attendant::
# 11 "data/maps/TrainerHill_Elevator/scripts.pory"
	end
# 12 "data/maps/TrainerHill_Elevator/scripts.pory"

# 13 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_EventScript_ExitToRoof::
# 14 "data/maps/TrainerHill_Elevator/scripts.pory"
	applywaitmovement LOCALID_PLAYER, TrainerHill_Elevator_Movement_PlayerExitElevatorToRoof
# 15 "data/maps/TrainerHill_Elevator/scripts.pory"
	releaseall
# 16 "data/maps/TrainerHill_Elevator/scripts.pory"
	warp MAP_TRAINER_HILL_ROOF, 15, 5
# 17 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitstate
# 18 "data/maps/TrainerHill_Elevator/scripts.pory"
	end
# 19 "data/maps/TrainerHill_Elevator/scripts.pory"

# 20 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_EventScript_EnterElevator::
# 21 "data/maps/TrainerHill_Elevator/scripts.pory"
	applywaitmovement LOCALID_PLAYER, TrainerHill_Elevator_Movement_PlayerApproachAttendant
# 22 "data/maps/TrainerHill_Elevator/scripts.pory"
	applywaitmovement LOCALID_TRAINER_HILL_ELEVATOR_ATTENDANT, TrainerHill_Elevator_Movement_AttendantFacePlayer
# 23 "data/maps/TrainerHill_Elevator/scripts.pory"
	lockall
# 24 "data/maps/TrainerHill_Elevator/scripts.pory"
	msgbox TrainerHill_Elevator_Text_ReturnToReception, MSGBOX_YESNO
# 25 "data/maps/TrainerHill_Elevator/scripts.pory"
	goto_if_eq VAR_RESULT, NO, TrainerHill_Elevator_EventScript_ExitToRoof
# 26 "data/maps/TrainerHill_Elevator/scripts.pory"
	releaseall
# 27 "data/maps/TrainerHill_Elevator/scripts.pory"
	applywaitmovement LOCALID_TRAINER_HILL_ELEVATOR_ATTENDANT, TrainerHill_Elevator_Movement_AttendantFaceDown
# 28 "data/maps/TrainerHill_Elevator/scripts.pory"
	applywaitmovement LOCALID_PLAYER, TrainerHill_Elevator_Movement_PlayerMoveToCenterOfElevator
# 29 "data/maps/TrainerHill_Elevator/scripts.pory"
	call TrainerHill_Elevator_EventScript_MoveElevator
# 30 "data/maps/TrainerHill_Elevator/scripts.pory"
	delay 25
# 31 "data/maps/TrainerHill_Elevator/scripts.pory"
	applywaitmovement LOCALID_PLAYER, TrainerHill_Elevator_Movement_PlayerExitElevator
# 32 "data/maps/TrainerHill_Elevator/scripts.pory"
	warp MAP_TRAINER_HILL_ENTRANCE, 17, 8
# 33 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitstate
# 34 "data/maps/TrainerHill_Elevator/scripts.pory"
	end
# 35 "data/maps/TrainerHill_Elevator/scripts.pory"

# 36 "data/maps/TrainerHill_Elevator/scripts.pory"
@ Unused
# 37 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_EventScript_ExitFloorSelect::
# 38 "data/maps/TrainerHill_Elevator/scripts.pory"
	goto TrainerHill_Elevator_EventScript_CloseFloorSelect
# 39 "data/maps/TrainerHill_Elevator/scripts.pory"
	end
# 40 "data/maps/TrainerHill_Elevator/scripts.pory"

# 41 "data/maps/TrainerHill_Elevator/scripts.pory"
@ Functionally unused
# 42 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_EventScript_CloseFloorSelect::
# 43 "data/maps/TrainerHill_Elevator/scripts.pory"
	special CloseDeptStoreElevatorWindow
# 44 "data/maps/TrainerHill_Elevator/scripts.pory"
	releaseall
# 45 "data/maps/TrainerHill_Elevator/scripts.pory"
	end
# 46 "data/maps/TrainerHill_Elevator/scripts.pory"

# 47 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_EventScript_MoveElevator::
# 48 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitse
# 49 "data/maps/TrainerHill_Elevator/scripts.pory"
	special MoveElevator
# 50 "data/maps/TrainerHill_Elevator/scripts.pory"
	return
# 51 "data/maps/TrainerHill_Elevator/scripts.pory"

# 52 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_Movement_PlayerMoveToCenterOfElevator:
# 53 "data/maps/TrainerHill_Elevator/scripts.pory"
	walk_up
# 54 "data/maps/TrainerHill_Elevator/scripts.pory"
	walk_up
# 55 "data/maps/TrainerHill_Elevator/scripts.pory"
	walk_right
# 56 "data/maps/TrainerHill_Elevator/scripts.pory"
	face_down
# 57 "data/maps/TrainerHill_Elevator/scripts.pory"
	step_end
# 58 "data/maps/TrainerHill_Elevator/scripts.pory"

# 59 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_Movement_PlayerApproachAttendant:
# 60 "data/maps/TrainerHill_Elevator/scripts.pory"
	delay_16
# 61 "data/maps/TrainerHill_Elevator/scripts.pory"
	walk_left
# 62 "data/maps/TrainerHill_Elevator/scripts.pory"
	step_end
# 63 "data/maps/TrainerHill_Elevator/scripts.pory"

# 64 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_Movement_PlayerExitElevator:
# 65 "data/maps/TrainerHill_Elevator/scripts.pory"
	delay_16
# 66 "data/maps/TrainerHill_Elevator/scripts.pory"
	walk_down
# 67 "data/maps/TrainerHill_Elevator/scripts.pory"
	walk_down
# 68 "data/maps/TrainerHill_Elevator/scripts.pory"
	step_end
# 69 "data/maps/TrainerHill_Elevator/scripts.pory"

# 70 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_Movement_PlayerExitElevatorToRoof:
# 71 "data/maps/TrainerHill_Elevator/scripts.pory"
	face_down
# 72 "data/maps/TrainerHill_Elevator/scripts.pory"
	delay_16
# 73 "data/maps/TrainerHill_Elevator/scripts.pory"
	step_end
# 74 "data/maps/TrainerHill_Elevator/scripts.pory"

# 75 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_Movement_AttendantFacePlayer:
# 76 "data/maps/TrainerHill_Elevator/scripts.pory"
	face_right
# 77 "data/maps/TrainerHill_Elevator/scripts.pory"
	step_end
# 78 "data/maps/TrainerHill_Elevator/scripts.pory"

# 79 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_Movement_AttendantFaceDown:
# 80 "data/maps/TrainerHill_Elevator/scripts.pory"
	face_down
# 81 "data/maps/TrainerHill_Elevator/scripts.pory"
	step_end
