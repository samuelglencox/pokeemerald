# 1 "data/maps/MtChimney/scripts.pory"

# 2 "data/maps/MtChimney/scripts.pory"
MtChimney_MapScripts::
# 3 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtChimney_OnResume
# 4 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_OnTransition
# 5 "data/maps/MtChimney/scripts.pory"
	.byte 0
# 6 "data/maps/MtChimney/scripts.pory"

# 7 "data/maps/MtChimney/scripts.pory"
MtChimney_OnTransition:
# 8 "data/maps/MtChimney/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 1
# 9 "data/maps/MtChimney/scripts.pory"
	end
# 10 "data/maps/MtChimney/scripts.pory"

# 11 "data/maps/MtChimney/scripts.pory"
MtChimney_OnResume:
# 12 "data/maps/MtChimney/scripts.pory"
	setstepcallback STEP_CB_ASH
# 13 "data/maps/MtChimney/scripts.pory"
	end
# 14 "data/maps/MtChimney/scripts.pory"

# 15 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Archie::
# 16 "data/maps/MtChimney/scripts.pory"
	lock
# 17 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 18 "data/maps/MtChimney/scripts.pory"
	call_if_unset FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieGoStopTeamMagma
# 19 "data/maps/MtChimney/scripts.pory"
	call_if_set FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieBusyFighting
# 20 "data/maps/MtChimney/scripts.pory"
	closemessage
# 21 "data/maps/MtChimney/scripts.pory"
	applywaitmovement LOCALID_MT_CHIMNEY_ARCHIE, Common_Movement_FaceOriginalDirection
# 22 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_EVIL_LEADER_PLEASE_STOP
# 23 "data/maps/MtChimney/scripts.pory"
	release
# 24 "data/maps/MtChimney/scripts.pory"
	end
# 25 "data/maps/MtChimney/scripts.pory"

# 26 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieGoStopTeamMagma::
# 27 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieGoStopTeamMagma, MSGBOX_DEFAULT
# 28 "data/maps/MtChimney/scripts.pory"
	return
# 29 "data/maps/MtChimney/scripts.pory"

# 30 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieBusyFighting::
# 31 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieIHaveMyHandsFull, MSGBOX_DEFAULT
# 32 "data/maps/MtChimney/scripts.pory"
	return
# 33 "data/maps/MtChimney/scripts.pory"

# 34 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie::
# 35 "data/maps/MtChimney/scripts.pory"
	lockall
# 36 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 37 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoriteWillActivateVolcano, MSGBOX_DEFAULT
# 38 "data/maps/MtChimney/scripts.pory"
	applywaitmovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_FacePlayer
# 39 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 40 "data/maps/MtChimney/scripts.pory"
	applywaitmovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_ExclamationMark
# 41 "data/maps/MtChimney/scripts.pory"
	applywaitmovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_Delay48
# 42 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieIntro, MSGBOX_DEFAULT
# 43 "data/maps/MtChimney/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat
# 44 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma, MSGBOX_DEFAULT
# 45 "data/maps/MtChimney/scripts.pory"
	closemessage
# 46 "data/maps/MtChimney/scripts.pory"
	delay 30
# 47 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 48 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAXIE
# 49 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAGMA_GRUNT_1
# 50 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_TABITHA
# 51 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAGMA_GRUNT_2
# 52 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 53 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 54 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_ARCHIE, 10, 12
# 55 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_MT_CHIMNEY_ARCHIE
# 56 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieApproachPlayerEast
# 57 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieApproachPlayerNorth
# 58 "data/maps/MtChimney/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 59 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
# 60 "data/maps/MtChimney/scripts.pory"
	closemessage
# 61 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieExitEast
# 62 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieExitNorth
# 63 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_ARCHIE
# 64 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 65 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 66 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 67 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 68 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 69 "data/maps/MtChimney/scripts.pory"
	releaseall
# 70 "data/maps/MtChimney/scripts.pory"
	end
# 71 "data/maps/MtChimney/scripts.pory"

# 72 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerEast::
# 73 "data/maps/MtChimney/scripts.pory"
	applywaitmovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieApproachPlayerEast
# 74 "data/maps/MtChimney/scripts.pory"
	return
# 75 "data/maps/MtChimney/scripts.pory"

# 76 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerNorth::
# 77 "data/maps/MtChimney/scripts.pory"
	applywaitmovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieApproachPlayerNorth
# 78 "data/maps/MtChimney/scripts.pory"
	return
# 79 "data/maps/MtChimney/scripts.pory"

# 80 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitEast::
# 81 "data/maps/MtChimney/scripts.pory"
	applywaitmovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieExitEast
# 82 "data/maps/MtChimney/scripts.pory"
	return
# 83 "data/maps/MtChimney/scripts.pory"

# 84 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitNorth::
# 85 "data/maps/MtChimney/scripts.pory"
	applywaitmovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieExitNorth
# 86 "data/maps/MtChimney/scripts.pory"
	return
# 87 "data/maps/MtChimney/scripts.pory"

# 88 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady::
# 89 "data/maps/MtChimney/scripts.pory"
	lock
# 90 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 91 "data/maps/MtChimney/scripts.pory"
	showmoneybox 0, 0
# 92 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
# 93 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_DeclineLavaCookie
# 94 "data/maps/MtChimney/scripts.pory"
	checkmoney 200
# 95 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_NotEnoughMoney
# 96 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
# 97 "data/maps/MtChimney/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 98 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RemoveMoney
# 99 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 100 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 101 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 102 "data/maps/MtChimney/scripts.pory"
	release
# 103 "data/maps/MtChimney/scripts.pory"
	end
# 104 "data/maps/MtChimney/scripts.pory"

# 105 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 106 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 107 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 108 "data/maps/MtChimney/scripts.pory"
	release
# 109 "data/maps/MtChimney/scripts.pory"
	end
# 110 "data/maps/MtChimney/scripts.pory"

# 111 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RemoveMoney::
# 112 "data/maps/MtChimney/scripts.pory"
	removemoney 200
# 113 "data/maps/MtChimney/scripts.pory"
	updatemoneybox
# 114 "data/maps/MtChimney/scripts.pory"
	return
# 115 "data/maps/MtChimney/scripts.pory"

# 116 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DeclineLavaCookie::
# 117 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
# 118 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 119 "data/maps/MtChimney/scripts.pory"
	release
# 120 "data/maps/MtChimney/scripts.pory"
	end
# 121 "data/maps/MtChimney/scripts.pory"

# 122 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_NotEnoughMoney::
# 123 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
# 124 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 125 "data/maps/MtChimney/scripts.pory"
	release
# 126 "data/maps/MtChimney/scripts.pory"
	end
# 127 "data/maps/MtChimney/scripts.pory"

# 128 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerEast:
# 129 "data/maps/MtChimney/scripts.pory"
	walk_up
# 130 "data/maps/MtChimney/scripts.pory"
	walk_up
# 131 "data/maps/MtChimney/scripts.pory"
	walk_up
# 132 "data/maps/MtChimney/scripts.pory"
	walk_up
# 133 "data/maps/MtChimney/scripts.pory"
	walk_up
# 134 "data/maps/MtChimney/scripts.pory"
	walk_up
# 135 "data/maps/MtChimney/scripts.pory"
	walk_right
# 136 "data/maps/MtChimney/scripts.pory"
	step_end
# 137 "data/maps/MtChimney/scripts.pory"

# 138 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitEast:
# 139 "data/maps/MtChimney/scripts.pory"
	walk_left
# 140 "data/maps/MtChimney/scripts.pory"
	walk_down
# 141 "data/maps/MtChimney/scripts.pory"
	walk_down
# 142 "data/maps/MtChimney/scripts.pory"
	walk_down
# 143 "data/maps/MtChimney/scripts.pory"
	walk_down
# 144 "data/maps/MtChimney/scripts.pory"
	walk_down
# 145 "data/maps/MtChimney/scripts.pory"
	walk_down
# 146 "data/maps/MtChimney/scripts.pory"
	walk_down
# 147 "data/maps/MtChimney/scripts.pory"
	step_end
# 148 "data/maps/MtChimney/scripts.pory"

# 149 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerNorth:
# 150 "data/maps/MtChimney/scripts.pory"
	walk_up
# 151 "data/maps/MtChimney/scripts.pory"
	walk_up
# 152 "data/maps/MtChimney/scripts.pory"
	walk_up
# 153 "data/maps/MtChimney/scripts.pory"
	walk_up
# 154 "data/maps/MtChimney/scripts.pory"
	walk_up
# 155 "data/maps/MtChimney/scripts.pory"
	walk_right
# 156 "data/maps/MtChimney/scripts.pory"
	walk_right
# 157 "data/maps/MtChimney/scripts.pory"
	step_end
# 158 "data/maps/MtChimney/scripts.pory"

# 159 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitNorth:
# 160 "data/maps/MtChimney/scripts.pory"
	walk_left
# 161 "data/maps/MtChimney/scripts.pory"
	walk_left
# 162 "data/maps/MtChimney/scripts.pory"
	walk_down
# 163 "data/maps/MtChimney/scripts.pory"
	walk_down
# 164 "data/maps/MtChimney/scripts.pory"
	walk_down
# 165 "data/maps/MtChimney/scripts.pory"
	walk_down
# 166 "data/maps/MtChimney/scripts.pory"
	walk_down
# 167 "data/maps/MtChimney/scripts.pory"
	walk_down
# 168 "data/maps/MtChimney/scripts.pory"
	walk_down
# 169 "data/maps/MtChimney/scripts.pory"
	step_end
# 170 "data/maps/MtChimney/scripts.pory"

# 171 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused1:
# 172 "data/maps/MtChimney/scripts.pory"
	walk_down
# 173 "data/maps/MtChimney/scripts.pory"
	walk_down
# 174 "data/maps/MtChimney/scripts.pory"
	walk_down
# 175 "data/maps/MtChimney/scripts.pory"
	walk_down
# 176 "data/maps/MtChimney/scripts.pory"
	walk_down
# 177 "data/maps/MtChimney/scripts.pory"
	walk_left
# 178 "data/maps/MtChimney/scripts.pory"
	walk_left
# 179 "data/maps/MtChimney/scripts.pory"
	walk_down
# 180 "data/maps/MtChimney/scripts.pory"
	walk_down
# 181 "data/maps/MtChimney/scripts.pory"
	walk_down
# 182 "data/maps/MtChimney/scripts.pory"
	walk_down
# 183 "data/maps/MtChimney/scripts.pory"
	walk_left
# 184 "data/maps/MtChimney/scripts.pory"
	walk_left
# 185 "data/maps/MtChimney/scripts.pory"
	walk_left
# 186 "data/maps/MtChimney/scripts.pory"
	walk_left
# 187 "data/maps/MtChimney/scripts.pory"
	walk_left
# 188 "data/maps/MtChimney/scripts.pory"
	walk_down
# 189 "data/maps/MtChimney/scripts.pory"
	step_end
# 190 "data/maps/MtChimney/scripts.pory"

# 191 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused2:
# 192 "data/maps/MtChimney/scripts.pory"
	walk_down
# 193 "data/maps/MtChimney/scripts.pory"
	walk_down
# 194 "data/maps/MtChimney/scripts.pory"
	walk_down
# 195 "data/maps/MtChimney/scripts.pory"
	walk_down
# 196 "data/maps/MtChimney/scripts.pory"
	walk_left
# 197 "data/maps/MtChimney/scripts.pory"
	walk_left
# 198 "data/maps/MtChimney/scripts.pory"
	walk_left
# 199 "data/maps/MtChimney/scripts.pory"
	walk_down
# 200 "data/maps/MtChimney/scripts.pory"
	step_end
# 201 "data/maps/MtChimney/scripts.pory"

# 202 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused3:
# 203 "data/maps/MtChimney/scripts.pory"
	walk_right
# 204 "data/maps/MtChimney/scripts.pory"
	walk_down
# 205 "data/maps/MtChimney/scripts.pory"
	walk_down
# 206 "data/maps/MtChimney/scripts.pory"
	walk_down
# 207 "data/maps/MtChimney/scripts.pory"
	walk_down
# 208 "data/maps/MtChimney/scripts.pory"
	walk_left
# 209 "data/maps/MtChimney/scripts.pory"
	walk_left
# 210 "data/maps/MtChimney/scripts.pory"
	walk_left
# 211 "data/maps/MtChimney/scripts.pory"
	walk_left
# 212 "data/maps/MtChimney/scripts.pory"
	walk_left
# 213 "data/maps/MtChimney/scripts.pory"
	walk_down
# 214 "data/maps/MtChimney/scripts.pory"
	walk_down
# 215 "data/maps/MtChimney/scripts.pory"
	walk_down
# 216 "data/maps/MtChimney/scripts.pory"
	walk_down
# 217 "data/maps/MtChimney/scripts.pory"
	step_end
# 218 "data/maps/MtChimney/scripts.pory"

# 219 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused4:
# 220 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 221 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 222 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 223 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 224 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 225 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 226 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 227 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 228 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 229 "data/maps/MtChimney/scripts.pory"
	walk_left
# 230 "data/maps/MtChimney/scripts.pory"
	walk_left
# 231 "data/maps/MtChimney/scripts.pory"
	walk_down
# 232 "data/maps/MtChimney/scripts.pory"
	walk_down
# 233 "data/maps/MtChimney/scripts.pory"
	walk_down
# 234 "data/maps/MtChimney/scripts.pory"
	walk_left
# 235 "data/maps/MtChimney/scripts.pory"
	walk_left
# 236 "data/maps/MtChimney/scripts.pory"
	walk_down
# 237 "data/maps/MtChimney/scripts.pory"
	walk_down
# 238 "data/maps/MtChimney/scripts.pory"
	walk_left
# 239 "data/maps/MtChimney/scripts.pory"
	walk_left
# 240 "data/maps/MtChimney/scripts.pory"
	walk_left
# 241 "data/maps/MtChimney/scripts.pory"
	walk_left
# 242 "data/maps/MtChimney/scripts.pory"
	walk_left
# 243 "data/maps/MtChimney/scripts.pory"
	walk_down
# 244 "data/maps/MtChimney/scripts.pory"
	step_end
# 245 "data/maps/MtChimney/scripts.pory"

# 246 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused5:
# 247 "data/maps/MtChimney/scripts.pory"
	delay_16
# 248 "data/maps/MtChimney/scripts.pory"
	delay_16
# 249 "data/maps/MtChimney/scripts.pory"
	delay_16
# 250 "data/maps/MtChimney/scripts.pory"
	walk_down
# 251 "data/maps/MtChimney/scripts.pory"
	walk_down
# 252 "data/maps/MtChimney/scripts.pory"
	walk_down
# 253 "data/maps/MtChimney/scripts.pory"
	walk_left
# 254 "data/maps/MtChimney/scripts.pory"
	walk_left
# 255 "data/maps/MtChimney/scripts.pory"
	walk_left
# 256 "data/maps/MtChimney/scripts.pory"
	walk_down
# 257 "data/maps/MtChimney/scripts.pory"
	step_end
# 258 "data/maps/MtChimney/scripts.pory"

# 259 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused6:
# 260 "data/maps/MtChimney/scripts.pory"
	delay_16
# 261 "data/maps/MtChimney/scripts.pory"
	walk_left
# 262 "data/maps/MtChimney/scripts.pory"
	walk_down
# 263 "data/maps/MtChimney/scripts.pory"
	walk_down
# 264 "data/maps/MtChimney/scripts.pory"
	walk_down
# 265 "data/maps/MtChimney/scripts.pory"
	walk_down
# 266 "data/maps/MtChimney/scripts.pory"
	walk_left
# 267 "data/maps/MtChimney/scripts.pory"
	walk_left
# 268 "data/maps/MtChimney/scripts.pory"
	walk_left
# 269 "data/maps/MtChimney/scripts.pory"
	walk_left
# 270 "data/maps/MtChimney/scripts.pory"
	walk_left
# 271 "data/maps/MtChimney/scripts.pory"
	walk_down
# 272 "data/maps/MtChimney/scripts.pory"
	walk_down
# 273 "data/maps/MtChimney/scripts.pory"
	walk_down
# 274 "data/maps/MtChimney/scripts.pory"
	walk_down
# 275 "data/maps/MtChimney/scripts.pory"
	step_end
# 276 "data/maps/MtChimney/scripts.pory"

# 277 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused7:
# 278 "data/maps/MtChimney/scripts.pory"
	delay_16
# 279 "data/maps/MtChimney/scripts.pory"
	walk_left
# 280 "data/maps/MtChimney/scripts.pory"
	walk_left
# 281 "data/maps/MtChimney/scripts.pory"
	walk_down
# 282 "data/maps/MtChimney/scripts.pory"
	walk_down
# 283 "data/maps/MtChimney/scripts.pory"
	walk_down
# 284 "data/maps/MtChimney/scripts.pory"
	walk_left
# 285 "data/maps/MtChimney/scripts.pory"
	walk_left
# 286 "data/maps/MtChimney/scripts.pory"
	walk_down
# 287 "data/maps/MtChimney/scripts.pory"
	walk_down
# 288 "data/maps/MtChimney/scripts.pory"
	walk_left
# 289 "data/maps/MtChimney/scripts.pory"
	walk_left
# 290 "data/maps/MtChimney/scripts.pory"
	walk_left
# 291 "data/maps/MtChimney/scripts.pory"
	walk_left
# 292 "data/maps/MtChimney/scripts.pory"
	walk_left
# 293 "data/maps/MtChimney/scripts.pory"
	walk_down
# 294 "data/maps/MtChimney/scripts.pory"
	step_end
# 295 "data/maps/MtChimney/scripts.pory"

# 296 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused8:
# 297 "data/maps/MtChimney/scripts.pory"
	delay_16
# 298 "data/maps/MtChimney/scripts.pory"
	walk_down
# 299 "data/maps/MtChimney/scripts.pory"
	walk_left
# 300 "data/maps/MtChimney/scripts.pory"
	walk_left
# 301 "data/maps/MtChimney/scripts.pory"
	walk_left
# 302 "data/maps/MtChimney/scripts.pory"
	walk_left
# 303 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_down
# 304 "data/maps/MtChimney/scripts.pory"
	step_end
# 305 "data/maps/MtChimney/scripts.pory"

# 306 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused9:
# 307 "data/maps/MtChimney/scripts.pory"
	walk_down
# 308 "data/maps/MtChimney/scripts.pory"
	walk_down
# 309 "data/maps/MtChimney/scripts.pory"
	walk_down
# 310 "data/maps/MtChimney/scripts.pory"
	walk_down
# 311 "data/maps/MtChimney/scripts.pory"
	walk_left
# 312 "data/maps/MtChimney/scripts.pory"
	walk_left
# 313 "data/maps/MtChimney/scripts.pory"
	walk_left
# 314 "data/maps/MtChimney/scripts.pory"
	walk_left
# 315 "data/maps/MtChimney/scripts.pory"
	walk_left
# 316 "data/maps/MtChimney/scripts.pory"
	walk_down
# 317 "data/maps/MtChimney/scripts.pory"
	walk_down
# 318 "data/maps/MtChimney/scripts.pory"
	walk_down
# 319 "data/maps/MtChimney/scripts.pory"
	walk_down
# 320 "data/maps/MtChimney/scripts.pory"
	step_end
# 321 "data/maps/MtChimney/scripts.pory"

# 322 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused10:
# 323 "data/maps/MtChimney/scripts.pory"
	walk_down
# 324 "data/maps/MtChimney/scripts.pory"
	step_end
# 325 "data/maps/MtChimney/scripts.pory"

# 326 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused11:
# 327 "data/maps/MtChimney/scripts.pory"
	walk_down
# 328 "data/maps/MtChimney/scripts.pory"
	walk_down
# 329 "data/maps/MtChimney/scripts.pory"
	walk_down
# 330 "data/maps/MtChimney/scripts.pory"
	walk_down
# 331 "data/maps/MtChimney/scripts.pory"
	walk_down
# 332 "data/maps/MtChimney/scripts.pory"
	walk_down
# 333 "data/maps/MtChimney/scripts.pory"
	walk_down
# 334 "data/maps/MtChimney/scripts.pory"
	step_end
# 335 "data/maps/MtChimney/scripts.pory"

# 336 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused12:
# 337 "data/maps/MtChimney/scripts.pory"
	delay_16
# 338 "data/maps/MtChimney/scripts.pory"
	delay_16
# 339 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 340 "data/maps/MtChimney/scripts.pory"
	delay_16
# 341 "data/maps/MtChimney/scripts.pory"
	walk_down
# 342 "data/maps/MtChimney/scripts.pory"
	walk_down
# 343 "data/maps/MtChimney/scripts.pory"
	walk_down
# 344 "data/maps/MtChimney/scripts.pory"
	walk_down
# 345 "data/maps/MtChimney/scripts.pory"
	walk_down
# 346 "data/maps/MtChimney/scripts.pory"
	step_end
# 347 "data/maps/MtChimney/scripts.pory"

# 348 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused13:
# 349 "data/maps/MtChimney/scripts.pory"
	delay_16
# 350 "data/maps/MtChimney/scripts.pory"
	delay_16
# 351 "data/maps/MtChimney/scripts.pory"
	delay_16
# 352 "data/maps/MtChimney/scripts.pory"
	delay_16
# 353 "data/maps/MtChimney/scripts.pory"
	delay_16
# 354 "data/maps/MtChimney/scripts.pory"
	delay_16
# 355 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 356 "data/maps/MtChimney/scripts.pory"
	delay_16
# 357 "data/maps/MtChimney/scripts.pory"
	walk_down
# 358 "data/maps/MtChimney/scripts.pory"
	walk_down
# 359 "data/maps/MtChimney/scripts.pory"
	step_end
# 360 "data/maps/MtChimney/scripts.pory"

# 361 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused14:
# 362 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 363 "data/maps/MtChimney/scripts.pory"
	walk_fast_left
# 364 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 365 "data/maps/MtChimney/scripts.pory"
	face_right
# 366 "data/maps/MtChimney/scripts.pory"
	step_end
# 367 "data/maps/MtChimney/scripts.pory"

# 368 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused15:
# 369 "data/maps/MtChimney/scripts.pory"
	walk_left
# 370 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_right
# 371 "data/maps/MtChimney/scripts.pory"
	delay_16
# 372 "data/maps/MtChimney/scripts.pory"
	step_end
# 373 "data/maps/MtChimney/scripts.pory"

# 374 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt1::
# 375 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
# 376 "data/maps/MtChimney/scripts.pory"
	end
# 377 "data/maps/MtChimney/scripts.pory"

# 378 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt2::
# 379 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
# 380 "data/maps/MtChimney/scripts.pory"
	end
# 381 "data/maps/MtChimney/scripts.pory"

# 382 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt3::
# 383 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN
# 384 "data/maps/MtChimney/scripts.pory"
	end
# 385 "data/maps/MtChimney/scripts.pory"

# 386 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha::
# 387 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaIntro, MtChimney_Text_TabithaDefeat
# 388 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 389 "data/maps/MtChimney/scripts.pory"
	end
# 390 "data/maps/MtChimney/scripts.pory"

# 391 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt2::
# 392 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_2, MtChimney_Text_Grunt2Intro, MtChimney_Text_Grunt2Defeat
# 393 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 394 "data/maps/MtChimney/scripts.pory"
	end
# 395 "data/maps/MtChimney/scripts.pory"

# 396 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt1::
# 397 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
# 398 "data/maps/MtChimney/scripts.pory"
	end
# 399 "data/maps/MtChimney/scripts.pory"

# 400 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt2::
# 401 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
# 402 "data/maps/MtChimney/scripts.pory"
	end
# 403 "data/maps/MtChimney/scripts.pory"

# 404 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt3::
# 405 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN
# 406 "data/maps/MtChimney/scripts.pory"
	end
# 407 "data/maps/MtChimney/scripts.pory"

# 408 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt4::
# 409 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN
# 410 "data/maps/MtChimney/scripts.pory"
	end
# 411 "data/maps/MtChimney/scripts.pory"

# 412 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt5::
# 413 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
# 414 "data/maps/MtChimney/scripts.pory"
	end
# 415 "data/maps/MtChimney/scripts.pory"

# 416 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt6::
# 417 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
# 418 "data/maps/MtChimney/scripts.pory"
	end
# 419 "data/maps/MtChimney/scripts.pory"

# 420 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MagmaPoochyena::
# 421 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bufoh, MSGBOX_SIGN
# 422 "data/maps/MtChimney/scripts.pory"
	end
# 423 "data/maps/MtChimney/scripts.pory"

# 424 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_AquaPoochyena::
# 425 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bushaa, MSGBOX_SIGN
# 426 "data/maps/MtChimney/scripts.pory"
	end
# 427 "data/maps/MtChimney/scripts.pory"

# 428 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine::
# 429 "data/maps/MtChimney/scripts.pory"
	lockall
# 430 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MachineOn
# 431 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_MachineOff
# 432 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
# 433 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_LeaveMeteoriteAlone
# 434 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
# 435 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_METEORITE
# 436 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECEIVED_METEORITE
# 437 "data/maps/MtChimney/scripts.pory"
	releaseall
# 438 "data/maps/MtChimney/scripts.pory"
	end
# 439 "data/maps/MtChimney/scripts.pory"

# 440 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LeaveMeteoriteAlone::
# 441 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
# 442 "data/maps/MtChimney/scripts.pory"
	releaseall
# 443 "data/maps/MtChimney/scripts.pory"
	end
# 444 "data/maps/MtChimney/scripts.pory"

# 445 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOff::
# 446 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
# 447 "data/maps/MtChimney/scripts.pory"
	releaseall
# 448 "data/maps/MtChimney/scripts.pory"
	end
# 449 "data/maps/MtChimney/scripts.pory"

# 450 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOn::
# 451 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoriteFittedOnMachine, MSGBOX_DEFAULT
# 452 "data/maps/MtChimney/scripts.pory"
	releaseall
# 453 "data/maps/MtChimney/scripts.pory"
	end
# 454 "data/maps/MtChimney/scripts.pory"

# 455 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RouteSign::
# 456 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
# 457 "data/maps/MtChimney/scripts.pory"
	end
# 458 "data/maps/MtChimney/scripts.pory"

# 459 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shelby::
# 460 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat, MtChimney_EventScript_DefeatedShelby
# 461 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 462 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RematchShelby
# 463 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
# 464 "data/maps/MtChimney/scripts.pory"
	release
# 465 "data/maps/MtChimney/scripts.pory"
	end
# 466 "data/maps/MtChimney/scripts.pory"

# 467 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DefeatedShelby::
# 468 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 469 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 470 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
# 471 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SHELBY_1
# 472 "data/maps/MtChimney/scripts.pory"
	release
# 473 "data/maps/MtChimney/scripts.pory"
	end
# 474 "data/maps/MtChimney/scripts.pory"

# 475 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RematchShelby::
# 476 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
# 477 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
# 478 "data/maps/MtChimney/scripts.pory"
	end
# 479 "data/maps/MtChimney/scripts.pory"

# 480 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Melissa::
# 481 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
# 482 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
# 483 "data/maps/MtChimney/scripts.pory"
	end
# 484 "data/maps/MtChimney/scripts.pory"

# 485 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sheila::
# 486 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
# 487 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
# 488 "data/maps/MtChimney/scripts.pory"
	end
# 489 "data/maps/MtChimney/scripts.pory"

# 490 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shirley::
# 491 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 492 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
# 493 "data/maps/MtChimney/scripts.pory"
	end
# 494 "data/maps/MtChimney/scripts.pory"

# 495 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1::
# 496 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_1, MtChimney_Text_Grunt1Intro, MtChimney_Text_Grunt1Defeat
# 497 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 498 "data/maps/MtChimney/scripts.pory"
	end
# 499 "data/maps/MtChimney/scripts.pory"

# 500 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sawyer::
# 501 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
# 502 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 503 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_SawyerRematch
# 504 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
# 505 "data/maps/MtChimney/scripts.pory"
	release
# 506 "data/maps/MtChimney/scripts.pory"
	end
# 507 "data/maps/MtChimney/scripts.pory"

# 508 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerDefeated::
# 509 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 510 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 511 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
# 512 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SAWYER_1
# 513 "data/maps/MtChimney/scripts.pory"
	release
# 514 "data/maps/MtChimney/scripts.pory"
	end
# 515 "data/maps/MtChimney/scripts.pory"

# 516 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerRematch::
# 517 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
# 518 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
# 519 "data/maps/MtChimney/scripts.pory"
	end
# 520 "data/maps/MtChimney/scripts.pory"

# 521 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoriteWillActivateVolcano:
# 522 "data/maps/MtChimney/scripts.pory"
	.string "The power contained in the METEORITE…\p"
# 523 "data/maps/MtChimney/scripts.pory"
	.string "By amplifying its power with this\n"
# 524 "data/maps/MtChimney/scripts.pory"
	.string "machine, MT. CHIMNEY's volcanic\l"
# 525 "data/maps/MtChimney/scripts.pory"
	.string "activity will instantly intensify…\p"
# 526 "data/maps/MtChimney/scripts.pory"
	.string "Its energy will grow deep inside\n"
# 527 "data/maps/MtChimney/scripts.pory"
	.string "the crater and…\l"
# 528 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…$"
# 529 "data/maps/MtChimney/scripts.pory"

# 530 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieIntro:
# 531 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: Hm?\n"
# 532 "data/maps/MtChimney/scripts.pory"
	.string "Who are you?\p"
# 533 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\n"
# 534 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\p"
# 535 "data/maps/MtChimney/scripts.pory"
	.string "I'd heard ARCHIE bemoaning a child\n"
# 536 "data/maps/MtChimney/scripts.pory"
	.string "who's been meddling in TEAM AQUA's\l"
# 537 "data/maps/MtChimney/scripts.pory"
	.string "affairs.\p"
# 538 "data/maps/MtChimney/scripts.pory"
	.string "It must be you he meant.\p"
# 539 "data/maps/MtChimney/scripts.pory"
	.string "Humph! So you're thinking of\n"
# 540 "data/maps/MtChimney/scripts.pory"
	.string "interfering with us, TEAM MAGMA?\p"
# 541 "data/maps/MtChimney/scripts.pory"
	.string "Now you listen.\n"
# 542 "data/maps/MtChimney/scripts.pory"
	.string "Long ago, living things used the\l"
# 543 "data/maps/MtChimney/scripts.pory"
	.string "land to live and grow.\p"
# 544 "data/maps/MtChimney/scripts.pory"
	.string "That is why land is all important!\n"
# 545 "data/maps/MtChimney/scripts.pory"
	.string "It is the cradle of all!\p"
# 546 "data/maps/MtChimney/scripts.pory"
	.string "That is why TEAM MAGMA is dedicated\n"
# 547 "data/maps/MtChimney/scripts.pory"
	.string "to the expansion of the land mass.\p"
# 548 "data/maps/MtChimney/scripts.pory"
	.string "It is for further advancement of\n"
# 549 "data/maps/MtChimney/scripts.pory"
	.string "humankind and POKéMON!\p"
# 550 "data/maps/MtChimney/scripts.pory"
	.string "And for that, we need the power of\n"
# 551 "data/maps/MtChimney/scripts.pory"
	.string "what sleeps within this mountain…\p"
# 552 "data/maps/MtChimney/scripts.pory"
	.string "Oh! There was no need for you to\n"
# 553 "data/maps/MtChimney/scripts.pory"
	.string "learn that much.\p"
# 554 "data/maps/MtChimney/scripts.pory"
	.string "But, no matter!\n"
# 555 "data/maps/MtChimney/scripts.pory"
	.string "I'll teach you the consequences of\l"
# 556 "data/maps/MtChimney/scripts.pory"
	.string "meddling in our grand design!$"
# 557 "data/maps/MtChimney/scripts.pory"

# 558 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieDefeat:
# 559 "data/maps/MtChimney/scripts.pory"
	.string "What?!\p"
# 560 "data/maps/MtChimney/scripts.pory"
	.string "I, MAXIE, was caught off guard?!$"
# 561 "data/maps/MtChimney/scripts.pory"

# 562 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieYouHaventSeenLastOfMagma:
# 563 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: But, enough.\n"
# 564 "data/maps/MtChimney/scripts.pory"
	.string "I will back off this time.\p"
# 565 "data/maps/MtChimney/scripts.pory"
	.string "But don't think that this is the last\n"
# 566 "data/maps/MtChimney/scripts.pory"
	.string "you've seen of TEAM MAGMA.\p"
# 567 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…\p"
# 568 "data/maps/MtChimney/scripts.pory"
	.string "Even without the METEORITE, if we\n"
# 569 "data/maps/MtChimney/scripts.pory"
	.string "obtain that ORB… Fufufu…$"
# 570 "data/maps/MtChimney/scripts.pory"

# 571 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaIntro:
# 572 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe!\p"
# 573 "data/maps/MtChimney/scripts.pory"
	.string "So you've come all the way here!\p"
# 574 "data/maps/MtChimney/scripts.pory"
	.string "But you're too late!\n"
# 575 "data/maps/MtChimney/scripts.pory"
	.string "I've already delivered the METEORITE\l"
# 576 "data/maps/MtChimney/scripts.pory"
	.string "from METEOR FALLS to the BOSS!$"
# 577 "data/maps/MtChimney/scripts.pory"

# 578 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaDefeat:
# 579 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…\p"
# 580 "data/maps/MtChimney/scripts.pory"
	.string "Even though I've lost, if our leader\n"
# 581 "data/maps/MtChimney/scripts.pory"
	.string "awakens that thing…$"
# 582 "data/maps/MtChimney/scripts.pory"

# 583 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaPostBattle:
# 584 "data/maps/MtChimney/scripts.pory"
	.string "BOSS, hurry!\n"
# 585 "data/maps/MtChimney/scripts.pory"
	.string "Give it the METEORITE's energy!\p"
# 586 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…$"
# 587 "data/maps/MtChimney/scripts.pory"

# 588 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Intro:
# 589 "data/maps/MtChimney/scripts.pory"
	.string "We of TEAM MAGMA are working hard for\n"
# 590 "data/maps/MtChimney/scripts.pory"
	.string "everyone's sake.\p"
# 591 "data/maps/MtChimney/scripts.pory"
	.string "Like, if that thing's power made more\n"
# 592 "data/maps/MtChimney/scripts.pory"
	.string "land, there'd be more places to live.\p"
# 593 "data/maps/MtChimney/scripts.pory"
	.string "Everyone'd be happy!$"
# 594 "data/maps/MtChimney/scripts.pory"

# 595 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Defeat:
# 596 "data/maps/MtChimney/scripts.pory"
	.string "Hunh?\n"
# 597 "data/maps/MtChimney/scripts.pory"
	.string "What do you mean I lost?$"
# 598 "data/maps/MtChimney/scripts.pory"

# 599 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2PostBattle:
# 600 "data/maps/MtChimney/scripts.pory"
	.string "Our BOSS says, “It will make everyone\n"
# 601 "data/maps/MtChimney/scripts.pory"
	.string "happy.”\p"
# 602 "data/maps/MtChimney/scripts.pory"
	.string "But why does everyone keep getting\n"
# 603 "data/maps/MtChimney/scripts.pory"
	.string "in our way?$"
# 604 "data/maps/MtChimney/scripts.pory"

# 605 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Intro:
# 606 "data/maps/MtChimney/scripts.pory"
	.string "If there were more land, I'd be able\n"
# 607 "data/maps/MtChimney/scripts.pory"
	.string "to get a big house of my own!\p"
# 608 "data/maps/MtChimney/scripts.pory"
	.string "I'm going to build it on hardened lava!$"
# 609 "data/maps/MtChimney/scripts.pory"

# 610 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Defeat:
# 611 "data/maps/MtChimney/scripts.pory"
	.string "My dream of a big house…$"
# 612 "data/maps/MtChimney/scripts.pory"

# 613 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1PostBattle:
# 614 "data/maps/MtChimney/scripts.pory"
	.string "A kid like you, you ought to be\n"
# 615 "data/maps/MtChimney/scripts.pory"
	.string "splashing about in the waves!$"
# 616 "data/maps/MtChimney/scripts.pory"

# 617 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TeamAquaAlwaysMessingWithPlans:
# 618 "data/maps/MtChimney/scripts.pory"
	.string "That annoying TEAM AQUA…\n"
# 619 "data/maps/MtChimney/scripts.pory"
	.string "They always mess with our plans!$"
# 620 "data/maps/MtChimney/scripts.pory"

# 621 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoritesPackAmazingPower:
# 622 "data/maps/MtChimney/scripts.pory"
	.string "METEORITES pack amazing power!$"
# 623 "data/maps/MtChimney/scripts.pory"

# 624 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouBetterNotMessWithUs:
# 625 "data/maps/MtChimney/scripts.pory"
	.string "You'd better not mess with us!\p"
# 626 "data/maps/MtChimney/scripts.pory"
	.string "We're trying to awaken that thing\n"
# 627 "data/maps/MtChimney/scripts.pory"
	.string "for the benefit of everyone!$"
# 628 "data/maps/MtChimney/scripts.pory"

# 629 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_AquasNameSimilar:
# 630 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM MAGMA!\p"
# 631 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM AQUA!\p"
# 632 "data/maps/MtChimney/scripts.pory"
	.string "It totally annoys me that they'd\n"
# 633 "data/maps/MtChimney/scripts.pory"
	.string "use a name like ours!$"
# 634 "data/maps/MtChimney/scripts.pory"

# 635 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_DouseThemInFire:
# 636 "data/maps/MtChimney/scripts.pory"
	.string "Yeah!\n"
# 637 "data/maps/MtChimney/scripts.pory"
	.string "Douse them in fire!$"
# 638 "data/maps/MtChimney/scripts.pory"

# 639 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_KeepMakingMoreLand:
# 640 "data/maps/MtChimney/scripts.pory"
	.string "We're going to keep making more land!$"
# 641 "data/maps/MtChimney/scripts.pory"

# 642 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bufoh:
# 643 "data/maps/MtChimney/scripts.pory"
	.string "Bufoh!$"
# 644 "data/maps/MtChimney/scripts.pory"

# 645 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieGoStopTeamMagma:
# 646 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grr, {PLAYER}!\n"
# 647 "data/maps/MtChimney/scripts.pory"
	.string "I should've guessed you'd show up!\p"
# 648 "data/maps/MtChimney/scripts.pory"
	.string "See for yourself what the fanatics\n"
# 649 "data/maps/MtChimney/scripts.pory"
	.string "of TEAM MAGMA are up to!\p"
# 650 "data/maps/MtChimney/scripts.pory"
	.string "They're trying to inject the stolen\n"
# 651 "data/maps/MtChimney/scripts.pory"
	.string "METEORITE's power into the volcano!\p"
# 652 "data/maps/MtChimney/scripts.pory"
	.string "Doing something like that will cause\n"
# 653 "data/maps/MtChimney/scripts.pory"
	.string "the volcano's eruption!$"
# 654 "data/maps/MtChimney/scripts.pory"

# 655 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieIHaveMyHandsFull:
# 656 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grrr…\p"
# 657 "data/maps/MtChimney/scripts.pory"
	.string "I want to stop that MAXIE,\n"
# 658 "data/maps/MtChimney/scripts.pory"
	.string "but I can't!\p"
# 659 "data/maps/MtChimney/scripts.pory"
	.string "Not when I have my hands full battling\n"
# 660 "data/maps/MtChimney/scripts.pory"
	.string "three opponents at once!$"
# 661 "data/maps/MtChimney/scripts.pory"

# 662 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieThankYou:
# 663 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: {PLAYER}!\n"
# 664 "data/maps/MtChimney/scripts.pory"
	.string "Thank you!\p"
# 665 "data/maps/MtChimney/scripts.pory"
	.string "With your help, we thwarted TEAM\n"
# 666 "data/maps/MtChimney/scripts.pory"
	.string "MAGMA's destructive plan!\p"
# 667 "data/maps/MtChimney/scripts.pory"
	.string "But… You…\n"
# 668 "data/maps/MtChimney/scripts.pory"
	.string "Whose side are you on?\p"
# 669 "data/maps/MtChimney/scripts.pory"
	.string "Ah, it doesn't matter.\p"
# 670 "data/maps/MtChimney/scripts.pory"
	.string "We will remain vigilant and keep up\n"
# 671 "data/maps/MtChimney/scripts.pory"
	.string "our pursuit of TEAM MAGMA.\p"
# 672 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER}, we shall meet again!$"
# 673 "data/maps/MtChimney/scripts.pory"

# 674 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmaOutnumbersUs:
# 675 "data/maps/MtChimney/scripts.pory"
	.string "Darn… TEAM MAGMA outnumbers us!\n"
# 676 "data/maps/MtChimney/scripts.pory"
	.string "We can't keep up with them!$"
# 677 "data/maps/MtChimney/scripts.pory"

# 678 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LessHabitatForWaterPokemon:
# 679 "data/maps/MtChimney/scripts.pory"
	.string "If they expand the land, there'll be\n"
# 680 "data/maps/MtChimney/scripts.pory"
	.string "less habitats for WATER POKéMON!$"
# 681 "data/maps/MtChimney/scripts.pory"

# 682 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmasNameSimilar:
# 683 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM AQUA!\p"
# 684 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM MAGMA!\p"
# 685 "data/maps/MtChimney/scripts.pory"
	.string "It burns me up that they'd use such\n"
# 686 "data/maps/MtChimney/scripts.pory"
	.string "a confusing name!$"
# 687 "data/maps/MtChimney/scripts.pory"

# 688 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bushaa:
# 689 "data/maps/MtChimney/scripts.pory"
	.string "Bushaa!$"
# 690 "data/maps/MtChimney/scripts.pory"

# 691 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LavaCookiesJust200:
# 692 "data/maps/MtChimney/scripts.pory"
	.string "LAVA COOKIES are MT. CHIMNEY's local\n"
# 693 "data/maps/MtChimney/scripts.pory"
	.string "specialty.\p"
# 694 "data/maps/MtChimney/scripts.pory"
	.string "Try one. It's just ¥200.$"
# 695 "data/maps/MtChimney/scripts.pory"

# 696 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ThankYouDear:
# 697 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, dear!$"
# 698 "data/maps/MtChimney/scripts.pory"

# 699 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouveNotGotTheMoney:
# 700 "data/maps/MtChimney/scripts.pory"
	.string "Oh, dear. You can't buy a thing if\n"
# 701 "data/maps/MtChimney/scripts.pory"
	.string "you've not got the money.$"
# 702 "data/maps/MtChimney/scripts.pory"

# 703 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_OhFineThen:
# 704 "data/maps/MtChimney/scripts.pory"
	.string "Oh, fine then.$"
# 705 "data/maps/MtChimney/scripts.pory"

# 706 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoriteFittedOnMachine:
# 707 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 708 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 709 "data/maps/MtChimney/scripts.pory"
	.string "The machine seems to be storing\n"
# 710 "data/maps/MtChimney/scripts.pory"
	.string "energy in the METEORITE.$"
# 711 "data/maps/MtChimney/scripts.pory"

# 712 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RemoveTheMeteorite:
# 713 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 714 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 715 "data/maps/MtChimney/scripts.pory"
	.string "Do you want to remove the METEORITE?$"
# 716 "data/maps/MtChimney/scripts.pory"

# 717 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerRemovedMeteorite:
# 718 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} removed the METEORITE from\n"
# 719 "data/maps/MtChimney/scripts.pory"
	.string "the mysterious machine.$"
# 720 "data/maps/MtChimney/scripts.pory"

# 721 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerLeftMeteorite:
# 722 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} left the METEORITE where\n"
# 723 "data/maps/MtChimney/scripts.pory"
	.string "it was.$"
# 724 "data/maps/MtChimney/scripts.pory"

# 725 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MachineMakesNoResponse:
# 726 "data/maps/MtChimney/scripts.pory"
	.string "This mysterious machine…\n"
# 727 "data/maps/MtChimney/scripts.pory"
	.string "It makes no response whatsoever.$"
# 728 "data/maps/MtChimney/scripts.pory"

# 729 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RouteSign:
# 730 "data/maps/MtChimney/scripts.pory"
	.string "{DOWN_ARROW} JAGGED PATH\n"
# 731 "data/maps/MtChimney/scripts.pory"
	.string "LAVARIDGE TOWN AHEAD$"
# 732 "data/maps/MtChimney/scripts.pory"

# 733 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyIntro:
# 734 "data/maps/MtChimney/scripts.pory"
	.string "I've been to the hot springs and\n"
# 735 "data/maps/MtChimney/scripts.pory"
	.string "refreshed my tired bones.\l"
# 736 "data/maps/MtChimney/scripts.pory"
	.string "Right now I'm feeling strong!$"
# 737 "data/maps/MtChimney/scripts.pory"

# 738 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyDefeat:
# 739 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 740 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 741 "data/maps/MtChimney/scripts.pory"

# 742 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostBattle:
# 743 "data/maps/MtChimney/scripts.pory"
	.string "Well, well, I've lost. I can't call\n"
# 744 "data/maps/MtChimney/scripts.pory"
	.string "myself an EXPERT now, can I?$"
# 745 "data/maps/MtChimney/scripts.pory"

# 746 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRegister:
# 747 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, child. It was fun, as if\n"
# 748 "data/maps/MtChimney/scripts.pory"
	.string "I were battling my own grandchild.\p"
# 749 "data/maps/MtChimney/scripts.pory"
	.string "Please, come see me again for\n"
# 750 "data/maps/MtChimney/scripts.pory"
	.string "a rematch.$"
# 751 "data/maps/MtChimney/scripts.pory"

# 752 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchIntro:
# 753 "data/maps/MtChimney/scripts.pory"
	.string "If you can mesh your heart with those\n"
# 754 "data/maps/MtChimney/scripts.pory"
	.string "of your POKéMON, why, you should be\l"
# 755 "data/maps/MtChimney/scripts.pory"
	.string "able to achieve great things.$"
# 756 "data/maps/MtChimney/scripts.pory"

# 757 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchDefeat:
# 758 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 759 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 760 "data/maps/MtChimney/scripts.pory"

# 761 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostRematch:
# 762 "data/maps/MtChimney/scripts.pory"
	.string "Perhaps your heart has become one\n"
# 763 "data/maps/MtChimney/scripts.pory"
	.string "with the hearts of your POKéMON.$"
# 764 "data/maps/MtChimney/scripts.pory"

# 765 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaIntro:
# 766 "data/maps/MtChimney/scripts.pory"
	.string "I've got the fire in me, baby.\n"
# 767 "data/maps/MtChimney/scripts.pory"
	.string "I can't stand it! I have to battle!$"
# 768 "data/maps/MtChimney/scripts.pory"

# 769 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaDefeat:
# 770 "data/maps/MtChimney/scripts.pory"
	.string "Ooh, that was a scorching-hot match!$"
# 771 "data/maps/MtChimney/scripts.pory"

# 772 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaPostBattle:
# 773 "data/maps/MtChimney/scripts.pory"
	.string "The heat of MT. CHIMNEY warms\n"
# 774 "data/maps/MtChimney/scripts.pory"
	.string "me up, baby!$"
# 775 "data/maps/MtChimney/scripts.pory"

# 776 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaIntro:
# 777 "data/maps/MtChimney/scripts.pory"
	.string "I've finally made it to MT. CHIMNEY.\n"
# 778 "data/maps/MtChimney/scripts.pory"
	.string "I want to make my POKéMON battle!$"
# 779 "data/maps/MtChimney/scripts.pory"

# 780 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaDefeat:
# 781 "data/maps/MtChimney/scripts.pory"
	.string "The way you battle…\n"
# 782 "data/maps/MtChimney/scripts.pory"
	.string "It's like a MT. CHIMNEY eruption!$"
# 783 "data/maps/MtChimney/scripts.pory"

# 784 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaPostBattle:
# 785 "data/maps/MtChimney/scripts.pory"
	.string "Like I said, I've finally made it to\n"
# 786 "data/maps/MtChimney/scripts.pory"
	.string "MT. CHIMNEY. It would be a shame if\l"
# 787 "data/maps/MtChimney/scripts.pory"
	.string "I only do a little sightseeing…\p"
# 788 "data/maps/MtChimney/scripts.pory"
	.string "I want to get in some battles and buy\n"
# 789 "data/maps/MtChimney/scripts.pory"
	.string "COOKIES as souvenirs.$"
# 790 "data/maps/MtChimney/scripts.pory"

# 791 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyIntro:
# 792 "data/maps/MtChimney/scripts.pory"
	.string "Since I bathed in the hot springs,\n"
# 793 "data/maps/MtChimney/scripts.pory"
	.string "I've been feeling great!\l"
# 794 "data/maps/MtChimney/scripts.pory"
	.string "I'm sure I'm going to win!$"
# 795 "data/maps/MtChimney/scripts.pory"

# 796 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyDefeat:
# 797 "data/maps/MtChimney/scripts.pory"
	.string "Yowch!\n"
# 798 "data/maps/MtChimney/scripts.pory"
	.string "I'm getting a chill out of the water.$"
# 799 "data/maps/MtChimney/scripts.pory"

# 800 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyPostBattle:
# 801 "data/maps/MtChimney/scripts.pory"
	.string "I'll have to take another dip in the\n"
# 802 "data/maps/MtChimney/scripts.pory"
	.string "hot springs. Want to join me?\p"
# 803 "data/maps/MtChimney/scripts.pory"
	.string "Just joking!$"
# 804 "data/maps/MtChimney/scripts.pory"

# 805 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerIntro:
# 806 "data/maps/MtChimney/scripts.pory"
	.string "This is one fine mountain! Plenty of\n"
# 807 "data/maps/MtChimney/scripts.pory"
	.string "hot people around for company!$"
# 808 "data/maps/MtChimney/scripts.pory"

# 809 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerDefeat:
# 810 "data/maps/MtChimney/scripts.pory"
	.string "Oh, you're a real firebrand, too!$"
# 811 "data/maps/MtChimney/scripts.pory"

# 812 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostBattle:
# 813 "data/maps/MtChimney/scripts.pory"
	.string "I think I need a dip in LAVARIDGE\n"
# 814 "data/maps/MtChimney/scripts.pory"
	.string "HOT SPRING with the locals!$"
# 815 "data/maps/MtChimney/scripts.pory"

# 816 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRegister:
# 817 "data/maps/MtChimney/scripts.pory"
	.string "I like little fireballs like you.\n"
# 818 "data/maps/MtChimney/scripts.pory"
	.string "Let me register you in my POKéNAV.$"
# 819 "data/maps/MtChimney/scripts.pory"

# 820 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchIntro:
# 821 "data/maps/MtChimney/scripts.pory"
	.string "I'm happily surrounded by hot people\n"
# 822 "data/maps/MtChimney/scripts.pory"
	.string "around these parts. I won't lose!$"
# 823 "data/maps/MtChimney/scripts.pory"

# 824 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchDefeat:
# 825 "data/maps/MtChimney/scripts.pory"
	.string "Gosh, you're still the same\n"
# 826 "data/maps/MtChimney/scripts.pory"
	.string "firebrand as before!$"
# 827 "data/maps/MtChimney/scripts.pory"

# 828 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostRematch:
# 829 "data/maps/MtChimney/scripts.pory"
	.string "Actually, it really is hot here.\n"
# 830 "data/maps/MtChimney/scripts.pory"
	.string "I'm overdressed for these parts.$"
