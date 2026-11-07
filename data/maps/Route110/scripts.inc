# 1 "data/maps/Route110/scripts.pory"

# 2 "data/maps/Route110/scripts.pory"
Route110_MapScripts::
# 3 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_OnResume
# 4 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_OnTransition
# 5 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_OnFrame
# 6 "data/maps/Route110/scripts.pory"
	.byte 0
# 7 "data/maps/Route110/scripts.pory"

# 8 "data/maps/Route110/scripts.pory"
Route110_OnResume:
# 9 "data/maps/Route110/scripts.pory"
	special UpdateCyclingRoadState
# 10 "data/maps/Route110/scripts.pory"
	end
# 11 "data/maps/Route110/scripts.pory"

# 12 "data/maps/Route110/scripts.pory"
Route110_OnTransition:
# 13 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 14 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 15 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_SaveCyclingMusic
# 16 "data/maps/Route110/scripts.pory"
	end
# 17 "data/maps/Route110/scripts.pory"

# 18 "data/maps/Route110/scripts.pory"
Route110_EventScript_SaveCyclingMusic::
# 19 "data/maps/Route110/scripts.pory"
	savebgm MUS_CYCLING
# 20 "data/maps/Route110/scripts.pory"
	return
# 21 "data/maps/Route110/scripts.pory"

# 22 "data/maps/Route110/scripts.pory"
Route110_OnFrame:
# 23 "data/maps/Route110/scripts.pory"
	map_script_2 VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_BeginCylcingRoadChallenge
# 24 "data/maps/Route110/scripts.pory"
	.2byte 0
# 25 "data/maps/Route110/scripts.pory"

# 26 "data/maps/Route110/scripts.pory"
Route110_EventScript_BeginCylcingRoadChallenge::
# 27 "data/maps/Route110/scripts.pory"
	special Special_BeginCyclingRoadChallenge
# 28 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 2
# 29 "data/maps/Route110/scripts.pory"
	return
# 30 "data/maps/Route110/scripts.pory"

# 31 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt1::
# 32 "data/maps/Route110/scripts.pory"
	lock
# 33 "data/maps/Route110/scripts.pory"
	faceplayer
# 34 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WeCantTalkAboutAquaActivities, MSGBOX_DEFAULT
# 35 "data/maps/Route110/scripts.pory"
	applywaitmovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 36 "data/maps/Route110/scripts.pory"
	release
# 37 "data/maps/Route110/scripts.pory"
	end
# 38 "data/maps/Route110/scripts.pory"

# 39 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt2::
# 40 "data/maps/Route110/scripts.pory"
	lock
# 41 "data/maps/Route110/scripts.pory"
	faceplayer
# 42 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KickUpARuckus, MSGBOX_DEFAULT
# 43 "data/maps/Route110/scripts.pory"
	applywaitmovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 44 "data/maps/Route110/scripts.pory"
	release
# 45 "data/maps/Route110/scripts.pory"
	end
# 46 "data/maps/Route110/scripts.pory"

# 47 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt3::
# 48 "data/maps/Route110/scripts.pory"
	lock
# 49 "data/maps/Route110/scripts.pory"
	faceplayer
# 50 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MyFirstJobInAqua, MSGBOX_DEFAULT
# 51 "data/maps/Route110/scripts.pory"
	applywaitmovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 52 "data/maps/Route110/scripts.pory"
	release
# 53 "data/maps/Route110/scripts.pory"
	end
# 54 "data/maps/Route110/scripts.pory"

# 55 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt4::
# 56 "data/maps/Route110/scripts.pory"
	lock
# 57 "data/maps/Route110/scripts.pory"
	faceplayer
# 58 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaActionsBringSmiles, MSGBOX_DEFAULT
# 59 "data/maps/Route110/scripts.pory"
	applywaitmovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 60 "data/maps/Route110/scripts.pory"
	release
# 61 "data/maps/Route110/scripts.pory"
	end
# 62 "data/maps/Route110/scripts.pory"

# 63 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy1::
# 64 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RideBikeAtFullSpeed, MSGBOX_NPC
# 65 "data/maps/Route110/scripts.pory"
	end
# 66 "data/maps/Route110/scripts.pory"

# 67 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGirl1::
# 68 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HairStreamsBehindMe, MSGBOX_NPC
# 69 "data/maps/Route110/scripts.pory"
	end
# 70 "data/maps/Route110/scripts.pory"

# 71 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy1::
# 72 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_YouGotBikeFromRydel, MSGBOX_NPC
# 73 "data/maps/Route110/scripts.pory"
	end
# 74 "data/maps/Route110/scripts.pory"

# 75 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldMan::
# 76 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TwoRoads, MSGBOX_NPC
# 77 "data/maps/Route110/scripts.pory"
	end
# 78 "data/maps/Route110/scripts.pory"

# 79 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldWoman::
# 80 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WalkOnTheLowRoad, MSGBOX_NPC
# 81 "data/maps/Route110/scripts.pory"
	end
# 82 "data/maps/Route110/scripts.pory"

# 83 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy2::
# 84 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BikeTechniques, MSGBOX_NPC
# 85 "data/maps/Route110/scripts.pory"
	end
# 86 "data/maps/Route110/scripts.pory"

# 87 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy2::
# 88 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WhichShouldIChoose, MSGBOX_NPC
# 89 "data/maps/Route110/scripts.pory"
	end
# 90 "data/maps/Route110/scripts.pory"

# 91 "data/maps/Route110/scripts.pory"
Route110_EventScript_SlateportCitySign::
# 92 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SlateportCitySign, MSGBOX_SIGN
# 93 "data/maps/Route110/scripts.pory"
	end
# 94 "data/maps/Route110/scripts.pory"

# 95 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadSign::
# 96 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingRoadSign, MSGBOX_SIGN
# 97 "data/maps/Route110/scripts.pory"
	end
# 98 "data/maps/Route110/scripts.pory"

# 99 "data/maps/Route110/scripts.pory"
Route110_EventScript_VandalizedSign::
# 100 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaWasHere, MSGBOX_SIGN
# 101 "data/maps/Route110/scripts.pory"
	end
# 102 "data/maps/Route110/scripts.pory"

# 103 "data/maps/Route110/scripts.pory"
Route110_EventScript_Route103Sign::
# 104 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_Route103Sign, MSGBOX_SIGN
# 105 "data/maps/Route110/scripts.pory"
	end
# 106 "data/maps/Route110/scripts.pory"

# 107 "data/maps/Route110/scripts.pory"
Route110_EventScript_SeasideParkingSign::
# 108 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SeasideParkingSign, MSGBOX_SIGN
# 109 "data/maps/Route110/scripts.pory"
	end
# 110 "data/maps/Route110/scripts.pory"

# 111 "data/maps/Route110/scripts.pory"
Route110_EventScript_MauvilleCitySign::
# 112 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MauvilleCitySign, MSGBOX_SIGN
# 113 "data/maps/Route110/scripts.pory"
	end
# 114 "data/maps/Route110/scripts.pory"

# 115 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsPrlzSleep::
# 116 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsPrlzSleep, MSGBOX_SIGN
# 117 "data/maps/Route110/scripts.pory"
	end
# 118 "data/maps/Route110/scripts.pory"

# 119 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsRegisterItems::
# 120 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsRegisterItems, MSGBOX_SIGN
# 121 "data/maps/Route110/scripts.pory"
	end
# 122 "data/maps/Route110/scripts.pory"

# 123 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrickHouseSign::
# 124 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrickHouseSign, MSGBOX_SIGN
# 125 "data/maps/Route110/scripts.pory"
	end
# 126 "data/maps/Route110/scripts.pory"

# 127 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadResultsSign::
# 128 "data/maps/Route110/scripts.pory"
	lockall
# 129 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetRecordedCyclingRoadResults
# 130 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route110_EventScript_NoRecordSet
# 131 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BestRecord, MSGBOX_DEFAULT
# 132 "data/maps/Route110/scripts.pory"
	releaseall
# 133 "data/maps/Route110/scripts.pory"
	end
# 134 "data/maps/Route110/scripts.pory"

# 135 "data/maps/Route110/scripts.pory"
Route110_EventScript_NoRecordSet::
# 136 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ThereIsNoRecord, MSGBOX_DEFAULT
# 137 "data/maps/Route110/scripts.pory"
	releaseall
# 138 "data/maps/Route110/scripts.pory"
	end
# 139 "data/maps/Route110/scripts.pory"

# 140 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeGuy::
# 141 "data/maps/Route110/scripts.pory"
	lock
# 142 "data/maps/Route110/scripts.pory"
	faceplayer
# 143 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 144 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route110_EventScript_PlayerRidingAcroBike
# 145 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_CYCLING_CHALLENGE_STATE, 0, Route110_EventScript_PlayerNotRidingBike
# 146 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlwaysAimHigher, MSGBOX_DEFAULT
# 147 "data/maps/Route110/scripts.pory"
	release
# 148 "data/maps/Route110/scripts.pory"
	end
# 149 "data/maps/Route110/scripts.pory"

# 150 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerNotRidingBike::
# 151 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RatedForNumberOfCollisions, MSGBOX_DEFAULT
# 152 "data/maps/Route110/scripts.pory"
	release
# 153 "data/maps/Route110/scripts.pory"
	end
# 154 "data/maps/Route110/scripts.pory"

# 155 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerRidingAcroBike::
# 156 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AcroBikesDoNotQualify, MSGBOX_DEFAULT
# 157 "data/maps/Route110/scripts.pory"
	release
# 158 "data/maps/Route110/scripts.pory"
	end
# 159 "data/maps/Route110/scripts.pory"

# 160 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edward::
# 161 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWARD, Route110_Text_EdwardIntro, Route110_Text_EdwardDefeated
# 162 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwardPostBattle, MSGBOX_AUTOCLOSE
# 163 "data/maps/Route110/scripts.pory"
	end
# 164 "data/maps/Route110/scripts.pory"

# 165 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jaclyn::
# 166 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACLYN, Route110_Text_JaclynIntro, Route110_Text_JaclynDefeated
# 167 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JaclynPostBattle, MSGBOX_AUTOCLOSE
# 168 "data/maps/Route110/scripts.pory"
	end
# 169 "data/maps/Route110/scripts.pory"

# 170 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edwin::
# 171 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWIN_1, Route110_Text_EdwinIntro, Route110_Text_EdwinDefeated, Route110_EventScript_EdwinRegisterMatchCallAfterBattle
# 172 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 173 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_EdwinRematch
# 174 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinPostBattle, MSGBOX_DEFAULT
# 175 "data/maps/Route110/scripts.pory"
	release
# 176 "data/maps/Route110/scripts.pory"
	end
# 177 "data/maps/Route110/scripts.pory"

# 178 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRegisterMatchCallAfterBattle::
# 179 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 180 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 181 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRegister, MSGBOX_DEFAULT
# 182 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_EDWIN_1
# 183 "data/maps/Route110/scripts.pory"
	release
# 184 "data/maps/Route110/scripts.pory"
	end
# 185 "data/maps/Route110/scripts.pory"

# 186 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRematch::
# 187 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_EDWIN_1, Route110_Text_EdwinRematchIntro, Route110_Text_EdwinRematchDefeated
# 188 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRematchPostBattle, MSGBOX_AUTOCLOSE
# 189 "data/maps/Route110/scripts.pory"
	end
# 190 "data/maps/Route110/scripts.pory"

# 191 "data/maps/Route110/scripts.pory"
Route110_EventScript_Dale::
# 192 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_DALE, Route110_Text_DaleIntro, Route110_Text_DaleDefeated
# 193 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_DalePostBattle, MSGBOX_AUTOCLOSE
# 194 "data/maps/Route110/scripts.pory"
	end
# 195 "data/maps/Route110/scripts.pory"

# 196 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jacob::
# 197 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACOB, Route110_Text_JacobIntro, Route110_Text_JacobDefeated
# 198 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
# 199 "data/maps/Route110/scripts.pory"
	end
# 200 "data/maps/Route110/scripts.pory"

# 201 "data/maps/Route110/scripts.pory"
Route110_EventScript_Anthony::
# 202 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ANTHONY, Route110_Text_AnthonyIntro, Route110_Text_AnthonyDefeated
# 203 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 204 "data/maps/Route110/scripts.pory"
	end
# 205 "data/maps/Route110/scripts.pory"

# 206 "data/maps/Route110/scripts.pory"
Route110_EventScript_Benjamin::
# 207 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_BENJAMIN_1, Route110_Text_BenjaminIntro, Route110_Text_BenjaminDefeated, Route110_EventScript_BenjaminRegisterMatchCallAfterBattle
# 208 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 209 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_BenjaminRematch
# 210 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminPostBattle, MSGBOX_DEFAULT
# 211 "data/maps/Route110/scripts.pory"
	release
# 212 "data/maps/Route110/scripts.pory"
	end
# 213 "data/maps/Route110/scripts.pory"

# 214 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRegisterMatchCallAfterBattle::
# 215 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 216 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 217 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRegister, MSGBOX_DEFAULT
# 218 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_BENJAMIN_1
# 219 "data/maps/Route110/scripts.pory"
	release
# 220 "data/maps/Route110/scripts.pory"
	end
# 221 "data/maps/Route110/scripts.pory"

# 222 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRematch::
# 223 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_BENJAMIN_1, Route110_Text_BenjaminRematchIntro, Route110_Text_BenjaminRematchDefeated
# 224 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRematchPostBattle, MSGBOX_AUTOCLOSE
# 225 "data/maps/Route110/scripts.pory"
	end
# 226 "data/maps/Route110/scripts.pory"

# 227 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jasmine::
# 228 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JASMINE, Route110_Text_JasmineIntro, Route110_Text_JasmineDefeated
# 229 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
# 230 "data/maps/Route110/scripts.pory"
	end
# 231 "data/maps/Route110/scripts.pory"

# 232 "data/maps/Route110/scripts.pory"
Route110_EventScript_Abigail::
# 233 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ABIGAIL_1, Route110_Text_AbigailIntro, Route110_Text_AbigailDefeated, Route110_EventScript_AbigailRegisterMatchCallAfterBattle
# 234 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 235 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_AbigailRematch
# 236 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailPostBattle, MSGBOX_DEFAULT
# 237 "data/maps/Route110/scripts.pory"
	release
# 238 "data/maps/Route110/scripts.pory"
	end
# 239 "data/maps/Route110/scripts.pory"

# 240 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRegisterMatchCallAfterBattle::
# 241 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 242 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 243 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRegister, MSGBOX_DEFAULT
# 244 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ABIGAIL_1
# 245 "data/maps/Route110/scripts.pory"
	release
# 246 "data/maps/Route110/scripts.pory"
	end
# 247 "data/maps/Route110/scripts.pory"

# 248 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRematch::
# 249 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ABIGAIL_1, Route110_Text_AbigailRematchIntro, Route110_Text_AbigailRematchDefeated
# 250 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRematchPostBattle, MSGBOX_AUTOCLOSE
# 251 "data/maps/Route110/scripts.pory"
	end
# 252 "data/maps/Route110/scripts.pory"

# 253 "data/maps/Route110/scripts.pory"
Route110_EventScript_Isabel::
# 254 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ISABEL_1, Route110_Text_IsabelIntro, Route110_Text_IsabelDefeated, Route110_EventScript_IsabelRegisterMatchCallAfterBattle
# 255 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 256 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_IsabelRematch
# 257 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelPostBattle, MSGBOX_DEFAULT
# 258 "data/maps/Route110/scripts.pory"
	release
# 259 "data/maps/Route110/scripts.pory"
	end
# 260 "data/maps/Route110/scripts.pory"

# 261 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRegisterMatchCallAfterBattle::
# 262 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 263 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 264 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRegister, MSGBOX_DEFAULT
# 265 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ISABEL_1
# 266 "data/maps/Route110/scripts.pory"
	release
# 267 "data/maps/Route110/scripts.pory"
	end
# 268 "data/maps/Route110/scripts.pory"

# 269 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRematch::
# 270 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ISABEL_1, Route110_Text_IsabelRematchIntro, Route110_Text_IsabelRematchDefeated
# 271 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRematchPostBattle, MSGBOX_AUTOCLOSE
# 272 "data/maps/Route110/scripts.pory"
	end
# 273 "data/maps/Route110/scripts.pory"

# 274 "data/maps/Route110/scripts.pory"
Route110_EventScript_Timmy::
# 275 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_TIMMY, Route110_Text_TimmyIntro, Route110_Text_TimmyDefeated
# 276 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
# 277 "data/maps/Route110/scripts.pory"
	end
# 278 "data/maps/Route110/scripts.pory"

# 279 "data/maps/Route110/scripts.pory"
Route110_EventScript_Unused::
# 280 "data/maps/Route110/scripts.pory"
	end
# 281 "data/maps/Route110/scripts.pory"

# 282 "data/maps/Route110/scripts.pory"
Route110_EventScript_Kaleb::
# 283 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_KALEB, Route110_Text_KalebIntro, Route110_Text_KalebDefeated
# 284 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KalebPostBattle, MSGBOX_AUTOCLOSE
# 285 "data/maps/Route110/scripts.pory"
	end
# 286 "data/maps/Route110/scripts.pory"

# 287 "data/maps/Route110/scripts.pory"
Route110_EventScript_Joseph::
# 288 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JOSEPH, Route110_Text_JosephIntro, Route110_Text_JosephDefeated
# 289 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
# 290 "data/maps/Route110/scripts.pory"
	end
# 291 "data/maps/Route110/scripts.pory"

# 292 "data/maps/Route110/scripts.pory"
Route110_EventScript_Alyssa::
# 293 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ALYSSA, Route110_Text_AlyssaIntro, Route110_Text_AlyssaDefeated
# 294 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlyssaPostBattle, MSGBOX_AUTOCLOSE
# 295 "data/maps/Route110/scripts.pory"
	end
# 296 "data/maps/Route110/scripts.pory"

# 297 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeEnd::
# 298 "data/maps/Route110/scripts.pory"
	lockall
# 299 "data/maps/Route110/scripts.pory"
	applywaitmovement LOCALID_CHALLENGE_BIKER, Common_Movement_WalkInPlaceFasterRight
# 300 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_CyclingChallengeResults
# 301 "data/maps/Route110/scripts.pory"
	releaseall
# 302 "data/maps/Route110/scripts.pory"
	end
# 303 "data/maps/Route110/scripts.pory"

# 304 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults::
# 305 "data/maps/Route110/scripts.pory"
	special FinishCyclingRoadChallenge
# 306 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingChallengeResultSummary, MSGBOX_DEFAULT
# 307 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 308 "data/maps/Route110/scripts.pory"
	case 10, Route110_EventScript_ChallengeReactionBest
# 309 "data/maps/Route110/scripts.pory"
	case 9, Route110_EventScript_ChallengeReactionGood
# 310 "data/maps/Route110/scripts.pory"
	case 8, Route110_EventScript_ChallengeReactionGood
# 311 "data/maps/Route110/scripts.pory"
	case 7, Route110_EventScript_ChallengeReactionGood
# 312 "data/maps/Route110/scripts.pory"
	case 6, Route110_EventScript_ChallengeReactionOk
# 313 "data/maps/Route110/scripts.pory"
	case 5, Route110_EventScript_ChallengeReactionOk
# 314 "data/maps/Route110/scripts.pory"
	case 4, Route110_EventScript_ChallengeReactionOk
# 315 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_ChallengeReactionBad
# 316 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_ChallengeReactionBad
# 317 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_ChallengeReactionBad
# 318 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_ChallengeReactionWorst
# 319 "data/maps/Route110/scripts.pory"
	end
# 320 "data/maps/Route110/scripts.pory"

# 321 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBest::
# 322 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBest, MSGBOX_DEFAULT
# 323 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 324 "data/maps/Route110/scripts.pory"
	end
# 325 "data/maps/Route110/scripts.pory"

# 326 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionGood::
# 327 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionGood, MSGBOX_DEFAULT
# 328 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 329 "data/maps/Route110/scripts.pory"
	end
# 330 "data/maps/Route110/scripts.pory"

# 331 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionOk::
# 332 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionOk, MSGBOX_DEFAULT
# 333 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 334 "data/maps/Route110/scripts.pory"
	end
# 335 "data/maps/Route110/scripts.pory"

# 336 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBad::
# 337 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBad, MSGBOX_DEFAULT
# 338 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 339 "data/maps/Route110/scripts.pory"
	end
# 340 "data/maps/Route110/scripts.pory"

# 341 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionWorst::
# 342 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionWorst, MSGBOX_DEFAULT
# 343 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 344 "data/maps/Route110/scripts.pory"
	end
# 345 "data/maps/Route110/scripts.pory"

# 346 "data/maps/Route110/scripts.pory"
Route110_EventScript_EndChallenge::
# 347 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 3
# 348 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 349 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 350 "data/maps/Route110/scripts.pory"
	return
# 351 "data/maps/Route110/scripts.pory"

# 352 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger1::
# 353 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 354 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 355 "data/maps/Route110/scripts.pory"
	end
# 356 "data/maps/Route110/scripts.pory"

# 357 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger2::
# 358 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 359 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 360 "data/maps/Route110/scripts.pory"
	end
# 361 "data/maps/Route110/scripts.pory"

# 362 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger3::
# 363 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 364 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 365 "data/maps/Route110/scripts.pory"
	end
# 366 "data/maps/Route110/scripts.pory"

# 367 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene::
# 368 "data/maps/Route110/scripts.pory"
	lockall
# 369 "data/maps/Route110/scripts.pory"
	checkplayergender
# 370 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route110_EventScript_PlayMayMusic
# 371 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route110_EventScript_PlayBrendanMusic
# 372 "data/maps/Route110/scripts.pory"
	applywaitmovement LOCALID_ROUTE110_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 373 "data/maps/Route110/scripts.pory"
	applywaitmovement LOCALID_ROUTE110_RIVAL, Common_Movement_ExclamationMark
# 374 "data/maps/Route110/scripts.pory"
	applywaitmovement LOCALID_ROUTE110_RIVAL, Common_Movement_Delay48
# 375 "data/maps/Route110/scripts.pory"
	delay 30
# 376 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalApproachPlayer1
# 377 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalApproachPlayer2
# 378 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalApproachPlayer3
# 379 "data/maps/Route110/scripts.pory"
	checkplayergender
# 380 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route110_EventScript_MayBattle
# 381 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route110_EventScript_BrendanBattle
# 382 "data/maps/Route110/scripts.pory"
	releaseall
# 383 "data/maps/Route110/scripts.pory"
	end
# 384 "data/maps/Route110/scripts.pory"

# 385 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayMayMusic::
# 386 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 387 "data/maps/Route110/scripts.pory"
	return
# 388 "data/maps/Route110/scripts.pory"

# 389 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayBrendanMusic::
# 390 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 391 "data/maps/Route110/scripts.pory"
	return
# 392 "data/maps/Route110/scripts.pory"

# 393 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattle::
# 394 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayLetsBattle, MSGBOX_DEFAULT
# 395 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 396 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_MayBattleTreecko
# 397 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_MayBattleTorchic
# 398 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_MayBattleMudkip
# 399 "data/maps/Route110/scripts.pory"
	end
# 400 "data/maps/Route110/scripts.pory"

# 401 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTreecko::
# 402 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TREECKO, Route110_Text_MayDefeated
# 403 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 404 "data/maps/Route110/scripts.pory"
	end
# 405 "data/maps/Route110/scripts.pory"

# 406 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTorchic::
# 407 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TORCHIC, Route110_Text_MayDefeated
# 408 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 409 "data/maps/Route110/scripts.pory"
	end
# 410 "data/maps/Route110/scripts.pory"

# 411 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleMudkip::
# 412 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_MUDKIP, Route110_Text_MayDefeated
# 413 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 414 "data/maps/Route110/scripts.pory"
	end
# 415 "data/maps/Route110/scripts.pory"

# 416 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayDefeated::
# 417 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayTakeThis, MSGBOX_DEFAULT
# 418 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 419 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayExplainItemfinder, MSGBOX_DEFAULT
# 420 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 421 "data/maps/Route110/scripts.pory"
	end
# 422 "data/maps/Route110/scripts.pory"

# 423 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattle::
# 424 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 425 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 426 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_BrendanBattleTreecko
# 427 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_BrendanBattleTorchic
# 428 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_BrendanBattleMudkip
# 429 "data/maps/Route110/scripts.pory"
	end
# 430 "data/maps/Route110/scripts.pory"

# 431 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTreecko::
# 432 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TREECKO, Route110_Text_BrendanDefeated
# 433 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 434 "data/maps/Route110/scripts.pory"
	end
# 435 "data/maps/Route110/scripts.pory"

# 436 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTorchic::
# 437 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TORCHIC, Route110_Text_BrendanDefeated
# 438 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 439 "data/maps/Route110/scripts.pory"
	end
# 440 "data/maps/Route110/scripts.pory"

# 441 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleMudkip::
# 442 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_MUDKIP, Route110_Text_BrendanDefeated
# 443 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 444 "data/maps/Route110/scripts.pory"
	end
# 445 "data/maps/Route110/scripts.pory"

# 446 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanDefeated::
# 447 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanTakeThis, MSGBOX_DEFAULT
# 448 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 449 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanExplainItemfinder, MSGBOX_DEFAULT
# 450 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 451 "data/maps/Route110/scripts.pory"
	end
# 452 "data/maps/Route110/scripts.pory"

# 453 "data/maps/Route110/scripts.pory"
Route110_EventScript_GiveItemfinder::
# 454 "data/maps/Route110/scripts.pory"
	giveitem ITEM_ITEMFINDER
# 455 "data/maps/Route110/scripts.pory"
	return
# 456 "data/maps/Route110/scripts.pory"

# 457 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit::
# 458 "data/maps/Route110/scripts.pory"
	closemessage
# 459 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_MoveRival1
# 460 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_MoveRival2
# 461 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_MoveRival3
# 462 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE110_RIVAL, MOVEMENT_TYPE_FACE_RIGHT
# 463 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE110_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_RIGHT
# 464 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_ROUTE110_RIVAL
# 465 "data/maps/Route110/scripts.pory"
	addobject LOCALID_ROUTE110_RIVAL_ON_BIKE
# 466 "data/maps/Route110/scripts.pory"
	delay 45
# 467 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalExit1
# 468 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalExit2
# 469 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalExit3
# 470 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_ROUTE110_RIVAL_ON_BIKE
# 471 "data/maps/Route110/scripts.pory"
	setvar VAR_ROUTE110_STATE, 1
# 472 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 473 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 474 "data/maps/Route110/scripts.pory"
	releaseall
# 475 "data/maps/Route110/scripts.pory"
	end
# 476 "data/maps/Route110/scripts.pory"

# 477 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer1::
# 478 "data/maps/Route110/scripts.pory"
	applywaitmovement LOCALID_ROUTE110_RIVAL, Route110_Movement_RivalApproachPlayer1
# 479 "data/maps/Route110/scripts.pory"
	return
# 480 "data/maps/Route110/scripts.pory"

# 481 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer2::
# 482 "data/maps/Route110/scripts.pory"
	applywaitmovement LOCALID_ROUTE110_RIVAL, Route110_Movement_RivalApproachPlayer2
# 483 "data/maps/Route110/scripts.pory"
	return
# 484 "data/maps/Route110/scripts.pory"

# 485 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer3::
# 486 "data/maps/Route110/scripts.pory"
	applywaitmovement LOCALID_ROUTE110_RIVAL, Route110_Movement_RivalApproachPlayer3
# 487 "data/maps/Route110/scripts.pory"
	return
# 488 "data/maps/Route110/scripts.pory"

# 489 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit1::
# 490 "data/maps/Route110/scripts.pory"
	applywaitmovement LOCALID_ROUTE110_RIVAL_ON_BIKE, Route110_Movement_RivalExit1
# 491 "data/maps/Route110/scripts.pory"
	return
# 492 "data/maps/Route110/scripts.pory"

# 493 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit2::
# 494 "data/maps/Route110/scripts.pory"
	applywaitmovement LOCALID_ROUTE110_RIVAL_ON_BIKE, Route110_Movement_RivalExit2
# 495 "data/maps/Route110/scripts.pory"
	return
# 496 "data/maps/Route110/scripts.pory"

# 497 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit3::
# 498 "data/maps/Route110/scripts.pory"
	applywaitmovement LOCALID_ROUTE110_RIVAL_ON_BIKE, Route110_Movement_RivalExit3
# 499 "data/maps/Route110/scripts.pory"
	return
# 500 "data/maps/Route110/scripts.pory"

# 501 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival1::
# 502 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_RIVAL_ON_BIKE, 33, 55
# 503 "data/maps/Route110/scripts.pory"
	return
# 504 "data/maps/Route110/scripts.pory"

# 505 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival2::
# 506 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_RIVAL_ON_BIKE, 34, 55
# 507 "data/maps/Route110/scripts.pory"
	return
# 508 "data/maps/Route110/scripts.pory"

# 509 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival3::
# 510 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_RIVAL_ON_BIKE, 35, 55
# 511 "data/maps/Route110/scripts.pory"
	return
# 512 "data/maps/Route110/scripts.pory"

# 513 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer1:
# 514 "data/maps/Route110/scripts.pory"
	walk_down
# 515 "data/maps/Route110/scripts.pory"
	walk_left
# 516 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 517 "data/maps/Route110/scripts.pory"
	step_end
# 518 "data/maps/Route110/scripts.pory"

# 519 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer2:
# 520 "data/maps/Route110/scripts.pory"
	walk_down
# 521 "data/maps/Route110/scripts.pory"
	step_end
# 522 "data/maps/Route110/scripts.pory"

# 523 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer3:
# 524 "data/maps/Route110/scripts.pory"
	walk_down
# 525 "data/maps/Route110/scripts.pory"
	walk_right
# 526 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 527 "data/maps/Route110/scripts.pory"
	step_end
# 528 "data/maps/Route110/scripts.pory"

# 529 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit1:
# 530 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 531 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 532 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 533 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 534 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 535 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 536 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 537 "data/maps/Route110/scripts.pory"
	step_end
# 538 "data/maps/Route110/scripts.pory"

# 539 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit2:
# 540 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 541 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 542 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 543 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 544 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 545 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 546 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 547 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 548 "data/maps/Route110/scripts.pory"
	step_end
# 549 "data/maps/Route110/scripts.pory"

# 550 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit3:
# 551 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 552 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 553 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 554 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 555 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 556 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 557 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 558 "data/maps/Route110/scripts.pory"
	step_end
# 559 "data/maps/Route110/scripts.pory"

# 560 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene1::
# 561 "data/maps/Route110/scripts.pory"
	lockall
# 562 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 563 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 564 "data/maps/Route110/scripts.pory"

# 565 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene2::
# 566 "data/maps/Route110/scripts.pory"
	lockall
# 567 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 568 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 569 "data/maps/Route110/scripts.pory"

# 570 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene3::
# 571 "data/maps/Route110/scripts.pory"
	lockall
# 572 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 573 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 574 "data/maps/Route110/scripts.pory"

# 575 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene4::
# 576 "data/maps/Route110/scripts.pory"
	lockall
# 577 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 4
# 578 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 579 "data/maps/Route110/scripts.pory"

# 580 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene::
# 581 "data/maps/Route110/scripts.pory"
	addobject LOCALID_ROUTE110_BIRCH
# 582 "data/maps/Route110/scripts.pory"
	applywaitmovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchEntrance
# 583 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 584 "data/maps/Route110/scripts.pory"
	applywaitmovement LOCALID_ROUTE110_BIRCH, Common_Movement_ExclamationMark
# 585 "data/maps/Route110/scripts.pory"
	applywaitmovement LOCALID_ROUTE110_BIRCH, Common_Movement_Delay48
# 586 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchApproachPlayer1
# 587 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchApproachPlayer2
# 588 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchApproachPlayer3
# 589 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchApproachPlayer4
# 590 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ImagineSeeingYouHere, MSGBOX_DEFAULT
# 591 "data/maps/Route110/scripts.pory"
	closemessage
# 592 "data/maps/Route110/scripts.pory"
	delay 20
# 593 "data/maps/Route110/scripts.pory"
	applywaitmovement LOCALID_ROUTE110_BIRCH, Common_Movement_WalkInPlaceFasterLeft
# 594 "data/maps/Route110/scripts.pory"
	delay 10
# 595 "data/maps/Route110/scripts.pory"
	applywaitmovement LOCALID_ROUTE110_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 596 "data/maps/Route110/scripts.pory"
	delay 20
# 597 "data/maps/Route110/scripts.pory"
	applywaitmovement LOCALID_ROUTE110_BIRCH, Common_Movement_WalkInPlaceFasterDown
# 598 "data/maps/Route110/scripts.pory"
	delay 30
# 599 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HeardYouInstallMatchCall, MSGBOX_DEFAULT
# 600 "data/maps/Route110/scripts.pory"
	closemessage
# 601 "data/maps/Route110/scripts.pory"
	delay 30
# 602 "data/maps/Route110/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 603 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RegisteredBirchInPokenav, MSGBOX_DEFAULT
# 604 "data/maps/Route110/scripts.pory"
	waitfanfare
# 605 "data/maps/Route110/scripts.pory"
	closemessage
# 606 "data/maps/Route110/scripts.pory"
	delay 30
# 607 "data/maps/Route110/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 608 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KeepAnEyeOutForRival, MSGBOX_DEFAULT
# 609 "data/maps/Route110/scripts.pory"
	closemessage
# 610 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchExit1
# 611 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchExit2
# 612 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchExit3
# 613 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchExit4
# 614 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_ROUTE110_BIRCH
# 615 "data/maps/Route110/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 616 "data/maps/Route110/scripts.pory"
	releaseall
# 617 "data/maps/Route110/scripts.pory"
	end
# 618 "data/maps/Route110/scripts.pory"

# 619 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer1::
# 620 "data/maps/Route110/scripts.pory"
	applywaitmovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer1
# 621 "data/maps/Route110/scripts.pory"
	return
# 622 "data/maps/Route110/scripts.pory"

# 623 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer2::
# 624 "data/maps/Route110/scripts.pory"
	applywaitmovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer2
# 625 "data/maps/Route110/scripts.pory"
	return
# 626 "data/maps/Route110/scripts.pory"

# 627 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer3::
# 628 "data/maps/Route110/scripts.pory"
	applywaitmovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer3
# 629 "data/maps/Route110/scripts.pory"
	return
# 630 "data/maps/Route110/scripts.pory"

# 631 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer4::
# 632 "data/maps/Route110/scripts.pory"
	applywaitmovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer4
# 633 "data/maps/Route110/scripts.pory"
	return
# 634 "data/maps/Route110/scripts.pory"

# 635 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit1::
# 636 "data/maps/Route110/scripts.pory"
	applywaitmovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchExit1
# 637 "data/maps/Route110/scripts.pory"
	return
# 638 "data/maps/Route110/scripts.pory"

# 639 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit2::
# 640 "data/maps/Route110/scripts.pory"
	applywaitmovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchExit2
# 641 "data/maps/Route110/scripts.pory"
	return
# 642 "data/maps/Route110/scripts.pory"

# 643 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit3::
# 644 "data/maps/Route110/scripts.pory"
	applywaitmovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchExit3
# 645 "data/maps/Route110/scripts.pory"
	return
# 646 "data/maps/Route110/scripts.pory"

# 647 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit4::
# 648 "data/maps/Route110/scripts.pory"
	applywaitmovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchExit4
# 649 "data/maps/Route110/scripts.pory"
	return
# 650 "data/maps/Route110/scripts.pory"

# 651 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchEntrance:
# 652 "data/maps/Route110/scripts.pory"
	walk_down
# 653 "data/maps/Route110/scripts.pory"
	walk_down
# 654 "data/maps/Route110/scripts.pory"
	walk_down
# 655 "data/maps/Route110/scripts.pory"
	step_end
# 656 "data/maps/Route110/scripts.pory"

# 657 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer1:
# 658 "data/maps/Route110/scripts.pory"
	walk_down
# 659 "data/maps/Route110/scripts.pory"
	walk_left
# 660 "data/maps/Route110/scripts.pory"
	walk_left
# 661 "data/maps/Route110/scripts.pory"
	walk_down
# 662 "data/maps/Route110/scripts.pory"
	step_end
# 663 "data/maps/Route110/scripts.pory"

# 664 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer2:
# 665 "data/maps/Route110/scripts.pory"
	walk_down
# 666 "data/maps/Route110/scripts.pory"
	walk_left
# 667 "data/maps/Route110/scripts.pory"
	walk_down
# 668 "data/maps/Route110/scripts.pory"
	step_end
# 669 "data/maps/Route110/scripts.pory"

# 670 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer3:
# 671 "data/maps/Route110/scripts.pory"
	walk_down
# 672 "data/maps/Route110/scripts.pory"
	walk_down
# 673 "data/maps/Route110/scripts.pory"
	step_end
# 674 "data/maps/Route110/scripts.pory"

# 675 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer4:
# 676 "data/maps/Route110/scripts.pory"
	walk_down
# 677 "data/maps/Route110/scripts.pory"
	walk_right
# 678 "data/maps/Route110/scripts.pory"
	walk_down
# 679 "data/maps/Route110/scripts.pory"
	step_end
# 680 "data/maps/Route110/scripts.pory"

# 681 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit1:
# 682 "data/maps/Route110/scripts.pory"
	walk_up
# 683 "data/maps/Route110/scripts.pory"
	walk_up
# 684 "data/maps/Route110/scripts.pory"
	walk_right
# 685 "data/maps/Route110/scripts.pory"
	walk_up
# 686 "data/maps/Route110/scripts.pory"
	walk_up
# 687 "data/maps/Route110/scripts.pory"
	walk_up
# 688 "data/maps/Route110/scripts.pory"
	step_end
# 689 "data/maps/Route110/scripts.pory"

# 690 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit2:
# 691 "data/maps/Route110/scripts.pory"
	walk_up
# 692 "data/maps/Route110/scripts.pory"
	walk_up
# 693 "data/maps/Route110/scripts.pory"
	walk_up
# 694 "data/maps/Route110/scripts.pory"
	walk_up
# 695 "data/maps/Route110/scripts.pory"
	walk_up
# 696 "data/maps/Route110/scripts.pory"
	step_end
# 697 "data/maps/Route110/scripts.pory"

# 698 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit3:
# 699 "data/maps/Route110/scripts.pory"
	walk_up
# 700 "data/maps/Route110/scripts.pory"
	walk_up
# 701 "data/maps/Route110/scripts.pory"
	walk_up
# 702 "data/maps/Route110/scripts.pory"
	walk_up
# 703 "data/maps/Route110/scripts.pory"
	walk_up
# 704 "data/maps/Route110/scripts.pory"
	step_end
# 705 "data/maps/Route110/scripts.pory"

# 706 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit4:
# 707 "data/maps/Route110/scripts.pory"
	walk_up
# 708 "data/maps/Route110/scripts.pory"
	walk_up
# 709 "data/maps/Route110/scripts.pory"
	walk_up
# 710 "data/maps/Route110/scripts.pory"
	walk_up
# 711 "data/maps/Route110/scripts.pory"
	walk_up
# 712 "data/maps/Route110/scripts.pory"
	step_end
# 713 "data/maps/Route110/scripts.pory"

# 714 "data/maps/Route110/scripts.pory"
Route110_Text_WeCantTalkAboutAquaActivities:
# 715 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's activities…\n"
# 716 "data/maps/Route110/scripts.pory"
	.string "We can't talk about them yet.$"
# 717 "data/maps/Route110/scripts.pory"

# 718 "data/maps/Route110/scripts.pory"
Route110_Text_KickUpARuckus:
# 719 "data/maps/Route110/scripts.pory"
	.string "I want to get going to SLATEPORT and\n"
# 720 "data/maps/Route110/scripts.pory"
	.string "kick up a ruckus!$"
# 721 "data/maps/Route110/scripts.pory"

# 722 "data/maps/Route110/scripts.pory"
Route110_Text_MyFirstJobInAqua:
# 723 "data/maps/Route110/scripts.pory"
	.string "This is my first job after joining\n"
# 724 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA. It's a little scary.$"
# 725 "data/maps/Route110/scripts.pory"

# 726 "data/maps/Route110/scripts.pory"
Route110_Text_AquaActionsBringSmiles:
# 727 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's actions should bring\n"
# 728 "data/maps/Route110/scripts.pory"
	.string "smiles to people's faces!$"
# 729 "data/maps/Route110/scripts.pory"

# 730 "data/maps/Route110/scripts.pory"
Route110_Text_MayLetsBattle:
# 731 "data/maps/Route110/scripts.pory"
	.string "MAY: Hi, {PLAYER}{KUN}, long time no see!\p"
# 732 "data/maps/Route110/scripts.pory"
	.string "While I was searching for other\n"
# 733 "data/maps/Route110/scripts.pory"
	.string "POKéMON, my POKéMON grew stronger.\p"
# 734 "data/maps/Route110/scripts.pory"
	.string "So…\n"
# 735 "data/maps/Route110/scripts.pory"
	.string "How about a little battle?$"
# 736 "data/maps/Route110/scripts.pory"

# 737 "data/maps/Route110/scripts.pory"
Route110_Text_MayDefeated:
# 738 "data/maps/Route110/scripts.pory"
	.string "Yikes!\n"
# 739 "data/maps/Route110/scripts.pory"
	.string "You're better than I expected!$"
# 740 "data/maps/Route110/scripts.pory"

# 741 "data/maps/Route110/scripts.pory"
Route110_Text_MayTakeThis:
# 742 "data/maps/Route110/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, you've been busy\n"
# 743 "data/maps/Route110/scripts.pory"
	.string "training, too, haven't you?\p"
# 744 "data/maps/Route110/scripts.pory"
	.string "I think you deserve a reward!\n"
# 745 "data/maps/Route110/scripts.pory"
	.string "This is from me!$"
# 746 "data/maps/Route110/scripts.pory"

# 747 "data/maps/Route110/scripts.pory"
Route110_Text_MayExplainItemfinder:
# 748 "data/maps/Route110/scripts.pory"
	.string "MAY: That's an ITEMFINDER.\p"
# 749 "data/maps/Route110/scripts.pory"
	.string "Try it out. If there is an item that's\n"
# 750 "data/maps/Route110/scripts.pory"
	.string "not visible, it emits a sound.\p"
# 751 "data/maps/Route110/scripts.pory"
	.string "Okay, {PLAYER}{KUN}, let's meet again!\p"
# 752 "data/maps/Route110/scripts.pory"
	.string "I know it's a little silly coming from\n"
# 753 "data/maps/Route110/scripts.pory"
	.string "me, but I think you should train a lot\l"
# 754 "data/maps/Route110/scripts.pory"
	.string "harder for the next time.$"
# 755 "data/maps/Route110/scripts.pory"

# 756 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanLetsBattle:
# 757 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}.\n"
# 758 "data/maps/Route110/scripts.pory"
	.string "So this is where you were.\l"
# 759 "data/maps/Route110/scripts.pory"
	.string "How's it going?\p"
# 760 "data/maps/Route110/scripts.pory"
	.string "Have you been raising your POKéMON?\n"
# 761 "data/maps/Route110/scripts.pory"
	.string "I'll check for you.$"
# 762 "data/maps/Route110/scripts.pory"

# 763 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanDefeated:
# 764 "data/maps/Route110/scripts.pory"
	.string "Hmm…\n"
# 765 "data/maps/Route110/scripts.pory"
	.string "You're pretty good.$"
# 766 "data/maps/Route110/scripts.pory"

# 767 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanTakeThis:
# 768 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: {PLAYER}, you've trained\n"
# 769 "data/maps/Route110/scripts.pory"
	.string "without me noticing…\p"
# 770 "data/maps/Route110/scripts.pory"
	.string "Good enough!\n"
# 771 "data/maps/Route110/scripts.pory"
	.string "Here, take this.$"
# 772 "data/maps/Route110/scripts.pory"

# 773 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanExplainItemfinder:
# 774 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: That's an ITEMFINDER.\p"
# 775 "data/maps/Route110/scripts.pory"
	.string "Use it to root around for items that\n"
# 776 "data/maps/Route110/scripts.pory"
	.string "aren't visible.\p"
# 777 "data/maps/Route110/scripts.pory"
	.string "If it senses something, it emits\n"
# 778 "data/maps/Route110/scripts.pory"
	.string "a sound.\p"
# 779 "data/maps/Route110/scripts.pory"
	.string "Anyway, I'm off to look for new\n"
# 780 "data/maps/Route110/scripts.pory"
	.string "POKéMON.$"
# 781 "data/maps/Route110/scripts.pory"

# 782 "data/maps/Route110/scripts.pory"
Route110_Text_RideBikeAtFullSpeed:
# 783 "data/maps/Route110/scripts.pory"
	.string "Wouldn't it be great to ride a BIKE\n"
# 784 "data/maps/Route110/scripts.pory"
	.string "at full speed on CYCLING ROAD?$"
# 785 "data/maps/Route110/scripts.pory"

# 786 "data/maps/Route110/scripts.pory"
Route110_Text_HairStreamsBehindMe:
# 787 "data/maps/Route110/scripts.pory"
	.string "How do you like the way my raven-\n"
# 788 "data/maps/Route110/scripts.pory"
	.string "colored hair streams behind me?\p"
# 789 "data/maps/Route110/scripts.pory"
	.string "I grew my hair out just for that.$"
# 790 "data/maps/Route110/scripts.pory"

# 791 "data/maps/Route110/scripts.pory"
Route110_Text_YouGotBikeFromRydel:
# 792 "data/maps/Route110/scripts.pory"
	.string "Oh, hey, you got that BIKE from RYDEL!\p"
# 793 "data/maps/Route110/scripts.pory"
	.string "Oh, it's glaringly obvious.\n"
# 794 "data/maps/Route110/scripts.pory"
	.string "It says right on your bike…\p"
# 795 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 796 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 797 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 798 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 799 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 800 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 801 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 802 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 803 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL…\n"
# 804 "data/maps/Route110/scripts.pory"
	.string "That name's everywhere.\p"
# 805 "data/maps/Route110/scripts.pory"
	.string "You should ride it around all over\n"
# 806 "data/maps/Route110/scripts.pory"
	.string "the place--it's good advertising!$"
# 807 "data/maps/Route110/scripts.pory"

# 808 "data/maps/Route110/scripts.pory"
Route110_Text_TwoRoads:
# 809 "data/maps/Route110/scripts.pory"
	.string "The two roads, one above, one below…\p"
# 810 "data/maps/Route110/scripts.pory"
	.string "A road each for people and POKéMON.\n"
# 811 "data/maps/Route110/scripts.pory"
	.string "Perhaps that is right and fair.$"
# 812 "data/maps/Route110/scripts.pory"

# 813 "data/maps/Route110/scripts.pory"
Route110_Text_WalkOnTheLowRoad:
# 814 "data/maps/Route110/scripts.pory"
	.string "I don't have a BIKE, so I'll take\n"
# 815 "data/maps/Route110/scripts.pory"
	.string "a leisurely walk on the low road.$"
# 816 "data/maps/Route110/scripts.pory"

# 817 "data/maps/Route110/scripts.pory"
Route110_Text_BikeTechniques:
# 818 "data/maps/Route110/scripts.pory"
	.string "Learning techniques will make BIKE\n"
# 819 "data/maps/Route110/scripts.pory"
	.string "riding even more fun.\p"
# 820 "data/maps/Route110/scripts.pory"
	.string "There are some places that you can\n"
# 821 "data/maps/Route110/scripts.pory"
	.string "reach only by using a BIKE technique.$"
# 822 "data/maps/Route110/scripts.pory"

# 823 "data/maps/Route110/scripts.pory"
Route110_Text_WhichShouldIChoose:
# 824 "data/maps/Route110/scripts.pory"
	.string "Which should I choose?\p"
# 825 "data/maps/Route110/scripts.pory"
	.string "Make a beeline for MAUVILLE on\n"
# 826 "data/maps/Route110/scripts.pory"
	.string "CYCLING ROAD, or take the low road\l"
# 827 "data/maps/Route110/scripts.pory"
	.string "and look for POKéMON?$"
# 828 "data/maps/Route110/scripts.pory"

# 829 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingChallengeResultSummary:
# 830 "data/maps/Route110/scripts.pory"
	.string "Number of collisions:\n"
# 831 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_1}!\p"
# 832 "data/maps/Route110/scripts.pory"
	.string "Total time:\n"
# 833 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_2}!$"
# 834 "data/maps/Route110/scripts.pory"

# 835 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBest:
# 836 "data/maps/Route110/scripts.pory"
	.string "Bravo! Splendid showing!\p"
# 837 "data/maps/Route110/scripts.pory"
	.string "Your love of cycling comes from deep\n"
# 838 "data/maps/Route110/scripts.pory"
	.string "within your heart.\l"
# 839 "data/maps/Route110/scripts.pory"
	.string "You've shaken me to my very soul!$"
# 840 "data/maps/Route110/scripts.pory"

# 841 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionGood:
# 842 "data/maps/Route110/scripts.pory"
	.string "Your technique is remarkable.\p"
# 843 "data/maps/Route110/scripts.pory"
	.string "I suggest you speed up a bit while\n"
# 844 "data/maps/Route110/scripts.pory"
	.string "still avoiding collisions.$"
# 845 "data/maps/Route110/scripts.pory"

# 846 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionOk:
# 847 "data/maps/Route110/scripts.pory"
	.string "I would consider you a work in\n"
# 848 "data/maps/Route110/scripts.pory"
	.string "progress.\p"
# 849 "data/maps/Route110/scripts.pory"
	.string "Still, I hope you don't forget the\n"
# 850 "data/maps/Route110/scripts.pory"
	.string "sheer pleasure of cycling.$"
# 851 "data/maps/Route110/scripts.pory"

# 852 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBad:
# 853 "data/maps/Route110/scripts.pory"
	.string "My word… Your cycling skills border\n"
# 854 "data/maps/Route110/scripts.pory"
	.string "on terrifying.\p"
# 855 "data/maps/Route110/scripts.pory"
	.string "Most certainly, you need much more\n"
# 856 "data/maps/Route110/scripts.pory"
	.string "practice riding.$"
# 857 "data/maps/Route110/scripts.pory"

# 858 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionWorst:
# 859 "data/maps/Route110/scripts.pory"
	.string "…I am aghast…\p"
# 860 "data/maps/Route110/scripts.pory"
	.string "You're perhaps not cut out for this\n"
# 861 "data/maps/Route110/scripts.pory"
	.string "unfortunate cycling business.\p"
# 862 "data/maps/Route110/scripts.pory"
	.string "You ought to give serious thought to\n"
# 863 "data/maps/Route110/scripts.pory"
	.string "returning that BIKE to RYDEL.$"
# 864 "data/maps/Route110/scripts.pory"

# 865 "data/maps/Route110/scripts.pory"
Route110_Text_RatedForNumberOfCollisions:
# 866 "data/maps/Route110/scripts.pory"
	.string "This is CYCLING ROAD.\p"
# 867 "data/maps/Route110/scripts.pory"
	.string "If you were to ride from MAUVILLE to\n"
# 868 "data/maps/Route110/scripts.pory"
	.string "SLATEPORT on a MACH BIKE, you would\l"
# 869 "data/maps/Route110/scripts.pory"
	.string "be rated for the number of collisions\l"
# 870 "data/maps/Route110/scripts.pory"
	.string "and your total time.$"
# 871 "data/maps/Route110/scripts.pory"

# 872 "data/maps/Route110/scripts.pory"
Route110_Text_AlwaysAimHigher:
# 873 "data/maps/Route110/scripts.pory"
	.string "Regardless of the results, I count on\n"
# 874 "data/maps/Route110/scripts.pory"
	.string "seeing more challenges from you.\l"
# 875 "data/maps/Route110/scripts.pory"
	.string "Always aim higher!$"
# 876 "data/maps/Route110/scripts.pory"

# 877 "data/maps/Route110/scripts.pory"
Route110_Text_AcroBikesDoNotQualify:
# 878 "data/maps/Route110/scripts.pory"
	.string "On this CYCLING ROAD, those riding\n"
# 879 "data/maps/Route110/scripts.pory"
	.string "MACH BIKES are rated for their number\l"
# 880 "data/maps/Route110/scripts.pory"
	.string "of collisions and their total times.\p"
# 881 "data/maps/Route110/scripts.pory"
	.string "ACRO BIKES do not qualify for rating.\n"
# 882 "data/maps/Route110/scripts.pory"
	.string "They are easy to turn, so it's not fair.$"
# 883 "data/maps/Route110/scripts.pory"

# 884 "data/maps/Route110/scripts.pory"
Route110_Text_SlateportCitySign:
# 885 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 886 "data/maps/Route110/scripts.pory"
	.string "{DOWN_ARROW} SLATEPORT CITY$"
# 887 "data/maps/Route110/scripts.pory"

# 888 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingRoadSign:
# 889 "data/maps/Route110/scripts.pory"
	.string "SEASIDE CYCLING ROAD$"
# 890 "data/maps/Route110/scripts.pory"

# 891 "data/maps/Route110/scripts.pory"
Route110_Text_AquaWasHere:
# 892 "data/maps/Route110/scripts.pory"
	.string "“TEAM AQUA was here!”\p"
# 893 "data/maps/Route110/scripts.pory"
	.string "Someone painted that onto this sign,\n"
# 894 "data/maps/Route110/scripts.pory"
	.string "but then someone else painted over it.\p"
# 895 "data/maps/Route110/scripts.pory"
	.string "“TEAM MAGMA rules!” is what it\n"
# 896 "data/maps/Route110/scripts.pory"
	.string "says now.$"
# 897 "data/maps/Route110/scripts.pory"

# 898 "data/maps/Route110/scripts.pory"
Route110_Text_Route103Sign:
# 899 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 900 "data/maps/Route110/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 103$"
# 901 "data/maps/Route110/scripts.pory"

# 902 "data/maps/Route110/scripts.pory"
Route110_Text_SeasideParkingSign:
# 903 "data/maps/Route110/scripts.pory"
	.string "SEASIDE PARKING$"
# 904 "data/maps/Route110/scripts.pory"

# 905 "data/maps/Route110/scripts.pory"
Route110_Text_MauvilleCitySign:
# 906 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 907 "data/maps/Route110/scripts.pory"
	.string "{UP_ARROW} MAUVILLE CITY$"
# 908 "data/maps/Route110/scripts.pory"

# 909 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsPrlzSleep:
# 910 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 911 "data/maps/Route110/scripts.pory"
	.string "The foe can be made helpless by\n"
# 912 "data/maps/Route110/scripts.pory"
	.string "paralyzing it or causing it to sleep.\p"
# 913 "data/maps/Route110/scripts.pory"
	.string "It is an important technique for\n"
# 914 "data/maps/Route110/scripts.pory"
	.string "POKéMON battles.$"
# 915 "data/maps/Route110/scripts.pory"

# 916 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsRegisterItems:
# 917 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 918 "data/maps/Route110/scripts.pory"
	.string "The items in the BAG can be reorganized\n"
# 919 "data/maps/Route110/scripts.pory"
	.string "by pressing SELECT.$"
# 920 "data/maps/Route110/scripts.pory"

# 921 "data/maps/Route110/scripts.pory"
Route110_Text_TrickHouseSign:
# 922 "data/maps/Route110/scripts.pory"
	.string "“Three steps {RIGHT_ARROW} and two steps {UP_ARROW}\n"
# 923 "data/maps/Route110/scripts.pory"
	.string "to reach the wondrous TRICK HOUSE.”$"
# 924 "data/maps/Route110/scripts.pory"

# 925 "data/maps/Route110/scripts.pory"
Route110_Text_BestRecord:
# 926 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 927 "data/maps/Route110/scripts.pory"
	.string "No. of collisions: {STR_VAR_1}\p"
# 928 "data/maps/Route110/scripts.pory"
	.string "Elapsed time: {STR_VAR_2}$"
# 929 "data/maps/Route110/scripts.pory"

# 930 "data/maps/Route110/scripts.pory"
Route110_Text_ThereIsNoRecord:
# 931 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 932 "data/maps/Route110/scripts.pory"
	.string "No one seems to have taken the\n"
# 933 "data/maps/Route110/scripts.pory"
	.string "challenge. There is no record…$"
# 934 "data/maps/Route110/scripts.pory"

# 935 "data/maps/Route110/scripts.pory"
Route110_Text_ImagineSeeingYouHere:
# 936 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
# 937 "data/maps/Route110/scripts.pory"
	.string "Imagine seeing you here!\p"
# 938 "data/maps/Route110/scripts.pory"
	.string "And where might my {RIVAL} be?$"
# 939 "data/maps/Route110/scripts.pory"

# 940 "data/maps/Route110/scripts.pory"
Route110_Text_HeardYouInstallMatchCall:
# 941 "data/maps/Route110/scripts.pory"
	.string "Oh, I see!\n"
# 942 "data/maps/Route110/scripts.pory"
	.string "You two are running separately.\l"
# 943 "data/maps/Route110/scripts.pory"
	.string "Well, that's fine.\p"
# 944 "data/maps/Route110/scripts.pory"
	.string "Oh, yes, I heard that your POKéNAV\n"
# 945 "data/maps/Route110/scripts.pory"
	.string "had the MATCH CALL system installed.\p"
# 946 "data/maps/Route110/scripts.pory"
	.string "Well, then, I should register you in\n"
# 947 "data/maps/Route110/scripts.pory"
	.string "my POKéNAV as well.\p"
# 948 "data/maps/Route110/scripts.pory"
	.string "That way, even when we're apart,\n"
# 949 "data/maps/Route110/scripts.pory"
	.string "I can rate your POKéDEX anytime.\p"
# 950 "data/maps/Route110/scripts.pory"
	.string "… … … … … …$"
# 951 "data/maps/Route110/scripts.pory"

# 952 "data/maps/Route110/scripts.pory"
Route110_Text_RegisteredBirchInPokenav:
# 953 "data/maps/Route110/scripts.pory"
	.string "Registered PROF. BIRCH\n"
# 954 "data/maps/Route110/scripts.pory"
	.string "in the POKéNAV.$"
# 955 "data/maps/Route110/scripts.pory"

# 956 "data/maps/Route110/scripts.pory"
Route110_Text_KeepAnEyeOutForRival:
# 957 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: {PLAYER}{KUN}…\p"
# 958 "data/maps/Route110/scripts.pory"
	.string "Please keep an eye out for my {RIVAL}.\n"
# 959 "data/maps/Route110/scripts.pory"
	.string "… … … … … …\p"
# 960 "data/maps/Route110/scripts.pory"
	.string "Well, I had better get going.\n"
# 961 "data/maps/Route110/scripts.pory"
	.string "See you again, {PLAYER}{KUN}!$"
