# 1 "data/maps/Route112/scripts.pory"

# 2 "data/maps/Route112/scripts.pory"
Route112_MapScripts::
# 3 "data/maps/Route112/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route112_OnTransition
# 4 "data/maps/Route112/scripts.pory"
	.byte 0
# 5 "data/maps/Route112/scripts.pory"

# 6 "data/maps/Route112/scripts.pory"
Route112_OnTransition:
# 7 "data/maps/Route112/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 8 "data/maps/Route112/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 0
# 9 "data/maps/Route112/scripts.pory"
	end
# 10 "data/maps/Route112/scripts.pory"

# 11 "data/maps/Route112/scripts.pory"
Route112_EventScript_MagmaGrunts::
# 12 "data/maps/Route112/scripts.pory"
	lockall
# 13 "data/maps/Route112/scripts.pory"
	delay 40
# 14 "data/maps/Route112/scripts.pory"
	applywaitmovement LOCALID_ROUTE112_GRUNT_1, Common_Movement_WalkInPlaceFasterRight
# 15 "data/maps/Route112/scripts.pory"
	delay 20
# 16 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_LeaderGoingToAwakenThing, MSGBOX_DEFAULT
# 17 "data/maps/Route112/scripts.pory"
	closemessage
# 18 "data/maps/Route112/scripts.pory"
	applywaitmovement LOCALID_ROUTE112_GRUNT_1, Common_Movement_FaceOriginalDirection
# 19 "data/maps/Route112/scripts.pory"
	delay 40
# 20 "data/maps/Route112/scripts.pory"
	applywaitmovement LOCALID_ROUTE112_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 21 "data/maps/Route112/scripts.pory"
	delay 20
# 22 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_YeahWeNeedMeteorite, MSGBOX_DEFAULT
# 23 "data/maps/Route112/scripts.pory"
	closemessage
# 24 "data/maps/Route112/scripts.pory"
	applywaitmovement LOCALID_ROUTE112_GRUNT_2, Common_Movement_FaceOriginalDirection
# 25 "data/maps/Route112/scripts.pory"
	delay 40
# 26 "data/maps/Route112/scripts.pory"
	applywaitmovement LOCALID_ROUTE112_GRUNT_1, Common_Movement_WalkInPlaceFasterRight
# 27 "data/maps/Route112/scripts.pory"
	delay 20
# 28 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_OhThatsWhyCrewWentToFallarbor, MSGBOX_DEFAULT
# 29 "data/maps/Route112/scripts.pory"
	closemessage
# 30 "data/maps/Route112/scripts.pory"
	applywaitmovement LOCALID_ROUTE112_GRUNT_1, Common_Movement_FaceOriginalDirection
# 31 "data/maps/Route112/scripts.pory"
	delay 40
# 32 "data/maps/Route112/scripts.pory"
	applywaitmovement LOCALID_ROUTE112_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 33 "data/maps/Route112/scripts.pory"
	delay 20
# 34 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_CantLetAnyonePassUntilTheyreBack, MSGBOX_DEFAULT
# 35 "data/maps/Route112/scripts.pory"
	closemessage
# 36 "data/maps/Route112/scripts.pory"
	applywaitmovement LOCALID_ROUTE112_GRUNT_2, Common_Movement_FaceOriginalDirection
# 37 "data/maps/Route112/scripts.pory"
	releaseall
# 38 "data/maps/Route112/scripts.pory"
	end
# 39 "data/maps/Route112/scripts.pory"

# 40 "data/maps/Route112/scripts.pory"
Route112_EventScript_MtChimneyCableCarSign::
# 41 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_MtChimneyCableCarSign, MSGBOX_SIGN
# 42 "data/maps/Route112/scripts.pory"
	end
# 43 "data/maps/Route112/scripts.pory"

# 44 "data/maps/Route112/scripts.pory"
Route112_EventScript_MtChimneySign::
# 45 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_MtChimneySign, MSGBOX_SIGN
# 46 "data/maps/Route112/scripts.pory"
	end
# 47 "data/maps/Route112/scripts.pory"

# 48 "data/maps/Route112/scripts.pory"
Route112_EventScript_RouteSignLavaridge::
# 49 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_RouteSignLavaridge, MSGBOX_SIGN
# 50 "data/maps/Route112/scripts.pory"
	end
# 51 "data/maps/Route112/scripts.pory"

# 52 "data/maps/Route112/scripts.pory"
Route112_EventScript_Hiker::
# 53 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_NotEasyToGetBackToLavaridge, MSGBOX_NPC
# 54 "data/maps/Route112/scripts.pory"
	end
# 55 "data/maps/Route112/scripts.pory"

# 56 "data/maps/Route112/scripts.pory"
Route112_EventScript_Brice::
# 57 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_BRICE, Route112_Text_BriceIntro, Route112_Text_BriceDefeat
# 58 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_BricePostBattle, MSGBOX_AUTOCLOSE
# 59 "data/maps/Route112/scripts.pory"
	end
# 60 "data/maps/Route112/scripts.pory"

# 61 "data/maps/Route112/scripts.pory"
Route112_EventScript_Trent::
# 62 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_TRENT_1, Route112_Text_TrentIntro, Route112_Text_TrentDefeat, Route112_EventScript_RegisterTrent
# 63 "data/maps/Route112/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 64 "data/maps/Route112/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route112_EventScript_RematchTrent
# 65 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_TrentPostBattle, MSGBOX_DEFAULT
# 66 "data/maps/Route112/scripts.pory"
	release
# 67 "data/maps/Route112/scripts.pory"
	end
# 68 "data/maps/Route112/scripts.pory"

# 69 "data/maps/Route112/scripts.pory"
Route112_EventScript_RegisterTrent::
# 70 "data/maps/Route112/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 71 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 72 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_TrentRegister, MSGBOX_DEFAULT
# 73 "data/maps/Route112/scripts.pory"
	register_matchcall TRAINER_TRENT_1
# 74 "data/maps/Route112/scripts.pory"
	release
# 75 "data/maps/Route112/scripts.pory"
	end
# 76 "data/maps/Route112/scripts.pory"

# 77 "data/maps/Route112/scripts.pory"
Route112_EventScript_RematchTrent::
# 78 "data/maps/Route112/scripts.pory"
	trainerbattle_rematch TRAINER_TRENT_1, Route112_Text_TrentRematchIntro, Route112_Text_TrentRematchDefeat
# 79 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_TrentRematchPostBattle, MSGBOX_AUTOCLOSE
# 80 "data/maps/Route112/scripts.pory"
	end
# 81 "data/maps/Route112/scripts.pory"

# 82 "data/maps/Route112/scripts.pory"
Route112_EventScript_Larry::
# 83 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_LARRY, Route112_Text_LarryIntro, Route112_Text_LarryDefeat
# 84 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_LarryPostBattle, MSGBOX_AUTOCLOSE
# 85 "data/maps/Route112/scripts.pory"
	end
# 86 "data/maps/Route112/scripts.pory"

# 87 "data/maps/Route112/scripts.pory"
Route112_EventScript_Carol::
# 88 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_CAROL, Route112_Text_CarolIntro, Route112_Text_CarolDefeat
# 89 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_CarolPostBattle, MSGBOX_AUTOCLOSE
# 90 "data/maps/Route112/scripts.pory"
	end
# 91 "data/maps/Route112/scripts.pory"

# 92 "data/maps/Route112/scripts.pory"
Route112_EventScript_Bryant::
# 93 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_BRYANT, Route112_Text_BryantIntro, Route112_Text_BryantDefeat
# 94 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_BryantPostBattle, MSGBOX_AUTOCLOSE
# 95 "data/maps/Route112/scripts.pory"
	end
# 96 "data/maps/Route112/scripts.pory"

# 97 "data/maps/Route112/scripts.pory"
Route112_EventScript_Shayla::
# 98 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_SHAYLA, Route112_Text_ShaylaIntro, Route112_Text_ShaylaDefeat
# 99 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_ShaylaPostBattle, MSGBOX_AUTOCLOSE
# 100 "data/maps/Route112/scripts.pory"
	end
# 101 "data/maps/Route112/scripts.pory"

# 102 "data/maps/Route112/scripts.pory"
Route112_Text_LeaderGoingToAwakenThing:
# 103 "data/maps/Route112/scripts.pory"
	.string "Hey, man, is our leader really going\n"
# 104 "data/maps/Route112/scripts.pory"
	.string "to awaken that thing?$"
# 105 "data/maps/Route112/scripts.pory"

# 106 "data/maps/Route112/scripts.pory"
Route112_Text_YeahWeNeedMeteorite:
# 107 "data/maps/Route112/scripts.pory"
	.string "Sounds like it, yeah. But I heard\n"
# 108 "data/maps/Route112/scripts.pory"
	.string "we need a METEORITE to do it.$"
# 109 "data/maps/Route112/scripts.pory"

# 110 "data/maps/Route112/scripts.pory"
Route112_Text_OhThatsWhyCrewWentToFallarbor:
# 111 "data/maps/Route112/scripts.pory"
	.string "Oh, I get it now. That's why the rest\n"
# 112 "data/maps/Route112/scripts.pory"
	.string "of the crew went out to FALLARBOR.$"
# 113 "data/maps/Route112/scripts.pory"

# 114 "data/maps/Route112/scripts.pory"
Route112_Text_CantLetAnyonePassUntilTheyreBack:
# 115 "data/maps/Route112/scripts.pory"
	.string "You got it. And until they come back,\n"
# 116 "data/maps/Route112/scripts.pory"
	.string "we're not to let anyone pass, right.$"
# 117 "data/maps/Route112/scripts.pory"

# 118 "data/maps/Route112/scripts.pory"
Route112_Text_NotEasyToGetBackToLavaridge:
# 119 "data/maps/Route112/scripts.pory"
	.string "Eh, I'd like to get to MAUVILLE, but if\n"
# 120 "data/maps/Route112/scripts.pory"
	.string "I went down these ledges, it'd be no\l"
# 121 "data/maps/Route112/scripts.pory"
	.string "easy matter to get back to LAVARIDGE.$"
# 122 "data/maps/Route112/scripts.pory"

# 123 "data/maps/Route112/scripts.pory"
Route112_Text_MtChimneyCableCarSign:
# 124 "data/maps/Route112/scripts.pory"
	.string "MT. CHIMNEY CABLE CAR\n"
# 125 "data/maps/Route112/scripts.pory"
	.string "“A short walk {UP_ARROW} way!”$"
# 126 "data/maps/Route112/scripts.pory"

# 127 "data/maps/Route112/scripts.pory"
Route112_Text_MtChimneySign:
# 128 "data/maps/Route112/scripts.pory"
	.string "MT. CHIMNEY\p"
# 129 "data/maps/Route112/scripts.pory"
	.string "“For LAVARIDGE TOWN or the summit,\n"
# 130 "data/maps/Route112/scripts.pory"
	.string "please take the CABLE CAR.”$"
# 131 "data/maps/Route112/scripts.pory"

# 132 "data/maps/Route112/scripts.pory"
Route112_Text_RouteSignLavaridge:
# 133 "data/maps/Route112/scripts.pory"
	.string "ROUTE 112\n"
# 134 "data/maps/Route112/scripts.pory"
	.string "{LEFT_ARROW} LAVARIDGE TOWN$"
