# 1 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
@ On this map the player will automatically walk into the room, but the camera is supposed to remain still.
# 3 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
@ To do this GF sets the player (LOCALID_PLAYER) invisible and creates a fake player object (LOCALID_TOWER_MULTI_BATTLE_PLAYER).
# 4 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
@ The graphics of this fake player object are represented with VAR_OBJ_GFX_ID_F.
# 5 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
@ The graphics of the partner are represented with VAR_OBJ_GFX_ID_E, which will ultimately be set by tower_setpartnergfx.
# 6 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
@ The graphics of the opponents are represented with VAR_OBJ_GFX_ID_0 and OBJ_EVENT_GFX_VAR_1, which will ultimately be set by tower_setopponent.
# 7 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 8 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_MapScripts::
# 9 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattleTowerMultiBattleRoom_OnTransition
# 10 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleTowerMultiBattleRoom_OnWarp
# 11 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleTowerMultiBattleRoom_OnFrame
# 12 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.byte 0
# 13 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 14 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_OnTransition:
# 15 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_SetObjGfx
# 16 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_SetLinkPlayerGfx
# 17 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 18 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 19 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_SetObjGfx::
# 20 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	tower_setpartnergfx
# 21 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	checkplayergender
# 22 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_SetPlayerGfxFemale
# 23 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_F, OBJ_EVENT_GFX_BRENDAN_NORMAL
# 24 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 25 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 26 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_SetPlayerGfxFemale::
# 27 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_F, OBJ_EVENT_GFX_MAY_NORMAL
# 28 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 29 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 30 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_SetLinkPlayerGfx::
# 31 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	special SetBattleTowerLinkPlayerGfx
# 32 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 33 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 34 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_OnWarp:
# 35 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_HidePlayerObj
# 36 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.2byte 0
# 37 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 38 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_HidePlayerObj::
# 39 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_BATTLE_ROOM
# 40 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 41 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 42 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_OnFrame:
# 43 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_EnterRoom
# 44 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.2byte 0
# 45 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 46 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_EnterRoom::
# 47 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	setvar VAR_TEMP_0, 1
# 48 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_PLAYER, BattleFrontier_BattleTowerMultiBattleRoom_Movement_PlayerEnterRoom
# 49 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_PARTNER, BattleFrontier_BattleTowerMultiBattleRoom_Movement_PartnerEnterRoom
# 50 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmovement 0
# 51 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 52 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_OpponentsEnter
# 53 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_ATTENDANT_1, BattleFrontier_BattleTowerMultiBattleRoom_Movement_AttendantApproachPlayer
# 54 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_ATTENDANT_2, BattleFrontier_BattleTowerMultiBattleRoom_Movement_AttendantApproachPlayer
# 55 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmovement 0
# 56 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_PLAYER, BattleFrontier_BattleTowerMultiBattleRoom_Movement_FaceAttendant
# 57 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_PARTNER, BattleFrontier_BattleTowerMultiBattleRoom_Movement_FaceAttendant
# 58 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmovement 0
# 59 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, TRUE
# 60 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 61 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 62 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_OpponentsEnter::
# 63 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	tower_setopponent
# 64 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	addobject LOCALID_TOWER_MULTI_BATTLE_OPPONENT_1
# 65 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	addobject LOCALID_TOWER_MULTI_BATTLE_OPPONENT_2
# 66 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_OPPONENT_1, BattleFrontier_BattleTowerMultiBattleRoom_Movement_Opponent1Enter
# 67 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_OPPONENT_2, BattleFrontier_BattleTowerMultiBattleRoom_Movement_Opponent2Enter
# 68 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmovement 0
# 69 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_DoOpponentIntrosLink
# 70 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	tower_getopponentintro 0
# 71 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	delay 15
# 72 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applywaitmovement LOCALID_TOWER_MULTI_BATTLE_OPPONENT_1, BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkInPlaceLeft
# 73 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 74 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 75 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	tower_getopponentintro 1
# 76 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applywaitmovement LOCALID_TOWER_MULTI_BATTLE_OPPONENT_2, BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkInPlaceLeft
# 77 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 78 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 79 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_DoTowerBattle
# 80 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 81 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_DoOpponentIntrosLink::
# 82 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	tower_getopponentintro 0
# 83 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	delay 15
# 84 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applywaitmovement LOCALID_TOWER_MULTI_BATTLE_OPPONENT_1, BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkInPlaceLeft
# 85 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	messageautoscroll gStringVar4
# 86 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 87 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	delay 48
# 88 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	tower_getopponentintro 1
# 89 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applywaitmovement LOCALID_TOWER_MULTI_BATTLE_OPPONENT_2, BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkInPlaceLeft
# 90 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	messageautoscroll gStringVar4
# 91 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 92 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	delay 48
# 93 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_DoTowerBattle::
# 94 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	call BattleFrontier_BattleTowerBattleRoom_EventScript_DoTowerBattle
# 95 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	switch VAR_RESULT
# 96 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case B_OUTCOME_WON, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_DefeatedOpponents
# 97 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_WarpToLobbyLost::
# 98 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 99 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	tower_set TOWER_DATA_LVL_MODE
# 100 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	setvar VAR_0x8004, FANCOUNTER_USED_BATTLE_TOWER
# 101 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	special Script_TryGainNewFanFromCounter
# 102 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobby
# 103 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 104 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_DefeatedOpponents::
# 105 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_IncrementWinStreak
# 106 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	tower_setbattlewon
# 107 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	switch VAR_RESULT
# 108 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 7, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_WarpToLobbyWon
# 109 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_OPPONENT_2, BattleFrontier_BattleTowerMultiBattleRoom_Movement_Opponent2Exit
# 110 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_OPPONENT_1, BattleFrontier_BattleTowerMultiBattleRoom_Movement_Opponent1Exit
# 111 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmovement 0
# 112 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	removeobject LOCALID_TOWER_MULTI_BATTLE_OPPONENT_1
# 113 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	removeobject LOCALID_TOWER_MULTI_BATTLE_OPPONENT_2
# 114 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_ATTENDANT_1, BattleFrontier_BattleTowerMultiBattleRoom_Movement_AttendantApproachPlayer
# 115 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_ATTENDANT_2, BattleFrontier_BattleTowerMultiBattleRoom_Movement_AttendantApproachPlayer
# 116 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmovement 0
# 117 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_PLAYER, BattleFrontier_BattleTowerMultiBattleRoom_Movement_FaceAttendant
# 118 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_PARTNER, BattleFrontier_BattleTowerMultiBattleRoom_Movement_FaceAttendant
# 119 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmovement 0
# 120 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_RetorePartyMsgLink
# 121 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerBattleRoom_Text_RestoreMonsToFullHealth, MSGBOX_DEFAULT
# 122 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_RestoreParty
# 123 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 124 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_RetorePartyMsgLink::
# 125 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	messageautoscroll BattleFrontier_BattleTowerBattleRoom_Text_RestoreMonsToFullHealth
# 126 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 127 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	delay 48
# 128 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_RestoreParty::
# 129 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	special LoadPlayerParty
# 130 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	frontier_setpartyorder FRONTIER_MULTI_PARTY_SIZE
# 131 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReconnectLink
# 132 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	playfanfare MUS_HEAL
# 133 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitfanfare
# 134 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	special HealPlayerParty
# 135 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents::
# 136 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 137 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	call BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSet
# 138 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ContinueChallenge
# 139 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 140 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsNoRecord
# 141 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	multichoice 19, 4, MULTI_GO_ON_RECORD_REST_RETIRE, TRUE
# 142 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	switch VAR_RESULT
# 143 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ContinueChallenge
# 144 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRecordBattle
# 145 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskPauseChallenge
# 146 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 3, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRetireChallenge
# 147 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 148 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 149 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsNoRecord::
# 150 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
# 151 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	switch VAR_RESULT
# 152 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ContinueChallenge
# 153 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskPauseChallenge
# 154 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRetireChallenge
# 155 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 156 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 157 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRecordBattle::
# 158 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_RecordYourBattle
# 159 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 160 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 161 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	switch VAR_RESULT
# 162 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 163 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_RecordBattle
# 164 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 165 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 166 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_RecordBattle::
# 167 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 168 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 169 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 170 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskPauseChallenge::
# 171 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerBattleRoom_Text_SaveAndQuitGame, MSGBOX_YESNO
# 172 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	switch VAR_RESULT
# 173 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case NO, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 174 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case YES, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_PauseChallenge
# 175 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 176 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 177 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRetireChallenge::
# 178 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_CancelYourChallenge
# 179 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 180 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 181 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	switch VAR_RESULT
# 182 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 183 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_WarpToLobbyLost
# 184 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 185 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 186 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ContinueChallenge::
# 187 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	closemessage
# 188 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	clearflag FLAG_TEMP_2
# 189 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_PLAYER, BattleFrontier_BattleTowerMultiBattleRoom_Movement_FaceBattle
# 190 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_PARTNER, BattleFrontier_BattleTowerMultiBattleRoom_Movement_FaceBattle
# 191 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmovement 0
# 192 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_ATTENDANT_1, BattleFrontier_BattleTowerMultiBattleRoom_Movement_AttendantReturnToPos
# 193 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_ATTENDANT_2, BattleFrontier_BattleTowerMultiBattleRoom_Movement_AttendantReturnToPos
# 194 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmovement 0
# 195 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_OpponentsEnter
# 196 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 197 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 198 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_WarpToLobbyWon::
# 199 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 200 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	tower_set TOWER_DATA_LVL_MODE
# 201 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	setvar VAR_0x8004, FANCOUNTER_USED_BATTLE_TOWER
# 202 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	special Script_TryGainNewFanFromCounter
# 203 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobby
# 204 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 205 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_PauseChallenge::
# 206 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_SavingPleaseWait
# 207 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 208 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	tower_save CHALLENGE_STATUS_PAUSED
# 209 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	playse SE_SAVE
# 210 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitse
# 211 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	fadescreen 1
# 212 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	frontier_reset
# 213 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 214 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 215 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSet::
# 216 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSetLink
# 217 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	copyvar VAR_TEMP_F, VAR_RESULT
# 218 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	switch VAR_TEMP_F
# 219 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor2ndOpponentSet
# 220 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor3rdOpponentSet
# 221 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 3, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor4thOpponentSet
# 222 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 4, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor5thOpponentSet
# 223 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 5, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor6thOpponentSet
# 224 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 6, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor7thOpponentSet
# 225 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 226 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor2ndOpponentSet::
# 227 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor2ndOpponentSet
# 228 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 229 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 230 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 231 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor3rdOpponentSet::
# 232 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor3rdOpponentSet
# 233 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 234 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 235 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 236 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor4thOpponentSet::
# 237 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor4thOpponentSet
# 238 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 239 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 240 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 241 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor5thOpponentSet::
# 242 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor5thOpponentSet
# 243 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 244 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 245 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 246 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor6thOpponentSet::
# 247 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor6thOpponentSet
# 248 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 249 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 250 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 251 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor7thOpponentSet::
# 252 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor7thOpponentSet
# 253 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 254 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 255 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 256 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSetLink::
# 257 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	copyvar VAR_TEMP_F, VAR_RESULT
# 258 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	switch VAR_TEMP_F
# 259 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor2ndOpponentSetLink
# 260 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor3rdOpponentSetLink
# 261 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 3, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor4thOpponentSetLink
# 262 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 4, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor5thOpponentSetLink
# 263 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 5, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor6thOpponentSetLink
# 264 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 6, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor7thOpponentSetLink
# 265 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 266 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor2ndOpponentSetLink::
# 267 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor2ndOpponentSet
# 268 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 269 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink
# 270 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 271 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 272 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor3rdOpponentSetLink::
# 273 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor3rdOpponentSet
# 274 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 275 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink
# 276 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 277 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 278 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor4thOpponentSetLink::
# 279 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor4thOpponentSet
# 280 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 281 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink
# 282 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 283 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 284 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor5thOpponentSetLink::
# 285 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor5thOpponentSet
# 286 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 287 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink
# 288 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 289 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 290 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor6thOpponentSetLink::
# 291 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor6thOpponentSet
# 292 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 293 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink
# 294 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 295 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 296 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor7thOpponentSetLink::
# 297 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor7thOpponentSet
# 298 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 299 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink
# 300 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 301 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 302 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_LinkDelayForMsg::
# 303 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 304 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	delay 48
# 305 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 306 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 307 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink::
# 308 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto_if_set FLAG_TEMP_2, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLinkNoRecord
# 309 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	multichoice 19, 6, MULTI_GO_ON_RECORD_RETIRE, TRUE
# 310 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	switch VAR_RESULT
# 311 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ContinueChallengeLink
# 312 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRecordBattleLink
# 313 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRetireChallengeLink
# 314 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRetireChallengeLink
# 315 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 316 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 317 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLinkNoRecord::
# 318 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	multichoice 20, 8, MULTI_GO_ON_RETIRE, TRUE
# 319 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	switch VAR_RESULT
# 320 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ContinueChallengeLink
# 321 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRetireChallengeLink
# 322 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRetireChallengeLink
# 323 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 324 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 325 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ContinueChallengeLink::
# 326 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	setvar VAR_0x8004, BATTLE_TOWER_LINK_CONTINUE
# 327 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	setvar VAR_0x8005, 0
# 328 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message gText_LinkStandby3
# 329 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 330 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	special LinkRetireStatusWithBattleTowerPartner
# 331 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto_if_ne VAR_RESULT, BATTLE_TOWER_LINKSTAT_CONTINUE, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_WarpToLobbyLost
# 332 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_LinkDelayForMsg
# 333 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 334 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 335 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRecordBattleLink::
# 336 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_RecordYourBattle
# 337 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 338 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 339 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	switch VAR_RESULT
# 340 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 341 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 342 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 343 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	setflag FLAG_TEMP_2
# 344 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 345 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 346 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 347 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRetireChallengeLink::
# 348 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_CancelYourChallenge
# 349 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 350 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 351 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_RetireChallengeLink
# 352 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 353 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 354 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 355 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_RetireChallengeLink::
# 356 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	setvar VAR_0x8004, BATTLE_TOWER_LINK_RETIRE
# 357 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	setvar VAR_0x8005, 0
# 358 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message gText_LinkStandby3
# 359 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 360 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	special LinkRetireStatusWithBattleTowerPartner
# 361 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_WarpToLobbyLost
# 362 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 363 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 364 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReconnectLink::
# 365 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	special BattleTowerReconnectLink
# 366 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 367 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 368 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Movement_PlayerEnterRoom:
# 369 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 370 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 371 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 372 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 373 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	face_right
# 374 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	step_end
# 375 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 376 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Movement_PartnerEnterRoom:
# 377 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_left
# 378 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 379 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 380 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 381 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	face_right
# 382 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	step_end
# 383 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 384 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Movement_FaceAttendant:
# 385 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	face_left
# 386 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	step_end
# 387 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 388 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Movement_FaceBattle:
# 389 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 390 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	step_end
# 391 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 392 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Movement_Opponent1Enter:
# 393 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_down
# 394 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_down
# 395 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_down
# 396 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_down
# 397 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	face_left
# 398 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	step_end
# 399 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 400 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Movement_Opponent2Enter:
# 401 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_right
# 402 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_down
# 403 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_down
# 404 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_down
# 405 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	face_left
# 406 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	step_end
# 407 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 408 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Movement_Opponent2Exit:
# 409 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 410 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 411 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 412 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	set_invisible
# 413 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	step_end
# 414 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 415 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Movement_Opponent1Exit:
# 416 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 417 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 418 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 419 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 420 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	step_end
# 421 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 422 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Movement_AttendantApproachPlayer:
# 423 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_right
# 424 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_right
# 425 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	step_end
# 426 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 427 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Movement_AttendantReturnToPos:
# 428 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_left
# 429 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_left
# 430 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 431 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	step_end
# 432 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 433 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkInPlaceLeft:
# 434 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_in_place_left
# 435 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	step_end
# 436 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 437 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor2ndOpponentSet:
# 438 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "The 2nd set of opponents is next.\n"
# 439 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 440 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 441 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor3rdOpponentSet:
# 442 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "The 3rd set of opponents is next.\n"
# 443 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 444 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 445 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor4thOpponentSet:
# 446 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "The 4th set of opponents is next.\n"
# 447 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 448 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 449 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor5thOpponentSet:
# 450 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "The 5th set of opponents is next.\n"
# 451 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 452 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 453 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor6thOpponentSet:
# 454 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "The 6th set of opponents is next.\n"
# 455 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 456 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 457 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor7thOpponentSet:
# 458 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "The 7th set of opponents is next.\n"
# 459 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 460 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 461 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
@ Unused
# 462 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Text_2ndOpponentSetNext:
# 463 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "The 2nd set of opponents is next.\n"
# 464 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Do your best!$"
# 465 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 466 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
@ Unused
# 467 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Text_3rdOpponentSetNext:
# 468 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "The 3rd set of opponents is next.\n"
# 469 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Do your best!$"
# 470 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 471 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
@ Unused
# 472 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Text_4thOpponentSetNext:
# 473 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "The 4th set of opponents is next.\n"
# 474 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Do your best!$"
# 475 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 476 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
@ Unused
# 477 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Text_5thOpponentSetNext:
# 478 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "The 5th set of opponents is next.\n"
# 479 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Do your best!$"
# 480 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 481 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
@ Unused
# 482 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Text_6thOpponentSetNext:
# 483 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "The 6th set of opponents is next.\n"
# 484 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Do your best!$"
# 485 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 486 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
@ Unused
# 487 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Text_7thOpponentSetNext:
# 488 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "The 7th set of opponents is next.\n"
# 489 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Do your best!$"
# 490 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 491 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
gText_LinkStandby3::
# 492 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Link standby…$"
# 493 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 494 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
gText_YourPartnerHasRetired::
# 495 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Your partner has retired.\p"
# 496 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Your BATTLE ROOM challenge\n"
# 497 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "will be canceled.$"
