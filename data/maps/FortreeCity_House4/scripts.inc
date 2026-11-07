# 1 "data/maps/FortreeCity_House4/scripts.pory"

# 2 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_MapScripts::
# 3 "data/maps/FortreeCity_House4/scripts.pory"
	.byte 0
# 4 "data/maps/FortreeCity_House4/scripts.pory"

# 5 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_Woman::
# 6 "data/maps/FortreeCity_House4/scripts.pory"
	msgbox FortreeCity_House4_Text_BringsWorldCloserTogether, MSGBOX_NPC
# 7 "data/maps/FortreeCity_House4/scripts.pory"
	end
# 8 "data/maps/FortreeCity_House4/scripts.pory"

# 9 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_Boy::
# 10 "data/maps/FortreeCity_House4/scripts.pory"
	lockall
# 11 "data/maps/FortreeCity_House4/scripts.pory"
	goto_if_set FLAG_RECEIVED_MENTAL_HERB, FortreeCity_House4_EventScript_ReceivedMentalHerb
# 12 "data/maps/FortreeCity_House4/scripts.pory"
	goto_if_set FLAG_WINGULL_DELIVERED_MAIL, FortreeCity_House4_EventScript_WingullReturned
# 13 "data/maps/FortreeCity_House4/scripts.pory"
	goto_if_set FLAG_WINGULL_SENT_ON_ERRAND, FortreeCity_House4_EventScript_WingullOnErrand
# 14 "data/maps/FortreeCity_House4/scripts.pory"
	msgbox FortreeCity_House4_Text_GoBirdPokemon, MSGBOX_DEFAULT
# 15 "data/maps/FortreeCity_House4/scripts.pory"
	closemessage
# 16 "data/maps/FortreeCity_House4/scripts.pory"
	setflag FLAG_WINGULL_SENT_ON_ERRAND
# 17 "data/maps/FortreeCity_House4/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_HOUSE_2_WINGULL
# 18 "data/maps/FortreeCity_House4/scripts.pory"
	applywaitmovement LOCALID_FORTREE_HOUSE_WINGULL, FortreeCity_House4_Movement_WingullExit
# 19 "data/maps/FortreeCity_House4/scripts.pory"
	removeobject LOCALID_FORTREE_HOUSE_WINGULL
# 20 "data/maps/FortreeCity_House4/scripts.pory"
	releaseall
# 21 "data/maps/FortreeCity_House4/scripts.pory"
	end
# 22 "data/maps/FortreeCity_House4/scripts.pory"

# 23 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_WingullOnErrand::
# 24 "data/maps/FortreeCity_House4/scripts.pory"
	applywaitmovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 25 "data/maps/FortreeCity_House4/scripts.pory"
	msgbox FortreeCity_House4_Text_AskedWingullToRunErrand, MSGBOX_DEFAULT
# 26 "data/maps/FortreeCity_House4/scripts.pory"
	releaseall
# 27 "data/maps/FortreeCity_House4/scripts.pory"
	end
# 28 "data/maps/FortreeCity_House4/scripts.pory"

# 29 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_WingullReturned::
# 30 "data/maps/FortreeCity_House4/scripts.pory"
	applywaitmovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 31 "data/maps/FortreeCity_House4/scripts.pory"
	msgbox FortreeCity_House4_Text_WelcomeWingullTakeMentalHerb, MSGBOX_DEFAULT
# 32 "data/maps/FortreeCity_House4/scripts.pory"
	giveitem ITEM_MENTAL_HERB
# 33 "data/maps/FortreeCity_House4/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 34 "data/maps/FortreeCity_House4/scripts.pory"
	setflag FLAG_RECEIVED_MENTAL_HERB
# 35 "data/maps/FortreeCity_House4/scripts.pory"
	releaseall
# 36 "data/maps/FortreeCity_House4/scripts.pory"
	end
# 37 "data/maps/FortreeCity_House4/scripts.pory"

# 38 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_ReceivedMentalHerb::
# 39 "data/maps/FortreeCity_House4/scripts.pory"
	applywaitmovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 40 "data/maps/FortreeCity_House4/scripts.pory"
	msgbox FortreeCity_House4_Text_FriendsFarAwayThanksToWingull, MSGBOX_DEFAULT
# 41 "data/maps/FortreeCity_House4/scripts.pory"
	releaseall
# 42 "data/maps/FortreeCity_House4/scripts.pory"
	end
# 43 "data/maps/FortreeCity_House4/scripts.pory"

# 44 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_Movement_WingullExit:
# 45 "data/maps/FortreeCity_House4/scripts.pory"
	walk_fast_down
# 46 "data/maps/FortreeCity_House4/scripts.pory"
	walk_fast_down
# 47 "data/maps/FortreeCity_House4/scripts.pory"
	walk_fast_right
# 48 "data/maps/FortreeCity_House4/scripts.pory"
	walk_in_place_faster_down
# 49 "data/maps/FortreeCity_House4/scripts.pory"
	delay_8
# 50 "data/maps/FortreeCity_House4/scripts.pory"
	step_end
# 51 "data/maps/FortreeCity_House4/scripts.pory"

# 52 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_Wingull::
# 53 "data/maps/FortreeCity_House4/scripts.pory"
	lock
# 54 "data/maps/FortreeCity_House4/scripts.pory"
	faceplayer
# 55 "data/maps/FortreeCity_House4/scripts.pory"
	waitse
# 56 "data/maps/FortreeCity_House4/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 57 "data/maps/FortreeCity_House4/scripts.pory"
	msgbox FortreeCity_House4_Text_Wingull, MSGBOX_DEFAULT
# 58 "data/maps/FortreeCity_House4/scripts.pory"
	waitmoncry
# 59 "data/maps/FortreeCity_House4/scripts.pory"
	release
# 60 "data/maps/FortreeCity_House4/scripts.pory"
	end
# 61 "data/maps/FortreeCity_House4/scripts.pory"

# 62 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_Text_BringsWorldCloserTogether:
# 63 "data/maps/FortreeCity_House4/scripts.pory"
	.string "By being together with POKéMON,\n"
# 64 "data/maps/FortreeCity_House4/scripts.pory"
	.string "people make more and more friends.\p"
# 65 "data/maps/FortreeCity_House4/scripts.pory"
	.string "And that brings the world closer\n"
# 66 "data/maps/FortreeCity_House4/scripts.pory"
	.string "together. I think it's wonderful!$"
# 67 "data/maps/FortreeCity_House4/scripts.pory"

# 68 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_Text_GoBirdPokemon:
# 69 "data/maps/FortreeCity_House4/scripts.pory"
	.string "There!\n"
# 70 "data/maps/FortreeCity_House4/scripts.pory"
	.string "Go, BIRD POKéMON!$"
# 71 "data/maps/FortreeCity_House4/scripts.pory"

# 72 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_Text_AskedWingullToRunErrand:
# 73 "data/maps/FortreeCity_House4/scripts.pory"
	.string "Heheh, I asked my WINGULL to run\n"
# 74 "data/maps/FortreeCity_House4/scripts.pory"
	.string "an errand for me.$"
# 75 "data/maps/FortreeCity_House4/scripts.pory"

# 76 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_Text_WelcomeWingullTakeMentalHerb:
# 77 "data/maps/FortreeCity_House4/scripts.pory"
	.string "Good!\n"
# 78 "data/maps/FortreeCity_House4/scripts.pory"
	.string "Welcome back, WINGULL!\p"
# 79 "data/maps/FortreeCity_House4/scripts.pory"
	.string "Huh? What is this?\n"
# 80 "data/maps/FortreeCity_House4/scripts.pory"
	.string "What is it holding?\p"
# 81 "data/maps/FortreeCity_House4/scripts.pory"
	.string "A MENTAL HERB?\n"
# 82 "data/maps/FortreeCity_House4/scripts.pory"
	.string "It must have picked it up somewhere.\p"
# 83 "data/maps/FortreeCity_House4/scripts.pory"
	.string "But I'm not a TRAINER, so you can\n"
# 84 "data/maps/FortreeCity_House4/scripts.pory"
	.string "have it.$"
# 85 "data/maps/FortreeCity_House4/scripts.pory"

# 86 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_Text_FriendsFarAwayThanksToWingull:
# 87 "data/maps/FortreeCity_House4/scripts.pory"
	.string "Thanks to my WINGULL, I have friends\n"
# 88 "data/maps/FortreeCity_House4/scripts.pory"
	.string "who live far away.$"
# 89 "data/maps/FortreeCity_House4/scripts.pory"

# 90 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_Text_Wingull:
# 91 "data/maps/FortreeCity_House4/scripts.pory"
	.string "WINGULL: Pihyoh!$"
