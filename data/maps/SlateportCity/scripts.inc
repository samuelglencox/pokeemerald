# 1 "data/maps/SlateportCity/scripts.pory"

# 2 "data/maps/SlateportCity/scripts.pory"
SlateportCity_MapScripts::
# 3 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_OnTransition
# 4 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_OnFrame
# 5 "data/maps/SlateportCity/scripts.pory"
	.byte 0
# 6 "data/maps/SlateportCity/scripts.pory"

# 7 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnTransition:
# 8 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 0
# 9 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_EnterSlateport
# 10 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_MovePeopleForSternInterview
# 11 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_SetReadyForScottScene
# 12 "data/maps/SlateportCity/scripts.pory"
	end
# 13 "data/maps/SlateportCity/scripts.pory"

# 14 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnterSlateport::
# 15 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 16 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 17 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
# 18 "data/maps/SlateportCity/scripts.pory"
	return
# 19 "data/maps/SlateportCity/scripts.pory"

# 20 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MovePeopleForSternInterview::
# 21 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_CAPT_STERN, 28, 13
# 22 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_OLD_WOMAN, 25, 13
# 23 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_RICH_BOY, 25, 14
# 24 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_COOK, 27, 16
# 25 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_GIRL, 28, 16
# 26 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_FAT_MAN, 29, 16
# 27 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_MAN_1, 31, 14
# 28 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_CAPT_STERN, MOVEMENT_TYPE_FACE_DOWN
# 29 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 30 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_RICH_BOY, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
# 31 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_COOK, MOVEMENT_TYPE_FACE_UP
# 32 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_GIRL, MOVEMENT_TYPE_FACE_UP
# 33 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_FAT_MAN, MOVEMENT_TYPE_FACE_UP
# 34 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_MAN_1, MOVEMENT_TYPE_FACE_LEFT
# 35 "data/maps/SlateportCity/scripts.pory"
	return
# 36 "data/maps/SlateportCity/scripts.pory"

# 37 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SetReadyForScottScene::
# 38 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 39 "data/maps/SlateportCity/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 40 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_0x8004, 30, SlateportCity_EventScript_MoveScottLeft
# 41 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 23, 27
# 42 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 43 "data/maps/SlateportCity/scripts.pory"
	return
# 44 "data/maps/SlateportCity/scripts.pory"

# 45 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MoveScottLeft::
# 46 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 22, 27
# 47 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 48 "data/maps/SlateportCity/scripts.pory"
	return
# 49 "data/maps/SlateportCity/scripts.pory"

# 50 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnFrame:
# 51 "data/maps/SlateportCity/scripts.pory"
	map_script_2 VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_ScottScene
# 52 "data/maps/SlateportCity/scripts.pory"
	.2byte 0
# 53 "data/maps/SlateportCity/scripts.pory"

# 54 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottScene::
# 55 "data/maps/SlateportCity/scripts.pory"
	lockall
# 56 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SLATEPORT_SCOTT
# 57 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerFaceScott
# 58 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottApproachPlayer
# 59 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 60 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDroveTeamAquaAway, MSGBOX_DEFAULT
# 61 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 62 "data/maps/SlateportCity/scripts.pory"
	applywaitmovement LOCALID_SLATEPORT_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 63 "data/maps/SlateportCity/scripts.pory"
	delay 60
# 64 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MaybeThisTrainer, MSGBOX_DEFAULT
# 65 "data/maps/SlateportCity/scripts.pory"
	applywaitmovement LOCALID_SLATEPORT_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 66 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_LetsRegisterEachOther, MSGBOX_DEFAULT
# 67 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 68 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 69 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 70 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RegisteredScott, MSGBOX_DEFAULT
# 71 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 72 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 73 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 74 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
# 75 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou, MSGBOX_DEFAULT
# 76 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 77 "data/maps/SlateportCity/scripts.pory"
	applywaitmovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottExit
# 78 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_SCOTT
# 79 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 10, 12
# 80 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_DOWN
# 81 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 82 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 2
# 83 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 84 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 85 "data/maps/SlateportCity/scripts.pory"
	end
# 86 "data/maps/SlateportCity/scripts.pory"

# 87 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceScott:
# 88 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 89 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 90 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 91 "data/maps/SlateportCity/scripts.pory"
	step_end
# 92 "data/maps/SlateportCity/scripts.pory"

# 93 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottApproachPlayer:
# 94 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 95 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 96 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 97 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 98 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 99 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 100 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 101 "data/maps/SlateportCity/scripts.pory"
	step_end
# 102 "data/maps/SlateportCity/scripts.pory"

# 103 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExit:
# 104 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 105 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 106 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 107 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 108 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 109 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 110 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 111 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 112 "data/maps/SlateportCity/scripts.pory"
	step_end
# 113 "data/maps/SlateportCity/scripts.pory"

# 114 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyGuru::
# 115 "data/maps/SlateportCity/scripts.pory"
	lock
# 116 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 117 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_EnergyGuruSellWhatYouNeed
# 118 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 119 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_EnergyGuru
# 120 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 121 "data/maps/SlateportCity/scripts.pory"
	release
# 122 "data/maps/SlateportCity/scripts.pory"
	end
# 123 "data/maps/SlateportCity/scripts.pory"

# 124 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 125 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_EnergyGuru:
# 126 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PROTEIN
# 127 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_IRON
# 128 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CARBOS
# 129 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ZINC
# 130 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CALCIUM
# 131 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HP_UP
# 132 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 133 "data/maps/SlateportCity/scripts.pory"

# 134 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EffortRibbonWoman::
# 135 "data/maps/SlateportCity/scripts.pory"
	lock
# 136 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 137 "data/maps/SlateportCity/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 138 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhYourPokemon, MSGBOX_DEFAULT
# 139 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
# 140 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_EventScript_MonHasEffortRibbon
# 141 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
# 142 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_MonEVsNotMaxed
# 143 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
# 144 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 145 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ReceivedEffortRibbon
# 146 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 147 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
# 148 "data/maps/SlateportCity/scripts.pory"
	special GiveLeadMonEffortRibbon
# 149 "data/maps/SlateportCity/scripts.pory"
	release
# 150 "data/maps/SlateportCity/scripts.pory"
	end
# 151 "data/maps/SlateportCity/scripts.pory"

# 152 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonEVsNotMaxed::
# 153 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoForItLittleHarder, MSGBOX_DEFAULT
# 154 "data/maps/SlateportCity/scripts.pory"
	release
# 155 "data/maps/SlateportCity/scripts.pory"
	end
# 156 "data/maps/SlateportCity/scripts.pory"

# 157 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonHasEffortRibbon::
# 158 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
# 159 "data/maps/SlateportCity/scripts.pory"
	release
# 160 "data/maps/SlateportCity/scripts.pory"
	end
# 161 "data/maps/SlateportCity/scripts.pory"

# 162 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Cook::
# 163 "data/maps/SlateportCity/scripts.pory"
	lock
# 164 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 165 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_CookSternInterview
# 166 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaweedFullOfLife, MSGBOX_DEFAULT
# 167 "data/maps/SlateportCity/scripts.pory"
	release
# 168 "data/maps/SlateportCity/scripts.pory"
	end
# 169 "data/maps/SlateportCity/scripts.pory"

# 170 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CookSternInterview::
# 171 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainComeBackWithBigFish, MSGBOX_DEFAULT
# 172 "data/maps/SlateportCity/scripts.pory"
	release
# 173 "data/maps/SlateportCity/scripts.pory"
	end
# 174 "data/maps/SlateportCity/scripts.pory"

# 175 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWoman::
# 176 "data/maps/SlateportCity/scripts.pory"
	lock
# 177 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 178 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_OldWomanSternInterview
# 179 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HowTownIsBornAndGrows, MSGBOX_DEFAULT
# 180 "data/maps/SlateportCity/scripts.pory"
	release
# 181 "data/maps/SlateportCity/scripts.pory"
	end
# 182 "data/maps/SlateportCity/scripts.pory"

# 183 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWomanSternInterview::
# 184 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptSternBeingInterviewed, MSGBOX_DEFAULT
# 185 "data/maps/SlateportCity/scripts.pory"
	release
# 186 "data/maps/SlateportCity/scripts.pory"
	end
# 187 "data/maps/SlateportCity/scripts.pory"

# 188 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Girl::
# 189 "data/maps/SlateportCity/scripts.pory"
	lock
# 190 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 191 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_GirlSternInterview
# 192 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_GirlSecretBase
# 193 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SlateportWonderfulPlace, MSGBOX_DEFAULT
# 194 "data/maps/SlateportCity/scripts.pory"
	release
# 195 "data/maps/SlateportCity/scripts.pory"
	end
# 196 "data/maps/SlateportCity/scripts.pory"

# 197 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSternInterview::
# 198 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_InterviewerSoCool, MSGBOX_DEFAULT
# 199 "data/maps/SlateportCity/scripts.pory"
	release
# 200 "data/maps/SlateportCity/scripts.pory"
	end
# 201 "data/maps/SlateportCity/scripts.pory"

# 202 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSecretBase::
# 203 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyBricksSoDecorWontGetDirty, MSGBOX_DEFAULT
# 204 "data/maps/SlateportCity/scripts.pory"
	release
# 205 "data/maps/SlateportCity/scripts.pory"
	end
# 206 "data/maps/SlateportCity/scripts.pory"

# 207 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoy::
# 208 "data/maps/SlateportCity/scripts.pory"
	lock
# 209 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 210 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_RichBoySternInterview
# 211 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoingToCompeteInBattleTent, MSGBOX_DEFAULT
# 212 "data/maps/SlateportCity/scripts.pory"
	release
# 213 "data/maps/SlateportCity/scripts.pory"
	end
# 214 "data/maps/SlateportCity/scripts.pory"

# 215 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoySternInterview::
# 216 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternSaysDiscoveredSomething, MSGBOX_DEFAULT
# 217 "data/maps/SlateportCity/scripts.pory"
	release
# 218 "data/maps/SlateportCity/scripts.pory"
	end
# 219 "data/maps/SlateportCity/scripts.pory"

# 220 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatMan::
# 221 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_FatManSternInterview
# 222 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BushedHikingFromMauville, MSGBOX_NPC
# 223 "data/maps/SlateportCity/scripts.pory"
	end
# 224 "data/maps/SlateportCity/scripts.pory"

# 225 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatManSternInterview::
# 226 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AmIOnTV, MSGBOX_SIGN
# 227 "data/maps/SlateportCity/scripts.pory"
	end
# 228 "data/maps/SlateportCity/scripts.pory"

# 229 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1::
# 230 "data/maps/SlateportCity/scripts.pory"
	lock
# 231 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 232 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_Man1SternInterview
# 233 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
# 234 "data/maps/SlateportCity/scripts.pory"
	release
# 235 "data/maps/SlateportCity/scripts.pory"
	end
# 236 "data/maps/SlateportCity/scripts.pory"

# 237 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1SternInterview::
# 238 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainsACelebrity, MSGBOX_DEFAULT
# 239 "data/maps/SlateportCity/scripts.pory"
	release
# 240 "data/maps/SlateportCity/scripts.pory"
	end
# 241 "data/maps/SlateportCity/scripts.pory"

# 242 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1::
# 243 "data/maps/SlateportCity/scripts.pory"
	lock
# 244 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 245 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_EventScript_Woman1AquaGone
# 246 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsLongLineOverThere, MSGBOX_DEFAULT
# 247 "data/maps/SlateportCity/scripts.pory"
	release
# 248 "data/maps/SlateportCity/scripts.pory"
	end
# 249 "data/maps/SlateportCity/scripts.pory"

# 250 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1AquaGone::
# 251 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_VisitedMuseumOften, MSGBOX_DEFAULT
# 252 "data/maps/SlateportCity/scripts.pory"
	release
# 253 "data/maps/SlateportCity/scripts.pory"
	end
# 254 "data/maps/SlateportCity/scripts.pory"

# 255 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BattleTentSign::
# 256 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
# 257 "data/maps/SlateportCity/scripts.pory"
	end
# 258 "data/maps/SlateportCity/scripts.pory"

# 259 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardSign::
# 260 "data/maps/SlateportCity/scripts.pory"
	lockall
# 261 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_SternsShipyardFerryComplete
# 262 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_EventScript_SternsShipyardNearsCompletion
# 263 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardWantedSign, MSGBOX_DEFAULT
# 264 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 265 "data/maps/SlateportCity/scripts.pory"
	end
# 266 "data/maps/SlateportCity/scripts.pory"

# 267 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardNearsCompletion::
# 268 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardNearsCompletion, MSGBOX_DEFAULT
# 269 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 270 "data/maps/SlateportCity/scripts.pory"
	end
# 271 "data/maps/SlateportCity/scripts.pory"

# 272 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardFerryComplete::
# 273 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardFerryComplete, MSGBOX_DEFAULT
# 274 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 275 "data/maps/SlateportCity/scripts.pory"
	end
# 276 "data/maps/SlateportCity/scripts.pory"

# 277 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokemonFanClubSign::
# 278 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PokemonFanClubSign, MSGBOX_SIGN
# 279 "data/maps/SlateportCity/scripts.pory"
	end
# 280 "data/maps/SlateportCity/scripts.pory"

# 281 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OceanicMuseumSign::
# 282 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
# 283 "data/maps/SlateportCity/scripts.pory"
	end
# 284 "data/maps/SlateportCity/scripts.pory"

# 285 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CitySign::
# 286 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
# 287 "data/maps/SlateportCity/scripts.pory"
	end
# 288 "data/maps/SlateportCity/scripts.pory"

# 289 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MarketSign::
# 290 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
# 291 "data/maps/SlateportCity/scripts.pory"
	end
# 292 "data/maps/SlateportCity/scripts.pory"

# 293 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSign::
# 294 "data/maps/SlateportCity/scripts.pory"
	lockall
# 295 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_HarborSignFerryComplete
# 296 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborFerryUnderConstruction, MSGBOX_DEFAULT
# 297 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 298 "data/maps/SlateportCity/scripts.pory"
	end
# 299 "data/maps/SlateportCity/scripts.pory"

# 300 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSignFerryComplete::
# 301 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborSign, MSGBOX_DEFAULT
# 302 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 303 "data/maps/SlateportCity/scripts.pory"
	end
# 304 "data/maps/SlateportCity/scripts.pory"

# 305 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NameRatersHouseSign::
# 306 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_NameRatersHouseSign, MSGBOX_SIGN
# 307 "data/maps/SlateportCity/scripts.pory"
	end
# 308 "data/maps/SlateportCity/scripts.pory"

# 309 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Maniac::
# 310 "data/maps/SlateportCity/scripts.pory"
	lock
# 311 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 312 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_ManiacSternInterview
# 313 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 314 "data/maps/SlateportCity/scripts.pory"
	release
# 315 "data/maps/SlateportCity/scripts.pory"
	end
# 316 "data/maps/SlateportCity/scripts.pory"

# 317 "data/maps/SlateportCity/scripts.pory"
@ Unclear if the text here was meant to be different, but its not
# 318 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ManiacSternInterview::
# 319 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 320 "data/maps/SlateportCity/scripts.pory"
	release
# 321 "data/maps/SlateportCity/scripts.pory"
	end
# 322 "data/maps/SlateportCity/scripts.pory"

# 323 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman2::
# 324 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CantChangeTradeMonName, MSGBOX_NPC
# 325 "data/maps/SlateportCity/scripts.pory"
	end
# 326 "data/maps/SlateportCity/scripts.pory"

# 327 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor1::
# 328 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
# 329 "data/maps/SlateportCity/scripts.pory"
	end
# 330 "data/maps/SlateportCity/scripts.pory"

# 331 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor2::
# 332 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SinkOldBoats, MSGBOX_NPC
# 333 "data/maps/SlateportCity/scripts.pory"
	end
# 334 "data/maps/SlateportCity/scripts.pory"

# 335 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokefanF::
# 336 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyTooMuch, MSGBOX_NPC
# 337 "data/maps/SlateportCity/scripts.pory"
	end
# 338 "data/maps/SlateportCity/scripts.pory"

# 339 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man2::
# 340 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentBuiltRecently, MSGBOX_NPC
# 341 "data/maps/SlateportCity/scripts.pory"
	end
# 342 "data/maps/SlateportCity/scripts.pory"

# 343 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt1::
# 344 "data/maps/SlateportCity/scripts.pory"
	lock
# 345 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 346 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_QuitPushing, MSGBOX_DEFAULT
# 347 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 348 "data/maps/SlateportCity/scripts.pory"
	applywaitmovement LOCALID_SLATEPORT_GRUNT_1, Common_Movement_FaceOriginalDirection
# 349 "data/maps/SlateportCity/scripts.pory"
	release
# 350 "data/maps/SlateportCity/scripts.pory"
	end
# 351 "data/maps/SlateportCity/scripts.pory"

# 352 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt2::
# 353 "data/maps/SlateportCity/scripts.pory"
	lock
# 354 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 355 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaHasPolicy, MSGBOX_DEFAULT
# 356 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 357 "data/maps/SlateportCity/scripts.pory"
	applywaitmovement LOCALID_SLATEPORT_GRUNT_2, Common_Movement_FaceOriginalDirection
# 358 "data/maps/SlateportCity/scripts.pory"
	release
# 359 "data/maps/SlateportCity/scripts.pory"
	end
# 360 "data/maps/SlateportCity/scripts.pory"

# 361 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt3::
# 362 "data/maps/SlateportCity/scripts.pory"
	lock
# 363 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 364 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BossIsBrilliant, MSGBOX_DEFAULT
# 365 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 366 "data/maps/SlateportCity/scripts.pory"
	applywaitmovement LOCALID_SLATEPORT_GRUNT_3, Common_Movement_FaceOriginalDirection
# 367 "data/maps/SlateportCity/scripts.pory"
	release
# 368 "data/maps/SlateportCity/scripts.pory"
	end
# 369 "data/maps/SlateportCity/scripts.pory"

# 370 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt4::
# 371 "data/maps/SlateportCity/scripts.pory"
	lock
# 372 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 373 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsNewSchemeIWonder, MSGBOX_DEFAULT
# 374 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 375 "data/maps/SlateportCity/scripts.pory"
	applywaitmovement LOCALID_SLATEPORT_GRUNT_4, Common_Movement_FaceOriginalDirection
# 376 "data/maps/SlateportCity/scripts.pory"
	release
# 377 "data/maps/SlateportCity/scripts.pory"
	end
# 378 "data/maps/SlateportCity/scripts.pory"

# 379 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt5::
# 380 "data/maps/SlateportCity/scripts.pory"
	lock
# 381 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 382 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldTakeItAll, MSGBOX_DEFAULT
# 383 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 384 "data/maps/SlateportCity/scripts.pory"
	applywaitmovement LOCALID_SLATEPORT_GRUNT_5, Common_Movement_FaceOriginalDirection
# 385 "data/maps/SlateportCity/scripts.pory"
	release
# 386 "data/maps/SlateportCity/scripts.pory"
	end
# 387 "data/maps/SlateportCity/scripts.pory"

# 388 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt6::
# 389 "data/maps/SlateportCity/scripts.pory"
	lock
# 390 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 391 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontButtIn, MSGBOX_DEFAULT
# 392 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 393 "data/maps/SlateportCity/scripts.pory"
	applywaitmovement LOCALID_SLATEPORT_GRUNT_6, Common_Movement_FaceOriginalDirection
# 394 "data/maps/SlateportCity/scripts.pory"
	release
# 395 "data/maps/SlateportCity/scripts.pory"
	end
# 396 "data/maps/SlateportCity/scripts.pory"

# 397 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt7::
# 398 "data/maps/SlateportCity/scripts.pory"
	lock
# 399 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 400 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RemindsMeOfLongLineForGames, MSGBOX_DEFAULT
# 401 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 402 "data/maps/SlateportCity/scripts.pory"
	applywaitmovement LOCALID_SLATEPORT_GRUNT_7, Common_Movement_FaceOriginalDirection
# 403 "data/maps/SlateportCity/scripts.pory"
	release
# 404 "data/maps/SlateportCity/scripts.pory"
	end
# 405 "data/maps/SlateportCity/scripts.pory"

# 406 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt8::
# 407 "data/maps/SlateportCity/scripts.pory"
	lock
# 408 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 409 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhyAreWeLiningUp, MSGBOX_DEFAULT
# 410 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 411 "data/maps/SlateportCity/scripts.pory"
	applywaitmovement LOCALID_SLATEPORT_GRUNT_8, Common_Movement_FaceOriginalDirection
# 412 "data/maps/SlateportCity/scripts.pory"
	release
# 413 "data/maps/SlateportCity/scripts.pory"
	end
# 414 "data/maps/SlateportCity/scripts.pory"

# 415 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt9::
# 416 "data/maps/SlateportCity/scripts.pory"
	lock
# 417 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 418 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 419 "data/maps/SlateportCity/scripts.pory"
	applywaitmovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_ExclamationMark
# 420 "data/maps/SlateportCity/scripts.pory"
	applywaitmovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_Delay48
# 421 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatDoYouWant, MSGBOX_DEFAULT
# 422 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 423 "data/maps/SlateportCity/scripts.pory"
	applywaitmovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
# 424 "data/maps/SlateportCity/scripts.pory"
	applywaitmovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 425 "data/maps/SlateportCity/scripts.pory"
	applywaitmovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FacePlayer
# 426 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_IllReadSignForYou, MSGBOX_DEFAULT
# 427 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 428 "data/maps/SlateportCity/scripts.pory"
	applywaitmovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
# 429 "data/maps/SlateportCity/scripts.pory"
	applywaitmovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 430 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SaysSomethingLikeSeaIsEndless, MSGBOX_DEFAULT
# 431 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 432 "data/maps/SlateportCity/scripts.pory"
	applywaitmovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FacePlayer
# 433 "data/maps/SlateportCity/scripts.pory"
	applywaitmovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 434 "data/maps/SlateportCity/scripts.pory"
	applywaitmovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
# 435 "data/maps/SlateportCity/scripts.pory"
	release
# 436 "data/maps/SlateportCity/scripts.pory"
	end
# 437 "data/maps/SlateportCity/scripts.pory"

# 438 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_DelayAquaGrunt:
# 439 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 440 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 441 "data/maps/SlateportCity/scripts.pory"
	step_end
# 442 "data/maps/SlateportCity/scripts.pory"

# 443 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt10::
# 444 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldveBroughtMyGameBoy, MSGBOX_SIGN
# 445 "data/maps/SlateportCity/scripts.pory"
	end
# 446 "data/maps/SlateportCity/scripts.pory"

# 447 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt11::
# 448 "data/maps/SlateportCity/scripts.pory"
	lock
# 449 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 450 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HotSpringsAfterOperation, MSGBOX_DEFAULT
# 451 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 452 "data/maps/SlateportCity/scripts.pory"
	applywaitmovement LOCALID_SLATEPORT_GRUNT_11, Common_Movement_FaceOriginalDirection
# 453 "data/maps/SlateportCity/scripts.pory"
	release
# 454 "data/maps/SlateportCity/scripts.pory"
	end
# 455 "data/maps/SlateportCity/scripts.pory"

# 456 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DollClerk::
# 457 "data/maps/SlateportCity/scripts.pory"
	lock
# 458 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 459 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 460 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 461 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor_Dolls
# 462 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 463 "data/maps/SlateportCity/scripts.pory"
	release
# 464 "data/maps/SlateportCity/scripts.pory"
	end
# 465 "data/maps/SlateportCity/scripts.pory"

# 466 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 467 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor_Dolls:
# 468 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_AZURILL_DOLL
# 469 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_MARILL_DOLL
# 470 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_SKITTY_DOLL
# 471 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 472 "data/maps/SlateportCity/scripts.pory"

# 473 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ComeBackWithSecretPower::
# 474 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_ComeBackWithSecretPower, MSGBOX_DEFAULT
# 475 "data/maps/SlateportCity/scripts.pory"
	release
# 476 "data/maps/SlateportCity/scripts.pory"
	end
# 477 "data/maps/SlateportCity/scripts.pory"

# 478 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DecorClerk::
# 479 "data/maps/SlateportCity/scripts.pory"
	lock
# 480 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 481 "data/maps/SlateportCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_ComeBackWithSecretPower
# 482 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 483 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 484 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor
# 485 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 486 "data/maps/SlateportCity/scripts.pory"
	release
# 487 "data/maps/SlateportCity/scripts.pory"
	end
# 488 "data/maps/SlateportCity/scripts.pory"

# 489 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 490 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor:
# 491 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BRICK
# 492 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BRICK
# 493 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BRICK
# 494 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BALLOON
# 495 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BALLOON
# 496 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BALLOON
# 497 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_LOW_NOTE_MAT
# 498 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_D_NOTE_MAT
# 499 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_E_NOTE_MAT
# 500 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_F_NOTE_MAT
# 501 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_G_NOTE_MAT
# 502 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_A_NOTE_MAT
# 503 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_B_NOTE_MAT
# 504 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_HIGH_NOTE_MAT
# 505 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 506 "data/maps/SlateportCity/scripts.pory"

# 507 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PowerTMClerk::
# 508 "data/maps/SlateportCity/scripts.pory"
	lock
# 509 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 510 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 511 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 512 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_PowerTMs
# 513 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 514 "data/maps/SlateportCity/scripts.pory"
	release
# 515 "data/maps/SlateportCity/scripts.pory"
	end
# 516 "data/maps/SlateportCity/scripts.pory"

# 517 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 518 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_PowerTMs:
# 519 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_HIDDEN_POWER
# 520 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_SECRET_POWER
# 521 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 522 "data/maps/SlateportCity/scripts.pory"

# 523 "data/maps/SlateportCity/scripts.pory"
@ Scene with Capt Sterns interview and Team Aqua announcing plans to steal Submarine
# 524 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern::
# 525 "data/maps/SlateportCity/scripts.pory"
	lockall
# 526 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternMoveAheadWithExploration, MSGBOX_DEFAULT
# 527 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GabbyWonderfulThanksForInterview, MSGBOX_DEFAULT
# 528 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 529 "data/maps/SlateportCity/scripts.pory"
	applywaitmovement LOCALID_SLATEPORT_GABBY, Common_Movement_WalkInPlaceFasterRight
# 530 "data/maps/SlateportCity/scripts.pory"
	delay 10
# 531 "data/maps/SlateportCity/scripts.pory"
	applywaitmovement LOCALID_SLATEPORT_TY, Common_Movement_WalkInPlaceFasterDown
# 532 "data/maps/SlateportCity/scripts.pory"
	delay 25
# 533 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, SlateportCity_Movement_SternWatchGabbyAndTyExit
# 534 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerFaceStern
# 535 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GABBY, SlateportCity_Movement_GabbyExit
# 536 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_TY, SlateportCity_Movement_TyExit
# 537 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 538 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_GABBY
# 539 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_TY
# 540 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhewFirstInterview, MSGBOX_DEFAULT
# 541 "data/maps/SlateportCity/scripts.pory"
	applywaitmovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 542 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhPlayerWeMadeDiscovery, MSGBOX_DEFAULT
# 543 "data/maps/SlateportCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 544 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaWillAssumeControlOfSubmarine, MSGBOX_DEFAULT
# 545 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_COOK, Common_Movement_WalkInPlaceFasterLeft
# 546 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_FAT_MAN, Common_Movement_WalkInPlaceFasterLeft
# 547 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_OLD_WOMAN, SlateportCity_Movement_OldWomanConcern
# 548 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_RICH_BOY, Common_Movement_QuestionMark
# 549 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_MAN_1, SlateportCity_Movement_ManConcern
# 550 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 551 "data/maps/SlateportCity/scripts.pory"
	applywaitmovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_WalkInPlaceFasterDown
# 552 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhatWasAllThat, MSGBOX_DEFAULT
# 553 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 554 "data/maps/SlateportCity/scripts.pory"
	applywaitmovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_ExclamationMark
# 555 "data/maps/SlateportCity/scripts.pory"
	applywaitmovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_Delay48
# 556 "data/maps/SlateportCity/scripts.pory"
	applywaitmovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 557 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FromHarborTryingToTakeSub, MSGBOX_DEFAULT
# 558 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 559 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 560 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, SlateportCity_Movement_SternEnterHarbor
# 561 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerEnterHarbor
# 562 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 563 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_CAPT_STERN
# 564 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
# 565 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
# 566 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
# 567 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
# 568 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 2
# 569 "data/maps/SlateportCity/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 11, 14
# 570 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 571 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 572 "data/maps/SlateportCity/scripts.pory"
	end
# 573 "data/maps/SlateportCity/scripts.pory"

# 574 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_OldWomanConcern:
# 575 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 576 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 577 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 578 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 579 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 580 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 581 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 582 "data/maps/SlateportCity/scripts.pory"
	step_end
# 583 "data/maps/SlateportCity/scripts.pory"

# 584 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ManConcern:
# 585 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 586 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 587 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 588 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 589 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 590 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 591 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 592 "data/maps/SlateportCity/scripts.pory"
	step_end
# 593 "data/maps/SlateportCity/scripts.pory"

# 594 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_GabbyExit:
# 595 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 596 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 597 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 598 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 599 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 600 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 601 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 602 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 603 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 604 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 605 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 606 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 607 "data/maps/SlateportCity/scripts.pory"
	step_end
# 608 "data/maps/SlateportCity/scripts.pory"

# 609 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_TyExit:
# 610 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 611 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 612 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 613 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 614 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 615 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 616 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 617 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 618 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 619 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 620 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 621 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 622 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 623 "data/maps/SlateportCity/scripts.pory"
	step_end
# 624 "data/maps/SlateportCity/scripts.pory"

# 625 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_Unused:
# 626 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 627 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 628 "data/maps/SlateportCity/scripts.pory"
	step_end
# 629 "data/maps/SlateportCity/scripts.pory"

# 630 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternEnterHarbor:
# 631 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 632 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 633 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 634 "data/maps/SlateportCity/scripts.pory"
	set_invisible
# 635 "data/maps/SlateportCity/scripts.pory"
	step_end
# 636 "data/maps/SlateportCity/scripts.pory"

# 637 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternWatchGabbyAndTyExit:
# 638 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 639 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 640 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 641 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 642 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 643 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 644 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 645 "data/maps/SlateportCity/scripts.pory"
	step_end
# 646 "data/maps/SlateportCity/scripts.pory"

# 647 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerEnterHarbor:
# 648 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 649 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 650 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 651 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 652 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 653 "data/maps/SlateportCity/scripts.pory"
	step_end
# 654 "data/maps/SlateportCity/scripts.pory"

# 655 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceStern:
# 656 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 657 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 658 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 659 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 660 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 661 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 662 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 663 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 664 "data/maps/SlateportCity/scripts.pory"
	step_end
# 665 "data/maps/SlateportCity/scripts.pory"

# 666 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Ty::
# 667 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BigSmileForCamera, MSGBOX_SIGN
# 668 "data/maps/SlateportCity/scripts.pory"
	end
# 669 "data/maps/SlateportCity/scripts.pory"

# 670 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Gabby::
# 671 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MostInvaluableExperience, MSGBOX_SIGN
# 672 "data/maps/SlateportCity/scripts.pory"
	end
# 673 "data/maps/SlateportCity/scripts.pory"

# 674 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man3::
# 675 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WonderIfLighthouseStartlesPokemon, MSGBOX_NPC
# 676 "data/maps/SlateportCity/scripts.pory"
	end
# 677 "data/maps/SlateportCity/scripts.pory"

# 678 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryPowderClerk::
# 679 "data/maps/SlateportCity/scripts.pory"
	lock
# 680 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 681 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POWDER_JAR, SlateportCity_EventScript_ReceivedPowderJar
# 682 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerries, MSGBOX_DEFAULT
# 683 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 684 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_RECEIVED_POWDER_JAR
# 685 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 686 "data/maps/SlateportCity/scripts.pory"
	release
# 687 "data/maps/SlateportCity/scripts.pory"
	end
# 688 "data/maps/SlateportCity/scripts.pory"

# 689 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ReceivedPowderJar::
# 690 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, 1
# 691 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 692 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_ExplainBerryPowder
# 693 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BroughtMeSomeBerryPowder, MSGBOX_DEFAULT
# 694 "data/maps/SlateportCity/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 695 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 696 "data/maps/SlateportCity/scripts.pory"
	end
# 697 "data/maps/SlateportCity/scripts.pory"

# 698 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ExplainBerryPowder::
# 699 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 700 "data/maps/SlateportCity/scripts.pory"
	release
# 701 "data/maps/SlateportCity/scripts.pory"
	end
# 702 "data/maps/SlateportCity/scripts.pory"

# 703 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem::
# 704 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ExchangeWhatWithIt
# 705 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 706 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 707 "data/maps/SlateportCity/scripts.pory"
	special ShowScrollableMultichoice
# 708 "data/maps/SlateportCity/scripts.pory"
	switch VAR_RESULT
# 709 "data/maps/SlateportCity/scripts.pory"
	case 0, SlateportCity_EventScript_EnergyPowder
# 710 "data/maps/SlateportCity/scripts.pory"
	case 1, SlateportCity_EventScript_EnergyRoot
# 711 "data/maps/SlateportCity/scripts.pory"
	case 2, SlateportCity_EventScript_HealPowder
# 712 "data/maps/SlateportCity/scripts.pory"
	case 3, SlateportCity_EventScript_RevivalHerb
# 713 "data/maps/SlateportCity/scripts.pory"
	case 4, SlateportCity_EventScript_Protein
# 714 "data/maps/SlateportCity/scripts.pory"
	case 5, SlateportCity_EventScript_Iron
# 715 "data/maps/SlateportCity/scripts.pory"
	case 6, SlateportCity_EventScript_Carbos
# 716 "data/maps/SlateportCity/scripts.pory"
	case 7, SlateportCity_EventScript_Calcium
# 717 "data/maps/SlateportCity/scripts.pory"
	case 8, SlateportCity_EventScript_Zinc
# 718 "data/maps/SlateportCity/scripts.pory"
	case 9, SlateportCity_EventScript_HPUp
# 719 "data/maps/SlateportCity/scripts.pory"
	case 10, SlateportCity_EventScript_PPUp
# 720 "data/maps/SlateportCity/scripts.pory"
	case 11, SlateportCity_EventScript_CancelPowderItemSelect
# 721 "data/maps/SlateportCity/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_EventScript_CancelPowderItemSelect
# 722 "data/maps/SlateportCity/scripts.pory"
	end
# 723 "data/maps/SlateportCity/scripts.pory"

# 724 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyPowder::
# 725 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
# 726 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
# 727 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 728 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 729 "data/maps/SlateportCity/scripts.pory"
	end
# 730 "data/maps/SlateportCity/scripts.pory"

# 731 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyRoot::
# 732 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
# 733 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
# 734 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 80
# 735 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 736 "data/maps/SlateportCity/scripts.pory"
	end
# 737 "data/maps/SlateportCity/scripts.pory"

# 738 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HealPowder::
# 739 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
# 740 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HEAL_POWDER
# 741 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 742 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 743 "data/maps/SlateportCity/scripts.pory"
	end
# 744 "data/maps/SlateportCity/scripts.pory"

# 745 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RevivalHerb::
# 746 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
# 747 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
# 748 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 300
# 749 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 750 "data/maps/SlateportCity/scripts.pory"
	end
# 751 "data/maps/SlateportCity/scripts.pory"

# 752 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Protein::
# 753 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PROTEIN
# 754 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PROTEIN
# 755 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 756 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 757 "data/maps/SlateportCity/scripts.pory"
	end
# 758 "data/maps/SlateportCity/scripts.pory"

# 759 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Iron::
# 760 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_IRON
# 761 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_IRON
# 762 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 763 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 764 "data/maps/SlateportCity/scripts.pory"
	end
# 765 "data/maps/SlateportCity/scripts.pory"

# 766 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Carbos::
# 767 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CARBOS
# 768 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CARBOS
# 769 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 770 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 771 "data/maps/SlateportCity/scripts.pory"
	end
# 772 "data/maps/SlateportCity/scripts.pory"

# 773 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Calcium::
# 774 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CALCIUM
# 775 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CALCIUM
# 776 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 777 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 778 "data/maps/SlateportCity/scripts.pory"
	end
# 779 "data/maps/SlateportCity/scripts.pory"

# 780 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Zinc::
# 781 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ZINC
# 782 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ZINC
# 783 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 784 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 785 "data/maps/SlateportCity/scripts.pory"
	end
# 786 "data/maps/SlateportCity/scripts.pory"

# 787 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HPUp::
# 788 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HP_UP
# 789 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HP_UP
# 790 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 791 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 792 "data/maps/SlateportCity/scripts.pory"
	end
# 793 "data/maps/SlateportCity/scripts.pory"

# 794 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PPUp::
# 795 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PP_UP
# 796 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PP_UP
# 797 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 3000
# 798 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 799 "data/maps/SlateportCity/scripts.pory"
	end
# 800 "data/maps/SlateportCity/scripts.pory"

# 801 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CancelPowderItemSelect::
# 802 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ComeBackToTradeBerryPowder, MSGBOX_DEFAULT
# 803 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 804 "data/maps/SlateportCity/scripts.pory"
	release
# 805 "data/maps/SlateportCity/scripts.pory"
	end
# 806 "data/maps/SlateportCity/scripts.pory"

# 807 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem::
# 808 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExchangeBerryPowderForItem, MSGBOX_YESNO
# 809 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_EventScript_ChooseBerryPowderItem
# 810 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 811 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 812 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NotEnoughBerryPowder
# 813 "data/maps/SlateportCity/scripts.pory"
	giveitem VAR_0x8008
# 814 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NoRoomForBerryPowderItem
# 815 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 816 "data/maps/SlateportCity/scripts.pory"
	special TakeBerryPowder
# 817 "data/maps/SlateportCity/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 818 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FineBerryPowderTradeSomethingElse, MSGBOX_YESNO
# 819 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_EventScript_ChooseBerryPowderItem
# 820 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhenYouGetMoreBringItToMe, MSGBOX_DEFAULT
# 821 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 822 "data/maps/SlateportCity/scripts.pory"
	release
# 823 "data/maps/SlateportCity/scripts.pory"
	end
# 824 "data/maps/SlateportCity/scripts.pory"

# 825 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NoRoomForBerryPowderItem::
# 826 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 827 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 828 "data/maps/SlateportCity/scripts.pory"
	release
# 829 "data/maps/SlateportCity/scripts.pory"
	end
# 830 "data/maps/SlateportCity/scripts.pory"

# 831 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotEnoughBerryPowder::
# 832 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontHaveEnoughBerryPowder, MSGBOX_DEFAULT
# 833 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 834 "data/maps/SlateportCity/scripts.pory"
	end
# 835 "data/maps/SlateportCity/scripts.pory"

# 836 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottBattleTentScene::
# 837 "data/maps/SlateportCity/scripts.pory"
	lockall
# 838 "data/maps/SlateportCity/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_FaceUp
# 839 "data/maps/SlateportCity/scripts.pory"
	opendoor 10, 12
# 840 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 841 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SLATEPORT_SCOTT
# 842 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PushPlayerDown
# 843 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottExitBattleTent
# 844 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 845 "data/maps/SlateportCity/scripts.pory"
	closedoor 10, 12
# 846 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 847 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
# 848 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 849 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerWatchScottExit
# 850 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottExitAfterBattleTent
# 851 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 852 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_SCOTT
# 853 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 854 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 855 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 856 "data/maps/SlateportCity/scripts.pory"
	end
# 857 "data/maps/SlateportCity/scripts.pory"

# 858 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PushPlayerDown:
# 859 "data/maps/SlateportCity/scripts.pory"
	lock_facing_direction
# 860 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 861 "data/maps/SlateportCity/scripts.pory"
	unlock_facing_direction
# 862 "data/maps/SlateportCity/scripts.pory"
	step_end
# 863 "data/maps/SlateportCity/scripts.pory"

# 864 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerWatchScottExit:
# 865 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 866 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 867 "data/maps/SlateportCity/scripts.pory"
	step_end
# 868 "data/maps/SlateportCity/scripts.pory"

# 869 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitBattleTent:
# 870 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 871 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 872 "data/maps/SlateportCity/scripts.pory"
	step_end
# 873 "data/maps/SlateportCity/scripts.pory"

# 874 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitAfterBattleTent:
# 875 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 876 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 877 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 878 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 879 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 880 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 881 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 882 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 883 "data/maps/SlateportCity/scripts.pory"
	step_end
# 884 "data/maps/SlateportCity/scripts.pory"

# 885 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryCrushRankingsSign::
# 886 "data/maps/SlateportCity/scripts.pory"
	lockall
# 887 "data/maps/SlateportCity/scripts.pory"
	special ShowBerryCrushRankings
# 888 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 889 "data/maps/SlateportCity/scripts.pory"
	end
# 890 "data/maps/SlateportCity/scripts.pory"

# 891 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EnergyGuruSellWhatYouNeed:
# 892 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the ENERGY GURU! I'll go for it and\n"
# 893 "data/maps/SlateportCity/scripts.pory"
	.string "sell you what you need!$"
# 894 "data/maps/SlateportCity/scripts.pory"

# 895 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhYourPokemon:
# 896 "data/maps/SlateportCity/scripts.pory"
	.string "Oh?\n"
# 897 "data/maps/SlateportCity/scripts.pory"
	.string "Your {STR_VAR_1}…$"
# 898 "data/maps/SlateportCity/scripts.pory"

# 899 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseGiveItThisEffortRibbon:
# 900 "data/maps/SlateportCity/scripts.pory"
	.string "Went for it stupendously!\p"
# 901 "data/maps/SlateportCity/scripts.pory"
	.string "As its reward, please give it this\n"
# 902 "data/maps/SlateportCity/scripts.pory"
	.string "EFFORT RIBBON.$"
# 903 "data/maps/SlateportCity/scripts.pory"

# 904 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ReceivedEffortRibbon:
# 905 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} received the EFFORT RIBBON.$"
# 906 "data/maps/SlateportCity/scripts.pory"

# 907 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PutEffortRibbonOnMon:
# 908 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} put the EFFORT RIBBON\n"
# 909 "data/maps/SlateportCity/scripts.pory"
	.string "on {STR_VAR_1}.$"
# 910 "data/maps/SlateportCity/scripts.pory"

# 911 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoForItLittleHarder:
# 912 "data/maps/SlateportCity/scripts.pory"
	.string "You have to go for it a little harder.\p"
# 913 "data/maps/SlateportCity/scripts.pory"
	.string "If you do, I'll give your POKéMON\n"
# 914 "data/maps/SlateportCity/scripts.pory"
	.string "something nice.$"
# 915 "data/maps/SlateportCity/scripts.pory"

# 916 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EffortRibbonLooksGoodOnIt:
# 917 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! Your {STR_VAR_1}, that EFFORT\n"
# 918 "data/maps/SlateportCity/scripts.pory"
	.string "RIBBON looks good on it!$"
# 919 "data/maps/SlateportCity/scripts.pory"

# 920 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WonderIfLighthouseStartlesPokemon:
# 921 "data/maps/SlateportCity/scripts.pory"
	.string "The light of the lighthouse reaches\n"
# 922 "data/maps/SlateportCity/scripts.pory"
	.string "dozens of miles away.\p"
# 923 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder if it doesn't startle POKéMON\n"
# 924 "data/maps/SlateportCity/scripts.pory"
	.string "in the sea.$"
# 925 "data/maps/SlateportCity/scripts.pory"

# 926 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaweedFullOfLife:
# 927 "data/maps/SlateportCity/scripts.pory"
	.string "Ooh, look at this!\p"
# 928 "data/maps/SlateportCity/scripts.pory"
	.string "The seaweed you can get around these\n"
# 929 "data/maps/SlateportCity/scripts.pory"
	.string "parts is fresh and full of life.\p"
# 930 "data/maps/SlateportCity/scripts.pory"
	.string "Why, it looks like it can even rear up\n"
# 931 "data/maps/SlateportCity/scripts.pory"
	.string "and attack!$"
# 932 "data/maps/SlateportCity/scripts.pory"

# 933 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HowTownIsBornAndGrows:
# 934 "data/maps/SlateportCity/scripts.pory"
	.string "Where the water is clean, the fruits\n"
# 935 "data/maps/SlateportCity/scripts.pory"
	.string "of bountiful harvest gather.\p"
# 936 "data/maps/SlateportCity/scripts.pory"
	.string "And where people gather, a market\n"
# 937 "data/maps/SlateportCity/scripts.pory"
	.string "soon starts.\p"
# 938 "data/maps/SlateportCity/scripts.pory"
	.string "That is how a town is born and grows.$"
# 939 "data/maps/SlateportCity/scripts.pory"

# 940 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SlateportWonderfulPlace:
# 941 "data/maps/SlateportCity/scripts.pory"
	.string "Shopping where you can breathe the\n"
# 942 "data/maps/SlateportCity/scripts.pory"
	.string "scent of the ocean…\p"
# 943 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT is such a wonderful place!$"
# 944 "data/maps/SlateportCity/scripts.pory"

# 945 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyBricksSoDecorWontGetDirty:
# 946 "data/maps/SlateportCity/scripts.pory"
	.string "If you put DOLLS or CUSHIONS on\n"
# 947 "data/maps/SlateportCity/scripts.pory"
	.string "the floor, they'll get dirty.\p"
# 948 "data/maps/SlateportCity/scripts.pory"
	.string "I'm going to buy some BRICKS so my\n"
# 949 "data/maps/SlateportCity/scripts.pory"
	.string "DOLLS and CUSHIONS won't get dirty\l"
# 950 "data/maps/SlateportCity/scripts.pory"
	.string "when I leave them out.$"
# 951 "data/maps/SlateportCity/scripts.pory"

# 952 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoingToCompeteInBattleTent:
# 953 "data/maps/SlateportCity/scripts.pory"
	.string "Wroooar! I'm going to compete in\n"
# 954 "data/maps/SlateportCity/scripts.pory"
	.string "the BATTLE TENT, too!\p"
# 955 "data/maps/SlateportCity/scripts.pory"
	.string "But before that, I need to catch\n"
# 956 "data/maps/SlateportCity/scripts.pory"
	.string "some POKéMON!$"
# 957 "data/maps/SlateportCity/scripts.pory"

# 958 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BushedHikingFromMauville:
# 959 "data/maps/SlateportCity/scripts.pory"
	.string "Whew… I'm just bushed…\p"
# 960 "data/maps/SlateportCity/scripts.pory"
	.string "I hiked over from MAUVILLE CITY.\n"
# 961 "data/maps/SlateportCity/scripts.pory"
	.string "But, boy, this city's huge.\p"
# 962 "data/maps/SlateportCity/scripts.pory"
	.string "If I'd known this, I would've ridden\n"
# 963 "data/maps/SlateportCity/scripts.pory"
	.string "my BIKE here.$"
# 964 "data/maps/SlateportCity/scripts.pory"

# 965 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EveryoneCallsHimCaptStern:
# 966 "data/maps/SlateportCity/scripts.pory"
	.string "STERN, the fellow who built the\n"
# 967 "data/maps/SlateportCity/scripts.pory"
	.string "MUSEUM, also happens to be the leader\l"
# 968 "data/maps/SlateportCity/scripts.pory"
	.string "of an undersea exploration team.\p"
# 969 "data/maps/SlateportCity/scripts.pory"
	.string "So, everyone calls him CAPT. STERN.$"
# 970 "data/maps/SlateportCity/scripts.pory"

# 971 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsLongLineOverThere:
# 972 "data/maps/SlateportCity/scripts.pory"
	.string "What is that over there?\n"
# 973 "data/maps/SlateportCity/scripts.pory"
	.string "That long line…$"
# 974 "data/maps/SlateportCity/scripts.pory"

# 975 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_VisitedMuseumOften:
# 976 "data/maps/SlateportCity/scripts.pory"
	.string "When I was a child, I visited\n"
# 977 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM often.\p"
# 978 "data/maps/SlateportCity/scripts.pory"
	.string "I used to dream about the mysteries of\n"
# 979 "data/maps/SlateportCity/scripts.pory"
	.string "the sea after seeing the exhibits.$"
# 980 "data/maps/SlateportCity/scripts.pory"

# 981 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_QuitPushing:
# 982 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, there! Quit pushing!\n"
# 983 "data/maps/SlateportCity/scripts.pory"
	.string "This is the line, can't you see?$"
# 984 "data/maps/SlateportCity/scripts.pory"

# 985 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaHasPolicy:
# 986 "data/maps/SlateportCity/scripts.pory"
	.string "TEAM AQUA has a policy of\n"
# 987 "data/maps/SlateportCity/scripts.pory"
	.string "assembling and dispersing at\l"
# 988 "data/maps/SlateportCity/scripts.pory"
	.string "the operation site.$"
# 989 "data/maps/SlateportCity/scripts.pory"

# 990 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BossIsBrilliant:
# 991 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is brilliant.\p"
# 992 "data/maps/SlateportCity/scripts.pory"
	.string "What would he want to do with\n"
# 993 "data/maps/SlateportCity/scripts.pory"
	.string "a MUSEUM now?$"
# 994 "data/maps/SlateportCity/scripts.pory"

# 995 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsNewSchemeIWonder:
# 996 "data/maps/SlateportCity/scripts.pory"
	.string "What's the new scheme, I wonder?\p"
# 997 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is scary when he's mad, so\n"
# 998 "data/maps/SlateportCity/scripts.pory"
	.string "I'd better not screw things up…$"
# 999 "data/maps/SlateportCity/scripts.pory"

# 1000 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldTakeItAll:
# 1001 "data/maps/SlateportCity/scripts.pory"
	.string "If there's something we need in\n"
# 1002 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM, we should take it all!$"
# 1003 "data/maps/SlateportCity/scripts.pory"

# 1004 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontButtIn:
# 1005 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, you there!\n"
# 1006 "data/maps/SlateportCity/scripts.pory"
	.string "Don't butt in!$"
# 1007 "data/maps/SlateportCity/scripts.pory"

# 1008 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RemindsMeOfLongLineForGames:
# 1009 "data/maps/SlateportCity/scripts.pory"
	.string "A long line, huh?\p"
# 1010 "data/maps/SlateportCity/scripts.pory"
	.string "It reminds me of the times I lined up to\n"
# 1011 "data/maps/SlateportCity/scripts.pory"
	.string "buy smash-hit games…$"
# 1012 "data/maps/SlateportCity/scripts.pory"

# 1013 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhyAreWeLiningUp:
# 1014 "data/maps/SlateportCity/scripts.pory"
	.string "Why are we even lining up and paying?\n"
# 1015 "data/maps/SlateportCity/scripts.pory"
	.string "We should just march in!$"
# 1016 "data/maps/SlateportCity/scripts.pory"

# 1017 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatDoYouWant:
# 1018 "data/maps/SlateportCity/scripts.pory"
	.string "What?\n"
# 1019 "data/maps/SlateportCity/scripts.pory"
	.string "What do you want?$"
# 1020 "data/maps/SlateportCity/scripts.pory"

# 1021 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllReadSignForYou:
# 1022 "data/maps/SlateportCity/scripts.pory"
	.string "You want to read this sign?\n"
# 1023 "data/maps/SlateportCity/scripts.pory"
	.string "I'll read it for you!$"
# 1024 "data/maps/SlateportCity/scripts.pory"

# 1025 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SaysSomethingLikeSeaIsEndless:
# 1026 "data/maps/SlateportCity/scripts.pory"
	.string "Let's see…\p"
# 1027 "data/maps/SlateportCity/scripts.pory"
	.string "Um… I think it says something like\n"
# 1028 "data/maps/SlateportCity/scripts.pory"
	.string "“the life in the sea is endless.”\p"
# 1029 "data/maps/SlateportCity/scripts.pory"
	.string "Yup, I'm pretty sure that's what\n"
# 1030 "data/maps/SlateportCity/scripts.pory"
	.string "it says.$"
# 1031 "data/maps/SlateportCity/scripts.pory"

# 1032 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldveBroughtMyGameBoy:
# 1033 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…\p"
# 1034 "data/maps/SlateportCity/scripts.pory"
	.string "I should've brought my Game Boy\n"
# 1035 "data/maps/SlateportCity/scripts.pory"
	.string "Advance so I wouldn't get bored in line…\p"
# 1036 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…$"
# 1037 "data/maps/SlateportCity/scripts.pory"

# 1038 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HotSpringsAfterOperation:
# 1039 "data/maps/SlateportCity/scripts.pory"
	.string "When this operation's over, I'll take\n"
# 1040 "data/maps/SlateportCity/scripts.pory"
	.string "you to a hot spring spa!\p"
# 1041 "data/maps/SlateportCity/scripts.pory"
	.string "That's what our leader said.\n"
# 1042 "data/maps/SlateportCity/scripts.pory"
	.string "I can't wait!$"
# 1043 "data/maps/SlateportCity/scripts.pory"

# 1044 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaIsSoWet:
# 1045 "data/maps/SlateportCity/scripts.pory"
	.string "The sea is just so vast…\p"
# 1046 "data/maps/SlateportCity/scripts.pory"
	.string "Could the sea have been made by\n"
# 1047 "data/maps/SlateportCity/scripts.pory"
	.string "the tears shed by POKéMON?$"
# 1048 "data/maps/SlateportCity/scripts.pory"

# 1049 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SinkOldBoats:
# 1050 "data/maps/SlateportCity/scripts.pory"
	.string "Do you know what they do with old\n"
# 1051 "data/maps/SlateportCity/scripts.pory"
	.string "ships that become too creaky to sail?\p"
# 1052 "data/maps/SlateportCity/scripts.pory"
	.string "They sink them in the sea so they\n"
# 1053 "data/maps/SlateportCity/scripts.pory"
	.string "become habitats for POKéMON.$"
# 1054 "data/maps/SlateportCity/scripts.pory"

# 1055 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyTooMuch:
# 1056 "data/maps/SlateportCity/scripts.pory"
	.string "Whenever I visit here, I get carried\n"
# 1057 "data/maps/SlateportCity/scripts.pory"
	.string "away and buy too much.$"
# 1058 "data/maps/SlateportCity/scripts.pory"

# 1059 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GetNameRaterToHelpYou:
# 1060 "data/maps/SlateportCity/scripts.pory"
	.string "If you want to change your POKéMON's\n"
# 1061 "data/maps/SlateportCity/scripts.pory"
	.string "nickname, you'll have to get the NAME\l"
# 1062 "data/maps/SlateportCity/scripts.pory"
	.string "RATER to help you.$"
# 1063 "data/maps/SlateportCity/scripts.pory"

# 1064 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CantChangeTradeMonName:
# 1065 "data/maps/SlateportCity/scripts.pory"
	.string "Any POKéMON you get in a trade,\n"
# 1066 "data/maps/SlateportCity/scripts.pory"
	.string "you can't change its nickname.\p"
# 1067 "data/maps/SlateportCity/scripts.pory"
	.string "The original TRAINER's love for that\n"
# 1068 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON is in the nickname.$"
# 1069 "data/maps/SlateportCity/scripts.pory"

# 1070 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentBuiltRecently:
# 1071 "data/maps/SlateportCity/scripts.pory"
	.string "Recently, a BATTLE TENT was built\n"
# 1072 "data/maps/SlateportCity/scripts.pory"
	.string "in SLATEPORT.\p"
# 1073 "data/maps/SlateportCity/scripts.pory"
	.string "GYMS are fun, but the BATTLE TENT's\n"
# 1074 "data/maps/SlateportCity/scripts.pory"
	.string "awesome in its own way.\p"
# 1075 "data/maps/SlateportCity/scripts.pory"
	.string "You should go find tough POKéMON\n"
# 1076 "data/maps/SlateportCity/scripts.pory"
	.string "for the BATTLE TENT!$"
# 1077 "data/maps/SlateportCity/scripts.pory"

# 1078 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptSternBeingInterviewed:
# 1079 "data/maps/SlateportCity/scripts.pory"
	.string "I was hoping that it was a famous star\n"
# 1080 "data/maps/SlateportCity/scripts.pory"
	.string "so I could get an autograph.\p"
# 1081 "data/maps/SlateportCity/scripts.pory"
	.string "But who's that being interviewed?\n"
# 1082 "data/maps/SlateportCity/scripts.pory"
	.string "Isn't that CAPT. STERN?$"
# 1083 "data/maps/SlateportCity/scripts.pory"

# 1084 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_InterviewerSoCool:
# 1085 "data/maps/SlateportCity/scripts.pory"
	.string "That lady interviewer is so cool\n"
# 1086 "data/maps/SlateportCity/scripts.pory"
	.string "and pretty.\p"
# 1087 "data/maps/SlateportCity/scripts.pory"
	.string "When I grow up, I'm going to be\n"
# 1088 "data/maps/SlateportCity/scripts.pory"
	.string "an international journalist!$"
# 1089 "data/maps/SlateportCity/scripts.pory"

# 1090 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternSaysDiscoveredSomething:
# 1091 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN says they discovered\n"
# 1092 "data/maps/SlateportCity/scripts.pory"
	.string "something at the bottom of the sea.\p"
# 1093 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder what it is?\n"
# 1094 "data/maps/SlateportCity/scripts.pory"
	.string "What could it be?$"
# 1095 "data/maps/SlateportCity/scripts.pory"

# 1096 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainComeBackWithBigFish:
# 1097 "data/maps/SlateportCity/scripts.pory"
	.string "What's going on here?\p"
# 1098 "data/maps/SlateportCity/scripts.pory"
	.string "Did the good CAPTAIN come back with\n"
# 1099 "data/maps/SlateportCity/scripts.pory"
	.string "a big fish from the ocean floor?$"
# 1100 "data/maps/SlateportCity/scripts.pory"

# 1101 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AmIOnTV:
# 1102 "data/maps/SlateportCity/scripts.pory"
	.string "Hey! Are you watching?\n"
# 1103 "data/maps/SlateportCity/scripts.pory"
	.string "Am I on TV?$"
# 1104 "data/maps/SlateportCity/scripts.pory"

# 1105 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainsACelebrity:
# 1106 "data/maps/SlateportCity/scripts.pory"
	.string "A TV interview! Here!\n"
# 1107 "data/maps/SlateportCity/scripts.pory"
	.string "The CAPTAIN's a celebrity!$"
# 1108 "data/maps/SlateportCity/scripts.pory"

# 1109 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BigSmileForCamera:
# 1110 "data/maps/SlateportCity/scripts.pory"
	.string "TY: Okay, CAPT. STERN, a big smile\n"
# 1111 "data/maps/SlateportCity/scripts.pory"
	.string "for the camera!$"
# 1112 "data/maps/SlateportCity/scripts.pory"

# 1113 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MostInvaluableExperience:
# 1114 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: I see, I see. You've had a most\n"
# 1115 "data/maps/SlateportCity/scripts.pory"
	.string "invaluable experience…$"
# 1116 "data/maps/SlateportCity/scripts.pory"

# 1117 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternMoveAheadWithExploration:
# 1118 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Yes, indeed. We intend to\n"
# 1119 "data/maps/SlateportCity/scripts.pory"
	.string "move ahead with our exploration.$"
# 1120 "data/maps/SlateportCity/scripts.pory"

# 1121 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GabbyWonderfulThanksForInterview:
# 1122 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: That's wonderful, CAPT. STERN!\n"
# 1123 "data/maps/SlateportCity/scripts.pory"
	.string "Thank you for taking the time from\l"
# 1124 "data/maps/SlateportCity/scripts.pory"
	.string "your busy schedule to talk to us.\p"
# 1125 "data/maps/SlateportCity/scripts.pory"
	.string "We hope we can interview you again\n"
# 1126 "data/maps/SlateportCity/scripts.pory"
	.string "with news of more discoveries!$"
# 1127 "data/maps/SlateportCity/scripts.pory"

# 1128 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhewFirstInterview:
# 1129 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Whew…\p"
# 1130 "data/maps/SlateportCity/scripts.pory"
	.string "That was my first time to be filmed for\n"
# 1131 "data/maps/SlateportCity/scripts.pory"
	.string "TV. That was nerve-wracking.$"
# 1132 "data/maps/SlateportCity/scripts.pory"

# 1133 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhPlayerWeMadeDiscovery:
# 1134 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! {PLAYER}{KUN}!\n"
# 1135 "data/maps/SlateportCity/scripts.pory"
	.string "You're looking great!\p"
# 1136 "data/maps/SlateportCity/scripts.pory"
	.string "We made a huge discovery on our last\n"
# 1137 "data/maps/SlateportCity/scripts.pory"
	.string "seafloor exploration.\p"
# 1138 "data/maps/SlateportCity/scripts.pory"
	.string "We found an underwater cavern on\n"
# 1139 "data/maps/SlateportCity/scripts.pory"
	.string "ROUTE 128.\p"
# 1140 "data/maps/SlateportCity/scripts.pory"
	.string "We think it's the habitat of a POKéMON\n"
# 1141 "data/maps/SlateportCity/scripts.pory"
	.string "that's said to have been long extinct.$"
# 1142 "data/maps/SlateportCity/scripts.pory"

# 1143 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaWillAssumeControlOfSubmarine:
# 1144 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1145 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN, I presume.\p"
# 1146 "data/maps/SlateportCity/scripts.pory"
	.string "We of TEAM AQUA will assume\n"
# 1147 "data/maps/SlateportCity/scripts.pory"
	.string "control of your submarine!\p"
# 1148 "data/maps/SlateportCity/scripts.pory"
	.string "Your objections are meaningless!\n"
# 1149 "data/maps/SlateportCity/scripts.pory"
	.string "We expect your total cooperation!\p"
# 1150 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1151 "data/maps/SlateportCity/scripts.pory"
	.string "Just watch and learn what TEAM\l"
# 1152 "data/maps/SlateportCity/scripts.pory"
	.string "AQUA has planned!$"
# 1153 "data/maps/SlateportCity/scripts.pory"

# 1154 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhatWasAllThat:
# 1155 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: What was that all about?\p"
# 1156 "data/maps/SlateportCity/scripts.pory"
	.string "It sounded like someone using\n"
# 1157 "data/maps/SlateportCity/scripts.pory"
	.string "a megaphone…\p"
# 1158 "data/maps/SlateportCity/scripts.pory"
	.string "Where did it come from?$"
# 1159 "data/maps/SlateportCity/scripts.pory"

# 1160 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FromHarborTryingToTakeSub:
# 1161 "data/maps/SlateportCity/scripts.pory"
	.string "It's from the HARBOR!\p"
# 1162 "data/maps/SlateportCity/scripts.pory"
	.string "The submarine!\n"
# 1163 "data/maps/SlateportCity/scripts.pory"
	.string "They're trying to take it!$"
# 1164 "data/maps/SlateportCity/scripts.pory"

# 1165 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseComeWithMe:
# 1166 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 1167 "data/maps/SlateportCity/scripts.pory"
	.string "Please, come with me!$"
# 1168 "data/maps/SlateportCity/scripts.pory"

# 1169 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentSign:
# 1170 "data/maps/SlateportCity/scripts.pory"
	.string "BATTLE TENT SLATEPORT SITE\n"
# 1171 "data/maps/SlateportCity/scripts.pory"
	.string "“Find it! The ultimate POKéMON!”$"
# 1172 "data/maps/SlateportCity/scripts.pory"

# 1173 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardWantedSign:
# 1174 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1175 "data/maps/SlateportCity/scripts.pory"
	.string "“Wanted: A sailor capable of sailing\n"
# 1176 "data/maps/SlateportCity/scripts.pory"
	.string "in all currents.”$"
# 1177 "data/maps/SlateportCity/scripts.pory"

# 1178 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardNearsCompletion:
# 1179 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1180 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL nears\n"
# 1181 "data/maps/SlateportCity/scripts.pory"
	.string "completion for serving the ports of\l"
# 1182 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT and LILYCOVE.”$"
# 1183 "data/maps/SlateportCity/scripts.pory"

# 1184 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardFerryComplete:
# 1185 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1186 "data/maps/SlateportCity/scripts.pory"
	.string "“Boarding of the SLATEPORT-LILYCOVE\n"
# 1187 "data/maps/SlateportCity/scripts.pory"
	.string "ferry S.S. TIDAL is handled at the\l"
# 1188 "data/maps/SlateportCity/scripts.pory"
	.string "HARBOR.”$"
# 1189 "data/maps/SlateportCity/scripts.pory"

# 1190 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PokemonFanClubSign:
# 1191 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON FAN CLUB\n"
# 1192 "data/maps/SlateportCity/scripts.pory"
	.string "“Calling all fans of POKéMON!”$"
# 1193 "data/maps/SlateportCity/scripts.pory"

# 1194 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OceanicMuseumSign:
# 1195 "data/maps/SlateportCity/scripts.pory"
	.string "“The endless sea sustains\n"
# 1196 "data/maps/SlateportCity/scripts.pory"
	.string "all life.”\p"
# 1197 "data/maps/SlateportCity/scripts.pory"
	.string "OCEANIC MUSEUM$"
# 1198 "data/maps/SlateportCity/scripts.pory"

# 1199 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CitySign:
# 1200 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT CITY\p"
# 1201 "data/maps/SlateportCity/scripts.pory"
	.string "“The port where people and POKéMON\n"
# 1202 "data/maps/SlateportCity/scripts.pory"
	.string "cross paths.”$"
# 1203 "data/maps/SlateportCity/scripts.pory"

# 1204 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MarketSign:
# 1205 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT MARKET\n"
# 1206 "data/maps/SlateportCity/scripts.pory"
	.string "“Unique items found nowhere else!”$"
# 1207 "data/maps/SlateportCity/scripts.pory"

# 1208 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborFerryUnderConstruction:
# 1209 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1210 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL is under\n"
# 1211 "data/maps/SlateportCity/scripts.pory"
	.string "construction in the SHIPYARD.\p"
# 1212 "data/maps/SlateportCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 1213 "data/maps/SlateportCity/scripts.pory"
	.string "shortly.”$"
# 1214 "data/maps/SlateportCity/scripts.pory"

# 1215 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborSign:
# 1216 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1217 "data/maps/SlateportCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 1218 "data/maps/SlateportCity/scripts.pory"
	.string "the ferry S.S. TIDAL.”$"
# 1219 "data/maps/SlateportCity/scripts.pory"

# 1220 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_NameRatersHouseSign:
# 1221 "data/maps/SlateportCity/scripts.pory"
	.string "NAME RATER'S HOUSE\n"
# 1222 "data/maps/SlateportCity/scripts.pory"
	.string "“POKéMON nicknames rated.”$"
# 1223 "data/maps/SlateportCity/scripts.pory"

# 1224 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerries:
# 1225 "data/maps/SlateportCity/scripts.pory"
	.string "If a wild POKéMON gets hurt, it heals\n"
# 1226 "data/maps/SlateportCity/scripts.pory"
	.string "itself by chewing on BERRIES.\p"
# 1227 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1228 "data/maps/SlateportCity/scripts.pory"
	.string "Somebody saw that and got the idea\n"
# 1229 "data/maps/SlateportCity/scripts.pory"
	.string "of making medicine from BERRIES.\p"
# 1230 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1231 "data/maps/SlateportCity/scripts.pory"
	.string "To turn BERRIES into medicine,\n"
# 1232 "data/maps/SlateportCity/scripts.pory"
	.string "they must be crushed into powder.\p"
# 1233 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1234 "data/maps/SlateportCity/scripts.pory"
	.string "You seem to have an interest\n"
# 1235 "data/maps/SlateportCity/scripts.pory"
	.string "in BERRIES!\p"
# 1236 "data/maps/SlateportCity/scripts.pory"
	.string "I've got something good for someone\n"
# 1237 "data/maps/SlateportCity/scripts.pory"
	.string "like you.$"
# 1238 "data/maps/SlateportCity/scripts.pory"

# 1239 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerryPowder:
# 1240 "data/maps/SlateportCity/scripts.pory"
	.string "I recently had machines installed at\n"
# 1241 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON CENTERS for crushing BERRIES.\p"
# 1242 "data/maps/SlateportCity/scripts.pory"
	.string "The BERRY CRUSH machines are at\n"
# 1243 "data/maps/SlateportCity/scripts.pory"
	.string "the DIRECT CORNER upstairs.\p"
# 1244 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?\p"
# 1245 "data/maps/SlateportCity/scripts.pory"
	.string "Could you make BERRY POWDER for\n"
# 1246 "data/maps/SlateportCity/scripts.pory"
	.string "me using those machines?\p"
# 1247 "data/maps/SlateportCity/scripts.pory"
	.string "I can make you all sorts of medicine\n"
# 1248 "data/maps/SlateportCity/scripts.pory"
	.string "if you bring me lots of BERRY POWDER.$"
# 1249 "data/maps/SlateportCity/scripts.pory"

# 1250 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BroughtMeSomeBerryPowder:
# 1251 "data/maps/SlateportCity/scripts.pory"
	.string "Have you brought me some\n"
# 1252 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER?$"
# 1253 "data/maps/SlateportCity/scripts.pory"

# 1254 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeWhatWithIt:
# 1255 "data/maps/SlateportCity/scripts.pory"
	.string "What would you like to exchange\n"
# 1256 "data/maps/SlateportCity/scripts.pory"
	.string "it with?$"
# 1257 "data/maps/SlateportCity/scripts.pory"

# 1258 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeBerryPowderForItem:
# 1259 "data/maps/SlateportCity/scripts.pory"
	.string "Okay, you want to exchange your\n"
# 1260 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for one {STR_VAR_1}?$"
# 1261 "data/maps/SlateportCity/scripts.pory"

# 1262 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontHaveEnoughBerryPowder:
# 1263 "data/maps/SlateportCity/scripts.pory"
	.string "Oh, dear. You don't have enough\n"
# 1264 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER.$"
# 1265 "data/maps/SlateportCity/scripts.pory"

# 1266 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FineBerryPowderTradeSomethingElse:
# 1267 "data/maps/SlateportCity/scripts.pory"
	.string "This is fine BERRY POWDER.\n"
# 1268 "data/maps/SlateportCity/scripts.pory"
	.string "It will make excellent medicine.\p"
# 1269 "data/maps/SlateportCity/scripts.pory"
	.string "Would you like to trade more of your\n"
# 1270 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for something else?$"
# 1271 "data/maps/SlateportCity/scripts.pory"

# 1272 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhenYouGetMoreBringItToMe:
# 1273 "data/maps/SlateportCity/scripts.pory"
	.string "Okay! When you get some more\n"
# 1274 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER, bring it to me, please!$"
# 1275 "data/maps/SlateportCity/scripts.pory"

# 1276 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ComeBackToTradeBerryPowder:
# 1277 "data/maps/SlateportCity/scripts.pory"
	.string "Come back if you'd like to trade your\n"
# 1278 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for some medicine.\p"
# 1279 "data/maps/SlateportCity/scripts.pory"
	.string "I'm always running a bazaar here.\p"
# 1280 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?$"
# 1281 "data/maps/SlateportCity/scripts.pory"

# 1282 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YouDroveTeamAquaAway:
# 1283 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Huh?\n"
# 1284 "data/maps/SlateportCity/scripts.pory"
	.string "I'm sure I met you somewhere before.\p"
# 1285 "data/maps/SlateportCity/scripts.pory"
	.string "Have I introduced myself to you?\n"
# 1286 "data/maps/SlateportCity/scripts.pory"
	.string "If not, my name's SCOTT.\p"
# 1287 "data/maps/SlateportCity/scripts.pory"
	.string "I just saw TEAM AQUA run away from\n"
# 1288 "data/maps/SlateportCity/scripts.pory"
	.string "here like they were stung.\p"
# 1289 "data/maps/SlateportCity/scripts.pory"
	.string "Let me guess--you drove them away?$"
# 1290 "data/maps/SlateportCity/scripts.pory"

# 1291 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MaybeThisTrainer:
# 1292 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Hmm…\n"
# 1293 "data/maps/SlateportCity/scripts.pory"
	.string "Maybe, just maybe, this TRAINER…$"
# 1294 "data/maps/SlateportCity/scripts.pory"

# 1295 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_LetsRegisterEachOther:
# 1296 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: All right! I think you're going\n"
# 1297 "data/maps/SlateportCity/scripts.pory"
	.string "to become a good friend.\p"
# 1298 "data/maps/SlateportCity/scripts.pory"
	.string "So, let's register each other in our\n"
# 1299 "data/maps/SlateportCity/scripts.pory"
	.string "POKéNAVS.\p"
# 1300 "data/maps/SlateportCity/scripts.pory"
	.string "… … … … … …$"
# 1301 "data/maps/SlateportCity/scripts.pory"

# 1302 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RegisteredScott:
# 1303 "data/maps/SlateportCity/scripts.pory"
	.string "Registered this SCOTT person\n"
# 1304 "data/maps/SlateportCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1305 "data/maps/SlateportCity/scripts.pory"

# 1306 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou:
# 1307 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: What I'd like to do is tag along\n"
# 1308 "data/maps/SlateportCity/scripts.pory"
	.string "with you, but I do want to keep an eye\l"
# 1309 "data/maps/SlateportCity/scripts.pory"
	.string "on the talents of other people, too.\p"
# 1310 "data/maps/SlateportCity/scripts.pory"
	.string "So, I'll be off to roam other towns\n"
# 1311 "data/maps/SlateportCity/scripts.pory"
	.string "a bit more.\p"
# 1312 "data/maps/SlateportCity/scripts.pory"
	.string "Be seeing you, {PLAYER}{KUN}!$"
# 1313 "data/maps/SlateportCity/scripts.pory"

# 1314 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_TakingBattleTentChallenge:
# 1315 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Oh, hey!\n"
# 1316 "data/maps/SlateportCity/scripts.pory"
	.string "If it isn't {PLAYER}{KUN}!\p"
# 1317 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}, let me guess--you're going\n"
# 1318 "data/maps/SlateportCity/scripts.pory"
	.string "to take the BATTLE TENT challenge?\p"
# 1319 "data/maps/SlateportCity/scripts.pory"
	.string "Yeah! That's a good idea!\n"
# 1320 "data/maps/SlateportCity/scripts.pory"
	.string "That's a really great idea!\p"
# 1321 "data/maps/SlateportCity/scripts.pory"
	.string "After all, a tough TRAINER is\n"
# 1322 "data/maps/SlateportCity/scripts.pory"
	.string "the perfect fit for the BATTLE TENT!\p"
# 1323 "data/maps/SlateportCity/scripts.pory"
	.string "Give it your best effort!$"
