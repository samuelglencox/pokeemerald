# 1 "data/maps/RustboroCity/scripts.pory"

# 2 "data/maps/RustboroCity/scripts.pory"
RustboroCity_MapScripts::
# 3 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_OnTransition
# 4 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_OnFrame
# 5 "data/maps/RustboroCity/scripts.pory"
	.byte 0
# 6 "data/maps/RustboroCity/scripts.pory"

# 7 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnTransition:
# 8 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 9 "data/maps/RustboroCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 10 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_HideMapNamePopup
# 11 "data/maps/RustboroCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 12 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_PositionScientistForExit
# 13 "data/maps/RustboroCity/scripts.pory"
	end
# 14 "data/maps/RustboroCity/scripts.pory"

# 15 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistForExit::
# 16 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_TEMP_0, 11, RustboroCity_EventScript_PositionScientistLeftExit
# 17 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_SCIENTIST, 12, 15
# 18 "data/maps/RustboroCity/scripts.pory"
	end
# 19 "data/maps/RustboroCity/scripts.pory"

# 20 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistLeftExit::
# 21 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_SCIENTIST, 11, 15
# 22 "data/maps/RustboroCity/scripts.pory"
	end
# 23 "data/maps/RustboroCity/scripts.pory"

# 24 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HideMapNamePopup::
# 25 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 26 "data/maps/RustboroCity/scripts.pory"
	return
# 27 "data/maps/RustboroCity/scripts.pory"

# 28 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnFrame:
# 29 "data/maps/RustboroCity/scripts.pory"
	map_script_2 VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_ScientistAddMatchCall
# 30 "data/maps/RustboroCity/scripts.pory"
	.2byte 0
# 31 "data/maps/RustboroCity/scripts.pory"

# 32 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ScientistAddMatchCall::
# 33 "data/maps/RustboroCity/scripts.pory"
	lockall
# 34 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 1
# 35 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_PLAYER, RustboroCity_Movement_PlayerWalkDown
# 36 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 37 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 38 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_SCIENTIST
# 39 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_SCIENTIST, RustboroCity_Movement_ScientistApproachPlayer
# 40 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 41 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_ExclamationMark
# 42 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_Delay48
# 43 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 44 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_SCIENTIST, RustboroCity_Movement_ScientistWalkInPlaceDown
# 45 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevelopedNewPokenavFeature, MSGBOX_DEFAULT
# 46 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 47 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 48 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_WalkInPlaceFasterLeft
# 49 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 50 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 51 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 52 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 53 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 54 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 55 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 56 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 57 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_WalkInPlaceFasterDown
# 58 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_AddedMatchCallPleaseCallMrStone, MSGBOX_DEFAULT
# 59 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 60 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 61 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 62 "data/maps/RustboroCity/scripts.pory"

# 63 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PleaseSelectPokenav::
# 64 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseSelectPokenav, MSGBOX_DEFAULT
# 65 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 66 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 67 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 68 "data/maps/RustboroCity/scripts.pory"

# 69 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MatchCallTutorial::
# 70 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 71 "data/maps/RustboroCity/scripts.pory"
	special ScriptMenu_CreateStartMenuForPokenavTutorial
# 72 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 73 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_PleaseSelectPokenav
# 74 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_PleaseSelectPokenav
# 75 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_PleaseSelectPokenav
# 76 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_PleaseSelectPokenav
# 77 "data/maps/RustboroCity/scripts.pory"
	case 5, RustboroCity_EventScript_PleaseSelectPokenav
# 78 "data/maps/RustboroCity/scripts.pory"
	case 6, RustboroCity_EventScript_PleaseSelectPokenav
# 79 "data/maps/RustboroCity/scripts.pory"
	case 7, RustboroCity_EventScript_PleaseSelectPokenav
# 80 "data/maps/RustboroCity/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_EventScript_PleaseSelectPokenav
# 81 "data/maps/RustboroCity/scripts.pory"
	special OpenPokenavForTutorial
# 82 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 83 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_IdBetterGetBackToWork, MSGBOX_DEFAULT
# 84 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 85 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_SCIENTIST, RustboroCity_Movement_ScientistLeave
# 86 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 87 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_SCIENTIST
# 88 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 89 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 90 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 91 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 92 "data/maps/RustboroCity/scripts.pory"
	end
# 93 "data/maps/RustboroCity/scripts.pory"

# 94 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkInPlaceDown:
# 95 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_down
# 96 "data/maps/RustboroCity/scripts.pory"
	step_end
# 97 "data/maps/RustboroCity/scripts.pory"

# 98 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_PlayerWalkDown:
# 99 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 100 "data/maps/RustboroCity/scripts.pory"
	step_end
# 101 "data/maps/RustboroCity/scripts.pory"

# 102 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistApproachPlayer:
# 103 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 104 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 105 "data/maps/RustboroCity/scripts.pory"
	step_end
# 106 "data/maps/RustboroCity/scripts.pory"

# 107 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 108 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkAroundPlayer:
# 109 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 110 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 111 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 112 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 113 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 114 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 115 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 116 "data/maps/RustboroCity/scripts.pory"
	step_end
# 117 "data/maps/RustboroCity/scripts.pory"

# 118 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistLeave:
# 119 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 120 "data/maps/RustboroCity/scripts.pory"
	step_end
# 121 "data/maps/RustboroCity/scripts.pory"

# 122 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatMan::
# 123 "data/maps/RustboroCity/scripts.pory"
	lock
# 124 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 125 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatManSawGrunt
# 126 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
# 127 "data/maps/RustboroCity/scripts.pory"
	release
# 128 "data/maps/RustboroCity/scripts.pory"
	end
# 129 "data/maps/RustboroCity/scripts.pory"

# 130 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatManSawGrunt::
# 131 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
# 132 "data/maps/RustboroCity/scripts.pory"
	release
# 133 "data/maps/RustboroCity/scripts.pory"
	end
# 134 "data/maps/RustboroCity/scripts.pory"

# 135 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee2::
# 136 "data/maps/RustboroCity/scripts.pory"
	lock
# 137 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 138 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
# 139 "data/maps/RustboroCity/scripts.pory"
	release
# 140 "data/maps/RustboroCity/scripts.pory"
	end
# 141 "data/maps/RustboroCity/scripts.pory"

# 142 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Woman::
# 143 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
# 144 "data/maps/RustboroCity/scripts.pory"
	end
# 145 "data/maps/RustboroCity/scripts.pory"

# 146 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1::
# 147 "data/maps/RustboroCity/scripts.pory"
	lock
# 148 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 149 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1HaveBadge
# 150 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
# 151 "data/maps/RustboroCity/scripts.pory"
	release
# 152 "data/maps/RustboroCity/scripts.pory"
	end
# 153 "data/maps/RustboroCity/scripts.pory"

# 154 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1HaveBadge::
# 155 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
# 156 "data/maps/RustboroCity/scripts.pory"
	release
# 157 "data/maps/RustboroCity/scripts.pory"
	end
# 158 "data/maps/RustboroCity/scripts.pory"

# 159 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2::
# 160 "data/maps/RustboroCity/scripts.pory"
	lock
# 161 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 162 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2BrineyLeftTunnel
# 163 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
# 164 "data/maps/RustboroCity/scripts.pory"
	release
# 165 "data/maps/RustboroCity/scripts.pory"
	end
# 166 "data/maps/RustboroCity/scripts.pory"

# 167 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2BrineyLeftTunnel::
# 168 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
# 169 "data/maps/RustboroCity/scripts.pory"
	release
# 170 "data/maps/RustboroCity/scripts.pory"
	end
# 171 "data/maps/RustboroCity/scripts.pory"

# 172 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Twin::
# 173 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
# 174 "data/maps/RustboroCity/scripts.pory"
	end
# 175 "data/maps/RustboroCity/scripts.pory"

# 176 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_NinjaBoy::
# 177 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
# 178 "data/maps/RustboroCity/scripts.pory"
	end
# 179 "data/maps/RustboroCity/scripts.pory"

# 180 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TunnelSign::
# 181 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
# 182 "data/maps/RustboroCity/scripts.pory"
	end
# 183 "data/maps/RustboroCity/scripts.pory"

# 184 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpSign::
# 185 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
# 186 "data/maps/RustboroCity/scripts.pory"
	end
# 187 "data/maps/RustboroCity/scripts.pory"

# 188 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_GymSign::
# 189 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
# 190 "data/maps/RustboroCity/scripts.pory"
	end
# 191 "data/maps/RustboroCity/scripts.pory"

# 192 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 193 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpBranchOfficeSign::
# 194 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpBranchOfficeSign, MSGBOX_SIGN
# 195 "data/maps/RustboroCity/scripts.pory"
	end
# 196 "data/maps/RustboroCity/scripts.pory"

# 197 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CitySign::
# 198 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
# 199 "data/maps/RustboroCity/scripts.pory"
	end
# 200 "data/maps/RustboroCity/scripts.pory"

# 201 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TrainersSchoolSign::
# 202 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
# 203 "data/maps/RustboroCity/scripts.pory"
	end
# 204 "data/maps/RustboroCity/scripts.pory"

# 205 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CuttersHouseSign::
# 206 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
# 207 "data/maps/RustboroCity/scripts.pory"
	end
# 208 "data/maps/RustboroCity/scripts.pory"

# 209 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleBoy::
# 210 "data/maps/RustboroCity/scripts.pory"
	lock
# 211 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 212 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
# 213 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 214 "data/maps/RustboroCity/scripts.pory"
	release
# 215 "data/maps/RustboroCity/scripts.pory"
	end
# 216 "data/maps/RustboroCity/scripts.pory"

# 217 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleGirl::
# 218 "data/maps/RustboroCity/scripts.pory"
	lock
# 219 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 220 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
# 221 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 222 "data/maps/RustboroCity/scripts.pory"
	release
# 223 "data/maps/RustboroCity/scripts.pory"
	end
# 224 "data/maps/RustboroCity/scripts.pory"

# 225 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man2::
# 226 "data/maps/RustboroCity/scripts.pory"
	lock
# 227 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 228 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
# 229 "data/maps/RustboroCity/scripts.pory"
	release
# 230 "data/maps/RustboroCity/scripts.pory"
	end
# 231 "data/maps/RustboroCity/scripts.pory"

# 232 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger0::
# 233 "data/maps/RustboroCity/scripts.pory"
	lockall
# 234 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 235 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 236 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 0
# 237 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 238 "data/maps/RustboroCity/scripts.pory"
	end
# 239 "data/maps/RustboroCity/scripts.pory"

# 240 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger1::
# 241 "data/maps/RustboroCity/scripts.pory"
	lockall
# 242 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 243 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 244 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 1
# 245 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 246 "data/maps/RustboroCity/scripts.pory"
	end
# 247 "data/maps/RustboroCity/scripts.pory"

# 248 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger2::
# 249 "data/maps/RustboroCity/scripts.pory"
	lockall
# 250 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 251 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 252 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 2
# 253 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 254 "data/maps/RustboroCity/scripts.pory"
	end
# 255 "data/maps/RustboroCity/scripts.pory"

# 256 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger3::
# 257 "data/maps/RustboroCity/scripts.pory"
	lockall
# 258 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 259 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 260 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 3
# 261 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 262 "data/maps/RustboroCity/scripts.pory"
	end
# 263 "data/maps/RustboroCity/scripts.pory"

# 264 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger4::
# 265 "data/maps/RustboroCity/scripts.pory"
	lockall
# 266 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 267 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 268 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 4
# 269 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 270 "data/maps/RustboroCity/scripts.pory"
	end
# 271 "data/maps/RustboroCity/scripts.pory"

# 272 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene::
# 273 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
# 274 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 275 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 276 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_GRUNT
# 277 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 278 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_GRUNT, RustboroCity_Movement_GruntEscape
# 279 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_GRUNT
# 280 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt1
# 281 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WaitDontTakeMyGoods, MSGBOX_DEFAULT
# 282 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 283 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt2
# 284 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 285 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 286 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 30, 10
# 287 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 288 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEVON_GOODS_STOLEN
# 289 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 2
# 290 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
# 291 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE116_STATE, 1
# 292 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 293 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 294 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 295 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 296 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 297 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 298 "data/maps/RustboroCity/scripts.pory"
	end
# 299 "data/maps/RustboroCity/scripts.pory"

# 300 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 301 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ShadyCharacterTookOff::
# 302 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 303 "data/maps/RustboroCity/scripts.pory"
	return
# 304 "data/maps/RustboroCity/scripts.pory"

# 305 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 306 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_YouGotItThankYou::
# 307 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 308 "data/maps/RustboroCity/scripts.pory"
	return
# 309 "data/maps/RustboroCity/scripts.pory"

# 310 "data/maps/RustboroCity/scripts.pory"
@ Unknown, unused employee movements. Based on the differences in movement theyre for approaching an object (probably the player) in different positions
# 311 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachUp::
# 312 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachUp
# 313 "data/maps/RustboroCity/scripts.pory"
	return
# 314 "data/maps/RustboroCity/scripts.pory"

# 315 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 316 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachLeft::
# 317 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachLeft
# 318 "data/maps/RustboroCity/scripts.pory"
	return
# 319 "data/maps/RustboroCity/scripts.pory"

# 320 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 321 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachRight::
# 322 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachRight
# 323 "data/maps/RustboroCity/scripts.pory"
	return
# 324 "data/maps/RustboroCity/scripts.pory"

# 325 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 326 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachDown::
# 327 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachDown
# 328 "data/maps/RustboroCity/scripts.pory"
	return
# 329 "data/maps/RustboroCity/scripts.pory"

# 330 "data/maps/RustboroCity/scripts.pory"
@ Unused, similar movement to the above scripts
# 331 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerFar::
# 332 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerFar
# 333 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 334 "data/maps/RustboroCity/scripts.pory"
	return
# 335 "data/maps/RustboroCity/scripts.pory"

# 336 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 337 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscapeExtended:
# 338 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 339 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 340 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 341 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 342 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 343 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 344 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 345 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 346 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 347 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 348 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 349 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 350 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 351 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 352 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 353 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 354 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 355 "data/maps/RustboroCity/scripts.pory"
	step_end
# 356 "data/maps/RustboroCity/scripts.pory"

# 357 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscape:
# 358 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 359 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 360 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 361 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 362 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 363 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 364 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 365 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 366 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 367 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 368 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 369 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 370 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 371 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 372 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 373 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 374 "data/maps/RustboroCity/scripts.pory"
	step_end
# 375 "data/maps/RustboroCity/scripts.pory"

# 376 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt1:
# 377 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 378 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 379 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 380 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 381 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 382 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 383 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 384 "data/maps/RustboroCity/scripts.pory"
	step_end
# 385 "data/maps/RustboroCity/scripts.pory"

# 386 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt2:
# 387 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 388 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 389 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 390 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 391 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 392 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 393 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 394 "data/maps/RustboroCity/scripts.pory"
	step_end
# 395 "data/maps/RustboroCity/scripts.pory"

# 396 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 397 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachUp:
# 398 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 399 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 400 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 401 "data/maps/RustboroCity/scripts.pory"
	step_end
# 402 "data/maps/RustboroCity/scripts.pory"

# 403 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 404 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachLeft:
# 405 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 406 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 407 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 408 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 409 "data/maps/RustboroCity/scripts.pory"
	step_end
# 410 "data/maps/RustboroCity/scripts.pory"

# 411 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 412 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachRight:
# 413 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 414 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 415 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 416 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 417 "data/maps/RustboroCity/scripts.pory"
	step_end
# 418 "data/maps/RustboroCity/scripts.pory"

# 419 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 420 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachDown:
# 421 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 422 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 423 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 424 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 425 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 426 "data/maps/RustboroCity/scripts.pory"
	step_end
# 427 "data/maps/RustboroCity/scripts.pory"

# 428 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 429 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerFar:
# 430 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 431 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 432 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 433 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 434 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 435 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 436 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_down
# 437 "data/maps/RustboroCity/scripts.pory"
	step_end
# 438 "data/maps/RustboroCity/scripts.pory"

# 439 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee1::
# 440 "data/maps/RustboroCity/scripts.pory"
	lock
# 441 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 442 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_ReturnGoodsSpokeToEmployee
# 443 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 444 "data/maps/RustboroCity/scripts.pory"
	release
# 445 "data/maps/RustboroCity/scripts.pory"
	end
# 446 "data/maps/RustboroCity/scripts.pory"

# 447 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsSpokeToEmployee::
# 448 "data/maps/RustboroCity/scripts.pory"
	waitse
# 449 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 450 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 451 "data/maps/RustboroCity/scripts.pory"
	end
# 452 "data/maps/RustboroCity/scripts.pory"

# 453 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger0::
# 454 "data/maps/RustboroCity/scripts.pory"
	lockall
# 455 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 456 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 457 "data/maps/RustboroCity/scripts.pory"
	end
# 458 "data/maps/RustboroCity/scripts.pory"

# 459 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger1::
# 460 "data/maps/RustboroCity/scripts.pory"
	lockall
# 461 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 462 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 463 "data/maps/RustboroCity/scripts.pory"
	end
# 464 "data/maps/RustboroCity/scripts.pory"

# 465 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger2::
# 466 "data/maps/RustboroCity/scripts.pory"
	lockall
# 467 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 468 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 469 "data/maps/RustboroCity/scripts.pory"
	end
# 470 "data/maps/RustboroCity/scripts.pory"

# 471 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger3::
# 472 "data/maps/RustboroCity/scripts.pory"
	lockall
# 473 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 474 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 475 "data/maps/RustboroCity/scripts.pory"
	end
# 476 "data/maps/RustboroCity/scripts.pory"

# 477 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods::
# 478 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp1
# 479 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft1
# 480 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown1
# 481 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown1
# 482 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 483 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 3
# 484 "data/maps/RustboroCity/scripts.pory"
	copyobjectxytoperm LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 485 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
# 486 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 487 "data/maps/RustboroCity/scripts.pory"
	end
# 488 "data/maps/RustboroCity/scripts.pory"

# 489 "data/maps/RustboroCity/scripts.pory"
@ The below movement scripts are either partially or fully duplicated by the movement scripts when the player returns the goods
# 490 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp1::
# 491 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 492 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 493 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 494 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 495 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 496 "data/maps/RustboroCity/scripts.pory"
	return
# 497 "data/maps/RustboroCity/scripts.pory"

# 498 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft1::
# 499 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 500 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 501 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 502 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 503 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_FaceRight
# 504 "data/maps/RustboroCity/scripts.pory"
	return
# 505 "data/maps/RustboroCity/scripts.pory"

# 506 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown1::
# 507 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 508 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 509 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 510 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 511 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 512 "data/maps/RustboroCity/scripts.pory"
	return
# 513 "data/maps/RustboroCity/scripts.pory"

# 514 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown1::
# 515 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 516 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 517 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 518 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 519 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 520 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 521 "data/maps/RustboroCity/scripts.pory"
	return
# 522 "data/maps/RustboroCity/scripts.pory"

# 523 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerDown:
# 524 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 525 "data/maps/RustboroCity/scripts.pory"
	step_end
# 526 "data/maps/RustboroCity/scripts.pory"

# 527 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger0::
# 528 "data/maps/RustboroCity/scripts.pory"
	lockall
# 529 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 530 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 531 "data/maps/RustboroCity/scripts.pory"
	end
# 532 "data/maps/RustboroCity/scripts.pory"

# 533 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger1::
# 534 "data/maps/RustboroCity/scripts.pory"
	lockall
# 535 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 536 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 537 "data/maps/RustboroCity/scripts.pory"
	end
# 538 "data/maps/RustboroCity/scripts.pory"

# 539 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger2::
# 540 "data/maps/RustboroCity/scripts.pory"
	lockall
# 541 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 542 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 543 "data/maps/RustboroCity/scripts.pory"
	end
# 544 "data/maps/RustboroCity/scripts.pory"

# 545 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger3::
# 546 "data/maps/RustboroCity/scripts.pory"
	lockall
# 547 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 548 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 549 "data/maps/RustboroCity/scripts.pory"
	end
# 550 "data/maps/RustboroCity/scripts.pory"

# 551 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods::
# 552 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp2
# 553 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft2
# 554 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown2
# 555 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown2
# 556 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, RustboroCity_EventScript_EmployeeFacePlayerRight
# 557 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 558 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 559 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, RustboroCity_EventScript_BagFull
# 560 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 561 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 562 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 563 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 564 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 5
# 565 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 566 "data/maps/RustboroCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 2, 2
# 567 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 568 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 569 "data/maps/RustboroCity/scripts.pory"
	end
# 570 "data/maps/RustboroCity/scripts.pory"

# 571 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BagFull::
# 572 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 573 "data/maps/RustboroCity/scripts.pory"
	return
# 574 "data/maps/RustboroCity/scripts.pory"

# 575 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp2::
# 576 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 577 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 578 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 579 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 580 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 581 "data/maps/RustboroCity/scripts.pory"
	return
# 582 "data/maps/RustboroCity/scripts.pory"

# 583 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft2::
# 584 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterRight
# 585 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 586 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 587 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 588 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 589 "data/maps/RustboroCity/scripts.pory"
	return
# 590 "data/maps/RustboroCity/scripts.pory"

# 591 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown2::
# 592 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 593 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 594 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 595 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 596 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 597 "data/maps/RustboroCity/scripts.pory"
	return
# 598 "data/maps/RustboroCity/scripts.pory"

# 599 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown2::
# 600 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 601 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 602 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 603 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 604 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 605 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 606 "data/maps/RustboroCity/scripts.pory"
	return
# 607 "data/maps/RustboroCity/scripts.pory"

# 608 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerRight::
# 609 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 610 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 611 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 612 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 613 "data/maps/RustboroCity/scripts.pory"
	return
# 614 "data/maps/RustboroCity/scripts.pory"

# 615 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Rival::
# 616 "data/maps/RustboroCity/scripts.pory"
	lockall
# 617 "data/maps/RustboroCity/scripts.pory"
	call_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_PlayRivalMusic
# 618 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_RIVAL, Common_Movement_FacePlayer
# 619 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 620 "data/maps/RustboroCity/scripts.pory"

# 621 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayRivalMusic::
# 622 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 623 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_PlayMayMusic
# 624 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_PlayBrendanMusic
# 625 "data/maps/RustboroCity/scripts.pory"
	return
# 626 "data/maps/RustboroCity/scripts.pory"

# 627 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayMayMusic::
# 628 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 629 "data/maps/RustboroCity/scripts.pory"
	return
# 630 "data/maps/RustboroCity/scripts.pory"

# 631 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayBrendanMusic::
# 632 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 633 "data/maps/RustboroCity/scripts.pory"
	return
# 634 "data/maps/RustboroCity/scripts.pory"

# 635 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger0::
# 636 "data/maps/RustboroCity/scripts.pory"
	lockall
# 637 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 638 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 639 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 640 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 641 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 642 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer0
# 643 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 644 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 645 "data/maps/RustboroCity/scripts.pory"

# 646 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger1::
# 647 "data/maps/RustboroCity/scripts.pory"
	lockall
# 648 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 649 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 650 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 651 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 652 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 653 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer1
# 654 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 655 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 656 "data/maps/RustboroCity/scripts.pory"

# 657 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger2::
# 658 "data/maps/RustboroCity/scripts.pory"
	lockall
# 659 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 660 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 661 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 662 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 663 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 664 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer2
# 665 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 666 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 667 "data/maps/RustboroCity/scripts.pory"

# 668 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger3::
# 669 "data/maps/RustboroCity/scripts.pory"
	lockall
# 670 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 671 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 672 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 673 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 674 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 675 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer3
# 676 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 677 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 678 "data/maps/RustboroCity/scripts.pory"

# 679 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger4::
# 680 "data/maps/RustboroCity/scripts.pory"
	lockall
# 681 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 682 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 683 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 684 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 685 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 686 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer4
# 687 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 688 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 689 "data/maps/RustboroCity/scripts.pory"

# 690 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger5::
# 691 "data/maps/RustboroCity/scripts.pory"
	lockall
# 692 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 693 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 694 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 695 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 696 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 697 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer5
# 698 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 699 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 700 "data/maps/RustboroCity/scripts.pory"

# 701 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger6::
# 702 "data/maps/RustboroCity/scripts.pory"
	lockall
# 703 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 704 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 705 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 706 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 707 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 708 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer6
# 709 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 710 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 711 "data/maps/RustboroCity/scripts.pory"

# 712 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger7::
# 713 "data/maps/RustboroCity/scripts.pory"
	lockall
# 714 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 715 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 716 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 717 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 718 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 719 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer7
# 720 "data/maps/RustboroCity/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 721 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 722 "data/maps/RustboroCity/scripts.pory"

# 723 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalEncounter::
# 724 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 725 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_MayEncounter
# 726 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_BrendanEncounter
# 727 "data/maps/RustboroCity/scripts.pory"
	end
# 728 "data/maps/RustboroCity/scripts.pory"

# 729 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayEncounter::
# 730 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_MayBrineyHint
# 731 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_MayAskToBattle
# 732 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 733 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayHiLetsRegister, MSGBOX_DEFAULT
# 734 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 735 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 736 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 737 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredMay, MSGBOX_DEFAULT
# 738 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 739 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 740 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 741 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 742 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 743 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 744 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 0
# 745 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayPassedBrineyWantToBattle, MSGBOX_YESNO
# 746 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 747 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 748 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 749 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 750 "data/maps/RustboroCity/scripts.pory"
	end
# 751 "data/maps/RustboroCity/scripts.pory"

# 752 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayAskToBattle::
# 753 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 1
# 754 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayWantToBattle, MSGBOX_YESNO
# 755 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 756 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 757 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 758 "data/maps/RustboroCity/scripts.pory"
	end
# 759 "data/maps/RustboroCity/scripts.pory"

# 760 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMay::
# 761 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayImNotGoingToLose, MSGBOX_DEFAULT
# 762 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 763 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleMayTreecko
# 764 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleMayTorchic
# 765 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleMayMudkip
# 766 "data/maps/RustboroCity/scripts.pory"
	end
# 767 "data/maps/RustboroCity/scripts.pory"

# 768 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayBrineyHint::
# 769 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayMrBrineyHint, MSGBOX_DEFAULT
# 770 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 771 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 772 "data/maps/RustboroCity/scripts.pory"
	end
# 773 "data/maps/RustboroCity/scripts.pory"

# 774 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RestoreBgm::
# 775 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 776 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 777 "data/maps/RustboroCity/scripts.pory"
	return
# 778 "data/maps/RustboroCity/scripts.pory"

# 779 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTreecko::
# 780 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, RustboroCity_Text_MayDefeat
# 781 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 782 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 783 "data/maps/RustboroCity/scripts.pory"
	end
# 784 "data/maps/RustboroCity/scripts.pory"

# 785 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTorchic::
# 786 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, RustboroCity_Text_MayDefeat
# 787 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 788 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 789 "data/maps/RustboroCity/scripts.pory"
	end
# 790 "data/maps/RustboroCity/scripts.pory"

# 791 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayMudkip::
# 792 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, RustboroCity_Text_MayDefeat
# 793 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 794 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 795 "data/maps/RustboroCity/scripts.pory"
	end
# 796 "data/maps/RustboroCity/scripts.pory"

# 797 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanEncounter::
# 798 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanBrineyHint
# 799 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanAskToBattle
# 800 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 801 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanHiLetsRegister, MSGBOX_DEFAULT
# 802 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 803 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 804 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 805 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 806 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 807 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 808 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 809 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 810 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 811 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 812 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanPassedBrineyWantToBattle, MSGBOX_YESNO
# 813 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 814 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 815 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 816 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 817 "data/maps/RustboroCity/scripts.pory"
	end
# 818 "data/maps/RustboroCity/scripts.pory"

# 819 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanAskToBattle::
# 820 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanWantToBattle, MSGBOX_YESNO
# 821 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 822 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 823 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 824 "data/maps/RustboroCity/scripts.pory"
	end
# 825 "data/maps/RustboroCity/scripts.pory"

# 826 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendan::
# 827 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanIWontGoEasy, MSGBOX_DEFAULT
# 828 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 829 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleBrendanTreecko
# 830 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleBrendanTorchic
# 831 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleBrendanMudkip
# 832 "data/maps/RustboroCity/scripts.pory"
	end
# 833 "data/maps/RustboroCity/scripts.pory"

# 834 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanBrineyHint::
# 835 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanMrBrineyHint, MSGBOX_DEFAULT
# 836 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 837 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 838 "data/maps/RustboroCity/scripts.pory"
	end
# 839 "data/maps/RustboroCity/scripts.pory"

# 840 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTreecko::
# 841 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, RustboroCity_Text_BrendanDefeat
# 842 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 843 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 844 "data/maps/RustboroCity/scripts.pory"
	end
# 845 "data/maps/RustboroCity/scripts.pory"

# 846 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTorchic::
# 847 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, RustboroCity_Text_BrendanDefeat
# 848 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 849 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 850 "data/maps/RustboroCity/scripts.pory"
	end
# 851 "data/maps/RustboroCity/scripts.pory"

# 852 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanMudkip::
# 853 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, RustboroCity_Text_BrendanDefeat
# 854 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 855 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 856 "data/maps/RustboroCity/scripts.pory"
	end
# 857 "data/maps/RustboroCity/scripts.pory"

# 858 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer0:
# 859 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 860 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 861 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 862 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 863 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 864 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 865 "data/maps/RustboroCity/scripts.pory"
	step_end
# 866 "data/maps/RustboroCity/scripts.pory"

# 867 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer1:
# 868 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 869 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 870 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 871 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 872 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 873 "data/maps/RustboroCity/scripts.pory"
	step_end
# 874 "data/maps/RustboroCity/scripts.pory"

# 875 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer2:
# 876 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 877 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 878 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 879 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 880 "data/maps/RustboroCity/scripts.pory"
	step_end
# 881 "data/maps/RustboroCity/scripts.pory"

# 882 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer3:
# 883 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 884 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 885 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 886 "data/maps/RustboroCity/scripts.pory"
	step_end
# 887 "data/maps/RustboroCity/scripts.pory"

# 888 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer4:
# 889 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 890 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 891 "data/maps/RustboroCity/scripts.pory"
	step_end
# 892 "data/maps/RustboroCity/scripts.pory"

# 893 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer5:
# 894 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 895 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 896 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 897 "data/maps/RustboroCity/scripts.pory"
	step_end
# 898 "data/maps/RustboroCity/scripts.pory"

# 899 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer6:
# 900 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 901 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 902 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 903 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 904 "data/maps/RustboroCity/scripts.pory"
	step_end
# 905 "data/maps/RustboroCity/scripts.pory"

# 906 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer7:
# 907 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 908 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 909 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 910 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 911 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 912 "data/maps/RustboroCity/scripts.pory"
	step_end
# 913 "data/maps/RustboroCity/scripts.pory"

# 914 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy1::
# 915 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
# 916 "data/maps/RustboroCity/scripts.pory"
	end
# 917 "data/maps/RustboroCity/scripts.pory"

# 918 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WeShortenItToDevon:
# 919 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON CORPORATION…\n"
# 920 "data/maps/RustboroCity/scripts.pory"
	.string "We all just shorten it to DEVON.\p"
# 921 "data/maps/RustboroCity/scripts.pory"
	.string "That company makes all sorts of\n"
# 922 "data/maps/RustboroCity/scripts.pory"
	.string "convenient products.$"
# 923 "data/maps/RustboroCity/scripts.pory"

# 924 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_SneakyLookingManWentAroundCorner:
# 925 "data/maps/RustboroCity/scripts.pory"
	.string "Hm? A sneaky-looking man?\p"
# 926 "data/maps/RustboroCity/scripts.pory"
	.string "Come to think of it, yes, a shady-\n"
# 927 "data/maps/RustboroCity/scripts.pory"
	.string "looking guy went around the corner.$"
# 928 "data/maps/RustboroCity/scripts.pory"

# 929 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HaveYouChallengedGym:
# 930 "data/maps/RustboroCity/scripts.pory"
	.string "Have you taken the POKéMON GYM\n"
# 931 "data/maps/RustboroCity/scripts.pory"
	.string "challenge?\p"
# 932 "data/maps/RustboroCity/scripts.pory"
	.string "When you get that shiny GYM BADGE\n"
# 933 "data/maps/RustboroCity/scripts.pory"
	.string "in hand, I guess TRAINERS begin to\l"
# 934 "data/maps/RustboroCity/scripts.pory"
	.string "realize what is required of them.$"
# 935 "data/maps/RustboroCity/scripts.pory"

# 936 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HeyThatsRustborosGymBadge:
# 937 "data/maps/RustboroCity/scripts.pory"
	.string "Hey, that's RUSTBORO's GYM BADGE!\p"
# 938 "data/maps/RustboroCity/scripts.pory"
	.string "Out of all the POKéMON GYM BADGES,\n"
# 939 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO's is the coolest, I'd say.$"
# 940 "data/maps/RustboroCity/scripts.pory"

# 941 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureNewAroundHere:
# 942 "data/maps/RustboroCity/scripts.pory"
	.string "Oh? Who might you be?\n"
# 943 "data/maps/RustboroCity/scripts.pory"
	.string "You're a new face around these parts.\p"
# 944 "data/maps/RustboroCity/scripts.pory"
	.string "Have you just transferred into the\n"
# 945 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL?$"
# 946 "data/maps/RustboroCity/scripts.pory"

# 947 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymLeaderIsntEasyWithFire:
# 948 "data/maps/RustboroCity/scripts.pory"
	.string "I challenged the GYM LEADER, but…\p"
# 949 "data/maps/RustboroCity/scripts.pory"
	.string "It's not going to be easy winning with\n"
# 950 "data/maps/RustboroCity/scripts.pory"
	.string "my FIRE-type POKéMON…\p"
# 951 "data/maps/RustboroCity/scripts.pory"
	.string "FIRE-type POKéMON don't match up\n"
# 952 "data/maps/RustboroCity/scripts.pory"
	.string "well against ROCK-type POKéMON…$"
# 953 "data/maps/RustboroCity/scripts.pory"

# 954 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyWalksInTheTunnel:
# 955 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 956 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 957 "data/maps/RustboroCity/scripts.pory"
	.string "He goes for walks in the tunnel every\n"
# 958 "data/maps/RustboroCity/scripts.pory"
	.string "so often.$"
# 959 "data/maps/RustboroCity/scripts.pory"

# 960 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyLovesPeeko:
# 961 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 962 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 963 "data/maps/RustboroCity/scripts.pory"
	.string "He said he was going shopping in\n"
# 964 "data/maps/RustboroCity/scripts.pory"
	.string "SLATEPORT for his pet, PEEKO.\p"
# 965 "data/maps/RustboroCity/scripts.pory"
	.string "That old sea dog, he must really love\n"
# 966 "data/maps/RustboroCity/scripts.pory"
	.string "that PEEKO.$"
# 967 "data/maps/RustboroCity/scripts.pory"

# 968 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WowYouHavePokemon:
# 969 "data/maps/RustboroCity/scripts.pory"
	.string "Wow, you have POKéMON with you, too.\p"
# 970 "data/maps/RustboroCity/scripts.pory"
	.string "When I get bigger, I'm going to go\n"
# 971 "data/maps/RustboroCity/scripts.pory"
	.string "places with POKéMON, too.$"
# 972 "data/maps/RustboroCity/scripts.pory"

# 973 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CatchRarePokemonIfIGoToSchool:
# 974 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL!\p"
# 975 "data/maps/RustboroCity/scripts.pory"
	.string "If I go to this school, will I be able\n"
# 976 "data/maps/RustboroCity/scripts.pory"
	.string "to catch rare POKéMON easily?$"
# 977 "data/maps/RustboroCity/scripts.pory"

# 978 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonCanChangeLookFromExp:
# 979 "data/maps/RustboroCity/scripts.pory"
	.string "If a POKéMON gains experience in\n"
# 980 "data/maps/RustboroCity/scripts.pory"
	.string "battles, it can sometimes change in\l"
# 981 "data/maps/RustboroCity/scripts.pory"
	.string "the way it looks.$"
# 982 "data/maps/RustboroCity/scripts.pory"

# 983 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonChangeShape:
# 984 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON changes shape?\n"
# 985 "data/maps/RustboroCity/scripts.pory"
	.string "If one did that, I would be shocked!$"
# 986 "data/maps/RustboroCity/scripts.pory"

# 987 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TradePokemonGrowFast:
# 988 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON you get in a trade from\n"
# 989 "data/maps/RustboroCity/scripts.pory"
	.string "someone grows fast.\p"
# 990 "data/maps/RustboroCity/scripts.pory"
	.string "But if you don't have certain GYM\n"
# 991 "data/maps/RustboroCity/scripts.pory"
	.string "BADGES, it may not obey you…$"
# 992 "data/maps/RustboroCity/scripts.pory"

# 993 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_OutOfTheWay:
# 994 "data/maps/RustboroCity/scripts.pory"
	.string "Get out!\n"
# 995 "data/maps/RustboroCity/scripts.pory"
	.string "Out of the way!$"
# 996 "data/maps/RustboroCity/scripts.pory"

# 997 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WaitDontTakeMyGoods:
# 998 "data/maps/RustboroCity/scripts.pory"
	.string "Wait! Pleeeaaase!\p"
# 999 "data/maps/RustboroCity/scripts.pory"
	.string "Don't take my GOODS!$"
# 1000 "data/maps/RustboroCity/scripts.pory"

# 1001 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HelpMeIWasRobbed:
# 1002 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, it's you!\p"
# 1003 "data/maps/RustboroCity/scripts.pory"
	.string "You're that fantastic TRAINER who\n"
# 1004 "data/maps/RustboroCity/scripts.pory"
	.string "helped me in PETALBURG WOODS!\p"
# 1005 "data/maps/RustboroCity/scripts.pory"
	.string "Help me! I was robbed by TEAM AQUA!\n"
# 1006 "data/maps/RustboroCity/scripts.pory"
	.string "I have to get the DEVON GOODS back!\p"
# 1007 "data/maps/RustboroCity/scripts.pory"
	.string "If I don't…\n"
# 1008 "data/maps/RustboroCity/scripts.pory"
	.string "I'm going to be in serious trouble.$"
# 1009 "data/maps/RustboroCity/scripts.pory"

# 1010 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel:
# 1011 "data/maps/RustboroCity/scripts.pory"
	.string "That shady character, I think he took\n"
# 1012 "data/maps/RustboroCity/scripts.pory"
	.string "off towards the tunnel over there.$"
# 1013 "data/maps/RustboroCity/scripts.pory"

# 1014 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouGotItThankYou:
# 1015 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! How did it go?\n"
# 1016 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON GOODS?\p"
# 1017 "data/maps/RustboroCity/scripts.pory"
	.string "You did!\n"
# 1018 "data/maps/RustboroCity/scripts.pory"
	.string "You got them back!\p"
# 1019 "data/maps/RustboroCity/scripts.pory"
	.string "You really are a great TRAINER!\p"
# 1020 "data/maps/RustboroCity/scripts.pory"
	.string "I know! As my thanks, I'll give you\n"
# 1021 "data/maps/RustboroCity/scripts.pory"
	.string "another GREAT BALL!$"
# 1022 "data/maps/RustboroCity/scripts.pory"

# 1023 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureLoadedWithItems:
# 1024 "data/maps/RustboroCity/scripts.pory"
	.string "You're loaded with items.\n"
# 1025 "data/maps/RustboroCity/scripts.pory"
	.string "I can't give you this GREAT BALL.$"
# 1026 "data/maps/RustboroCity/scripts.pory"

# 1027 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseComeWithMe:
# 1028 "data/maps/RustboroCity/scripts.pory"
	.string "Excuse me, please!\n"
# 1029 "data/maps/RustboroCity/scripts.pory"
	.string "Please come with me!$"
# 1030 "data/maps/RustboroCity/scripts.pory"

# 1031 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayHiLetsRegister:
# 1032 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
# 1033 "data/maps/RustboroCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 1034 "data/maps/RustboroCity/scripts.pory"
	.string "on your POKéNAV!\p"
# 1035 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1036 "data/maps/RustboroCity/scripts.pory"
	.string "contact one another anytime!\p"
# 1037 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1038 "data/maps/RustboroCity/scripts.pory"

# 1039 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredMay:
# 1040 "data/maps/RustboroCity/scripts.pory"
	.string "Registered MAY\n"
# 1041 "data/maps/RustboroCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1042 "data/maps/RustboroCity/scripts.pory"

# 1043 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayPassedBrineyWantToBattle:
# 1044 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, I passed\n"
# 1045 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY in PETALBURG WOODS.\p"
# 1046 "data/maps/RustboroCity/scripts.pory"
	.string "I guess he's on his way home to his\n"
# 1047 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1048 "data/maps/RustboroCity/scripts.pory"
	.string "How's your POKéDEX coming along,\n"
# 1049 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}? Mine's looking pretty decent!\p"
# 1050 "data/maps/RustboroCity/scripts.pory"
	.string "So…\n"
# 1051 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle?$"
# 1052 "data/maps/RustboroCity/scripts.pory"

# 1053 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayOhHaventRaisedPokemonEnough:
# 1054 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, what's the matter?\p"
# 1055 "data/maps/RustboroCity/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 1056 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON very much?\p"
# 1057 "data/maps/RustboroCity/scripts.pory"
	.string "That's not very good for a TRAINER!$"
# 1058 "data/maps/RustboroCity/scripts.pory"

# 1059 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayWantToBattle:
# 1060 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: So, what do you think?\n"
# 1061 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle here?$"
# 1062 "data/maps/RustboroCity/scripts.pory"

# 1063 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayImNotGoingToLose:
# 1064 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: You just became a TRAINER,\n"
# 1065 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 1066 "data/maps/RustboroCity/scripts.pory"

# 1067 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayDefeat:
# 1068 "data/maps/RustboroCity/scripts.pory"
	.string "Yikes!\n"
# 1069 "data/maps/RustboroCity/scripts.pory"
	.string "You're better than I expected!$"
# 1070 "data/maps/RustboroCity/scripts.pory"

# 1071 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayMrBrineyHint:
# 1072 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, MR. BRINEY, who\n"
# 1073 "data/maps/RustboroCity/scripts.pory"
	.string "I just passed…\p"
# 1074 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}, you just moved here so you\n"
# 1075 "data/maps/RustboroCity/scripts.pory"
	.string "might not know this, but MR. BRINEY\l"
# 1076 "data/maps/RustboroCity/scripts.pory"
	.string "was once a revered seafarer.$"
# 1077 "data/maps/RustboroCity/scripts.pory"

# 1078 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanHiLetsRegister:
# 1079 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
# 1080 "data/maps/RustboroCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 1081 "data/maps/RustboroCity/scripts.pory"
	.string "on your POKéNAV! Cool!\p"
# 1082 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1083 "data/maps/RustboroCity/scripts.pory"
	.string "get in touch anytime!\p"
# 1084 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1085 "data/maps/RustboroCity/scripts.pory"

# 1086 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredBrendan:
# 1087 "data/maps/RustboroCity/scripts.pory"
	.string "Registered BRENDAN\n"
# 1088 "data/maps/RustboroCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1089 "data/maps/RustboroCity/scripts.pory"

# 1090 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanPassedBrineyWantToBattle:
# 1091 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, {PLAYER}, I walked\n"
# 1092 "data/maps/RustboroCity/scripts.pory"
	.string "by MR. BRINEY in PETALBURG WOODS.\p"
# 1093 "data/maps/RustboroCity/scripts.pory"
	.string "I bet he was on his way home to his\n"
# 1094 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1095 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, how's your POKéDEX?\n"
# 1096 "data/maps/RustboroCity/scripts.pory"
	.string "Have you filled in any pages yet?\p"
# 1097 "data/maps/RustboroCity/scripts.pory"
	.string "Mine rules.\p"
# 1098 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle to test how\n"
# 1099 "data/maps/RustboroCity/scripts.pory"
	.string "far you've progressed?$"
# 1100 "data/maps/RustboroCity/scripts.pory"

# 1101 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanNoConfidenceInPokemon:
# 1102 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
# 1103 "data/maps/RustboroCity/scripts.pory"
	.string "any confidence in your POKéMON?$"
# 1104 "data/maps/RustboroCity/scripts.pory"

# 1105 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanWantToBattle:
# 1106 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's up?\n"
# 1107 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle with me?$"
# 1108 "data/maps/RustboroCity/scripts.pory"

# 1109 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanIWontGoEasy:
# 1110 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: I know you just became\n"
# 1111 "data/maps/RustboroCity/scripts.pory"
	.string "a TRAINER, but I won't go easy!$"
# 1112 "data/maps/RustboroCity/scripts.pory"

# 1113 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanDefeat:
# 1114 "data/maps/RustboroCity/scripts.pory"
	.string "Hmm…\n"
# 1115 "data/maps/RustboroCity/scripts.pory"
	.string "You're pretty good.$"
# 1116 "data/maps/RustboroCity/scripts.pory"

# 1117 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanMrBrineyHint:
# 1118 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, you know\n"
# 1119 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY? The guy I just passed?\p"
# 1120 "data/maps/RustboroCity/scripts.pory"
	.string "I bet you didn't know this, since you\n"
# 1121 "data/maps/RustboroCity/scripts.pory"
	.string "just moved here, {PLAYER}, but\l"
# 1122 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY was once a great sailor.$"
# 1123 "data/maps/RustboroCity/scripts.pory"

# 1124 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TunnelNearingCompletion:
# 1125 "data/maps/RustboroCity/scripts.pory"
	.string "“Timesaving tunnel nearing\n"
# 1126 "data/maps/RustboroCity/scripts.pory"
	.string "completion!”\p"
# 1127 "data/maps/RustboroCity/scripts.pory"
	.string "…Is what it says on the sign, but\n"
# 1128 "data/maps/RustboroCity/scripts.pory"
	.string "there's also a big “X” splashed\l"
# 1129 "data/maps/RustboroCity/scripts.pory"
	.string "across it in red paint…$"
# 1130 "data/maps/RustboroCity/scripts.pory"

# 1131 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpSign:
# 1132 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORPORATION\p"
# 1133 "data/maps/RustboroCity/scripts.pory"
	.string "“For all your living needs, we make\n"
# 1134 "data/maps/RustboroCity/scripts.pory"
	.string "it all.”$"
# 1135 "data/maps/RustboroCity/scripts.pory"

# 1136 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymSign:
# 1137 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\n"
# 1138 "data/maps/RustboroCity/scripts.pory"
	.string "LEADER: ROXANNE\p"
# 1139 "data/maps/RustboroCity/scripts.pory"
	.string "“The ROCK-loving honors student!”$"
# 1140 "data/maps/RustboroCity/scripts.pory"

# 1141 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpBranchOfficeSign:
# 1142 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORP. BRANCH OFFICE\p"
# 1143 "data/maps/RustboroCity/scripts.pory"
	.string "“Access limited to DEVON employees\n"
# 1144 "data/maps/RustboroCity/scripts.pory"
	.string "and authorized personnel.”$"
# 1145 "data/maps/RustboroCity/scripts.pory"

# 1146 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CitySign:
# 1147 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY\p"
# 1148 "data/maps/RustboroCity/scripts.pory"
	.string "“The city probing the integration of\n"
# 1149 "data/maps/RustboroCity/scripts.pory"
	.string "nature and science.”$"
# 1150 "data/maps/RustboroCity/scripts.pory"

# 1151 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TrainersSchoolSign:
# 1152 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL\p"
# 1153 "data/maps/RustboroCity/scripts.pory"
	.string "“We'll teach you anything about\n"
# 1154 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON!”$"
# 1155 "data/maps/RustboroCity/scripts.pory"

# 1156 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CuttersHouse:
# 1157 "data/maps/RustboroCity/scripts.pory"
	.string "CUTTER'S HOUSE$"
# 1158 "data/maps/RustboroCity/scripts.pory"

# 1159 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevelopedNewPokenavFeature:
# 1160 "data/maps/RustboroCity/scripts.pory"
	.string "I've been developing an added feature\n"
# 1161 "data/maps/RustboroCity/scripts.pory"
	.string "for the POKéNAV…\p"
# 1162 "data/maps/RustboroCity/scripts.pory"
	.string "And it turned out great!\p"
# 1163 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, may I see that POKéNAV?\n"
# 1164 "data/maps/RustboroCity/scripts.pory"
	.string "The one our PRESIDENT gave you?$"
# 1165 "data/maps/RustboroCity/scripts.pory"

# 1166 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_AddedMatchCallPleaseCallMrStone:
# 1167 "data/maps/RustboroCity/scripts.pory"
	.string "There you go, {PLAYER}!\p"
# 1168 "data/maps/RustboroCity/scripts.pory"
	.string "I added a new feature named\n"
# 1169 "data/maps/RustboroCity/scripts.pory"
	.string "MATCH CALL to your POKéNAV.\p"
# 1170 "data/maps/RustboroCity/scripts.pory"
	.string "Using the MATCH CALL feature,\n"
# 1171 "data/maps/RustboroCity/scripts.pory"
	.string "you can chat with people who have\l"
# 1172 "data/maps/RustboroCity/scripts.pory"
	.string "been registered in your POKéNAV.\p"
# 1173 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, our PRESIDENT STONE should\n"
# 1174 "data/maps/RustboroCity/scripts.pory"
	.string "be registered in your POKéNAV.\p"
# 1175 "data/maps/RustboroCity/scripts.pory"
	.string "Test it out.\n"
# 1176 "data/maps/RustboroCity/scripts.pory"
	.string "Please give our PRESIDENT a call.$"
# 1177 "data/maps/RustboroCity/scripts.pory"

# 1178 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseSelectPokenav:
# 1179 "data/maps/RustboroCity/scripts.pory"
	.string "Please select the POKéNAV.$"
# 1180 "data/maps/RustboroCity/scripts.pory"

# 1181 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_IdBetterGetBackToWork:
# 1182 "data/maps/RustboroCity/scripts.pory"
	.string "Okay, I'd better get back to work.\n"
# 1183 "data/maps/RustboroCity/scripts.pory"
	.string "Please take care, {PLAYER}!$"
# 1184 "data/maps/RustboroCity/scripts.pory"

# 1185 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouCanHave2On2Battle:
# 1186 "data/maps/RustboroCity/scripts.pory"
	.string "Did you know this?\p"
# 1187 "data/maps/RustboroCity/scripts.pory"
	.string "You can have a 2-on-2 battle even\n"
# 1188 "data/maps/RustboroCity/scripts.pory"
	.string "if you're not with another TRAINER.\p"
# 1189 "data/maps/RustboroCity/scripts.pory"
	.string "If you catch the eyes of two TRAINERS\n"
# 1190 "data/maps/RustboroCity/scripts.pory"
	.string "when you have two or more POKéMON,\l"
# 1191 "data/maps/RustboroCity/scripts.pory"
	.string "they'll both challenge you.\p"
# 1192 "data/maps/RustboroCity/scripts.pory"
	.string "Don't you think it'd be cool if you\n"
# 1193 "data/maps/RustboroCity/scripts.pory"
	.string "could beat two TRAINERS by yourself?$"
