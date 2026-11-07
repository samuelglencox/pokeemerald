# 1 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 2 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_MapScripts::
# 3 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattlePikeRoom_OnResume
# 4 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePikeThreePathRoom_OnFrame
# 5 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePikeThreePathRoom_OnWarp
# 6 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.byte 0
# 7 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 8 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_OnFrame:
# 9 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattlePikeThreePathRoom_EventScript_GetChallengeStatus
# 10 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePikeThreePathRoom_EventScript_WarpToLobby
# 11 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattlePikeThreePathRoom_EventScript_ResumeChallenge
# 12 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	map_script_2 VAR_TEMP_5, 0, BattleFrontier_BattlePikeThreePathRoom_EventScript_SetHintRoom
# 13 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	map_script_2 VAR_TEMP_5, 1, BattleFrontier_BattlePikeThreePathRoom_EventScript_GivePikeQueenHint
# 14 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.2byte 0
# 15 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 16 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_OnWarp:
# 17 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	map_script_2 VAR_TEMP_4, 0, BattleFrontier_BattlePikeThreePathRoom_EventScript_TurnPlayerNorth
# 18 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.2byte 0
# 19 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 20 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_TurnPlayerNorth::
# 21 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	setvar VAR_TEMP_4, 1
# 22 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 23 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 24 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 25 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_GetChallengeStatus::
# 26 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	frontier_getstatus
# 27 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 28 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 29 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_WarpToLobby::
# 30 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PIKE_LOBBY, 5, 6
# 31 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	waitstate
# 32 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 33 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 34 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_ResumeChallenge::
# 35 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	lockall
# 36 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	message BattleFrontier_BattlePikeThreePathRoom_Text_AwaitingReturnSaveBeforeResume
# 37 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	waitmessage
# 38 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	pike_save CHALLENGE_STATUS_SAVING
# 39 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	playse SE_SAVE
# 40 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	waitse
# 41 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 42 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 43 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	special SavePlayerParty
# 44 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 45 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_PleaseEnjoyChallenge, MSGBOX_DEFAULT
# 46 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	closemessage
# 47 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	releaseall
# 48 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	frontier_settrainers
# 49 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 99
# 50 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 51 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 52 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant::
# 53 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM  @ Room number
# 54 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	switch VAR_RESULT
# 55 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case 1, BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom1
# 56 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case 3, BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom3
# 57 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case 5, BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom5
# 58 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case 7, BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom7
# 59 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case 9, BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom9
# 60 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case 11, BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom11
# 61 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case 13, BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom13
# 62 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 63 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 64 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom1::
# 65 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	lock
# 66 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	faceplayer
# 67 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom1, MSGBOX_DEFAULT
# 68 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge
# 69 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 70 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 71 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom3::
# 72 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	lock
# 73 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	faceplayer
# 74 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom3, MSGBOX_DEFAULT
# 75 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge
# 76 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 77 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 78 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom5::
# 79 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	lock
# 80 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	faceplayer
# 81 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom5, MSGBOX_DEFAULT
# 82 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge
# 83 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 84 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 85 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom7::
# 86 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	lock
# 87 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	faceplayer
# 88 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom7, MSGBOX_DEFAULT
# 89 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge
# 90 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 91 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 92 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom9::
# 93 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	lock
# 94 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	faceplayer
# 95 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom9, MSGBOX_DEFAULT
# 96 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge
# 97 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 98 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 99 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom11::
# 100 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	lock
# 101 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	faceplayer
# 102 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom11, MSGBOX_DEFAULT
# 103 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge
# 104 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 105 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 106 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom13::
# 107 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	lock
# 108 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	faceplayer
# 109 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom13, MSGBOX_DEFAULT
# 110 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge
# 111 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 112 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 113 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge::
# 114 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_ContinueWithChallenge, MSGBOX_YESNO
# 115 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	switch VAR_RESULT
# 116 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case NO, BattleFrontier_BattlePikeThreePathRoom_EventScript_AskSaveChallenge
# 117 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeThreePathRoom_EventScript_AskSaveChallenge
# 118 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	release
# 119 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 120 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 121 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_PauseChallenge::
# 122 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	frontier_saveparty
# 123 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	message BattleFrontier_BattlePikeThreePathRoom_Text_SavingYourData
# 124 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	waitmessage
# 125 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	special LoadPlayerParty
# 126 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	pike_save CHALLENGE_STATUS_PAUSED
# 127 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	playse SE_SAVE
# 128 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	waitse
# 129 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 130 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	frontier_reset
# 131 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 132 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 133 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_AskSaveChallenge::
# 134 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_SaveChallengeAndQuit, MSGBOX_YESNO
# 135 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	switch VAR_RESULT
# 136 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case YES, BattleFrontier_BattlePikeThreePathRoom_EventScript_PauseChallenge
# 137 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case NO, BattleFrontier_BattlePikeThreePathRoom_EventScript_AskRetireChallenge
# 138 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeThreePathRoom_EventScript_AskRetireChallenge
# 139 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	release
# 140 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 141 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 142 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_AskRetireChallenge::
# 143 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	message BattleFrontier_BattlePikeThreePathRoom_Text_RetireFromChallenge
# 144 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	waitmessage
# 145 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 146 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	switch VAR_RESULT
# 147 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case 0, BattleFrontier_BattlePike_EventScript_Retire
# 148 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	release
# 149 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 150 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 151 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_SetHintRoom::
# 152 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	pike_sethintroom
# 153 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePikeThreePathRoom_EventScript_SetPikeQueenHint
# 154 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	setvar VAR_TEMP_5, 255
# 155 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 156 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 157 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_SetPikeQueenHint::
# 158 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	setvar VAR_TEMP_5, 1
# 159 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 160 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 161 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_GivePikeQueenHint::
# 162 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	applywaitmovement LOCALID_PIKE_HINT_GIVER, BattleFrontier_BattlePikeThreePathRoom_Movement_HintGiverApproachPlayer
# 163 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	lockall
# 164 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_TerrifyingEvent, MSGBOX_DEFAULT
# 165 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	releaseall
# 166 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	applywaitmovement LOCALID_PIKE_HINT_GIVER, BattleFrontier_BattlePikeThreePathRoom_Movement_HintGiverReturnToPos
# 167 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	setvar VAR_TEMP_5, 255
# 168 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 169 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 170 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver::
# 171 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	pike_gethint
# 172 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto_if_eq VAR_RESULT, PIKE_HINT_BRAIN, BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveBrainHint
# 173 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	lock
# 174 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	faceplayer
# 175 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_FindingItDifficultToChoose, MSGBOX_YESNO
# 176 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	switch VAR_RESULT
# 177 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case YES, BattleFrontier_BattlePikeThreePathRoom_EventScript_AcceptHint
# 178 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case NO, BattleFrontier_BattlePikeThreePathRoom_EventScript_DeclineHint
# 179 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeThreePathRoom_EventScript_DeclineHint
# 180 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	release
# 181 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 182 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 183 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_DeclineHint::
# 184 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_ApologizeForImpertinence, MSGBOX_DEFAULT
# 185 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	release
# 186 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 187 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 188 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_AcceptHint::
# 189 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	pike_gethintroomid
# 190 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	switch VAR_RESULT
# 191 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case PIKE_ROOM_LEFT, BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveLeftRoomHint
# 192 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case PIKE_ROOM_CENTER, BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveCenterRoomHint
# 193 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case PIKE_ROOM_RIGHT, BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveRightRoomHint
# 194 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 195 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 196 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveLeftRoomHint::
# 197 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_SomethingAboutLeftPath, MSGBOX_DEFAULT
# 198 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveHint
# 199 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 200 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveCenterRoomHint::
# 201 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_SomethingAboutCenterPath, MSGBOX_DEFAULT
# 202 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveHint
# 203 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 204 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveRightRoomHint::
# 205 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_SomethingAboutRightPath, MSGBOX_DEFAULT
# 206 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveHint
# 207 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 208 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveHint::
# 209 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	pike_gethint
# 210 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	switch VAR_RESULT
# 211 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case PIKE_HINT_NOSTALGIA, BattleFrontier_BattlePikeThreePathRoom_EventScript_HintNostalgia
# 212 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case PIKE_HINT_WHISPERING, BattleFrontier_BattlePikeThreePathRoom_EventScript_HintWhispering
# 213 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case PIKE_HINT_POKEMON, BattleFrontier_BattlePikeThreePathRoom_EventScript_HintPokemon
# 214 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case PIKE_HINT_PEOPLE, BattleFrontier_BattlePikeThreePathRoom_EventScript_HintPeople
# 215 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 216 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 217 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_HintNostalgia::
# 218 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_WaveOfNostaliga, MSGBOX_DEFAULT
# 219 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	release
# 220 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 221 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 222 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_HintWhispering::
# 223 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_HeardWhispering, MSGBOX_DEFAULT
# 224 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	release
# 225 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 226 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 227 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_HintPokemon::
# 228 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_AromaOfPokemon, MSGBOX_DEFAULT
# 229 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	release
# 230 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 231 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 232 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_HintPeople::
# 233 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_PresenceOfPeople, MSGBOX_DEFAULT
# 234 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	release
# 235 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 236 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 237 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveBrainHint::
# 238 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	lock
# 239 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	faceplayer
# 240 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_DreadfulPresence, MSGBOX_DEFAULT
# 241 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	release
# 242 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 243 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 244 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Movement_HintGiverApproachPlayer:
# 245 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	walk_left
# 246 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	walk_left
# 247 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	walk_down
# 248 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	walk_down
# 249 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	walk_down
# 250 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	walk_down
# 251 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	step_end
# 252 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 253 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Movement_HintGiverReturnToPos:
# 254 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	walk_up
# 255 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	walk_up
# 256 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	walk_up
# 257 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	walk_up
# 258 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	walk_right
# 259 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	walk_right
# 260 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	face_down
# 261 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	step_end
# 262 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 263 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom1:
# 264 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "You are currently in\n"
# 265 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "the 1st room…$"
# 266 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 267 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom3:
# 268 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "You are currently in\n"
# 269 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "the 3rd room…$"
# 270 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 271 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom5:
# 272 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "You are currently in\n"
# 273 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "the 5th room…$"
# 274 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 275 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom7:
# 276 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "You are currently in\n"
# 277 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "the 7th room…$"
# 278 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 279 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom9:
# 280 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "You are currently in\n"
# 281 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "the 9th room…$"
# 282 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 283 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom11:
# 284 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "You are currently in\n"
# 285 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "the 11th room…$"
# 286 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 287 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom13:
# 288 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "You are currently in\n"
# 289 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "the 13th room…$"
# 290 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 291 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_ContinueWithChallenge:
# 292 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "Will you continue with\n"
# 293 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "your challenge?$"
# 294 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 295 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_SaveChallengeAndQuit:
# 296 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "Would you like to save your challenge\n"
# 297 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "and quit the game for now?$"
# 298 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 299 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_RetireFromChallenge:
# 300 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "Do you wish to retire from your\n"
# 301 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "Battle Choice challenge?$"
# 302 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 303 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_AwaitingReturnSaveBeforeResume:
# 304 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "We've been awaiting your return…\p"
# 305 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "Before resuming your Battle Choice\n"
# 306 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "challenge, let me save the game…$"
# 307 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 308 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_PleaseEnjoyChallenge:
# 309 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "Please do enjoy your Battle Choice\n"
# 310 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "challenge…$"
# 311 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 312 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_SavingYourData:
# 313 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "I am saving your data…\n"
# 314 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "A little time, please…$"
# 315 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 316 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePike_Text_PathBlockedNoTurningBack:
# 317 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "The path is blocked!\n"
# 318 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "And there is no turning back…$"
# 319 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 320 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_FindingItDifficultToChoose:
# 321 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "I beg your pardon, but…\p"
# 322 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "Are you perhaps finding it difficult\n"
# 323 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "to choose your path?$"
# 324 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 325 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_ApologizeForImpertinence:
# 326 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "I see…\n"
# 327 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "I apologize for my impertinence…$"
# 328 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 329 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_SomethingAboutRightPath:
# 330 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "Ah, let me see… There is something\n"
# 331 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "about the path on the right…$"
# 332 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 333 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_SomethingAboutCenterPath:
# 334 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "Ah, let me see… There is something\n"
# 335 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "about the path in the center…$"
# 336 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 337 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_SomethingAboutLeftPath:
# 338 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "Ah, let me see… There is something\n"
# 339 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "about the path on the left…$"
# 340 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 341 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_AromaOfPokemon:
# 342 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "It seems to have the distinct aroma\n"
# 343 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "of POKéMON wafting around it…$"
# 344 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 345 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_PresenceOfPeople:
# 346 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "Is it… A TRAINER?\n"
# 347 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "I sense the presence of people…$"
# 348 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 349 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_HeardWhispering:
# 350 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "I seem to have heard something…\n"
# 351 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "It may have been whispering…$"
# 352 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 353 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_WaveOfNostaliga:
# 354 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "For some odd reason, I felt a wave\n"
# 355 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "of nostalgia coming from it…$"
# 356 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 357 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_TerrifyingEvent:
# 358 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "I am sorry to say…\p"
# 359 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "A terrifying event, yes, a horrible one,\n"
# 360 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "is about to befall you…\p"
# 361 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "I urge you to pay the utmost care\n"
# 362 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "and prepare for the worst…$"
# 363 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 364 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_DreadfulPresence:
# 365 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "From every path I sense a dreadful\n"
# 366 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "presence…$"
