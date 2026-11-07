# 1 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 2 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
@ On this map the player will automatically walk into the room, but the camera is supposed to remain still.
# 3 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
@ To do this GF sets the player (LOCALID_PLAYER) invisible and creates a fake player object (LOCALID_PALACE_BATTLE_PLAYER).
# 4 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
@ The graphics of this fake player object are represented with VAR_OBJ_GFX_ID_1.
# 5 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
@ The graphics of the opponent are represented with VAR_OBJ_GFX_ID_0, which will ultimately be set by tower_setopponent.
# 6 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 7 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_MapScripts::
# 8 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattlePalaceBattleRoom_OnTransition
# 9 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePalaceBattleRoom_OnFrame
# 10 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePalaceBattleRoom_OnWarp
# 11 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.byte 0
# 12 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 13 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_OnTransition:
# 14 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_settrainers
# 15 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfx
# 16 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	end
# 17 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 18 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfx::
# 19 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	checkplayergender
# 20 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfxMale
# 21 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfxFemale
# 22 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 23 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 24 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
@ The opponent's gfx are set to the players by default
# 25 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfxMale::
# 26 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 27 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 28 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 29 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 30 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfxFemale::
# 31 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 32 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 33 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 34 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 35 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_OnFrame:
# 36 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattlePalaceBattleRoom_EventScript_EnterRoom
# 37 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.2byte 0
# 38 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 39 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_EnterRoom::
# 40 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	showobjectat LOCALID_PALACE_BATTLE_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_PALACE_BATTLE_ROOM
# 41 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 42 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePalaceBattleRoom_EventScript_BeginChallenge
# 43 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applywaitmovement LOCALID_PALACE_BATTLE_PLAYER, BattleFrontier_BattlePalaceBattleRoom_Movement_PlayerReturnToChallenge
# 44 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_ATTENDANT, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceDown
# 45 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, 1
# 46 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, TRUE
# 47 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
# 48 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 49 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_BeginChallenge::
# 50 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applywaitmovement LOCALID_PALACE_BATTLE_PLAYER, BattleFrontier_BattlePalaceBattleRoom_Movement_PlayerEnterRoom
# 51 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_NextOpponentEnter::
# 52 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	tower_setopponent
# 53 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	addobject LOCALID_PALACE_BATTLE_OPPONENT
# 54 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applywaitmovement LOCALID_PALACE_BATTLE_OPPONENT, BattleFrontier_BattlePalaceBattleRoom_Movement_OpponentEnter
# 55 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	palace_getopponentintro
# 56 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 57 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 58 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_BattlePalaceBattleRoom_EventScript_DoPalaceBattle
# 59 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	switch VAR_RESULT
# 60 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedOpponent
# 61 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyLost::
# 62 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 63 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobby
# 64 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 65 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedOpponent::
# 66 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_IncrementWinStreak
# 67 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 68 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 69 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
# 70 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	switch VAR_RESULT
# 71 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 7, BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyWon
# 72 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applywaitmovement LOCALID_PALACE_BATTLE_OPPONENT, BattleFrontier_BattlePalaceBattleRoom_Movement_OpponentExit
# 73 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	removeobject LOCALID_PALACE_BATTLE_OPPONENT
# 74 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_PLAYER, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceUp
# 75 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_ATTENDANT, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceDown
# 76 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmovement 0
# 77 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_LetMeRestoreYourMons, MSGBOX_DEFAULT
# 78 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	special LoadPlayerParty
# 79 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	special SavePlayerParty
# 80 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 81 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	playfanfare MUS_HEAL
# 82 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitfanfare
# 83 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	special HealPlayerParty
# 84 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent::
# 85 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_getbrainstatus
# 86 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	copyvar VAR_TEMP_F, VAR_RESULT
# 87 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_ne VAR_RESULT, FRONTIER_BRAIN_NOT_READY, BattleFrontier_BattlePalaceBattleRoom_EventScript_MavenUpNext
# 88 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 89 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call_if_eq VAR_RESULT, 1, BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor2ndOpponent
# 90 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call_if_eq VAR_RESULT, 2, BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor3rdOpponent
# 91 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call_if_eq VAR_RESULT, 3, BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor4thOpponent
# 92 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call_if_eq VAR_RESULT, 4, BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor5thOpponent
# 93 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call_if_eq VAR_RESULT, 5, BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor6thOpponent
# 94 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call_if_eq VAR_RESULT, 6, BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor7thOpponent
# 95 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 96 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponentNoRecord
# 97 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	multichoice 19, 4, MULTI_GO_ON_RECORD_REST_RETIRE, TRUE
# 98 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	switch VAR_RESULT
# 99 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattlePalaceBattleRoom_EventScript_ContinueChallenge
# 100 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRecordBattle
# 101 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskPauseChallenge
# 102 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 3, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRetireChallenge
# 103 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
# 104 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 105 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponentNoRecord::
# 106 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
# 107 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	switch VAR_RESULT
# 108 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattlePalaceBattleRoom_EventScript_ContinueChallenge
# 109 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskPauseChallenge
# 110 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRetireChallenge
# 111 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
# 112 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 113 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRecordBattle::
# 114 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_RecordLastMatch
# 115 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 116 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 117 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	switch VAR_RESULT
# 118 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
# 119 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattlePalaceBattleRoom_EventScript_RecordBattle
# 120 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
# 121 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 122 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_RecordBattle::
# 123 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 124 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
# 125 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 126 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskPauseChallenge::
# 127 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_SaveAndQuitGame, MSGBOX_YESNO
# 128 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	switch VAR_RESULT
# 129 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case NO, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
# 130 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case YES, BattleFrontier_BattlePalaceBattleRoom_EventScript_PauseChallenge
# 131 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
# 132 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 133 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRetireChallenge::
# 134 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_WishToQuitChallenge
# 135 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 136 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 137 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	switch VAR_RESULT
# 138 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
# 139 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyLost
# 140 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
# 141 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 142 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_ContinueChallenge::
# 143 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_PLAYER, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceRight
# 144 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_ATTENDANT, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceRight
# 145 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	closemessage
# 146 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_NextOpponentEnter
# 147 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 148 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyWon::
# 149 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 150 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobby
# 151 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 152 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_PauseChallenge::
# 153 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_SavingData
# 154 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 155 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	palace_save CHALLENGE_STATUS_PAUSED
# 156 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	playse SE_SAVE
# 157 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitse
# 158 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 159 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_reset
# 160 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	end
# 161 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 162 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_MavenUpNext::
# 163 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMaven
# 164 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_ChallengingPalaceMaven, MSGBOX_DEFAULT
# 165 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, 1
# 166 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMaven::
# 167 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_ReadyForPalaceMaven
# 168 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 169 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 170 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMavenNoRecord
# 171 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	multichoice 19, 4, MULTI_GO_ON_RECORD_REST_RETIRE, TRUE
# 172 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	switch VAR_RESULT
# 173 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenser
# 174 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRecordBattle
# 175 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskPauseChallenge
# 176 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 3, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRetireChallenge
# 177 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMaven
# 178 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 179 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMavenNoRecord::
# 180 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
# 181 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	switch VAR_RESULT
# 182 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenser
# 183 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskPauseChallenge
# 184 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRetireChallenge
# 185 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMaven
# 186 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 187 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenser::
# 188 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_SetBrainObjectGfx
# 189 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_AnnounceArrivalOfSpenser, MSGBOX_DEFAULT
# 190 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	closemessage
# 191 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_PLAYER, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceRight
# 192 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_ATTENDANT, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceRight
# 193 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setobjectxyperm LOCALID_PALACE_BATTLE_OPPONENT, 15, 1
# 194 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	addobject LOCALID_PALACE_BATTLE_OPPONENT
# 195 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	hideobjectat LOCALID_PALACE_BATTLE_OPPONENT, MAP_BATTLE_FRONTIER_BATTLE_PALACE_BATTLE_ROOM
# 196 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setobjectxy LOCALID_PALACE_BATTLE_OPPONENT, 13, 1
# 197 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setobjectxyperm LOCALID_PALACE_BATTLE_OPPONENT, 13, 1
# 198 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_DUSCLOPS, BattleFrontier_BattlePalaceBattleRoom_Movement_DusclopsEnter
# 199 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_AZURILL, BattleFrontier_BattlePalaceBattleRoom_Movement_AzurillEnter
# 200 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_OPPONENT, BattleFrontier_BattlePalaceBattleRoom_Movement_SpenserEnter
# 201 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmovement 0
# 202 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	switch VAR_TEMP_F
# 203 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_GOLD, BattleFrontier_BattlePalaceBattleRoom_EventScript_IntroSpenserGold
# 204 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_STREAK, BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserSilver
# 205 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_STREAK_LONG, BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserGold
# 206 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 207 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserSilver
# 208 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_SpenserFirstIntro, MSGBOX_DEFAULT
# 209 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 210 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserSilver::
# 211 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_ProveYourBondWithMons, MSGBOX_DEFAULT
# 212 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_BattlePalaceBattleRoom_EventScript_DoPalaceBattle
# 213 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedSpenserSilver
# 214 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyLost
# 215 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 216 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedSpenserSilver::
# 217 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	palace_incrementstreak
# 218 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_getsymbols
# 219 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_ne VAR_RESULT, 0, BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyWon
# 220 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_SpenserPostSilverBattle, MSGBOX_DEFAULT
# 221 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_PLAYER, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceUp
# 222 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_ATTENDANT, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceDown
# 223 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_LetsSeeFrontierPass, MSGBOX_DEFAULT
# 224 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 225 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_ReceivedSpiritsSymbol
# 226 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 227 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitfanfare
# 228 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_givesymbol
# 229 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_OPPONENT, Common_Movement_WalkInPlaceLeft
# 230 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmovement 0
# 231 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 232 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_ATTENDANT, Common_Movement_WalkInPlaceFasterRight
# 233 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmovement 0
# 234 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_SpenserAwaitNextTime, MSGBOX_DEFAULT
# 235 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyWon
# 236 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 237 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_IntroSpenserGold::
# 238 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 239 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserGold
# 240 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_SpenserThisTimeWontHoldBack, MSGBOX_DEFAULT
# 241 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 242 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserGold::
# 243 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_Kaaah, MSGBOX_DEFAULT
# 244 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_BattlePalaceBattleRoom_EventScript_DoPalaceBattle
# 245 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedSpenserGold
# 246 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyLost
# 247 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 248 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedSpenserGold::
# 249 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	palace_incrementstreak
# 250 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_getsymbols
# 251 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 2, BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyWon
# 252 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_SpenserYourTeamIsAdmirable, MSGBOX_DEFAULT
# 253 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_PLAYER, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceUp
# 254 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_ATTENDANT, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceDown
# 255 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_HurryWithFrontierPass, MSGBOX_DEFAULT
# 256 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 257 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_SpiritsSymbolTookGoldenShine
# 258 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 259 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitfanfare
# 260 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_givesymbol
# 261 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_OPPONENT, Common_Movement_WalkInPlaceLeft
# 262 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmovement 0
# 263 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 264 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_ATTENDANT, Common_Movement_WalkInPlaceFasterRight
# 265 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmovement 0
# 266 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_SpenserComeSeeMeAgain, MSGBOX_DEFAULT
# 267 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyWon
# 268 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 269 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_DoPalaceBattle::
# 270 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	closemessage
# 271 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, 0
# 272 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, FALSE
# 273 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	special HealPlayerParty
# 274 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_PALACE
# 275 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setvar VAR_0x8005, 0
# 276 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	special DoSpecialTrainerBattle
# 277 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_restorehelditems
# 278 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	special HealPlayerParty
# 279 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_resetsketch
# 280 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 281 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 282 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_OnWarp:
# 283 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePalaceBattleRoom_EventScript_SetUpRoomObjects
# 284 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.2byte 0
# 285 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 286 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_SetUpRoomObjects::
# 287 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	hideobjectat LOCALID_PALACE_BATTLE_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_PALACE_BATTLE_ROOM
# 288 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfx
# 289 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 290 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePalaceBattleRoom_Movement_SetInvisible
# 291 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	removeobject LOCALID_PALACE_BATTLE_OPPONENT
# 292 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_DUSCLOPS, BattleFrontier_BattlePalaceBattleRoom_Movement_SetInvisible
# 293 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_AZURILL, BattleFrontier_BattlePalaceBattleRoom_Movement_SetInvisible
# 294 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	end
# 295 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 296 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor2ndOpponent::
# 297 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor2ndOpponent
# 298 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 299 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 300 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 301 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor3rdOpponent::
# 302 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor3rdOpponent
# 303 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 304 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 305 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 306 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor4thOpponent::
# 307 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor4thOpponent
# 308 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 309 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 310 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 311 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor5thOpponent::
# 312 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor5thOpponent
# 313 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 314 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 315 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 316 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor6thOpponent::
# 317 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor6thOpponent
# 318 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 319 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 320 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 321 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor7thOpponent::
# 322 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor7thOpponent
# 323 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 324 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 325 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 326 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_SetInvisible:
# 327 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	set_invisible
# 328 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 329 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 330 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_PlayerEnterRoom:
# 331 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	set_visible
# 332 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 333 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 334 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 335 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 336 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_FaceRight:
# 337 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	face_right
# 338 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 339 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 340 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_FaceUp:
# 341 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	face_up
# 342 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 343 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 344 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_PlayerReturnToChallenge:
# 345 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	set_visible
# 346 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 347 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 348 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 349 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 350 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 351 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 352 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_OpponentEnter:
# 353 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_down
# 354 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_down
# 355 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_down
# 356 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_down
# 357 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	face_left
# 358 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 359 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 360 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_OpponentExit:
# 361 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 362 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 363 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 364 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 365 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 366 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 367 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_FaceDown:
# 368 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	face_down
# 369 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 370 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 371 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_UnusedOpponentEnter1:
# 372 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	set_visible
# 373 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 374 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 375 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	face_left
# 376 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 377 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 378 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_UnusedOpponentEnter2:
# 379 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	set_visible
# 380 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 381 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 382 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 383 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_UnusedOpponentEnter3:
# 384 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 385 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 386 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 387 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	face_left
# 388 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 389 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 390 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobby::
# 391 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	copyvar VAR_RESULT, VAR_FRONTIER_BATTLE_MODE
# 392 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyDoubles
# 393 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PALACE_LOBBY, 5, 7
# 394 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitstate
# 395 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	end
# 396 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 397 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyDoubles::
# 398 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PALACE_LOBBY, 19, 7
# 399 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitstate
# 400 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	end
# 401 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 402 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_DusclopsEnter:
# 403 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 404 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 405 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	set_visible
# 406 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_down
# 407 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_right
# 408 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_down
# 409 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_in_place_faster_left
# 410 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 411 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 412 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_AzurillEnter:
# 413 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	set_visible
# 414 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_fast_down
# 415 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_fast_right
# 416 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_fast_down
# 417 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_fast_down
# 418 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_fast_down
# 419 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_fast_down
# 420 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_fast_down
# 421 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_in_place_faster_left
# 422 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 423 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 424 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 425 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_SpenserEnter:
# 426 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 427 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 428 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 429 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 430 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 431 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 432 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 433 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	set_visible
# 434 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 435 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 436 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 437 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 438 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	face_left
# 439 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 440 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 441 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_LetMeRestoreYourMons:
# 442 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Excellent…\n"
# 443 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Let me restore your POKéMON.$"
# 444 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 445 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor2ndOpponent:
# 446 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "The 2nd opponent is next.\n"
# 447 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Are you prepared?$"
# 448 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 449 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor3rdOpponent:
# 450 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "The 3rd opponent is next.\n"
# 451 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Are you prepared?$"
# 452 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 453 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor4thOpponent:
# 454 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "The 4th opponent is next.\n"
# 455 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Are you prepared?$"
# 456 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 457 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor5thOpponent:
# 458 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "The 5th opponent is next.\n"
# 459 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Are you prepared?$"
# 460 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 461 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor6thOpponent:
# 462 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "The 6th opponent is next.\n"
# 463 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Are you prepared?$"
# 464 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 465 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor7thOpponent:
# 466 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "The 7th opponent is next.\n"
# 467 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Are you prepared?$"
# 468 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 469 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_SaveAndQuitGame:
# 470 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Would you like to save and quit\n"
# 471 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "the game?$"
# 472 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 473 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_WishToQuitChallenge:
# 474 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Do you wish to quit your challenge?$"
# 475 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 476 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_SavingData:
# 477 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Saving the data.\n"
# 478 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Have patience…$"
# 479 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 480 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_RecordLastMatch:
# 481 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Do you wish to record your latest\n"
# 482 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "match on your FRONTIER PASS?$"
# 483 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 484 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_ChallengingPalaceMaven:
# 485 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "And now…\p"
# 486 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "By winning consistently, you have\n"
# 487 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "earned the privilege of challenging\l"
# 488 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "our master, the PALACE MAVEN…$"
# 489 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 490 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_ReadyForPalaceMaven:
# 491 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "I shall send for the PALACE MAVEN.\n"
# 492 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 493 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 494 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_AnnounceArrivalOfSpenser:
# 495 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Let great fanfare announce the arrival\n"
# 496 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "of the PALACE MAVEN, SPENSER!$"
# 497 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 498 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_SpenserFirstIntro:
# 499 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "SPENSER: My physical being is with\n"
# 500 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "POKéMON always!\p"
# 501 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "My heart beats as one with\n"
# 502 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "POKéMON always!\p"
# 503 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Young one of a TRAINER!\n"
# 504 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Do you believe in your POKéMON?\p"
# 505 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Can you believe them through\n"
# 506 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "and through?\p"
# 507 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "If your bonds of trust are frail,\n"
# 508 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "you will never beat my brethren!$"
# 509 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 510 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_ProveYourBondWithMons:
# 511 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "The bond you share with your POKéMON!\n"
# 512 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Prove it to me here!$"
# 513 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 514 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_SpenserPostSilverBattle:
# 515 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "SPENSER: Gwahahah!\p"
# 516 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Hah, you never fell for my bluster!\n"
# 517 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Sorry for trying that stunt!\p"
# 518 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Here!\n"
# 519 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Bring me the thing!$"
# 520 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 521 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_LetsSeeFrontierPass:
# 522 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "My, my, if only you could maintain that\n"
# 523 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "facade of distinguished authority…\p"
# 524 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Here!\n"
# 525 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Let's see your FRONTIER PASS!$"
# 526 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 527 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_ReceivedSpiritsSymbol:
# 528 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "The Spirits Symbol was embossed on\n"
# 529 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "the FRONTIER PASS!$"
# 530 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 531 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_SpenserAwaitNextTime:
# 532 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "SPENSER: Your POKéMON's eyes are \n"
# 533 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "truly clear and unclouded.\p"
# 534 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "I will eagerly await the next\n"
# 535 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "opportunity to see you.$"
# 536 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 537 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_SpenserThisTimeWontHoldBack:
# 538 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "SPENSER: Gwahahah!\n"
# 539 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "You've battled your way up again?\p"
# 540 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "You must have developed a truly\n"
# 541 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "formidable bond with your POKéMON.\p"
# 542 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "So be it!\p"
# 543 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "This time, I won't bluster or hold back.\n"
# 544 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "This time, there's no fooling around.\p"
# 545 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Ready now?\n"
# 546 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Prepare to lose!$"
# 547 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 548 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_Kaaah:
# 549 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "… … …Kaaah!$"
# 550 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 551 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_SpenserYourTeamIsAdmirable:
# 552 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "SPENSER: Well, that was some display!\n"
# 553 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Even fully unleashed, my brethren\l"
# 554 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "could not overpower you.\p"
# 555 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Your team spirit is truly admirable!\p"
# 556 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Here!\n"
# 557 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Bring me that thing, will you?$"
# 558 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 559 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_HurryWithFrontierPass:
# 560 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "My, my, if only you could maintain\n"
# 561 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "a certain level of decorum…\p"
# 562 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Gaaah, here!\n"
# 563 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Hurry with that FRONTIER PASS, you!$"
# 564 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 565 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_SpiritsSymbolTookGoldenShine:
# 566 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "The Spirits Symbol took on\n"
# 567 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "a golden shine!$"
# 568 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 569 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_SpenserComeSeeMeAgain:
# 570 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "SPENSER: Gwahahah!\p"
# 571 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Come see me time and again!\n"
# 572 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "My brethren and I will be waiting!$"
