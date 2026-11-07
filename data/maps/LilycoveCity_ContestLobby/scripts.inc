# 1 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_MapScripts::
# 3 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_ContestLobby_OnTransition
# 4 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LilycoveCity_ContestLobby_OnFrame
# 5 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.byte 0
# 6 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 7 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
@ Some scripts for this room are split into data/scripts/contest_hall and data/scripts/berry_blender
# 8 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 9 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_OnTransition:
# 10 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_TryShowContestReporter
# 11 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_TryShowBlendMaster
# 12 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 13 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 14 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryShowBlendMaster::
# 15 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	getpokenewsactive POKENEWS_BLENDMASTER
# 16 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_ContestLobby_EventScript_ShowBlendMaster
# 17 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_REPLACEMENT
# 18 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER
# 19 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 20 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 21 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ShowBlendMaster::
# 22 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_REPLACEMENT
# 23 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER
# 24 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 25 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 26 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_OnFrame:
# 27 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	map_script_2 VAR_LILYCOVE_CONTEST_LOBBY_STATE, 1, LilycoveCity_ContestLobby_EventScript_TryDoContestArtist
# 28 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	map_script_2 VAR_LILYCOVE_CONTEST_LOBBY_STATE, 2, LilycoveCity_ContestLobby_EventScript_TryDoLinkContestArtist
# 29 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.2byte 0
# 30 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 31 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryDoContestArtist::
# 32 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_set FLAG_HIDE_LILYCOVE_MUSEUM_CURATOR, LilycoveCity_ContestLobby_EventScript_ContestArtist
# 33 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 0
# 34 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 35 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 36 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ContestArtist::
# 37 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 38 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	addobject LOCALID_CONTEST_LOBBY_ARTIST
# 39 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_ARTIST, LilycoveCity_ContestLobby_Movement_ArtistApproachPlayer
# 40 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement LOCALID_CONTEST_LOBBY_ARTIST
# 41 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applywaitmovement LOCALID_PLAYER, LilycoveCity_ContestLobby_Movement_PlayerFaceArtist
# 42 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_YourPokemonSpurredMeToPaint, MSGBOX_DEFAULT
# 43 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 44 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 45 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_ARTIST
# 46 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 47 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ShouldITakePaintingToMuseum, MSGBOX_YESNO
# 48 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseum
# 49 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePainting
# 50 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 51 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 52 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 53 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseum::
# 54 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_IllTakePaintingToMuseum, MSGBOX_DEFAULT
# 55 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 56 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special SaveMuseumContestPainting
# 57 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 0
# 58 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	specialvar VAR_RESULT, GiveMonArtistRibbon
# 59 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_ContestLobby_EventScript_ReceivedArtistRibbon
# 60 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applywaitmovement LOCALID_CONTEST_LOBBY_ARTIST, LilycoveCity_ContestLobby_Movement_ArtistExit
# 61 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	removeobject LOCALID_CONTEST_LOBBY_ARTIST
# 62 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons
# 63 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_SetPaintingFlag
# 64 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 65 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 66 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 67 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePainting::
# 68 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_TakeHomeButIdLikeToTakeToMuseum, MSGBOX_YESNO
# 69 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseum
# 70 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_FineThatsTheWayItIs, MSGBOX_DEFAULT
# 71 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 72 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applywaitmovement LOCALID_CONTEST_LOBBY_ARTIST, LilycoveCity_ContestLobby_Movement_ArtistExit
# 73 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 0
# 74 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	removeobject LOCALID_CONTEST_LOBBY_ARTIST
# 75 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 76 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 77 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 78 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ReceivedArtistRibbon::
# 79 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	incrementgamestat GAME_STAT_RECEIVED_RIBBONS
# 80 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special BufferContestWinnerMonName
# 81 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applywaitmovement LOCALID_CONTEST_LOBBY_ARTIST, LilycoveCity_ContestLobby_Movement_ArtistBeginToExit
# 82 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playse SE_PIN
# 83 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applywaitmovement LOCALID_CONTEST_LOBBY_ARTIST, Common_Movement_ExclamationMark
# 84 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applywaitmovement LOCALID_CONTEST_LOBBY_ARTIST, LilycoveCity_ContestLobby_Movement_ArtistReturnToPlayer
# 85 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_TakeMementoOfPainting, MSGBOX_DEFAULT
# 86 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 87 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ReceivedARibbon, MSGBOX_DEFAULT
# 88 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitfanfare
# 89 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_PutTheRibbonOnMon, MSGBOX_DEFAULT
# 90 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_OkaySeeYou, MSGBOX_DEFAULT
# 91 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 92 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 93 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 94 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons::
# 95 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
# 96 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_0x8004
# 97 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 1, LilycoveCity_ContestLobby_EventScript_ShowPatron1
# 98 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 2, LilycoveCity_ContestLobby_EventScript_ShowPatron2
# 99 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 3, LilycoveCity_ContestLobby_EventScript_ShowPatron3
# 100 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 4, LilycoveCity_ContestLobby_EventScript_ShowPatron4
# 101 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 5, LilycoveCity_ContestLobby_EventScript_ShowTourists
# 102 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 103 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 104 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ShowPatron1::
# 105 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_1
# 106 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 107 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 108 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ShowPatron2::
# 109 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_2
# 110 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 111 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 112 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ShowPatron3::
# 113 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_3
# 114 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 115 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 116 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ShowPatron4::
# 117 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_4
# 118 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 119 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 120 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ShowTourists::
# 121 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_MUSEUM_TOURISTS
# 122 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 123 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 124 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetPaintingFlag::
# 125 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_CONTEST_CATEGORY
# 126 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_COOL, LilycoveCity_ContestLobby_EventScript_MadeCoolPainting
# 127 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_BEAUTY, LilycoveCity_ContestLobby_EventScript_MadeBeautyPainting
# 128 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_CUTE, LilycoveCity_ContestLobby_EventScript_MadeCutePainting
# 129 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_SMART, LilycoveCity_ContestLobby_EventScript_MadeSmartPainting
# 130 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_TOUGH, LilycoveCity_ContestLobby_EventScript_MadeToughPainting
# 131 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 132 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 133 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_MadeCoolPainting::
# 134 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_COOL_PAINTING_MADE
# 135 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 136 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 137 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_MadeBeautyPainting::
# 138 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_BEAUTY_PAINTING_MADE
# 139 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 140 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 141 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_MadeCutePainting::
# 142 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_CUTE_PAINTING_MADE
# 143 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 144 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 145 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_MadeSmartPainting::
# 146 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_SMART_PAINTING_MADE
# 147 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 148 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 149 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_MadeToughPainting::
# 150 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_TOUGH_PAINTING_MADE
# 151 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 152 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 153 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_ArtistApproachPlayer:
# 154 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 155 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 156 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 157 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 158 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 159 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 160 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 161 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 162 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 163 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_ArtistExit:
# 164 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 165 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 166 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 167 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 168 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 169 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 170 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 171 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 172 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 173 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 174 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_PlayerFaceArtist:
# 175 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_left
# 176 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 177 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 178 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_ArtistBeginToExit:
# 179 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 180 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 181 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 182 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 183 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 184 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_ArtistReturnToPlayer:
# 185 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 186 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 187 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 188 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 189 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_fast_up
# 190 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_fast_up
# 191 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_fast_up
# 192 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_right
# 193 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 194 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 195 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryDoLinkContestArtist::
# 196 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_set FLAG_HIDE_LILYCOVE_MUSEUM_CURATOR, LilycoveCity_ContestLobby_EventScript_LinkContestArtist
# 197 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 0
# 198 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 199 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 200 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LinkContestArtist::
# 201 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 202 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	addobject LOCALID_CONTEST_LOBBY_LINK_ARTIST
# 203 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_ARTIST, LilycoveCity_ContestLobby_Movement_LinkArtistApproachPlayer
# 204 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement LOCALID_CONTEST_LOBBY_LINK_ARTIST
# 205 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applywaitmovement LOCALID_PLAYER, LilycoveCity_ContestLobby_Movement_PlayerFaceLinkArtist
# 206 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_YourPokemonSpurredMeToPaint, MSGBOX_DEFAULT
# 207 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 208 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 209 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_ARTIST
# 210 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ShouldITakePaintingToMuseum, MSGBOX_YESNO
# 211 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseumLink
# 212 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePaintingLink
# 213 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 214 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 215 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseumLink::
# 216 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_IllTakePaintingToMuseum, MSGBOX_DEFAULT
# 217 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 218 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special SaveMuseumContestPainting
# 219 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 0
# 220 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	specialvar VAR_RESULT, GiveMonArtistRibbon
# 221 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_ContestLobby_EventScript_ReceivedLinkArtistRibbon
# 222 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applywaitmovement LOCALID_CONTEST_LOBBY_LINK_ARTIST, LilycoveCity_ContestLobby_Movement_LinkArtistExit
# 223 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	removeobject LOCALID_CONTEST_LOBBY_LINK_ARTIST
# 224 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons
# 225 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_SetPaintingFlag
# 226 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 227 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 228 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 229 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePaintingLink::
# 230 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_TakeHomeButIdLikeToTakeToMuseum, MSGBOX_YESNO
# 231 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseumLink
# 232 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_FineThatsTheWayItIs, MSGBOX_DEFAULT
# 233 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 234 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applywaitmovement LOCALID_CONTEST_LOBBY_LINK_ARTIST, LilycoveCity_ContestLobby_Movement_LinkArtistExit
# 235 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 0
# 236 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	removeobject LOCALID_CONTEST_LOBBY_LINK_ARTIST
# 237 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 238 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 239 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 240 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ReceivedLinkArtistRibbon::
# 241 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	incrementgamestat GAME_STAT_RECEIVED_RIBBONS
# 242 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_SYS_RIBBON_GET
# 243 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special BufferContestWinnerMonName
# 244 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applywaitmovement LOCALID_CONTEST_LOBBY_LINK_ARTIST, LilycoveCity_ContestLobby_Movement_LinkArtistBeginExit
# 245 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playse SE_PIN
# 246 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applywaitmovement LOCALID_CONTEST_LOBBY_LINK_ARTIST, Common_Movement_ExclamationMark
# 247 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applywaitmovement LOCALID_CONTEST_LOBBY_LINK_ARTIST, LilycoveCity_ContestLobby_Movement_LinkArtistReturnToPlayer
# 248 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_TakeMementoOfPainting, MSGBOX_DEFAULT
# 249 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 250 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ReceivedARibbon, MSGBOX_DEFAULT
# 251 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitfanfare
# 252 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_PutTheRibbonOnMon, MSGBOX_DEFAULT
# 253 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_OkaySeeYou, MSGBOX_DEFAULT
# 254 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 255 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 256 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 257 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_LinkArtistApproachPlayer:
# 258 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 259 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 260 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 261 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 262 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 263 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 264 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 265 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 266 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 267 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 268 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_LinkArtistExit:
# 269 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 270 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 271 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 272 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 273 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 274 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 275 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 276 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 277 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 278 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 279 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_PlayerFaceLinkArtist:
# 280 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_right
# 281 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 282 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 283 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_LinkArtistBeginExit:
# 284 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 285 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 286 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 287 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 288 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 289 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_LinkArtistReturnToPlayer:
# 290 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 291 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 292 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 293 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 294 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_fast_up
# 295 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_fast_up
# 296 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_fast_up
# 297 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_left
# 298 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 299 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 300 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
@ EventScript_SpeakToContestReceptionist either ends or returns after a contest entry is submitted
# 301 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ContestReceptionist::
# 302 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special ClearLinkContestFlags
# 303 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	specialvar VAR_RESULT, IsContestDebugActive  @ Always FALSE
# 304 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_ContestLobby_EventScript_SetDebug
# 305 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_SpeakToContestReceptionist
# 306 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_LeadToContestHall
# 307 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special SetContestTrainerGfxIds
# 308 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_SetPlayerGfx
# 309 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_SetContestType
# 310 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_WarpToContestHall
# 311 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitstate
# 312 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 313 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 314 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetContestType::
# 315 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_CONTEST_RANK
# 316 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_RANK_NORMAL, LilycoveCity_ContestLobby_EventScript_SetNormalContestType
# 317 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_RANK_SUPER, LilycoveCity_ContestLobby_EventScript_SetSuperContestType
# 318 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_RANK_HYPER, LilycoveCity_ContestLobby_EventScript_SetHyperContestType
# 319 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_RANK_MASTER, LilycoveCity_ContestLobby_EventScript_SetMasterContestType
# 320 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 321 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 322 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetNormalContestType::
# 323 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_TYPE, CONTEST_TYPE_NPC_NORMAL
# 324 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 325 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 326 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetSuperContestType::
# 327 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_TYPE, CONTEST_TYPE_NPC_SUPER
# 328 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 329 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 330 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetHyperContestType::
# 331 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_TYPE, CONTEST_TYPE_NPC_HYPER
# 332 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 333 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 334 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetMasterContestType::
# 335 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_TYPE, CONTEST_TYPE_NPC_MASTER
# 336 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 337 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 338 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
@ Functionally unused
# 339 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetDebug::
# 340 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_MUSEUM_CURATOR
# 341 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
#ifdef UBFIX
# 342 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_MUSEUM_2F_STATE, 1
# 343 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
#else
# 344 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	copyvar VAR_LILYCOVE_MUSEUM_2F_STATE, 1, warn=FALSE
# 345 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
#endif
# 346 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	additem ITEM_CONTEST_PASS
# 347 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_0x800B, 8
# 348 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_RANK, CONTEST_RANK_MASTER
# 349 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 1
# 350 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_SYS_RIBBON_GET
# 351 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 352 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 353 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_WarpToContestHall::
# 354 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_ENTERED_CONTEST
# 355 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_CONTEST_CATEGORY
# 356 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_COOL, LilycoveCity_ContestLobby_EventScript_WarpToCoolContestHall
# 357 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_BEAUTY, LilycoveCity_ContestLobby_EventScript_WarpToBeautyContestHall
# 358 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_CUTE, LilycoveCity_ContestLobby_EventScript_WarpToCuteContestHall
# 359 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_SMART, LilycoveCity_ContestLobby_EventScript_WarpToSmartContestHall
# 360 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_TOUGH, LilycoveCity_ContestLobby_EventScript_WarpToToughContestHall
# 361 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 362 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 363 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_WarpToCoolContestHall::
# 364 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setwarp MAP_CONTEST_HALL_COOL, 7, 5
# 365 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DoContestHallWarp
# 366 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 367 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 368 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_WarpToBeautyContestHall::
# 369 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setwarp MAP_CONTEST_HALL_BEAUTY, 7, 5
# 370 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DoContestHallWarp
# 371 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 372 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 373 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_WarpToCuteContestHall::
# 374 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setwarp MAP_CONTEST_HALL_CUTE, 7, 5
# 375 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DoContestHallWarp
# 376 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 377 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 378 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_WarpToSmartContestHall::
# 379 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setwarp MAP_CONTEST_HALL_SMART, 7, 5
# 380 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DoContestHallWarp
# 381 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 382 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 383 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_WarpToToughContestHall::
# 384 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setwarp MAP_CONTEST_HALL_TOUGH, 7, 5
# 385 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DoContestHallWarp
# 386 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 387 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 388 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LeadToContestHall::
# 389 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 390 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applywaitmovement LOCALID_CONTEST_LOBBY_RECEPTIONIST, LilycoveCity_ContestLobby_Movement_ReceptionistApproachCounter
# 391 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playse SE_BRIDGE_WALK
# 392 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 12, 2, METATILE_Contest_WallShadow, TRUE
# 393 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 12, 3, METATILE_Contest_FloorShadow, TRUE
# 394 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DrawWholeMapView
# 395 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applywaitmovement LOCALID_CONTEST_LOBBY_RECEPTIONIST, LilycoveCity_ContestLobby_Movement_ReceptionistExitCounter
# 396 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playse SE_BRIDGE_WALK
# 397 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 12, 2, METATILE_Contest_CounterFlap_Top, TRUE
# 398 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 12, 3, METATILE_Contest_CounterFlap_Bottom, TRUE
# 399 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DrawWholeMapView
# 400 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay 20
# 401 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applywaitmovement LOCALID_CONTEST_LOBBY_RECEPTIONIST, LilycoveCity_ContestLobby_Movement_ReceptionistFacePlayer
# 402 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applywaitmovement LOCALID_PLAYER, LilycoveCity_ContestLobby_Movement_PlayerApproachReceptionist
# 403 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ComeThroughHere, MSGBOX_DEFAULT
# 404 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 405 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_RECEPTIONIST, LilycoveCity_ContestLobby_Movement_ReceptionistWalkToContestHall
# 406 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_ContestLobby_Movement_PlayerWalkToContestHall
# 407 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 408 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 409 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 410 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 411 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_PlayerWalkToContestHall:
# 412 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 413 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 414 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 415 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 416 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 417 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 418 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 419 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_8
# 420 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	set_invisible
# 421 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 422 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 423 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_PlayerApproachReceptionist:
# 424 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_left
# 425 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 426 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 427 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 428 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_ReceptionistApproachCounter:
# 429 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 430 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 431 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_down
# 432 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 433 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 434 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_ReceptionistExitCounter:
# 435 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 436 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 437 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_up
# 438 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 439 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 440 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_ReceptionistWalkToContestHall:
# 441 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 442 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 443 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 444 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 445 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 446 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 447 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_8
# 448 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	set_invisible
# 449 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 450 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 451 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_ReceptionistFacePlayer:
# 452 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_right
# 453 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 454 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 455 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_BlackBelt::
# 456 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_MasterRankHereICome, MSGBOX_NPC
# 457 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 458 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 459 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_Girl::
# 460 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_WholeVarietyOfPokemonHere, MSGBOX_NPC
# 461 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 462 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 463 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_Artist::
# 464 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ContestFeastForEyes, MSGBOX_NPC
# 465 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 466 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 467 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_FatMan::
# 468 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ToughContestIsExtreme, MSGBOX_NPC
# 469 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 470 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 471 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_Fisherman::
# 472 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_LavishedCareOnMon, MSGBOX_NPC
# 473 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 474 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 475 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_NinjaBoy::
# 476 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_MadePokeblocksWithFamily, MSGBOX_NPC
# 477 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 478 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 479 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ContestWinner1::
# 480 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 481 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 482 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_HALL_1
# 483 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 484 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 485 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 486 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ContestWinner2::
# 487 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 488 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 489 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_HALL_2
# 490 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 491 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 492 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 493 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ContestWinner3::
# 494 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 495 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 496 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_HALL_3
# 497 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 498 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 499 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 500 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ContestWinner4::
# 501 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 502 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 503 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_HALL_4
# 504 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 505 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 506 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 507 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ContestWinner5::
# 508 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 509 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 510 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_HALL_5
# 511 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 512 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 513 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 514 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ContestWinner6::
# 515 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 516 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 517 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_HALL_6
# 518 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 519 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 520 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 521 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_Blender3Boy::
# 522 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_LetsGetBlendingAlready, MSGBOX_NPC
# 523 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 524 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 525 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_Blender3Girl::
# 526 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_WhatKindOfPokeblockWillIGet, MSGBOX_NPC
# 527 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 528 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 529 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_BerryBlenderSpeedRecords::
# 530 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 531 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special ShowBerryBlenderRecordWindow
# 532 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitbuttonpress
# 533 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special RemoveRecordsWindow
# 534 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 535 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 536 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 537 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LinkContestResults::
# 538 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 539 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	frontier_results FACILITY_LINK_CONTEST
# 540 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitbuttonpress
# 541 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special RemoveRecordsWindow
# 542 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 543 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 544 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 545 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_BlendMaster::
# 546 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 547 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	faceplayer
# 548 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_BlendWithTheBlendMaster, MSGBOX_DEFAULT
# 549 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_FaceOriginalDirection
# 550 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 551 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 552 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_BlendMasterOnlooker1::
# 553 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 554 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_WhoaAwesome, MSGBOX_DEFAULT
# 555 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
# 556 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 557 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 558 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_BlendMasterOnlooker2::
# 559 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 560 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_WickedlyFast, MSGBOX_DEFAULT
# 561 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
# 562 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 563 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 564 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_BlendMasterOnlooker3::
# 565 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 566 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_WhatAnExpert, MSGBOX_DEFAULT
# 567 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
# 568 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 569 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 570 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_BlendMasterOnlooker4::
# 571 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 572 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	faceplayer
# 573 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_MadeAmazingPokeblocksWithMaster, MSGBOX_DEFAULT
# 574 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_FaceOriginalDirection
# 575 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 576 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 577 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_BlendMasterOnlooker5::
# 578 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 579 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	faceplayer
# 580 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_QualitiesOfBlendMaster, MSGBOX_DEFAULT
# 581 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_FaceOriginalDirection
# 582 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 583 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 584 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_BlendMasterOnlooker6::
# 585 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 586 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	faceplayer
# 587 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_MasterWorksOnSkillsInMountains, MSGBOX_DEFAULT
# 588 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_FaceOriginalDirection
# 589 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 590 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 591 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_FaceOriginalDirection::
# 592 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 593 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applywaitmovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 594 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
# 595 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 596 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 597 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LinkContestReceptionist::
# 598 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special ClearLinkContestFlags
# 599 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 600 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	faceplayer
# 601 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_LinkContestReception, MSGBOX_DEFAULT
# 602 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest
# 603 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 604 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 605 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest::
# 606 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	message LilycoveCity_ContestLobby_Text_EnterContest3
# 607 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 608 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	multichoice 0, 0, MULTI_ENTERINFO, FALSE
# 609 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_RESULT
# 610 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 0, LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest
# 611 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 1, LilycoveCity_ContestLobby_EventScript_LinkContestInfo
# 612 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 2, LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 613 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 614 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 615 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 616 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest::
# 617 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ProgressWillBeSaved, MSGBOX_YESNO
# 618 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 619 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 620 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 621 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	message LilycoveCity_ContestLobby_Text_WhichContestMode
# 622 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 623 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	specialvar VAR_TEMP_D, IsWirelessAdapterConnected
# 624 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	multichoice 0, 0, MULTI_LINK_CONTEST_MODE, FALSE
# 625 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_RESULT
# 626 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 0, LilycoveCity_ContestLobby_EventScript_EmeraldMode  @ Shortened to E-Mode
# 627 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 1, LilycoveCity_ContestLobby_EventScript_GlobalMode   @ Shortened to G-Mode
# 628 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 2, LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 629 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 630 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 631 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 632 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_EmeraldMode::
# 633 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_TEMP_C, 0
# 634 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestType
# 635 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 636 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 637 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_GlobalMode::
# 638 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_TEMP_C, 1
# 639 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_TEMP_D, 1, LilycoveCity_ContestLobby_EventScript_CancelLinkNoWirelessGMode
# 640 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestType
# 641 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 642 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 643 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ChooseLinkContestType::
# 644 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	message LilycoveCity_ContestLobby_Text_EnterWhichContest3
# 645 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 646 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	multichoice 0, 0, MULTI_CONTEST_TYPE, FALSE
# 647 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_RESULT
# 648 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORIES_COUNT, LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 649 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 650 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	copyvar VAR_CONTEST_CATEGORY, VAR_RESULT
# 651 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon
# 652 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 653 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 654 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LinkContestInfo::
# 655 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	message LilycoveCity_ContestLobby_Text_WhichTopic2
# 656 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 657 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	multichoice 0, 0, MULTI_LINK_CONTEST_INFO, FALSE
# 658 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_RESULT
# 659 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 0, LilycoveCity_ContestLobby_EventScript_ExplainLinkContest
# 660 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 1, LilycoveCity_ContestLobby_EventScript_ExplainEMode
# 661 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 2, LilycoveCity_ContestLobby_EventScript_ExplainGMode
# 662 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 3, LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest
# 663 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest
# 664 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 665 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 666 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ExplainLinkContest::
# 667 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ExplainLinkContest, MSGBOX_DEFAULT
# 668 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkContestInfo
# 669 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 670 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 671 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ExplainEMode::
# 672 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ExplainEMode, MSGBOX_DEFAULT
# 673 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkContestInfo
# 674 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 675 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 676 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ExplainGMode::
# 677 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ExplainGMode, MSGBOX_DEFAULT
# 678 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkContestInfo
# 679 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 680 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 681 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_CancelLinkContest::
# 682 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special CloseLink
# 683 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ParticipateAnotherTime, MSGBOX_DEFAULT
# 684 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
# 685 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 686 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 687 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon::
# 688 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_EnterWhichPokemon3, MSGBOX_DEFAULT
# 689 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_RANK, 0
# 690 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	choosecontestmon
# 691 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 692 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special TryEnterContestMon
# 693 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, CANT_ENTER_CONTEST, LilycoveCity_ContestLobby_EventScript_LinkCantEnterLowRank
# 694 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, CAN_ENTER_CONTEST_EQUAL_RANK, LilycoveCity_ContestLobby_EventScript_EnterMonForLinkContest
# 695 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, CAN_ENTER_CONTEST_HIGH_RANK, LilycoveCity_ContestLobby_EventScript_EnterMonForLinkContest
# 696 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, CANT_ENTER_CONTEST_EGG, LilycoveCity_ContestLobby_EventScript_LinkCantEnterEgg
# 697 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, CANT_ENTER_CONTEST_FAINTED, LilycoveCity_ContestLobby_EventScript_LinkCantEnterFainted
# 698 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 699 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 700 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LinkCantEnterLowRank::
# 701 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_MonNotQualifiedForRank, MSGBOX_DEFAULT
# 702 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon
# 703 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 704 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 705 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LinkCantEnterEgg::
# 706 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_EggCannotTakePart2, MSGBOX_DEFAULT
# 707 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon
# 708 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 709 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 710 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LinkCantEnterFainted::
# 711 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_MonInNoCondition2, MSGBOX_DEFAULT
# 712 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon
# 713 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 714 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 715 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_EnterMonForLinkContest::
# 716 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8004
# 717 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest
# 718 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 719 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 720 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest::
# 721 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_TEMP_D, 1, LilycoveCity_ContestLobby_EventScript_SetLinkGroupType
# 722 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_ge VAR_TEMP_D, 2, LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 723 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	message LilycoveCity_ContestLobby_Text_PleaseWaitBButtonCancel
# 724 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 725 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 726 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call_if_eq VAR_TEMP_C, 0, LilycoveCity_ContestLobby_EventScript_TryLinkEMode
# 727 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call_if_eq VAR_TEMP_C, 1, LilycoveCity_ContestLobby_EventScript_TryLinkGMode
# 728 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_ge VAR_TEMP_C, 2, LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 729 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_WRONG_NUM_PLAYERS, LilycoveCity_ContestLobby_EventScript_CancelLinkDifferentChoices
# 730 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_DIFF_SELECTIONS, LilycoveCity_ContestLobby_EventScript_CancelLinkDifferentChoices
# 731 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED, LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 732 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_CONNECTION_ERROR, LilycoveCity_ContestLobby_EventScript_CancelLinkError
# 733 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED_CONTEST_GMODE, LilycoveCity_ContestLobby_EventScript_CancelLinkModeDifference
# 734 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	messageinstant LilycoveCity_ContestLobby_Text_Transmitting
# 735 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	contestlinktransfer
# 736 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_0x8004
# 737 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 0, LilycoveCity_ContestLobby_EventScript_StartLinkContest
# 738 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 1, LilycoveCity_ContestLobby_EventScript_CancelLinkDifferentContest
# 739 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 2, LilycoveCity_ContestLobby_EventScript_CancelLinkTransmissionError
# 740 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 741 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 742 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryLinkEMode::
# 743 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special TryContestEModeLinkup
# 744 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 745 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 746 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryLinkGMode::
# 747 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special TryContestGModeLinkup
# 748 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 749 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 750 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_CancelLinkDifferentContest::
# 751 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_PlayersChoseDifferentContest, MSGBOX_DEFAULT
# 752 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 753 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 754 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 755 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_CancelLinkDifferentChoices::
# 756 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_PlayersMadeDifferentChoice, MSGBOX_DEFAULT
# 757 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 758 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 759 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 760 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_CancelLinkModeDifference::
# 761 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_PlayerAt4PCounterUseGMode, MSGBOX_DEFAULT
# 762 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 763 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 764 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 765 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_CancelLinkError::
# 766 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special CloseLink
# 767 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox Text_LinkErrorPleaseReset, MSGBOX_DEFAULT
# 768 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
# 769 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 770 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 771 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_CancelLinkNoWirelessGMode::
# 772 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special CloseLink
# 773 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_NoWirelessAdapterInGMode, MSGBOX_DEFAULT
# 774 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
# 775 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 776 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 777 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_CancelLinkTransmissionError::
# 778 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_TransmissionError, MSGBOX_DEFAULT
# 779 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 780 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 781 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 782 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_StartLinkContest::
# 783 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special GetContestPlayerId
# 784 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	addvar VAR_0x8004, 1
# 785 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8004
# 786 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	messageautoscroll LilycoveCity_ContestLobby_Text_YourMonIsEntryNumX
# 787 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 788 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	subvar VAR_0x8004, 1
# 789 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_LeadToLinkContestHall
# 790 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 1
# 791 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special SetLinkContestPlayerGfx
# 792 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_TYPE, CONTEST_TYPE_LINK
# 793 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_RANK, CONTEST_RANK_MASTER
# 794 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_WarpToContestHall
# 795 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 796 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 797 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetLinkGroupType::
# 798 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call_if_eq VAR_CONTEST_CATEGORY, CONTEST_CATEGORY_COOL, LilycoveCity_ContestLobby_EventScript_SetLinkGroupCoolContest
# 799 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call_if_eq VAR_CONTEST_CATEGORY, CONTEST_CATEGORY_BEAUTY, LilycoveCity_ContestLobby_EventScript_SetLinkGroupBeautyContest
# 800 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call_if_eq VAR_CONTEST_CATEGORY, CONTEST_CATEGORY_CUTE, LilycoveCity_ContestLobby_EventScript_SetLinkGroupCuteContest
# 801 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call_if_eq VAR_CONTEST_CATEGORY, CONTEST_CATEGORY_SMART, LilycoveCity_ContestLobby_EventScript_SetLinkGroupSmartContest
# 802 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call_if_eq VAR_CONTEST_CATEGORY, CONTEST_CATEGORY_TOUGH, LilycoveCity_ContestLobby_EventScript_SetLinkGroupToughContest
# 803 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_DecideLinkLeader
# 804 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 805 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 806 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetLinkGroupCoolContest::
# 807 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_0x8004, LINK_GROUP_COOL_CONTEST
# 808 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 809 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 810 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetLinkGroupBeautyContest::
# 811 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_0x8004, LINK_GROUP_BEAUTY_CONTEST
# 812 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 813 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 814 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetLinkGroupCuteContest::
# 815 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_0x8004, LINK_GROUP_CUTE_CONTEST
# 816 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 817 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 818 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetLinkGroupSmartContest::
# 819 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_0x8004, LINK_GROUP_SMART_CONTEST
# 820 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 821 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 822 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetLinkGroupToughContest::
# 823 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_0x8004, LINK_GROUP_TOUGH_CONTEST
# 824 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 825 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 826 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_DecideLinkLeader::
# 827 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	message LilycoveCity_ContestLobby_Text_PleaseDecideLinkLeader
# 828 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 829 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	multichoice 16, 6, MULTI_LINK_LEADER, FALSE
# 830 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_RESULT
# 831 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 0, LilycoveCity_ContestLobby_EventScript_TryJoinGroup
# 832 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 1, LilycoveCity_ContestLobby_EventScript_TryLeadGroup
# 833 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 2, LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 834 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 835 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 836 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 837 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryLeadGroup::
# 838 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_TryBecomeLinkLeader
# 839 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_SUCCESS, LilycoveCity_ContestLobby_EventScript_LinkLeaderDecided
# 840 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED, LilycoveCity_ContestLobby_EventScript_DecideLinkLeader
# 841 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_RETRY_ROLE_ASSIGN, LilycoveCity_ContestLobby_EventScript_TryLeadGroup
# 842 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
# 843 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 844 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 845 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryJoinGroup::
# 846 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_TryJoinLinkGroup
# 847 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_SUCCESS, LilycoveCity_ContestLobby_EventScript_LinkLeaderDecided
# 848 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED, LilycoveCity_ContestLobby_EventScript_DecideLinkLeader
# 849 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_RETRY_ROLE_ASSIGN, LilycoveCity_ContestLobby_EventScript_TryJoinGroup
# 850 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
# 851 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 852 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 853 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryBecomeLinkLeader::
# 854 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special TryBecomeLinkLeader
# 855 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 856 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 857 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryJoinLinkGroup::
# 858 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special TryJoinLinkGroup
# 859 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 860 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 861 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LinkLeaderDecided::
# 862 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	messageinstant LilycoveCity_ContestLobby_Text_Transmitting
# 863 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	contestlinktransfer
# 864 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_StartLinkContest
# 865 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 866 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 867 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LeadToLinkContestHall::
# 868 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	messageautoscroll LilycoveCity_ContestLobby_Text_ContestBeginShortly
# 869 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 870 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay 20
# 871 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 872 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applywaitmovement LOCALID_CONTEST_LOBBY_LINK_RECEPTIONIST, LilycoveCity_ContestLobby_Movement_LinkReceptionistApproachCounter
# 873 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playse SE_BRIDGE_WALK
# 874 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 17, 2, METATILE_Contest_WallShadow, TRUE
# 875 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 17, 3, METATILE_Contest_FloorShadow, TRUE
# 876 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DrawWholeMapView
# 877 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applywaitmovement LOCALID_CONTEST_LOBBY_LINK_RECEPTIONIST, LilycoveCity_ContestLobby_Movement_LinkReceptionistExitCounter
# 878 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playse SE_BRIDGE_WALK
# 879 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 17, 2, METATILE_Contest_CounterFlap_Top, TRUE
# 880 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 17, 3, METATILE_Contest_CounterFlap_Bottom, TRUE
# 881 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DrawWholeMapView
# 882 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay 20
# 883 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applywaitmovement LOCALID_CONTEST_LOBBY_LINK_RECEPTIONIST, LilycoveCity_ContestLobby_Movement_LinkReceptionistFacePlayer
# 884 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applywaitmovement LOCALID_PLAYER, LilycoveCity_ContestLobby_Movement_PlayerApproachLinkReceptionist
# 885 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	messageautoscroll LilycoveCity_ContestLobby_Text_ComeThroughHere
# 886 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 887 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay 20
# 888 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 889 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_DelayIfContestWithRSPlayer
# 890 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_RECEPTIONIST, LilycoveCity_ContestLobby_Movement_LinkReceptionistWalkToContestHall
# 891 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_ContestLobby_Movement_PlayerWalkToLinkContestHall
# 892 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 893 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
# 894 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 895 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 896 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_PlayerWalkToLinkContestHall:
# 897 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 898 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 899 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 900 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 901 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 902 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 903 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 904 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 905 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_8
# 906 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	set_invisible
# 907 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 908 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 909 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_PlayerApproachLinkReceptionist:
# 910 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 911 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 912 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 913 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_LinkReceptionistApproachCounter:
# 914 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 915 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 916 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_down
# 917 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 918 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 919 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_LinkReceptionistExitCounter:
# 920 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 921 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 922 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_up
# 923 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 924 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 925 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_LinkReceptionistWalkToContestHall:
# 926 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 927 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 928 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 929 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 930 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 931 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 932 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 933 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_8
# 934 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	set_invisible
# 935 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 936 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 937 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_LinkReceptionistFacePlayer:
# 938 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_left
# 939 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 940 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 941 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LittleGirl::
# 942 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 943 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	faceplayer
# 944 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKEBLOCK_CASE, LilycoveCity_ContestLobby_EventScript_LittleGirlHaveCase
# 945 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_LadyGaveMePokeblockCase, MSGBOX_DEFAULT
# 946 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
# 947 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 948 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 949 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LittleGirlHaveCase::
# 950 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_MakePokeblocksDifferentBerries, MSGBOX_DEFAULT
# 951 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
# 952 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 953 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 954 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_LadyGaveMePokeblockCase:
# 955 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Yippee!\p"
# 956 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "The lady at the reception counter\n"
# 957 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "gave me a case for {POKEBLOCK}S!$"
# 958 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 959 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_MakePokeblocksDifferentBerries:
# 960 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Make {POKEBLOCK}S and put them in there.\p"
# 961 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "When you make a {POKEBLOCK}, everyone\n"
# 962 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "has to put in a different BERRY.$"
# 963 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 964 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_YourPokemonSpurredMeToPaint:
# 965 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Congratulations!\p"
# 966 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "I did a painting of your POKéMON to\n"
# 967 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "commemorate its victory…\p"
# 968 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Well, your POKéMON's appeals were\n"
# 969 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "so fantastic, it spurred me into\l"
# 970 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "painting better than I usually do.\l"
# 971 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Look, see?$"
# 972 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 973 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_ShouldITakePaintingToMuseum:
# 974 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "What do you think? I'm confident in\n"
# 975 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "what I've done, but do you like it?\p"
# 976 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "A work of this caliber, it wouldn't look\n"
# 977 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "out of place in an art museum.\p"
# 978 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Huh? An art museum really is looking\n"
# 979 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "for paintings?\p"
# 980 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Do you think I should take this there?$"
# 981 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 982 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_IllTakePaintingToMuseum:
# 983 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "What, really? Then, sure, I will take\n"
# 984 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "this painting there right now.\p"
# 985 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "I'll give it a proper title, too.\p"
# 986 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "I hope they'll like it and consider\n"
# 987 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "exhibiting this.\p"
# 988 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Please check if they did accept this.\n"
# 989 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Thank you!$"
# 990 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 991 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_TakeMementoOfPainting:
# 992 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Oh, that's right!\p"
# 993 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "As a memento of me painting your\n"
# 994 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "POKéMON, please take this.$"
# 995 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 996 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_ReceivedARibbon:
# 997 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "{PLAYER} received a RIBBON.$"
# 998 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 999 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_PutTheRibbonOnMon:
# 1000 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "{PLAYER} put the RIBBON on\n"
# 1001 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "{STR_VAR_1}.$"
# 1002 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1003 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_OkaySeeYou:
# 1004 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Okay, see you!$"
# 1005 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1006 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_TakeHomeButIdLikeToTakeToMuseum:
# 1007 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Oh… Then, I guess I'll just take\n"
# 1008 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "this home with me…\p"
# 1009 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "But, you know, I would like to take\n"
# 1010 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "this to the art museum… Okay?$"
# 1011 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1012 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_FineThatsTheWayItIs:
# 1013 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Oh, fine, that's the way it is.\n"
# 1014 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "I will hang this in my own house.\p"
# 1015 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "I'll just have to try harder next time.\n"
# 1016 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Well, be seeing you.$"
# 1017 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1018 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_MasterRankHereICome:
# 1019 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Hoo, boy… Master Rank CONTESTS,\n"
# 1020 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "here I come.\p"
# 1021 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "The world will know that my dearest\n"
# 1022 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "POKéMON is the cutest being in all\l"
# 1023 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "existence. The time has come!\l"
# 1024 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Uheheheh.$"
# 1025 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1026 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_WholeVarietyOfPokemonHere:
# 1027 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "You can see a whole variety of\n"
# 1028 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "POKéMON here.\p"
# 1029 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "That's why I make this place a regular\n"
# 1030 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "part of my daily stroll.$"
# 1031 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1032 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_ContestFeastForEyes:
# 1033 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Wow, coming out to a CONTEST is\n"
# 1034 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "a feast for these eyes!\p"
# 1035 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Would you look at all the POKéMON\n"
# 1036 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "that just scream to be painted?$"
# 1037 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1038 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_ToughContestIsExtreme:
# 1039 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "The TOUGHNESS CONTEST is like\n"
# 1040 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "extreme, man!\p"
# 1041 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Those muscular appeals…\n"
# 1042 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Cascading sweat… I swoon!$"
# 1043 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1044 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_LavishedCareOnMon:
# 1045 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Day in and day out, I lavished my care\n"
# 1046 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "on this POKéMON.\p"
# 1047 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Its condition is peaking.\n"
# 1048 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Today, victory is mine!$"
# 1049 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1050 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_MadePokeblocksWithFamily:
# 1051 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "I made {POKEBLOCK}S with Mom, Dad, and\n"
# 1052 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Big Sister. They turned out great!\p"
# 1053 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "I bet you can make smoother, better\n"
# 1054 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "{POKEBLOCK}S if you have more people.$"
