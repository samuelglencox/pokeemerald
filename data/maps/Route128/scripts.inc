# 1 "data/maps/Route128/scripts.pory"

# 2 "data/maps/Route128/scripts.pory"
Route128_MapScripts::
# 3 "data/maps/Route128/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route128_OnTransition
# 4 "data/maps/Route128/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route128_OnFrame
# 5 "data/maps/Route128/scripts.pory"
	.byte 0
# 6 "data/maps/Route128/scripts.pory"

# 7 "data/maps/Route128/scripts.pory"
Route128_OnTransition:
# 8 "data/maps/Route128/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 9 "data/maps/Route128/scripts.pory"
	end
# 10 "data/maps/Route128/scripts.pory"

# 11 "data/maps/Route128/scripts.pory"
Route128_OnFrame:
# 12 "data/maps/Route128/scripts.pory"
	map_script_2 VAR_ROUTE128_STATE, 1, Route128_EventScript_KyogreAwakenedScene
# 13 "data/maps/Route128/scripts.pory"
	.2byte 0
# 14 "data/maps/Route128/scripts.pory"

# 15 "data/maps/Route128/scripts.pory"
Route128_EventScript_KyogreAwakenedScene::
# 16 "data/maps/Route128/scripts.pory"
	lockall
# 17 "data/maps/Route128/scripts.pory"
	delay 20
# 18 "data/maps/Route128/scripts.pory"
	applywaitmovement LOCALID_ROUTE128_ARCHIE, Route128_Movement_ArchieLookAround
# 19 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_ArchieWhatHappened, MSGBOX_DEFAULT
# 20 "data/maps/Route128/scripts.pory"
	closemessage
# 21 "data/maps/Route128/scripts.pory"
	applywaitmovement LOCALID_ROUTE128_ARCHIE, Route128_Movement_ArchieBackUp
# 22 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_ArchieIOnlyWanted, MSGBOX_DEFAULT
# 23 "data/maps/Route128/scripts.pory"
	closemessage
# 24 "data/maps/Route128/scripts.pory"
	applywaitmovement LOCALID_ROUTE128_MAXIE, Route128_Movement_MaxieApproachArchie
# 25 "data/maps/Route128/scripts.pory"
	applywaitmovement LOCALID_ROUTE128_ARCHIE, Common_Movement_WalkInPlaceFasterUp
# 26 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_MaxieDoYouUnderstandNow, MSGBOX_DEFAULT
# 27 "data/maps/Route128/scripts.pory"
	closemessage
# 28 "data/maps/Route128/scripts.pory"
	applywaitmovement LOCALID_ROUTE128_MAXIE, Route128_Movement_MaxieApproachPlayer
# 29 "data/maps/Route128/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 30 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_MaxieResposibilityFallsToArchieAndMe, MSGBOX_DEFAULT
# 31 "data/maps/Route128/scripts.pory"
	closemessage
# 32 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_ARCHIE, Route128_Movement_ArchieRunLeft
# 33 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 34 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_MAXIE, Route128_Movement_MaxieWalkLeft
# 35 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_MaxieThisDefiesBelief, MSGBOX_DEFAULT
# 37 "data/maps/Route128/scripts.pory"
	closemessage
# 38 "data/maps/Route128/scripts.pory"
	delay 40
# 39 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_MAXIE, Route128_Movement_MaxieExit
# 40 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_ARCHIE, Route128_Movement_ArchieExit
# 41 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route128/scripts.pory"
	removeobject LOCALID_ROUTE128_MAXIE
# 43 "data/maps/Route128/scripts.pory"
	removeobject LOCALID_ROUTE128_ARCHIE
# 44 "data/maps/Route128/scripts.pory"
	delay 100
# 45 "data/maps/Route128/scripts.pory"
	setfieldeffectargument 0, 1
# 46 "data/maps/Route128/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 47 "data/maps/Route128/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 48 "data/maps/Route128/scripts.pory"
	addobject LOCALID_ROUTE128_STEVEN
# 49 "data/maps/Route128/scripts.pory"
	applywaitmovement LOCALID_ROUTE128_STEVEN, Route128_Movement_StevenApproachPlayer
# 50 "data/maps/Route128/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 51 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_StevenWhatIsHappening, MSGBOX_DEFAULT
# 52 "data/maps/Route128/scripts.pory"
	closemessage
# 53 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_STEVEN, Route128_Movement_StevenWalkUp
# 54 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 55 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 56 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_StevenWholeWorldWillDrown, MSGBOX_DEFAULT
# 57 "data/maps/Route128/scripts.pory"
	applywaitmovement LOCALID_ROUTE128_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 58 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_StevenImGoingToSootopolis, MSGBOX_DEFAULT
# 59 "data/maps/Route128/scripts.pory"
	closemessage
# 60 "data/maps/Route128/scripts.pory"
	applywaitmovement LOCALID_ROUTE128_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 61 "data/maps/Route128/scripts.pory"
	delay 50
# 62 "data/maps/Route128/scripts.pory"
	setfieldeffectargument 0, 1
# 63 "data/maps/Route128/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 64 "data/maps/Route128/scripts.pory"
	delay 15
# 65 "data/maps/Route128/scripts.pory"
	removeobject LOCALID_ROUTE128_STEVEN
# 66 "data/maps/Route128/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 67 "data/maps/Route128/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 68 "data/maps/Route128/scripts.pory"
	setvar VAR_ROUTE128_STATE, 2
# 69 "data/maps/Route128/scripts.pory"
	releaseall
# 70 "data/maps/Route128/scripts.pory"
	end
# 71 "data/maps/Route128/scripts.pory"

# 72 "data/maps/Route128/scripts.pory"
Route128_Movement_Unused1:
# 73 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 74 "data/maps/Route128/scripts.pory"
	step_end
# 75 "data/maps/Route128/scripts.pory"

# 76 "data/maps/Route128/scripts.pory"
Route128_Movement_Unused2:
# 77 "data/maps/Route128/scripts.pory"
	walk_left
# 78 "data/maps/Route128/scripts.pory"
	walk_left
# 79 "data/maps/Route128/scripts.pory"
	walk_left
# 80 "data/maps/Route128/scripts.pory"
	walk_left
# 81 "data/maps/Route128/scripts.pory"
	walk_left
# 82 "data/maps/Route128/scripts.pory"
	walk_left
# 83 "data/maps/Route128/scripts.pory"
	walk_up
# 84 "data/maps/Route128/scripts.pory"
	walk_up
# 85 "data/maps/Route128/scripts.pory"
	walk_up
# 86 "data/maps/Route128/scripts.pory"
	walk_up
# 87 "data/maps/Route128/scripts.pory"
	walk_up
# 88 "data/maps/Route128/scripts.pory"
	walk_up
# 89 "data/maps/Route128/scripts.pory"
	step_end
# 90 "data/maps/Route128/scripts.pory"

# 91 "data/maps/Route128/scripts.pory"
Route128_Movement_StevenWalkUp:
# 92 "data/maps/Route128/scripts.pory"
	walk_up
# 93 "data/maps/Route128/scripts.pory"
	step_end
# 94 "data/maps/Route128/scripts.pory"

# 95 "data/maps/Route128/scripts.pory"
Route128_Movement_StevenApproachPlayer:
# 96 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 97 "data/maps/Route128/scripts.pory"
	step_end
# 98 "data/maps/Route128/scripts.pory"

# 99 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieLookAround:
# 100 "data/maps/Route128/scripts.pory"
	walk_fast_down
# 101 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_left
# 102 "data/maps/Route128/scripts.pory"
	delay_16
# 103 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_right
# 104 "data/maps/Route128/scripts.pory"
	delay_16
# 105 "data/maps/Route128/scripts.pory"
	delay_16
# 106 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_down
# 107 "data/maps/Route128/scripts.pory"
	step_end
# 108 "data/maps/Route128/scripts.pory"

# 109 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieBackUp:
# 110 "data/maps/Route128/scripts.pory"
	lock_facing_direction
# 111 "data/maps/Route128/scripts.pory"
	walk_slow_up
# 112 "data/maps/Route128/scripts.pory"
	delay_16
# 113 "data/maps/Route128/scripts.pory"
	unlock_facing_direction
# 114 "data/maps/Route128/scripts.pory"
	step_end
# 115 "data/maps/Route128/scripts.pory"

# 116 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieRunLeft:
# 117 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 118 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 119 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 120 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_right
# 121 "data/maps/Route128/scripts.pory"
	step_end
# 122 "data/maps/Route128/scripts.pory"

# 123 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieExit:
# 124 "data/maps/Route128/scripts.pory"
	delay_16
# 125 "data/maps/Route128/scripts.pory"
	delay_16
# 126 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 127 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 128 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 129 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 130 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 131 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 132 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 133 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 134 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 135 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 136 "data/maps/Route128/scripts.pory"
	step_end
# 137 "data/maps/Route128/scripts.pory"

# 138 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieWalkLeft:
# 139 "data/maps/Route128/scripts.pory"
	walk_left
# 140 "data/maps/Route128/scripts.pory"
	walk_left
# 141 "data/maps/Route128/scripts.pory"
	delay_8
# 142 "data/maps/Route128/scripts.pory"
	delay_4
# 143 "data/maps/Route128/scripts.pory"
	step_end
# 144 "data/maps/Route128/scripts.pory"

# 145 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieApproachArchie:
# 146 "data/maps/Route128/scripts.pory"
	walk_left
# 147 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_down
# 148 "data/maps/Route128/scripts.pory"
	step_end
# 149 "data/maps/Route128/scripts.pory"

# 150 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieExit:
# 151 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 152 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 153 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 154 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 155 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 156 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 157 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 158 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 159 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 160 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 161 "data/maps/Route128/scripts.pory"
	step_end
# 162 "data/maps/Route128/scripts.pory"

# 163 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieApproachPlayer:
# 164 "data/maps/Route128/scripts.pory"
	walk_right
# 165 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_down
# 166 "data/maps/Route128/scripts.pory"
	step_end
# 167 "data/maps/Route128/scripts.pory"

# 168 "data/maps/Route128/scripts.pory"
Route128_EventScript_Isaiah::
# 169 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_ISAIAH_1, Route128_Text_IsaiahIntro, Route128_Text_IsaiahDefeat, Route128_EventScript_RegisterIsaiah
# 170 "data/maps/Route128/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 171 "data/maps/Route128/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route128_EventScript_RematchIsaiah
# 172 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_IsaiahPostBattle, MSGBOX_DEFAULT
# 173 "data/maps/Route128/scripts.pory"
	release
# 174 "data/maps/Route128/scripts.pory"
	end
# 175 "data/maps/Route128/scripts.pory"

# 176 "data/maps/Route128/scripts.pory"
Route128_EventScript_RegisterIsaiah::
# 177 "data/maps/Route128/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 178 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 179 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_IsaiahRegister, MSGBOX_DEFAULT
# 180 "data/maps/Route128/scripts.pory"
	register_matchcall TRAINER_ISAIAH_1
# 181 "data/maps/Route128/scripts.pory"
	release
# 182 "data/maps/Route128/scripts.pory"
	end
# 183 "data/maps/Route128/scripts.pory"

# 184 "data/maps/Route128/scripts.pory"
Route128_EventScript_RematchIsaiah::
# 185 "data/maps/Route128/scripts.pory"
	trainerbattle_rematch TRAINER_ISAIAH_1, Route128_Text_IsaiahRematchIntro, Route128_Text_IsaiahRematchDefeat
# 186 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_IsaiahPostRematch, MSGBOX_AUTOCLOSE
# 187 "data/maps/Route128/scripts.pory"
	end
# 188 "data/maps/Route128/scripts.pory"

# 189 "data/maps/Route128/scripts.pory"
Route128_EventScript_Katelyn::
# 190 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_KATELYN_1, Route128_Text_KatelynIntro, Route128_Text_KatelynDefeat, Route128_EventScript_RegisterKatelyn
# 191 "data/maps/Route128/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 192 "data/maps/Route128/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route128_EventScript_RematchKatelyn
# 193 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_KatelynPostBattle, MSGBOX_DEFAULT
# 194 "data/maps/Route128/scripts.pory"
	release
# 195 "data/maps/Route128/scripts.pory"
	end
# 196 "data/maps/Route128/scripts.pory"

# 197 "data/maps/Route128/scripts.pory"
Route128_EventScript_RegisterKatelyn::
# 198 "data/maps/Route128/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 199 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 200 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_KatelynRegister, MSGBOX_DEFAULT
# 201 "data/maps/Route128/scripts.pory"
	register_matchcall TRAINER_KATELYN_1
# 202 "data/maps/Route128/scripts.pory"
	release
# 203 "data/maps/Route128/scripts.pory"
	end
# 204 "data/maps/Route128/scripts.pory"

# 205 "data/maps/Route128/scripts.pory"
Route128_EventScript_RematchKatelyn::
# 206 "data/maps/Route128/scripts.pory"
	trainerbattle_rematch TRAINER_KATELYN_1, Route128_Text_KatelynRematchIntro, Route128_Text_KatelynRematchDefeat
# 207 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_KatelynPostRematch, MSGBOX_AUTOCLOSE
# 208 "data/maps/Route128/scripts.pory"
	end
# 209 "data/maps/Route128/scripts.pory"

# 210 "data/maps/Route128/scripts.pory"
Route128_EventScript_Alexa::
# 211 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_ALEXA, Route128_Text_AlexaIntro, Route128_Text_AlexaDefeat
# 212 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_AlexaPostBattle, MSGBOX_AUTOCLOSE
# 213 "data/maps/Route128/scripts.pory"
	end
# 214 "data/maps/Route128/scripts.pory"

# 215 "data/maps/Route128/scripts.pory"
Route128_EventScript_Ruben::
# 216 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_RUBEN, Route128_Text_RubenIntro, Route128_Text_RubenDefeat
# 217 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_RubenPostBattle, MSGBOX_AUTOCLOSE
# 218 "data/maps/Route128/scripts.pory"
	end
# 219 "data/maps/Route128/scripts.pory"

# 220 "data/maps/Route128/scripts.pory"
Route128_EventScript_Wayne::
# 221 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_WAYNE, Route128_Text_WayneIntro, Route128_Text_WayneDefeat
# 222 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_WaynePostBattle, MSGBOX_AUTOCLOSE
# 223 "data/maps/Route128/scripts.pory"
	end
# 224 "data/maps/Route128/scripts.pory"

# 225 "data/maps/Route128/scripts.pory"
Route128_EventScript_Harrison::
# 226 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_HARRISON, Route128_Text_HarrisonIntro, Route128_Text_HarrisonDefeat
# 227 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_HarrisonPostBattle, MSGBOX_AUTOCLOSE
# 228 "data/maps/Route128/scripts.pory"
	end
# 229 "data/maps/Route128/scripts.pory"

# 230 "data/maps/Route128/scripts.pory"
Route128_EventScript_Carlee::
# 231 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_CARLEE, Route128_Text_CarleeIntro, Route128_Text_CarleeDefeat
# 232 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_CarleePostBattle, MSGBOX_AUTOCLOSE
# 233 "data/maps/Route128/scripts.pory"
	end
# 234 "data/maps/Route128/scripts.pory"

# 235 "data/maps/Route128/scripts.pory"
Route128_Text_ArchieWhatHappened:
# 236 "data/maps/Route128/scripts.pory"
	.string "ARCHIE: What happened…\n"
# 237 "data/maps/Route128/scripts.pory"
	.string "What is this wretched scene…\p"
# 238 "data/maps/Route128/scripts.pory"
	.string "Did I…make a horrible mistake?$"
# 239 "data/maps/Route128/scripts.pory"

# 240 "data/maps/Route128/scripts.pory"
Route128_Text_ArchieIOnlyWanted:
# 241 "data/maps/Route128/scripts.pory"
	.string "I…\n"
# 242 "data/maps/Route128/scripts.pory"
	.string "I only wanted…$"
# 243 "data/maps/Route128/scripts.pory"

# 244 "data/maps/Route128/scripts.pory"
Route128_Text_MaxieDoYouUnderstandNow:
# 245 "data/maps/Route128/scripts.pory"
	.string "MAXIE: Do you understand now,\n"
# 246 "data/maps/Route128/scripts.pory"
	.string "ARCHIE?\p"
# 247 "data/maps/Route128/scripts.pory"
	.string "Do you finally see how disastrous\n"
# 248 "data/maps/Route128/scripts.pory"
	.string "your dream turned out to be?\p"
# 249 "data/maps/Route128/scripts.pory"
	.string "We have to hurry! We have to do\n"
# 250 "data/maps/Route128/scripts.pory"
	.string "something before the situation goes\l"
# 251 "data/maps/Route128/scripts.pory"
	.string "completely out of control!$"
# 252 "data/maps/Route128/scripts.pory"

# 253 "data/maps/Route128/scripts.pory"
Route128_Text_MaxieResposibilityFallsToArchieAndMe:
# 254 "data/maps/Route128/scripts.pory"
	.string "MAXIE: {PLAYER}, don't say anything.\p"
# 255 "data/maps/Route128/scripts.pory"
	.string "I know that I have no right to be\n"
# 256 "data/maps/Route128/scripts.pory"
	.string "critical of ARCHIE…\p"
# 257 "data/maps/Route128/scripts.pory"
	.string "But the way things are now, I doubt\n"
# 258 "data/maps/Route128/scripts.pory"
	.string "that we humans will be capable of\l"
# 259 "data/maps/Route128/scripts.pory"
	.string "doing anything about it.\p"
# 260 "data/maps/Route128/scripts.pory"
	.string "But neither can we stand by and\n"
# 261 "data/maps/Route128/scripts.pory"
	.string "just watch helplessly.\p"
# 262 "data/maps/Route128/scripts.pory"
	.string "The responsibility for putting an end\n"
# 263 "data/maps/Route128/scripts.pory"
	.string "to this falls to ARCHIE and me…$"
# 264 "data/maps/Route128/scripts.pory"

# 265 "data/maps/Route128/scripts.pory"
Route128_Text_MaxieThisDefiesBelief:
# 266 "data/maps/Route128/scripts.pory"
	.string "MAXIE: This defies belief…\p"
# 267 "data/maps/Route128/scripts.pory"
	.string "Those super-ancient POKéMON…\p"
# 268 "data/maps/Route128/scripts.pory"
	.string "Their power is unbelievable.\n"
# 269 "data/maps/Route128/scripts.pory"
	.string "They've upset the balance of nature…$"
# 270 "data/maps/Route128/scripts.pory"

# 271 "data/maps/Route128/scripts.pory"
Route128_Text_StevenWhatIsHappening:
# 272 "data/maps/Route128/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}!\n"
# 273 "data/maps/Route128/scripts.pory"
	.string "What is happening?$"
# 274 "data/maps/Route128/scripts.pory"

# 275 "data/maps/Route128/scripts.pory"
Route128_Text_StevenWholeWorldWillDrown:
# 276 "data/maps/Route128/scripts.pory"
	.string "This is terrible…\p"
# 277 "data/maps/Route128/scripts.pory"
	.string "After the scorching heat wave ended,\n"
# 278 "data/maps/Route128/scripts.pory"
	.string "this deluge began.\p"
# 279 "data/maps/Route128/scripts.pory"
	.string "If this doesn't stop, all of HOENN…\n"
# 280 "data/maps/Route128/scripts.pory"
	.string "No, the whole world will drown.\p"
# 281 "data/maps/Route128/scripts.pory"
	.string "This huge rain cloud is spreading\n"
# 282 "data/maps/Route128/scripts.pory"
	.string "from above SOOTOPOLIS…\p"
# 283 "data/maps/Route128/scripts.pory"
	.string "What in the world is taking place there?\p"
# 284 "data/maps/Route128/scripts.pory"
	.string "There's no point arguing here…\n"
# 285 "data/maps/Route128/scripts.pory"
	.string "SOOTOPOLIS might provide answers…$"
# 286 "data/maps/Route128/scripts.pory"

# 287 "data/maps/Route128/scripts.pory"
Route128_Text_StevenImGoingToSootopolis:
# 288 "data/maps/Route128/scripts.pory"
	.string "{PLAYER}{KUN}…\n"
# 289 "data/maps/Route128/scripts.pory"
	.string "I don't know what you intend to do,\l"
# 290 "data/maps/Route128/scripts.pory"
	.string "but don't do anything reckless.\p"
# 291 "data/maps/Route128/scripts.pory"
	.string "Okay.\n"
# 292 "data/maps/Route128/scripts.pory"
	.string "I'm going to SOOTOPOLIS.$"
