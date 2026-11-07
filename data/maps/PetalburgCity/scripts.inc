# 1 "data/maps/PetalburgCity/scripts.pory"

# 2 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_MapScripts::
# 3 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
# 4 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_OnFrame
# 5 "data/maps/PetalburgCity/scripts.pory"
	.byte 0
# 6 "data/maps/PetalburgCity/scripts.pory"

# 7 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnTransition:
# 8 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 9 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 0, PetalburgCity_EventScript_MoveGymBoyToWestEntrance
# 10 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_DisableMapNameAndMusic
# 11 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_DisableMapNameAndMusic
# 12 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_EventScript_SetGymDoorsUnlocked
# 13 "data/maps/PetalburgCity/scripts.pory"
	end
# 14 "data/maps/PetalburgCity/scripts.pory"

# 15 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
# 16 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_GYM_BOY, 5, 11
# 17 "data/maps/PetalburgCity/scripts.pory"
	return
# 18 "data/maps/PetalburgCity/scripts.pory"

# 19 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_DisableMapNameAndMusic::
# 20 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 21 "data/maps/PetalburgCity/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 22 "data/maps/PetalburgCity/scripts.pory"
	return
# 23 "data/maps/PetalburgCity/scripts.pory"

# 24 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_SetGymDoorsUnlocked::
# 25 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 26 "data/maps/PetalburgCity/scripts.pory"
	return
# 27 "data/maps/PetalburgCity/scripts.pory"

# 28 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnFrame:
# 29 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
# 30 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
# 31 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 32 "data/maps/PetalburgCity/scripts.pory"

# 33 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorial::
# 34 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 35 "data/maps/PetalburgCity/scripts.pory"
	special SavePlayerParty
# 36 "data/maps/PetalburgCity/scripts.pory"
	special LoadWallyZigzagoon
# 37 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 38 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
# 39 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 40 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 41 "data/maps/PetalburgCity/scripts.pory"
	special StartWallyTutorialBattle
# 42 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 43 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
# 44 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_PETALBURG_WALLY, MAP_PETALBURG_CITY
# 45 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 46 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 47 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 48 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 49 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 50 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 51 "data/maps/PetalburgCity/scripts.pory"
	special LoadPlayerParty
# 52 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 53 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 54 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 55 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 56 "data/maps/PetalburgCity/scripts.pory"
	end
# 57 "data/maps/PetalburgCity/scripts.pory"

# 58 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse::
# 59 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 60 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 61 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 62 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 63 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 64 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 7
# 65 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 5
# 66 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 67 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 68 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_Movement_WalkInsideHouseWallysDad
# 69 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
# 70 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 71 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 72 "data/maps/PetalburgCity/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_PETALBURG_CITY
# 73 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 74 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 75 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 76 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 77 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 78 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 79 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 80 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 81 "data/maps/PetalburgCity/scripts.pory"
	end
# 82 "data/maps/PetalburgCity/scripts.pory"

# 83 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 84 "data/maps/PetalburgCity/scripts.pory"
	lock
# 85 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 86 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 87 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 88 "data/maps/PetalburgCity/scripts.pory"
	applywaitmovement LOCALID_PETALBURG_BOY, Common_Movement_FaceOriginalDirection
# 89 "data/maps/PetalburgCity/scripts.pory"
	release
# 90 "data/maps/PetalburgCity/scripts.pory"
	end
# 91 "data/maps/PetalburgCity/scripts.pory"

# 92 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 93 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 94 "data/maps/PetalburgCity/scripts.pory"
	end
# 95 "data/maps/PetalburgCity/scripts.pory"

# 96 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 97 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 98 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 99 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 100 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 101 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 102 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 103 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 104 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 105 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 106 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 107 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 108 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 109 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 110 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 111 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 112 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 113 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 114 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 115 "data/maps/PetalburgCity/scripts.pory"

# 116 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHousePlayer:
# 117 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 118 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 119 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 120 "data/maps/PetalburgCity/scripts.pory"

# 121 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 122 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 123 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 124 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 125 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 126 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 127 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 128 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 129 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 130 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 131 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 132 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 133 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 134 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 135 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 136 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 137 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 138 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 139 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 140 "data/maps/PetalburgCity/scripts.pory"

# 141 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 142 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 143 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 144 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 145 "data/maps/PetalburgCity/scripts.pory"

# 146 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 147 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 148 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 149 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 150 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 151 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 152 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 153 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 154 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 155 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 156 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 157 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 158 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 159 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 160 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 161 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 162 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 163 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 164 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 165 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 166 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 167 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 168 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 169 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 170 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 171 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 172 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 173 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 174 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 175 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 176 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 177 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 178 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 179 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 180 "data/maps/PetalburgCity/scripts.pory"

# 181 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 182 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 183 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 184 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 185 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 187 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 188 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 191 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 194 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 197 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 198 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 200 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 201 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 202 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 203 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 204 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 205 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 206 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 207 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 208 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 209 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 210 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 211 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 212 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 213 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 214 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 215 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 216 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 217 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 218 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 219 "data/maps/PetalburgCity/scripts.pory"

# 220 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 221 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 222 "data/maps/PetalburgCity/scripts.pory"
	end
# 223 "data/maps/PetalburgCity/scripts.pory"

# 224 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 225 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 226 "data/maps/PetalburgCity/scripts.pory"
	end
# 227 "data/maps/PetalburgCity/scripts.pory"

# 228 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 229 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 230 "data/maps/PetalburgCity/scripts.pory"
	end
# 231 "data/maps/PetalburgCity/scripts.pory"

# 232 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 233 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 234 "data/maps/PetalburgCity/scripts.pory"
	end
# 235 "data/maps/PetalburgCity/scripts.pory"

# 236 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 237 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 238 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 239 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 240 "data/maps/PetalburgCity/scripts.pory"
	end
# 241 "data/maps/PetalburgCity/scripts.pory"

# 242 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 243 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 244 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 245 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 246 "data/maps/PetalburgCity/scripts.pory"
	end
# 247 "data/maps/PetalburgCity/scripts.pory"

# 248 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 249 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 250 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 251 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 252 "data/maps/PetalburgCity/scripts.pory"
	end
# 253 "data/maps/PetalburgCity/scripts.pory"

# 254 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 255 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 256 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 257 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 258 "data/maps/PetalburgCity/scripts.pory"
	end
# 259 "data/maps/PetalburgCity/scripts.pory"

# 260 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 261 "data/maps/PetalburgCity/scripts.pory"
	applywaitmovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 262 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 263 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 264 "data/maps/PetalburgCity/scripts.pory"
	applywaitmovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 265 "data/maps/PetalburgCity/scripts.pory"
	applywaitmovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 266 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 267 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 268 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 269 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 270 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 271 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 272 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 273 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 274 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 275 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 276 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 277 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 278 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 279 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 280 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 281 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 282 "data/maps/PetalburgCity/scripts.pory"
	applywaitmovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 283 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 284 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 285 "data/maps/PetalburgCity/scripts.pory"
	end
# 286 "data/maps/PetalburgCity/scripts.pory"

# 287 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 288 "data/maps/PetalburgCity/scripts.pory"
	applywaitmovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 289 "data/maps/PetalburgCity/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 290 "data/maps/PetalburgCity/scripts.pory"
	return
# 291 "data/maps/PetalburgCity/scripts.pory"

# 292 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 293 "data/maps/PetalburgCity/scripts.pory"
	applywaitmovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
# 294 "data/maps/PetalburgCity/scripts.pory"
	return
# 295 "data/maps/PetalburgCity/scripts.pory"

# 296 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 297 "data/maps/PetalburgCity/scripts.pory"
	applywaitmovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 298 "data/maps/PetalburgCity/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 299 "data/maps/PetalburgCity/scripts.pory"
	return
# 300 "data/maps/PetalburgCity/scripts.pory"

# 301 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 302 "data/maps/PetalburgCity/scripts.pory"
	applywaitmovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 303 "data/maps/PetalburgCity/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 304 "data/maps/PetalburgCity/scripts.pory"
	return
# 305 "data/maps/PetalburgCity/scripts.pory"

# 306 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 307 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 308 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 309 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 310 "data/maps/PetalburgCity/scripts.pory"
	return
# 311 "data/maps/PetalburgCity/scripts.pory"

# 312 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 313 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 314 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 315 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 316 "data/maps/PetalburgCity/scripts.pory"
	return
# 317 "data/maps/PetalburgCity/scripts.pory"

# 318 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 319 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 320 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 321 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 322 "data/maps/PetalburgCity/scripts.pory"
	return
# 323 "data/maps/PetalburgCity/scripts.pory"

# 324 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 325 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 326 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 327 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 328 "data/maps/PetalburgCity/scripts.pory"
	return
# 329 "data/maps/PetalburgCity/scripts.pory"

# 330 "data/maps/PetalburgCity/scripts.pory"
@ Unused
# 331 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48::
# 332 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 333 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 334 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 335 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 336 "data/maps/PetalburgCity/scripts.pory"

# 337 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 338 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 339 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 340 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 341 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 342 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 343 "data/maps/PetalburgCity/scripts.pory"

# 344 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 345 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 346 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 347 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 348 "data/maps/PetalburgCity/scripts.pory"

# 349 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 350 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 351 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 352 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 353 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 354 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 355 "data/maps/PetalburgCity/scripts.pory"

# 356 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 357 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 358 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 359 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 360 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 361 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 362 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 363 "data/maps/PetalburgCity/scripts.pory"

# 364 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 365 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 366 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 367 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 368 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 369 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 370 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 371 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 372 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 373 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 374 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 375 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 376 "data/maps/PetalburgCity/scripts.pory"

# 377 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 378 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 379 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 380 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 381 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 382 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 383 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 384 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 385 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 386 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 387 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 388 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 389 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 390 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 391 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 392 "data/maps/PetalburgCity/scripts.pory"

# 393 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
# 394 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 395 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 396 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 397 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 398 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 399 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 400 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 401 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 402 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 403 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 404 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 405 "data/maps/PetalburgCity/scripts.pory"

# 406 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
# 407 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 408 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 409 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 410 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 411 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 412 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 413 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 414 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 415 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 416 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 417 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 418 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 419 "data/maps/PetalburgCity/scripts.pory"

# 420 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 421 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 422 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 423 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 424 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 425 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 426 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 427 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 428 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 429 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 430 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 431 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 432 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 433 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 434 "data/maps/PetalburgCity/scripts.pory"

# 435 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 436 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 437 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 438 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 439 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 440 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 441 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 442 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 443 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 444 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 445 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 446 "data/maps/PetalburgCity/scripts.pory"

# 447 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 448 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 449 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 450 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 451 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 452 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 453 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 454 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 455 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 456 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 457 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 458 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 459 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 460 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 461 "data/maps/PetalburgCity/scripts.pory"

# 462 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 463 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 464 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 465 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 466 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 467 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 468 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 469 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 470 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 471 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 472 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 473 "data/maps/PetalburgCity/scripts.pory"

# 474 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 475 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 476 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 477 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 478 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 479 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 480 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 481 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 482 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 483 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 484 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 485 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 486 "data/maps/PetalburgCity/scripts.pory"

# 487 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 488 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 489 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 490 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 491 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 10
# 492 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 493 "data/maps/PetalburgCity/scripts.pory"
	end
# 494 "data/maps/PetalburgCity/scripts.pory"

# 495 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 496 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 497 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 498 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 499 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 11
# 500 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 501 "data/maps/PetalburgCity/scripts.pory"
	end
# 502 "data/maps/PetalburgCity/scripts.pory"

# 503 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 504 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 505 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 506 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 507 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 12
# 508 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 509 "data/maps/PetalburgCity/scripts.pory"
	end
# 510 "data/maps/PetalburgCity/scripts.pory"

# 511 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 512 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 513 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 514 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 515 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 13
# 516 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 517 "data/maps/PetalburgCity/scripts.pory"
	end
# 518 "data/maps/PetalburgCity/scripts.pory"

# 519 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 520 "data/maps/PetalburgCity/scripts.pory"
	applywaitmovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 521 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 522 "data/maps/PetalburgCity/scripts.pory"
	applywaitmovement LOCALID_PETALBURG_SCOTT, Common_Movement_ExclamationMark
# 523 "data/maps/PetalburgCity/scripts.pory"
	applywaitmovement LOCALID_PETALBURG_SCOTT, Common_Movement_Delay48
# 524 "data/maps/PetalburgCity/scripts.pory"
	applywaitmovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 525 "data/maps/PetalburgCity/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 526 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 527 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 528 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 529 "data/maps/PetalburgCity/scripts.pory"
	applywaitmovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 530 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 531 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 532 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 533 "data/maps/PetalburgCity/scripts.pory"
	applywaitmovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 534 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 535 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 536 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 537 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 538 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 539 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 540 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 541 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 542 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_PETALBURG_SCOTT
# 543 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 544 "data/maps/PetalburgCity/scripts.pory"
	end
# 545 "data/maps/PetalburgCity/scripts.pory"

# 546 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 547 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 548 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit0
# 549 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 550 "data/maps/PetalburgCity/scripts.pory"
	return
# 551 "data/maps/PetalburgCity/scripts.pory"

# 552 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 553 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 554 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit1
# 555 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 556 "data/maps/PetalburgCity/scripts.pory"
	return
# 557 "data/maps/PetalburgCity/scripts.pory"

# 558 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 559 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 560 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit2
# 561 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 562 "data/maps/PetalburgCity/scripts.pory"
	return
# 563 "data/maps/PetalburgCity/scripts.pory"

# 564 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 565 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 566 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit3
# 567 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 568 "data/maps/PetalburgCity/scripts.pory"
	return
# 569 "data/maps/PetalburgCity/scripts.pory"

# 570 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 571 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 572 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 573 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 574 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 575 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 576 "data/maps/PetalburgCity/scripts.pory"

# 577 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 578 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 579 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 580 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 581 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 582 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 583 "data/maps/PetalburgCity/scripts.pory"

# 584 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 585 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 586 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 587 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 588 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 589 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 590 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 591 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 592 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 593 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 594 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 595 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 596 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 597 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 598 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 599 "data/maps/PetalburgCity/scripts.pory"

# 600 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 601 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 602 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 603 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 604 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 605 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 606 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 607 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 608 "data/maps/PetalburgCity/scripts.pory"

# 609 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 610 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 611 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 612 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 613 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 614 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 615 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 616 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 617 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 618 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 619 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 620 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 621 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 622 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 623 "data/maps/PetalburgCity/scripts.pory"

# 624 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 625 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 626 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 627 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 628 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 629 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 630 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 631 "data/maps/PetalburgCity/scripts.pory"

# 632 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 633 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 634 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 635 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 636 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 637 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 638 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 639 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 640 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 641 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 642 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 643 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 644 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 645 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 646 "data/maps/PetalburgCity/scripts.pory"

# 647 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 648 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 649 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 650 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 651 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 652 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 653 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 654 "data/maps/PetalburgCity/scripts.pory"

# 655 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 656 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 657 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 658 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 659 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 660 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 661 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 662 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 663 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 664 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 665 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 666 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 667 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 668 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 669 "data/maps/PetalburgCity/scripts.pory"

# 670 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 671 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 672 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 673 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 674 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 675 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 676 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 677 "data/maps/PetalburgCity/scripts.pory"

# 678 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 679 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 680 "data/maps/PetalburgCity/scripts.pory"
	end
# 681 "data/maps/PetalburgCity/scripts.pory"

# 682 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 683 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our WALLY gone?\p"
# 684 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for VERDANTURF TOWN\n"
# 685 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 686 "data/maps/PetalburgCity/scripts.pory"

# 687 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 688 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 689 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie TRAINER?\p"
# 690 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what POKéMON TRAINERS\n"
# 691 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 692 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of GYM\n"
# 693 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 694 "data/maps/PetalburgCity/scripts.pory"

# 695 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 696 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is PETALBURG CITY's GYM.$"
# 697 "data/maps/PetalburgCity/scripts.pory"

# 698 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 699 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the GYM's sign. Look for it\n"
# 700 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a GYM.$"
# 701 "data/maps/PetalburgCity/scripts.pory"

# 702 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 703 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 704 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 705 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 706 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 707 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 708 "data/maps/PetalburgCity/scripts.pory"

# 709 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 710 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six POKéMON.\n"
# 711 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 712 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a STORAGE\n"
# 713 "data/maps/PetalburgCity/scripts.pory"
	.string "BOX over a PC connection.$"
# 714 "data/maps/PetalburgCity/scripts.pory"

# 715 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 716 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
# 717 "data/maps/PetalburgCity/scripts.pory"
	.string "LEADER: NORMAN\l"
# 718 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 719 "data/maps/PetalburgCity/scripts.pory"

# 720 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 721 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY\n"
# 722 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 723 "data/maps/PetalburgCity/scripts.pory"

# 724 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 725 "data/maps/PetalburgCity/scripts.pory"
	.string "WALLY'S HOUSE$"
# 726 "data/maps/PetalburgCity/scripts.pory"

# 727 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 728 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 729 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 730 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a POKéMON TRAINER?$"
# 731 "data/maps/PetalburgCity/scripts.pory"

# 732 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 733 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 734 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 735 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 736 "data/maps/PetalburgCity/scripts.pory"
	.string "You're either a rookie TRAINER,\n"
# 737 "data/maps/PetalburgCity/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 738 "data/maps/PetalburgCity/scripts.pory"

# 739 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 740 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 741 "data/maps/PetalburgCity/scripts.pory"
	.string "talented TRAINERS.\p"
# 742 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm sorry to have taken your time.$"
