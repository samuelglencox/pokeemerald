# 1 "data/maps/Route119/scripts.pory"

# 2 "data/maps/Route119/scripts.pory"
Route119_MapScripts::
# 3 "data/maps/Route119/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route119_OnResume
# 4 "data/maps/Route119/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_OnTransition
# 5 "data/maps/Route119/scripts.pory"
	.byte 0
# 6 "data/maps/Route119/scripts.pory"

# 7 "data/maps/Route119/scripts.pory"
Route119_OnResume:
# 8 "data/maps/Route119/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route119_EventScript_TryRemoveKecleon
# 9 "data/maps/Route119/scripts.pory"
	end
# 10 "data/maps/Route119/scripts.pory"

# 11 "data/maps/Route119/scripts.pory"
Route119_EventScript_TryRemoveKecleon::
# 12 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/Route119/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 14 "data/maps/Route119/scripts.pory"
	removeobject VAR_LAST_TALKED
# 15 "data/maps/Route119/scripts.pory"
	return
# 16 "data/maps/Route119/scripts.pory"

# 17 "data/maps/Route119/scripts.pory"
Route119_OnTransition:
# 18 "data/maps/Route119/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 19 "data/maps/Route119/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 20 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 1, Route119_EventScript_MoveInstituteWorkersDownstairs
# 21 "data/maps/Route119/scripts.pory"
	special SetRoute119Weather
# 22 "data/maps/Route119/scripts.pory"
	end
# 23 "data/maps/Route119/scripts.pory"

# 24 "data/maps/Route119/scripts.pory"
Route119_EventScript_MoveInstituteWorkersDownstairs::
# 25 "data/maps/Route119/scripts.pory"
	setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
# 26 "data/maps/Route119/scripts.pory"
	clearflag FLAG_HIDE_WEATHER_INSTITUTE_1F_WORKERS
# 27 "data/maps/Route119/scripts.pory"
	setvar VAR_WEATHER_INSTITUTE_STATE, 2
# 28 "data/maps/Route119/scripts.pory"
	return
# 29 "data/maps/Route119/scripts.pory"

# 30 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalTrigger1::
# 31 "data/maps/Route119/scripts.pory"
	setvar VAR_TEMP_1, 1
# 32 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter
# 33 "data/maps/Route119/scripts.pory"
	end
# 34 "data/maps/Route119/scripts.pory"

# 35 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalTrigger2::
# 36 "data/maps/Route119/scripts.pory"
	setvar VAR_TEMP_1, 2
# 37 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter
# 38 "data/maps/Route119/scripts.pory"
	end
# 39 "data/maps/Route119/scripts.pory"

# 40 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEncounter::
# 41 "data/maps/Route119/scripts.pory"
	lockall
# 42 "data/maps/Route119/scripts.pory"
	addobject LOCALID_ROUTE119_RIVAL_ON_BIKE
# 43 "data/maps/Route119/scripts.pory"
	checkplayergender
# 44 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route119_EventScript_PlayMayMusic
# 45 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route119_EventScript_PlayBrendanMusic
# 46 "data/maps/Route119/scripts.pory"
	delay 65
# 47 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_RivalEnter1
# 48 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_RivalEnter2
# 49 "data/maps/Route119/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 50 "data/maps/Route119/scripts.pory"
	delay 30
# 51 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_SetRivalPos1
# 52 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_SetRivalPos2
# 53 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_ROUTE119_RIVAL_ON_BIKE
# 54 "data/maps/Route119/scripts.pory"
	addobject LOCALID_ROUTE119_RIVAL
# 55 "data/maps/Route119/scripts.pory"
	delay 30
# 56 "data/maps/Route119/scripts.pory"
	checkplayergender
# 57 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route119_EventScript_BattleMay
# 58 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route119_EventScript_BattleBrendan
# 59 "data/maps/Route119/scripts.pory"
	releaseall
# 60 "data/maps/Route119/scripts.pory"
	end
# 61 "data/maps/Route119/scripts.pory"

# 62 "data/maps/Route119/scripts.pory"
Route119_EventScript_PlayMayMusic::
# 63 "data/maps/Route119/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 64 "data/maps/Route119/scripts.pory"
	return
# 65 "data/maps/Route119/scripts.pory"

# 66 "data/maps/Route119/scripts.pory"
Route119_EventScript_PlayBrendanMusic::
# 67 "data/maps/Route119/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 68 "data/maps/Route119/scripts.pory"
	return
# 69 "data/maps/Route119/scripts.pory"

# 70 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMay::
# 71 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayIntro, MSGBOX_DEFAULT
# 72 "data/maps/Route119/scripts.pory"
	switch VAR_STARTER_MON
# 73 "data/maps/Route119/scripts.pory"
	case 0, Route119_EventScript_BattleMayTreecko
# 74 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_BattleMayTorchic
# 75 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_BattleMayMudkip
# 76 "data/maps/Route119/scripts.pory"
	end
# 77 "data/maps/Route119/scripts.pory"

# 78 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMayTreecko::
# 79 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_TREECKO, Route119_Text_MayDefeat
# 80 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedMay
# 81 "data/maps/Route119/scripts.pory"
	end
# 82 "data/maps/Route119/scripts.pory"

# 83 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMayTorchic::
# 84 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_TORCHIC, Route119_Text_MayDefeat
# 85 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedMay
# 86 "data/maps/Route119/scripts.pory"
	end
# 87 "data/maps/Route119/scripts.pory"

# 88 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMayMudkip::
# 89 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_MUDKIP, Route119_Text_MayDefeat
# 90 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedMay
# 91 "data/maps/Route119/scripts.pory"
	end
# 92 "data/maps/Route119/scripts.pory"

# 93 "data/maps/Route119/scripts.pory"
Route119_EventScript_DefeatedMay::
# 94 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayPresentForYou, MSGBOX_DEFAULT
# 95 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_GiveFlyHM
# 96 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayExplainFly, MSGBOX_DEFAULT
# 97 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalExitScottArrive
# 98 "data/maps/Route119/scripts.pory"
	end
# 99 "data/maps/Route119/scripts.pory"

# 100 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendan::
# 101 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanIntro, MSGBOX_DEFAULT
# 102 "data/maps/Route119/scripts.pory"
	switch VAR_STARTER_MON
# 103 "data/maps/Route119/scripts.pory"
	case 0, Route119_EventScript_BattleBrendanTreecko
# 104 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_BattleBrendanTorchic
# 105 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_BattleBrendanMudkip
# 106 "data/maps/Route119/scripts.pory"
	end
# 107 "data/maps/Route119/scripts.pory"

# 108 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendanTreecko::
# 109 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_TREECKO, Route119_Text_BrendanDefeat
# 110 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedBrendan
# 111 "data/maps/Route119/scripts.pory"
	end
# 112 "data/maps/Route119/scripts.pory"

# 113 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendanTorchic::
# 114 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_TORCHIC, Route119_Text_BrendanDefeat
# 115 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedBrendan
# 116 "data/maps/Route119/scripts.pory"
	end
# 117 "data/maps/Route119/scripts.pory"

# 118 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendanMudkip::
# 119 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_MUDKIP, Route119_Text_BrendanDefeat
# 120 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedBrendan
# 121 "data/maps/Route119/scripts.pory"
	end
# 122 "data/maps/Route119/scripts.pory"

# 123 "data/maps/Route119/scripts.pory"
Route119_EventScript_DefeatedBrendan::
# 124 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanIllGiveYouThis, MSGBOX_DEFAULT
# 125 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_GiveFlyHM
# 126 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanExplainFly, MSGBOX_DEFAULT
# 127 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalExitScottArrive
# 128 "data/maps/Route119/scripts.pory"
	end
# 129 "data/maps/Route119/scripts.pory"

# 130 "data/maps/Route119/scripts.pory"
Route119_EventScript_GiveFlyHM::
# 131 "data/maps/Route119/scripts.pory"
	giveitem ITEM_HM_FLY
# 132 "data/maps/Route119/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLY
# 133 "data/maps/Route119/scripts.pory"
	return
# 134 "data/maps/Route119/scripts.pory"

# 135 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExitScottArrive::
# 136 "data/maps/Route119/scripts.pory"
	closemessage
# 137 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_SetRivalPos1
# 138 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_SetRivalPos2
# 139 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_ROUTE119_RIVAL
# 140 "data/maps/Route119/scripts.pory"
	addobject LOCALID_ROUTE119_RIVAL_ON_BIKE
# 141 "data/maps/Route119/scripts.pory"
	delay 30
# 142 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_RivalExit1
# 143 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_RivalExit2
# 144 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_ROUTE119_RIVAL_ON_BIKE
# 145 "data/maps/Route119/scripts.pory"
	setvar VAR_ROUTE119_STATE, 1
# 146 "data/maps/Route119/scripts.pory"
	savebgm MUS_DUMMY
# 147 "data/maps/Route119/scripts.pory"
	fadedefaultbgm
# 148 "data/maps/Route119/scripts.pory"
	delay 60
# 149 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_SetScottPos1
# 150 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_SetScottPos2
# 151 "data/maps/Route119/scripts.pory"
	addobject LOCALID_ROUTE119_SCOTT
# 152 "data/maps/Route119/scripts.pory"
	applywaitmovement LOCALID_ROUTE119_SCOTT, Route119_Movement_ScottEnter
# 153 "data/maps/Route119/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 154 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ScottWayToGoBeSeeingYou, MSGBOX_DEFAULT
# 155 "data/maps/Route119/scripts.pory"
	closemessage
# 156 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_ScottExit1
# 157 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_ScottExit2
# 158 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_ROUTE119_SCOTT
# 159 "data/maps/Route119/scripts.pory"
	releaseall
# 160 "data/maps/Route119/scripts.pory"
	end
# 161 "data/maps/Route119/scripts.pory"

# 162 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetScottPos1::
# 163 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_SCOTT, 27, 25
# 164 "data/maps/Route119/scripts.pory"
	return
# 165 "data/maps/Route119/scripts.pory"

# 166 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetScottPos2::
# 167 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_SCOTT, 28, 25
# 168 "data/maps/Route119/scripts.pory"
	return
# 169 "data/maps/Route119/scripts.pory"

# 170 "data/maps/Route119/scripts.pory"
Route119_EventScript_ScottExit1::
# 171 "data/maps/Route119/scripts.pory"
	applywaitmovement LOCALID_ROUTE119_SCOTT, Route119_Movement_ScottExit1
# 172 "data/maps/Route119/scripts.pory"
	return
# 173 "data/maps/Route119/scripts.pory"

# 174 "data/maps/Route119/scripts.pory"
Route119_EventScript_ScottExit2::
# 175 "data/maps/Route119/scripts.pory"
	applywaitmovement LOCALID_ROUTE119_SCOTT, Route119_Movement_ScottExit2
# 176 "data/maps/Route119/scripts.pory"
	return
# 177 "data/maps/Route119/scripts.pory"

# 178 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEnter1::
# 179 "data/maps/Route119/scripts.pory"
	applywaitmovement LOCALID_ROUTE119_RIVAL_ON_BIKE, Route119_Movement_RivalEnter1
# 180 "data/maps/Route119/scripts.pory"
	return
# 181 "data/maps/Route119/scripts.pory"

# 182 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEnter2::
# 183 "data/maps/Route119/scripts.pory"
	applywaitmovement LOCALID_ROUTE119_RIVAL_ON_BIKE, Route119_Movement_RivalEnter2
# 184 "data/maps/Route119/scripts.pory"
	return
# 185 "data/maps/Route119/scripts.pory"

# 186 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExit1::
# 187 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_PLAYER, Route119_Movement_PlayerWatchRivalExit1
# 188 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_RIVAL_ON_BIKE, Route119_Movement_RivalExit1
# 189 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 190 "data/maps/Route119/scripts.pory"
	return
# 191 "data/maps/Route119/scripts.pory"

# 192 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExit2::
# 193 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_PLAYER, Route119_Movement_PlayerWatchRivalExit2
# 194 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_RIVAL_ON_BIKE, Route119_Movement_RivalExit2
# 195 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 196 "data/maps/Route119/scripts.pory"
	return
# 197 "data/maps/Route119/scripts.pory"

# 198 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetRivalPos1::
# 199 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_RIVAL, 25, 32
# 200 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_RIVAL_ON_BIKE, 25, 32
# 201 "data/maps/Route119/scripts.pory"
	return
# 202 "data/maps/Route119/scripts.pory"

# 203 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetRivalPos2::
# 204 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_RIVAL, 26, 32
# 205 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_RIVAL_ON_BIKE, 26, 32
# 206 "data/maps/Route119/scripts.pory"
	return
# 207 "data/maps/Route119/scripts.pory"

# 208 "data/maps/Route119/scripts.pory"
Route119_Movement_PlayerWatchRivalExit1:
# 209 "data/maps/Route119/scripts.pory"
	delay_16
# 210 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_right
# 211 "data/maps/Route119/scripts.pory"
	delay_8
# 212 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_up
# 213 "data/maps/Route119/scripts.pory"
	step_end
# 214 "data/maps/Route119/scripts.pory"

# 215 "data/maps/Route119/scripts.pory"
Route119_Movement_PlayerWatchRivalExit2:
# 216 "data/maps/Route119/scripts.pory"
	delay_16
# 217 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_left
# 218 "data/maps/Route119/scripts.pory"
	delay_8
# 219 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_up
# 220 "data/maps/Route119/scripts.pory"
	step_end
# 221 "data/maps/Route119/scripts.pory"

# 222 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalEnter1:
# 223 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 224 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 225 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 226 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 227 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 228 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 229 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 230 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 231 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 232 "data/maps/Route119/scripts.pory"
	step_end
# 233 "data/maps/Route119/scripts.pory"

# 234 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalEnter2:
# 235 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 236 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 237 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 238 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 239 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 240 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 241 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 242 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 243 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 244 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 245 "data/maps/Route119/scripts.pory"
	step_end
# 246 "data/maps/Route119/scripts.pory"

# 247 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalExit1:
# 248 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 249 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 250 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 251 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 252 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 253 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 254 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 255 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 256 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 257 "data/maps/Route119/scripts.pory"
	step_end
# 258 "data/maps/Route119/scripts.pory"

# 259 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalExit2:
# 260 "data/maps/Route119/scripts.pory"
	walk_fast_left
# 261 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 262 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 263 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 264 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 265 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 266 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 267 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 268 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 269 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 270 "data/maps/Route119/scripts.pory"
	step_end
# 271 "data/maps/Route119/scripts.pory"

# 272 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottEnter:
# 273 "data/maps/Route119/scripts.pory"
	walk_down
# 274 "data/maps/Route119/scripts.pory"
	walk_down
# 275 "data/maps/Route119/scripts.pory"
	walk_down
# 276 "data/maps/Route119/scripts.pory"
	walk_down
# 277 "data/maps/Route119/scripts.pory"
	walk_left
# 278 "data/maps/Route119/scripts.pory"
	walk_left
# 279 "data/maps/Route119/scripts.pory"
	walk_down
# 280 "data/maps/Route119/scripts.pory"
	step_end
# 281 "data/maps/Route119/scripts.pory"

# 282 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottExit1:
# 283 "data/maps/Route119/scripts.pory"
	walk_up
# 284 "data/maps/Route119/scripts.pory"
	walk_right
# 285 "data/maps/Route119/scripts.pory"
	walk_right
# 286 "data/maps/Route119/scripts.pory"
	walk_up
# 287 "data/maps/Route119/scripts.pory"
	walk_up
# 288 "data/maps/Route119/scripts.pory"
	walk_up
# 289 "data/maps/Route119/scripts.pory"
	walk_up
# 290 "data/maps/Route119/scripts.pory"
	walk_up
# 291 "data/maps/Route119/scripts.pory"
	step_end
# 292 "data/maps/Route119/scripts.pory"

# 293 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottExit2:
# 294 "data/maps/Route119/scripts.pory"
	walk_up
# 295 "data/maps/Route119/scripts.pory"
	walk_right
# 296 "data/maps/Route119/scripts.pory"
	walk_up
# 297 "data/maps/Route119/scripts.pory"
	walk_up
# 298 "data/maps/Route119/scripts.pory"
	walk_up
# 299 "data/maps/Route119/scripts.pory"
	walk_up
# 300 "data/maps/Route119/scripts.pory"
	walk_up
# 301 "data/maps/Route119/scripts.pory"
	step_end
# 302 "data/maps/Route119/scripts.pory"

# 303 "data/maps/Route119/scripts.pory"
Route119_EventScript_CyclingTriathleteM::
# 304 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TallGrassSnaresBikeTires, MSGBOX_NPC
# 305 "data/maps/Route119/scripts.pory"
	end
# 306 "data/maps/Route119/scripts.pory"

# 307 "data/maps/Route119/scripts.pory"
Route119_EventScript_RouteSignFortree::
# 308 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_RouteSignFortree, MSGBOX_SIGN
# 309 "data/maps/Route119/scripts.pory"
	end
# 310 "data/maps/Route119/scripts.pory"

# 311 "data/maps/Route119/scripts.pory"
Route119_EventScript_WeatherInstituteSign::
# 312 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_WeatherInstitute, MSGBOX_SIGN
# 313 "data/maps/Route119/scripts.pory"
	end
# 314 "data/maps/Route119/scripts.pory"

# 315 "data/maps/Route119/scripts.pory"
Route119_EventScript_Brent::
# 316 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_BRENT, Route119_Text_BrentIntro, Route119_Text_BrentDefeat
# 317 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrentPostBattle, MSGBOX_AUTOCLOSE
# 318 "data/maps/Route119/scripts.pory"
	end
# 319 "data/maps/Route119/scripts.pory"

# 320 "data/maps/Route119/scripts.pory"
Route119_EventScript_Donald::
# 321 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DONALD, Route119_Text_DonaldIntro, Route119_Text_DonaldDefeat
# 322 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DonaldPostBattle, MSGBOX_AUTOCLOSE
# 323 "data/maps/Route119/scripts.pory"
	end
# 324 "data/maps/Route119/scripts.pory"

# 325 "data/maps/Route119/scripts.pory"
Route119_EventScript_Taylor::
# 326 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_TAYLOR, Route119_Text_TaylorIntro, Route119_Text_TaylorDefeat
# 327 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TaylorPostBattle, MSGBOX_AUTOCLOSE
# 328 "data/maps/Route119/scripts.pory"
	end
# 329 "data/maps/Route119/scripts.pory"

# 330 "data/maps/Route119/scripts.pory"
Route119_EventScript_Doug::
# 331 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DOUG, Route119_Text_DougIntro, Route119_Text_DougDefeat
# 332 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DougPostBattle, MSGBOX_AUTOCLOSE
# 333 "data/maps/Route119/scripts.pory"
	end
# 334 "data/maps/Route119/scripts.pory"

# 335 "data/maps/Route119/scripts.pory"
Route119_EventScript_Greg::
# 336 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_GREG, Route119_Text_GregIntro, Route119_Text_GregDefeat
# 337 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_GregPostBattle, MSGBOX_AUTOCLOSE
# 338 "data/maps/Route119/scripts.pory"
	end
# 339 "data/maps/Route119/scripts.pory"

# 340 "data/maps/Route119/scripts.pory"
Route119_EventScript_Kent::
# 341 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_KENT, Route119_Text_KentIntro, Route119_Text_KentDefeat
# 342 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_KentPostBattle, MSGBOX_AUTOCLOSE
# 343 "data/maps/Route119/scripts.pory"
	end
# 344 "data/maps/Route119/scripts.pory"

# 345 "data/maps/Route119/scripts.pory"
Route119_EventScript_Jackson::
# 346 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_JACKSON_1, Route119_Text_JacksonIntro, Route119_Text_JacksonDefeat, Route119_EventScript_RegisterJackson
# 347 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 348 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route119_EventScript_RematchJackson
# 349 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonPostBattle, MSGBOX_DEFAULT
# 350 "data/maps/Route119/scripts.pory"
	release
# 351 "data/maps/Route119/scripts.pory"
	end
# 352 "data/maps/Route119/scripts.pory"

# 353 "data/maps/Route119/scripts.pory"
Route119_EventScript_RegisterJackson::
# 354 "data/maps/Route119/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 355 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 356 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonRegister, MSGBOX_DEFAULT
# 357 "data/maps/Route119/scripts.pory"
	register_matchcall TRAINER_JACKSON_1
# 358 "data/maps/Route119/scripts.pory"
	release
# 359 "data/maps/Route119/scripts.pory"
	end
# 360 "data/maps/Route119/scripts.pory"

# 361 "data/maps/Route119/scripts.pory"
Route119_EventScript_RematchJackson::
# 362 "data/maps/Route119/scripts.pory"
	trainerbattle_rematch TRAINER_JACKSON_1, Route119_Text_JacksonRematchIntro, Route119_Text_JacksonRematchDefeat
# 363 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonPostRematch, MSGBOX_AUTOCLOSE
# 364 "data/maps/Route119/scripts.pory"
	end
# 365 "data/maps/Route119/scripts.pory"

# 366 "data/maps/Route119/scripts.pory"
Route119_EventScript_Catherine::
# 367 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_CATHERINE_1, Route119_Text_CatherineIntro, Route119_Text_CatherineDefeat, Route119_EventScript_RegisterCatherine
# 368 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 369 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route119_EventScript_RematchCatherine
# 370 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherinePostBattle, MSGBOX_DEFAULT
# 371 "data/maps/Route119/scripts.pory"
	release
# 372 "data/maps/Route119/scripts.pory"
	end
# 373 "data/maps/Route119/scripts.pory"

# 374 "data/maps/Route119/scripts.pory"
Route119_EventScript_RegisterCatherine::
# 375 "data/maps/Route119/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 376 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 377 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherineRegister, MSGBOX_DEFAULT
# 378 "data/maps/Route119/scripts.pory"
	register_matchcall TRAINER_CATHERINE_1
# 379 "data/maps/Route119/scripts.pory"
	release
# 380 "data/maps/Route119/scripts.pory"
	end
# 381 "data/maps/Route119/scripts.pory"

# 382 "data/maps/Route119/scripts.pory"
Route119_EventScript_RematchCatherine::
# 383 "data/maps/Route119/scripts.pory"
	trainerbattle_rematch TRAINER_CATHERINE_1, Route119_Text_CatherineRematchIntro, Route119_Text_CatherineRematchDefeat
# 384 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherinePostRematch, MSGBOX_AUTOCLOSE
# 385 "data/maps/Route119/scripts.pory"
	end
# 386 "data/maps/Route119/scripts.pory"

# 387 "data/maps/Route119/scripts.pory"
Route119_EventScript_Hugh::
# 388 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_HUGH, Route119_Text_HughIntro, Route119_Text_HughDefeat
# 389 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_HughPostBattle, MSGBOX_AUTOCLOSE
# 390 "data/maps/Route119/scripts.pory"
	end
# 391 "data/maps/Route119/scripts.pory"

# 392 "data/maps/Route119/scripts.pory"
Route119_EventScript_Phil::
# 393 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_PHIL, Route119_Text_PhilIntro, Route119_Text_PhilDefeat
# 394 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_PhilPostBattle, MSGBOX_AUTOCLOSE
# 395 "data/maps/Route119/scripts.pory"
	end
# 396 "data/maps/Route119/scripts.pory"

# 397 "data/maps/Route119/scripts.pory"
Route119_EventScript_Yasu::
# 398 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_YASU, Route119_Text_YasuIntro, Route119_Text_YasuDefeat
# 399 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_YasuPostBattle, MSGBOX_AUTOCLOSE
# 400 "data/maps/Route119/scripts.pory"
	end
# 401 "data/maps/Route119/scripts.pory"

# 402 "data/maps/Route119/scripts.pory"
Route119_EventScript_Takashi::
# 403 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_TAKASHI, Route119_Text_TakashiIntro, Route119_Text_TakashiDefeat
# 404 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TakashiPostBattle, MSGBOX_AUTOCLOSE
# 405 "data/maps/Route119/scripts.pory"
	end
# 406 "data/maps/Route119/scripts.pory"

# 407 "data/maps/Route119/scripts.pory"
Route119_EventScript_Hideo::
# 408 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_HIDEO, Route119_Text_HideoIntro, Route119_Text_HideoDefeat
# 409 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_HideoPostBattle, MSGBOX_AUTOCLOSE
# 410 "data/maps/Route119/scripts.pory"
	end
# 411 "data/maps/Route119/scripts.pory"

# 412 "data/maps/Route119/scripts.pory"
Route119_EventScript_Chris::
# 413 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_CHRIS, Route119_Text_ChrisIntro, Route119_Text_ChrisDefeat
# 414 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ChrisPostBattle, MSGBOX_AUTOCLOSE
# 415 "data/maps/Route119/scripts.pory"
	end
# 416 "data/maps/Route119/scripts.pory"

# 417 "data/maps/Route119/scripts.pory"
Route119_EventScript_Fabian::
# 418 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_FABIAN, Route119_Text_FabianIntro, Route119_Text_FabianDefeat
# 419 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_FabianPostBattle, MSGBOX_AUTOCLOSE
# 420 "data/maps/Route119/scripts.pory"
	end
# 421 "data/maps/Route119/scripts.pory"

# 422 "data/maps/Route119/scripts.pory"
Route119_EventScript_Dayton::
# 423 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DAYTON, Route119_Text_DaytonIntro, Route119_Text_DaytonDefeat
# 424 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DaytonPostBattle, MSGBOX_AUTOCLOSE
# 425 "data/maps/Route119/scripts.pory"
	end
# 426 "data/maps/Route119/scripts.pory"

# 427 "data/maps/Route119/scripts.pory"
Route119_EventScript_Rachel::
# 428 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_RACHEL, Route119_Text_RachelIntro, Route119_Text_RachelDefeat
# 429 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_RachelPostBattle, MSGBOX_AUTOCLOSE
# 430 "data/maps/Route119/scripts.pory"
	end
# 431 "data/maps/Route119/scripts.pory"

# 432 "data/maps/Route119/scripts.pory"
Route119_EventScript_BridgeAquaGrunt1::
# 433 "data/maps/Route119/scripts.pory"
	lock
# 434 "data/maps/Route119/scripts.pory"
	faceplayer
# 435 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_StayAwayFromWeatherInstitute, MSGBOX_DEFAULT
# 436 "data/maps/Route119/scripts.pory"
	closemessage
# 437 "data/maps/Route119/scripts.pory"
	applywaitmovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 438 "data/maps/Route119/scripts.pory"
	release
# 439 "data/maps/Route119/scripts.pory"
	end
# 440 "data/maps/Route119/scripts.pory"

# 441 "data/maps/Route119/scripts.pory"
Route119_EventScript_BridgeAquaGrunt2::
# 442 "data/maps/Route119/scripts.pory"
	lock
# 443 "data/maps/Route119/scripts.pory"
	faceplayer
# 444 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DontGoNearWeatherInstitute, MSGBOX_DEFAULT
# 445 "data/maps/Route119/scripts.pory"
	closemessage
# 446 "data/maps/Route119/scripts.pory"
	applywaitmovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 447 "data/maps/Route119/scripts.pory"
	release
# 448 "data/maps/Route119/scripts.pory"
	end
# 449 "data/maps/Route119/scripts.pory"

# 450 "data/maps/Route119/scripts.pory"
Route119_EventScript_Boy1::
# 451 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ThoughtFlyByCatchingBirdMons, MSGBOX_NPC
# 452 "data/maps/Route119/scripts.pory"
	end
# 453 "data/maps/Route119/scripts.pory"

# 454 "data/maps/Route119/scripts.pory"
Route119_EventScript_Boy2::
# 455 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CanYourMonMakeSecretBase, MSGBOX_NPC
# 456 "data/maps/Route119/scripts.pory"
	end
# 457 "data/maps/Route119/scripts.pory"

# 458 "data/maps/Route119/scripts.pory"
Route119_EventScript_TrainerTipsDecoration::
# 459 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TrainerTipsDecoration, MSGBOX_SIGN
# 460 "data/maps/Route119/scripts.pory"
	end
# 461 "data/maps/Route119/scripts.pory"

# 462 "data/maps/Route119/scripts.pory"
Route119_EventScript_ScottWonAtFortreeGymCall::
# 463 "data/maps/Route119/scripts.pory"
	lockall
# 464 "data/maps/Route119/scripts.pory"
	pokenavcall Route119_Text_ScottYouWonAtFortreeGym
# 465 "data/maps/Route119/scripts.pory"
	waitmessage
# 466 "data/maps/Route119/scripts.pory"
	clearflag FLAG_SCOTT_CALL_FORTREE_GYM
# 467 "data/maps/Route119/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 468 "data/maps/Route119/scripts.pory"
	releaseall
# 469 "data/maps/Route119/scripts.pory"
	end
# 470 "data/maps/Route119/scripts.pory"

# 471 "data/maps/Route119/scripts.pory"
Route119_Text_MayIntro:
# 472 "data/maps/Route119/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\n"
# 473 "data/maps/Route119/scripts.pory"
	.string "Where were you? I was looking for you!\p"
# 474 "data/maps/Route119/scripts.pory"
	.string "How much stronger have you gotten?\n"
# 475 "data/maps/Route119/scripts.pory"
	.string "Let me check for you!\p"
# 476 "data/maps/Route119/scripts.pory"
	.string "Ready with your POKéMON?\n"
# 477 "data/maps/Route119/scripts.pory"
	.string "Of course you are! Go!$"
# 478 "data/maps/Route119/scripts.pory"

# 479 "data/maps/Route119/scripts.pory"
Route119_Text_MayDefeat:
# 480 "data/maps/Route119/scripts.pory"
	.string "Achah!\n"
# 481 "data/maps/Route119/scripts.pory"
	.string "{PLAYER}{KUN}, you're strong!\p"
# 482 "data/maps/Route119/scripts.pory"
	.string "I was worried that you might be\n"
# 483 "data/maps/Route119/scripts.pory"
	.string "struggling with your training.$"
# 484 "data/maps/Route119/scripts.pory"

# 485 "data/maps/Route119/scripts.pory"
Route119_Text_MayPresentForYou:
# 486 "data/maps/Route119/scripts.pory"
	.string "MAY: But I had absolutely nothing to\n"
# 487 "data/maps/Route119/scripts.pory"
	.string "worry about! Keep it up!\p"
# 488 "data/maps/Route119/scripts.pory"
	.string "And, here! I have a present for you.$"
# 489 "data/maps/Route119/scripts.pory"

# 490 "data/maps/Route119/scripts.pory"
Route119_Text_MayExplainFly:
# 491 "data/maps/Route119/scripts.pory"
	.string "MAY: Use FLY, and your POKéMON will\n"
# 492 "data/maps/Route119/scripts.pory"
	.string "instantly carry you to any town you've\l"
# 493 "data/maps/Route119/scripts.pory"
	.string "already visited.\p"
# 494 "data/maps/Route119/scripts.pory"
	.string "But, to use FLY, you have to get\n"
# 495 "data/maps/Route119/scripts.pory"
	.string "the GYM BADGE from FORTREE CITY.\l"
# 496 "data/maps/Route119/scripts.pory"
	.string "That's important, so don't forget.\p"
# 497 "data/maps/Route119/scripts.pory"
	.string "You should FLY home and visit\n"
# 498 "data/maps/Route119/scripts.pory"
	.string "LITTLEROOT for a change.\p"
# 499 "data/maps/Route119/scripts.pory"
	.string "I bet your mom's worried about you,\n"
# 500 "data/maps/Route119/scripts.pory"
	.string "{PLAYER}{KUN}.\p"
# 501 "data/maps/Route119/scripts.pory"
	.string "Well, let's meet again somewhere!$"
# 502 "data/maps/Route119/scripts.pory"

# 503 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanIntro:
# 504 "data/maps/Route119/scripts.pory"
	.string "BRENDAN: {PLAYER}! So this is where\n"
# 505 "data/maps/Route119/scripts.pory"
	.string "you've been looking for POKéMON?\p"
# 506 "data/maps/Route119/scripts.pory"
	.string "Let me see how good you got.\n"
# 507 "data/maps/Route119/scripts.pory"
	.string "I'll test you!\p"
# 508 "data/maps/Route119/scripts.pory"
	.string "Now!\n"
# 509 "data/maps/Route119/scripts.pory"
	.string "It's a battle, so battle!$"
# 510 "data/maps/Route119/scripts.pory"

# 511 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanDefeat:
# 512 "data/maps/Route119/scripts.pory"
	.string "Hmm…\n"
# 513 "data/maps/Route119/scripts.pory"
	.string "You've gotten pretty darn decent.$"
# 514 "data/maps/Route119/scripts.pory"

# 515 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanIllGiveYouThis:
# 516 "data/maps/Route119/scripts.pory"
	.string "BRENDAN: I'd say you're good enough\n"
# 517 "data/maps/Route119/scripts.pory"
	.string "to search for POKéMON anywhere.\p"
# 518 "data/maps/Route119/scripts.pory"
	.string "Here, I'll give you this.\n"
# 519 "data/maps/Route119/scripts.pory"
	.string "Try it out.$"
# 520 "data/maps/Route119/scripts.pory"

# 521 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanExplainFly:
# 522 "data/maps/Route119/scripts.pory"
	.string "BRENDAN: Use FLY, and your POKéMON\n"
# 523 "data/maps/Route119/scripts.pory"
	.string "instantly carries you to any town\l"
# 524 "data/maps/Route119/scripts.pory"
	.string "you've already visited.\p"
# 525 "data/maps/Route119/scripts.pory"
	.string "But you need the FORTREE GYM BADGE \n"
# 526 "data/maps/Route119/scripts.pory"
	.string "to do that.\p"
# 527 "data/maps/Route119/scripts.pory"
	.string "Anyway, I have to move along.$"
# 528 "data/maps/Route119/scripts.pory"

# 529 "data/maps/Route119/scripts.pory"
Route119_Text_ScottWayToGoBeSeeingYou:
# 530 "data/maps/Route119/scripts.pory"
	.string "SCOTT: Hahahah!\n"
# 531 "data/maps/Route119/scripts.pory"
	.string "Way to go, {PLAYER}{KUN}!\p"
# 532 "data/maps/Route119/scripts.pory"
	.string "I just passed by a TRAINER riding\n"
# 533 "data/maps/Route119/scripts.pory"
	.string "a BIKE.\p"
# 534 "data/maps/Route119/scripts.pory"
	.string "You just beat that TRAINER, didn't you?\n"
# 535 "data/maps/Route119/scripts.pory"
	.string "It was pretty obvious that you did.\p"
# 536 "data/maps/Route119/scripts.pory"
	.string "The kid looked really upset with\n"
# 537 "data/maps/Route119/scripts.pory"
	.string "a face all red from anger.\p"
# 538 "data/maps/Route119/scripts.pory"
	.string "I sure seem to run into you often.\n"
# 539 "data/maps/Route119/scripts.pory"
	.string "Are you off to FORTREE GYM next?\p"
# 540 "data/maps/Route119/scripts.pory"
	.string "I expect that you'll do well at the GYM.\n"
# 541 "data/maps/Route119/scripts.pory"
	.string "Well, I'll be seeing you!$"
# 542 "data/maps/Route119/scripts.pory"

# 543 "data/maps/Route119/scripts.pory"

# 544 "data/maps/Route119/scripts.pory"
Route119_Text_ScottYouWonAtFortreeGym:
# 545 "data/maps/Route119/scripts.pory"
	.string "… … … … … …\n"
# 546 "data/maps/Route119/scripts.pory"
	.string "… … … … … Beep!\p"
# 547 "data/maps/Route119/scripts.pory"
	.string "SCOTT: Hiya, {PLAYER}{KUN}, it's me!\p"
# 548 "data/maps/Route119/scripts.pory"
	.string "Just as I thought, you won at\n"
# 549 "data/maps/Route119/scripts.pory"
	.string "the FORTREE GYM.\p"
# 550 "data/maps/Route119/scripts.pory"
	.string "Your strength…\n"
# 551 "data/maps/Route119/scripts.pory"
	.string "Perhaps you really are the TRAINER\l"
# 552 "data/maps/Route119/scripts.pory"
	.string "that I've been searching for.\p"
# 553 "data/maps/Route119/scripts.pory"
	.string "Remember, you have a fan in me.\n"
# 554 "data/maps/Route119/scripts.pory"
	.string "I'll be cheering from the sidelines.\l"
# 555 "data/maps/Route119/scripts.pory"
	.string "Keep up the great work!\p"
# 556 "data/maps/Route119/scripts.pory"
	.string "… … … … … …\n"
# 557 "data/maps/Route119/scripts.pory"
	.string "… … … … … Click!$"
# 558 "data/maps/Route119/scripts.pory"

# 559 "data/maps/Route119/scripts.pory"
Route119_Text_StayAwayFromWeatherInstitute:
# 560 "data/maps/Route119/scripts.pory"
	.string "We're standing lookout here.\p"
# 561 "data/maps/Route119/scripts.pory"
	.string "Hey, you! Stay away from the WEATHER\n"
# 562 "data/maps/Route119/scripts.pory"
	.string "INSTITUTE. It's not safe.$"
# 563 "data/maps/Route119/scripts.pory"

# 564 "data/maps/Route119/scripts.pory"
Route119_Text_DontGoNearWeatherInstitute:
# 565 "data/maps/Route119/scripts.pory"
	.string "Lookout duty is surprisingly boring.\p"
# 566 "data/maps/Route119/scripts.pory"
	.string "Hey, you! Please don't go near the\n"
# 567 "data/maps/Route119/scripts.pory"
	.string "WEATHER INSTITUTE.$"
# 568 "data/maps/Route119/scripts.pory"

# 569 "data/maps/Route119/scripts.pory"
Route119_Text_ThoughtFlyByCatchingBirdMons:
# 570 "data/maps/Route119/scripts.pory"
	.string "I thought you FLY by catching a whole\n"
# 571 "data/maps/Route119/scripts.pory"
	.string "flock of BIRD POKéMON, and then\l"
# 572 "data/maps/Route119/scripts.pory"
	.string "hanging on to them somehow.\p"
# 573 "data/maps/Route119/scripts.pory"
	.string "But it turns out there's an HM move\n"
# 574 "data/maps/Route119/scripts.pory"
	.string "called FLY!\p"
# 575 "data/maps/Route119/scripts.pory"
	.string "I wish I'd known about that a long\n"
# 576 "data/maps/Route119/scripts.pory"
	.string "time ago…$"
# 577 "data/maps/Route119/scripts.pory"

# 578 "data/maps/Route119/scripts.pory"
Route119_Text_TallGrassSnaresBikeTires:
# 579 "data/maps/Route119/scripts.pory"
	.string "Tch…\n"
# 580 "data/maps/Route119/scripts.pory"
	.string "It's a no-go…\p"
# 581 "data/maps/Route119/scripts.pory"
	.string "The tall grass snares BIKE tires.\n"
# 582 "data/maps/Route119/scripts.pory"
	.string "There's no way you can cycle here.$"
# 583 "data/maps/Route119/scripts.pory"

# 584 "data/maps/Route119/scripts.pory"
Route119_Text_CanYourMonMakeSecretBase:
# 585 "data/maps/Route119/scripts.pory"
	.string "Can your POKéMON use its SECRET POWER\n"
# 586 "data/maps/Route119/scripts.pory"
	.string "on a big pile of grass and make a\l"
# 587 "data/maps/Route119/scripts.pory"
	.string "SECRET BASE?$"
# 588 "data/maps/Route119/scripts.pory"

# 589 "data/maps/Route119/scripts.pory"
Route119_Text_RouteSignFortree:
# 590 "data/maps/Route119/scripts.pory"
	.string "ROUTE 119\n"
# 591 "data/maps/Route119/scripts.pory"
	.string "{RIGHT_ARROW} FORTREE CITY$"
# 592 "data/maps/Route119/scripts.pory"

# 593 "data/maps/Route119/scripts.pory"
Route119_Text_WeatherInstitute:
# 594 "data/maps/Route119/scripts.pory"
	.string "WEATHER INSTITUTE$"
# 595 "data/maps/Route119/scripts.pory"

# 596 "data/maps/Route119/scripts.pory"
Route119_Text_TrainerTipsDecoration:
# 597 "data/maps/Route119/scripts.pory"
	.string "TRAINER TIPS\p"
# 598 "data/maps/Route119/scripts.pory"
	.string "Up to sixteen decorations and\n"
# 599 "data/maps/Route119/scripts.pory"
	.string "furniture items can be placed in\l"
# 600 "data/maps/Route119/scripts.pory"
	.string "a SECRET BASE.\p"
# 601 "data/maps/Route119/scripts.pory"
	.string "Pick your favorite items and create\n"
# 602 "data/maps/Route119/scripts.pory"
	.string "your very own SECRET BASE exactly the\l"
# 603 "data/maps/Route119/scripts.pory"
	.string "way you want.$"
