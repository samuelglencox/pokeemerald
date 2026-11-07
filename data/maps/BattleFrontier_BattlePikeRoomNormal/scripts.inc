# 1 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 2 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_MapScripts::
# 3 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattlePikeRoom_OnResume
# 4 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattlePikeRoom_OnTransition
# 5 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePikeRoomNormal_OnFrame
# 6 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePikeRoom_OnWarp
# 7 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.byte 0
# 8 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 9 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_OnFrame:
# 10 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom
# 11 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.2byte 0
# 12 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 13 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom::
# 14 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setvar VAR_TEMP_0, 1
# 15 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_getroomtype
# 16 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	switch VAR_RESULT
# 17 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_ROOM_SINGLE_BATTLE, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterSingleBattleRoom
# 18 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_ROOM_HEAL_FULL, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterFullHealRoom
# 19 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_ROOM_STATUS, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterStatusRoom
# 20 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_ROOM_HARD_BATTLE, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterHardBattleRoom
# 21 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_ROOM_DOUBLE_BATTLE, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterDoubleBattleRoom
# 22 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_ROOM_BRAIN, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterBrainRoom
# 23 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 24 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 25 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterSingleBattleRoom::
# 26 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lockall
# 27 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 16
# 28 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applywaitmovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_ApproachPlayer
# 29 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_gettrainerintro 0
# 30 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 31 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 32 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 33 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	releaseall
# 34 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_PIKE_SINGLE
# 35 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setvar VAR_0x8005, 0
# 36 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	special DoSpecialTrainerBattle
# 37 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	switch VAR_RESULT
# 38 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case 1, BattleFrontier_BattlePikeRoomNormal_EventScript_WonSingleBattle
# 39 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_WarpToLobbyLost::
# 40 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 41 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PIKE_LOBBY, 5, 6
# 42 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitstate
# 43 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 44 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 45 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_WonSingleBattle::
# 46 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applywaitmovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_NPCExit
# 47 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 48 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 49 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterHardBattleRoom::
# 50 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lockall
# 51 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 16
# 52 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_BattleSomewhatToughTrainer, MSGBOX_DEFAULT
# 53 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 54 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 55 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applywaitmovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_ApproachPlayer
# 56 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_gettrainerintro 0
# 57 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 58 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 59 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 60 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	releaseall
# 61 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_PIKE_SINGLE
# 62 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setvar VAR_0x8005, 0
# 63 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	special DoSpecialTrainerBattle
# 64 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	switch VAR_RESULT
# 65 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case 1, BattleFrontier_BattlePikeRoomNormal_EventScript_WonHardBattle
# 66 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_WarpToLobbyLost
# 67 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 68 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 69 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_WonHardBattle::
# 70 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applywaitmovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_NPCExit
# 71 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applywaitmovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_HealNPCApproachPlayer
# 72 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lock
# 73 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	faceplayer
# 74 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_RestoreToFullHealth, MSGBOX_DEFAULT
# 75 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playfanfare MUS_HEAL
# 76 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitfanfare
# 77 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	special HealPlayerParty
# 78 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_EnjoyRestOfChallenge2, MSGBOX_DEFAULT
# 79 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 80 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	release
# 81 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applywaitmovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_NPCExit
# 82 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 83 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 84 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterBrainRoom::
# 85 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 22
# 86 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lockall
# 87 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applywaitmovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_PreQueenHealNPCApproachPlayer
# 88 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_prequeenheal
# 89 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	switch VAR_RESULT
# 90 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case 0, BattleFrontier_BattlePikeRoomNormal_EventScript_PreQueenNoHeal
# 91 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case 1, BattleFrontier_BattlePikeRoomNormal_EventScript_PreQueenHealOneMon
# 92 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case 2, BattleFrontier_BattlePikeRoomNormal_EventScript_PreQueenHealTwoMons
# 93 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 94 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter::
# 95 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ShallFetchOurMaster, MSGBOX_DEFAULT
# 96 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 97 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	special SpawnCameraObject
# 98 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_CAMERA, BattleFrontier_BattlePikeRoomNormal_Movement_CameraPanUp
# 99 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_HealNPCExitForLucy
# 100 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 101 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playse SE_PIKE_CURTAIN_CLOSE
# 102 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesLittleClosed
# 103 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 4
# 104 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesMostlyClosed
# 105 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 4
# 106 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesClosed
# 107 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 4
# 108 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitse
# 109 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 60
# 110 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playse SE_PIKE_CURTAIN_OPEN
# 111 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 65
# 112 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesMostlyClosed
# 113 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	showobjectat LOCALID_PIKE_ROOM_NPC_1, MAP_BATTLE_FRONTIER_BATTLE_PIKE_ROOM_NORMAL
# 114 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 4
# 115 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesLittleClosed
# 116 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 4
# 117 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesOpen
# 118 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitse
# 119 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applywaitmovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_LucyEnter
# 120 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_getbrainstatus
# 121 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	switch VAR_RESULT
# 122 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case FRONTIER_BRAIN_GOLD, BattleFrontier_BattlePikeRoomNormal_EventScript_IntroLucyGold
# 123 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case FRONTIER_BRAIN_STREAK, BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucySilver
# 124 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case FRONTIER_BRAIN_STREAK_LONG, BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucyGold
# 125 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 126 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucySilver
# 127 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ImThePikeQueen, MSGBOX_DEFAULT
# 128 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 129 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucySilver::
# 130 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_HopeYouDidntUseUpLuck, MSGBOX_DEFAULT
# 131 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_DoPikeQueenBattle
# 132 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucySilver
# 133 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_WarpToLobbyLost
# 134 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 135 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucySilver::
# 136 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	frontier_getsymbols
# 137 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto_if_ne VAR_RESULT, 0, BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucy
# 138 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_LucyShowMeFrontierPass, MSGBOX_DEFAULT
# 139 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 140 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 141 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_ReceivedLuckSymbol
# 142 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 143 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitfanfare
# 144 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	frontier_givesymbol
# 145 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_AllThereIsDisappear, MSGBOX_DEFAULT
# 146 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 147 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucy
# 148 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 149 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_IntroLucyGold::
# 150 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 151 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucyGold
# 152 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_LucyYouAgain, MSGBOX_DEFAULT
# 153 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 154 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucyGold::
# 155 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_NowComeOn, MSGBOX_DEFAULT
# 156 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_DoPikeQueenBattle
# 157 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucyGold
# 158 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_WarpToLobbyLost
# 159 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 160 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucyGold::
# 161 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	frontier_getsymbols
# 162 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto_if_eq VAR_RESULT, 2, BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucy
# 163 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_LucyFrontierPass, MSGBOX_DEFAULT
# 164 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 165 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 166 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_LuckSymbolTookGoldenShine
# 167 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 168 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitfanfare
# 169 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	frontier_givesymbol
# 170 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_IWontForget, MSGBOX_DEFAULT
# 171 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 172 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucy
# 173 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 174 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 175 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucy::
# 176 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applywaitmovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_LucyMoveAside
# 177 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applywaitmovement LOCALID_PLAYER, BattleFrontier_BattlePikeRoomNormal_Movement_PlayerWalkUp2
# 178 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_get PIKE_DATA_WIN_STREAK
# 179 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	addvar VAR_RESULT, 1
# 180 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_set PIKE_DATA_WIN_STREAK, VAR_RESULT
# 181 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoom_EventScript_WarpToFinalRoom
# 182 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitstate
# 183 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 184 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 185 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_PreQueenNoHeal::
# 186 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ChoseRoomNoHeal, MSGBOX_DEFAULT
# 187 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter
# 188 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 189 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 190 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_PreQueenHealOneMon::
# 191 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ChoseRoomHealOne, MSGBOX_DEFAULT
# 192 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playfanfare MUS_HEAL
# 193 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitfanfare
# 194 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter
# 195 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 196 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 197 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_PreQueenHealTwoMons::
# 198 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ChoseRoomHealTwo, MSGBOX_DEFAULT
# 199 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playfanfare MUS_HEAL
# 200 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitfanfare
# 201 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter
# 202 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 203 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 204 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterFullHealRoom::
# 205 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lockall
# 206 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 16
# 207 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applywaitmovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_ApproachPlayer
# 208 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreToFullHealth
# 209 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 210 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playfanfare MUS_HEAL
# 211 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitfanfare
# 212 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	special HealPlayerParty
# 213 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_EnjoyRestOfChallenge, MSGBOX_DEFAULT
# 214 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 215 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applywaitmovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_NPCExit
# 216 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	releaseall
# 217 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 218 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 219 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterDoubleBattleRoom::
# 220 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lockall
# 221 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 16
# 222 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_Trainer1WalkRight
# 223 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_Trainer2WalkLeft
# 224 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 225 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_DoubleTrainersWalkDown
# 226 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_DoubleTrainersWalkDown
# 227 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 228 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_Trainer1FacePlayer
# 229 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_Trainer2FacePlayer
# 230 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 231 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applywaitmovement LOCALID_PLAYER, BattleFrontier_BattlePikeRoomNormal_Movement_PlayerFaceTrainer1
# 232 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_gettrainerintro 0
# 233 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 234 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 235 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 16
# 236 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applywaitmovement LOCALID_PLAYER, BattleFrontier_BattlePikeRoomNormal_Movement_PlayerFaceTrainer2
# 237 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_gettrainerintro 1
# 238 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 239 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 240 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_PIKE_DOUBLE
# 241 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setvar VAR_0x8005, 0
# 242 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	special DoSpecialTrainerBattle
# 243 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	switch VAR_RESULT
# 244 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case 1, BattleFrontier_BattlePikeRoomNormal_EventScript_WonDoubleBattle
# 245 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_WarpToLobbyLost
# 246 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 247 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 248 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_WonDoubleBattle::
# 249 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applywaitmovement LOCALID_PLAYER, BattleFrontier_BattlePikeRoomNormal_Movement_PlayerFaceTrainer2
# 250 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applywaitmovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_Trainer1Exit
# 251 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applywaitmovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_Trainer2Exit
# 252 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applywaitmovement LOCALID_PLAYER, BattleFrontier_BattlePikeRoomNormal_Movement_PlayerFaceUp
# 253 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 254 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 255 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterStatusRoom::
# 256 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lockall
# 257 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_WatchOut
# 258 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applywaitmovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_MonApproachPlayer
# 259 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_getstatusmon
# 260 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 261 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call_if_eq VAR_0x8004, PIKE_STATUSMON_KIRLIA, BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaAttack
# 262 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call_if_eq VAR_0x8004, PIKE_STATUSMON_DUSCLOPS, BattleFrontier_BattlePikeRoomNormal_EventScript_DusclopsAttack
# 263 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_AttacksWhenStartled, MSGBOX_DEFAULT
# 264 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 265 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	releaseall
# 266 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 267 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 268 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaAttack::
# 269 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_KirliaStop, MSGBOX_DEFAULT
# 270 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 271 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitse
# 272 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playmoncry SPECIES_KIRLIA, CRY_MODE_NORMAL
# 273 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmoncry
# 274 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_getstatus
# 275 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call_if_eq VAR_RESULT, PIKE_STATUS_TOXIC, BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaUsedToxic
# 276 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call_if_eq VAR_RESULT, PIKE_STATUS_BURN, BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaUsedWillOWisp
# 277 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call_if_eq VAR_RESULT, PIKE_STATUS_PARALYSIS, BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaUsedThunderWave
# 278 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call_if_eq VAR_RESULT, PIKE_STATUS_SLEEP, BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaUsedHypnosis
# 279 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_flashscreen
# 280 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitstate
# 281 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applywaitmovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_NPCApproachMon
# 282 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applywaitmovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_MonFaceNPC
# 283 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitse
# 284 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playmoncry SPECIES_KIRLIA, CRY_MODE_NORMAL
# 285 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmoncry
# 286 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ThatsEnough, MSGBOX_DEFAULT
# 287 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitse
# 288 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playmoncry SPECIES_KIRLIA, CRY_MODE_NORMAL
# 289 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmoncry
# 290 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 291 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_MonMoveAside
# 292 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_StatusNPCApproachPlayer
# 293 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 294 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForKirlia, MSGBOX_DEFAULT
# 295 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 296 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 297 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_DusclopsAttack::
# 298 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_DusclopsStop, MSGBOX_DEFAULT
# 299 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 300 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitse
# 301 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playmoncry SPECIES_DUSCLOPS, CRY_MODE_NORMAL
# 302 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmoncry
# 303 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_getstatus
# 304 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call_if_eq VAR_RESULT, PIKE_STATUS_FREEZE, BattleFrontier_BattlePikeRoomNormal_EventScript_DusclopsUsedIceBeam
# 305 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call_if_eq VAR_RESULT, PIKE_STATUS_BURN, BattleFrontier_BattlePikeRoomNormal_EventScript_DusclopsUsedWillOWisp
# 306 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_flashscreen
# 307 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitstate
# 308 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applywaitmovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_NPCApproachMon
# 309 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applywaitmovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_MonFaceNPC
# 310 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitse
# 311 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playmoncry SPECIES_DUSCLOPS, CRY_MODE_NORMAL
# 312 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmoncry
# 313 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ThatsEnough, MSGBOX_DEFAULT
# 314 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitse
# 315 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playmoncry SPECIES_DUSCLOPS, CRY_MODE_NORMAL
# 316 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmoncry
# 317 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 318 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_MonMoveAside
# 319 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_StatusNPCApproachPlayer
# 320 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 321 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForDusclops, MSGBOX_DEFAULT
# 322 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 323 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 324 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaUsedToxic::
# 325 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedToxic
# 326 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 327 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 328 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 329 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaUsedWillOWisp::
# 330 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedWillOWisp
# 331 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 332 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 333 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 334 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaUsedThunderWave::
# 335 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedThunderWave
# 336 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 337 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 338 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 339 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaUsedHypnosis::
# 340 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedHypnosis
# 341 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 342 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 343 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 344 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_DusclopsUsedIceBeam::
# 345 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedIceBeam
# 346 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 347 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 348 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 349 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_DusclopsUsedWillOWisp::
# 350 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedWillOWisp
# 351 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 352 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 353 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 354 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_DoPikeQueenBattle::
# 355 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 356 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applywaitmovement LOCALID_PLAYER, BattleFrontier_BattlePikeRoomNormal_Movement_PlayerWalkUp2
# 357 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_PIKE_SINGLE
# 358 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setvar VAR_0x8005, 0
# 359 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	special DoSpecialTrainerBattle
# 360 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 361 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 362 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_ApproachPlayer:
# 363 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 364 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 365 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 366 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 367 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_NPCExit:
# 368 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 369 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 370 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 371 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	set_invisible
# 372 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 373 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 374 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 375 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_HealNPCExit:
# 376 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 377 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	set_invisible
# 378 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 379 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 380 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 381 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_NPCApproachMon:
# 382 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 383 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 384 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 385 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_StatusNPCApproachPlayer:
# 386 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 387 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_left
# 388 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay_16
# 389 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay_16
# 390 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_down
# 391 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 392 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 393 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_MonApproachPlayer:
# 394 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_fast_down
# 395 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_fast_right
# 396 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_fast_right
# 397 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_fast_down
# 398 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_fast_left
# 399 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_down
# 400 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 401 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 402 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_MonFaceNPC:
# 403 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_up
# 404 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 405 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 406 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_MonMoveAside:
# 407 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_left
# 408 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_MonFaceRight:
# 409 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_right
# 410 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 411 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 412 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_HealNPCApproachPlayer:
# 413 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 414 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 415 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_right
# 416 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_down
# 417 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 418 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 419 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_PlayerFaceTrainer1:
# 420 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_left
# 421 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 422 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 423 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_PlayerFaceTrainer2:
# 424 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_right
# 425 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 426 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 427 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_PlayerFaceUp:
# 428 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_up
# 429 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 430 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 431 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_Trainer1WalkRight:
# 432 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_right
# 433 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 434 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 435 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_Trainer2WalkLeft:
# 436 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_left
# 437 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 438 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 439 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_DoubleTrainersWalkDown:
# 440 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 441 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 442 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 443 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 444 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_Trainer1FacePlayer:
# 445 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_right
# 446 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 447 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 448 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_Trainer2FacePlayer:
# 449 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_left
# 450 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 451 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 452 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_Trainer1Exit:
# 453 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 454 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 455 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 456 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_right
# 457 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 458 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	set_invisible
# 459 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 460 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 461 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 462 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_Trainer2Exit:
# 463 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 464 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 465 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 466 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_left
# 467 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 468 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	set_invisible
# 469 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 470 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 471 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 472 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
@ For approaching Lucy and exiting room after defeating Lucy
# 473 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_PlayerWalkUp2:
# 474 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 475 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 476 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 477 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 478 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_PreQueenHealNPCApproachPlayer:
# 479 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 480 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 481 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 482 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 483 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_HealNPCExitForLucy:
# 484 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 485 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 486 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 487 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	set_invisible
# 488 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 489 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 490 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_LucyEnter:
# 491 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	set_visible
# 492 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 493 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 494 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 495 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_LucyMoveAside:
# 496 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_left
# 497 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_right
# 498 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 499 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 500 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_NPC::
# 501 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_getroomtype
# 502 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	switch VAR_RESULT
# 503 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_ROOM_NPC, BattleFrontier_BattlePikeRoomNormal_EventScript_NormalNPC
# 504 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_ROOM_STATUS, BattleFrontier_BattlePikeRoomNormal_EventScript_StatusNPC
# 505 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_ROOM_HEAL_PART, BattleFrontier_BattlePikeRoomNormal_EventScript_HealNPC
# 506 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_NormalNPC::
# 507 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lock
# 508 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	faceplayer
# 509 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_getnpcmsg
# 510 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 511 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 512 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 513 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	release
# 514 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 515 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 516 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_StatusNPC::
# 517 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lock
# 518 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	faceplayer
# 519 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ApologizeHopeMonsAreFine, MSGBOX_DEFAULT
# 520 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 521 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	release
# 522 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 523 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 524 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_HealNPC::
# 525 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_healonetwomons
# 526 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call_if_eq VAR_RESULT, 2, BattleFrontier_BattlePikeRoomNormal_EventScript_WillRestoreTwoMons
# 527 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call_if_eq VAR_RESULT, 1, BattleFrontier_BattlePikeRoomNormal_EventScript_WillRestoreOneMon
# 528 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playfanfare MUS_HEAL
# 529 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitfanfare
# 530 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_BestOfLuckFarewell, MSGBOX_DEFAULT
# 531 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 532 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	release
# 533 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applywaitmovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_HealNPCExit
# 534 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 535 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 536 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_WillRestoreOneMon::
# 537 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lock
# 538 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	faceplayer
# 539 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreOneMon, MSGBOX_DEFAULT
# 540 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 541 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 542 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 543 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_WillRestoreTwoMons::
# 544 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lock
# 545 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	faceplayer
# 546 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreTwoMons, MSGBOX_DEFAULT
# 547 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 548 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 549 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 550 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
@ Dusclops or Kirlia
# 551 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_StatusMon::
# 552 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lock
# 553 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	faceplayer
# 554 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_Silence, MSGBOX_DEFAULT
# 555 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 556 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	release
# 557 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applywaitmovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_MonFaceRight
# 558 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 559 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 560 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesMostlyClosed::
# 561 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 1, METATILE_BattlePike_Curtain_Stage1_Tile0, TRUE
# 562 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 3, 2, METATILE_BattlePike_Curtain_Stage1_Tile1, TRUE
# 563 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 2, METATILE_BattlePike_Curtain_Stage1_Tile2, TRUE
# 564 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 5, 2, METATILE_BattlePike_Curtain_Stage1_Tile3, TRUE
# 565 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 3, 3, METATILE_BattlePike_Curtain_Stage1_Tile4, TRUE
# 566 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 3, METATILE_BattlePike_Curtain_Stage1_Tile5, FALSE
# 567 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 5, 3, METATILE_BattlePike_Curtain_Stage1_Tile6, TRUE
# 568 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	special DrawWholeMapView
# 569 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 570 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 571 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesLittleClosed::
# 572 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 1, METATILE_BattlePike_Curtain_Stage2_Tile0, TRUE
# 573 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 3, 2, METATILE_BattlePike_Curtain_Stage2_Tile1, TRUE
# 574 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 2, METATILE_BattlePike_Curtain_Stage2_Tile2, TRUE
# 575 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 5, 2, METATILE_BattlePike_Curtain_Stage2_Tile3, TRUE
# 576 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 3, 3, METATILE_BattlePike_Curtain_Stage2_Tile4, TRUE
# 577 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 3, METATILE_BattlePike_Curtain_Stage2_Tile5, FALSE
# 578 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 5, 3, METATILE_BattlePike_Curtain_Stage2_Tile6, TRUE
# 579 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	special DrawWholeMapView
# 580 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 581 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 582 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesOpen::
# 583 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 1, METATILE_BattlePike_Curtain_Stage3_Tile0, TRUE
# 584 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 3, 2, METATILE_BattlePike_Curtain_Stage3_Tile1, TRUE
# 585 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 2, METATILE_BattlePike_Curtain_Stage3_Tile2, TRUE
# 586 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 5, 2, METATILE_BattlePike_Curtain_Stage3_Tile3, TRUE
# 587 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 3, 3, METATILE_BattlePike_Curtain_Stage3_Tile4, TRUE
# 588 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 3, METATILE_BattlePike_Curtain_Stage3_Tile5, FALSE
# 589 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 5, 3, METATILE_BattlePike_Curtain_Stage3_Tile6, TRUE
# 590 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	special DrawWholeMapView
# 591 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 592 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 593 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesClosed::
# 594 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 1, METATILE_BattlePike_Curtain_Stage0_Tile0, TRUE
# 595 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 3, 2, METATILE_BattlePike_Curtain_Stage0_Tile1, TRUE
# 596 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 2, METATILE_BattlePike_Curtain_Stage0_Tile2, TRUE
# 597 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 5, 2, METATILE_BattlePike_Curtain_Stage0_Tile3, TRUE
# 598 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 3, 3, METATILE_BattlePike_Curtain_Stage0_Tile4, TRUE
# 599 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 3, METATILE_BattlePike_Curtain_Stage0_Tile5, FALSE
# 600 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 5, 3, METATILE_BattlePike_Curtain_Stage0_Tile6, TRUE
# 601 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	special DrawWholeMapView
# 602 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 603 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 604 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_CameraPanUp:
# 605 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 606 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 607 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 608 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 609 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
@ Unused
# 610 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_CameraPanDown:
# 611 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 612 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 613 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 614 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 615 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreToFullHealth:
# 616 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Welcome…\n"
# 617 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "You must be commended for your luck…\p"
# 618 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Your POKéMON shall be restored\n"
# 619 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "to full health…$"
# 620 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 621 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_EnjoyRestOfChallenge:
# 622 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I urge you to enjoy the rest of your\n"
# 623 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Battle Choice challenge…$"
# 624 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 625 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreOneMon:
# 626 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Ah, you're a lucky one.\n"
# 627 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I'm in somewhat-good spirits now.\p"
# 628 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I will restore one of your POKéMON\n"
# 629 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "to full health.$"
# 630 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 631 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_BestOfLuckFarewell:
# 632 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "The best of luck to you.\n"
# 633 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Farewell.$"
# 634 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 635 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
@ Seems there was a planned room type where the player could choose to battle and would be healed if they won
# 636 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
@ Possibly replaced/superseded by the hard battle room, which is the same but the battle isnt optional
# 637 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
@ Unused
# 638 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_CareForBattleWillRestoreMons:
# 639 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Excuse me…\p"
# 640 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Would you care for a battle?\n"
# 641 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I'll restore your POKéMON if you win.$"
# 642 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 643 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
@ Unused
# 644 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_NowShallWe:
# 645 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Very well…\n"
# 646 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Now, shall we?$"
# 647 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 648 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
@ Unused
# 649 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_HowUnsportingOfYou:
# 650 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I see…\n"
# 651 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "How unsporting of you…$"
# 652 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 653 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
@ Unused
# 654 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreMonsAsPromised:
# 655 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Magnificent…\p"
# 656 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "As promised, I shall restore your\n"
# 657 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "POKéMON to full health.$"
# 658 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 659 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
@ Unused
# 660 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_BestOfLuckFarewell2:
# 661 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "The best of luck to you.\n"
# 662 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Farewell.$"
# 663 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 664 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_WatchOut:
# 665 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Oh, my!\p"
# 666 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Watch out!$"
# 667 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 668 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_KirliaStop:
# 669 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Now, now!\n"
# 670 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "KIRLIA, stop that!$"
# 671 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 672 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_DusclopsStop:
# 673 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Now, now!\n"
# 674 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "DUSCLOPS, stop that!$"
# 675 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 676 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedToxic:
# 677 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "KIRLIA used TOXIC!$"
# 678 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 679 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedHypnosis:
# 680 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "KIRLIA used HYPNOSIS!$"
# 681 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 682 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedThunderWave:
# 683 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "KIRLIA used THUNDER WAVE!$"
# 684 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 685 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedWillOWisp:
# 686 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "KIRLIA used WILL-O-WISP!$"
# 687 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 688 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedWillOWisp:
# 689 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "DUSCLOPS used WILL-O-WISP!$"
# 690 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 691 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedIceBeam:
# 692 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "DUSCLOPS used ICE BEAM!$"
# 693 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 694 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_ThatsEnough:
# 695 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Look here!\n"
# 696 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "That's quite enough!$"
# 697 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 698 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForKirlia:
# 699 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I must apologize to you…\p"
# 700 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "My KIRLIA has a TIMID nature…$"
# 701 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 702 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForDusclops:
# 703 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I must apologize to you…\p"
# 704 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "My DUSCLOPS has a TIMID nature…$"
# 705 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 706 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_AttacksWhenStartled:
# 707 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "It attacks without warning if it is\n"
# 708 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "startled by another person…\p"
# 709 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Are you and your POKéMON all right?$"
# 710 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 711 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_ApologizeHopeMonsAreFine:
# 712 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I do apologize for what happened…\n"
# 713 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I do hope your POKéMON are fine.$"
# 714 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 715 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_Silence:
# 716 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "… … … … … …\n"
# 717 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "… … … … … …$"
# 718 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 719 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_BattleSomewhatToughTrainer:
# 720 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Welcome…\p"
# 721 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Here, we will have you battle\n"
# 722 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "a somewhat-tough TRAINER…$"
# 723 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 724 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_RestoreToFullHealth:
# 725 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "How wonderful…\p"
# 726 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "To honor your victory, your POKéMON\n"
# 727 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "shall be restored to full health…$"
# 728 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 729 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_EnjoyRestOfChallenge2:
# 730 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I urge you to enjoy the rest of your\n"
# 731 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Battle Choice challenge…$"
# 732 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 733 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_ImThePikeQueen:
# 734 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I am LUCY…\n"
# 735 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I am the law here…\l"
# 736 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "For I am the PIKE QUEEN…\p"
# 737 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "You already know it, but to advance,\n"
# 738 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "you must defeat me…\p"
# 739 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "…I'm not one for idle chatter.\n"
# 740 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Hurry. Come on…$"
# 741 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 742 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_HopeYouDidntUseUpLuck:
# 743 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Your luck…\n"
# 744 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I hope you didn't use it all up here…$"
# 745 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 746 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_LucyShowMeFrontierPass:
# 747 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "LUCY: … … … … … …\n"
# 748 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Show me your FRONTIER PASS…$"
# 749 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 750 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_ReceivedLuckSymbol:
# 751 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "The Luck Symbol was embossed on\n"
# 752 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "the FRONTIER PASS!$"
# 753 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 754 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_AllThereIsDisappear:
# 755 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "…That's all there is…\n"
# 756 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Disappear already…$"
# 757 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 758 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_LucyYouAgain:
# 759 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "LUCY: …You again…\p"
# 760 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "… … … … … …\p"
# 761 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "…I've trampled flowers and braved\n"
# 762 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "storms to get to where I am…\p"
# 763 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I don't feel any compulsion to keep\n"
# 764 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "losing to the same opponent…\p"
# 765 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "… … … … … …\n"
# 766 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Fine… I'll do it…$"
# 767 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 768 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_NowComeOn:
# 769 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Now!\n"
# 770 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Come on!$"
# 771 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 772 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_LucyFrontierPass:
# 773 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "LUCY: … … … … … …\p"
# 774 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "…FRONTIER PASS…$"
# 775 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 776 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_LuckSymbolTookGoldenShine:
# 777 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "The Luck Symbol took on\n"
# 778 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "a golden shine!$"
# 779 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 780 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_IWontForget:
# 781 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "…You, I won't forget…\n"
# 782 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "…Ever…$"
# 783 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 784 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_ChoseRoomNoHeal:
# 785 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I welcome you…\p"
# 786 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Giggle…\n"
# 787 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "You seem to be bereft of luck…\p"
# 788 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "If only you hadn't chosen this room,\n"
# 789 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "your POKéMON could have been healed…$"
# 790 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 791 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_ChoseRoomHealOne:
# 792 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I welcome you…\p"
# 793 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Since you have chosen this room, I will\n"
# 794 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "restore one POKéMON to full health…$"
# 795 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 796 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_ChoseRoomHealTwo:
# 797 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I welcome you…\p"
# 798 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Since you have chosen this room, I will\n"
# 799 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "restore two POKéMON to full health…$"
# 800 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 801 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
@ Unused
# 802 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreAllMons:
# 803 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I welcome you…\p"
# 804 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Giggle…\n"
# 805 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "You should thank your lucky stars…\p"
# 806 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Since you have chosen this room,\n"
# 807 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "all your POKéMON will be restored…$"
# 808 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 809 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_ShallFetchOurMaster:
# 810 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I shall go fetch our master…$"
# 811 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 812 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreTwoMons:
# 813 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Ah, you're a lucky one!\n"
# 814 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I'm in good spirits now.\p"
# 815 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I will restore two of your POKéMON\n"
# 816 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "to full health!$"
