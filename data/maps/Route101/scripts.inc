# 1 "data/maps/Route101/scripts.pory"

# 2 "data/maps/Route101/scripts.pory"
Route101_MapScripts::
# 3 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
# 4 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_OnFrame
# 5 "data/maps/Route101/scripts.pory"
	.byte 0
# 6 "data/maps/Route101/scripts.pory"

# 7 "data/maps/Route101/scripts.pory"
Route101_OnTransition:
# 8 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 9 "data/maps/Route101/scripts.pory"
	end
# 10 "data/maps/Route101/scripts.pory"

# 11 "data/maps/Route101/scripts.pory"
Route101_OnFrame:
# 12 "data/maps/Route101/scripts.pory"
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_HideMapNamePopup
# 13 "data/maps/Route101/scripts.pory"
	.2byte 0
# 14 "data/maps/Route101/scripts.pory"

# 15 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMapNamePopup::
# 16 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 17 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 18 "data/maps/Route101/scripts.pory"
	end
# 19 "data/maps/Route101/scripts.pory"

# 20 "data/maps/Route101/scripts.pory"
Route101_EventScript_StartBirchRescue::
# 21 "data/maps/Route101/scripts.pory"
	lockall
# 22 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 23 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_HelpMe, MSGBOX_DEFAULT
# 24 "data/maps/Route101/scripts.pory"
	closemessage
# 25 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ROUTE101_BIRCH, 0, 15
# 26 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ROUTE101_ZIGZAGOON, 0, 16
# 27 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_Movement_EnterScene
# 28 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchRunAway1
# 29 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
# 30 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 31 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
# 32 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchRunInCircles
# 33 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route101/scripts.pory"
	applywaitmovement LOCALID_ROUTE101_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 35 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
# 36 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchFaceZigzagoon
# 37 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 38 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_PleaseHelp, MSGBOX_DEFAULT
# 39 "data/maps/Route101/scripts.pory"
	closemessage
# 40 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 41 "data/maps/Route101/scripts.pory"
	releaseall
# 42 "data/maps/Route101/scripts.pory"
	end
# 43 "data/maps/Route101/scripts.pory"

# 44 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitSouth::
# 45 "data/maps/Route101/scripts.pory"
	lockall
# 46 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 47 "data/maps/Route101/scripts.pory"
	closemessage
# 48 "data/maps/Route101/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Route101_Movement_PreventExitSouth
# 49 "data/maps/Route101/scripts.pory"
	releaseall
# 50 "data/maps/Route101/scripts.pory"
	end
# 51 "data/maps/Route101/scripts.pory"

# 52 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitWest::
# 53 "data/maps/Route101/scripts.pory"
	lockall
# 54 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 55 "data/maps/Route101/scripts.pory"
	closemessage
# 56 "data/maps/Route101/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Route101_Movement_PreventExitWest
# 57 "data/maps/Route101/scripts.pory"
	releaseall
# 58 "data/maps/Route101/scripts.pory"
	end
# 59 "data/maps/Route101/scripts.pory"

# 60 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitNorth::
# 61 "data/maps/Route101/scripts.pory"
	lockall
# 62 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 63 "data/maps/Route101/scripts.pory"
	closemessage
# 64 "data/maps/Route101/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Route101_Movement_PreventExitNorth
# 65 "data/maps/Route101/scripts.pory"
	releaseall
# 66 "data/maps/Route101/scripts.pory"
	end
# 67 "data/maps/Route101/scripts.pory"

# 68 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitSouth:
# 69 "data/maps/Route101/scripts.pory"
	walk_up
# 70 "data/maps/Route101/scripts.pory"
	step_end
# 71 "data/maps/Route101/scripts.pory"

# 72 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitWest:
# 73 "data/maps/Route101/scripts.pory"
	walk_right
# 74 "data/maps/Route101/scripts.pory"
	step_end
# 75 "data/maps/Route101/scripts.pory"

# 76 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitNorth:
# 77 "data/maps/Route101/scripts.pory"
	walk_down
# 78 "data/maps/Route101/scripts.pory"
	step_end
# 79 "data/maps/Route101/scripts.pory"

# 80 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 81 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 82 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 83 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 84 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 85 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 86 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 87 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 88 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 89 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 90 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 91 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 92 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 93 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 94 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 95 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 96 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 97 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 98 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 99 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 100 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 101 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 102 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 103 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 104 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 105 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 106 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 107 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 108 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 109 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 110 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 111 "data/maps/Route101/scripts.pory"
	step_end
# 112 "data/maps/Route101/scripts.pory"

# 113 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChase1:
# 114 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 115 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 116 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 117 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 118 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 119 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 120 "data/maps/Route101/scripts.pory"
	step_end
# 121 "data/maps/Route101/scripts.pory"

# 122 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 123 "data/maps/Route101/scripts.pory"
	step_end
# 124 "data/maps/Route101/scripts.pory"

# 125 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch:
# 126 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 127 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 128 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 129 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 130 "data/maps/Route101/scripts.pory"
	step_end
# 131 "data/maps/Route101/scripts.pory"

# 132 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 133 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 134 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 135 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 136 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 137 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_left
# 138 "data/maps/Route101/scripts.pory"
	step_end
# 139 "data/maps/Route101/scripts.pory"

# 140 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 141 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 142 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 143 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 144 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 145 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 146 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 147 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 148 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 149 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 150 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 151 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 152 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 153 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 154 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 155 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 156 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 157 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 158 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 159 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 160 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 161 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 162 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 163 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 164 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 165 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 166 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 167 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 168 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 169 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 170 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 171 "data/maps/Route101/scripts.pory"
	step_end
# 172 "data/maps/Route101/scripts.pory"

# 173 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway1:
# 174 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 175 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 176 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 177 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 178 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 179 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 180 "data/maps/Route101/scripts.pory"
	step_end
# 181 "data/maps/Route101/scripts.pory"

# 182 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 183 "data/maps/Route101/scripts.pory"
	step_end
# 184 "data/maps/Route101/scripts.pory"

# 185 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZigzagoon:
# 186 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 187 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 188 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 189 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 190 "data/maps/Route101/scripts.pory"
	step_end
# 191 "data/maps/Route101/scripts.pory"

# 192 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused1:
# 193 "data/maps/Route101/scripts.pory"
	walk_up
# 194 "data/maps/Route101/scripts.pory"
	walk_up
# 195 "data/maps/Route101/scripts.pory"
	step_end
# 196 "data/maps/Route101/scripts.pory"

# 197 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused2:
# 198 "data/maps/Route101/scripts.pory"
	walk_up
# 199 "data/maps/Route101/scripts.pory"
	walk_left
# 200 "data/maps/Route101/scripts.pory"
	walk_up
# 201 "data/maps/Route101/scripts.pory"
	step_end
# 202 "data/maps/Route101/scripts.pory"

# 203 "data/maps/Route101/scripts.pory"
Route101_EventScript_Youngster::
# 204 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
# 205 "data/maps/Route101/scripts.pory"
	end
# 206 "data/maps/Route101/scripts.pory"

# 207 "data/maps/Route101/scripts.pory"
Route101_EventScript_Boy::
# 208 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 209 "data/maps/Route101/scripts.pory"
	end
# 210 "data/maps/Route101/scripts.pory"

# 211 "data/maps/Route101/scripts.pory"
Route101_EventScript_RouteSign::
# 212 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 213 "data/maps/Route101/scripts.pory"
	end
# 214 "data/maps/Route101/scripts.pory"

# 215 "data/maps/Route101/scripts.pory"
Route101_EventScript_BirchsBag::
# 216 "data/maps/Route101/scripts.pory"
	lock
# 217 "data/maps/Route101/scripts.pory"
	faceplayer
# 218 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 219 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 220 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 221 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_ROUTE101_ZIGZAGOON
# 222 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_PLAYER, 6, 13
# 223 "data/maps/Route101/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 224 "data/maps/Route101/scripts.pory"
	special ChooseStarter
# 225 "data/maps/Route101/scripts.pory"
	applywaitmovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchApproachPlayer
# 226 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
# 227 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 228 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 229 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 230 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 231 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 232 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 233 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 234 "data/maps/Route101/scripts.pory"
	checkplayergender
# 235 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 236 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 237 "data/maps/Route101/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 238 "data/maps/Route101/scripts.pory"
	waitstate
# 239 "data/maps/Route101/scripts.pory"
	release
# 240 "data/maps/Route101/scripts.pory"
	end
# 241 "data/maps/Route101/scripts.pory"

# 242 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMayInBedroom::
# 243 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 244 "data/maps/Route101/scripts.pory"
	return
# 245 "data/maps/Route101/scripts.pory"

# 246 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideBrendanInBedroom::
# 247 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 248 "data/maps/Route101/scripts.pory"
	return
# 249 "data/maps/Route101/scripts.pory"

# 250 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchApproachPlayer:
# 251 "data/maps/Route101/scripts.pory"
	walk_right
# 252 "data/maps/Route101/scripts.pory"
	step_end
# 253 "data/maps/Route101/scripts.pory"

# 254 "data/maps/Route101/scripts.pory"
Route101_Text_HelpMe:
# 255 "data/maps/Route101/scripts.pory"
	.string "H-help me!$"
# 256 "data/maps/Route101/scripts.pory"

# 257 "data/maps/Route101/scripts.pory"
Route101_Text_PleaseHelp:
# 258 "data/maps/Route101/scripts.pory"
	.string "Hello! You over there!\n"
# 259 "data/maps/Route101/scripts.pory"
	.string "Please! Help!\p"
# 260 "data/maps/Route101/scripts.pory"
	.string "In my BAG!\n"
# 261 "data/maps/Route101/scripts.pory"
	.string "There's a POKé BALL!$"
# 262 "data/maps/Route101/scripts.pory"

# 263 "data/maps/Route101/scripts.pory"
Route101_Text_DontLeaveMe:
# 264 "data/maps/Route101/scripts.pory"
	.string "Wh-Where are you going?!\n"
# 265 "data/maps/Route101/scripts.pory"
	.string "Don't leave me like this!$"
# 266 "data/maps/Route101/scripts.pory"

# 267 "data/maps/Route101/scripts.pory"
Route101_Text_YouSavedMe:
# 268 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: Whew…\p"
# 269 "data/maps/Route101/scripts.pory"
	.string "I was in the tall grass studying wild\n"
# 270 "data/maps/Route101/scripts.pory"
	.string "POKéMON when I was jumped.\p"
# 271 "data/maps/Route101/scripts.pory"
	.string "You saved me.\n"
# 272 "data/maps/Route101/scripts.pory"
	.string "Thanks a lot!\p"
# 273 "data/maps/Route101/scripts.pory"
	.string "Oh?\p"
# 274 "data/maps/Route101/scripts.pory"
	.string "Hi, you're {PLAYER}{KUN}!\p"
# 275 "data/maps/Route101/scripts.pory"
	.string "This is not the place to chat, so come\n"
# 276 "data/maps/Route101/scripts.pory"
	.string "by my POKéMON LAB later, okay?$"
# 277 "data/maps/Route101/scripts.pory"

# 278 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter:
# 279 "data/maps/Route101/scripts.pory"
	.string "If POKéMON get tired, take them to\n"
# 280 "data/maps/Route101/scripts.pory"
	.string "a POKéMON CENTER.\p"
# 281 "data/maps/Route101/scripts.pory"
	.string "There's a POKéMON CENTER in OLDALE\n"
# 282 "data/maps/Route101/scripts.pory"
	.string "TOWN right close by.$"
# 283 "data/maps/Route101/scripts.pory"

# 284 "data/maps/Route101/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 285 "data/maps/Route101/scripts.pory"
	.string "Wild POKéMON will jump out at you in\n"
# 286 "data/maps/Route101/scripts.pory"
	.string "tall grass.\p"
# 287 "data/maps/Route101/scripts.pory"
	.string "If you want to catch POKéMON, you have\n"
# 288 "data/maps/Route101/scripts.pory"
	.string "to go into the tall grass and search.$"
# 289 "data/maps/Route101/scripts.pory"

# 290 "data/maps/Route101/scripts.pory"
Route101_Text_RouteSign:
# 291 "data/maps/Route101/scripts.pory"
	.string "ROUTE 101\n"
# 292 "data/maps/Route101/scripts.pory"
	.string "{UP_ARROW} OLDALE TOWN$"
