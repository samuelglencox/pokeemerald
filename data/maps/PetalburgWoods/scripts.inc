# 1 "data/maps/PetalburgWoods/scripts.pory"

# 2 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_MapScripts::
# 3 "data/maps/PetalburgWoods/scripts.pory"
	.byte 0
# 4 "data/maps/PetalburgWoods/scripts.pory"

# 5 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft::
# 6 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 7 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 8 "data/maps/PetalburgWoods/scripts.pory"
	applywaitmovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft
# 9 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 10 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 11 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 12 "data/maps/PetalburgWoods/scripts.pory"
	applywaitmovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 13 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 14 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 15 "data/maps/PetalburgWoods/scripts.pory"
	applywaitmovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherLeft
# 16 "data/maps/PetalburgWoods/scripts.pory"
	applywaitmovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 17 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 18 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 19 "data/maps/PetalburgWoods/scripts.pory"
	applywaitmovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft
# 20 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 21 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 22 "data/maps/PetalburgWoods/scripts.pory"
	applywaitmovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
# 23 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 24 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 25 "data/maps/PetalburgWoods/scripts.pory"
	applywaitmovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 26 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 27 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 28 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
# 29 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 30 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 31 "data/maps/PetalburgWoods/scripts.pory"
	end
# 32 "data/maps/PetalburgWoods/scripts.pory"

# 33 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight::
# 34 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 35 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 36 "data/maps/PetalburgWoods/scripts.pory"
	applywaitmovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerRight
# 37 "data/maps/PetalburgWoods/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 38 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 39 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 40 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 41 "data/maps/PetalburgWoods/scripts.pory"
	applywaitmovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 42 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 43 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 44 "data/maps/PetalburgWoods/scripts.pory"
	applywaitmovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherRight
# 45 "data/maps/PetalburgWoods/scripts.pory"
	applywaitmovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 46 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 47 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 48 "data/maps/PetalburgWoods/scripts.pory"
	applywaitmovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight
# 49 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 50 "data/maps/PetalburgWoods/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 51 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 52 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 53 "data/maps/PetalburgWoods/scripts.pory"
	applywaitmovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 54 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 55 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 56 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitRight
# 57 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 58 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 59 "data/maps/PetalburgWoods/scripts.pory"
	end
# 60 "data/maps/PetalburgWoods/scripts.pory"

# 61 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherIntro::
# 62 "data/maps/PetalburgWoods/scripts.pory"
	applywaitmovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
# 63 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
# 64 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 65 "data/maps/PetalburgWoods/scripts.pory"
	return
# 66 "data/maps/PetalburgWoods/scripts.pory"

# 67 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherPostBattle::
# 68 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouveGotSomeNerve, MSGBOX_DEFAULT
# 69 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 70 "data/maps/PetalburgWoods/scripts.pory"
	applywaitmovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaRunAway
# 71 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_GRUNT
# 72 "data/maps/PetalburgWoods/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 73 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
# 74 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 75 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_BagFull
# 76 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 77 "data/maps/PetalburgWoods/scripts.pory"
	end
# 78 "data/maps/PetalburgWoods/scripts.pory"

# 79 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_BagFull::
# 80 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 81 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 82 "data/maps/PetalburgWoods/scripts.pory"
	end
# 83 "data/maps/PetalburgWoods/scripts.pory"

# 84 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherFinish::
# 85 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
# 86 "data/maps/PetalburgWoods/scripts.pory"
	applywaitmovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherStartExit
# 87 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
# 88 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 89 "data/maps/PetalburgWoods/scripts.pory"
	return
# 90 "data/maps/PetalburgWoods/scripts.pory"

# 91 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RemoveDevonResearcher::
# 92 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE
# 93 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
# 94 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
# 95 "data/maps/PetalburgWoods/scripts.pory"
	end
# 96 "data/maps/PetalburgWoods/scripts.pory"

# 97 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherLookAround:
# 98 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 99 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 100 "data/maps/PetalburgWoods/scripts.pory"
	delay_4
# 101 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 102 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 103 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 104 "data/maps/PetalburgWoods/scripts.pory"
	face_left
# 105 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 106 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 107 "data/maps/PetalburgWoods/scripts.pory"
	face_down
# 108 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 109 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 110 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 111 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 112 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 113 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 114 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 115 "data/maps/PetalburgWoods/scripts.pory"

# 116 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitLeft:
# 117 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 118 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 119 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 120 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 121 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 122 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 123 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 124 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 125 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 126 "data/maps/PetalburgWoods/scripts.pory"

# 127 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft:
# 128 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 129 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 130 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 131 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 132 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 133 "data/maps/PetalburgWoods/scripts.pory"

# 134 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerRight:
# 135 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 136 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 137 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 138 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 139 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 140 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_right
# 141 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 142 "data/maps/PetalburgWoods/scripts.pory"

# 143 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitRight:
# 144 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 145 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 146 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 147 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 148 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 149 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 150 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 151 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 152 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 153 "data/maps/PetalburgWoods/scripts.pory"

# 154 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_WatchResearcherLeave:
# 155 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 156 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 157 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 158 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 159 "data/maps/PetalburgWoods/scripts.pory"

# 160 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft:
# 161 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 162 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 163 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 164 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 165 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 166 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 167 "data/maps/PetalburgWoods/scripts.pory"

# 168 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight:
# 169 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 170 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 171 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 172 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 173 "data/maps/PetalburgWoods/scripts.pory"

# 174 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherStartExit:
# 175 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_down
# 176 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 177 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 178 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 179 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 180 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 181 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 182 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 183 "data/maps/PetalburgWoods/scripts.pory"

# 184 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherLeft:
# 185 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 186 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 187 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 188 "data/maps/PetalburgWoods/scripts.pory"

# 189 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaBackOff:
# 190 "data/maps/PetalburgWoods/scripts.pory"
	lock_facing_direction
# 191 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 192 "data/maps/PetalburgWoods/scripts.pory"
	unlock_facing_direction
# 193 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 194 "data/maps/PetalburgWoods/scripts.pory"

# 195 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaRunAway:
# 196 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 197 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 198 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 199 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 200 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 201 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 202 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 203 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 204 "data/maps/PetalburgWoods/scripts.pory"

# 205 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherRight:
# 206 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 207 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 208 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 209 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 210 "data/maps/PetalburgWoods/scripts.pory"

# 211 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaEntrance:
# 212 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 213 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 214 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 215 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 216 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 217 "data/maps/PetalburgWoods/scripts.pory"

# 218 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachPlayer:
# 219 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 220 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 221 "data/maps/PetalburgWoods/scripts.pory"

# 222 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy1::
# 223 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
# 224 "data/maps/PetalburgWoods/scripts.pory"
	end
# 225 "data/maps/PetalburgWoods/scripts.pory"

# 226 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy2::
# 227 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
# 228 "data/maps/PetalburgWoods/scripts.pory"
	end
# 229 "data/maps/PetalburgWoods/scripts.pory"

# 230 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Girl::
# 231 "data/maps/PetalburgWoods/scripts.pory"
	lock
# 232 "data/maps/PetalburgWoods/scripts.pory"
	faceplayer
# 233 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_ExplainMiracleSeed
# 234 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
# 235 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
# 236 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 237 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_RECEIVED_MIRACLE_SEED
# 238 "data/maps/PetalburgWoods/scripts.pory"
	release
# 239 "data/maps/PetalburgWoods/scripts.pory"
	end
# 240 "data/maps/PetalburgWoods/scripts.pory"

# 241 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_ExplainMiracleSeed::
# 242 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
# 243 "data/maps/PetalburgWoods/scripts.pory"
	release
# 244 "data/maps/PetalburgWoods/scripts.pory"
	end
# 245 "data/maps/PetalburgWoods/scripts.pory"

# 246 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign1::
# 247 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
# 248 "data/maps/PetalburgWoods/scripts.pory"
	end
# 249 "data/maps/PetalburgWoods/scripts.pory"

# 250 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign2::
# 251 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
# 252 "data/maps/PetalburgWoods/scripts.pory"
	end
# 253 "data/maps/PetalburgWoods/scripts.pory"

# 254 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Lyle::
# 255 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
# 256 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
# 257 "data/maps/PetalburgWoods/scripts.pory"
	end
# 258 "data/maps/PetalburgWoods/scripts.pory"

# 259 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_James::
# 260 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
# 261 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 262 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgWoods_EventScript_JamesRematch
# 263 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_0x8004, TRAINER_JAMES_1
# 264 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 265 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_TryRegisterJames2
# 266 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 267 "data/maps/PetalburgWoods/scripts.pory"
	release
# 268 "data/maps/PetalburgWoods/scripts.pory"
	end
# 269 "data/maps/PetalburgWoods/scripts.pory"

# 270 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames::
# 271 "data/maps/PetalburgWoods/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 272 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 273 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames
# 274 "data/maps/PetalburgWoods/scripts.pory"
	release
# 275 "data/maps/PetalburgWoods/scripts.pory"
	end
# 276 "data/maps/PetalburgWoods/scripts.pory"

# 277 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames::
# 278 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
# 279 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 280 "data/maps/PetalburgWoods/scripts.pory"
	release
# 281 "data/maps/PetalburgWoods/scripts.pory"
	end
# 282 "data/maps/PetalburgWoods/scripts.pory"

# 283 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames2::
# 284 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames2
# 285 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 286 "data/maps/PetalburgWoods/scripts.pory"
	release
# 287 "data/maps/PetalburgWoods/scripts.pory"
	end
# 288 "data/maps/PetalburgWoods/scripts.pory"

# 289 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames2::
# 290 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
# 291 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 292 "data/maps/PetalburgWoods/scripts.pory"
	release
# 293 "data/maps/PetalburgWoods/scripts.pory"
	end
# 294 "data/maps/PetalburgWoods/scripts.pory"

# 295 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_JamesRematch::
# 296 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
# 297 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
# 298 "data/maps/PetalburgWoods/scripts.pory"
	end
# 299 "data/maps/PetalburgWoods/scripts.pory"

# 300 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NotAOneToBeFound:
# 301 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hmmm…\n"
# 302 "data/maps/PetalburgWoods/scripts.pory"
	.string "Not a one to be found…$"
# 303 "data/maps/PetalburgWoods/scripts.pory"

# 304 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HaveYouSeenShroomish:
# 305 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hello, have you seen any POKéMON\n"
# 306 "data/maps/PetalburgWoods/scripts.pory"
	.string "called SHROOMISH around here?\p"
# 307 "data/maps/PetalburgWoods/scripts.pory"
	.string "I really love that POKéMON.$"
# 308 "data/maps/PetalburgWoods/scripts.pory"

# 309 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWasGoingToAmbushYou:
# 310 "data/maps/PetalburgWoods/scripts.pory"
	.string "I was going to ambush you, but you\n"
# 311 "data/maps/PetalburgWoods/scripts.pory"
	.string "had to dawdle in PETALBURG WOODS\l"
# 312 "data/maps/PetalburgWoods/scripts.pory"
	.string "forever, didn't you?\p"
# 313 "data/maps/PetalburgWoods/scripts.pory"
	.string "I got sick of waiting, so here I am!$"
# 314 "data/maps/PetalburgWoods/scripts.pory"

# 315 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HandOverThosePapers:
# 316 "data/maps/PetalburgWoods/scripts.pory"
	.string "You! DEVON RESEARCHER!\p"
# 317 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hand over those papers!$"
# 318 "data/maps/PetalburgWoods/scripts.pory"

# 319 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouHaveToHelpMe:
# 320 "data/maps/PetalburgWoods/scripts.pory"
	.string "Aiyeeeh!\p"
# 321 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're a POKéMON TRAINER, aren't you?\n"
# 322 "data/maps/PetalburgWoods/scripts.pory"
	.string "You've got to help me, please!$"
# 323 "data/maps/PetalburgWoods/scripts.pory"

# 324 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NoOneCrossesTeamAqua:
# 325 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hunh? What do you think you're doing?\n"
# 326 "data/maps/PetalburgWoods/scripts.pory"
	.string "What, you're going to protect him?\p"
# 327 "data/maps/PetalburgWoods/scripts.pory"
	.string "No one who crosses TEAM AQUA\n"
# 328 "data/maps/PetalburgWoods/scripts.pory"
	.string "gets any mercy, not even a kid!\p"
# 329 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me!$"
# 330 "data/maps/PetalburgWoods/scripts.pory"

# 331 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureKiddingMe:
# 332 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're kidding me! You're tough!$"
# 333 "data/maps/PetalburgWoods/scripts.pory"

# 334 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouveGotSomeNerve:
# 335 "data/maps/PetalburgWoods/scripts.pory"
	.string "Grrr… You've got some nerve\n"
# 336 "data/maps/PetalburgWoods/scripts.pory"
	.string "meddling with TEAM AQUA!\l"
# 337 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me again!\p"
# 338 "data/maps/PetalburgWoods/scripts.pory"
	.string "I wish I could say that, but I'm out of\n"
# 339 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON…\p"
# 340 "data/maps/PetalburgWoods/scripts.pory"
	.string "And, hey, we of TEAM AQUA are also\n"
# 341 "data/maps/PetalburgWoods/scripts.pory"
	.string "after something in RUSTBORO.\p"
# 342 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll let you go today!$"
# 343 "data/maps/PetalburgWoods/scripts.pory"

# 344 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ThatWasAwfullyClose:
# 345 "data/maps/PetalburgWoods/scripts.pory"
	.string "Whew…\n"
# 346 "data/maps/PetalburgWoods/scripts.pory"
	.string "That was awfully close!\p"
# 347 "data/maps/PetalburgWoods/scripts.pory"
	.string "Thanks to you, he didn't rob me of\n"
# 348 "data/maps/PetalburgWoods/scripts.pory"
	.string "these important papers.\p"
# 349 "data/maps/PetalburgWoods/scripts.pory"
	.string "I know, I'll give you a GREAT BALL as\n"
# 350 "data/maps/PetalburgWoods/scripts.pory"
	.string "my thanks!$"
# 351 "data/maps/PetalburgWoods/scripts.pory"

# 352 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro:
# 353 "data/maps/PetalburgWoods/scripts.pory"
	.string "Didn't that TEAM AQUA thug say\n"
# 354 "data/maps/PetalburgWoods/scripts.pory"
	.string "they were after something in\l"
# 355 "data/maps/PetalburgWoods/scripts.pory"
	.string "RUSTBORO, too?$"
# 356 "data/maps/PetalburgWoods/scripts.pory"

# 357 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICantBeWastingTime:
# 358 "data/maps/PetalburgWoods/scripts.pory"
	.string "Uh-oh! It's a crisis!\n"
# 359 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be wasting time!$"
# 360 "data/maps/PetalburgWoods/scripts.pory"

# 361 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureLoadedWithItems:
# 362 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're loaded with items.\n"
# 363 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't give you this GREAT BALL.$"
# 364 "data/maps/PetalburgWoods/scripts.pory"

# 365 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_GoBugPokemonTeam:
# 366 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a whole bunch of POKéMON!\p"
# 367 "data/maps/PetalburgWoods/scripts.pory"
	.string "Go, go, go!\n"
# 368 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG POKéMON team!$"
# 369 "data/maps/PetalburgWoods/scripts.pory"

# 370 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICouldntWin:
# 371 "data/maps/PetalburgWoods/scripts.pory"
	.string "I have all these POKéMON,\n"
# 372 "data/maps/PetalburgWoods/scripts.pory"
	.string "but I couldn't win…$"
# 373 "data/maps/PetalburgWoods/scripts.pory"

# 374 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ImOutOfPokeBalls:
# 375 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a bunch of POKéMON.\n"
# 376 "data/maps/PetalburgWoods/scripts.pory"
	.string "Now I'm out of POKé BALLS.$"
# 377 "data/maps/PetalburgWoods/scripts.pory"

# 378 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_InstantlyPopularWithBugPokemon:
# 379 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you take BUG POKéMON to school,\n"
# 380 "data/maps/PetalburgWoods/scripts.pory"
	.string "you get to be instantly popular!$"
# 381 "data/maps/PetalburgWoods/scripts.pory"

# 382 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfILose:
# 383 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 384 "data/maps/PetalburgWoods/scripts.pory"

# 385 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_PeopleRespectYou:
# 386 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you have a big BUG POKéMON,\n"
# 387 "data/maps/PetalburgWoods/scripts.pory"
	.string "people respect you for it.$"
# 388 "data/maps/PetalburgWoods/scripts.pory"

# 389 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch1:
# 390 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG\n"
# 391 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON grow up!\p"
# 392 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 393 "data/maps/PetalburgWoods/scripts.pory"

# 394 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch2:
# 395 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG \n"
# 396 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON grow up!\p"
# 397 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 398 "data/maps/PetalburgWoods/scripts.pory"

# 399 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MyPokemonHaveGrown:
# 400 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG POKéMON have grown.\n"
# 401 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll be popular again.$"
# 402 "data/maps/PetalburgWoods/scripts.pory"

# 403 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfLose:
# 404 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 405 "data/maps/PetalburgWoods/scripts.pory"

# 406 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IveBeenTrainingHard:
# 407 "data/maps/PetalburgWoods/scripts.pory"
	.string "You get to be popular if you have\n"
# 408 "data/maps/PetalburgWoods/scripts.pory"
	.string "strong POKéMON, right?\l"
# 409 "data/maps/PetalburgWoods/scripts.pory"
	.string "So, I've been training hard.$"
# 410 "data/maps/PetalburgWoods/scripts.pory"

# 411 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_StayOutOfTallGrass:
# 412 "data/maps/PetalburgWoods/scripts.pory"
	.string "Yo, there!\n"
# 413 "data/maps/PetalburgWoods/scripts.pory"
	.string "Your POKéMON doing okay?\p"
# 414 "data/maps/PetalburgWoods/scripts.pory"
	.string "If your POKéMON are weak and you want\n"
# 415 "data/maps/PetalburgWoods/scripts.pory"
	.string "to avoid battles, you should stay out\l"
# 416 "data/maps/PetalburgWoods/scripts.pory"
	.string "of tall grass.$"
# 417 "data/maps/PetalburgWoods/scripts.pory"

# 418 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HiddenItemsExplanation:
# 419 "data/maps/PetalburgWoods/scripts.pory"
	.string "Sometimes, there are things on the\n"
# 420 "data/maps/PetalburgWoods/scripts.pory"
	.string "ground even if you can't see them.\p"
# 421 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's why I always check where I'm\n"
# 422 "data/maps/PetalburgWoods/scripts.pory"
	.string "walking.$"
# 423 "data/maps/PetalburgWoods/scripts.pory"

# 424 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TryUsingThisItem:
# 425 "data/maps/PetalburgWoods/scripts.pory"
	.string "Oh, neat!\n"
# 426 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's the BADGE from RUSTBORO GYM!\p"
# 427 "data/maps/PetalburgWoods/scripts.pory"
	.string "You must be a TRAINER.\n"
# 428 "data/maps/PetalburgWoods/scripts.pory"
	.string "You should try using this item.$"
# 429 "data/maps/PetalburgWoods/scripts.pory"

# 430 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MiracleSeedExplanation:
# 431 "data/maps/PetalburgWoods/scripts.pory"
	.string "It's a MIRACLE SEED.\n"
# 432 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a POKéMON holds that item, its\l"
# 433 "data/maps/PetalburgWoods/scripts.pory"
	.string "GRASS-type moves become stronger.\p"
# 434 "data/maps/PetalburgWoods/scripts.pory"
	.string "Besides MIRACLE SEED, I think there are\n"
# 435 "data/maps/PetalburgWoods/scripts.pory"
	.string "other convenient items for POKéMON\l"
# 436 "data/maps/PetalburgWoods/scripts.pory"
	.string "to hold.$"
# 437 "data/maps/PetalburgWoods/scripts.pory"

# 438 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsExperience:
# 439 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 440 "data/maps/PetalburgWoods/scripts.pory"
	.string "Any POKéMON that appears even once\n"
# 441 "data/maps/PetalburgWoods/scripts.pory"
	.string "in a battle is awarded EXP Points.\p"
# 442 "data/maps/PetalburgWoods/scripts.pory"
	.string "To raise a weak POKéMON, put it at the\n"
# 443 "data/maps/PetalburgWoods/scripts.pory"
	.string "left of the team list.\p"
# 444 "data/maps/PetalburgWoods/scripts.pory"
	.string "As soon as a battle starts, switch it\n"
# 445 "data/maps/PetalburgWoods/scripts.pory"
	.string "out. It will earn EXP Points without\l"
# 446 "data/maps/PetalburgWoods/scripts.pory"
	.string "being exposed to any harm.$"
# 447 "data/maps/PetalburgWoods/scripts.pory"

# 448 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsPP:
# 449 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 450 "data/maps/PetalburgWoods/scripts.pory"
	.string "In addition to Hit Points (HP), POKéMON\n"
# 451 "data/maps/PetalburgWoods/scripts.pory"
	.string "have Power Points (PP) that are used to\l"
# 452 "data/maps/PetalburgWoods/scripts.pory"
	.string "make moves during battle.\p"
# 453 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a POKéMON runs out of PP, it must be\n"
# 454 "data/maps/PetalburgWoods/scripts.pory"
	.string "taken to a POKéMON CENTER.$"
