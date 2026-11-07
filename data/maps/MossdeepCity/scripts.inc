# 1 "data/maps/MossdeepCity/scripts.pory"

# 2 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_MapScripts::
# 3 "data/maps/MossdeepCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_OnTransition
# 4 "data/maps/MossdeepCity/scripts.pory"
	.byte 0
# 5 "data/maps/MossdeepCity/scripts.pory"

# 6 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_OnTransition:
# 7 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 8 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 9 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 10 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 11 "data/maps/MossdeepCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 12 "data/maps/MossdeepCity/scripts.pory"
	end
# 13 "data/maps/MossdeepCity/scripts.pory"

# 14 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_PokefanF::
# 15 "data/maps/MossdeepCity/scripts.pory"
	lock
# 16 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 17 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_DIVE, MossdeepCity_EventScript_PokefanFMagmaGone
# 18 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterReceivedLetter, MSGBOX_DEFAULT
# 19 "data/maps/MossdeepCity/scripts.pory"
	release
# 20 "data/maps/MossdeepCity/scripts.pory"
	end
# 21 "data/maps/MossdeepCity/scripts.pory"

# 22 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_PokefanFMagmaGone::
# 23 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterLaunchingRockets, MSGBOX_DEFAULT
# 24 "data/maps/MossdeepCity/scripts.pory"
	release
# 25 "data/maps/MossdeepCity/scripts.pory"
	end
# 26 "data/maps/MossdeepCity/scripts.pory"

# 27 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Sailor::
# 28 "data/maps/MossdeepCity/scripts.pory"
	lock
# 29 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 30 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_DIVE, MossdeepCity_EventScript_SailorMagmaGone
# 31 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_MossdeepTargetedByMagma, MSGBOX_DEFAULT
# 32 "data/maps/MossdeepCity/scripts.pory"
	release
# 33 "data/maps/MossdeepCity/scripts.pory"
	end
# 34 "data/maps/MossdeepCity/scripts.pory"

# 35 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_SailorMagmaGone::
# 36 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_FeelReliefOnLand, MSGBOX_DEFAULT
# 37 "data/maps/MossdeepCity/scripts.pory"
	release
# 38 "data/maps/MossdeepCity/scripts.pory"
	end
# 39 "data/maps/MossdeepCity/scripts.pory"

# 40 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_NinjaBoy::
# 41 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WailmerWatching, MSGBOX_NPC
# 42 "data/maps/MossdeepCity/scripts.pory"
	end
# 43 "data/maps/MossdeepCity/scripts.pory"

# 44 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ExpertM::
# 45 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_LifeNeedsSeaToLive, MSGBOX_NPC
# 46 "data/maps/MossdeepCity/scripts.pory"
	end
# 47 "data/maps/MossdeepCity/scripts.pory"

# 48 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Girl::
# 49 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_NiceIfWorldCoveredByFlowers, MSGBOX_NPC
# 50 "data/maps/MossdeepCity/scripts.pory"
	end
# 51 "data/maps/MossdeepCity/scripts.pory"

# 52 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Woman::
# 53 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpecialSpaceCenterRock, MSGBOX_NPC
# 54 "data/maps/MossdeepCity/scripts.pory"
	end
# 55 "data/maps/MossdeepCity/scripts.pory"

# 56 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_WhiteRock::
# 57 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_ItsAWhiteRock, MSGBOX_SIGN
# 58 "data/maps/MossdeepCity/scripts.pory"
	end
# 59 "data/maps/MossdeepCity/scripts.pory"

# 60 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_GymSign::
# 61 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_GymSign, MSGBOX_SIGN
# 62 "data/maps/MossdeepCity/scripts.pory"
	end
# 63 "data/maps/MossdeepCity/scripts.pory"

# 64 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_CitySign::
# 65 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_CitySign, MSGBOX_SIGN
# 66 "data/maps/MossdeepCity/scripts.pory"
	end
# 67 "data/maps/MossdeepCity/scripts.pory"

# 68 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_SpaceCenterSign::
# 69 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterSign, MSGBOX_SIGN
# 70 "data/maps/MossdeepCity/scripts.pory"
	end
# 71 "data/maps/MossdeepCity/scripts.pory"

# 72 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_VisitedMossdeep::
# 73 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_VISITED_MOSSDEEP_CITY
# 74 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 75 "data/maps/MossdeepCity/scripts.pory"
	end
# 76 "data/maps/MossdeepCity/scripts.pory"

# 77 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_TeamMagmaEnterSpaceCenter::
# 78 "data/maps/MossdeepCity/scripts.pory"
	lockall
# 79 "data/maps/MossdeepCity/scripts.pory"
	applywaitmovement LOCALID_MOSSDEEP_MAXIE, MossdeepCity_Movement_MaxieGestureToSpaceCenter
# 80 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_1, MossdeepCity_Movement_GruntFaceSpaceCenter
# 81 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_2, MossdeepCity_Movement_GruntFaceSpaceCenter
# 82 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_3, MossdeepCity_Movement_GruntFaceSpaceCenter
# 83 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_4, MossdeepCity_Movement_GruntFaceSpaceCenter
# 84 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 85 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_MAXIE, MossdeepCity_Movement_MaxieEnterSpaceCenter
# 86 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_1, MossdeepCity_Movement_Grunt1EnterSpaceCenter
# 87 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_2, MossdeepCity_Movement_Grunt2EnterSpaceCenter
# 88 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_3, MossdeepCity_Movement_Grunt3EnterSpaceCenter
# 89 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_4, MossdeepCity_Movement_Grunt4EnterSpaceCenter
# 90 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 91 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_MAXIE
# 92 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_GRUNT_1
# 93 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_GRUNT_2
# 94 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_GRUNT_3
# 95 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_GRUNT_4
# 96 "data/maps/MossdeepCity/scripts.pory"
	delay 30
# 97 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 2
# 98 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 99 "data/maps/MossdeepCity/scripts.pory"
	releaseall
# 100 "data/maps/MossdeepCity/scripts.pory"
	end
# 101 "data/maps/MossdeepCity/scripts.pory"

# 102 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_MaxieGestureToSpaceCenter:
# 103 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 104 "data/maps/MossdeepCity/scripts.pory"
	face_right
# 105 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 106 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 107 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 108 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 109 "data/maps/MossdeepCity/scripts.pory"
	face_left
# 110 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 111 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 112 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 113 "data/maps/MossdeepCity/scripts.pory"

# 114 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_GruntFaceSpaceCenter:
# 115 "data/maps/MossdeepCity/scripts.pory"
	face_right
# 116 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 117 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 118 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 119 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 120 "data/maps/MossdeepCity/scripts.pory"

# 121 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_MaxieEnterSpaceCenter:
# 122 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 123 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 124 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 125 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 126 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 127 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 128 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 129 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 130 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 131 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 132 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 133 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 134 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 135 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 136 "data/maps/MossdeepCity/scripts.pory"

# 137 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt1EnterSpaceCenter:
# 138 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 139 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 140 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 141 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 142 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 143 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 144 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 145 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 146 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 147 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 148 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 149 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 150 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 151 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 152 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 153 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 154 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 155 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 156 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 157 "data/maps/MossdeepCity/scripts.pory"

# 158 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt2EnterSpaceCenter:
# 159 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 160 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 161 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 162 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 163 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 164 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 165 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 166 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 167 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 168 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 169 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 170 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 171 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 172 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 173 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 174 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 175 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 176 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 177 "data/maps/MossdeepCity/scripts.pory"

# 178 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt3EnterSpaceCenter:
# 179 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 180 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 181 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 182 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 183 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 184 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 185 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 186 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 187 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 188 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 189 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 190 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 191 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 192 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 193 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 194 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 195 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 196 "data/maps/MossdeepCity/scripts.pory"

# 197 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt4EnterSpaceCenter:
# 198 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 199 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 200 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 201 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 202 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 203 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 204 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 205 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 206 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 207 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 208 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 209 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 210 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 211 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 212 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 213 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 214 "data/maps/MossdeepCity/scripts.pory"

# 215 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Man::
# 216 "data/maps/MossdeepCity/scripts.pory"
	lock
# 217 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 218 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SurfExhilarating, MSGBOX_DEFAULT
# 219 "data/maps/MossdeepCity/scripts.pory"
	applywaitmovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 220 "data/maps/MossdeepCity/scripts.pory"
	release
# 221 "data/maps/MossdeepCity/scripts.pory"
	end
# 222 "data/maps/MossdeepCity/scripts.pory"

# 223 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_KingsRockBoy::
# 224 "data/maps/MossdeepCity/scripts.pory"
	lock
# 225 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 226 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_KINGS_ROCK, MossdeepCity_EventScript_ReceivedKingsRock
# 227 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WantKingsRockStevenGaveMe, MSGBOX_YESNO
# 228 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_EventScript_DeclineKingsRock
# 229 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_YouCanKeepIt, MSGBOX_DEFAULT
# 230 "data/maps/MossdeepCity/scripts.pory"
	giveitem ITEM_KINGS_ROCK
# 231 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 232 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_RECEIVED_KINGS_ROCK
# 233 "data/maps/MossdeepCity/scripts.pory"
	release
# 234 "data/maps/MossdeepCity/scripts.pory"
	end
# 235 "data/maps/MossdeepCity/scripts.pory"

# 236 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ReceivedKingsRock::
# 237 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_StevensHouseOverThere, MSGBOX_DEFAULT
# 238 "data/maps/MossdeepCity/scripts.pory"
	release
# 239 "data/maps/MossdeepCity/scripts.pory"
	end
# 240 "data/maps/MossdeepCity/scripts.pory"

# 241 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_DeclineKingsRock::
# 242 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WhatToDoWithWeirdRock, MSGBOX_DEFAULT
# 243 "data/maps/MossdeepCity/scripts.pory"
	release
# 244 "data/maps/MossdeepCity/scripts.pory"
	end
# 245 "data/maps/MossdeepCity/scripts.pory"

# 246 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_BlackBelt::
# 247 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SootopolisNewGymLeader, MSGBOX_NPC
# 248 "data/maps/MossdeepCity/scripts.pory"
	end
# 249 "data/maps/MossdeepCity/scripts.pory"

# 250 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Scott::
# 251 "data/maps/MossdeepCity/scripts.pory"
	lock
# 252 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 253 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_ScottSomethingWrongWithTown, MSGBOX_DEFAULT
# 254 "data/maps/MossdeepCity/scripts.pory"
	closemessage
# 255 "data/maps/MossdeepCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MossdeepCity_EventScript_ScottExitNorth
# 256 "data/maps/MossdeepCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MossdeepCity_EventScript_ScottExitEast
# 257 "data/maps/MossdeepCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 258 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_SCOTT
# 259 "data/maps/MossdeepCity/scripts.pory"
	release
# 260 "data/maps/MossdeepCity/scripts.pory"
	end
# 261 "data/maps/MossdeepCity/scripts.pory"

# 262 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ScottExitNorth::
# 263 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
# 264 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_SCOTT, MossdeepCity_Movement_ScottExitNorth
# 265 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 266 "data/maps/MossdeepCity/scripts.pory"
	return
# 267 "data/maps/MossdeepCity/scripts.pory"

# 268 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ScottExitEast::
# 269 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
# 270 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_SCOTT, MossdeepCity_Movement_ScottExitEast
# 271 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 272 "data/maps/MossdeepCity/scripts.pory"
	return
# 273 "data/maps/MossdeepCity/scripts.pory"

# 274 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_PlayerWatchScottExit:
# 275 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 276 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 277 "data/maps/MossdeepCity/scripts.pory"
	walk_in_place_faster_left
# 278 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 279 "data/maps/MossdeepCity/scripts.pory"

# 280 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_ScottExitNorth:
# 281 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 282 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 283 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 284 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 285 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 286 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 287 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 288 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 289 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 290 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 291 "data/maps/MossdeepCity/scripts.pory"

# 292 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_ScottExitEast:
# 293 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 294 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 295 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 296 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 297 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 298 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 299 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 300 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 301 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 302 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 303 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 304 "data/maps/MossdeepCity/scripts.pory"

# 305 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WantKingsRockStevenGaveMe:
# 306 "data/maps/MossdeepCity/scripts.pory"
	.string "I got this from STEVEN, but I don't\n"
# 307 "data/maps/MossdeepCity/scripts.pory"
	.string "know what it's good for.\p"
# 308 "data/maps/MossdeepCity/scripts.pory"
	.string "I think it's called KING'S ROCK.\n"
# 309 "data/maps/MossdeepCity/scripts.pory"
	.string "Do you want it?$"
# 310 "data/maps/MossdeepCity/scripts.pory"

# 311 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_YouCanKeepIt:
# 312 "data/maps/MossdeepCity/scripts.pory"
	.string "Why would you want it?\n"
# 313 "data/maps/MossdeepCity/scripts.pory"
	.string "You're weird.\p"
# 314 "data/maps/MossdeepCity/scripts.pory"
	.string "You can keep it, but keep it a secret\n"
# 315 "data/maps/MossdeepCity/scripts.pory"
	.string "from STEVEN.$"
# 316 "data/maps/MossdeepCity/scripts.pory"

# 317 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_StevensHouseOverThere:
# 318 "data/maps/MossdeepCity/scripts.pory"
	.string "STEVEN's house is right over there!$"
# 319 "data/maps/MossdeepCity/scripts.pory"

# 320 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WhatToDoWithWeirdRock:
# 321 "data/maps/MossdeepCity/scripts.pory"
	.string "Yeah, you think so, too! What are you\n"
# 322 "data/maps/MossdeepCity/scripts.pory"
	.string "supposed to do with some weird rock?$"
# 323 "data/maps/MossdeepCity/scripts.pory"

# 324 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WailmerWatching:
# 325 "data/maps/MossdeepCity/scripts.pory"
	.string "Around MOSSDEEP, you can see wild\n"
# 326 "data/maps/MossdeepCity/scripts.pory"
	.string "WAILMER.\p"
# 327 "data/maps/MossdeepCity/scripts.pory"
	.string "It's called, uh…\n"
# 328 "data/maps/MossdeepCity/scripts.pory"
	.string "What was it now…\p"
# 329 "data/maps/MossdeepCity/scripts.pory"
	.string "WAI, WAI, WAI…\p"
# 330 "data/maps/MossdeepCity/scripts.pory"
	.string "WAILMER watching!$"
# 331 "data/maps/MossdeepCity/scripts.pory"

# 332 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterReceivedLetter:
# 333 "data/maps/MossdeepCity/scripts.pory"
	.string "The island's SPACE CENTER has been\n"
# 334 "data/maps/MossdeepCity/scripts.pory"
	.string "launching huge rockets.\p"
# 335 "data/maps/MossdeepCity/scripts.pory"
	.string "There's been some kind of an uproar\n"
# 336 "data/maps/MossdeepCity/scripts.pory"
	.string "over a letter they received recently.$"
# 337 "data/maps/MossdeepCity/scripts.pory"

# 338 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterLaunchingRockets:
# 339 "data/maps/MossdeepCity/scripts.pory"
	.string "The island's SPACE CENTER has been\n"
# 340 "data/maps/MossdeepCity/scripts.pory"
	.string "launching huge rockets.$"
# 341 "data/maps/MossdeepCity/scripts.pory"

# 342 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_MossdeepTargetedByMagma:
# 343 "data/maps/MossdeepCity/scripts.pory"
	.string "I heard from a SAILOR buddy that\n"
# 344 "data/maps/MossdeepCity/scripts.pory"
	.string "TEAM AQUA set up shop in LILYCOVE.\p"
# 345 "data/maps/MossdeepCity/scripts.pory"
	.string "I also heard that someone came along\n"
# 346 "data/maps/MossdeepCity/scripts.pory"
	.string "and wiped the floor with them!\p"
# 347 "data/maps/MossdeepCity/scripts.pory"
	.string "But MOSSDEEP here's been targeted\n"
# 348 "data/maps/MossdeepCity/scripts.pory"
	.string "by that TEAM MAGMA.\p"
# 349 "data/maps/MossdeepCity/scripts.pory"
	.string "If you want to know what they're up to,\n"
# 350 "data/maps/MossdeepCity/scripts.pory"
	.string "go visit the SPACE CENTER.$"
# 351 "data/maps/MossdeepCity/scripts.pory"

# 352 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_FeelReliefOnLand:
# 353 "data/maps/MossdeepCity/scripts.pory"
	.string "I'm a SAILOR, so the sea's obviously\n"
# 354 "data/maps/MossdeepCity/scripts.pory"
	.string "more important to me.\p"
# 355 "data/maps/MossdeepCity/scripts.pory"
	.string "But you know? When I get back on land\n"
# 356 "data/maps/MossdeepCity/scripts.pory"
	.string "after a long voyage, I do feel relief!$"
# 357 "data/maps/MossdeepCity/scripts.pory"

# 358 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_NiceIfWorldCoveredByFlowers:
# 359 "data/maps/MossdeepCity/scripts.pory"
	.string "Wouldn't it be nice?\p"
# 360 "data/maps/MossdeepCity/scripts.pory"
	.string "If the whole world was covered in\n"
# 361 "data/maps/MossdeepCity/scripts.pory"
	.string "plants and flowers like this island?$"
# 362 "data/maps/MossdeepCity/scripts.pory"

# 363 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_LifeNeedsSeaToLive:
# 364 "data/maps/MossdeepCity/scripts.pory"
	.string "All life needs the sea to live, even\n"
# 365 "data/maps/MossdeepCity/scripts.pory"
	.string "though it makes its home on the land.\p"
# 366 "data/maps/MossdeepCity/scripts.pory"
	.string "Life, having run its course, becomes\n"
# 367 "data/maps/MossdeepCity/scripts.pory"
	.string "soil and returns to the land.\p"
# 368 "data/maps/MossdeepCity/scripts.pory"
	.string "And the sea is always connected to\n"
# 369 "data/maps/MossdeepCity/scripts.pory"
	.string "the land.\p"
# 370 "data/maps/MossdeepCity/scripts.pory"
	.string "Yes, like the very shoreline here.$"
# 371 "data/maps/MossdeepCity/scripts.pory"

# 372 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SurfExhilarating:
# 373 "data/maps/MossdeepCity/scripts.pory"
	.string "A voyage on a ship is fine.\p"
# 374 "data/maps/MossdeepCity/scripts.pory"
	.string "But crossing the sea with POKéMON\n"
# 375 "data/maps/MossdeepCity/scripts.pory"
	.string "using SURF…\p"
# 376 "data/maps/MossdeepCity/scripts.pory"
	.string "Now that's an exhilarating trip!\n"
# 377 "data/maps/MossdeepCity/scripts.pory"
	.string "Wouldn't you agree, youngster?$"
# 378 "data/maps/MossdeepCity/scripts.pory"

# 379 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpecialSpaceCenterRock:
# 380 "data/maps/MossdeepCity/scripts.pory"
	.string "This rock has a special meaning to\n"
# 381 "data/maps/MossdeepCity/scripts.pory"
	.string "the people at the SPACE CENTER.\p"
# 382 "data/maps/MossdeepCity/scripts.pory"
	.string "They put it here as their wish for\n"
# 383 "data/maps/MossdeepCity/scripts.pory"
	.string "their rockets to fly safely.\p"
# 384 "data/maps/MossdeepCity/scripts.pory"
	.string "When you make a wish, what do you use?\n"
# 385 "data/maps/MossdeepCity/scripts.pory"
	.string "Do you wish upon a star?\p"
# 386 "data/maps/MossdeepCity/scripts.pory"
	.string "I use a wish tag to make it happen.\n"
# 387 "data/maps/MossdeepCity/scripts.pory"
	.string "That's what I do.$"
# 388 "data/maps/MossdeepCity/scripts.pory"

# 389 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_ItsAWhiteRock:
# 390 "data/maps/MossdeepCity/scripts.pory"
	.string "It's a white rock.$"
# 391 "data/maps/MossdeepCity/scripts.pory"

# 392 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_GymSign:
# 393 "data/maps/MossdeepCity/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM\n"
# 394 "data/maps/MossdeepCity/scripts.pory"
	.string "LEADERS: LIZA & TATE\p"
# 395 "data/maps/MossdeepCity/scripts.pory"
	.string "“The mystic combination!”$"
# 396 "data/maps/MossdeepCity/scripts.pory"

# 397 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_CitySign:
# 398 "data/maps/MossdeepCity/scripts.pory"
	.string "MOSSDEEP CITY\n"
# 399 "data/maps/MossdeepCity/scripts.pory"
	.string "“Our slogan: Cherish POKéMON!”$"
# 400 "data/maps/MossdeepCity/scripts.pory"

# 401 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterSign:
# 402 "data/maps/MossdeepCity/scripts.pory"
	.string "MOSSDEEP SPACE CENTER\n"
# 403 "data/maps/MossdeepCity/scripts.pory"
	.string "“The closest place to space.”$"
# 404 "data/maps/MossdeepCity/scripts.pory"

# 405 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_ScottSomethingWrongWithTown:
# 406 "data/maps/MossdeepCity/scripts.pory"
	.string "SCOTT: {PLAYER}{KUN}, feeling good?\n"
# 407 "data/maps/MossdeepCity/scripts.pory"
	.string "I'm doing great!\p"
# 408 "data/maps/MossdeepCity/scripts.pory"
	.string "I'd heard MOSSDEEP's GYM LEADER is\n"
# 409 "data/maps/MossdeepCity/scripts.pory"
	.string "pretty strong, so I decided to come\l"
# 410 "data/maps/MossdeepCity/scripts.pory"
	.string "take a look-see for myself.\p"
# 411 "data/maps/MossdeepCity/scripts.pory"
	.string "But there's something wrong about\n"
# 412 "data/maps/MossdeepCity/scripts.pory"
	.string "this town.\p"
# 413 "data/maps/MossdeepCity/scripts.pory"
	.string "People are going on about a warning\n"
# 414 "data/maps/MossdeepCity/scripts.pory"
	.string "letter and the SPACE CENTER…\p"
# 415 "data/maps/MossdeepCity/scripts.pory"
	.string "I don't think it concerns me in any\n"
# 416 "data/maps/MossdeepCity/scripts.pory"
	.string "way, though.$"
# 417 "data/maps/MossdeepCity/scripts.pory"

# 418 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SootopolisNewGymLeader:
# 419 "data/maps/MossdeepCity/scripts.pory"
	.string "Ahh… It feels great letting the waves\n"
# 420 "data/maps/MossdeepCity/scripts.pory"
	.string "wash over my feet…\p"
# 421 "data/maps/MossdeepCity/scripts.pory"
	.string "Speaking of the waves, you know that\n"
# 422 "data/maps/MossdeepCity/scripts.pory"
	.string "island city SOOTOPOLIS?\p"
# 423 "data/maps/MossdeepCity/scripts.pory"
	.string "I think the GYM there had a new\n"
# 424 "data/maps/MossdeepCity/scripts.pory"
	.string "LEADER come in.\p"
# 425 "data/maps/MossdeepCity/scripts.pory"
	.string "People tell me the new LEADER once\n"
# 426 "data/maps/MossdeepCity/scripts.pory"
	.string "mentored WALLACE.$"
