# 1 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 2 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_MapScripts::
# 3 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattlePyramidTop_OnResume
# 4 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePyramidTop_OnFrame
# 5 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattlePyramidTop_OnTransition
# 6 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePyramidTop_OnWarp
# 7 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.byte 0
# 8 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 9 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_OnTransition:
# 10 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	pyramid_updatelight 200, PYRAMID_LIGHT_SET_RADIUS
# 11 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_TEMP_F, 1
# 12 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 13 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 14 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_OnWarp:
# 15 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePyramidTop_EventScript_SetUpObjects
# 16 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.2byte 0
# 17 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 18 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_SetUpObjects::
# 19 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_TEMP_1, 1
# 20 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 21 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_ne VAR_TEMP_C, 0, BattleFrontier_BattlePyramidTop_EventScript_EndSetUpObjects
# 22 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setobjectxyperm LOCALID_BRANDON, 0, 0
# 23 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_EndSetUpObjects::
# 24 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 25 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 26 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_OnResume:
# 27 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_getbrainstatus
# 28 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_eq VAR_RESULT, FRONTIER_BRAIN_NOT_READY, BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus
# 29 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	call BattleFrontier_EventScript_SetBrainObjectGfx
# 30 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus::
# 31 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	copyvar VAR_TEMP_C, VAR_RESULT
# 32 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_getstatus
# 33 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	switch VAR_TEMP_CHALLENGE_STATUS
# 34 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	case 0, BattleFrontier_BattlePyramidTop_EventScript_ReadyChallenge
# 35 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	case CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePyramid_EventScript_WarpToLobby
# 36 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	case CHALLENGE_STATUS_PAUSED, BattleFrontier_BattlePyramidTop_EventScript_ReadyChallenge
# 37 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_OUTCOME
# 38 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 39 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_DREW, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 40 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_FORFEITED, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 41 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 42 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 43 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_OnFrame:
# 44 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script_2 VAR_TEMP_PLAYING_PYRAMID_MUSIC, 0, BattleFrontier_BattlePyramidTop_EventScript_PlayPyramidMusic
# 45 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script_2 VAR_TEMP_F, 1, BattleFrontier_BattlePyramidTop_EventScript_ShowMapName
# 46 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.2byte 0
# 47 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 48 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_PlayPyramidMusic::
# 49 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	playbgm MUS_B_PYRAMID_TOP, FALSE
# 50 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_TEMP_PLAYING_PYRAMID_MUSIC, 1
# 51 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 52 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 53 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_ShowMapName::
# 54 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	special ShowMapNamePopup
# 55 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_TEMP_F, 0
# 56 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 57 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 58 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_ReadyChallenge::
# 59 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	pyramid_save CHALLENGE_STATUS_SAVING
# 60 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	special SavePlayerParty
# 61 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 62 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	pyramid_settrainers
# 63 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 64 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_TEMP_F, 1
# 65 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 66 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 67 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_Attendant::
# 68 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	lock
# 69 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	faceplayer
# 70 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_ne VAR_TEMP_D, 0, BattleFrontier_BattlePyramidTop_EventScript_StepForwardWhenReady
# 71 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_ne VAR_TEMP_C, FRONTIER_BRAIN_NOT_READY, BattleFrontier_BattlePyramidTop_EventScript_BrandonHereMoveAside
# 72 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_ReachedSummitUpYouGo, MSGBOX_DEFAULT
# 73 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
# 74 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applywaitmovement LOCALID_PYRAMID_TOP_ATTENDANT, BattleFrontier_BattlePyramidTop_Movement_AttendantMoveAside
# 75 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applywaitmovement LOCALID_PLAYER, BattleFrontier_BattlePyramidTop_Movement_PlayerClimbToTop
# 76 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applywaitmovement LOCALID_PYRAMID_TOP_ATTENDANT, BattleFrontier_BattlePyramidTop_Movement_AttendantBlockPath
# 77 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	message BattleFrontier_BattlePyramidTop_Text_PlayerConqueredPyramid
# 78 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmessage
# 79 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	playfanfare MUS_OBTAIN_B_POINTS
# 80 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitfanfare
# 81 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
# 82 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_WarpToLobbyWon::
# 83 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 84 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_LOBBY, 7, 13
# 85 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitstate
# 86 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 87 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 88 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_StepForwardWhenReady::
# 89 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_StepForwardWhenReady, MSGBOX_DEFAULT
# 90 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
# 91 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 92 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 93 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BrandonHereMoveAside::
# 94 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_ChiefBeatYouHere, MSGBOX_DEFAULT
# 95 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_PYRAMID_TOP_ATTENDANT, BattleFrontier_BattlePyramidTop_Movement_AttendantMoveAside
# 96 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_TEMP_D, 1
# 97 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
# 98 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 99 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 100 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon::
# 101 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	lockall
# 102 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	switch VAR_TEMP_C
# 103 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	case FRONTIER_BRAIN_GOLD, BattleFrontier_BattlePyramidTop_EventScript_BrandonIntroGold
# 104 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	case FRONTIER_BRAIN_STREAK, BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardSilverSpeech
# 105 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	case FRONTIER_BRAIN_STREAK_LONG, BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardGoldSpeech
# 106 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 107 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardSilverSpeech
# 108 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	special SpawnCameraObject
# 109 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applywaitmovement LOCALID_CAMERA, BattleFrontier_BattlePyramidTop_Movement_CameraPanUp
# 110 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_ExplorationsAreGrandestAdventure, MSGBOX_DEFAULT
# 111 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
# 112 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 113 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applywaitmovement LOCALID_BRANDON, BattleFrontier_BattlePyramidTop_Movement_BrandonApproachPlayer
# 114 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_ImPyramidKingBrandon, MSGBOX_DEFAULT
# 115 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonSilver
# 116 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 117 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 118 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardSilverSpeech::
# 119 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applywaitmovement LOCALID_BRANDON, BattleFrontier_BattlePyramidTop_Movement_BrandonApproachPlayer
# 120 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonSilver::
# 121 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_BringCourageToOurBattle, MSGBOX_DEFAULT
# 122 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	call BattleFrontier_BattlePyramidTop_EventScript_DoBrandonBattle
# 123 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	playbgm MUS_B_PYRAMID_TOP, FALSE
# 124 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonSilver
# 125 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 126 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 127 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonSilver::
# 128 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_getsymbols
# 129 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_ne VAR_RESULT, 0, BattleFrontier_BattlePyramidTop_EventScript_WarpToLobbyWon
# 130 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_BrandonFrontierPassPlease, MSGBOX_DEFAULT
# 131 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 132 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	message BattleFrontier_BattlePyramidTop_Text_ReceivedBraveSymbol
# 133 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmessage
# 134 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitfanfare
# 135 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_givesymbol
# 136 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_LookForwardToNextMeeting, MSGBOX_DEFAULT
# 137 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_WarpToLobbyWon
# 138 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 139 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BrandonIntroGold::
# 140 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 141 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardGoldSpeech
# 142 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	special SpawnCameraObject
# 143 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applywaitmovement LOCALID_CAMERA, BattleFrontier_BattlePyramidTop_Movement_CameraPanUp
# 144 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_BrandonYouveReturned, MSGBOX_DEFAULT
# 145 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
# 146 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 147 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applywaitmovement LOCALID_BRANDON, BattleFrontier_BattlePyramidTop_Movement_BrandonApproachPlayer
# 148 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_MyCourageIsOffMeter, MSGBOX_DEFAULT
# 149 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonGold
# 150 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 151 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 152 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardGoldSpeech::
# 153 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applywaitmovement LOCALID_BRANDON, BattleFrontier_BattlePyramidTop_Movement_BrandonApproachPlayer
# 154 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonGold::
# 155 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_EverythingYouHave, MSGBOX_DEFAULT
# 156 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	call BattleFrontier_BattlePyramidTop_EventScript_DoBrandonBattle
# 157 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	playbgm MUS_B_PYRAMID_TOP, FALSE
# 158 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonGold
# 159 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 160 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 161 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonGold::
# 162 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_getsymbols
# 163 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_eq VAR_RESULT, 2, BattleFrontier_BattlePyramidTop_EventScript_WarpToLobbyWon
# 164 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_BrandonRemarkableHaveThis, MSGBOX_DEFAULT
# 165 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 166 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	message BattleFrontier_BattlePyramidTop_Text_BraveSymbolTookGoldenShine
# 167 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmessage
# 168 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitfanfare
# 169 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_givesymbol
# 170 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_FarewellForNow, MSGBOX_DEFAULT
# 171 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_WarpToLobbyWon
# 172 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 173 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_DoBrandonBattle::
# 174 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
# 175 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_PYRAMID
# 176 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_0x8005, 0
# 177 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	special DoSpecialTrainerBattle
# 178 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	return
# 179 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 180 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Movement_AttendantMoveAside:
# 181 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_right
# 182 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_in_place_faster_left
# 183 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	step_end
# 184 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 185 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Movement_AttendantBlockPath:
# 186 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_left
# 187 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_in_place_faster_up
# 188 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	step_end
# 189 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 190 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Movement_PlayerClimbToTop:
# 191 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_up
# 192 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_up
# 193 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_up
# 194 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_up
# 195 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_up
# 196 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_in_place_faster_down
# 197 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	step_end
# 198 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 199 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Movement_BrandonApproachPlayer:
# 200 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_fast_down
# 201 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	step_end
# 202 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 203 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Movement_CameraPanUp:
# 204 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_slow_up
# 205 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_slow_up
# 206 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	delay_16
# 207 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	step_end
# 208 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 209 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_ReachedSummitUpYouGo:
# 210 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "It is a delight to see you here!\n"
# 211 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "You have reached the summit of\l"
# 212 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "the BATTLE PYRAMID!\p"
# 213 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Above here is the PYRAMID's\n"
# 214 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "lookout point.\p"
# 215 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "It is a place open only to those\n"
# 216 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "who have conquered the PYRAMID.\p"
# 217 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Now, please!\n"
# 218 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Up you go!$"
# 219 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 220 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_PlayerConqueredPyramid:
# 221 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "The PYRAMID's new conqueror!\n"
# 222 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Let the name {PLAYER} be known!$"
# 223 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 224 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_ChiefBeatYouHere:
# 225 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "It is a delight to see you here!\p"
# 226 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Unfortunately, you were second by\n"
# 227 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "a mere fraction of time!\p"
# 228 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Our chief has already conquered\n"
# 229 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "the PYRAMID ahead of you.\p"
# 230 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "However, my young explorer…\n"
# 231 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "You are a TRAINER!\p"
# 232 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Assert your power and take the glory\n"
# 233 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "of the pinnacle from our chief!\p"
# 234 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Now, please! When you are ready,\n"
# 235 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "take one more step of courage!$"
# 236 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 237 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_ExplorationsAreGrandestAdventure:
# 238 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Young adventurer…\p"
# 239 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Wouldn't you agree that explorations\n"
# 240 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "are the grandest of adventures?\p"
# 241 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Your own wits!\p"
# 242 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Your own strength!\p"
# 243 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Your own POKéMON!\p"
# 244 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "And, above all, only your own courage\n"
# 245 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "to lead you through unknown worlds…$"
# 246 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 247 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_ImPyramidKingBrandon:
# 248 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Aah, yes, indeed this life is grand!\n"
# 249 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Grand, it is! Eh?\p"
# 250 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "I'm BRANDON!\p"
# 251 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "I'm the PYRAMID KING, which means\n"
# 252 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "I'm in charge here.\p"
# 253 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Most people call me the chief!\p"
# 254 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "You coming here means you have\n"
# 255 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "that much confidence in yourself,\l"
# 256 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "am I right?\p"
# 257 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Hahahah!\n"
# 258 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "This should be exciting!$"
# 259 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 260 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_BringCourageToOurBattle:
# 261 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Now, then!\n"
# 262 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Bring your courage to our battle!$"
# 263 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 264 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_BrandonFrontierPassPlease:
# 265 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "BRANDON: Hahahah! Grand it was!\n"
# 266 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Grand, yes, indeed!\p"
# 267 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Well done! You've earned recognition!\n"
# 268 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Your FRONTIER PASS, please!$"
# 269 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 270 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_ReceivedBraveSymbol:
# 271 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "The Brave Symbol was embossed on\n"
# 272 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "the FRONTIER PASS!$"
# 273 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 274 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_LookForwardToNextMeeting:
# 275 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Young explorer!\n"
# 276 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "I look forward to our next meeting!$"
# 277 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 278 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_BrandonYouveReturned:
# 279 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "BRANDON: …You've finally returned,\n"
# 280 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "young explorer…\p"
# 281 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Your love of adventure seems to come\n"
# 282 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "deep from within your heart…\p"
# 283 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Yes… You are exactly as I was in\n"
# 284 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "my own youth…\p"
# 285 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "… … …Ah…\p"
# 286 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "The passionate!\p"
# 287 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "The dangerous!\p"
# 288 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "The desperate!\p"
# 289 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Those days of death-defying,\n"
# 290 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "life-affirming adventures are back…$"
# 291 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 292 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_MyCourageIsOffMeter:
# 293 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Now, then!\p"
# 294 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "I sense my own courage is off\n"
# 295 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "the meter!$"
# 296 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 297 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_EverythingYouHave:
# 298 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Everything you have!\n"
# 299 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "I'm braced for it all!$"
# 300 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 301 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_BrandonRemarkableHaveThis:
# 302 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "BRANDON: Hahahah!\n"
# 303 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Remarkable!\l"
# 304 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Yes, it's grand, indeed!\p"
# 305 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Young explorer!\p"
# 306 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "You've bested me through and through!\n"
# 307 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Here! I want you to have this!$"
# 308 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 309 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_BraveSymbolTookGoldenShine:
# 310 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "The Brave Symbol took on\n"
# 311 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "a golden shine!$"
# 312 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 313 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_FarewellForNow:
# 314 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Ah, yes! It just goes to show that\n"
# 315 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "I have much to learn still!\p"
# 316 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "May our paths cross again!\n"
# 317 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Farewell for now, young explorer!$"
# 318 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 319 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_StepForwardWhenReady:
# 320 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Now, when you are ready, take courage\n"
# 321 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "and step forward.$"
