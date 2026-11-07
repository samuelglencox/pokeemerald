# 1 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 2 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_MapScripts::
# 3 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.byte 0
# 4 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 5 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre::
# 6 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 7 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, LOCALID_SEAFLOOR_CAVERN_ARCHIE
# 8 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, LOCALID_SEAFLOOR_CAVERN_MAXIE
# 9 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, LOCALID_SEAFLOOR_CAVERN_GRUNT_1
# 10 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, LOCALID_SEAFLOOR_CAVERN_GRUNT_2
# 11 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 12 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applywaitmovement LOCALID_PLAYER, SeafloorCavern_Room9_Movement_Delay32
# 13 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 14 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieHoldItRightThere, MSGBOX_DEFAULT
# 15 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 16 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8004
# 17 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 18 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applywaitmovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieApproachPlayer
# 19 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieSoItWasYou, MSGBOX_DEFAULT
# 20 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applywaitmovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 21 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieBeholdKyogre, MSGBOX_DEFAULT
# 22 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applywaitmovement VAR_0x8004, Common_Movement_FacePlayer
# 23 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieYouMustDisappear, MSGBOX_DEFAULT
# 24 "data/maps/SeafloorCavern_Room9/scripts.pory"
	trainerbattle_no_intro TRAINER_ARCHIE, SeafloorCavern_Room9_Text_ArchieDefeat
# 25 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWithThisRedOrb, MSGBOX_DEFAULT
# 26 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setweather WEATHER_NONE
# 27 "data/maps/SeafloorCavern_Room9/scripts.pory"
	doweather
# 28 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special Script_FadeOutMapMusic
# 29 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_RedOrbShinesByItself, MSGBOX_DEFAULT
# 30 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special WaitWeather
# 31 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 1
# 32 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_M_DETECT
# 33 "data/maps/SeafloorCavern_Room9/scripts.pory"
	dofieldeffectsparkle 16, 42, 0
# 34 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 35 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 36 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 0
# 37 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 38 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_ORB
# 39 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special DoOrbEffect
# 40 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 41 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 42 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 43 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 150
# 44 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_SEAFLOOR_CAVERN_KYOGRE_SLEEPING
# 45 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_SEAFLOOR_CAVERN_KYOGRE
# 46 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 47 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 60
# 48 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applywaitmovement LOCALID_SEAFLOOR_CAVERN_KYOGRE, SeafloorCavern_Room9_Movement_KyogreApproach
# 49 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special FadeOutOrbEffect
# 50 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 51 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 52 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 53 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 54 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 55 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 56 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applywaitmovement LOCALID_SEAFLOOR_CAVERN_KYOGRE, SeafloorCavern_Room9_Movement_KyogreExit
# 57 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_SEAFLOOR_CAVERN_KYOGRE
# 58 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 4
# 59 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 2  @ vertical pan
# 60 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 61 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 62 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 63 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 64 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 65 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 30
# 66 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, LOCALID_SEAFLOOR_CAVERN_ARCHIE
# 67 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, LOCALID_SEAFLOOR_CAVERN_MAXIE
# 68 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, LOCALID_SEAFLOOR_CAVERN_GRUNT_1
# 69 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, LOCALID_SEAFLOOR_CAVERN_GRUNT_2
# 70 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo, MSGBOX_DEFAULT
# 71 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_LOGIN
# 72 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 73 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieAMessageFromOutside, MSGBOX_DEFAULT
# 74 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 75 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applywaitmovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieListenMessage
# 76 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard, MSGBOX_DEFAULT
# 77 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 78 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_OFF
# 79 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 20
# 80 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applywaitmovement VAR_0x8004, Common_Movement_WalkInPlaceFasterDown
# 81 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear, MSGBOX_DEFAULT
# 82 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 83 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8005
# 84 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8006
# 85 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8007
# 86 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8007, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 87 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8006, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 88 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_MaxieArrive
# 89 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 90 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applywaitmovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 91 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought, MSGBOX_DEFAULT
# 92 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 93 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applywaitmovement VAR_0x8004, Common_Movement_ExclamationMark
# 94 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applywaitmovement VAR_0x8004, Common_Movement_Delay48
# 95 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty, MSGBOX_DEFAULT
# 96 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue, MSGBOX_DEFAULT
# 97 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 98 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_MaxieExit
# 99 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieExit
# 100 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 101 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieComeOnPlayer, MSGBOX_DEFAULT
# 102 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_ROUTE128_STATE, 1
# 103 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 1
# 104 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 105 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 106 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 107 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 108 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON
# 109 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE
# 110 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
# 111 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 112 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_ARCHIE
# 113 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_MAXIE
# 114 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_SYS_WEATHER_CTRL
# 115 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN
# 116 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 117 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 2
# 118 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SEAFLOOR_CAVERN_STATE, 1
# 119 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
# 120 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
# 121 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
# 122 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE
# 123 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS
# 124 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 125 "data/maps/SeafloorCavern_Room9/scripts.pory"
	warp MAP_ROUTE128, 38, 22
# 126 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 127 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
# 128 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 129 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 130 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieApproachPlayer:
# 131 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 132 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 133 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 134 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 135 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 136 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 137 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 138 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 139 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 140 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused1:
# 141 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 142 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 143 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 144 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 145 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieListenMessage:
# 146 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 147 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 148 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 149 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 150 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused2:
# 151 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 152 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 153 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 154 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieExit:
# 155 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 156 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 157 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 158 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 159 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_in_place_faster_right
# 160 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 161 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 162 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreApproach:
# 163 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 164 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 165 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 166 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 167 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 168 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 169 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 170 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 171 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 172 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 173 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 174 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 175 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreExit:
# 176 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 177 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 178 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 179 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 180 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieArrive:
# 181 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 182 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 183 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 184 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 185 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 186 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 187 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 188 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieExit:
# 189 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 190 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 191 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 192 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 193 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MagmaGruntArrive:
# 194 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 195 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 196 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 197 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 198 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 199 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 200 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Delay32:
# 201 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 202 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 203 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 204 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 205 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieHoldItRightThere:
# 206 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Hold it right there.$"
# 207 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 208 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieSoItWasYou:
# 209 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Fufufu…\n"
# 210 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "So it was you, after all.$"
# 211 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 212 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieBeholdKyogre:
# 213 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Behold!\p"
# 214 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "See how beautiful it is, the sleeping\n"
# 215 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "form of the ancient POKéMON KYOGRE!\p"
# 216 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I have waited so long for this day to\n"
# 217 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "come…$"
# 218 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 219 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieYouMustDisappear:
# 220 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: It surprises me, how you've\n"
# 221 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "managed to chase me here.\p"
# 222 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But that's all over now.\p"
# 223 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "For the realization of my dream,\n"
# 224 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "you must disappear now!$"
# 225 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 226 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieDefeat:
# 227 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What?!\n"
# 228 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I lost to a mere child like you?!$"
# 229 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 230 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWithThisRedOrb:
# 231 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Fufufu…\p"
# 232 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I commend you. I must recognize that\n"
# 233 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "you are truly gifted.\p"
# 234 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But!\n"
# 235 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I have this in my possession!\p"
# 236 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "With this RED ORB, I can make KYOGRE…$"
# 237 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 238 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_RedOrbShinesByItself:
# 239 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The RED ORB suddenly began shining\n"
# 240 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "by itself!$"
# 241 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 242 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo:
# 243 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: What?!\p"
# 244 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I didn't do anything.\n"
# 245 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why did the RED ORB…\p"
# 246 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Where did KYOGRE go?$"
# 247 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 248 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieAMessageFromOutside:
# 249 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Hm? It's a message from our\n"
# 250 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "members outside…$"
# 251 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 252 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard:
# 253 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Yes, what is it?\p"
# 254 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hm…\n"
# 255 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "It's raining heavily?\p"
# 256 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Good… That should have happened.\n"
# 257 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That is why we awakened KYOGRE,\l"
# 258 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "to realize TEAM AQUA's vision of\l"
# 259 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "expanding the sea.\p"
# 260 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What?!\p"
# 261 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "It's raining far harder than we\n"
# 262 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "envisioned? You're in danger?\p"
# 263 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That can't be…\n"
# 264 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That's just not possible…\p"
# 265 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hold your position and monitor\n"
# 266 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "the situation!$"
# 267 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 268 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear:
# 269 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: There's something wrong…\p"
# 270 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The RED ORB is supposed to awaken\n"
# 271 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "and control KYOGRE…\p"
# 272 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But… Why?\n"
# 273 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why did KYOGRE disappear?\p"
# 274 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why?!$"
# 275 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 276 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought:
# 277 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "MAXIE: What have you wrought?\p"
# 278 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE… You've finally awoken KYOGRE,\n"
# 279 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "haven't you?\p"
# 280 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What will happen to the world if this\n"
# 281 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "downpour continues for all eternity?\p"
# 282 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The world's landmass will drown in\n"
# 283 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "the deepening sea…$"
# 284 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 285 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty:
# 286 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: W-what?!\n"
# 287 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Don't get all high and mighty with me!\p"
# 288 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Wasn't it you, TEAM MAGMA, that\n"
# 289 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "infuriated GROUDON?\p"
# 290 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "So long as I have this RED ORB,\n"
# 291 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I should be able to control KYOGRE…\p"
# 292 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I should be able to control it…$"
# 293 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 294 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue:
# 295 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "MAXIE: We don't have the time to\n"
# 296 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "argue about it here!\p"
# 297 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Get outside and see for yourself!\p"
# 298 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "See if what you've wrought is the\n"
# 299 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "world that we desired!$"
# 300 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 301 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieComeOnPlayer:
# 302 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "MAXIE: {PLAYER}, come on, you have\n"
# 303 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "to get out of here, too!$"
