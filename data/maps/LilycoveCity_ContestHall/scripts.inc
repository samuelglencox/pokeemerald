# 1 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 2 "data/maps/LilycoveCity_ContestHall/scripts.pory"
@ All the LOCALID constants used in this file are essentially redundant.
# 3 "data/maps/LilycoveCity_ContestHall/scripts.pory"
@ They're all used to have the NPC the player talked to turn back so they're facing
# 4 "data/maps/LilycoveCity_ContestHall/scripts.pory"
@ their original direction (because they're watching/participating in the contests).
# 5 "data/maps/LilycoveCity_ContestHall/scripts.pory"
@ They could all be substituted for VAR_LAST_TALKED.
# 6 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_MapScripts::
# 7 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.byte 0
# 8 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 9 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_Boy1::
# 10 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_TodayWonSmartnessContest, MSGBOX_NPC
# 11 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 12 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 13 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_Boy2::
# 14 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_EnteredBunchOfContests, MSGBOX_NPC
# 15 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 16 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 17 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_Girl::
# 18 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_ManWhoWonEarlierHadPokeblocks, MSGBOX_NPC
# 19 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 20 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 21 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_Sailor::
# 22 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_IsntThisPlaceHumongous, MSGBOX_NPC
# 23 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 24 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 25 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestMC::
# 26 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 27 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 28 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_GiveItBestSmartAppeal, MSGBOX_DEFAULT
# 29 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 30 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applywaitmovement LOCALID_SMART_MC, Common_Movement_FaceOriginalDirection
# 31 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 32 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 33 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 34 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestJudge::
# 35 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 36 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 37 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_AreYouEnjoyingThisContest, MSGBOX_DEFAULT
# 38 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 39 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applywaitmovement LOCALID_SMART_JUDGE, Common_Movement_FaceOriginalDirection
# 40 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 41 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 42 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 43 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestant1::
# 44 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 45 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 46 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_EnteredWrongContest, MSGBOX_DEFAULT
# 47 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 48 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applywaitmovement LOCALID_SMART_CONTESTANT_1, Common_Movement_FaceOriginalDirection
# 49 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 50 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 51 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 52 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestant2::
# 53 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 54 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 55 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_RaisedMonToBeSmart, MSGBOX_DEFAULT
# 56 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 57 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applywaitmovement LOCALID_SMART_CONTESTANT_2, Common_Movement_FaceOriginalDirection
# 58 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 59 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 60 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 61 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestant3::
# 62 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 63 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 64 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_IfMonPullsSmartMoveNext, MSGBOX_DEFAULT
# 65 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 66 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applywaitmovement LOCALID_SMART_CONTESTANT_3, Common_Movement_FaceOriginalDirection
# 67 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 68 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 69 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 70 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestant4::
# 71 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 72 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 73 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_DontAppreciateCuteLeechLife, MSGBOX_DEFAULT
# 74 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 75 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applywaitmovement LOCALID_SMART_CONTESTANT_4, Common_Movement_FaceOriginalDirection
# 76 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 77 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 78 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 79 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestAudience1::
# 80 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_YoureBeautifulGrandpa, MSGBOX_SIGN
# 81 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 82 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 83 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestAudience2::
# 84 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 85 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 86 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_AllSeemToUseDifferentMoves, MSGBOX_DEFAULT
# 87 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 88 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applywaitmovement LOCALID_SMART_AUDIENCE_2, Common_Movement_FaceOriginalDirection
# 89 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 90 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 91 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 92 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestAudience3::
# 93 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 94 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 95 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_PokemonSmarterThanTrainers, MSGBOX_DEFAULT
# 96 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 97 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applywaitmovement LOCALID_SMART_AUDIENCE_3, Common_Movement_FaceOriginalDirection
# 98 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 99 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 100 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 101 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestAudience4::
# 102 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 103 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 104 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_StillLoveSmartnessContests, MSGBOX_DEFAULT
# 105 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 106 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applywaitmovement LOCALID_SMART_AUDIENCE_4, Common_Movement_FaceOriginalDirection
# 107 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 108 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 109 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 110 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestMC::
# 111 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 112 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 113 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_AreYouEnteringBeautyContest, MSGBOX_DEFAULT
# 114 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 115 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applywaitmovement LOCALID_BEAUTY_MC, Common_Movement_FaceOriginalDirection
# 116 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 117 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 118 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 119 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestJudge::
# 120 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 121 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 122 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_EveryPokemonPristineBeauty, MSGBOX_DEFAULT
# 123 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 124 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applywaitmovement LOCALID_BEAUTY_JUDGE, Common_Movement_FaceOriginalDirection
# 125 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 126 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 127 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 128 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestant1::
# 129 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 130 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 131 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_EyesWillBeGluedToMyBeauty, MSGBOX_DEFAULT
# 132 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 133 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applywaitmovement LOCALID_BEAUTY_CONTESTANT_1, Common_Movement_FaceOriginalDirection
# 134 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 135 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 136 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 137 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestant2::
# 138 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 139 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 140 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_OverdidGrooming, MSGBOX_DEFAULT
# 141 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 142 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applywaitmovement LOCALID_BEAUTY_CONTESTANT_2, Common_Movement_FaceOriginalDirection
# 143 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 144 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 145 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 146 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestant3::
# 147 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 148 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 149 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_JudgeWontSeeAuroraBeam, MSGBOX_DEFAULT
# 150 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 151 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applywaitmovement LOCALID_BEAUTY_CONTESTANT_3, Common_Movement_FaceOriginalDirection
# 152 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 153 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 154 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 155 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestant4::
# 156 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 157 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 158 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_PokemonLooksLikeYoungerMe, MSGBOX_DEFAULT
# 159 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 160 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applywaitmovement LOCALID_BEAUTY_CONTESTANT_4, Common_Movement_FaceOriginalDirection
# 161 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 162 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 163 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 164 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestAudience1::
# 165 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 166 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 167 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_WinBeautyContestMakesMeHappy, MSGBOX_DEFAULT
# 168 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 169 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applywaitmovement LOCALID_BEAUTY_AUDIENCE_1, Common_Movement_FaceOriginalDirection
# 170 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 171 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 172 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 173 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestAudience2::
# 174 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 175 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 176 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_GanderAtAllThosePrettyPokemon, MSGBOX_DEFAULT
# 177 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 178 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applywaitmovement LOCALID_BEAUTY_AUDIENCE_2, Common_Movement_FaceOriginalDirection
# 179 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 180 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 181 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 182 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestAudience3::
# 183 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 184 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 185 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_CantWinOnBeautyAlone, MSGBOX_DEFAULT
# 186 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 187 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applywaitmovement LOCALID_BEAUTY_AUDIENCE_3, Common_Movement_FaceOriginalDirection
# 188 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 189 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 190 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 191 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestMC::
# 192 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 193 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 194 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_InTheMiddleOfContest, MSGBOX_DEFAULT
# 195 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 196 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applywaitmovement LOCALID_CUTE_MC, Common_Movement_FaceOriginalDirection
# 197 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 198 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 199 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 200 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestJudge::
# 201 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 202 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 203 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_SuchCharmingCuteAppeals, MSGBOX_DEFAULT
# 204 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 205 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applywaitmovement LOCALID_CUTE_JUDGE, Common_Movement_FaceOriginalDirection
# 206 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 207 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 208 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 209 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestant1::
# 210 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 211 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 212 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_MyAzurillWasDistracted, MSGBOX_DEFAULT
# 213 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 214 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applywaitmovement LOCALID_CUTE_CONTESTANT_1, Common_Movement_FaceOriginalDirection
# 215 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 216 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 217 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 218 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestant2::
# 219 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 220 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 221 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_NeverWonBattleButContest, MSGBOX_DEFAULT
# 222 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 223 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applywaitmovement LOCALID_CUTE_CONTESTANT_2, Common_Movement_FaceOriginalDirection
# 224 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 225 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 226 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 227 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestant3::
# 228 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 229 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 230 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_PetalDanceIsMarvel, MSGBOX_DEFAULT
# 231 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 232 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applywaitmovement LOCALID_CUTE_CONTESTANT_3, Common_Movement_FaceOriginalDirection
# 233 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 234 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 235 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 236 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestant4::
# 237 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 238 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 239 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_MyMonAppealSoMuchCuter, MSGBOX_DEFAULT
# 240 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 241 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applywaitmovement LOCALID_CUTE_CONTESTANT_4, Common_Movement_FaceOriginalDirection
# 242 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 243 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 244 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 245 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestAudience1::
# 246 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lockall
# 247 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applywaitmovement LOCALID_CUTE_AUDIENCE_1, Common_Movement_FacePlayer
# 248 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_MyChildIsInContest, MSGBOX_DEFAULT
# 249 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 250 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applywaitmovement LOCALID_CUTE_AUDIENCE_1, Common_Movement_FaceOriginalDirection
# 251 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	delay 25
# 252 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_ComeOnDear, MSGBOX_DEFAULT
# 253 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	releaseall
# 254 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 255 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 256 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestAudience2::
# 257 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 258 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 259 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_WantCuteMonOfMyOwn, MSGBOX_DEFAULT
# 260 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 261 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applywaitmovement LOCALID_CUTE_AUDIENCE_2, Common_Movement_FaceOriginalDirection
# 262 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 263 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 264 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 265 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestAudience3::
# 266 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 267 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 268 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_ThatGirlThereIsCutest, MSGBOX_DEFAULT
# 269 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 270 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applywaitmovement LOCALID_CUTE_AUDIENCE_3, Common_Movement_FaceOriginalDirection
# 271 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 272 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 273 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 274 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyStageSign::
# 275 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_BeautyContestStage, MSGBOX_SIGN
# 276 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 277 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 278 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteStageSign::
# 279 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_CuteContestStage, MSGBOX_SIGN
# 280 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 281 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 282 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartStageSign::
# 283 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_SmartContestStage, MSGBOX_SIGN
# 284 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 285 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 286 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_TodayWonSmartnessContest:
# 287 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "This POKéMON won the BEAUTY CONTEST\n"
# 288 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "here before.\p"
# 289 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Well, guess what? Today, I made it\n"
# 290 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "win a SMARTNESS CONTEST!\p"
# 291 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "My abilities scare even me…$"
# 292 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 293 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_EnteredBunchOfContests:
# 294 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "I've entered a bunch of CONTESTS,\n"
# 295 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "so I'm seeing how things work.\p"
# 296 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "If you're in a COOLNESS CONTEST,\n"
# 297 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "cool moves go over as appeals.\p"
# 298 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "But smart moves and cute moves\n"
# 299 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "don't go over well, for instance.$"
# 300 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 301 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_ManWhoWonEarlierHadPokeblocks:
# 302 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "That young man who won earlier had\n"
# 303 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "a whole bunch of different {POKEBLOCK}S.\p"
# 304 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Can you win if you had that many\n"
# 305 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "of those things?$"
# 306 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 307 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_IsntThisPlaceHumongous:
# 308 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Whoa, isn't this place humongous!\p"
# 309 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "The tension in the air… It's not\n"
# 310 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "like a CONTEST hall in the sticks.$"
# 311 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 312 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_GiveItBestSmartAppeal:
# 313 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "MC: Okay, SMART POKéMON and their\n"
# 314 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "TRAINERS, are you ready?!\p"
# 315 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Give it your best showing!\n"
# 316 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Let's appeal!$"
# 317 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 318 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_AreYouEnjoyingThisContest:
# 319 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "JUDGE: Are you enjoying this CONTEST?\p"
# 320 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Come back with three friends, and\n"
# 321 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "all of you may enter a CONTEST!$"
# 322 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 323 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_EnteredWrongContest:
# 324 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Ayayayay…\n"
# 325 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "I entered the wrong CONTEST.\p"
# 326 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "I entered this tough POKéMON in\n"
# 327 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "the SMARTNESS CONTEST…\p"
# 328 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Come on, wow them with a smart-looking\n"
# 329 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "ROCK SMASH.$"
# 330 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 331 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_RaisedMonToBeSmart:
# 332 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "I've spent many a year, and all my\n"
# 333 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "wisdom besides, raising this POKéMON\l"
# 334 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "to be smart.\p"
# 335 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "It won't be easily bested by some\n"
# 336 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "young pup's POKéMON.\p"
# 337 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "My dear wife, are you seeing this?$"
# 338 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 339 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_IfMonPullsSmartMoveNext:
# 340 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "There it is!\p"
# 341 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "If my POKéMON pulls a smart move next,\n"
# 342 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "the audience's excitement will peak!$"
# 343 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 344 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_DontAppreciateCuteLeechLife:
# 345 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Oh, dear, no!\p"
# 346 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "My darling ZUBAT's LEECH LIFE is so\n"
# 347 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "cute I kept using it over and over!\p"
# 348 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "But these mean people don't appreciate\n"
# 349 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "it at all!$"
# 350 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 351 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_YoureBeautifulGrandpa:
# 352 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Kiyaaah! You're beautiful, Grandpa!$"
# 353 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 354 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_AllSeemToUseDifferentMoves:
# 355 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Even when TRAINERS enter the same\n"
# 356 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "kind of POKéMON, they all seem to use\l"
# 357 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "different moves for appeals.\p"
# 358 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "It's just like the way people have\n"
# 359 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "different styles for battling.$"
# 360 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 361 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_PokemonSmarterThanTrainers:
# 362 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "I think the POKéMON look smarter\n"
# 363 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "than their TRAINERS. By a lot.$"
# 364 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 365 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_StillLoveSmartnessContests:
# 366 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "When all's said and done, I still love\n"
# 367 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "SMARTNESS CONTESTS.\p"
# 368 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "That intellectual green color…\n"
# 369 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "It's so… So… Cool.$"
# 370 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 371 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_AreYouEnteringBeautyContest:
# 372 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "MC: Are you entering the BEAUTY\n"
# 373 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "CONTEST, too? Good luck!$"
# 374 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 375 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_EveryPokemonPristineBeauty:
# 376 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "JUDGE: Ah, every POKéMON here is\n"
# 377 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "a model of pristine beauty!\p"
# 378 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Why, I almost forgot to score them!$"
# 379 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 380 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_EyesWillBeGluedToMyBeauty:
# 381 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "A POKéMON this beautiful…\n"
# 382 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "There isn't another one like it.\p"
# 383 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Everyone's eyes will be glued to\n"
# 384 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "my beauty.$"
# 385 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 386 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_OverdidGrooming:
# 387 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Waaaah!\p"
# 388 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "I brushed and groomed my POKéMON\n"
# 389 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "carefully for this CONTEST…\p"
# 390 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "But I overdid it…\n"
# 391 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "My POKéMON's coat turned all scraggly…\p"
# 392 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "What should I do?$"
# 393 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 394 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_JudgeWontSeeAuroraBeam:
# 395 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "This AURORA BEAM is so dazzling,\n"
# 396 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "the JUDGE won't be able to see it.\p"
# 397 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Uh, wait a second…\n"
# 398 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "That'll be meaningless, then!$"
# 399 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 400 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_PokemonLooksLikeYoungerMe:
# 401 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "This pretty POKéMON looks just like\n"
# 402 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "me when I was younger.\p"
# 403 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Right when I said that, my husband\n"
# 404 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "spewed the coffee he was drinking.\p"
# 405 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Did I say something funny?$"
# 406 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 407 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_WinBeautyContestMakesMeHappy:
# 408 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "You know, if I win at a BEAUTY\n"
# 409 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "CONTEST, sure it makes me\l"
# 410 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "happy. More than usual, anyway.$"
# 411 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 412 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_GanderAtAllThosePrettyPokemon:
# 413 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Wahahahah!\p"
# 414 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Will you take a gander at all those\n"
# 415 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "pretty POKéMON!\l"
# 416 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "I just love this sort of glitz!$"
# 417 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 418 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_CantWinOnBeautyAlone:
# 419 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "You can't always win on just beauty\n"
# 420 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "alone.\p"
# 421 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "You have to groom your POKéMON so\n"
# 422 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "it's nice and glossy like mine.$"
# 423 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 424 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_InTheMiddleOfContest:
# 425 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "MC: Uh-oh! Hello!\n"
# 426 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "We're in the middle of a CONTEST!\p"
# 427 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Please enter at our registration\n"
# 428 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "counter and come out, okay?$"
# 429 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 430 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_SuchCharmingCuteAppeals:
# 431 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "JUDGE: Oh, such charming and cute\n"
# 432 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "appeals!\p"
# 433 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Oh, my goodness! What a perfectly\n"
# 434 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "adorable WATER SPORT appeal!$"
# 435 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 436 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_MyAzurillWasDistracted:
# 437 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Oh, no… My sweet AZURILL was\n"
# 438 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "distracted by another POKéMON.$"
# 439 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 440 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_NeverWonBattleButContest:
# 441 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "My POKéMON has never won in a battle,\n"
# 442 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "but put it in a CONTEST and look out!$"
# 443 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 444 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_PetalDanceIsMarvel:
# 445 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "My POKéMON's PETAL DANCE is a marvel\n"
# 446 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "of elegance.\p"
# 447 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "I won't let anyone disturb its\n"
# 448 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "performance.$"
# 449 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 450 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_MyMonAppealSoMuchCuter:
# 451 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Everyone's POKéMON are very cute.\p"
# 452 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "However, if my POKéMON were to make\n"
# 453 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "a cute appeal…\p"
# 454 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "I'm sure that it would be so much \n"
# 455 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "cuter than the others.$"
# 456 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 457 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_MyChildIsInContest:
# 458 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "My child is in this CONTEST.$"
# 459 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 460 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_ComeOnDear:
# 461 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Come on, dear. Go for it!\n"
# 462 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Your POKéMON is the best!$"
# 463 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 464 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_ThatGirlThereIsCutest:
# 465 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "I think that girl over there is\n"
# 466 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "the cutest of the lot.\p"
# 467 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "What's that? They're judging\n"
# 468 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "POKéMON by their looks?$"
# 469 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 470 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_WantCuteMonOfMyOwn:
# 471 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Ohh, seeing all these cute POKéMON,\n"
# 472 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "they make we want to get my own!\p"
# 473 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "I'm going to go catch some!$"
# 474 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 475 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_BeautyContestStage:
# 476 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "BEAUTY CONTEST STAGE\n"
# 477 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "BE ALLURED BY BEAUTIFUL POKéMON!$"
# 478 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 479 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_CuteContestStage:
# 480 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "CUTENESS CONTEST STAGE\n"
# 481 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "BE CHARMED BY CUTE POKéMON!$"
# 482 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 483 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_SmartContestStage:
# 484 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "SMARTNESS CONTEST STAGE\n"
# 485 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "BE IMPRESSED BY SMART POKéMON!$"
