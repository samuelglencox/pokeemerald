# 1 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 2 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_MapScripts::
# 3 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LilycoveCity_LilycoveMuseum_2F_OnLoad
# 4 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LilycoveCity_LilycoveMuseum_2F_OnFrame
# 5 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.byte 0
# 6 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 7 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_OnLoad:
# 8 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_COOL_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_SetCoolPainting
# 9 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckBeautyPainting
# 10 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 11 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 12 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_CheckBeautyPainting::
# 13 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_BEAUTY_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_SetBeautyPainting
# 14 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckCutePainting
# 15 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 16 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 17 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_CheckCutePainting::
# 18 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_CUTE_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_SetCutePainting
# 19 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckSmartPainting
# 20 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 21 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 22 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_CheckSmartPainting::
# 23 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_SMART_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_SetSmartPainting
# 24 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckToughPainting
# 25 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 26 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 27 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_CheckToughPainting::
# 28 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_TOUGH_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_SetToughPainting
# 29 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 30 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 31 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_SetCoolPainting::
# 32 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 10, 6, METATILE_LilycoveMuseum_Painting2_Left, TRUE
# 33 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 11, 6, METATILE_LilycoveMuseum_Painting2_Right, TRUE
# 34 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckBeautyPainting
# 35 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 36 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 37 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_SetBeautyPainting::
# 38 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 18, 6, METATILE_LilycoveMuseum_Painting1_Left, TRUE
# 39 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 19, 6, METATILE_LilycoveMuseum_Painting1_Right, TRUE
# 40 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckCutePainting
# 41 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 42 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 43 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_SetCutePainting::
# 44 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 14, 10, METATILE_LilycoveMuseum_Painting3_Left, TRUE
# 45 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 15, 10, METATILE_LilycoveMuseum_Painting3_Right, TRUE
# 46 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckSmartPainting
# 47 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 48 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 49 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_SetSmartPainting::
# 50 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 6, 10, METATILE_LilycoveMuseum_Painting0_Left, TRUE
# 51 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 7, 10, METATILE_LilycoveMuseum_Painting0_Right, TRUE
# 52 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckToughPainting
# 53 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 54 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 55 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_SetToughPainting::
# 56 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 2, 6, METATILE_LilycoveMuseum_Painting4_Left, TRUE
# 57 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 3, 6, METATILE_LilycoveMuseum_Painting4_Right, TRUE
# 58 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 59 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 60 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_OnFrame:
# 61 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	map_script_2 VAR_LILYCOVE_MUSEUM_2F_STATE, 0, LilycoveCity_LilycoveMuseum_2F_EventScript_ShowExhibitHall
# 62 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.2byte 0
# 63 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 64 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ShowExhibitHall::
# 65 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	lockall
# 66 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_CURATOR, Common_Movement_FacePlayer
# 67 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_LilycoveMuseum_2F_Movement_PlayerWalkInPlaceLeft
# 68 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	waitmovement 0
# 69 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ThisIsExhibitHall, MSGBOX_SIGN
# 70 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applywaitmovement LOCALID_MUSEUM_2F_CURATOR, LilycoveCity_LilycoveMuseum_2F_Movement_FaceExhibitHall
# 71 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applywaitmovement LOCALID_PLAYER, LilycoveCity_LilycoveMuseum_2F_Movement_FaceExhibitHall
# 72 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ExplainExhibitHall, MSGBOX_SIGN
# 73 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applywaitmovement LOCALID_MUSEUM_2F_CURATOR, Common_Movement_FacePlayer
# 74 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applywaitmovement LOCALID_PLAYER, LilycoveCity_LilycoveMuseum_2F_Movement_PlayerWalkInPlaceLeft
# 75 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_PleaseObtainPaintingsForExhibit, MSGBOX_SIGN
# 76 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
#ifdef UBFIX
# 77 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setvar VAR_LILYCOVE_MUSEUM_2F_STATE, 1
# 78 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
#else
# 79 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	copyvar VAR_LILYCOVE_MUSEUM_2F_STATE, 1, warn=FALSE
# 80 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
#endif
# 81 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
# 82 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 83 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 84 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Movement_PlayerWalkInPlaceLeft:
# 85 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	walk_in_place_faster_left
# 86 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	step_end
# 87 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 88 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Movement_FaceExhibitHall:
# 89 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	face_up
# 90 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	delay_16
# 91 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	step_end
# 92 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 93 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_Curator::
# 94 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	lockall
# 95 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_GLASS_ORNAMENT, LilycoveCity_LilycoveMuseum_2F_EventScript_ReceivedGlassOrnament
# 96 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
# 97 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	switch VAR_0x8004
# 98 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	case 1, LilycoveCity_LilycoveMuseum_2F_EventScript_AddedPainting
# 99 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	case 2, LilycoveCity_LilycoveMuseum_2F_EventScript_AddedPainting
# 100 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	case 3, LilycoveCity_LilycoveMuseum_2F_EventScript_AddedPainting
# 101 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	case 4, LilycoveCity_LilycoveMuseum_2F_EventScript_AddedPainting
# 102 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	case 5, LilycoveCity_LilycoveMuseum_2F_EventScript_ThankPlayer
# 103 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_WishToFillExhibit, MSGBOX_NPC
# 104 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 105 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 106 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_AddedPainting::
# 107 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ThanksAddedNewPainting, MSGBOX_NPC
# 108 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 109 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 110 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ThankPlayer::
# 111 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applywaitmovement LOCALID_MUSEUM_2F_CURATOR, Common_Movement_FacePlayer
# 112 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsYouPlayer, MSGBOX_DEFAULT
# 113 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_CURATOR, LilycoveCity_LilycoveMuseum_2F_Movement_FaceExhibitHall
# 114 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_PaintingsAttractedMoreGuests, MSGBOX_DEFAULT
# 115 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_GiveGlassOrnament
# 116 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 117 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 118 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_GiveGlassOrnament::
# 119 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_CURATOR, Common_Movement_FacePlayer
# 120 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_TokenOfGratitude, MSGBOX_DEFAULT
# 121 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	givedecoration DECOR_GLASS_ORNAMENT
# 122 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, LilycoveCity_LilycoveMuseum_2F_EventScript_NoRoomForGlassOrnament
# 123 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setflag FLAG_RECEIVED_GLASS_ORNAMENT
# 124 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	closemessage
# 125 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
# 126 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 127 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 128 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_NoRoomForGlassOrnament::
# 129 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 130 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_KeepThisForYou, MSGBOX_DEFAULT
# 131 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	closemessage
# 132 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
# 133 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 134 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 135 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ReceivedGlassOrnament::
# 136 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_HonorToHaveYouVisit, MSGBOX_NPC
# 137 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
# 138 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 139 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 140 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_CutePainting::
# 141 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	lockall
# 142 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_CUTE_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_ShowCutePainting
# 143 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsPinkPictureFrame, MSGBOX_SIGN
# 144 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 145 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 146 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ToughPainting::
# 147 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	lockall
# 148 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_TOUGH_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_ShowToughPainting
# 149 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsYellowPictureFrame, MSGBOX_SIGN
# 150 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 151 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 152 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_CoolPainting::
# 153 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	lockall
# 154 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_COOL_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_ShowCoolPainting
# 155 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsRedPictureFrame, MSGBOX_SIGN
# 156 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 157 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 158 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_BeautyPainting::
# 159 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	lockall
# 160 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_BEAUTY_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_ShowBeautyPainting
# 161 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsBluePictureFrame, MSGBOX_SIGN
# 162 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 163 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 164 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_SmartPainting::
# 165 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	lockall
# 166 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_SMART_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_ShowSmartPainting
# 167 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsGreenPictureFrame, MSGBOX_SIGN
# 168 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 169 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 170 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_Girl::
# 171 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsSurprisedMe, MSGBOX_NPC
# 172 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 173 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 174 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ExpertM::
# 175 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsRatherAmusing, MSGBOX_NPC
# 176 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 177 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 178 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_RichBoy::
# 179 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ThesePaintingsOfYourPokemon, MSGBOX_NPC
# 180 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 181 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 182 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ShowCoolPainting::
# 183 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon, MSGBOX_SIGN
# 184 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 185 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	showcontestpainting CONTEST_WINNER_MUSEUM_COOL
# 186 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
# 187 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 188 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 189 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ShowBeautyPainting::
# 190 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon, MSGBOX_SIGN
# 191 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 192 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	showcontestpainting CONTEST_WINNER_MUSEUM_BEAUTY
# 193 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
# 194 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 195 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 196 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ShowCutePainting::
# 197 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon, MSGBOX_SIGN
# 198 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 199 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	showcontestpainting CONTEST_WINNER_MUSEUM_CUTE
# 200 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
# 201 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 202 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 203 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ShowSmartPainting::
# 204 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon, MSGBOX_SIGN
# 205 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 206 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	showcontestpainting CONTEST_WINNER_MUSEUM_SMART
# 207 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
# 208 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 209 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 210 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ShowToughPainting::
# 211 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon, MSGBOX_SIGN
# 212 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 213 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	showcontestpainting CONTEST_WINNER_MUSEUM_TOUGH
# 214 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
# 215 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 216 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 217 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ThisIsExhibitHall:
# 218 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "This is our special exhibit hall.$"
# 219 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 220 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ExplainExhibitHall:
# 221 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "As you can plainly see, there is not\n"
# 222 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "a single painting on exhibit.\p"
# 223 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Here, I don't wish to exhibit works of\n"
# 224 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "so-called classical art.\p"
# 225 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Such classical works you can see on\n"
# 226 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "our ground floor.\p"
# 227 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "I wish to exhibit work that is far\n"
# 228 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "different from the classics.\p"
# 229 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Art, after all, is not restricted to old,\n"
# 230 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "famous works!\p"
# 231 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "This exhibit hall, I wish to fill it with…\p"
# 232 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Modern and vibrant artworks of\n"
# 233 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "POKéMON seemingly ready to spring\l"
# 234 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "forth into glorious life!$"
# 235 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 236 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_PleaseObtainPaintingsForExhibit:
# 237 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "I beg your pardon. I didn't intend\n"
# 238 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "to monopolize the conversation.\p"
# 239 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Now, as you are young, and yet\n"
# 240 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "obviously well traveled…\p"
# 241 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "You must encounter lively POKéMON\n"
# 242 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "and works of art depicting them.\p"
# 243 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "If you were to come across such\n"
# 244 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "a painting, may we ask you to obtain\l"
# 245 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "the artist's permission to exhibit\l"
# 246 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "it here?$"
# 247 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 248 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_WishToFillExhibit:
# 249 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "I wish to fill this exhibit hall with\n"
# 250 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "modern and vibrant paintings of\l"
# 251 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "POKéMON.$"
# 252 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 253 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ThanksAddedNewPainting:
# 254 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Thanks to you, we've added a new\n"
# 255 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "painting to our collection!\p"
# 256 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "I've heard it depicts your POKéMON.\n"
# 257 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Truly magnificent!\p"
# 258 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Thank you so very, very much!$"
# 259 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 260 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ItsYouPlayer:
# 261 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Ah! It's you!\n"
# 262 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "{PLAYER}!$"
# 263 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 264 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_PaintingsAttractedMoreGuests:
# 265 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Isn't this marvelous?\n"
# 266 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "This collection of paintings!\p"
# 267 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Each one of them flawless!\n"
# 268 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "None better than another!\p"
# 269 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "These paintings have attracted\n"
# 270 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "more guests to our ART MUSEUM.\p"
# 271 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Sincerely, I thank you, {PLAYER}.\n"
# 272 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "This is my dream come true!$"
# 273 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 274 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_TokenOfGratitude:
# 275 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "This is merely a token of my gratitude.$"
# 276 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 277 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_KeepThisForYou:
# 278 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "I will keep this for you until we\n"
# 279 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "meet again.$"
# 280 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 281 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_HonorToHaveYouVisit:
# 282 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Ah, so good to see you, {PLAYER}!\p"
# 283 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "It's an honor to have you visit us\n"
# 284 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "on your busy journeys.\p"
# 285 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Please, relax and do enjoy your\n"
# 286 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "visit with us.$"
# 287 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 288 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ItsPinkPictureFrame:
# 289 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "It's a picture frame with pink-colored\n"
# 290 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "adornments.$"
# 291 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 292 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ItsYellowPictureFrame:
# 293 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "It's a picture frame with\n"
# 294 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "yellow-colored adornments.$"
# 295 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 296 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ItsBluePictureFrame:
# 297 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "It's a picture frame with\n"
# 298 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "blue-colored adornments.$"
# 299 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 300 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ItsRedPictureFrame:
# 301 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "It's a picture frame with\n"
# 302 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "red-colored adornments.$"
# 303 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 304 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ItsGreenPictureFrame:
# 305 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "It's a picture frame with\n"
# 306 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "green-colored adornments.$"
# 307 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 308 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon:
# 309 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "It's a painting of POKéMON.$"
# 310 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 311 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsSurprisedMe:
# 312 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "I've been away awhile, so the new\n"
# 313 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "paintings up here surprised me.\p"
# 314 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "I wish someone would paint my POKéMON\n"
# 315 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "this pretty.$"
# 316 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 317 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsRatherAmusing:
# 318 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Well… So this is where they show\n"
# 319 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "the topical POKéMON paintings.\p"
# 320 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "I see, these new paintings are indeed\n"
# 321 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "rather amusing.$"
# 322 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 323 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ThesePaintingsOfYourPokemon:
# 324 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Wow, is that right?\n"
# 325 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "These paintings are of your POKéMON.\p"
# 326 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Isn't that just the ultimate joy for\n"
# 327 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "a TRAINER?$"
