# 1 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 2 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_MapScripts::
# 3 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MeteorFalls_1F_1R_OnLoad
# 4 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.byte 0
# 5 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 6 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_OnLoad:
# 7 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, MeteorFalls_1F_1R_EventScript_OpenStevensCave
# 8 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 9 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 10 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_OpenStevensCave::
# 11 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 1, METATILE_MeteorFalls_CaveEntrance_Top, TRUE
# 12 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 3, 2, METATILE_MeteorFalls_CaveEntrance_Left, TRUE
# 13 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 2, METATILE_MeteorFalls_CaveEntrance_Bottom, FALSE
# 14 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 5, 2, METATILE_MeteorFalls_CaveEntrance_Right, TRUE
# 15 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	return
# 16 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 17 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene::
# 18 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lockall
# 19 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 20 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_FaceDown
# 21 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 30
# 22 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applywaitmovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceDown
# 23 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_WithThisMeteorite, MSGBOX_DEFAULT
# 24 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 25 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceFasterUp
# 26 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceFasterUp
# 27 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 28 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playse SE_PIN
# 29 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applywaitmovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, Common_Movement_ExclamationMark
# 30 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applywaitmovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, Common_Movement_Delay48
# 31 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_DontExpectMercyFromMagma, MSGBOX_DEFAULT
# 32 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 33 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applywaitmovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, MeteorFalls_1F_1R_Movement_MagmaGruntApproachPlayer
# 34 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_HoldItRightThereMagma, MSGBOX_DEFAULT
# 35 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 36 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 37 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceFasterLeft
# 38 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 39 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 40 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_METEOR_FALLS_ARCHIE
# 41 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_METEOR_FALLS_AQUA_GRUNT_1
# 42 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_METEOR_FALLS_AQUA_GRUNT_2
# 43 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 44 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieArrive
# 45 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1Arrive
# 46 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2Arrive
# 47 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 48 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceFasterLeft
# 49 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 50 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 51 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_BeSeeingYouTeamAqua, MSGBOX_DEFAULT
# 52 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 53 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay
# 54 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, MeteorFalls_1F_1R_Movement_MagmaGrunt1Exit
# 55 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_2, MeteorFalls_1F_1R_Movement_MagmaGrunt2Exit
# 56 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 57 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_METEOR_FALLS_MAGMA_GRUNT_1
# 58 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_METEOR_FALLS_MAGMA_GRUNT_2
# 59 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applywaitmovement LOCALID_METEOR_FALLS_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieApproachPlayer
# 60 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieSeenYouBefore, MSGBOX_DEFAULT
# 61 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 62 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachArchie
# 63 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachArchie
# 64 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 65 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_BossWeShouldChaseMagma, MSGBOX_DEFAULT
# 66 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applywaitmovement LOCALID_METEOR_FALLS_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 67 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieYesNoTellingWhatMagmaWillDo, MSGBOX_DEFAULT
# 68 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applywaitmovement LOCALID_METEOR_FALLS_ARCHIE, Common_Movement_WalkInPlaceFasterLeft
# 69 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieFarewell, MSGBOX_DEFAULT
# 70 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 71 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieExit
# 72 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1Exit
# 73 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2Exit
# 74 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 75 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	fadedefaultbgm
# 76 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_METEOR_FALLS_ARCHIE
# 77 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_METEOR_FALLS_AQUA_GRUNT_1
# 78 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_METEOR_FALLS_AQUA_GRUNT_2
# 79 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA
# 80 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_ARCHIE_METEOR_FALLS
# 81 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
# 82 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_METEOR_FALLS_STATE, 1
# 83 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	releaseall
# 84 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 85 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 86 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGruntApproachPlayer:
# 87 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 88 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 89 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 90 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 91 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 92 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGrunt1Exit:
# 93 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 94 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 95 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 96 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 97 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 98 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 99 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 100 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 101 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 102 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 103 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 104 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGrunt2Exit:
# 105 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 106 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 107 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 108 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 109 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 110 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 111 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 112 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 113 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 114 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 115 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 116 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 117 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieArrive:
# 118 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 119 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 120 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 121 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 122 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 123 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 124 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 125 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 126 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1Arrive:
# 127 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 128 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 129 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 130 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 131 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 132 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 133 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 134 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 135 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 136 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2Arrive:
# 137 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 138 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 139 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 140 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 141 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 142 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 143 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 144 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 145 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 146 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieExit:
# 147 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 148 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 149 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 150 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 151 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 152 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 153 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 154 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 155 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 156 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieApproachPlayer:
# 157 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 158 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 159 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 160 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 161 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_left
# 162 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 163 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 164 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1Exit:
# 165 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 166 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 167 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 168 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 169 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 170 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 171 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 172 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 173 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 174 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 175 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 176 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachArchie:
# 177 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 178 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 179 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 180 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 181 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 182 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 183 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2Exit:
# 184 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 185 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 186 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 187 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 188 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 189 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 190 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 191 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 192 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 193 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 194 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 195 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 196 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachArchie:
# 197 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 198 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 199 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 200 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 201 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 202 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 203 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay:
# 204 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_down
# 205 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_4
# 206 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_right
# 207 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock_facing_direction
# 208 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 209 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	unlock_facing_direction
# 210 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_right
# 211 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 212 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 213 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_ProfCozmo::
# 214 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 215 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	faceplayer
# 216 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto_if_set FLAG_MET_PROF_COZMO, MeteorFalls_1F_1R_EventScript_MetCozmo
# 217 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_PROF_COZMO
# 218 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_MeetProfCozmo, MSGBOX_DEFAULT
# 219 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
# 220 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 221 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 222 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_MetCozmo::
# 223 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney, MSGBOX_DEFAULT
# 224 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
# 225 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 226 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 227 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_WithThisMeteorite:
# 228 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe!\p"
# 229 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "With this METEORITE, that thing in\n"
# 230 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "MT. CHIMNEY will…$"
# 231 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 232 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_DontExpectMercyFromMagma:
# 233 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Heh?\p"
# 234 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I don't know who you are, but if you get\n"
# 235 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "in the way of TEAM MAGMA, don't\l"
# 236 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "expect any mercy!$"
# 237 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 238 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_HoldItRightThereMagma:
# 239 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hold it right there, TEAM MAGMA!\p"
# 240 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "You're badly mistaken if you think you\n"
# 241 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "can have your way with the world!$"
# 242 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 243 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_BeSeeingYouTeamAqua:
# 244 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe!\n"
# 245 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Even TEAM AQUA joins us!\p"
# 246 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But it's too much trouble to deal with\n"
# 247 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "you all…\p"
# 248 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Heh, it doesn't matter!\p"
# 249 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "We've got the METEORITE, so off to\n"
# 250 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "MT. CHIMNEY we go!\p"
# 251 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe! Be seeing you, you TEAM\n"
# 252 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "AQUA dingbats!$"
# 253 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 254 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieSeenYouBefore:
# 255 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ARCHIE: Didn't I see you before?\n"
# 256 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "At SLATEPORT's MUSEUM?\p"
# 257 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Ah, so your name is {PLAYER}.\p"
# 258 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "At the time, I thought you were one\n"
# 259 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "of TEAM MAGMA's goons.\p"
# 260 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Humph…\n"
# 261 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "You're one odd kid.\p"
# 262 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM MAGMA is a dangerous group of\n"
# 263 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "total fanatics.\p"
# 264 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "They engage in destruction, claiming\n"
# 265 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "to expand the land mass.\p"
# 266 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "They are the rivals to us,\n"
# 267 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "the sea-loving TEAM AQUA!$"
# 268 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 269 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_BossWeShouldChaseMagma:
# 270 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "BOSS, we should give chase to\n"
# 271 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM MAGMA…$"
# 272 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 273 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieYesNoTellingWhatMagmaWillDo:
# 274 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ARCHIE: Yes, yes, we must!\n"
# 275 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "We've got to hurry.\p"
# 276 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "There's no telling what TEAM MAGMA\n"
# 277 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "will do at MT. CHIMNEY!$"
# 278 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 279 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieFarewell:
# 280 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ARCHIE: {PLAYER}, you should keep\n"
# 281 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "an eye out for TEAM MAGMA, too.\p"
# 282 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Farewell!$"
# 283 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 284 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_MeetProfCozmo:
# 285 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I… I'm COZMO…\n"
# 286 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I'm a PROFESSOR…\p"
# 287 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM MAGMA asked me to guide them\n"
# 288 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "to METEOR FALLS…\p"
# 289 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But they tricked me.\n"
# 290 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "They even took my METEORITE away…\p"
# 291 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "And then another similar bunch,\n"
# 292 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM AQUA showed up.\p"
# 293 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "After that…\n"
# 294 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I don't understand any of it.\p"
# 295 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But that TEAM MAGMA…\p"
# 296 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "What are they going to do with that\n"
# 297 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "METEORITE at MT. CHIMNEY?$"
# 298 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 299 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney:
# 300 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "PROF. COZMO: But that TEAM MAGMA…\p"
# 301 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "What are they going to do with that\n"
# 302 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "METEORITE at MT. CHIMNEY?$"
