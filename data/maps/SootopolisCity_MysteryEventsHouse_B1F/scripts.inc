# 1 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"

# 2 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_B1F_MapScripts::
# 3 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_MysteryEventsHouse_B1F_OnTransition
# 4 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SootopolisCity_MysteryEventsHouse_B1F_OnFrame
# 5 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	.byte 0
# 6 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"

# 7 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_B1F_OnTransition:
# 8 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	special SetEReaderTrainerGfxId
# 9 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	end
# 10 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"

# 11 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_B1F_OnFrame:
# 12 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer
# 13 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	.2byte 0
# 14 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"

# 15 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer::
# 16 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	lockall
# 17 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	applywaitmovement LOCALID_PLAYER, SootopolisCity_MysteryEventsHouse_B1F_Movement_PlayerEnterBasement
# 18 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	special CopyEReaderTrainerGreeting
# 19 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 20 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	closemessage
# 21 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_EREADER
# 22 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	setvar VAR_0x8005, 0
# 23 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	special DoSpecialTrainerBattle
# 24 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_DREW, SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleTie
# 25 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_WON, SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleWon
# 26 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_LOST, SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleLost
# 27 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	closemessage
# 28 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	special HealPlayerParty
# 29 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	applywaitmovement LOCALID_PLAYER, SootopolisCity_MysteryEventsHouse_B1F_Movement_PlayerExitBasement
# 30 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	special LoadPlayerParty
# 31 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 32 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	warp MAP_SOOTOPOLIS_CITY_MYSTERY_EVENTS_HOUSE_1F, 3, 1
# 33 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	waitstate
# 34 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	releaseall
# 35 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	end
# 36 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"

# 37 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleTie::
# 38 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	setvar VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 3
# 39 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	msgbox SootopolisCity_MysteryEventsHouse_B1F_Text_MatchEndedUpDraw, MSGBOX_DEFAULT
# 40 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	return
# 41 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"

# 42 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleWon::
# 43 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	setvar VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 1
# 44 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	special ShowFieldMessageStringVar4
# 45 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	waitmessage
# 46 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	waitbuttonpress
# 47 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	return
# 48 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"

# 49 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleLost::
# 50 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	setvar VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 2
# 51 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	special ShowFieldMessageStringVar4
# 52 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	waitmessage
# 53 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	waitbuttonpress
# 54 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	return
# 55 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"

# 56 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_B1F_Movement_PlayerEnterBasement:
# 57 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_down
# 58 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_down
# 59 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_down
# 60 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_right
# 61 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_right
# 62 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	step_end
# 63 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"

# 64 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_B1F_Movement_PlayerExitBasement:
# 65 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_left
# 66 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_left
# 67 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_up
# 68 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_up
# 69 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_up
# 70 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_up
# 71 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	delay_8
# 72 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	step_end
