# 1 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
@ On this map the player will automatically walk into the room, but the camera is supposed to remain still.
# 3 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
@ To do this GF sets the player (LOCALID_PLAYER) invisible and creates a fake player object (LOCALID_DOME_PLAYER).
# 4 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
@ The graphics of this fake player object are represented with VAR_OBJ_GFX_ID_1.
# 5 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
@ The graphics of the opponent are represented with VAR_OBJ_GFX_ID_0, which will ultimately be set by dome_setopponentgfx.
# 6 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 7 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
.set NO_DRAW,       0
# 8 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
.set DRAW_TRAINER,  1
# 9 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
.set DRAW_TUCKER,   2
# 10 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 11 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_MapScripts::
# 12 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattleDomeBattleRoom_OnTransition
# 13 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleDomeBattleRoom_OnFrame
# 14 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleDomeBattleRoom_OnWarp
# 15 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattleDomeBattleRoom_OnResume
# 16 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.byte 0
# 17 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 18 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_OnTransition:
# 19 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_setopponentgfx
# 20 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 21 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	copyvar VAR_TEMP_F, VAR_RESULT
# 22 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call_if_eq VAR_RESULT, DOME_ROUND1, BattleFrontier_BattleDomeBattleRoom_EventScript_SetWalkingAudienceMemberPos
# 23 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx
# 24 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	end
# 25 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 26 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx::
# 27 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	checkplayergender
# 28 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfxMale
# 29 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfxFemale
# 30 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 31 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 32 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfxMale::
# 33 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 34 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 35 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 36 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfxFemale::
# 37 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 38 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 39 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 40 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_OnFrame:
# 41 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom
# 42 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.2byte 0
# 43 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 44 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom::
# 45 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	lockall
# 46 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_GetRoundNum
# 47 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call_if_eq VAR_RESULT, DOME_ROUND1, BattleFrontier_BattleDomeBattleRoom_EventScript_TryDoAudienceMemberWalkToSeat
# 48 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applywaitmovement LOCALID_DOME_ANNOUNCER, Common_Movement_WalkInPlaceDown
# 49 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer
# 50 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_PlayerHasEnteredDome, MSGBOX_DEFAULT
# 51 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	closemessage
# 52 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	showobjectat LOCALID_DOME_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_DOME_BATTLE_ROOM
# 53 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_ne VAR_TEMP_F, DOME_FINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_PlayerEnter
# 54 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_ne VAR_TEMP_E, FRONTIER_BRAIN_NOT_READY, BattleFrontier_BattleDomeBattleRoom_EventScript_PlayerEnterForTucker
# 55 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_PlayerEnter::
# 56 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_PLAYER, BattleFrontier_BattleDomeBattleRoom_Movement_PlayerEnter
# 57 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceReactToPlayer
# 58 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 59 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_PlayerEnterForTucker::
# 60 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_PLAYER, BattleFrontier_BattleDomeBattleRoom_Movement_PlayerEnterForTucker
# 61 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceReactToPlayer::
# 62 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 63 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 64 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 65 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_ne VAR_TEMP_F, DOME_FINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_BattleOpponent
# 66 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_ne VAR_TEMP_E, FRONTIER_BRAIN_NOT_READY, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTucker
# 67 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_BattleOpponent::
# 68 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_getopponentname
# 69 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_PlayerVersusTrainer, MSGBOX_DEFAULT
# 70 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	closemessage
# 71 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_PLAYER, BattleFrontier_BattleDomeBattleRoom_Movement_PlayerStepForward
# 72 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_OPPONENT, BattleFrontier_BattleDomeBattleRoom_Movement_OpponentStepForward
# 73 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 74 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	tower_getopponentintro 0
# 75 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 76 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	closemessage
# 77 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_initopponentparty
# 78 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_DoDomeBattle
# 79 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, NO_DRAW
# 80 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	switch VAR_RESULT
# 81 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case B_OUTCOME_WON, BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent
# 82 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case B_OUTCOME_LOST, BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent
# 83 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case B_OUTCOME_FORFEITED, BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent
# 84 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, DRAW_TRAINER
# 85 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_Draw::
# 86 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_RefereeDecisionPleaseWait, MSGBOX_DEFAULT
# 87 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	closemessage
# 88 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 89 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 90 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 60
# 91 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applywaitmovement LOCALID_DOME_REFEREE, BattleFrontier_BattleDomeBattleRoom_Movement_RefereeEnter
# 92 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applywaitmovement LOCALID_DOME_ANNOUNCER, BattleFrontier_BattleDomeBattleRoom_Movement_AnnouncerFaceLeft
# 93 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 180
# 94 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applywaitmovement LOCALID_DOME_REFEREE, BattleFrontier_BattleDomeBattleRoom_Movement_RefereeExit
# 95 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq VAR_TEMP_2, DRAW_TUCKER, BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent @ Tucker always wins on a draw
# 96 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_compareseeds
# 97 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	switch VAR_RESULT
# 98 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent
# 99 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent::
# 100 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applywaitmovement LOCALID_DOME_ANNOUNCER, Common_Movement_WalkInPlaceDown
# 101 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_getopponentname
# 102 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call_if_eq VAR_TEMP_2, NO_DRAW, BattleFrontier_BattleDomeBattleRoom_EventScript_OpponentWon
# 103 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call_if_eq VAR_TEMP_2, DRAW_TRAINER, BattleFrontier_BattleDomeBattleRoom_EventScript_OpponentWonDraw
# 104 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call_if_eq VAR_TEMP_2, DRAW_TUCKER, BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerWonDraw
# 105 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 106 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 107 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 60
# 108 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_LostTourney::
# 109 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_resolvewinners DOME_PLAYER_LOST_MATCH
# 110 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobbyLost::
# 111 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 112 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobby
# 113 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 114 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_OpponentWon::
# 115 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_gettrainername STR_VAR_2
# 116 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_TrainerIsWinner
# 117 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 118 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 119 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 120 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_OpponentWonDraw::
# 121 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_gettrainername STR_VAR_1
# 122 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerTrainer
# 123 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 124 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 125 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 126 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerWonDraw::
# 127 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerTucker
# 128 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 129 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 130 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 131 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent::
# 132 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applywaitmovement LOCALID_DOME_ANNOUNCER, Common_Movement_WalkInPlaceDown
# 133 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call_if_eq VAR_TEMP_2, NO_DRAW, BattleFrontier_BattleDomeBattleRoom_EventScript_PlayerWon
# 134 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call_if_eq VAR_TEMP_2, DRAW_TRAINER, BattleFrontier_BattleDomeBattleRoom_EventScript_PlayerWonDraw
# 135 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 136 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 137 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 60
# 138 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_getroundtext
# 139 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_resolvewinners DOME_PLAYER_WON_MATCH
# 140 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 141 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 142 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
# 143 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	switch VAR_RESULT
# 144 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case DOME_ROUNDS_COUNT, BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney
# 145 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_0x8006, 1
# 146 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_DOME_PRE_BATTLE_ROOM, 5, 3
# 147 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitstate
# 148 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 149 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney::
# 150 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applywaitmovement LOCALID_DOME_PLAYER, BattleFrontier_BattleDomeBattleRoom_Movement_PlayerApproachAudience
# 151 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_LVL_MODE
# 152 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	switch VAR_RESULT
# 153 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattleDomeBattleRoom_EventScript_WonLvOpenTourney
# 154 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLv50Champ, MSGBOX_DEFAULT
# 155 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_CelebrateWin
# 156 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 157 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_WonLvOpenTourney::
# 158 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLvOpenChamp, MSGBOX_DEFAULT
# 159 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_CelebrateWin::
# 160 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	special DoDomeConfetti
# 161 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 162 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 163 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 60
# 164 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 165 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobby
# 166 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 167 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_PlayerWon::
# 168 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsWinner, MSGBOX_DEFAULT
# 169 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 170 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 171 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_PlayerWonDraw::
# 172 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerPlayer, MSGBOX_DEFAULT
# 173 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 174 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 175 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer::
# 176 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_get DOME_DATA_ATTEMPTED_CHALLENGE
# 177 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt
# 178 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_get DOME_DATA_HAS_WON_CHALLENGE
# 179 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon
# 180 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_get DOME_DATA_WIN_STREAK_ACTIVE
# 181 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak
# 182 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion
# 183 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 184 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 185 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt::
# 186 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_GetRoundNum
# 187 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	switch VAR_RESULT
# 188 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case DOME_ROUND1, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttemptRound1
# 189 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case DOME_ROUND2, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttemptRound2
# 190 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case DOME_SEMIFINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttemptSemifinal
# 191 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case DOME_FINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttemptFinal
# 192 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 193 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 194 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttemptRound1::
# 195 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_BrightNewHope
# 196 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 197 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 198 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 199 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttemptRound2::
# 200 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_RisingStar
# 201 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 202 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 203 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 204 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttemptSemifinal::
# 205 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_WillTheyRaceToChampionship
# 206 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 207 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 208 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 209 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttemptFinal::
# 210 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_CanAchieveChampionFirstTry
# 211 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 212 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 213 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 214 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon::
# 215 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_GetRoundNum
# 216 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	switch VAR_RESULT
# 217 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case DOME_ROUND1, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWonRound1
# 218 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case DOME_ROUND2, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWonRound2
# 219 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case DOME_SEMIFINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWonSemifinal
# 220 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case DOME_FINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWonFinal
# 221 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 222 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 223 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWonRound1::
# 224 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_CanLossBeAvenged
# 225 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 226 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 227 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 228 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWonRound2::
# 229 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_OnFireForChampionship
# 230 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 231 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 232 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 233 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWonSemifinal::
# 234 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_WinHereAdvancesToFinal
# 235 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 236 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 237 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 238 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWonFinal::
# 239 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_WillLongHeldDreamComeTrue
# 240 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 241 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 242 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 243 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion::
# 244 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_ne VAR_TEMP_F, DOME_FINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker
# 245 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	switch VAR_TEMP_E
# 246 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_SILVER, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerPreTuckerSilver
# 247 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_GOLD, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerPreTuckerGold
# 248 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_STREAK, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerPreTuckerSilver
# 249 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_STREAK_LONG, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerPreTuckerGold
# 250 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker::
# 251 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_GetRoundNum
# 252 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	switch VAR_RESULT
# 253 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case DOME_ROUND1, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionRound1
# 254 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case DOME_ROUND2, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionRound2
# 255 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case DOME_SEMIFINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionSemifinal
# 256 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case DOME_FINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionFinal
# 257 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 258 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 259 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionRound1::
# 260 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_TheInvincibleChampion
# 261 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 262 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 263 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 264 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionRound2::
# 265 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_CanAnyoneHopeToBeatTrainer
# 266 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 267 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 268 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 269 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionSemifinal::
# 270 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_DoBattlesExistSolelyForTrainer
# 271 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 272 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 273 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 274 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionFinal::
# 275 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_CurrentChampAimingToRetainTitle
# 276 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 277 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 278 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 279 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerPreTuckerSilver::
# 280 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_FeelGlowOfTrueMaster, MSGBOX_DEFAULT
# 281 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 282 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 283 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerPreTuckerGold::
# 284 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_CanWinStreakBeStretched, MSGBOX_DEFAULT
# 285 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 286 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 287 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak::
# 288 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_GetRoundNum
# 289 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	switch VAR_RESULT
# 290 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case DOME_ROUND1, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreakRound1
# 291 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case DOME_ROUND2, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreakRound2
# 292 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case DOME_SEMIFINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreakSemifinal
# 293 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case DOME_FINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreakFinal
# 294 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 295 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 296 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreakRound1::
# 297 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_FormerChampHasReturned
# 298 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 299 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 300 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 301 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreakRound2::
# 302 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_FormerToughnessReturned
# 303 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 304 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 305 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 306 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreakSemifinal::
# 307 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_WillDoExpectedAdvanceToFinals
# 308 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 309 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 310 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 311 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreakFinal::
# 312 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_WillFormerChampRegainGlory
# 313 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 314 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 315 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 316 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_GetRoundNum::
# 317 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 318 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 319 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 320 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTucker::
# 321 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	switch VAR_TEMP_E
# 322 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_SILVER, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTuckerSilver
# 323 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_GOLD, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTuckerGold
# 324 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_STREAK, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTuckerSilver
# 325 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_STREAK_LONG, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTuckerGold
# 326 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 327 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTuckerSilver::
# 328 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_MakeWayForDomeAceTucker, MSGBOX_DEFAULT
# 329 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter
# 330 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 331 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTuckerGold::
# 332 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_LegendHasReturnedDomeAceTucker, MSGBOX_DEFAULT
# 333 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter::
# 334 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	closemessage
# 335 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_AUDIENCE_TWIN, BattleFrontier_BattleDomeBattleRoom_Movement_AudienceTwinJump
# 336 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_ANNOUNCER, BattleFrontier_BattleDomeBattleRoom_Movement_AnnouncerMoveForTuckerEntrance
# 337 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_OPPONENT, BattleFrontier_BattleDomeBattleRoom_Movement_TuckerEnterAndDance
# 338 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 339 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 340 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitse
# 341 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 342 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 343 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitse
# 344 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 345 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 346 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitse
# 347 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 348 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 349 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitse
# 350 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 351 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 352 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitse
# 353 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 354 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_SpectatorTuckerChant
# 355 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 356 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 357 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 358 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitse
# 359 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	switch VAR_TEMP_E
# 360 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_GOLD, BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerGoldIntro
# 361 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_STREAK, BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver
# 362 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_STREAK_LONG, BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold
# 363 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 364 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver
# 365 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_TuckerSilverIntro, MSGBOX_DEFAULT
# 366 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 367 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver::
# 368 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_LetsSeeYourStrategy, MSGBOX_DEFAULT
# 369 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_DoTuckerBattle
# 370 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	switch VAR_RESULT
# 371 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case B_OUTCOME_LOST, BattleFrontier_BattleDomeBattleRoom_EventScript_LostToTucker
# 372 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case B_OUTCOME_FORFEITED, BattleFrontier_BattleDomeBattleRoom_EventScript_LostToTucker
# 373 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case B_OUTCOME_DREW, BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerDraw
# 374 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_IncredibleVictorIsPlayer, MSGBOX_DEFAULT
# 375 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_resolvewinners DOME_PLAYER_WON_MATCH
# 376 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_getsymbols
# 377 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_ne VAR_RESULT, 0, BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney
# 378 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	closemessage
# 379 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applywaitmovement LOCALID_DOME_OPPONENT, BattleFrontier_BattleDomeBattleRoom_Movement_TuckerApproachPlayer
# 380 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_SeeYourFrontierPass, MSGBOX_DEFAULT
# 381 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 382 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_ReceivedTacticsSymbol
# 383 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 384 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitfanfare
# 385 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_givesymbol
# 386 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_WontUnderestimateYouNextTime, MSGBOX_DEFAULT
# 387 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney
# 388 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 389 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerGoldIntro::
# 390 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 391 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold
# 392 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_TuckerGoldIntro, MSGBOX_DEFAULT
# 393 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 394 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold::
# 395 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_UnleashAllPowerIPossess, MSGBOX_DEFAULT
# 396 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_DoTuckerBattle
# 397 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	switch VAR_RESULT
# 398 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case B_OUTCOME_LOST, BattleFrontier_BattleDomeBattleRoom_EventScript_LostToTucker
# 399 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case B_OUTCOME_FORFEITED, BattleFrontier_BattleDomeBattleRoom_EventScript_LostToTucker
# 400 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case B_OUTCOME_DREW, BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerDraw
# 401 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_IncredibleVictorIsPlayer, MSGBOX_DEFAULT
# 402 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_resolvewinners DOME_PLAYER_WON_MATCH
# 403 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_getsymbols
# 404 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 2, BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney
# 405 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	closemessage
# 406 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applywaitmovement LOCALID_DOME_OPPONENT, BattleFrontier_BattleDomeBattleRoom_Movement_TuckerApproachPlayer
# 407 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_NeverLostWhenPowerUnleashed, MSGBOX_DEFAULT
# 408 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 409 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_TacticsSymbolTookGoldenShine
# 410 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 411 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitfanfare
# 412 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_givesymbol
# 413 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_LookForwardToNextEncounter, MSGBOX_DEFAULT
# 414 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney
# 415 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 416 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_DoTuckerBattle::
# 417 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_PlayerVersusTucker, MSGBOX_DEFAULT
# 418 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	closemessage
# 419 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_PLAYER, BattleFrontier_BattleDomeBattleRoom_Movement_PlayerStepForward2
# 420 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_OPPONENT, BattleFrontier_BattleDomeBattleRoom_Movement_TuckerStepForward
# 421 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 422 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_DoDomeBattle
# 423 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 424 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 425 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_LostToTucker::
# 426 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_WinnerIsTucker, MSGBOX_DEFAULT
# 427 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 428 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 429 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitse
# 430 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_LostTourney
# 431 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 432 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerDraw::
# 433 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, DRAW_TUCKER
# 434 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_Draw
# 435 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 436 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_DoDomeBattle::
# 437 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, FALSE
# 438 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	special HealPlayerParty
# 439 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_DOME
# 440 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_0x8005, 0
# 441 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_TEMP_9, 1
# 442 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	special DoSpecialTrainerBattle
# 443 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_TEMP_9, 0
# 444 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_restorehelditems
# 445 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	special HealPlayerParty
# 446 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_resetsketch
# 447 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 448 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 449 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_OnWarp:
# 450 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleDomeBattleRoom_EventScript_SetUpObjects
# 451 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.2byte 0
# 452 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 453 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_SetUpObjects::
# 454 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	hideobjectat LOCALID_DOME_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_DOME_BATTLE_ROOM
# 455 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience
# 456 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx
# 457 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 458 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleDomeBattleRoom_Movement_SetInvisible
# 459 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 460 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_ne VAR_RESULT, DOME_FINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_EndSetUpObjects
# 461 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_getbrainstatus
# 462 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	copyvar VAR_TEMP_E, VAR_RESULT
# 463 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FRONTIER_BRAIN_NOT_READY, BattleFrontier_BattleDomeBattleRoom_EventScript_EndSetUpObjects
# 464 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_SetBrainObjectGfx
# 465 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setobjectxyperm LOCALID_DOME_OPPONENT, 13, 9
# 466 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	removeobject LOCALID_DOME_OPPONENT
# 467 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	addobject LOCALID_DOME_OPPONENT
# 468 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_OPPONENT, BattleFrontier_BattleDomeBattleRoom_Movement_SetInvisibleFacingUp
# 469 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_EndSetUpObjects::
# 470 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	end
# 471 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 472 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_OnResume:
# 473 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call_if_eq VAR_TEMP_9, 1, BattleFrontier_BattleDomeBattleRoom_EventScript_CallAddAudience
# 474 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	end
# 475 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 476 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_CallAddAudience::
# 477 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience
# 478 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 479 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 480 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
@ Add audience members to supplement the permanent object event audience
# 481 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience::
# 482 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call_if_eq VAR_TEMP_F, DOME_ROUND1, BattleFrontier_BattleDomeBattleRoom_EventScript_AddRound1Audience
# 483 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call_if_eq VAR_TEMP_F, DOME_ROUND2, BattleFrontier_BattleDomeBattleRoom_EventScript_AddRound2Audience
# 484 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call_if_eq VAR_TEMP_F, DOME_SEMIFINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_AddSemifinalAudience
# 485 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call_if_eq VAR_TEMP_F, DOME_FINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_AddFinalAudience
# 486 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 487 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 488 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AddRound1Audience::
# 489 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 490 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 491 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AddRound2Audience::
# 492 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 1, 3, 0
# 493 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_F, 4, 6, 0
# 494 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 6, 8, 0
# 495 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_GIRL, 9, 11, 0
# 496 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 11, 13, 0
# 497 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 13, 15, 0
# 498 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 19, 7, 1
# 499 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 22, 11, 1
# 500 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_BOY, 25, 15, 1
# 501 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 26, 2, 2
# 502 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCHOOL_KID_M, 29, 5, 1
# 503 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 504 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 505 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AddSemifinalAudience::
# 506 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 1, 3, 0
# 507 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_F, 4, 6, 0
# 508 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 6, 8, 0
# 509 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 7, 9, 0
# 510 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_GIRL, 9, 11, 0
# 511 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_LASS, 10, 12, 0
# 512 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 11, 13, 0
# 513 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 13, 15, 0
# 514 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 15, 2, 1
# 515 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 16, 3, 1
# 516 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 17, 4, 1
# 517 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 19, 7, 1
# 518 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_F, 20, 9, 1
# 519 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 22, 11, 1
# 520 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 23, 13, 1
# 521 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_BOY, 25, 15, 1
# 522 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 26, 2, 2
# 523 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_HEX_MANIAC, 28, 5, 2
# 524 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCHOOL_KID_M, 29, 5, 1
# 525 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_MART_EMPLOYEE, 30, 6, 2
# 526 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 31, 8, 2
# 527 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 528 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 529 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AddFinalAudience::
# 530 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 0, 2, 0
# 531 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 1, 3, 0
# 532 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 2, 15, 0
# 533 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 3, 5, 0
# 534 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_F, 4, 6, 0
# 535 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 5, 7, 0
# 536 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 6, 8, 0
# 537 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 7, 9, 0
# 538 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_3, 8, 10, 0
# 539 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_GIRL, 9, 11, 0
# 540 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_LASS, 10, 12, 0
# 541 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 11, 13, 0
# 542 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 12, 14, 0
# 543 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 13, 15, 2
# 544 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_HIKER, 14, 12, 2
# 545 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 15, 2, 1
# 546 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 16, 3, 1
# 547 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 17, 4, 1
# 548 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_3, 18, 6, 1
# 549 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 19, 7, 1
# 550 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_F, 20, 9, 1
# 551 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_2, 21, 10, 1
# 552 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 22, 11, 1
# 553 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 23, 13, 1
# 554 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 24, 14, 1
# 555 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_BOY, 25, 15, 1
# 556 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 26, 2, 2
# 557 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_FAT_MAN, 27, 3, 2
# 558 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_HEX_MANIAC, 28, 5, 2
# 559 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCHOOL_KID_M, 29, 5, 1
# 560 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_MART_EMPLOYEE, 30, 6, 2
# 561 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 31, 8, 2
# 562 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 563 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 564 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Movement_SetInvisible:
# 565 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	set_invisible
# 566 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
# 567 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 568 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Movement_PlayerEnter:
# 569 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	set_visible
# 570 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 571 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_up
# 572 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_up
# 573 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_up
# 574 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 575 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Movement_PlayerStepForward:
# 576 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 577 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
# 578 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 579 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Movement_PlayerApproachAudience:
# 580 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_up
# 581 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
# 582 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 583 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
@ Identical to Movement_PlayerEnter
# 584 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Movement_PlayerEnterForTucker:
# 585 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	set_visible
# 586 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 587 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_up
# 588 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_up
# 589 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_up
# 590 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 591 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 592 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
# 593 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 594 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Movement_PlayerStepForward2:
# 595 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 596 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
# 597 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 598 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Movement_OpponentStepForward:
# 599 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 600 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
# 601 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 602 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Movement_SetInvisibleFacingUp:
# 603 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_up
# 604 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	set_invisible
# 605 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
# 606 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 607 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Movement_TuckerEnterAndDance:
# 608 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	set_visible
# 609 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_up
# 610 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_up
# 611 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_up
# 612 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 613 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 614 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 615 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_down
# 616 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 617 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 618 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_right
# 619 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 620 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 621 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_up
# 622 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 623 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 624 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 625 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 626 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_fast_up
# 627 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_fast_up
# 628 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 629 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 630 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 631 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_down
# 632 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 633 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 634 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_right
# 635 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 636 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 637 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_up
# 638 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 639 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 640 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 641 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	jump_2_left
# 642 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	unlock_facing_direction
# 643 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_up
# 644 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	lock_facing_direction
# 645 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	jump_2_left
# 646 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	jump_2_left
# 647 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	unlock_facing_direction
# 648 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_right
# 649 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	lock_facing_direction
# 650 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	jump_2_left
# 651 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	unlock_facing_direction
# 652 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_down
# 653 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_2
# 654 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 655 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 656 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 657 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_up
# 658 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 659 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 660 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_right
# 661 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 662 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 663 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_down
# 664 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 665 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 666 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 667 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 668 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_up
# 669 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 670 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_right
# 671 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 672 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_down
# 673 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 674 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 675 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_2
# 676 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_up
# 677 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_2
# 678 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_right
# 679 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_2
# 680 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_down
# 681 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_2
# 682 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 683 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	lock_facing_direction
# 684 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 685 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_slow_right
# 686 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 687 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_slow_right
# 688 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	unlock_facing_direction
# 689 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_up
# 690 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 691 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	jump_in_place_up
# 692 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	jump_in_place_up
# 693 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 694 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 695 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 696 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 697 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	jump_in_place_up
# 698 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 699 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 700 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_down
# 701 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_down
# 702 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 703 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_2
# 704 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_up
# 705 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_2
# 706 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_right
# 707 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_2
# 708 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_down
# 709 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_2
# 710 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 711 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 712 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 713 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 714 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
# 715 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 716 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Movement_AnnouncerMoveForTuckerEntrance:
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 718 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 719 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 720 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 721 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 722 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 723 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 724 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 725 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 726 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 727 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 728 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 729 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 730 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 731 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 732 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 733 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 734 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 735 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 736 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 737 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 738 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 739 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 740 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 741 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 742 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 743 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 744 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 745 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 746 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 747 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 748 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 749 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 750 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 751 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 752 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 753 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 754 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 755 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 756 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 757 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 758 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 759 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 760 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 761 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 762 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 763 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_in_place_faster_down
# 764 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
# 765 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 766 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Movement_TuckerStepForward:
# 767 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 768 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
# 769 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 770 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Movement_TuckerApproachPlayer:
# 771 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 772 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 773 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
# 774 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 775 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround::
# 776 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 0, DIR_EAST
# 777 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 2, DIR_EAST
# 778 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 4, DIR_EAST
# 779 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 6, DIR_EAST
# 780 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 8, DIR_EAST
# 781 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 10, DIR_WEST
# 782 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 12, DIR_WEST
# 783 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 14, DIR_WEST
# 784 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 16, DIR_WEST
# 785 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 18, DIR_WEST
# 786 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 20, DIR_EAST
# 787 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 22, DIR_EAST
# 788 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 24, DIR_EAST
# 789 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 26, DIR_EAST
# 790 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 28, DIR_EAST
# 791 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 30, DIR_EAST
# 792 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 20
# 793 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 0, DIR_SOUTH
# 794 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 2, DIR_SOUTH
# 795 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 4, DIR_SOUTH
# 796 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 6, DIR_SOUTH
# 797 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 8, DIR_SOUTH
# 798 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 10, DIR_SOUTH
# 799 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 12, DIR_SOUTH
# 800 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 14, DIR_SOUTH
# 801 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 16, DIR_SOUTH
# 802 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 18, DIR_SOUTH
# 803 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 20, DIR_SOUTH
# 804 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 22, DIR_SOUTH
# 805 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 24, DIR_SOUTH
# 806 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 26, DIR_SOUTH
# 807 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 28, DIR_SOUTH
# 808 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 30, DIR_SOUTH
# 809 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 20
# 810 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 1, DIR_EAST
# 811 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 3, DIR_EAST
# 812 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 5, DIR_EAST
# 813 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 7, DIR_EAST
# 814 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 9, DIR_EAST
# 815 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 11, DIR_WEST
# 816 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 13, DIR_WEST
# 817 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 15, DIR_WEST
# 818 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 17, DIR_WEST
# 819 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 19, DIR_WEST
# 820 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 21, DIR_EAST
# 821 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 23, DIR_EAST
# 822 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 25, DIR_EAST
# 823 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 27, DIR_WEST
# 824 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 31, DIR_WEST
# 825 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 20
# 826 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 1, DIR_SOUTH
# 827 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 3, DIR_SOUTH
# 828 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 5, DIR_SOUTH
# 829 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 7, DIR_SOUTH
# 830 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 9, DIR_SOUTH
# 831 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 11, DIR_SOUTH
# 832 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 13, DIR_SOUTH
# 833 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 15, DIR_SOUTH
# 834 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 17, DIR_SOUTH
# 835 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 19, DIR_SOUTH
# 836 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 21, DIR_SOUTH
# 837 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 23, DIR_SOUTH
# 838 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 25, DIR_SOUTH
# 839 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 27, DIR_SOUTH
# 840 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 31, DIR_SOUTH
# 841 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 20
# 842 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 843 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 844 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobby::
# 845 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	copyvar VAR_RESULT, VAR_FRONTIER_BATTLE_MODE
# 846 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomePreBattleRoom_EventScript_WarpToLobbyDoubles
# 847 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_DOME_LOBBY, 5, 11
# 848 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitstate
# 849 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	end
# 850 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 851 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_WarpToLobbyDoubles::
# 852 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_DOME_LOBBY, 17, 11
# 853 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitstate
# 854 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	end
# 855 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 856 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
@ On round 1 there's a 50% chance that a specific audience member will walk to his seat
# 857 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_SetWalkingAudienceMemberPos::
# 858 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	random 2
# 859 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	copyvar VAR_TEMP_D, VAR_RESULT
# 860 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq VAR_TEMP_D, 0, Common_EventScript_NopReturn
# 861 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setobjectxyperm LOCALID_DOME_AUDIENCE_WALKING, 2, 0
# 862 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setobjectmovementtype LOCALID_DOME_AUDIENCE_WALKING, MOVEMENT_TYPE_FACE_RIGHT
# 863 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 864 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 865 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_TryDoAudienceMemberWalkToSeat::
# 866 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq VAR_TEMP_D, 0, Common_EventScript_NopReturn
# 867 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_AUDIENCE_WALKING, BattleFrontier_BattleDomeBattleRoom_Movement_AudienceMemberWalkToSeat
# 868 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 869 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 870 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Movement_AudienceTwinJump:
# 871 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 872 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 873 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 874 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 875 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 876 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 877 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 878 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 879 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 880 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 881 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 882 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 883 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 884 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	disable_jump_landing_ground_effect
# 885 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	jump_in_place_down
# 886 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 887 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	jump_in_place_down
# 888 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	enable_jump_landing_ground_effect
# 889 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
# 890 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 891 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Movement_AudienceMemberWalkToSeat:
# 892 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_down
# 893 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_down
# 894 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 895 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 896 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_in_place_faster_down
# 897 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
# 898 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 899 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Movement_RefereeEnter:
# 900 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 901 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 902 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 903 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 904 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
# 905 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 906 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Movement_AnnouncerFaceLeft:
# 907 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_in_place_faster_left
# 908 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
# 909 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 910 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Movement_RefereeExit:
# 911 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 912 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 913 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 914 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 915 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
# 916 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 917 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_PlayerHasEnteredDome:
# 918 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{PLAYER} has entered the BATTLE DOME!$"
# 919 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 920 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_PlayerVersusTrainer:
# 921 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{STR_VAR_1}\n"
# 922 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "match!\p"
# 923 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{PLAYER} versus {STR_VAR_2}!\p"
# 924 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Let the battle begin!$"
# 925 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 926 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsWinner:
# 927 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{PLAYER} is the winner!\n"
# 928 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Congratulations!$"
# 929 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 930 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_TrainerIsWinner:
# 931 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{STR_VAR_2} is the winner!\n"
# 932 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Congratulations!$"
# 933 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 934 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLv50Champ:
# 935 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{PLAYER} is the Level 50\n"
# 936 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Battle Tournament Champion!\p"
# 937 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Congratulations!$"
# 938 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 939 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLvOpenChamp:
# 940 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{PLAYER} is the Open Level\n"
# 941 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Battle Tournament Champion!\p"
# 942 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Congratulations!$"
# 943 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 944 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_RefereeDecisionPleaseWait:
# 945 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "What an unbelievable finish!\n"
# 946 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "We have a double knockout!\p"
# 947 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "In this event, the Battle Tournament\n"
# 948 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "rules call for a REFEREE'S decision.\p"
# 949 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Please wait while the judging\n"
# 950 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "is under way.$"
# 951 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 952 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerTrainer:
# 953 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The REFEREES have reached\n"
# 954 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "a decision!\p"
# 955 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The winner is…\n"
# 956 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Oh, my goodness!\l"
# 957 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The winner is {STR_VAR_1}!\l"
# 958 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Congratulations!$"
# 959 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 960 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerPlayer:
# 961 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The REFEREES have reached\n"
# 962 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "a decision!\p"
# 963 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The winner is…\n"
# 964 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Oh, my goodness!\l"
# 965 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The winner is {PLAYER}!\l"
# 966 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Congratulations!$"
# 967 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 968 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_BrightNewHope:
# 969 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The bright new hope!\p"
# 970 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "$"
# 971 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 972 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_RisingStar:
# 973 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The rising star!\p"
# 974 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "$"
# 975 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 976 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_WillTheyRaceToChampionship:
# 977 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Will this TRAINER race to\n"
# 978 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "the championship?\p"
# 979 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "$"
# 980 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 981 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_CanAchieveChampionFirstTry:
# 982 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Can the feat of a championship\n"
# 983 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "on the first try be achieved?\p"
# 984 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "$"
# 985 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 986 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_CanLossBeAvenged:
# 987 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Can the loss of the last match\n"
# 988 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "be avenged?\p"
# 989 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "$"
# 990 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 991 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_OnFireForChampionship:
# 992 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The TRAINER is on fire for\n"
# 993 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "the first championship try!\p"
# 994 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "$"
# 995 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 996 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_WinHereAdvancesToFinal:
# 997 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "A win here means this TRAINER\n"
# 998 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "advances to the final!\p"
# 999 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "$"
# 1000 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1001 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_WillLongHeldDreamComeTrue:
# 1002 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Will the long-held dream of\n"
# 1003 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "a championship finally come true?\p"
# 1004 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "$"
# 1005 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1006 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_TheInvincibleChampion:
# 1007 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The invincible champion!\p"
# 1008 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "$"
# 1009 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1010 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_CanAnyoneHopeToBeatTrainer:
# 1011 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Can anyone hope to beat this\n"
# 1012 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "TRAINER?\p"
# 1013 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "$"
# 1014 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1015 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_DoBattlesExistSolelyForTrainer:
# 1016 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Do battles exist solely for\n"
# 1017 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "this TRAINER?\p"
# 1018 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "$"
# 1019 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1020 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_CurrentChampAimingToRetainTitle:
# 1021 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The current champion aiming to\n"
# 1022 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "retain the title!\p"
# 1023 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "$"
# 1024 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1025 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_FormerChampHasReturned:
# 1026 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The former champion has returned!\p"
# 1027 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "$"
# 1028 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1029 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_FormerToughnessReturned:
# 1030 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The former toughness has returned!\p"
# 1031 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "$"
# 1032 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1033 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_WillDoExpectedAdvanceToFinals:
# 1034 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Will this TRAINER do as expected\n"
# 1035 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "and advance to the finals?\p"
# 1036 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "$"
# 1037 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1038 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_WillFormerChampRegainGlory:
# 1039 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Will the former champ regain\n"
# 1040 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "lost glory?\p"
# 1041 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "$"
# 1042 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1043 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_FeelGlowOfTrueMaster:
# 1044 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Feel the glow of a true master!$"
# 1045 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1046 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_MakeWayForDomeAceTucker:
# 1047 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "And now… The TRAINER standing in\n"
# 1048 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{PLAYER}'s record-setting path…\p"
# 1049 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Yes! The one and only!\n"
# 1050 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The BATTLE DOME COMMISSIONER!\l"
# 1051 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Our very own DOME ACE!\l"
# 1052 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Make way for TUCKER!$"
# 1053 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1054 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_SpectatorTuckerChant:
# 1055 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Spectators: TUCKER! TUCKER!\n"
# 1056 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "TUCKER! TUCKER! TUCKER!$"
# 1057 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1058 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_TuckerSilverIntro:
# 1059 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "TUCKER: Ahahah!\p"
# 1060 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Do you hear it? This crowd!\n"
# 1061 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "They're all itching to see our match!\p"
# 1062 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Ahahah!\p"
# 1063 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "I bet you're twitching all over from\n"
# 1064 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "the tension of getting to battle me!\p"
# 1065 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "But don't you worry about a thing!\p"
# 1066 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "I'm the no. 1 star of the BATTLE DOME!\n"
# 1067 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "I, TUCKER the DOME ACE, will bathe you\l"
# 1068 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "in my brilliant glow!$"
# 1069 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1070 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_LetsSeeYourStrategy:
# 1071 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Your strategy!\n"
# 1072 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Let's see it!$"
# 1073 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1074 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_IncredibleVictorIsPlayer:
# 1075 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Unbelievable! It's incredible!\n"
# 1076 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The victor is {PLAYER}!$"
# 1077 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1078 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_WinnerIsTucker:
# 1079 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The winner is TUCKER!\n"
# 1080 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The DOME ACE has prevailed!\p"
# 1081 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Congratulations, TUCKER!$"
# 1082 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1083 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_SeeYourFrontierPass:
# 1084 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "TUCKER: Rules are rules!\n"
# 1085 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Let me see your FRONTIER PASS.$"
# 1086 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1087 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_ReceivedTacticsSymbol:
# 1088 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The Tactics Symbol was embossed on\n"
# 1089 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "the FRONTIER PASS!$"
# 1090 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1091 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_WontUnderestimateYouNextTime:
# 1092 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "… … … … … …\p"
# 1093 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "I sorely underestimated you. I won't\n"
# 1094 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "make the same mistake next time…$"
# 1095 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1096 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_CanWinStreakBeStretched:
# 1097 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Can the win streak be stretched?\n"
# 1098 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The confidence is there!$"
# 1099 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1100 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_LegendHasReturnedDomeAceTucker:
# 1101 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Ladies and gentlemen!\n"
# 1102 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Boys, girls, and POKéMON!\p"
# 1103 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Finally!\n"
# 1104 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Finally, the legend has returned!\p"
# 1105 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Yes, the name of that legend!\n"
# 1106 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Our very own DOME ACE!\l"
# 1107 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "It's none other than TUCKER!$"
# 1108 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1109 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_TuckerGoldIntro:
# 1110 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "TUCKER: Ah…\n"
# 1111 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The pummeling roar of the crowd…\l"
# 1112 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Their furnace-like heat of excitement…\l"
# 1113 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "This is a wonderful place…\p"
# 1114 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "To the crowd, I am the DOME ACE…\n"
# 1115 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "I represent their hopes and dreams…\l"
# 1116 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "I must never fade from their sight…\p"
# 1117 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "I must burn!\n"
# 1118 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Brighter and more brilliant!\l"
# 1119 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "I must light all that gather here!$"
# 1120 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1121 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_UnleashAllPowerIPossess:
# 1122 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "I will unleash all the power that\n"
# 1123 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "I possess! Right here and now!$"
# 1124 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1125 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_NeverLostWhenPowerUnleashed:
# 1126 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "TUCKER: You're genuinely fantastic!\p"
# 1127 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Never before! I haven't ever lost in the\n"
# 1128 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "times I've had to unleash my power.\p"
# 1129 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Yes, quite fantastic!\n"
# 1130 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Your FRONTIER PASS, please?$"
# 1131 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1132 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_TacticsSymbolTookGoldenShine:
# 1133 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The Tactics Symbol took on\n"
# 1134 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "a golden shine!$"
# 1135 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1136 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_LookForwardToNextEncounter:
# 1137 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "You're strong, but above all,\n"
# 1138 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "you have a unique charm!\p"
# 1139 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "In you, I see a definite potential for\n"
# 1140 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "a superstar like me.\p"
# 1141 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "I will very much look forward to\n"
# 1142 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "our next encounter!$"
# 1143 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1144 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
@ Unused
# 1145 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLv50Champ2:
# 1146 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{PLAYER} is the Level 50\n"
# 1147 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Battle Tournament Champion!\p"
# 1148 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Congratulations!$"
# 1149 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1150 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
@ Unused
# 1151 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLvOpenChamp2:
# 1152 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{PLAYER} is the Open Level\n"
# 1153 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Battle Tournament Champion!\p"
# 1154 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Congratulations!$"
# 1155 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1156 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_PlayerVersusTucker:
# 1157 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The final match!\p"
# 1158 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{PLAYER} versus the DOME ACE, TUCKER!\p"
# 1159 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Let the battle begin!$"
# 1160 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1161 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerTucker:
# 1162 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The REFEREES have reached\n"
# 1163 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "a decision!\p"
# 1164 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The winner is…\n"
# 1165 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Oh, my goodness!\l"
# 1166 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The winner is our very own DOME ACE!\l"
# 1167 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "It's TUCKER!\p"
# 1168 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Congratulations! And thank you!\n"
# 1169 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Let's hear it for the DOME ACE, TUCKER!$"
