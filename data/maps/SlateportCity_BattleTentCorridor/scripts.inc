# 1 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 2 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_MapScripts::
# 3 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_BattleTentCorridor_OnFrame
# 4 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SlateportCity_BattleTentCorridor_OnWarp
# 5 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.byte 0
# 6 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 7 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	@ This is Slateport Tent's version of the Battle Factory Pre-Battle Room
# 8 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 9 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_OnWarp:
# 10 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, SlateportCity_BattleTentCorridor_EventScript_SetUpObjects
# 11 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.2byte 0
# 12 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 13 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_SetUpObjects::
# 14 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	setvar VAR_TEMP_1, 1
# 15 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto_if_ne VAR_0x8006, 1, SlateportCity_BattleTentCorridor_EventScript_TurnPlayerNorth
# 16 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	setobjectxy LOCALID_SLATEPORT_TENT_CORRIDOR_ATTENDANT, 2, 2
# 17 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	turnobject LOCALID_SLATEPORT_TENT_CORRIDOR_ATTENDANT, DIR_SOUTH
# 18 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_TurnPlayerNorth::
# 19 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 20 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	end
# 21 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 22 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_OnFrame:
# 23 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, SlateportCity_BattleTentCorridor_EventScript_EnterCorridor
# 24 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.2byte 0
# 25 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 26 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_EnterCorridor::
# 27 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto_if_eq VAR_0x8006, 1, SlateportCity_BattleTentCorridor_EventScript_ReturnToRoomFromBattle
# 28 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	setvar VAR_TEMP_0, 1
# 29 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_SLATEPORT_TENT_CORRIDOR_ATTENDANT, SlateportCity_BattleTentCorridor_Movement_AttendantEnter
# 30 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_BattleTentCorridor_Movement_PlayerEnter
# 31 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitmovement 0
# 32 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto_if_eq VAR_0x8006, 2, SlateportCity_BattleTentCorridor_EventScript_ResumeChallenge
# 33 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	slateporttent_generaterentalmons
# 34 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	slateporttent_generateopponentmons
# 35 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_HoldMonsChooseFromSelection, MSGBOX_DEFAULT
# 36 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	fadescreen FADE_TO_BLACK
# 37 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	slateporttent_rentmons
# 38 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitstate
# 39 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_EnterBattleRoom::
# 40 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_RightThisWay, MSGBOX_DEFAULT
# 41 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	closemessage
# 42 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	applywaitmovement LOCALID_SLATEPORT_TENT_CORRIDOR_ATTENDANT, Common_Movement_WalkInPlaceFasterUp
# 43 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	opendoor 2, 1
# 44 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitdooranim
# 45 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_SLATEPORT_TENT_CORRIDOR_ATTENDANT, SlateportCity_BattleTentCorridor_Movement_AttendantExit
# 46 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_BattleTentCorridor_Movement_PlayerExit
# 47 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitmovement 0
# 48 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	closedoor 2, 1
# 49 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitdooranim
# 50 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	warp MAP_SLATEPORT_CITY_BATTLE_TENT_BATTLE_ROOM, 4, 4
# 51 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitstate
# 52 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	end
# 53 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 54 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_ReturnToRoomFromBattle::
# 55 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	factory_setopponentmons
# 56 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	factory_resethelditems
# 57 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_LetUsRestoreMons, MSGBOX_DEFAULT
# 58 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	playfanfare MUS_HEAL
# 59 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitfanfare
# 60 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	special HealPlayerParty
# 61 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent::
# 62 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 63 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	call_if_eq VAR_RESULT, 1, SlateportCity_BattleTentCorridor_EventScript_ReadyFor2ndOpponent
# 64 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	call_if_eq VAR_RESULT, 2, SlateportCity_BattleTentCorridor_EventScript_ReadyFor3rdOpponent
# 65 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
# 66 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	switch VAR_RESULT
# 67 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case 0, SlateportCity_BattleTentCorridor_EventScript_AskSwapMon
# 68 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case 1, SlateportCity_BattleTentCorridor_EventScript_AskPauseChallenge
# 69 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case 2, SlateportCity_BattleTentCorridor_EventScript_AskRetireChallenge
# 70 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 71 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_AskPauseChallenge::
# 72 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_SaveAndQuitGame, MSGBOX_YESNO
# 73 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	switch VAR_RESULT
# 74 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case NO, SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent
# 75 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case YES, SlateportCity_BattleTentCorridor_EventScript_PauseChallenge
# 76 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent
# 77 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 78 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_AskRetireChallenge::
# 79 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	message BattleFrontier_BattleFactoryPreBattleRoom_Text_RetireFromChallenge
# 80 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitmessage
# 81 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 82 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	switch VAR_RESULT
# 83 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case 1, SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent
# 84 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case 0, SlateportCity_BattleTent_EventScript_WarpToLobbyLost
# 85 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent
# 86 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 87 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_AskSwapMon::
# 88 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	slateporttent_generateopponentmons
# 89 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_LikeToSwapMon, MSGBOX_YESNO
# 90 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	switch VAR_RESULT
# 91 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case NO, SlateportCity_BattleTentCorridor_EventScript_EnterBattleRoom
# 92 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case YES, SlateportCity_BattleTentCorridor_EventScript_SwapMons
# 93 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_BattleTentCorridor_EventScript_EnterBattleRoom
# 94 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 95 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_SwapMons::
# 96 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	fadescreen FADE_TO_BLACK
# 97 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	slateporttent_swapmons
# 98 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitstate
# 99 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SlateportCity_BattleTentCorridor_EventScript_EnterBattleRoom
# 100 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_YourSwapIsComplete, MSGBOX_DEFAULT
# 101 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTentCorridor_EventScript_EnterBattleRoom
# 102 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 103 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_ReadyFor2ndOpponent::
# 104 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	message BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor2ndOpponent
# 105 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitmessage
# 106 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	return
# 107 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 108 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_ReadyFor3rdOpponent::
# 109 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	message BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor3rdOpponent
# 110 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitmessage
# 111 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	return
# 112 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 113 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_PauseChallenge::
# 114 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	message BattleFrontier_BattleFactoryPreBattleRoom_Text_SavingDataPleaseWait
# 115 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitmessage
# 116 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	slateporttent_save CHALLENGE_STATUS_PAUSED
# 117 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	playse SE_SAVE
# 118 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitse
# 119 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	fadescreen FADE_TO_BLACK
# 120 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	frontier_reset
# 121 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	end
# 122 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 123 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_ResumeChallenge::
# 124 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	special SavePlayerParty
# 125 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	factory_setparties 0
# 126 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent
# 127 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 128 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_Movement_PlayerEnter:
# 129 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 130 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 131 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 132 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 133 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	step_end
# 134 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 135 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_Movement_PlayerExit:
# 136 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 137 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 138 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	set_invisible
# 139 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	step_end
# 140 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 141 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_Movement_AttendantEnter:
# 142 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 143 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 144 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 145 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 146 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_in_place_faster_down
# 147 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	step_end
# 148 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 149 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_Movement_AttendantExit:
# 150 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 151 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	set_invisible
# 152 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	step_end
# 153 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 154 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
@ Leftover text from when this was a Contest Hall in R/S
# 155 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
@ Unused
# 156 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_AdviceForContests:
# 157 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Want a tasty little bit of advice\n"
# 158 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "for CONTESTS?\p"
# 159 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Using a certain move after another\n"
# 160 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "certain kind of move sometimes gets\l"
# 161 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "you extra attention.\p"
# 162 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "If you know what you're doing,\n"
# 163 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "you can score big in appeal.\p"
# 164 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Of course, your opponents might try\n"
# 165 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "disrupting your POKéMON's showing.$"
# 166 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 167 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
@ Unused
# 168 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_MyPapaIsContestJudge:
# 169 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "My papa, he's a CONTEST JUDGE.\p"
# 170 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "I wonder what I should be when I\n"
# 171 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "grow up, a JUDGE or a GYM LEADER?$"
# 172 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 173 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
@ Unused
# 174 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_ImLikeMajorlyCheesed:
# 175 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Hey, man, I'm like majorly cheesed,\n"
# 176 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "you know. Like, you know, I just\l"
# 177 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "wanted to know why my POKéMON\l"
# 178 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "never won, you know, like, hey?\p"
# 179 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "So, like, I gave the JUDGE my two\n"
# 180 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "cents, you know, they're free.\p"
# 181 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "And he wouldn't hear me out, like, hey!\n"
# 182 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "So, like, total bummer, man!\p"
# 183 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Hey, like, you! Zip it, you know?\n"
# 184 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Just, you know, take this!$"
# 185 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 186 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
@ Unused
# 187 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_ExplainTorment:
# 188 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "That's, like, TM41, you know?\n"
# 189 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Hey, it's TORMENT, you hearing me?\p"
# 190 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Like, it won't let the other guy\n"
# 191 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "use the same move twice in a row, see?\p"
# 192 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Hey, now, you listen here, like,\n"
# 193 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "I'm not laying a torment on you!$"
# 194 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 195 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
@ Unused
# 196 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_MCStepUpTakePartInContest:
# 197 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "MC: Oh, my, my!\n"
# 198 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Now isn't that a dandy of a POKéMON?\p"
# 199 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Please! Do step right up and take\n"
# 200 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "part in our splendid CONTESTS!\p"
# 201 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "You'll do well! I'm sure of it!\n"
# 202 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "My eyes have never failed me!$"
# 203 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 204 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
@ Unused
# 205 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_JudgeWouldntDoToMissContest:
# 206 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "JUDGE: Well, hello there!\n"
# 207 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "I see that you're a TRAINER!\p"
# 208 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Then, it just wouldn't do for you\n"
# 209 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "to miss a POKéMON CONTEST!\p"
# 210 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Get a CONTEST PASS in VERDANTURF\n"
# 211 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "CITY and enter anytime!$"
# 212 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 213 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
@ Unused
# 214 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_ItsAppealTime:
# 215 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "It's appeal time!\n"
# 216 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "What should I lead with?$"
# 217 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 218 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
@ Unused
# 219 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_DidntPayAttentionToAppeal:
# 220 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "They didn't pay much attention to\n"
# 221 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "my POKéMON's appeal…\p"
# 222 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Humph, that JUDGE, he doesn't know\n"
# 223 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "a good thing when he sees it.$"
# 224 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 225 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
@ Unused
# 226 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_RewardWithSageAdvice:
# 227 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Oh, hi! You must be a serious fan to get\n"
# 228 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "this close to the action.\p"
# 229 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "I'll reward your enthusiasm with\n"
# 230 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "this sage advice.\p"
# 231 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "If a move goes over really well,\n"
# 232 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "the audience will get excited.\p"
# 233 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "The POKéMON that makes its appeal\n"
# 234 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "right when everyone's excited…\p"
# 235 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Well, you'd think something good has\n"
# 236 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "to happen!$"
# 237 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 238 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
@ Unused
# 239 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_MoreFreakedOutThanMon:
# 240 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "I can't do this! I'm more freaked out\n"
# 241 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "than my POKéMON.\p"
# 242 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "I'm shivering and my heart is racing!$"
# 243 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 244 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
@ Unused
# 245 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_BattleAndContestAlike:
# 246 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "A battle and a CONTEST aren't the\n"
# 247 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "same, but they are alike, too.\p"
# 248 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "You need to work hard and believe\n"
# 249 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "in the POKéMON you've raised.$"
# 250 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 251 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
@ Unused
# 252 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_MonLooksOnTopOfGame:
# 253 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "That POKéMON looks like it's on top\n"
# 254 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "of its game, huh?\p"
# 255 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "A POKéMON that does good in the\n"
# 256 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "secondary judging seems to be more\l"
# 257 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "relaxed when it's doing appeals.$"
# 258 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 259 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
@ Unused
# 260 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_MyMonBetterThanThatLot:
# 261 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Will you look at that sorry sight?\p"
# 262 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Heh, my POKéMON's absolutely better\n"
# 263 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "than that lot!$"
# 264 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 265 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
@ Unused
# 266 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_GetUrgeToMoveWithMon:
# 267 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Don't you get the urge to move with\n"
# 268 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "POKéMON if they're putting on an\l"
# 269 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "energetic appeal?$"
# 270 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 271 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
@ Unused
# 272 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_HyperRankStage:
# 273 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "POKéMON CONTESTS\n"
# 274 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "HYPER RANK STAGE!$"
