# 1 "data/maps/DewfordTown_Hall/scripts.pory"

# 2 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_MapScripts::
# 3 "data/maps/DewfordTown_Hall/scripts.pory"
	.byte 0
# 4 "data/maps/DewfordTown_Hall/scripts.pory"

# 5 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Girl::
# 6 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 7 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 8 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 9 "data/maps/DewfordTown_Hall/scripts.pory"
	special IsTrendyPhraseBoring
# 10 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_Hall_EventScript_GirlBoredOfTrend
# 11 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_CantImagineLifeWithoutTrend, MSGBOX_DEFAULT
# 12 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 13 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 14 "data/maps/DewfordTown_Hall/scripts.pory"

# 15 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_GirlBoredOfTrend::
# 16 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_GettingBoredOfTrend, MSGBOX_DEFAULT
# 17 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 18 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 19 "data/maps/DewfordTown_Hall/scripts.pory"

# 20 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Woman::
# 21 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 22 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 23 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 24 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TeachingMonAboutTrend, MSGBOX_DEFAULT
# 25 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 26 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 27 "data/maps/DewfordTown_Hall/scripts.pory"

# 28 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Man::
# 29 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 30 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 31 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 32 "data/maps/DewfordTown_Hall/scripts.pory"
	special BufferDeepLinkPhrase
# 33 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_DeepLinkBetweenXAndY, MSGBOX_YESNO
# 34 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DewfordTown_Hall_EventScript_ConfirmTrendLink
# 35 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DewfordTown_Hall_EventScript_RejectTrendLink
# 36 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 37 "data/maps/DewfordTown_Hall/scripts.pory"

# 38 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_ConfirmTrendLink::
# 39 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_MyHunchWasRight, MSGBOX_DEFAULT
# 40 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 41 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 42 "data/maps/DewfordTown_Hall/scripts.pory"

# 43 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_RejectTrendLink::
# 44 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_NotEasyToKeepUp, MSGBOX_DEFAULT
# 45 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 46 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 47 "data/maps/DewfordTown_Hall/scripts.pory"

# 48 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_ExpertM::
# 49 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 50 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 51 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 52 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TVShowAboutTrend, MSGBOX_DEFAULT
# 53 "data/maps/DewfordTown_Hall/scripts.pory"
	closemessage
# 54 "data/maps/DewfordTown_Hall/scripts.pory"
	applywaitmovement LOCALID_DEWFORD_HALL_EXPERT_M, Common_Movement_WalkInPlaceFasterUp
# 55 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 56 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 57 "data/maps/DewfordTown_Hall/scripts.pory"

# 58 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Twin::
# 59 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 60 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 61 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 62 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_IsTrendMorePopularAcrossSea, MSGBOX_DEFAULT
# 63 "data/maps/DewfordTown_Hall/scripts.pory"
	closemessage
# 64 "data/maps/DewfordTown_Hall/scripts.pory"
	applywaitmovement LOCALID_DEWFORD_HALL_TWIN, Common_Movement_WalkInPlaceFasterUp
# 65 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 66 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 67 "data/maps/DewfordTown_Hall/scripts.pory"

# 68 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_LittleBoy::
# 69 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 70 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 71 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 72 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_CollectTrendMerchandise, MSGBOX_DEFAULT
# 73 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 74 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 75 "data/maps/DewfordTown_Hall/scripts.pory"

# 76 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Bookshelf::
# 77 "data/maps/DewfordTown_Hall/scripts.pory"
	lockall
# 78 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 79 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_BooksAboutTrend, MSGBOX_DEFAULT
# 80 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 81 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 82 "data/maps/DewfordTown_Hall/scripts.pory"

# 83 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Painting::
# 84 "data/maps/DewfordTown_Hall/scripts.pory"
	lockall
# 85 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 86 "data/maps/DewfordTown_Hall/scripts.pory"
	special GetDewfordHallPaintingNameIndex
# 87 "data/maps/DewfordTown_Hall/scripts.pory"
	switch VAR_RESULT
# 88 "data/maps/DewfordTown_Hall/scripts.pory"
	case 0, DewfordTown_Hall_EventScript_ScreamTitle
# 89 "data/maps/DewfordTown_Hall/scripts.pory"
	case 4, DewfordTown_Hall_EventScript_ScreamTitle
# 90 "data/maps/DewfordTown_Hall/scripts.pory"
	case 1, DewfordTown_Hall_EventScript_SmileTitle
# 91 "data/maps/DewfordTown_Hall/scripts.pory"
	case 5, DewfordTown_Hall_EventScript_ScreamTitle
# 92 "data/maps/DewfordTown_Hall/scripts.pory"
	case 2, DewfordTown_Hall_EventScript_LastTitle
# 93 "data/maps/DewfordTown_Hall/scripts.pory"
	case 6, DewfordTown_Hall_EventScript_LastTitle
# 94 "data/maps/DewfordTown_Hall/scripts.pory"
	case 3, DewfordTown_Hall_EventScript_BirthTitle
# 95 "data/maps/DewfordTown_Hall/scripts.pory"
	case 7, DewfordTown_Hall_EventScript_LastTitle
# 96 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 97 "data/maps/DewfordTown_Hall/scripts.pory"

# 98 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_ScreamTitle::
# 99 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TrendsScream, MSGBOX_DEFAULT
# 100 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 101 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 102 "data/maps/DewfordTown_Hall/scripts.pory"

# 103 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_SmileTitle::
# 104 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TrendsSmile, MSGBOX_DEFAULT
# 105 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 106 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 107 "data/maps/DewfordTown_Hall/scripts.pory"

# 108 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_LastTitle::
# 109 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_LastTrend, MSGBOX_DEFAULT
# 110 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 111 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 112 "data/maps/DewfordTown_Hall/scripts.pory"

# 113 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_BirthTitle::
# 114 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_BirthOfTrend, MSGBOX_DEFAULT
# 115 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 116 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 117 "data/maps/DewfordTown_Hall/scripts.pory"

# 118 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_SchoolKidM::
# 119 "data/maps/DewfordTown_Hall/scripts.pory"
	lockall
# 120 "data/maps/DewfordTown_Hall/scripts.pory"
	setvar VAR_0x8008, 0
# 121 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_DoTrendDebate
# 122 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 123 "data/maps/DewfordTown_Hall/scripts.pory"

# 124 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PsychicM::
# 125 "data/maps/DewfordTown_Hall/scripts.pory"
	lockall
# 126 "data/maps/DewfordTown_Hall/scripts.pory"
	setvar VAR_0x8008, 1
# 127 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_DoTrendDebate
# 128 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 129 "data/maps/DewfordTown_Hall/scripts.pory"

# 130 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DoTrendDebate::
# 131 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 132 "data/maps/DewfordTown_Hall/scripts.pory"
	special GetDewfordHallPaintingNameIndex
# 133 "data/maps/DewfordTown_Hall/scripts.pory"
	switch VAR_RESULT
# 134 "data/maps/DewfordTown_Hall/scripts.pory"
	case 0, DewfordTown_Hall_EventScript_TrendDebate1
# 135 "data/maps/DewfordTown_Hall/scripts.pory"
	case 1, DewfordTown_Hall_EventScript_TrendDebate1
# 136 "data/maps/DewfordTown_Hall/scripts.pory"
	case 2, DewfordTown_Hall_EventScript_TrendDebate2
# 137 "data/maps/DewfordTown_Hall/scripts.pory"
	case 3, DewfordTown_Hall_EventScript_TrendDebate2
# 138 "data/maps/DewfordTown_Hall/scripts.pory"
	case 4, DewfordTown_Hall_EventScript_TrendDebate3
# 139 "data/maps/DewfordTown_Hall/scripts.pory"
	case 5, DewfordTown_Hall_EventScript_TrendDebate3
# 140 "data/maps/DewfordTown_Hall/scripts.pory"
	case 6, DewfordTown_Hall_EventScript_TrendDebate4
# 141 "data/maps/DewfordTown_Hall/scripts.pory"
	case 7, DewfordTown_Hall_EventScript_TrendDebate5
# 142 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 143 "data/maps/DewfordTown_Hall/scripts.pory"

# 144 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_TrendDebate1::
# 145 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact1
# 146 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_SawTrendCoolestThing, MSGBOX_DEFAULT
# 147 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact2
# 148 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_AllegedTrendNotAuthentic, MSGBOX_DEFAULT
# 149 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 150 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 151 "data/maps/DewfordTown_Hall/scripts.pory"

# 152 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_TrendDebate2::
# 153 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact1
# 154 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_ComposedTrendThemeSong, MSGBOX_DEFAULT
# 155 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact2
# 156 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_WorkOnYourSinging, MSGBOX_DEFAULT
# 157 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 158 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 159 "data/maps/DewfordTown_Hall/scripts.pory"

# 160 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_TrendDebate3::
# 161 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact1
# 162 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_OrganizeTrendParty, MSGBOX_DEFAULT
# 163 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact2
# 164 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_BrilliantIndeed, MSGBOX_DEFAULT
# 165 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 166 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 167 "data/maps/DewfordTown_Hall/scripts.pory"

# 168 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_TrendDebate4::
# 169 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact1
# 170 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TrendHasBecomePartOfLife, MSGBOX_DEFAULT
# 171 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact2
# 172 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TrendWeighsHeavilyOnMind, MSGBOX_DEFAULT
# 173 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 174 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 175 "data/maps/DewfordTown_Hall/scripts.pory"

# 176 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_TrendDebate5::
# 177 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact1
# 178 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_IfWeTeamUpWellBeInvincible, MSGBOX_DEFAULT
# 179 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact2
# 180 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_WellBeTrendDuo, MSGBOX_DEFAULT
# 181 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 182 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 183 "data/maps/DewfordTown_Hall/scripts.pory"

# 184 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DontMovePlayer1::
# 185 "data/maps/DewfordTown_Hall/scripts.pory"
	return
# 186 "data/maps/DewfordTown_Hall/scripts.pory"

# 187 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DebateReact1::
# 188 "data/maps/DewfordTown_Hall/scripts.pory"
	applywaitmovement LOCALID_DEWFORD_HALL_PSYCHIC_M, DewfordTown_Hall_Movement_PsychicWalkInPlaceLeft
# 189 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq VAR_0x8008, 0, DewfordTown_Hall_EventScript_PlayerReactWest
# 190 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq VAR_0x8008, 1, DewfordTown_Hall_EventScript_DontMovePlayer2
# 191 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 192 "data/maps/DewfordTown_Hall/scripts.pory"

# 193 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PlayerReactWest::
# 194 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq VAR_FACING, DIR_EAST, DewfordTown_Hall_EventScript_DontMovePlayer1
# 195 "data/maps/DewfordTown_Hall/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 196 "data/maps/DewfordTown_Hall/scripts.pory"
	return
# 197 "data/maps/DewfordTown_Hall/scripts.pory"

# 198 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DontMovePlayer2::
# 199 "data/maps/DewfordTown_Hall/scripts.pory"
	return
# 200 "data/maps/DewfordTown_Hall/scripts.pory"

# 201 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DebateReact2::
# 202 "data/maps/DewfordTown_Hall/scripts.pory"
	applywaitmovement LOCALID_DEWFORD_HALL_SCHOOL_KID_M, DewfordTown_Hall_Movement_SchoolKidWalkInPlaceRight
# 203 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq VAR_0x8008, 0, DewfordTown_Hall_EventScript_PlayerReactNorthSouth
# 204 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq VAR_0x8008, 1, DewfordTown_Hall_EventScript_PlayerReactEast
# 205 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 206 "data/maps/DewfordTown_Hall/scripts.pory"

# 207 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PlayerReactNorthSouth::
# 208 "data/maps/DewfordTown_Hall/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, DewfordTown_Hall_EventScript_PlayerWalkInPlaceUp
# 209 "data/maps/DewfordTown_Hall/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, DewfordTown_Hall_EventScript_PlayerWalkInPlaceDown
# 210 "data/maps/DewfordTown_Hall/scripts.pory"
	return
# 211 "data/maps/DewfordTown_Hall/scripts.pory"

# 212 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PlayerWalkInPlaceUp::
# 213 "data/maps/DewfordTown_Hall/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 214 "data/maps/DewfordTown_Hall/scripts.pory"
	return
# 215 "data/maps/DewfordTown_Hall/scripts.pory"

# 216 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PlayerWalkInPlaceDown::
# 217 "data/maps/DewfordTown_Hall/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 218 "data/maps/DewfordTown_Hall/scripts.pory"
	return
# 219 "data/maps/DewfordTown_Hall/scripts.pory"

# 220 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PlayerReactEast::
# 221 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq VAR_FACING, DIR_WEST, DewfordTown_Hall_EventScript_DontMovePlayer1
# 222 "data/maps/DewfordTown_Hall/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 223 "data/maps/DewfordTown_Hall/scripts.pory"
	return
# 224 "data/maps/DewfordTown_Hall/scripts.pory"

# 225 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Movement_PsychicWalkInPlaceLeft:
# 226 "data/maps/DewfordTown_Hall/scripts.pory"
	walk_in_place_left
# 227 "data/maps/DewfordTown_Hall/scripts.pory"
	step_end
# 228 "data/maps/DewfordTown_Hall/scripts.pory"

# 229 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Movement_SchoolKidWalkInPlaceRight:
# 230 "data/maps/DewfordTown_Hall/scripts.pory"
	walk_in_place_right
# 231 "data/maps/DewfordTown_Hall/scripts.pory"
	step_end
# 232 "data/maps/DewfordTown_Hall/scripts.pory"

# 233 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_SludgeBombMan::
# 234 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 235 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 236 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 237 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_SLUDGE_BOMB, DewfordTown_Hall_EventScript_ReceivedSludgeBomb
# 238 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_GiveYouSludgeBomb, MSGBOX_DEFAULT
# 239 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_TM_SLUDGE_BOMB
# 240 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 241 "data/maps/DewfordTown_Hall/scripts.pory"
	setflag FLAG_RECEIVED_TM_SLUDGE_BOMB
# 242 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 243 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 244 "data/maps/DewfordTown_Hall/scripts.pory"

# 245 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_ReceivedSludgeBomb::
# 246 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_LoveSludgeBombButTrendInToo, MSGBOX_DEFAULT
# 247 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 248 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 249 "data/maps/DewfordTown_Hall/scripts.pory"

# 250 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_CantImagineLifeWithoutTrend:
# 251 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "What's in vogue? Why, it has to be\n"
# 252 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”!\p"
# 253 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I can't imagine what life would be like\n"
# 254 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "without “{STR_VAR_1}”!$"
# 255 "data/maps/DewfordTown_Hall/scripts.pory"

# 256 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_GettingBoredOfTrend:
# 257 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "What's in vogue? Why, it has to be\n"
# 258 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”!\p"
# 259 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "But I'm getting kind of bored with it.\p"
# 260 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I should look for the next big thing.$"
# 261 "data/maps/DewfordTown_Hall/scripts.pory"

# 262 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_TeachingMonAboutTrend:
# 263 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I'm teaching my POKéMON about\n"
# 264 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1},”\l"
# 265 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "but it's not going well.\p"
# 266 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "It's a bit too much, I think.$"
# 267 "data/maps/DewfordTown_Hall/scripts.pory"

# 268 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_DeepLinkBetweenXAndY:
# 269 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I'm studying up on the hip and trendy\n"
# 270 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}” now.\p"
# 271 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Is it true that there's a deep link\n"
# 272 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "between “{STR_VAR_1}”\l"
# 273 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "and “{STR_VAR_2}”?$"
# 274 "data/maps/DewfordTown_Hall/scripts.pory"

# 275 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_MyHunchWasRight:
# 276 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Oh!\n"
# 277 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "So, my hunch was right!\p"
# 278 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I'm one step closer to being hip and\n"
# 279 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "happening, yowza!$"
# 280 "data/maps/DewfordTown_Hall/scripts.pory"

# 281 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_NotEasyToKeepUp:
# 282 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "What?!\n"
# 283 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Is that so?!\p"
# 284 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "It's not easy for an older fellow like\n"
# 285 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "me to keep up with trends!$"
# 286 "data/maps/DewfordTown_Hall/scripts.pory"

# 287 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_TVShowAboutTrend:
# 288 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "This whole business about\n"
# 289 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”…\l"
# 290 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Isn't there a TV show on it?$"
# 291 "data/maps/DewfordTown_Hall/scripts.pory"

# 292 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_IsTrendMorePopularAcrossSea:
# 293 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Across the sea…\p"
# 294 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Is “{STR_VAR_1}”\n"
# 295 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "even more popular?$"
# 296 "data/maps/DewfordTown_Hall/scripts.pory"

# 297 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_CollectTrendMerchandise:
# 298 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I collect official\n"
# 299 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 300 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "licensed merchandise.\p"
# 301 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I have official\n"
# 302 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}” DOLLS…\p"
# 303 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Official “{STR_VAR_1}”\n"
# 304 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "brand clothing…\p"
# 305 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "And officially licensed\n"
# 306 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 307 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "picture books.\p"
# 308 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Heheh, I own!\n"
# 309 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I'm not sharing anything with you!$"
# 310 "data/maps/DewfordTown_Hall/scripts.pory"

# 311 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_BooksAboutTrend:
# 312 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "IDENTIFYING GOOD\n"
# 313 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}” &\l"
# 314 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "BAD “{STR_VAR_1}”…\p"
# 315 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "THE LINK BETWEEN\n"
# 316 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}” AND\l"
# 317 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "POKéMON…\p"
# 318 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "USEFUL\n"
# 319 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”…\p"
# 320 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "It's neatly jammed with books about\n"
# 321 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}.”$"
# 322 "data/maps/DewfordTown_Hall/scripts.pory"

# 323 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_TrendsScream:
# 324 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}'S\n"
# 325 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "SCREAM” is the title.$"
# 326 "data/maps/DewfordTown_Hall/scripts.pory"

# 327 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_TrendsSmile:
# 328 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}'S\n"
# 329 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "SMILE” is the title.$"
# 330 "data/maps/DewfordTown_Hall/scripts.pory"

# 331 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_LastTrend:
# 332 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "It's titled “THE LAST\n"
# 333 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "{STR_VAR_1}”.$"
# 334 "data/maps/DewfordTown_Hall/scripts.pory"

# 335 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_BirthOfTrend:
# 336 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "It's titled “THE BIRTH OF\n"
# 337 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "{STR_VAR_1}”.$"
# 338 "data/maps/DewfordTown_Hall/scripts.pory"

# 339 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_SawTrendCoolestThing:
# 340 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I saw “{STR_VAR_1}”!\n"
# 341 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Cool, huh?\p"
# 342 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "It's, like, the coolest thing going!\p"
# 343 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "It was awesome!\n"
# 344 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "It was the real thing, oh yeah!$"
# 345 "data/maps/DewfordTown_Hall/scripts.pory"

# 346 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_AllegedTrendNotAuthentic:
# 347 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Oh, no, no, no.\p"
# 348 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "That alleged\n"
# 349 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 350 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "you claim to have seen--it's not.\p"
# 351 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "The authentic article is much…\n"
# 352 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "How should I say it?\l"
# 353 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Sharper, yet more mellow!\p"
# 354 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Ah, no matter. It's astonishing!$"
# 355 "data/maps/DewfordTown_Hall/scripts.pory"

# 356 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_ComposedTrendThemeSong:
# 357 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Hey, listen, I composed a theme song\n"
# 358 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "for “{STR_VAR_1}.”\p"
# 359 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”\n"
# 360 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "is really popular right now.\p"
# 361 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Okay, listen!\n"
# 362 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "… …\p"
# 363 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Oh!\n"
# 364 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "{STR_VAR_1}!\p"
# 365 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Wonderful\n"
# 366 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "{STR_VAR_1}!$"
# 367 "data/maps/DewfordTown_Hall/scripts.pory"

# 368 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_WorkOnYourSinging:
# 369 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "… …\p"
# 370 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I dare say, chap, it would pay for you\n"
# 371 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "to work on your singing before you\l"
# 372 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "trifle yourself with\l"
# 373 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}.”$"
# 374 "data/maps/DewfordTown_Hall/scripts.pory"

# 375 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_OrganizeTrendParty:
# 376 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Anyway, as I was saying earlier, we\n"
# 377 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "should get together and organize a\l"
# 378 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}” party\l"
# 379 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "on the island.$"
# 380 "data/maps/DewfordTown_Hall/scripts.pory"

# 381 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_BrilliantIndeed:
# 382 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Oh, a smashing good idea!\p"
# 383 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "It will settle once and for all\n"
# 384 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "who is the best at\l"
# 385 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}.”\l"
# 386 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Brilliant, indeed!\p"
# 387 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Starting today, our lives will revolve\n"
# 388 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "around “{STR_VAR_1}”!$"
# 389 "data/maps/DewfordTown_Hall/scripts.pory"

# 390 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_TrendHasBecomePartOfLife:
# 391 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I was thinking, though…\p"
# 392 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Wouldn't you agree that\n"
# 393 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}” has\l"
# 394 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "grown from being something trendy to\l"
# 395 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "being a part of our daily lives?$"
# 396 "data/maps/DewfordTown_Hall/scripts.pory"

# 397 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_TrendWeighsHeavilyOnMind:
# 398 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Beg pardon?\n"
# 399 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "That much, what?\p"
# 400 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "However, it's true that\n"
# 401 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 402 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "weighs heavily on your mind, whether\l"
# 403 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "you're awake or asleep.\p"
# 404 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Absolutely, you're the\n"
# 405 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 406 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "PROFESSOR, old sport!$"
# 407 "data/maps/DewfordTown_Hall/scripts.pory"

# 408 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_IfWeTeamUpWellBeInvincible:
# 409 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "If you and me team up as a combo,\n"
# 410 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "we'll be invincible when it comes to all\l"
# 411 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "things “{STR_VAR_1}”!$"
# 412 "data/maps/DewfordTown_Hall/scripts.pory"

# 413 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_WellBeTrendDuo:
# 414 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Spot on, my friend!\p"
# 415 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "We shall be the\n"
# 416 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}” DUO!\p"
# 417 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Isn't that a ripe image?\n"
# 418 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Hahahah!$"
# 419 "data/maps/DewfordTown_Hall/scripts.pory"

# 420 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_GiveYouSludgeBomb:
# 421 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "For me, SLUDGE BOMB is at the peak\n"
# 422 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "of popularity. It's the one.\p"
# 423 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Hunh? You're telling me that you don't\n"
# 424 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "know about SLUDGE BOMB?\p"
# 425 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "That's outright pitiful.\n"
# 426 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I'll give you one.$"
# 427 "data/maps/DewfordTown_Hall/scripts.pory"

# 428 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_LoveSludgeBombButTrendInToo:
# 429 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I love SLUDGE BOMB.\p"
# 430 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "But POKéMON with the move\n"
# 431 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 432 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "are in, too.$"
