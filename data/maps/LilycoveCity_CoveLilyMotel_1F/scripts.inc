# 1 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 2 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_MapScripts::
# 3 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 5 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_EventScript_MotelOwner::
# 6 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	lockall
# 7 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_CoveLilyMotel_1F_EventScript_GameClear
# 8 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_CoveLilyMotel_1F_EventScript_AquaHideoutBusted
# 9 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_GuestsDoubledByMascot, MSGBOX_DEFAULT
# 10 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applywaitmovement LOCALID_MOTEL_OWNER, Common_Movement_FacePlayer
# 11 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_NoGuestsWithTeamAqua, MSGBOX_DEFAULT
# 12 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	closemessage
# 13 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applywaitmovement LOCALID_MOTEL_OWNER, Common_Movement_FaceOriginalDirection
# 14 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	releaseall
# 15 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	end
# 16 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 17 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_EventScript_AquaHideoutBusted::
# 18 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_MonFoundLostItem, MSGBOX_DEFAULT
# 19 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applywaitmovement LOCALID_MOTEL_OWNER, Common_Movement_FacePlayer
# 20 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_HeardAquaHideoutBusted, MSGBOX_DEFAULT
# 21 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	closemessage
# 22 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applywaitmovement LOCALID_MOTEL_OWNER, Common_Movement_FaceOriginalDirection
# 23 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	releaseall
# 24 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	end
# 25 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 26 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_EventScript_GameClear::
# 27 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_HouseSittingMonCaughtBurglar, MSGBOX_DEFAULT
# 28 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applywaitmovement LOCALID_MOTEL_OWNER, Common_Movement_FacePlayer
# 29 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_BetterGetWorkingOnGuestsDinner, MSGBOX_DEFAULT
# 30 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	closemessage
# 31 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applywaitmovement LOCALID_MOTEL_OWNER, Common_Movement_FaceOriginalDirection
# 32 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	releaseall
# 33 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	end
# 34 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 35 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_EventScript_BlockingTV::
# 36 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	lockall
# 37 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	playse SE_PIN
# 38 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applywaitmovement LOCALID_MOTEL_OWNER, Common_Movement_ExclamationMark
# 39 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applywaitmovement LOCALID_MOTEL_OWNER, Common_Movement_Delay48
# 40 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 41 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_CantSeeTheTV, MSGBOX_DEFAULT
# 42 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	closemessage
# 43 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_CoveLilyMotel_1F_Movement_PlayerPushFromTV
# 44 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, LilycoveCity_CoveLilyMotel_1F_Movement_OwnerPushPlayer
# 45 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 46 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applywaitmovement LOCALID_MOTEL_OWNER, LilycoveCity_CoveLilyMotel_1F_Movement_OwnerReturn
# 47 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	release
# 48 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	end
# 49 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 50 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Movement_PlayerPushFromTV:
# 51 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	face_right
# 52 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	lock_facing_direction
# 53 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	walk_left
# 54 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	unlock_facing_direction
# 55 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	step_end
# 56 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 57 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Movement_OwnerPushPlayer:
# 58 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	walk_up
# 59 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	step_end
# 60 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 61 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Movement_OwnerReturn:
# 62 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	face_down
# 63 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	walk_down
# 64 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	face_up
# 65 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	step_end
# 66 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 67 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_GuestsDoubledByMascot:
# 68 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Hm, so they doubled the guests by\n"
# 69 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "using POKéMON as attractions?\p"
# 70 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Hm, well, maybe I should make a cute\n"
# 71 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "POKéMON our inn's mascot.\p"
# 72 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "I wonder if that will attract more\n"
# 73 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "guests to stay with us?$"
# 74 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 75 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_NoGuestsWithTeamAqua:
# 76 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Oh, sorry, sorry!\n"
# 77 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "I was too involved in watching TV!\p"
# 78 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Since that TEAM AQUA came to town,\n"
# 79 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "the tourists have been staying away.$"
# 80 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 81 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_CantSeeTheTV:
# 82 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Hey, down in front!\n"
# 83 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "I can't see the TV!$"
# 84 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 85 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_MonFoundLostItem:
# 86 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Amazing! You're telling me a POKéMON\n"
# 87 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "found someone's lost item?\p"
# 88 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "That's something. If we had some smart\n"
# 89 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "POKéMON like that…\p"
# 90 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "We could recover anything that our\n"
# 91 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "guests mislaid…$"
# 92 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 93 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_HeardAquaHideoutBusted:
# 94 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Oh, sorry, sorry!\n"
# 95 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "I was too involved in watching TV!\p"
# 96 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "I heard that someone busted\n"
# 97 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "the TEAM AQUA HIDEOUT.\p"
# 98 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Thanks to that, we just booked\n"
# 99 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "a reservation from a big group.\p"
# 100 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "It was a company called… Uh…\n"
# 101 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "GAME something…$"
# 102 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 103 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_HouseSittingMonCaughtBurglar:
# 104 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Amazing! A house-sitting POKéMON\n"
# 105 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "caught a burglar?\p"
# 106 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "That's something. If we had a tough\n"
# 107 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "POKéMON as a security guard…\p"
# 108 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "We would be able to provide our guests\n"
# 109 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "with greater safety.$"
# 110 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 111 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_BetterGetWorkingOnGuestsDinner:
# 112 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Oh, sorry, sorry!\n"
# 113 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "I was too involved in watching TV.\p"
# 114 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Oh, yes. A big group of guests arrived\n"
# 115 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "a little while ago.\p"
# 116 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "They booked in as GAME FREAK,\n"
# 117 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "so I guess they must make games.\p"
# 118 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Uh-oh, I'd better get working on\n"
# 119 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "their dinner!$"
