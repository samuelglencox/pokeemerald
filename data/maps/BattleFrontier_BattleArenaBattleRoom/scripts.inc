# 1 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
@ On this map the player will automatically walk into the room, but the camera is supposed to remain still.
# 3 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
@ To do this GF sets the player (LOCALID_PLAYER) invisible and creates a fake player object (LOCALID_ARENA_BATTLE_PLAYER).
# 4 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
@ The graphics of this fake player object are represented with VAR_OBJ_GFX_ID_1.
# 5 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
@ The graphics of the opponent are represented with VAR_OBJ_GFX_ID_0, which will ultimately be set by tower_setopponent.
# 6 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_MapScripts::
# 7 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattleArenaBattleRoom_OnTransition
# 8 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleArenaBattleRoom_OnFrame
# 9 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleArenaBattleRoom_OnWarp
# 10 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattleArenaBattleRoom_OnResume
# 11 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.byte 0
# 12 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 13 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_OnResume:
# 14 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	special OffsetCameraForBattle
# 15 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	end
# 16 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 17 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_OnTransition:
# 18 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_settrainers
# 19 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_BattleArenaBattleRoom_EventScript_SetPlayerGfx
# 20 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	end
# 21 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 22 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_SetPlayerGfx::
# 23 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	checkplayergender
# 24 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, BattleFrontier_BattleArenaBattleRoom_EventScript_SetPlayerGfxMale
# 25 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, BattleFrontier_BattleArenaBattleRoom_EventScript_SetPlayerGfxFemale
# 26 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 27 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 28 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_SetPlayerGfxMale::
# 29 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 30 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 31 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 32 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_SetPlayerGfxFemale::
# 33 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 34 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 35 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 36 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_OnFrame:
# 37 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattleArenaBattleRoom_EventScript_EnterRoom
# 38 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.2byte 0
# 39 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 40 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_EnterRoom::
# 41 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	lockall
# 42 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	showobjectat LOCALID_ARENA_BATTLE_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_ARENA_BATTLE_ROOM
# 43 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applywaitmovement LOCALID_ARENA_BATTLE_PLAYER, BattleFrontier_BattleArenaBattleRoom_Movement_PlayerEnter
# 44 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 45 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleArenaBattleRoom_EventScript_AnnounceTrainers
# 46 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_ATTENDANT, BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceDown
# 47 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_PLAYER, BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceLeft
# 48 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, 1
# 49 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, TRUE
# 50 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent
# 51 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 52 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AnnounceTrainers::
# 53 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	tower_setopponent
# 54 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	addobject LOCALID_ARENA_BATTLE_OPPONENT
# 55 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applywaitmovement LOCALID_ARENA_BATTLE_OPPONENT, BattleFrontier_BattleArenaBattleRoom_Movement_OpponentEnter
# 56 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_ANNOUNCER, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceDown
# 57 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	playse SE_M_BELLY_DRUM
# 58 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitse
# 59 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 60 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_PlayerStepForward, MSGBOX_DEFAULT
# 61 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	closemessage
# 62 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applywaitmovement LOCALID_ARENA_BATTLE_PLAYER, BattleFrontier_BattleArenaBattleRoom_Movement_PlayerStepForward
# 63 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_ANNOUNCER, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceDown
# 64 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	playse SE_M_BELLY_DRUM
# 65 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitse
# 66 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 67 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	arena_gettrainername
# 68 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_OpponentStepForward, MSGBOX_DEFAULT
# 69 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	closemessage
# 70 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applywaitmovement LOCALID_ARENA_BATTLE_OPPONENT, BattleFrontier_BattleArenaBattleRoom_Movement_OpponentStepForward
# 71 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_ANNOUNCER, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceDown
# 72 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	playse SE_M_BELLY_DRUM
# 73 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitse
# 74 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 75 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_SetKOTourneyBegin, MSGBOX_DEFAULT
# 76 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	closemessage
# 77 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_PLAYER, BattleFrontier_BattleArenaBattleRoom_Movement_PlayerStepForward
# 78 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_OPPONENT, BattleFrontier_BattleArenaBattleRoom_Movement_OpponentStepForward
# 79 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 80 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	palace_getopponentintro
# 81 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 82 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 83 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_BattleArenaBattleRoom_EventScript_DoArenaBattle
# 84 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	switch VAR_RESULT
# 85 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleArenaBattleRoom_EventScript_DefeatedOpponent
# 86 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_DeclareOpponentWinner::
# 87 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_ANNOUNCER, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceDown
# 88 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_BLACK_BELT_1, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceDown
# 89 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_BLACK_BELT_2, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceDown
# 90 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_BLACK_BELT_3, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceUp
# 91 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_BLACK_BELT_4, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceUp
# 92 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	playse SE_M_SNORE
# 93 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitse
# 94 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 95 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	arena_gettrainername
# 96 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsOpponent, MSGBOX_DEFAULT
# 97 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_WarpToLobbyLost::
# 98 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 99 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_ARENA_LOBBY, 7, 8
# 100 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitstate
# 101 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 102 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_DefeatedOpponent::
# 103 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_BattleArenaBattleRoom_EventScript_DeclarePlayerWinner
# 104 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 105 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 106 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
# 107 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	switch VAR_RESULT
# 108 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 7, BattleFrontier_BattleArenaBattleRoom_EventScript_ReturnToLobbyWon
# 109 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_PLAYER, BattleFrontier_BattleArenaBattleRoom_Movement_PlayerWalkBackToLine
# 110 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_OPPONENT, BattleFrontier_BattleArenaBattleRoom_Movement_OpponentExit
# 111 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 112 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	removeobject LOCALID_ARENA_BATTLE_OPPONENT
# 113 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_ATTENDANT, BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceDown
# 114 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_PLAYER, BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceLeft
# 115 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 116 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_MonsWillBeRestored, MSGBOX_DEFAULT
# 117 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	special LoadPlayerParty
# 118 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	special SavePlayerParty
# 119 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 120 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	playfanfare MUS_HEAL
# 121 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitfanfare
# 122 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	special HealPlayerParty
# 123 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent::
# 124 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_getbrainstatus
# 125 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	copyvar VAR_TEMP_F, VAR_RESULT
# 126 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_ne VAR_RESULT, FRONTIER_BRAIN_NOT_READY, BattleFrontier_BattleArenaBattleRoom_EventScript_TycoonUpNext
# 127 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 128 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call_if_eq VAR_RESULT, 1, BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor2ndOpponent
# 129 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call_if_eq VAR_RESULT, 2, BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor3rdOpponent
# 130 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call_if_eq VAR_RESULT, 3, BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor4thOpponent
# 131 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call_if_eq VAR_RESULT, 4, BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor5thOpponent
# 132 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call_if_eq VAR_RESULT, 5, BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor6thOpponent
# 133 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call_if_eq VAR_RESULT, 6, BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor7thOpponent
# 134 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 135 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponentNoRecord
# 136 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	multichoice 19, 4, MULTI_GO_ON_RECORD_REST_RETIRE, TRUE
# 137 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	switch VAR_RESULT
# 138 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleArenaBattleRoom_EventScript_ContinueChallenge
# 139 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleArenaBattleRoom_EventScript_AskRecordBattle
# 140 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleArenaBattleRoom_EventScript_AskPauseChallenge
# 141 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 3, BattleFrontier_BattleArenaBattleRoom_EventScript_AskRetireChallenge
# 142 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent
# 143 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 144 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponentNoRecord::
# 145 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
# 146 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	switch VAR_RESULT
# 147 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleArenaBattleRoom_EventScript_ContinueChallenge
# 148 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleArenaBattleRoom_EventScript_AskPauseChallenge
# 149 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleArenaBattleRoom_EventScript_AskRetireChallenge
# 150 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent
# 151 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 152 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskRecordBattle::
# 153 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_RecordLastBattle
# 154 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 155 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 156 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	switch VAR_RESULT
# 157 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent
# 158 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleArenaBattleRoom_EventScript_RecordBattle
# 159 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent
# 160 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 161 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_RecordBattle::
# 162 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 163 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent
# 164 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 165 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskPauseChallenge::
# 166 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_SaveAndShutDown, MSGBOX_YESNO
# 167 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	switch VAR_RESULT
# 168 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case NO, BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent
# 169 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case YES, BattleFrontier_BattleArenaBattleRoom_EventScript_PauseChallenge
# 170 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent
# 171 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 172 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskRetireChallenge::
# 173 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_RetireFromChallenge
# 174 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 175 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 176 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	switch VAR_RESULT
# 177 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent
# 178 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleArenaBattleRoom_EventScript_WarpToLobbyLost
# 179 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent
# 180 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 181 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_ContinueChallenge::
# 182 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	closemessage
# 183 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_PLAYER, BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceRight
# 184 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_ATTENDANT, BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceRight
# 185 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 186 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AnnounceTrainers
# 187 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitstate
# 188 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_ReturnToLobbyWon::
# 189 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	delay 60
# 190 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 191 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_ARENA_LOBBY, 7, 8
# 192 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitstate
# 193 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 194 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor2ndOpponent::
# 195 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor2ndOpponent
# 196 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 197 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 198 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 199 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor3rdOpponent::
# 200 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor3rdOpponent
# 201 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 202 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 203 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 204 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor4thOpponent::
# 205 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor4thOpponent
# 206 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 207 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 208 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 209 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor5thOpponent::
# 210 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor5thOpponent
# 211 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 212 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 213 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 214 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor6thOpponent::
# 215 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor6thOpponent
# 216 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 217 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 218 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 219 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor7thOpponent::
# 220 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor7thOpponent
# 221 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 222 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 223 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 224 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_PauseChallenge::
# 225 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_SavingPleaseWait
# 226 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 227 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	arena_save CHALLENGE_STATUS_PAUSED
# 228 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	playse SE_SAVE
# 229 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitse
# 230 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 231 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_reset
# 232 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	end
# 233 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 234 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_TycoonUpNext::
# 235 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForTycoon
# 236 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_NowFaceTycoon, MSGBOX_DEFAULT
# 237 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, 1
# 238 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForTycoon::
# 239 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_PreparedForTycoon
# 240 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 241 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 242 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForTycoonNoRecord
# 243 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	multichoice 19, 4, MULTI_GO_ON_RECORD_REST_RETIRE, TRUE
# 244 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	switch VAR_RESULT
# 245 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGreta
# 246 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleArenaBattleRoom_EventScript_AskRecordBattle
# 247 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleArenaBattleRoom_EventScript_AskPauseChallenge
# 248 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 3, BattleFrontier_BattleArenaBattleRoom_EventScript_AskRetireChallenge
# 249 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForTycoon
# 250 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 251 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForTycoonNoRecord::
# 252 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
# 253 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	switch VAR_RESULT
# 254 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGreta
# 255 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleArenaBattleRoom_EventScript_AskPauseChallenge
# 256 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleArenaBattleRoom_EventScript_AskRetireChallenge
# 257 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForTycoon
# 258 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 259 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGreta::
# 260 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_SetBrainObjectGfx
# 261 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_PLAYER, BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceRight
# 262 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_ATTENDANT, BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceRight
# 263 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 264 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_ANNOUNCER, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceDown
# 265 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	playse SE_M_BELLY_DRUM
# 266 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitse
# 267 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 268 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_PlayerStepForward, MSGBOX_DEFAULT
# 269 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	closemessage
# 270 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applywaitmovement LOCALID_ARENA_BATTLE_PLAYER, BattleFrontier_BattleArenaBattleRoom_Movement_PlayerStepForwardLong
# 271 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_ANNOUNCER, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceDown
# 272 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	playse SE_M_BELLY_DRUM
# 273 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitse
# 274 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 275 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_MakeWayForGreta, MSGBOX_DEFAULT
# 276 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	closemessage
# 277 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	addobject LOCALID_ARENA_BATTLE_OPPONENT
# 278 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applywaitmovement LOCALID_ARENA_BATTLE_OPPONENT, BattleFrontier_BattleArenaBattleRoom_Movement_GretaEnter
# 279 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applywaitmovement LOCALID_ARENA_BATTLE_OPPONENT, BattleFrontier_BattleArenaBattleRoom_Movement_OpponentStepForward
# 280 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	switch VAR_TEMP_F
# 281 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_GOLD, BattleFrontier_BattleArenaBattleRoom_EventScript_IntroGretaGold
# 282 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_STREAK, BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGretaSilver
# 283 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_STREAK_LONG, BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGretaGold
# 284 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 285 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGretaSilver
# 286 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_GretaYoureChallenger, MSGBOX_DEFAULT
# 287 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	closemessage
# 288 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 289 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applywaitmovement LOCALID_ARENA_BATTLE_OPPONENT, BattleFrontier_BattleArenaBattleRoom_Movement_GretaLookAroundPlayer
# 290 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_IsThatRight, MSGBOX_DEFAULT
# 291 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	closemessage
# 292 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applywaitmovement LOCALID_ARENA_BATTLE_OPPONENT, BattleFrontier_BattleArenaBattleRoom_Movement_GretaWalkBackToCenter
# 293 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_YouLookWeakTakeThingsEasy, MSGBOX_DEFAULT
# 294 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGretaSilver::
# 295 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_IgniteMyPassionForBattle, MSGBOX_DEFAULT
# 296 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_BattleArenaBattleRoom_EventScript_StartArenaBattle
# 297 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_BattleArenaBattleRoom_EventScript_DefeatedGretaSilver
# 298 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_DeclareOpponentWinner
# 299 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 300 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_DefeatedGretaSilver::
# 301 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_BattleArenaBattleRoom_EventScript_DeclarePlayerWinner
# 302 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_getsymbols
# 303 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_ne VAR_RESULT, 0, BattleFrontier_BattleArenaBattleRoom_EventScript_ReturnToLobbyWon
# 304 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applywaitmovement LOCALID_ARENA_BATTLE_OPPONENT, BattleFrontier_BattleArenaBattleRoom_Movement_OpponentStepForwardLong
# 305 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_GretaYoureToughAfterAll, MSGBOX_DEFAULT
# 306 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 307 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_ReceivedGutsSymbol
# 308 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 309 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitfanfare
# 310 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_givesymbol
# 311 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_GoingToBeFunNextTime, MSGBOX_DEFAULT
# 312 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_ReturnToLobbyWon
# 313 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 314 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_IntroGretaGold::
# 315 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 316 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGretaGold
# 317 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_GretaLookingForwardToSeeingAgain, MSGBOX_DEFAULT
# 318 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	closemessage
# 319 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 320 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applywaitmovement LOCALID_ARENA_BATTLE_OPPONENT, BattleFrontier_BattleArenaBattleRoom_Movement_GretaLookAroundPlayer
# 321 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_SoAreYouReady, MSGBOX_DEFAULT
# 322 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	closemessage
# 323 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applywaitmovement LOCALID_ARENA_BATTLE_OPPONENT, BattleFrontier_BattleArenaBattleRoom_Movement_GretaWalkBackToCenter
# 324 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_WontAllowHalfheartedEffort, MSGBOX_DEFAULT
# 325 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGretaGold::
# 326 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_LetsGetThisStarted, MSGBOX_DEFAULT
# 327 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_BattleArenaBattleRoom_EventScript_StartArenaBattle
# 328 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_BattleArenaBattleRoom_EventScript_DefeatedGretaGold
# 329 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_DeclareOpponentWinner
# 330 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 331 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_DefeatedGretaGold::
# 332 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_BattleArenaBattleRoom_EventScript_DeclarePlayerWinner
# 333 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_getsymbols
# 334 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 2, BattleFrontier_BattleArenaBattleRoom_EventScript_ReturnToLobbyWon
# 335 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applywaitmovement LOCALID_ARENA_BATTLE_OPPONENT, BattleFrontier_BattleArenaBattleRoom_Movement_OpponentStepForwardLong
# 336 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_GretaBlownAway, MSGBOX_DEFAULT
# 337 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 338 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_GutsSymbolTookGoldenShine
# 339 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 340 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitfanfare
# 341 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_givesymbol
# 342 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_IfWeBattleAgainWontLose, MSGBOX_DEFAULT
# 343 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_ReturnToLobbyWon
# 344 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 345 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_StartArenaBattle::
# 346 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_SetKOTourneyBegin, MSGBOX_DEFAULT
# 347 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_BattleArenaBattleRoom_EventScript_DoArenaBattle
# 348 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 349 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 350 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_DoArenaBattle::
# 351 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	closemessage
# 352 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, 0
# 353 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, FALSE
# 354 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	special HealPlayerParty
# 355 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_ARENA
# 356 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	setvar VAR_0x8005, 0
# 357 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	special DoSpecialTrainerBattle
# 358 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_restorehelditems
# 359 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	special HealPlayerParty
# 360 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_resetsketch
# 361 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 362 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 363 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_DeclarePlayerWinner::
# 364 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_ANNOUNCER, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceDown
# 365 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_BLACK_BELT_1, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceDown
# 366 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_BLACK_BELT_2, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceDown
# 367 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_BLACK_BELT_3, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceUp
# 368 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_BLACK_BELT_4, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceUp
# 369 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	playse SE_BANG
# 370 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitse
# 371 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 372 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsPlayer, MSGBOX_DEFAULT
# 373 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	closemessage
# 374 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_IncrementWinStreak
# 375 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 376 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 377 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_PlayerEnter:
# 378 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_right
# 379 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_right
# 380 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_PlayerStepForwardLong:
# 381 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_right
# 382 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_PlayerStepForward:
# 383 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_right
# 384 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 385 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 386 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_PlayerWalkBackToLine:
# 387 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_left
# 388 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_left
# 389 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 390 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 391 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 392 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceLeft:
# 393 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_in_place_faster_up
# 394 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 395 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 396 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceRight:
# 397 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 398 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 399 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 400 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_OpponentEnter:
# 401 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_left
# 402 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_left
# 403 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_OpponentStepForwardLong:
# 404 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_left
# 405 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_OpponentStepForward:
# 406 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_left
# 407 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 408 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 409 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_GretaEnter:
# 410 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_fast_left
# 411 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_fast_left
# 412 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_fast_left
# 413 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_fast_left
# 414 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_fast_left
# 415 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 416 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 417 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_OpponentExit:
# 418 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_right
# 419 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_right
# 420 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_right
# 421 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_right
# 422 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_right
# 423 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_right
# 424 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_right
# 425 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 426 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 427 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceDown:
# 428 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	disable_jump_landing_ground_effect
# 429 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	jump_in_place_down
# 430 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 431 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 432 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceUp:
# 433 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	disable_jump_landing_ground_effect
# 434 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	jump_in_place_up
# 435 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 436 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 437 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceDown:
# 438 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_in_place_faster_down
# 439 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 440 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 441 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
@ Unused, redundant
# 442 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceRight2:
# 443 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 444 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 445 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 446 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_OnWarp:
# 447 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleArenaBattleRoom_EventScript_SetUpRoomObjects
# 448 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.2byte 0
# 449 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 450 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_SetUpRoomObjects::
# 451 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	hideobjectat LOCALID_ARENA_BATTLE_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_ARENA_BATTLE_ROOM
# 452 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	removeobject LOCALID_ARENA_BATTLE_OPPONENT
# 453 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx
# 454 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleDomeBattleRoom_Movement_SetInvisible
# 455 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 456 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	end
# 457 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 458 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_GretaLookAroundPlayer:
# 459 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_down
# 460 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_in_place_faster_left
# 461 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	delay_16
# 462 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	delay_16
# 463 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	delay_16
# 464 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	delay_16
# 465 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_up
# 466 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_up
# 467 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_in_place_faster_left
# 468 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 469 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 470 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_GretaWalkBackToCenter:
# 471 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_down
# 472 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_in_place_faster_left
# 473 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 474 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 475 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_PlayerStepForward:
# 476 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "REFEREE: TRAINER {PLAYER}!\n"
# 477 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Step forward, please!$"
# 478 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 479 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_OpponentStepForward:
# 480 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "REFEREE: TRAINER {STR_VAR_1}!\n"
# 481 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Step forward, please!$"
# 482 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 483 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_SetKOTourneyBegin:
# 484 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "REFEREE: Set KO Tourney!\n"
# 485 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Begin!$"
# 486 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 487 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsPlayer:
# 488 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "REFEREE: The winner is {PLAYER}!$"
# 489 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 490 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsOpponent:
# 491 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "REFEREE: The winner is {STR_VAR_1}!$"
# 492 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 493 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_MonsWillBeRestored:
# 494 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Your POKéMON will be restored to\n"
# 495 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "full health.$"
# 496 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 497 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor2ndOpponent:
# 498 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Next up, your second opponent!\n"
# 499 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Are you ready to move on?$"
# 500 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 501 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor3rdOpponent:
# 502 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Next up, your third opponent!\n"
# 503 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Are you ready to move on?$"
# 504 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 505 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor4thOpponent:
# 506 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Next up, your fourth opponent!\n"
# 507 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Are you ready to move on?$"
# 508 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 509 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor5thOpponent:
# 510 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Next up, your fifth opponent!\n"
# 511 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Are you ready to move on?$"
# 512 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 513 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor6thOpponent:
# 514 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Next up, your sixth opponent!\n"
# 515 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Are you ready to move on?$"
# 516 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 517 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor7thOpponent:
# 518 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Next up, your seventh opponent!\n"
# 519 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Are you ready to move on?$"
# 520 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 521 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_SaveAndShutDown:
# 522 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Would you like to save the game and\n"
# 523 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "shut down now?$"
# 524 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 525 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_RetireFromChallenge:
# 526 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Would you like to retire from your\n"
# 527 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Set KO Tourney challenge?$"
# 528 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 529 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_SavingPleaseWait:
# 530 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "I am saving your game data.\n"
# 531 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Please wait.$"
# 532 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 533 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_RecordLastBattle:
# 534 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Would you like to record your last\n"
# 535 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "battle on your FRONTIER PASS?$"
# 536 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 537 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_NowFaceTycoon:
# 538 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "My dear challenger!\p"
# 539 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Your skill level is truly astounding!\p"
# 540 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "We now would like you to face our\n"
# 541 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "leader, the ARENA TYCOON!$"
# 542 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 543 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_PreparedForTycoon:
# 544 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "A battle with the ARENA TYCOON!\n"
# 545 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Are you prepared?$"
# 546 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 547 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_MakeWayForGreta:
# 548 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "REFEREE: The ARENA TYCOON!\n"
# 549 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Make way for GRETA!$"
# 550 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 551 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_GretaYoureChallenger:
# 552 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "GRETA: Hey!\n"
# 553 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Howdy!\p"
# 554 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "…Wait, are you the challenger?$"
# 555 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 556 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_IsThatRight:
# 557 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Is that right? Hmm…\n"
# 558 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Hmhm…$"
# 559 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 560 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_YouLookWeakTakeThingsEasy:
# 561 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "I don't know how to say it, but…\n"
# 562 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "To put it bluntly, you look pretty weak.\l"
# 563 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Are you sure you're up for me?\p"
# 564 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Hmm…\p"
# 565 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Well, all right!\n"
# 566 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "We'll take things easy to start with!$"
# 567 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 568 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_IgniteMyPassionForBattle:
# 569 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Okay! Let's see you ignite my passion\n"
# 570 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "for battle!$"
# 571 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 572 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_GretaYoureToughAfterAll:
# 573 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "GRETA: Ow, wait a second!\n"
# 574 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "You are tough after all!\p"
# 575 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "I like you!\n"
# 576 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Let's see your FRONTIER PASS.$"
# 577 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 578 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_ReceivedGutsSymbol:
# 579 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "The Guts Symbol was embossed on\n"
# 580 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "the FRONTIER PASS!$"
# 581 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 582 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_GoingToBeFunNextTime:
# 583 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Hmm…\p"
# 584 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "It's going to be fun the next time!\n"
# 585 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "I'm looking forward to it!$"
# 586 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 587 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_GretaLookingForwardToSeeingAgain:
# 588 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "GRETA: Hey! Howdy!\n"
# 589 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "You finally won your way up to me!\p"
# 590 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "I was getting worried waiting for you!\n"
# 591 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "I was really looking forward to seeing\l"
# 592 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "you again!$"
# 593 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 594 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_SoAreYouReady:
# 595 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "… … …\n"
# 596 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "So, are you ready?$"
# 597 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 598 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_WontAllowHalfheartedEffort:
# 599 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "I won't allow a halfhearted effort!\n"
# 600 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Be ready for a thrashing!$"
# 601 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 602 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_LetsGetThisStarted:
# 603 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Come on, REFEREE!\n"
# 604 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Let's get this started!$"
# 605 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 606 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_GretaBlownAway:
# 607 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "GRETA: Gaaah! Blown away!\n"
# 608 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Let's see your FRONTIER PASS!$"
# 609 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 610 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_GutsSymbolTookGoldenShine:
# 611 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "The Guts Symbol took on\n"
# 612 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "a golden shine!$"
# 613 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 614 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_IfWeBattleAgainWontLose:
# 615 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Arrrgh!\n"
# 616 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "This is so infuriating!\p"
# 617 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "If we ever battle again, I won't lose!\n"
# 618 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Don't you forget it! Bye-bye!$"
