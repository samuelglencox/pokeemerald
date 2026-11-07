# 1 "data/maps/MauvilleCity/scripts.pory"

# 2 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_MapScripts::
# 3 "data/maps/MauvilleCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_OnTransition
# 4 "data/maps/MauvilleCity/scripts.pory"
	.byte 0
# 5 "data/maps/MauvilleCity/scripts.pory"

# 6 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_OnTransition:
# 7 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_VISITED_MAUVILLE_CITY
# 8 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 9 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION
# 10 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_SYS_TV_START
# 11 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 12 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 0
# 13 "data/maps/MauvilleCity/scripts.pory"
	call_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_MoveWattsonBackToGym
# 14 "data/maps/MauvilleCity/scripts.pory"
	end
# 15 "data/maps/MauvilleCity/scripts.pory"

# 16 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_MoveWattsonBackToGym::
# 17 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 18 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 19 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_WATTSON_REMATCH_AVAILABLE
# 20 "data/maps/MauvilleCity/scripts.pory"
	return
# 21 "data/maps/MauvilleCity/scripts.pory"

# 22 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Boy::
# 23 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_NurseHurtMonBackToHealth, MSGBOX_NPC
# 24 "data/maps/MauvilleCity/scripts.pory"
	end
# 25 "data/maps/MauvilleCity/scripts.pory"

# 26 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Maniac::
# 27 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_AllSortsOfPeopleComeThrough, MSGBOX_NPC
# 28 "data/maps/MauvilleCity/scripts.pory"
	end
# 29 "data/maps/MauvilleCity/scripts.pory"

# 30 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Woman::
# 31 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RydelVeryGenerous, MSGBOX_NPC
# 32 "data/maps/MauvilleCity/scripts.pory"
	end
# 33 "data/maps/MauvilleCity/scripts.pory"

# 34 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RichBoy::
# 35 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_PokemonCanJumpYouOnBike, MSGBOX_NPC
# 36 "data/maps/MauvilleCity/scripts.pory"
	end
# 37 "data/maps/MauvilleCity/scripts.pory"

# 38 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CitySign::
# 39 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_CitySign, MSGBOX_SIGN
# 40 "data/maps/MauvilleCity/scripts.pory"
	end
# 41 "data/maps/MauvilleCity/scripts.pory"

# 42 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GymSign::
# 43 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GymSign, MSGBOX_SIGN
# 44 "data/maps/MauvilleCity/scripts.pory"
	end
# 45 "data/maps/MauvilleCity/scripts.pory"

# 46 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BikeShopSign::
# 47 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BikeShopSign, MSGBOX_SIGN
# 48 "data/maps/MauvilleCity/scripts.pory"
	end
# 49 "data/maps/MauvilleCity/scripts.pory"

# 50 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GameCornerSign::
# 51 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GameCornerSign, MSGBOX_SIGN
# 52 "data/maps/MauvilleCity/scripts.pory"
	end
# 53 "data/maps/MauvilleCity/scripts.pory"

# 54 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_SchoolKidM::
# 55 "data/maps/MauvilleCity/scripts.pory"
	lock
# 56 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 57 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_TV_EXPLAINED, MauvilleCity_EventScript_TVExplained
# 58 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ExplainTV, MSGBOX_DEFAULT
# 59 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_TV_EXPLAINED
# 60 "data/maps/MauvilleCity/scripts.pory"
	release
# 61 "data/maps/MauvilleCity/scripts.pory"
	end
# 62 "data/maps/MauvilleCity/scripts.pory"

# 63 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_TVExplained::
# 64 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BeenCheckingOutTV, MSGBOX_DEFAULT
# 65 "data/maps/MauvilleCity/scripts.pory"
	release
# 66 "data/maps/MauvilleCity/scripts.pory"
	end
# 67 "data/maps/MauvilleCity/scripts.pory"

# 68 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallysUncle::
# 69 "data/maps/MauvilleCity/scripts.pory"
	lock
# 70 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 71 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_UncleAskPlayerToBattleWally
# 72 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleHesTooPeppy, MSGBOX_DEFAULT
# 73 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 74 "data/maps/MauvilleCity/scripts.pory"
	applywaitmovement LOCALID_MAUVILLE_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 75 "data/maps/MauvilleCity/scripts.pory"
	release
# 76 "data/maps/MauvilleCity/scripts.pory"
	end
# 77 "data/maps/MauvilleCity/scripts.pory"

# 78 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_UncleAskPlayerToBattleWally::
# 79 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleCanYouBattleWally, MSGBOX_DEFAULT
# 80 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 81 "data/maps/MauvilleCity/scripts.pory"
	applywaitmovement LOCALID_MAUVILLE_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 82 "data/maps/MauvilleCity/scripts.pory"
	release
# 83 "data/maps/MauvilleCity/scripts.pory"
	end
# 84 "data/maps/MauvilleCity/scripts.pory"

# 85 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wally::
# 86 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 87 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_WallyRequestBattleAgain
# 88 "data/maps/MauvilleCity/scripts.pory"
	applywaitmovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 89 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWantToChallengeGym, MSGBOX_DEFAULT
# 90 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleYourePushingIt, MSGBOX_DEFAULT
# 91 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWeCanBeatAnyone, MSGBOX_DEFAULT
# 92 "data/maps/MauvilleCity/scripts.pory"
	applywaitmovement LOCALID_MAUVILLE_WALLY, Common_Movement_FacePlayer
# 93 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 94 "data/maps/MauvilleCity/scripts.pory"
	applywaitmovement LOCALID_MAUVILLE_WALLY, Common_Movement_ExclamationMark
# 95 "data/maps/MauvilleCity/scripts.pory"
	applywaitmovement LOCALID_MAUVILLE_WALLY, Common_Movement_Delay48
# 96 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWillYouBattleMe, MSGBOX_YESNO
# 97 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 98 "data/maps/MauvilleCity/scripts.pory"
	end
# 99 "data/maps/MauvilleCity/scripts.pory"

# 100 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt::
# 101 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, MauvilleCity_EventScript_BattleWally
# 102 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_EventScript_DeclineWallyBattle
# 103 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 104 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 105 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_WallyAndUncleExitNorth
# 106 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_WallyAndUncleExitEast
# 107 "data/maps/MauvilleCity/scripts.pory"
	end
# 108 "data/maps/MauvilleCity/scripts.pory"

# 109 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitNorth::
# 110 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth1
# 111 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_Movement_WallyExitNorth1
# 112 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth1
# 113 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 114 "data/maps/MauvilleCity/scripts.pory"
	applywaitmovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 115 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 116 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerFaceUncleNorth
# 117 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerNorth
# 118 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 119 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 120 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 121 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth2
# 122 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth2
# 123 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_Movement_WallyExitNorth2
# 124 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 125 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 126 "data/maps/MauvilleCity/scripts.pory"
	end
# 127 "data/maps/MauvilleCity/scripts.pory"

# 128 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitEast::
# 129 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast1
# 130 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_Movement_WallyExitEast1
# 131 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast1
# 132 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 133 "data/maps/MauvilleCity/scripts.pory"
	applywaitmovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 134 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 135 "data/maps/MauvilleCity/scripts.pory"
	applywaitmovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerEast
# 136 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 137 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 138 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast2
# 139 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast2
# 140 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_Movement_WallyExitEast2
# 141 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 142 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 143 "data/maps/MauvilleCity/scripts.pory"
	end
# 144 "data/maps/MauvilleCity/scripts.pory"

# 145 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DefeatedWally::
# 146 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_MAUVILLE_WALLY
# 147 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_MAUVILLE_WALLYS_UNCLE
# 148 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 149 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
# 150 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_MAUVILLE
# 151 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_WALLY_CALL_STEP_COUNTER, 0
# 152 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 153 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottApproachPlayerNorth
# 154 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottApproachPlayerEast
# 155 "data/maps/MauvilleCity/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 156 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ScottYouDidntHoldBack, MSGBOX_DEFAULT
# 157 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 158 "data/maps/MauvilleCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 159 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottExitNorth
# 160 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottExitEast
# 161 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_MAUVILLE_SCOTT
# 162 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 163 "data/maps/MauvilleCity/scripts.pory"
	end
# 164 "data/maps/MauvilleCity/scripts.pory"

# 165 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerNorth::
# 166 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_MAUVILLE_SCOTT
# 167 "data/maps/MauvilleCity/scripts.pory"
	applywaitmovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottApproachPlayerNorth
# 168 "data/maps/MauvilleCity/scripts.pory"
	return
# 169 "data/maps/MauvilleCity/scripts.pory"

# 170 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerEast::
# 171 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm LOCALID_MAUVILLE_SCOTT, 12, 13
# 172 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_MAUVILLE_SCOTT
# 173 "data/maps/MauvilleCity/scripts.pory"
	applywaitmovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottApproachPlayerEast
# 174 "data/maps/MauvilleCity/scripts.pory"
	return
# 175 "data/maps/MauvilleCity/scripts.pory"

# 176 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitNorth::
# 177 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitNorth
# 178 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottExitNorth
# 179 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 180 "data/maps/MauvilleCity/scripts.pory"
	return
# 181 "data/maps/MauvilleCity/scripts.pory"

# 182 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitEast::
# 183 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitEast
# 184 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottExitEast
# 185 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 186 "data/maps/MauvilleCity/scripts.pory"
	return
# 187 "data/maps/MauvilleCity/scripts.pory"

# 188 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWally::
# 189 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyHereICome, MSGBOX_DEFAULT
# 190 "data/maps/MauvilleCity/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyDefeat
# 191 "data/maps/MauvilleCity/scripts.pory"
	applywaitmovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 192 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyIllGoBackToVerdanturf, MSGBOX_DEFAULT
# 193 "data/maps/MauvilleCity/scripts.pory"
	applywaitmovement LOCALID_MAUVILLE_WALLY, Common_Movement_FacePlayer
# 194 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ThankYouNotEnoughToBattle, MSGBOX_DEFAULT
# 195 "data/maps/MauvilleCity/scripts.pory"
	applywaitmovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 196 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleNoNeedToBeDown, MSGBOX_DEFAULT
# 197 "data/maps/MauvilleCity/scripts.pory"
	return
# 198 "data/maps/MauvilleCity/scripts.pory"

# 199 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DeclineWallyBattle::
# 200 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DECLINED_WALLY_BATTLE_MAUVILLE
# 201 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyMyUncleWontKnowImStrong, MSGBOX_DEFAULT
# 202 "data/maps/MauvilleCity/scripts.pory"
	release
# 203 "data/maps/MauvilleCity/scripts.pory"
	end
# 204 "data/maps/MauvilleCity/scripts.pory"

# 205 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyRequestBattleAgain::
# 206 "data/maps/MauvilleCity/scripts.pory"
	applywaitmovement LOCALID_MAUVILLE_WALLY, Common_Movement_FacePlayer
# 207 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyPleaseBattleMe, MSGBOX_YESNO
# 208 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 209 "data/maps/MauvilleCity/scripts.pory"
	end
# 210 "data/maps/MauvilleCity/scripts.pory"

# 211 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth1:
# 212 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 213 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 214 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 215 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 216 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 217 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 218 "data/maps/MauvilleCity/scripts.pory"

# 219 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast1:
# 220 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 221 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 222 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 223 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 224 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 225 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 226 "data/maps/MauvilleCity/scripts.pory"

# 227 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth2:
# 228 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 229 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 230 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 231 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 232 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 233 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 234 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 235 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 236 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 237 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 238 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 239 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 240 "data/maps/MauvilleCity/scripts.pory"

# 241 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast2:
# 242 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 243 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 244 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 245 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 246 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 247 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 248 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 249 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 250 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 251 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 252 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 253 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 254 "data/maps/MauvilleCity/scripts.pory"

# 255 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth2:
# 256 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 257 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 258 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 259 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 260 "data/maps/MauvilleCity/scripts.pory"

# 261 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast2:
# 262 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 263 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 264 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 265 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 266 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 267 "data/maps/MauvilleCity/scripts.pory"

# 268 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitNorth:
# 269 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 270 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 271 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 272 "data/maps/MauvilleCity/scripts.pory"

# 273 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitEast:
# 274 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 275 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 276 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 277 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 278 "data/maps/MauvilleCity/scripts.pory"

# 279 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast1:
# 280 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 281 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 282 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 283 "data/maps/MauvilleCity/scripts.pory"

# 284 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth1:
# 285 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 286 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 287 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 288 "data/maps/MauvilleCity/scripts.pory"

# 289 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth1:
# 290 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 291 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 292 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 293 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 294 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 295 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 296 "data/maps/MauvilleCity/scripts.pory"

# 297 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast1:
# 298 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 299 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 300 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 301 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 302 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 303 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 304 "data/maps/MauvilleCity/scripts.pory"

# 305 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerFaceUncleNorth:
# 306 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 307 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 308 "data/maps/MauvilleCity/scripts.pory"
	delay_4
# 309 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 310 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 311 "data/maps/MauvilleCity/scripts.pory"

# 312 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerNorth:
# 313 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 314 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 315 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 316 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 317 "data/maps/MauvilleCity/scripts.pory"

# 318 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerEast:
# 319 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 320 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 321 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 322 "data/maps/MauvilleCity/scripts.pory"

# 323 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth2:
# 324 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 325 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 326 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 327 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 328 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 329 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 330 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 331 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 332 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 333 "data/maps/MauvilleCity/scripts.pory"

# 334 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast2:
# 335 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 336 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 337 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 338 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 339 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 340 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 341 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 342 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 343 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 344 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 345 "data/maps/MauvilleCity/scripts.pory"

# 346 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerNorth:
# 347 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 348 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 349 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 350 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 351 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 352 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 353 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 354 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 355 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 356 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 357 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 358 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 359 "data/maps/MauvilleCity/scripts.pory"

# 360 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerEast:
# 361 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 362 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 363 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 364 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 365 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 366 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 367 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 368 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 369 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 370 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 371 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 372 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 373 "data/maps/MauvilleCity/scripts.pory"

# 374 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitNorth:
# 375 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 376 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 377 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 378 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 379 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 380 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 381 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 382 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 383 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 384 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 385 "data/maps/MauvilleCity/scripts.pory"

# 386 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitEast:
# 387 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 388 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 389 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 390 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 391 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 392 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 393 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 394 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 395 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 396 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 397 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 398 "data/maps/MauvilleCity/scripts.pory"

# 399 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wattson::
# 400 "data/maps/MauvilleCity/scripts.pory"
	lock
# 401 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 402 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_ReceivedThunderbolt
# 403 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_EventScript_CompletedNewMauville
# 404 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_BASEMENT_KEY_FROM_WATTSON, MauvilleCity_EventScript_BegunNewMauville
# 405 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonNeedFavorTakeKey, MSGBOX_DEFAULT
# 406 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_BASEMENT_KEY
# 407 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
# 408 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 409 "data/maps/MauvilleCity/scripts.pory"
	release
# 410 "data/maps/MauvilleCity/scripts.pory"
	end
# 411 "data/maps/MauvilleCity/scripts.pory"

# 412 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BegunNewMauville::
# 413 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 414 "data/maps/MauvilleCity/scripts.pory"
	release
# 415 "data/maps/MauvilleCity/scripts.pory"
	end
# 416 "data/maps/MauvilleCity/scripts.pory"

# 417 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CompletedNewMauville::
# 418 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonThanksTakeTM, MSGBOX_DEFAULT
# 419 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_TM_THUNDERBOLT
# 420 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 421 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON
# 422 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 423 "data/maps/MauvilleCity/scripts.pory"
	release
# 424 "data/maps/MauvilleCity/scripts.pory"
	end
# 425 "data/maps/MauvilleCity/scripts.pory"

# 426 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ReceivedThunderbolt::
# 427 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 428 "data/maps/MauvilleCity/scripts.pory"
	release
# 429 "data/maps/MauvilleCity/scripts.pory"
	end
# 430 "data/maps/MauvilleCity/scripts.pory"

# 431 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RegisterWallyCall::
# 432 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 433 "data/maps/MauvilleCity/scripts.pory"
	pokenavcall MauvilleCity_Text_WallyPokenavCall
# 434 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 435 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 436 "data/maps/MauvilleCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 437 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RegisteredWally, MSGBOX_DEFAULT
# 438 "data/maps/MauvilleCity/scripts.pory"
	waitfanfare
# 439 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 440 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 441 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
# 442 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 443 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 444 "data/maps/MauvilleCity/scripts.pory"
	end
# 445 "data/maps/MauvilleCity/scripts.pory"

# 446 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleHesTooPeppy:
# 447 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: It's because of POKéMON that\n"
# 448 "data/maps/MauvilleCity/scripts.pory"
	.string "this boy's got more pep, I suppose…\l"
# 449 "data/maps/MauvilleCity/scripts.pory"
	.string "But he's become a bit too peppy…$"
# 450 "data/maps/MauvilleCity/scripts.pory"

# 451 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWantToChallengeGym:
# 452 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Aww, UNCLE, please?\p"
# 453 "data/maps/MauvilleCity/scripts.pory"
	.string "I want to challenge this GYM and see\n"
# 454 "data/maps/MauvilleCity/scripts.pory"
	.string "how much better I've become.\p"
# 455 "data/maps/MauvilleCity/scripts.pory"
	.string "Please? May I, please?$"
# 456 "data/maps/MauvilleCity/scripts.pory"

# 457 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleYourePushingIt:
# 458 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: Now hold on, WALLY.\p"
# 459 "data/maps/MauvilleCity/scripts.pory"
	.string "Since you started living with POKéMON,\n"
# 460 "data/maps/MauvilleCity/scripts.pory"
	.string "you have grown quite a lot stronger.\p"
# 461 "data/maps/MauvilleCity/scripts.pory"
	.string "But don't you think you're pushing it\n"
# 462 "data/maps/MauvilleCity/scripts.pory"
	.string "to suddenly challenge a GYM?$"
# 463 "data/maps/MauvilleCity/scripts.pory"

# 464 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWeCanBeatAnyone:
# 465 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: I'm not pushing it.\p"
# 466 "data/maps/MauvilleCity/scripts.pory"
	.string "If I combine forces with RALTS,\n"
# 467 "data/maps/MauvilleCity/scripts.pory"
	.string "we can beat anyone!$"
# 468 "data/maps/MauvilleCity/scripts.pory"

# 469 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWillYouBattleMe:
# 470 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh! Hi, {PLAYER}!\p"
# 471 "data/maps/MauvilleCity/scripts.pory"
	.string "I've gotten a lot stronger since\n"
# 472 "data/maps/MauvilleCity/scripts.pory"
	.string "we met.\p"
# 473 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, I want you and my UNCLE to\n"
# 474 "data/maps/MauvilleCity/scripts.pory"
	.string "understand that.\p"
# 475 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, please, will you have\n"
# 476 "data/maps/MauvilleCity/scripts.pory"
	.string "a battle with me?$"
# 477 "data/maps/MauvilleCity/scripts.pory"

# 478 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyMyUncleWontKnowImStrong:
# 479 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh… If you won't battle me,\n"
# 480 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, my UNCLE won't know that I've\l"
# 481 "data/maps/MauvilleCity/scripts.pory"
	.string "become really strong.$"
# 482 "data/maps/MauvilleCity/scripts.pory"

# 483 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleCanYouBattleWally:
# 484 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, was it?\n"
# 485 "data/maps/MauvilleCity/scripts.pory"
	.string "On WALLY's behalf, can I ask you to\l"
# 486 "data/maps/MauvilleCity/scripts.pory"
	.string "battle with him just this once?\p"
# 487 "data/maps/MauvilleCity/scripts.pory"
	.string "I don't think he's going to listen to\n"
# 488 "data/maps/MauvilleCity/scripts.pory"
	.string "any reason the way he is now.$"
# 489 "data/maps/MauvilleCity/scripts.pory"

# 490 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPleaseBattleMe:
# 491 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, please!\n"
# 492 "data/maps/MauvilleCity/scripts.pory"
	.string "Battle with me, please.$"
# 493 "data/maps/MauvilleCity/scripts.pory"

# 494 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyHereICome:
# 495 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, thank you.\p"
# 496 "data/maps/MauvilleCity/scripts.pory"
	.string "Okay… Here I come!$"
# 497 "data/maps/MauvilleCity/scripts.pory"

# 498 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyDefeat:
# 499 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: … … … … … … …\p"
# 500 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … … … …\p"
# 501 "data/maps/MauvilleCity/scripts.pory"
	.string "I lost…$"
# 502 "data/maps/MauvilleCity/scripts.pory"

# 503 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyIllGoBackToVerdanturf:
# 504 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: UNCLE…\n"
# 505 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll go back to VERDANTURF…$"
# 506 "data/maps/MauvilleCity/scripts.pory"

# 507 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ThankYouNotEnoughToBattle:
# 508 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, thank you.\n"
# 509 "data/maps/MauvilleCity/scripts.pory"
	.string "Being a TRAINER is tough, isn't it?\p"
# 510 "data/maps/MauvilleCity/scripts.pory"
	.string "It's not enough just to have POKéMON\n"
# 511 "data/maps/MauvilleCity/scripts.pory"
	.string "and make them battle. That isn't what\l"
# 512 "data/maps/MauvilleCity/scripts.pory"
	.string "being a real TRAINER is about.$"
# 513 "data/maps/MauvilleCity/scripts.pory"

# 514 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleNoNeedToBeDown:
# 515 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: WALLY, there's no need to be so\n"
# 516 "data/maps/MauvilleCity/scripts.pory"
	.string "down on yourself.\p"
# 517 "data/maps/MauvilleCity/scripts.pory"
	.string "Why, what's keeping you from becoming\n"
# 518 "data/maps/MauvilleCity/scripts.pory"
	.string "stronger and stronger?\p"
# 519 "data/maps/MauvilleCity/scripts.pory"
	.string "Come on, let's go home.\n"
# 520 "data/maps/MauvilleCity/scripts.pory"
	.string "Everyone's waiting for you.$"
# 521 "data/maps/MauvilleCity/scripts.pory"

# 522 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleVisitUsSometime:
# 523 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, it just dawned on me\n"
# 524 "data/maps/MauvilleCity/scripts.pory"
	.string "that you must be the TRAINER who kept\l"
# 525 "data/maps/MauvilleCity/scripts.pory"
	.string "an eye out for WALLY when he caught\l"
# 526 "data/maps/MauvilleCity/scripts.pory"
	.string "his POKéMON.\p"
# 527 "data/maps/MauvilleCity/scripts.pory"
	.string "Why don't you visit us in VERDANTURF\n"
# 528 "data/maps/MauvilleCity/scripts.pory"
	.string "sometime?\l"
# 529 "data/maps/MauvilleCity/scripts.pory"
	.string "I'm sure WALLY would enjoy it.$"
# 530 "data/maps/MauvilleCity/scripts.pory"

# 531 "data/maps/MauvilleCity/scripts.pory"

# 532 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPokenavCall:
# 533 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 534 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Beep!\p"
# 535 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh, hello, {PLAYER}!\p"
# 536 "data/maps/MauvilleCity/scripts.pory"
	.string "I just wanted to tell you that\n"
# 537 "data/maps/MauvilleCity/scripts.pory"
	.string "my uncle bought me a POKéNAV!\p"
# 538 "data/maps/MauvilleCity/scripts.pory"
	.string "Now I can get in touch with you\n"
# 539 "data/maps/MauvilleCity/scripts.pory"
	.string "anytime, {PLAYER}!\p"
# 540 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 541 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Click!$"
# 542 "data/maps/MauvilleCity/scripts.pory"

# 543 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RegisteredWally:
# 544 "data/maps/MauvilleCity/scripts.pory"
	.string "Registered WALLY\n"
# 545 "data/maps/MauvilleCity/scripts.pory"
	.string "in the POKéNAV.$"
# 546 "data/maps/MauvilleCity/scripts.pory"

# 547 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ScottYouDidntHoldBack:
# 548 "data/maps/MauvilleCity/scripts.pory"
	.string "SCOTT: Hehe…\n"
# 549 "data/maps/MauvilleCity/scripts.pory"
	.string "I was watching that match!\p"
# 550 "data/maps/MauvilleCity/scripts.pory"
	.string "You're friends with that boy WALLY,\n"
# 551 "data/maps/MauvilleCity/scripts.pory"
	.string "aren't you?\p"
# 552 "data/maps/MauvilleCity/scripts.pory"
	.string "But you didn't hold anything back\n"
# 553 "data/maps/MauvilleCity/scripts.pory"
	.string "and beat him impressively.\p"
# 554 "data/maps/MauvilleCity/scripts.pory"
	.string "Yeah! That's what a real POKéMON\n"
# 555 "data/maps/MauvilleCity/scripts.pory"
	.string "battle is all about!\p"
# 556 "data/maps/MauvilleCity/scripts.pory"
	.string "I idolize TRAINERS like that!\p"
# 557 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 558 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll be cheering for you!$"
# 559 "data/maps/MauvilleCity/scripts.pory"

# 560 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonNeedFavorTakeKey:
# 561 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Oh, {PLAYER}{KUN}!\n"
# 562 "data/maps/MauvilleCity/scripts.pory"
	.string "You look like you have a lot of zip!\l"
# 563 "data/maps/MauvilleCity/scripts.pory"
	.string "That's a good thing, wahahahaha!\p"
# 564 "data/maps/MauvilleCity/scripts.pory"
	.string "Fine! I've decided!\n"
# 565 "data/maps/MauvilleCity/scripts.pory"
	.string "I need a favor, {PLAYER}{KUN}!\p"
# 566 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY has an underground\n"
# 567 "data/maps/MauvilleCity/scripts.pory"
	.string "sector called NEW MAUVILLE.\p"
# 568 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}{KUN}, I'd like you to go there and\n"
# 569 "data/maps/MauvilleCity/scripts.pory"
	.string "switch off the GENERATOR.\p"
# 570 "data/maps/MauvilleCity/scripts.pory"
	.string "The GENERATOR has been running a bit\n"
# 571 "data/maps/MauvilleCity/scripts.pory"
	.string "haywire. It's getting unsafe.\p"
# 572 "data/maps/MauvilleCity/scripts.pory"
	.string "Here, this is the KEY to get into\n"
# 573 "data/maps/MauvilleCity/scripts.pory"
	.string "NEW MAUVILLE.$"
# 574 "data/maps/MauvilleCity/scripts.pory"

# 575 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonWontBeChallenge:
# 576 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Don't you worry about it.\n"
# 577 "data/maps/MauvilleCity/scripts.pory"
	.string "It won't be a challenge to you.\p"
# 578 "data/maps/MauvilleCity/scripts.pory"
	.string "The entrance to NEW MAUVILLE is just\n"
# 579 "data/maps/MauvilleCity/scripts.pory"
	.string "a short SURF away from ROUTE 110.\p"
# 580 "data/maps/MauvilleCity/scripts.pory"
	.string "That's it, then, you have my trust!\n"
# 581 "data/maps/MauvilleCity/scripts.pory"
	.string "Wahahahaha!$"
# 582 "data/maps/MauvilleCity/scripts.pory"

# 583 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonThanksTakeTM:
# 584 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Wahahahaha!\p"
# 585 "data/maps/MauvilleCity/scripts.pory"
	.string "I knew it, {PLAYER}{KUN}! I knew I'd made\n"
# 586 "data/maps/MauvilleCity/scripts.pory"
	.string "the right choice asking you!\p"
# 587 "data/maps/MauvilleCity/scripts.pory"
	.string "This is my thanks--a TM containing\n"
# 588 "data/maps/MauvilleCity/scripts.pory"
	.string "THUNDERBOLT!\p"
# 589 "data/maps/MauvilleCity/scripts.pory"
	.string "Go on, you've earned it!$"
# 590 "data/maps/MauvilleCity/scripts.pory"

# 591 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonYoungTakeCharge:
# 592 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Wahahahaha!\p"
# 593 "data/maps/MauvilleCity/scripts.pory"
	.string "It pleases me to no end to see\n"
# 594 "data/maps/MauvilleCity/scripts.pory"
	.string "the young step up and take charge!$"
# 595 "data/maps/MauvilleCity/scripts.pory"

# 596 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_NurseHurtMonBackToHealth:
# 597 "data/maps/MauvilleCity/scripts.pory"
	.string "You know, it's cool to have POKéMON\n"
# 598 "data/maps/MauvilleCity/scripts.pory"
	.string "battles and stuff…\p"
# 599 "data/maps/MauvilleCity/scripts.pory"
	.string "But if your POKéMON gets hurt,\n"
# 600 "data/maps/MauvilleCity/scripts.pory"
	.string "you have to nurse it back to health.$"
# 601 "data/maps/MauvilleCity/scripts.pory"

# 602 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_AllSortsOfPeopleComeThrough:
# 603 "data/maps/MauvilleCity/scripts.pory"
	.string "The roads of this town stretch north\n"
# 604 "data/maps/MauvilleCity/scripts.pory"
	.string "and south, and east and west.\p"
# 605 "data/maps/MauvilleCity/scripts.pory"
	.string "Because of that, we get all sorts of\n"
# 606 "data/maps/MauvilleCity/scripts.pory"
	.string "people coming through.$"
# 607 "data/maps/MauvilleCity/scripts.pory"

# 608 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RydelVeryGenerous:
# 609 "data/maps/MauvilleCity/scripts.pory"
	.string "Have you been to RYDEL'S CYCLES yet?\p"
# 610 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL, the owner, is a very generous\n"
# 611 "data/maps/MauvilleCity/scripts.pory"
	.string "man.$"
# 612 "data/maps/MauvilleCity/scripts.pory"

# 613 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_PokemonCanJumpYouOnBike:
# 614 "data/maps/MauvilleCity/scripts.pory"
	.string "Even if you're riding a BIKE,\n"
# 615 "data/maps/MauvilleCity/scripts.pory"
	.string "wild POKéMON could jump you.$"
# 616 "data/maps/MauvilleCity/scripts.pory"

# 617 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_CitySign:
# 618 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY\n"
# 619 "data/maps/MauvilleCity/scripts.pory"
	.string "“The bright and shiny city of fun!”$"
# 620 "data/maps/MauvilleCity/scripts.pory"

# 621 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GymSign:
# 622 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\n"
# 623 "data/maps/MauvilleCity/scripts.pory"
	.string "LEADER: WATTSON\l"
# 624 "data/maps/MauvilleCity/scripts.pory"
	.string "“The cheerfully electrifying man!”$"
# 625 "data/maps/MauvilleCity/scripts.pory"

# 626 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BikeShopSign:
# 627 "data/maps/MauvilleCity/scripts.pory"
	.string "“Ride in gravel and shake up your\n"
# 628 "data/maps/MauvilleCity/scripts.pory"
	.string "soul!”\l"
# 629 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL'S CYCLES$"
# 630 "data/maps/MauvilleCity/scripts.pory"

# 631 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GameCornerSign:
# 632 "data/maps/MauvilleCity/scripts.pory"
	.string "“The play spot for all!”\n"
# 633 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE GAME CORNER$"
# 634 "data/maps/MauvilleCity/scripts.pory"

# 635 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ExplainTV:
# 636 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, do you check out TV at all?\p"
# 637 "data/maps/MauvilleCity/scripts.pory"
	.string "They've added a bunch of cool new\n"
# 638 "data/maps/MauvilleCity/scripts.pory"
	.string "shows recently.\p"
# 639 "data/maps/MauvilleCity/scripts.pory"
	.string "TV is so cool. I've seen my friends on\n"
# 640 "data/maps/MauvilleCity/scripts.pory"
	.string "TV just out of the blue.\p"
# 641 "data/maps/MauvilleCity/scripts.pory"
	.string "And, sometimes, they even put you on TV\n"
# 642 "data/maps/MauvilleCity/scripts.pory"
	.string "without telling you.\p"
# 643 "data/maps/MauvilleCity/scripts.pory"
	.string "I wish I would be on TV sometime.\p"
# 644 "data/maps/MauvilleCity/scripts.pory"
	.string "That's why I think you should check\n"
# 645 "data/maps/MauvilleCity/scripts.pory"
	.string "out TVs whenever you can.$"
# 646 "data/maps/MauvilleCity/scripts.pory"

# 647 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BeenCheckingOutTV:
# 648 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, have you been checking out TVs?$"
