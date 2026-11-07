# 1 "data/maps/LavaridgeTown/scripts.pory"

# 2 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_MapScripts::
# 3 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_OnTransition
# 4 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LavaridgeTown_OnFrame
# 5 "data/maps/LavaridgeTown/scripts.pory"
	.byte 0
# 6 "data/maps/LavaridgeTown/scripts.pory"

# 7 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnTransition:
# 8 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_VISITED_LAVARIDGE_TOWN
# 9 "data/maps/LavaridgeTown/scripts.pory"
	call_if_set FLAG_WHITEOUT_TO_LAVARIDGE, LavaridgeTown_EventScript_ClearLavaridgeWhiteOut
# 10 "data/maps/LavaridgeTown/scripts.pory"
	call_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, LavaridgeTown_EventScript_ShowMtChimneyTrainers
# 11 "data/maps/LavaridgeTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 12 "data/maps/LavaridgeTown/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 13 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_CheckSetRivalPos
# 14 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_HideMapNamePopup
# 15 "data/maps/LavaridgeTown/scripts.pory"
	end
# 16 "data/maps/LavaridgeTown/scripts.pory"

# 17 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ClearLavaridgeWhiteOut::
# 18 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_WHITEOUT_TO_LAVARIDGE
# 19 "data/maps/LavaridgeTown/scripts.pory"
	return
# 20 "data/maps/LavaridgeTown/scripts.pory"

# 21 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_CheckSetRivalPos::
# 22 "data/maps/LavaridgeTown/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 23 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_0x8004, 9, LavaridgeTown_EventScript_SetRivalPos
# 24 "data/maps/LavaridgeTown/scripts.pory"
	return
# 25 "data/maps/LavaridgeTown/scripts.pory"

# 26 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_SetRivalPos::
# 27 "data/maps/LavaridgeTown/scripts.pory"
	setobjectxyperm LOCALID_LAVARIDGE_RIVAL, 11, 9
# 28 "data/maps/LavaridgeTown/scripts.pory"
	setobjectxyperm LOCALID_LAVARIDGE_RIVAL_ON_BIKE, 9, 8
# 29 "data/maps/LavaridgeTown/scripts.pory"
	setobjectmovementtype LOCALID_LAVARIDGE_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_UP
# 30 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_LAVARIDGE_TOWN_RIVAL
# 31 "data/maps/LavaridgeTown/scripts.pory"
	return
# 32 "data/maps/LavaridgeTown/scripts.pory"

# 33 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ShowMtChimneyTrainers::
# 34 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
# 35 "data/maps/LavaridgeTown/scripts.pory"
	return
# 36 "data/maps/LavaridgeTown/scripts.pory"

# 37 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HideMapNamePopup::
# 38 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 39 "data/maps/LavaridgeTown/scripts.pory"
	return
# 40 "data/maps/LavaridgeTown/scripts.pory"

# 41 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnFrame:
# 42 "data/maps/LavaridgeTown/scripts.pory"
	map_script_2 VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_RivalGiveGoGoggles
# 43 "data/maps/LavaridgeTown/scripts.pory"
	.2byte 0
# 44 "data/maps/LavaridgeTown/scripts.pory"

# 45 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalGiveGoGoggles::
# 46 "data/maps/LavaridgeTown/scripts.pory"
	lockall
# 47 "data/maps/LavaridgeTown/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 48 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalNoticePlayer
# 49 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExitHerbShop
# 50 "data/maps/LavaridgeTown/scripts.pory"
	delay 20
# 51 "data/maps/LavaridgeTown/scripts.pory"
	checkplayergender
# 52 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LavaridgeTown_EventScript_PlayMayMusic
# 53 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LavaridgeTown_EventScript_PlayBrendanMusic
# 54 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalApproachPlayer1
# 55 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalApproachPlayer2
# 56 "data/maps/LavaridgeTown/scripts.pory"
	checkplayergender
# 57 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LavaridgeTown_EventScript_MayGiveGoGoggles
# 58 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LavaridgeTown_EventScript_BrendanGiveGoGoggles
# 59 "data/maps/LavaridgeTown/scripts.pory"
	end
# 60 "data/maps/LavaridgeTown/scripts.pory"

# 61 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_MayGiveGoGoggles::
# 62 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_MayNiceBadgesTakeThis, MSGBOX_DEFAULT
# 63 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 64 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_GO_GOGGLES
# 65 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_MayExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
# 66 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalExit
# 67 "data/maps/LavaridgeTown/scripts.pory"
	end
# 68 "data/maps/LavaridgeTown/scripts.pory"

# 69 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_BrendanGiveGoGoggles::
# 70 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BrendanNiceBadgesTakeThis, MSGBOX_DEFAULT
# 71 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 72 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_GO_GOGGLES
# 73 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
# 74 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalExit
# 75 "data/maps/LavaridgeTown/scripts.pory"
	end
# 76 "data/maps/LavaridgeTown/scripts.pory"

# 77 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit::
# 78 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
# 79 "data/maps/LavaridgeTown/scripts.pory"
	removeobject LOCALID_LAVARIDGE_RIVAL
# 80 "data/maps/LavaridgeTown/scripts.pory"
	addobject LOCALID_LAVARIDGE_RIVAL_ON_BIKE
# 81 "data/maps/LavaridgeTown/scripts.pory"
	delay 30
# 82 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExit1
# 83 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExit2
# 84 "data/maps/LavaridgeTown/scripts.pory"
	removeobject LOCALID_LAVARIDGE_RIVAL_ON_BIKE
# 85 "data/maps/LavaridgeTown/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 2
# 86 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 87 "data/maps/LavaridgeTown/scripts.pory"
	savebgm MUS_DUMMY
# 88 "data/maps/LavaridgeTown/scripts.pory"
	fadedefaultbgm
# 89 "data/maps/LavaridgeTown/scripts.pory"
	releaseall
# 90 "data/maps/LavaridgeTown/scripts.pory"
	end
# 91 "data/maps/LavaridgeTown/scripts.pory"

# 92 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_PlayMayMusic::
# 93 "data/maps/LavaridgeTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 94 "data/maps/LavaridgeTown/scripts.pory"
	return
# 95 "data/maps/LavaridgeTown/scripts.pory"

# 96 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_PlayBrendanMusic::
# 97 "data/maps/LavaridgeTown/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 98 "data/maps/LavaridgeTown/scripts.pory"
	return
# 99 "data/maps/LavaridgeTown/scripts.pory"

# 100 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalNoticePlayer::
# 101 "data/maps/LavaridgeTown/scripts.pory"
	applywaitmovement LOCALID_LAVARIDGE_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 102 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 103 "data/maps/LavaridgeTown/scripts.pory"
	applywaitmovement LOCALID_LAVARIDGE_RIVAL, Common_Movement_ExclamationMark
# 104 "data/maps/LavaridgeTown/scripts.pory"
	applywaitmovement LOCALID_LAVARIDGE_RIVAL, Common_Movement_Delay48
# 105 "data/maps/LavaridgeTown/scripts.pory"
	return
# 106 "data/maps/LavaridgeTown/scripts.pory"

# 107 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExitHerbShop::
# 108 "data/maps/LavaridgeTown/scripts.pory"
	opendoor 12, 15
# 109 "data/maps/LavaridgeTown/scripts.pory"
	waitdooranim
# 110 "data/maps/LavaridgeTown/scripts.pory"
	addobject LOCALID_LAVARIDGE_RIVAL
# 111 "data/maps/LavaridgeTown/scripts.pory"
	applywaitmovement LOCALID_LAVARIDGE_RIVAL, LavaridgeTown_Movement_RivalExitHerbShop
# 112 "data/maps/LavaridgeTown/scripts.pory"
	closedoor 12, 15
# 113 "data/maps/LavaridgeTown/scripts.pory"
	waitdooranim
# 114 "data/maps/LavaridgeTown/scripts.pory"
	applywaitmovement LOCALID_LAVARIDGE_RIVAL, Common_Movement_WalkInPlaceFasterLeft
# 115 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 116 "data/maps/LavaridgeTown/scripts.pory"
	applywaitmovement LOCALID_LAVARIDGE_RIVAL, Common_Movement_ExclamationMark
# 117 "data/maps/LavaridgeTown/scripts.pory"
	applywaitmovement LOCALID_LAVARIDGE_RIVAL, Common_Movement_Delay48
# 118 "data/maps/LavaridgeTown/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 119 "data/maps/LavaridgeTown/scripts.pory"
	return
# 120 "data/maps/LavaridgeTown/scripts.pory"

# 121 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalApproachPlayer1::
# 122 "data/maps/LavaridgeTown/scripts.pory"
	applywaitmovement LOCALID_LAVARIDGE_RIVAL, LavaridgeTown_Movement_RivalApproachPlayer1
# 123 "data/maps/LavaridgeTown/scripts.pory"
	return
# 124 "data/maps/LavaridgeTown/scripts.pory"

# 125 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalApproachPlayer2::
# 126 "data/maps/LavaridgeTown/scripts.pory"
	applywaitmovement LOCALID_LAVARIDGE_RIVAL, LavaridgeTown_Movement_RivalApproachPlayer2
# 127 "data/maps/LavaridgeTown/scripts.pory"
	return
# 128 "data/maps/LavaridgeTown/scripts.pory"

# 129 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit1::
# 130 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_PLAYER, LavaridgeTown_Movement_PlayerWatchRivalExit
# 131 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL_ON_BIKE, LavaridgeTown_Movement_RivalExit1
# 132 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 133 "data/maps/LavaridgeTown/scripts.pory"
	return
# 134 "data/maps/LavaridgeTown/scripts.pory"

# 135 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit2::
# 136 "data/maps/LavaridgeTown/scripts.pory"
	applywaitmovement LOCALID_LAVARIDGE_RIVAL_ON_BIKE, LavaridgeTown_Movement_RivalExit2
# 137 "data/maps/LavaridgeTown/scripts.pory"
	return
# 138 "data/maps/LavaridgeTown/scripts.pory"

# 139 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExit2:
# 140 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 141 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 142 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 143 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 144 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 145 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 146 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 147 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 148 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 149 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 150 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 151 "data/maps/LavaridgeTown/scripts.pory"

# 152 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_PlayerWatchRivalExit:
# 153 "data/maps/LavaridgeTown/scripts.pory"
	delay_16
# 154 "data/maps/LavaridgeTown/scripts.pory"
	delay_8
# 155 "data/maps/LavaridgeTown/scripts.pory"
	walk_in_place_faster_right
# 156 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 157 "data/maps/LavaridgeTown/scripts.pory"

# 158 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExit1:
# 159 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_down
# 160 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 161 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 162 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 163 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 164 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 165 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 166 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 167 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 168 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 169 "data/maps/LavaridgeTown/scripts.pory"

# 170 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalApproachPlayer2:
# 171 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 172 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 173 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 174 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 175 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 176 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 177 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 178 "data/maps/LavaridgeTown/scripts.pory"

# 179 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalApproachPlayer1:
# 180 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 181 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 182 "data/maps/LavaridgeTown/scripts.pory"
	walk_up
# 183 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 184 "data/maps/LavaridgeTown/scripts.pory"

# 185 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExitHerbShop:
# 186 "data/maps/LavaridgeTown/scripts.pory"
	walk_down
# 187 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 188 "data/maps/LavaridgeTown/scripts.pory"

# 189 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsTrigger::
# 190 "data/maps/LavaridgeTown/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 191 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, DIR_SOUTH, LavaridgeTown_EventScript_EnteredHotSprings
# 192 "data/maps/LavaridgeTown/scripts.pory"
	end
# 193 "data/maps/LavaridgeTown/scripts.pory"

# 194 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_EnteredHotSprings::
# 195 "data/maps/LavaridgeTown/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_HOT_SPRINGS
# 196 "data/maps/LavaridgeTown/scripts.pory"
	end
# 197 "data/maps/LavaridgeTown/scripts.pory"

# 198 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ExpertM::
# 199 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsNeverRunDry, MSGBOX_NPC
# 200 "data/maps/LavaridgeTown/scripts.pory"
	end
# 201 "data/maps/LavaridgeTown/scripts.pory"

# 202 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_OldMan::
# 203 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_PokemonNippedBackside, MSGBOX_SIGN
# 204 "data/maps/LavaridgeTown/scripts.pory"
	end
# 205 "data/maps/LavaridgeTown/scripts.pory"

# 206 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_Twin::
# 207 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BatheInHotSpringsEveryDay, MSGBOX_NPC
# 208 "data/maps/LavaridgeTown/scripts.pory"
	end
# 209 "data/maps/LavaridgeTown/scripts.pory"

# 210 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsOldWoman1::
# 211 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_IfPokemonInHotSprings, MSGBOX_NPC
# 212 "data/maps/LavaridgeTown/scripts.pory"
	end
# 213 "data/maps/LavaridgeTown/scripts.pory"

# 214 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsOldWoman2::
# 215 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsClaims, MSGBOX_NPC
# 216 "data/maps/LavaridgeTown/scripts.pory"
	end
# 217 "data/maps/LavaridgeTown/scripts.pory"

# 218 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ExpertF::
# 219 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_OhYouLikeHotSprings, MSGBOX_NPC
# 220 "data/maps/LavaridgeTown/scripts.pory"
	end
# 221 "data/maps/LavaridgeTown/scripts.pory"

# 222 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_EggWoman::
# 223 "data/maps/LavaridgeTown/scripts.pory"
	lock
# 224 "data/maps/LavaridgeTown/scripts.pory"
	faceplayer
# 225 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_LAVARIDGE_EGG, LavaridgeTown_EventScript_ReceivedEgg
# 226 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HaveEggWillYouTakeIt, MSGBOX_YESNO
# 227 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LavaridgeTown_EventScript_DeclineEgg
# 228 "data/maps/LavaridgeTown/scripts.pory"
	getpartysize
# 229 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, LavaridgeTown_EventScript_NoRoomForEgg
# 230 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg, MSGBOX_DEFAULT
# 231 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_LAVARIDGE_EGG
# 232 "data/maps/LavaridgeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 233 "data/maps/LavaridgeTown/scripts.pory"
	message LavaridgeTown_Text_ReceivedTheEgg
# 234 "data/maps/LavaridgeTown/scripts.pory"
	waitfanfare
# 235 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_WYNAUT
# 236 "data/maps/LavaridgeTown/scripts.pory"
	release
# 237 "data/maps/LavaridgeTown/scripts.pory"
	end
# 238 "data/maps/LavaridgeTown/scripts.pory"

# 239 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ReceivedEgg::
# 240 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare, MSGBOX_DEFAULT
# 241 "data/maps/LavaridgeTown/scripts.pory"
	release
# 242 "data/maps/LavaridgeTown/scripts.pory"
	end
# 243 "data/maps/LavaridgeTown/scripts.pory"

# 244 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_NoRoomForEgg::
# 245 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
# 246 "data/maps/LavaridgeTown/scripts.pory"
	release
# 247 "data/maps/LavaridgeTown/scripts.pory"
	end
# 248 "data/maps/LavaridgeTown/scripts.pory"

# 249 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_DeclineEgg::
# 250 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_AsYouWishThen, MSGBOX_DEFAULT
# 251 "data/maps/LavaridgeTown/scripts.pory"
	release
# 252 "data/maps/LavaridgeTown/scripts.pory"
	end
# 253 "data/maps/LavaridgeTown/scripts.pory"

# 254 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_TownSign::
# 255 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_TownSign, MSGBOX_SIGN
# 256 "data/maps/LavaridgeTown/scripts.pory"
	end
# 257 "data/maps/LavaridgeTown/scripts.pory"

# 258 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_GymSign::
# 259 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_GymSign, MSGBOX_SIGN
# 260 "data/maps/LavaridgeTown/scripts.pory"
	end
# 261 "data/maps/LavaridgeTown/scripts.pory"

# 262 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HerbShopSign::
# 263 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HerbShopSign, MSGBOX_SIGN
# 264 "data/maps/LavaridgeTown/scripts.pory"
	end
# 265 "data/maps/LavaridgeTown/scripts.pory"

# 266 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_MayNiceBadgesTakeThis:
# 267 "data/maps/LavaridgeTown/scripts.pory"
	.string "MAY: {PLAYER}{KUN}! Long time no see!\p"
# 268 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh? While I visited the hot springs,\n"
# 269 "data/maps/LavaridgeTown/scripts.pory"
	.string "you got the LAVARIDGE GYM BADGE.\p"
# 270 "data/maps/LavaridgeTown/scripts.pory"
	.string "You must have collected\n"
# 271 "data/maps/LavaridgeTown/scripts.pory"
	.string "good POKéMON…\l"
# 272 "data/maps/LavaridgeTown/scripts.pory"
	.string "No, I believe you raised some.\p"
# 273 "data/maps/LavaridgeTown/scripts.pory"
	.string "I guess it would be okay for you to\n"
# 274 "data/maps/LavaridgeTown/scripts.pory"
	.string "have this.$"
# 275 "data/maps/LavaridgeTown/scripts.pory"

# 276 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_MayExplainGoGogglesChallengeDad:
# 277 "data/maps/LavaridgeTown/scripts.pory"
	.string "MAY: With those GO-GOGGLES, you'll\n"
# 278 "data/maps/LavaridgeTown/scripts.pory"
	.string "have no trouble getting through the\l"
# 279 "data/maps/LavaridgeTown/scripts.pory"
	.string "desert near ROUTE 111.\p"
# 280 "data/maps/LavaridgeTown/scripts.pory"
	.string "But, wow, {PLAYER}{KUN}…\n"
# 281 "data/maps/LavaridgeTown/scripts.pory"
	.string "Challenging GYMS…\p"
# 282 "data/maps/LavaridgeTown/scripts.pory"
	.string "You're trying hard because you don't\n"
# 283 "data/maps/LavaridgeTown/scripts.pory"
	.string "want to lose to me, I bet!\p"
# 284 "data/maps/LavaridgeTown/scripts.pory"
	.string "{PLAYER}{KUN}, I think I should challenge\n"
# 285 "data/maps/LavaridgeTown/scripts.pory"
	.string "your dad in PETALBURG GYM.\p"
# 286 "data/maps/LavaridgeTown/scripts.pory"
	.string "See you again!$"
# 287 "data/maps/LavaridgeTown/scripts.pory"

# 288 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BrendanNiceBadgesTakeThis:
# 289 "data/maps/LavaridgeTown/scripts.pory"
	.string "BRENDAN: {PLAYER}, hey, it's been a while.\n"
# 290 "data/maps/LavaridgeTown/scripts.pory"
	.string "How's it going?\p"
# 291 "data/maps/LavaridgeTown/scripts.pory"
	.string "Hmm…\n"
# 292 "data/maps/LavaridgeTown/scripts.pory"
	.string "That's a decent collection of BADGES.\p"
# 293 "data/maps/LavaridgeTown/scripts.pory"
	.string "All right, then.\n"
# 294 "data/maps/LavaridgeTown/scripts.pory"
	.string "You may as well have this.$"
# 295 "data/maps/LavaridgeTown/scripts.pory"

# 296 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad:
# 297 "data/maps/LavaridgeTown/scripts.pory"
	.string "BRENDAN: Keep those with you if you're\n"
# 298 "data/maps/LavaridgeTown/scripts.pory"
	.string "planning on going into that desert near\l"
# 299 "data/maps/LavaridgeTown/scripts.pory"
	.string "ROUTE 111.\p"
# 300 "data/maps/LavaridgeTown/scripts.pory"
	.string "There should be some POKéMON that\n"
# 301 "data/maps/LavaridgeTown/scripts.pory"
	.string "are exclusively desert-dwellers.\l"
# 302 "data/maps/LavaridgeTown/scripts.pory"
	.string "You might look around for those.\p"
# 303 "data/maps/LavaridgeTown/scripts.pory"
	.string "As for me…\n"
# 304 "data/maps/LavaridgeTown/scripts.pory"
	.string "I'm considering challenging NORMAN,\l"
# 305 "data/maps/LavaridgeTown/scripts.pory"
	.string "the GYM LEADER of PETALBURG.\p"
# 306 "data/maps/LavaridgeTown/scripts.pory"
	.string "Unlike you, {PLAYER}, your dad looks like\n"
# 307 "data/maps/LavaridgeTown/scripts.pory"
	.string "he really is tough.\p"
# 308 "data/maps/LavaridgeTown/scripts.pory"
	.string "See you around!$"
# 309 "data/maps/LavaridgeTown/scripts.pory"

# 310 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HaveEggWillYouTakeIt:
# 311 "data/maps/LavaridgeTown/scripts.pory"
	.string "I have here an EGG.\p"
# 312 "data/maps/LavaridgeTown/scripts.pory"
	.string "I'd hoped to hatch it by covering it in\n"
# 313 "data/maps/LavaridgeTown/scripts.pory"
	.string "hot sand by the hot springs.\l"
# 314 "data/maps/LavaridgeTown/scripts.pory"
	.string "But that doesn't seem to be enough…\p"
# 315 "data/maps/LavaridgeTown/scripts.pory"
	.string "I've heard it would be best if it were\n"
# 316 "data/maps/LavaridgeTown/scripts.pory"
	.string "kept together with POKéMON and\l"
# 317 "data/maps/LavaridgeTown/scripts.pory"
	.string "carried about.\p"
# 318 "data/maps/LavaridgeTown/scripts.pory"
	.string "You are a TRAINER, yes?\n"
# 319 "data/maps/LavaridgeTown/scripts.pory"
	.string "And your POKéMON radiate vitality.\p"
# 320 "data/maps/LavaridgeTown/scripts.pory"
	.string "So, what say you?\n"
# 321 "data/maps/LavaridgeTown/scripts.pory"
	.string "Will you take this EGG to hatch?$"
# 322 "data/maps/LavaridgeTown/scripts.pory"

# 323 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg:
# 324 "data/maps/LavaridgeTown/scripts.pory"
	.string "Good! I hope you'll walk plenty with\n"
# 325 "data/maps/LavaridgeTown/scripts.pory"
	.string "this here EGG!$"
# 326 "data/maps/LavaridgeTown/scripts.pory"

# 327 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_ReceivedTheEgg:
# 328 "data/maps/LavaridgeTown/scripts.pory"
	.string "{PLAYER} received the EGG.$"
# 329 "data/maps/LavaridgeTown/scripts.pory"

# 330 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_NoRoomForThisEgg:
# 331 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh? You've too many POKéMON.\n"
# 332 "data/maps/LavaridgeTown/scripts.pory"
	.string "There's no room for this EGG…$"
# 333 "data/maps/LavaridgeTown/scripts.pory"

# 334 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_AsYouWishThen:
# 335 "data/maps/LavaridgeTown/scripts.pory"
	.string "As you wish, then…\p"
# 336 "data/maps/LavaridgeTown/scripts.pory"
	.string "If you have a change of heart about\n"
# 337 "data/maps/LavaridgeTown/scripts.pory"
	.string "hatching this EGG, I will be here.$"
# 338 "data/maps/LavaridgeTown/scripts.pory"

# 339 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare:
# 340 "data/maps/LavaridgeTown/scripts.pory"
	.string "Every so often, an EGG will be found at\n"
# 341 "data/maps/LavaridgeTown/scripts.pory"
	.string "the POKéMON DAY CARE.\p"
# 342 "data/maps/LavaridgeTown/scripts.pory"
	.string "Or at least that's how the rumor goes.$"
# 343 "data/maps/LavaridgeTown/scripts.pory"

# 344 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsNeverRunDry:
# 345 "data/maps/LavaridgeTown/scripts.pory"
	.string "We draw as much hot water as we need,\n"
# 346 "data/maps/LavaridgeTown/scripts.pory"
	.string "and yet the hot springs never run dry.\p"
# 347 "data/maps/LavaridgeTown/scripts.pory"
	.string "Isn't it magical?\p"
# 348 "data/maps/LavaridgeTown/scripts.pory"
	.string "These hot springs appear near active\n"
# 349 "data/maps/LavaridgeTown/scripts.pory"
	.string "volcanoes. Veins of water under the\l"
# 350 "data/maps/LavaridgeTown/scripts.pory"
	.string "ground are heated by magma to well up\l"
# 351 "data/maps/LavaridgeTown/scripts.pory"
	.string "as hot springs.$"
# 352 "data/maps/LavaridgeTown/scripts.pory"

# 353 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_PokemonNippedBackside:
# 354 "data/maps/LavaridgeTown/scripts.pory"
	.string "Being buried in this hot sand is…\n"
# 355 "data/maps/LavaridgeTown/scripts.pory"
	.string "Sigh…\p"
# 356 "data/maps/LavaridgeTown/scripts.pory"
	.string "So warm and heavenly…\p"
# 357 "data/maps/LavaridgeTown/scripts.pory"
	.string "Eh? Gyaah! Ouch!\p"
# 358 "data/maps/LavaridgeTown/scripts.pory"
	.string "A POKéMON nipped my backside!$"
# 359 "data/maps/LavaridgeTown/scripts.pory"

# 360 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_OhYouLikeHotSprings:
# 361 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh, you like hot springs, do you?\p"
# 362 "data/maps/LavaridgeTown/scripts.pory"
	.string "That's surprising for one as young\n"
# 363 "data/maps/LavaridgeTown/scripts.pory"
	.string "as you.$"
# 364 "data/maps/LavaridgeTown/scripts.pory"

# 365 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BatheInHotSpringsEveryDay:
# 366 "data/maps/LavaridgeTown/scripts.pory"
	.string "I bathe in the hot springs every day.\p"
# 367 "data/maps/LavaridgeTown/scripts.pory"
	.string "I want to become a beautiful and strong\n"
# 368 "data/maps/LavaridgeTown/scripts.pory"
	.string "GYM LEADER like FLANNERY.$"
# 369 "data/maps/LavaridgeTown/scripts.pory"

# 370 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_IfPokemonInHotSprings:
# 371 "data/maps/LavaridgeTown/scripts.pory"
	.string "If people put POKéMON in hot springs,\n"
# 372 "data/maps/LavaridgeTown/scripts.pory"
	.string "it might be seriously strange.\p"
# 373 "data/maps/LavaridgeTown/scripts.pory"
	.string "Why, it might be an electric bath, or\n"
# 374 "data/maps/LavaridgeTown/scripts.pory"
	.string "a bubble bath, or even a lava bath…$"
# 375 "data/maps/LavaridgeTown/scripts.pory"

# 376 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsClaims:
# 377 "data/maps/LavaridgeTown/scripts.pory"
	.string "They're claiming that these hot springs\n"
# 378 "data/maps/LavaridgeTown/scripts.pory"
	.string "are good for calming nervous tension,\l"
# 379 "data/maps/LavaridgeTown/scripts.pory"
	.string "relieving aching muscles, solving\l"
# 380 "data/maps/LavaridgeTown/scripts.pory"
	.string "romantic problems, and attracting\l"
# 381 "data/maps/LavaridgeTown/scripts.pory"
	.string "money…$"
# 382 "data/maps/LavaridgeTown/scripts.pory"

# 383 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_TownSign:
# 384 "data/maps/LavaridgeTown/scripts.pory"
	.string "LAVARIDGE TOWN\p"
# 385 "data/maps/LavaridgeTown/scripts.pory"
	.string "“POKéMON CENTER HOT SPRINGS\n"
# 386 "data/maps/LavaridgeTown/scripts.pory"
	.string "An excellent place for relaxing!”$"
# 387 "data/maps/LavaridgeTown/scripts.pory"

# 388 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_GymSign:
# 389 "data/maps/LavaridgeTown/scripts.pory"
	.string "LAVARIDGE TOWN POKéMON GYM\n"
# 390 "data/maps/LavaridgeTown/scripts.pory"
	.string "LEADER: FLANNERY\l"
# 391 "data/maps/LavaridgeTown/scripts.pory"
	.string "“One with a fiery passion that burns!”$"
# 392 "data/maps/LavaridgeTown/scripts.pory"

# 393 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HerbShopSign:
# 394 "data/maps/LavaridgeTown/scripts.pory"
	.string "POKéMON HERB SHOP\n"
# 395 "data/maps/LavaridgeTown/scripts.pory"
	.string "“Bitter taste--better cure!”$"
