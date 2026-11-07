# 1 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 2 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_MapScripts::
# 3 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.byte 0
# 4 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 5 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Chairman::
# 6 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 7 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	faceplayer
# 8 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_unset FLAG_ENTERED_CONTEST, SlateportCity_PokemonFanClub_EventScript_ChairmanNotEnteredContest
# 9 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_unset FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN, SlateportCity_PokemonFanClub_EventScript_MeetChairman
# 10 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	switch VAR_SLATEPORT_FAN_CLUB_STATE
# 11 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 0, SlateportCity_PokemonFanClub_EventScript_ChairmanFirstAssessment
# 12 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 1, SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon
# 13 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 2, SlateportCity_PokemonFanClub_EventScript_NoMoreScarves
# 14 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 15 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 16 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 17 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanFirstAssessment::
# 18 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_SLATEPORT_FAN_CLUB_STATE, 1
# 19 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_AllowMeToExamineYourPokemon, MSGBOX_DEFAULT
# 20 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon
# 21 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 22 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 23 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon::
# 24 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_2, 0
# 25 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_set FLAG_RECEIVED_YELLOW_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
# 26 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_set FLAG_RECEIVED_GREEN_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
# 27 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_set FLAG_RECEIVED_PINK_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
# 28 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_set FLAG_RECEIVED_BLUE_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
# 29 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_set FLAG_RECEIVED_RED_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
# 30 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_eq VAR_TEMP_2, CONTEST_CATEGORIES_COUNT, SlateportCity_PokemonFanClub_EventScript_ReceivedAllScarves
# 31 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_SLATEPORT_FAN_CLUB_STATE, 2, SlateportCity_PokemonFanClub_EventScript_NoMoreScarves
# 32 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_HowIsYourPokemonGrowing, MSGBOX_DEFAULT
# 33 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon
# 34 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 35 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 36 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_NoMoreScarves::
# 37 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_NothingElseToGiveYou, MSGBOX_DEFAULT
# 38 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 39 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 40 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 41 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon::
# 42 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_HmHmISee, MSGBOX_DEFAULT
# 43 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 0
# 44 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_unset FLAG_RECEIVED_YELLOW_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonTough
# 45 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_unset FLAG_RECEIVED_GREEN_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonSmart
# 46 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_unset FLAG_RECEIVED_PINK_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonCute
# 47 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_unset FLAG_RECEIVED_BLUE_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonBeauty
# 48 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_unset FLAG_RECEIVED_RED_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonCool
# 49 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 50 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	switch VAR_TEMP_1
# 51 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 0, SlateportCity_PokemonFanClub_EventScript_NoHighConditions
# 52 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 1, SlateportCity_PokemonFanClub_EventScript_GiveRedScarf
# 53 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 2, SlateportCity_PokemonFanClub_EventScript_GiveBlueScarf
# 54 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 3, SlateportCity_PokemonFanClub_EventScript_GivePinkScarf
# 55 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 4, SlateportCity_PokemonFanClub_EventScript_GiveGreenScarf
# 56 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 5, SlateportCity_PokemonFanClub_EventScript_GiveYellowScarf
# 57 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 58 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 59 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 60 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ReceivedAllScarves::
# 61 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_SLATEPORT_FAN_CLUB_STATE, 2
# 62 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 63 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 64 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf::
# 65 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	addvar VAR_TEMP_2, 1
# 66 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 67 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 68 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_NoHighConditions::
# 69 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_GiveMonMorePokeblocks, MSGBOX_DEFAULT
# 70 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 71 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 72 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 73 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveRedScarf::
# 74 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_RED_SCARF
# 75 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
# 76 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 77 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_RED_SCARF
# 78 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_RED_SCARF
# 79 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainRedScarf, MSGBOX_DEFAULT
# 80 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 81 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 82 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 83 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveBlueScarf::
# 84 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_BLUE_SCARF
# 85 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
# 86 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 87 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_BLUE_SCARF
# 88 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_BLUE_SCARF
# 89 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainBlueScarf, MSGBOX_DEFAULT
# 90 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 91 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 92 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 93 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GivePinkScarf::
# 94 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_PINK_SCARF
# 95 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
# 96 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 97 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_PINK_SCARF
# 98 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_PINK_SCARF
# 99 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainPinkScarf, MSGBOX_DEFAULT
# 100 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 101 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 102 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 103 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveGreenScarf::
# 104 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_GREEN_SCARF
# 105 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
# 106 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 107 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_GREEN_SCARF
# 108 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_GREEN_SCARF
# 109 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainGreenScarf, MSGBOX_DEFAULT
# 110 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 111 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 112 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 113 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveYellowScarf::
# 114 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_YELLOW_SCARF
# 115 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
# 116 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 117 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_YELLOW_SCARF
# 118 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_YELLOW_SCARF
# 119 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainYellowScarf, MSGBOX_DEFAULT
# 120 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 121 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 122 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 123 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf::
# 124 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_NoSpaceForReward, MSGBOX_DEFAULT
# 125 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 126 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 127 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 128 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonCool::
# 129 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonCool
# 130 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonCool
# 131 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 132 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 133 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SetMonCool::
# 134 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 1
# 135 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 136 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 137 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonBeauty::
# 138 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonBeauty
# 139 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonBeauty
# 140 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 141 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 142 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SetMonBeauty::
# 143 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 2
# 144 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 145 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 146 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonCute::
# 147 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonCute
# 148 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonCute
# 149 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 150 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 151 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SetMonCute::
# 152 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 3
# 153 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 154 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 155 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonSmart::
# 156 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonSmart
# 157 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonSmart
# 158 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 159 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 160 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SetMonSmart::
# 161 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 4
# 162 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 163 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 164 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonTough::
# 165 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonTough
# 166 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonTough
# 167 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 168 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 169 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SetMonTough::
# 170 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 5
# 171 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 172 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 173 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanNotEnteredContest::
# 174 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN, SlateportCity_PokemonFanClub_EventScript_ChairmanEnterContest
# 175 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MeetChairman, MSGBOX_DEFAULT
# 176 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN
# 177 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 178 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 179 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 180 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanEnterContest::
# 181 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_LikeToSeeEnteredContestPokemon, MSGBOX_DEFAULT
# 182 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 183 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 184 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 185 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_MeetChairman::
# 186 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MeetChairman, MSGBOX_DEFAULT
# 187 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN
# 188 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 189 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 190 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SootheBellWoman::
# 191 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 192 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	faceplayer
# 193 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_RECEIVED_SOOTHE_BELL, SlateportCity_PokemonFanClub_EventScript_ReceivedSootheBell
# 194 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ShowMePokemonThatLoveYou, MSGBOX_DEFAULT
# 195 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 196 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_ge VAR_RESULT, FRIENDSHIP_150_TO_199, SlateportCity_PokemonFanClub_EventScript_GiveSootheBell
# 197 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 198 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 199 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 200 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveSootheBell::
# 201 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playse SE_PIN
# 202 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applywaitmovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 203 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applywaitmovement VAR_LAST_TALKED, Common_Movement_Delay48
# 204 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_PokemonAdoresYou, MSGBOX_DEFAULT
# 205 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_SOOTHE_BELL
# 206 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 207 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_SOOTHE_BELL
# 208 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 209 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 210 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 211 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ReceivedSootheBell::
# 212 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_TreatPokemonWithLove, MSGBOX_DEFAULT
# 213 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 214 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 215 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 216 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Man::
# 217 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_PokemonDontLikeFainting, MSGBOX_NPC
# 218 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 219 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 220 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Twin::
# 221 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonEnjoyedProtein, MSGBOX_NPC
# 222 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 223 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 224 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Skitty::
# 225 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 226 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	faceplayer
# 227 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitse
# 228 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 229 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_Skitty, MSGBOX_DEFAULT
# 230 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmoncry
# 231 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 232 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 233 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 234 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Zigzagoon::
# 235 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 236 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	faceplayer
# 237 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitse
# 238 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 239 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_Zigzagoon, MSGBOX_DEFAULT
# 240 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmoncry
# 241 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 242 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 243 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 244 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Azumarill::
# 245 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 246 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	faceplayer
# 247 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitse
# 248 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 249 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_Azumarill, MSGBOX_DEFAULT
# 250 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmoncry
# 251 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 252 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 253 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 254 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_MeetChairman:
# 255 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Er-hem! I am the CHAIRMAN of the\n"
# 256 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "POKéMON FAN CLUB!\p"
# 257 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Being the CHAIRMAN, I am naturally\n"
# 258 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "the most important!\p"
# 259 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "No one can best me when it comes\n"
# 260 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "to raising POKéMON. No one!\p"
# 261 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Well, let me tell you about\n"
# 262 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "POKéMON CONTESTS.\p"
# 263 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "They're events where one can show off\n"
# 264 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "POKéMON for the world to see!\p"
# 265 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "However, they're held in far-off towns,\n"
# 266 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "so I cannot participate often enough.\p"
# 267 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "That is why we gather here to show\n"
# 268 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "off our POKéMON, and have others\l"
# 269 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "show us theirs.$"
# 270 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 271 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_LikeToSeeEnteredContestPokemon:
# 272 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "The POKéMON of a TRAINER who has\n"
# 273 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "entered a POKéMON CONTEST…\l"
# 274 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "That, I would like to see.$"
# 275 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 276 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_AllowMeToExamineYourPokemon:
# 277 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Er-hem! I see you've participated in\n"
# 278 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "a POKéMON CONTEST!\p"
# 279 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Please! Allow me to examine how you\n"
# 280 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "have raised your POKéMON.\p"
# 281 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "It delights me no end to see POKéMON\n"
# 282 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "raised by other TRAINERS.\p"
# 283 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "The happy expressions of POKéMON\n"
# 284 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "raised with proper care…\p"
# 285 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "The kindly eyes of the TRAINER that\n"
# 286 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "nurtured and raised the POKéMON…\p"
# 287 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "The very thought fills my heart to\n"
# 288 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "overwhelming with joy.\p"
# 289 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Oh! I do beg your pardon!\n"
# 290 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Forgive me for prattling on so!\p"
# 291 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Please! Allow me to examine how much\n"
# 292 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "your POKéMON has grown!$"
# 293 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 294 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_HowIsYourPokemonGrowing:
# 295 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "How is your POKéMON growing?\n"
# 296 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Allow me to examine it.$"
# 297 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 298 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_HmHmISee:
# 299 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Hm, hm…\n"
# 300 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "I see…$"
# 301 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 302 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_GiveMonMorePokeblocks:
# 303 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Hmmm… It's not bad, but it's not\n"
# 304 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "good, either…\p"
# 305 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "You, the TRAINER, must put more\n"
# 306 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "effort into raising this POKéMON!\p"
# 307 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "For instance, may I suggest that\n"
# 308 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "you give it more {POKEBLOCK}S?$"
# 309 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 310 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_NoSpaceForReward:
# 311 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Oh, my…\p"
# 312 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Your POKéMON is growing quite well,\n"
# 313 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "so you deserve a reward.\p"
# 314 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Unfortunately, you have no space for\n"
# 315 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "this in your BAG.$"
# 316 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 317 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis:
# 318 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Your {STR_VAR_1}, it is growing in\n"
# 319 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "a most impressive manner!\l"
# 320 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "It is one fine specimen!\p"
# 321 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "But! If you were to give it this,\n"
# 322 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "it would grow even better! Indeed!$"
# 323 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 324 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_ExplainRedScarf:
# 325 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Let a POKéMON hold that RED SCARF.\p"
# 326 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Everyone will recognize the coolness\n"
# 327 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "of that POKéMON!$"
# 328 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 329 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_ExplainBlueScarf:
# 330 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Let a POKéMON hold that BLUE SCARF.\p"
# 331 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Its beauty will be accentuated much\n"
# 332 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "more than now!$"
# 333 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 334 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_ExplainPinkScarf:
# 335 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Let a POKéMON hold that PINK SCARF.\p"
# 336 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "It will draw out the cuteness of\n"
# 337 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "the POKéMON some more!$"
# 338 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 339 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_ExplainGreenScarf:
# 340 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Let a POKéMON hold that GREEN SCARF.\p"
# 341 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "That will enhance the\n"
# 342 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "smartness of POKéMON!$"
# 343 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 344 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_ExplainYellowScarf:
# 345 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Let a POKéMON hold that YELLOW SCARF.\p"
# 346 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "It will bolster your POKéMON's\n"
# 347 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "toughness so much more!$"
# 348 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 349 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_NothingElseToGiveYou:
# 350 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "I'm sorry, but I've nothing else to\n"
# 351 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "give you! None at all!\p"
# 352 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "After all, you're blessed with the gift\n"
# 353 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "of raising POKéMON without resorting\l"
# 354 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "to any items!$"
# 355 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 356 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_ShowMePokemonThatLoveYou:
# 357 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "I love seeing POKéMON that love\n"
# 358 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "their TRAINERS.\p"
# 359 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "POKéMON are very sensitive to\n"
# 360 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "the feelings of their TRAINERS.\p"
# 361 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "If you treat your POKéMON with love\n"
# 362 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "and care, they'll love you back.\p"
# 363 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "When your POKéMON grow to love you,\n"
# 364 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "please come show me.$"
# 365 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 366 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_PokemonAdoresYou:
# 367 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Your POKéMON really adores you.\p"
# 368 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "For you, a most compassionate\n"
# 369 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "TRAINER, a gift from the FAN CLUB!$"
# 370 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 371 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_TreatPokemonWithLove:
# 372 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "POKéMON are very sensitive to\n"
# 373 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "the feelings of their TRAINERS.\p"
# 374 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "If you treat your POKéMON with love\n"
# 375 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "and care, they'll love you back.$"
# 376 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 377 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_PokemonDontLikeFainting:
# 378 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "If you keep letting a POKéMON faint\n"
# 379 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "in battle, it'll come to resent it.\p"
# 380 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Soon, it will become less trusting\n"
# 381 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "of the TRAINER.\p"
# 382 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "In other words, it certainly won't\n"
# 383 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "like you very much.$"
# 384 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 385 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_MonEnjoyedProtein:
# 386 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Do POKéMON enjoy having items used\n"
# 387 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "on them?\p"
# 388 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Mine acted really happy when I gave\n"
# 389 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "it some PROTEIN.$"
# 390 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 391 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_Skitty:
# 392 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "SKITTY: Fffnyaaaah…$"
# 393 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 394 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_Zigzagoon:
# 395 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "ZIGZAGOON: Kyuuu…$"
# 396 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 397 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_Azumarill:
# 398 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "AZUMARILL: Marimari?$"
