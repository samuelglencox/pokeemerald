# 1 "data/maps/AquaHideout_B2F/scripts.pory"

# 2 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_MapScripts::
# 3 "data/maps/AquaHideout_B2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AquaHideout_B2F_OnTransition
# 4 "data/maps/AquaHideout_B2F/scripts.pory"
	.byte 0
# 5 "data/maps/AquaHideout_B2F/scripts.pory"

# 6 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_OnTransition:
# 7 "data/maps/AquaHideout_B2F/scripts.pory"
	call_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, AquaHideout_B2F_EventScript_PreventMattNoticing
# 8 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 9 "data/maps/AquaHideout_B2F/scripts.pory"

# 10 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_PreventMattNoticing::
# 11 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 12 "data/maps/AquaHideout_B2F/scripts.pory"
	return
# 13 "data/maps/AquaHideout_B2F/scripts.pory"

# 14 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_MattNoticePlayer::
# 15 "data/maps/AquaHideout_B2F/scripts.pory"
	lockall
# 16 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8008, LOCALID_AQUA_HIDEOUT_MATT
# 17 "data/maps/AquaHideout_B2F/scripts.pory"
	playse SE_PIN
# 18 "data/maps/AquaHideout_B2F/scripts.pory"
	applywaitmovement VAR_0x8008, Common_Movement_ExclamationMark
# 19 "data/maps/AquaHideout_B2F/scripts.pory"
	applywaitmovement VAR_0x8008, Common_Movement_FacePlayer
# 20 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 21 "data/maps/AquaHideout_B2F/scripts.pory"
	releaseall
# 22 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 23 "data/maps/AquaHideout_B2F/scripts.pory"

# 24 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Matt::
# 25 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_MATT, AquaHideout_B2F_Text_MattIntro, AquaHideout_B2F_Text_MattDefeat, AquaHideout_B2F_EventScript_SubmarineEscape
# 26 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_MattPostBattle, MSGBOX_DEFAULT
# 27 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 28 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 29 "data/maps/AquaHideout_B2F/scripts.pory"

# 30 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_SubmarineEscape::
# 31 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8008, LOCALID_AQUA_HIDEOUT_MATT
# 32 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8009, LOCALID_AQUA_HIDEOUT_SUBMARINE
# 33 "data/maps/AquaHideout_B2F/scripts.pory"
	applywaitmovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
# 34 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 20
# 35 "data/maps/AquaHideout_B2F/scripts.pory"
	applywaitmovement VAR_0x8008, Common_Movement_FacePlayer
# 36 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_OurBossGotThroughHisPreparations, MSGBOX_DEFAULT
# 37 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 38 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
# 39 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8009, AquaHideout_B2F_Movement_SumbarineDepartLeft
# 40 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 41 "data/maps/AquaHideout_B2F/scripts.pory"
	removeobject VAR_0x8009
# 42 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 20
# 43 "data/maps/AquaHideout_B2F/scripts.pory"
	applywaitmovement VAR_0x8008, Common_Movement_FacePlayer
# 44 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_MattPostBattle, MSGBOX_DEFAULT
# 45 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE
# 46 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS
# 47 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 48 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 49 "data/maps/AquaHideout_B2F/scripts.pory"

# 50 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_SumbarineDepartLeft:
# 51 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 52 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 53 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 54 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 55 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 56 "data/maps/AquaHideout_B2F/scripts.pory"

# 57 "data/maps/AquaHideout_B2F/scripts.pory"
@ Unused
# 58 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_SumbarineDepartRight:
# 59 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 60 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 61 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 62 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 63 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 64 "data/maps/AquaHideout_B2F/scripts.pory"

# 65 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4::
# 66 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_4, AquaHideout_B2F_Text_Grunt4Intro, AquaHideout_B2F_Text_Grunt4Defeat, AquaHideout_B2F_EventScript_Grunt4Defeated
# 67 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 68 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 69 "data/maps/AquaHideout_B2F/scripts.pory"

# 70 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4Defeated::
# 71 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_DEFAULT
# 72 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 73 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 74 "data/maps/AquaHideout_B2F/scripts.pory"

# 75 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt6::
# 76 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_6, AquaHideout_B2F_Text_Grunt6Intro, AquaHideout_B2F_Text_Grunt6Defeat
# 77 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
# 78 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 79 "data/maps/AquaHideout_B2F/scripts.pory"

# 80 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt8::
# 81 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_8, AquaHideout_B2F_Text_Grunt8Intro, AquaHideout_B2F_Text_Grunt8Defeat
# 82 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt8PostBattle, MSGBOX_AUTOCLOSE
# 83 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 84 "data/maps/AquaHideout_B2F/scripts.pory"

# 85 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattIntro:
# 86 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe…\p"
# 87 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Got here already, did you?\n"
# 88 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "We underestimated you!\p"
# 89 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "But this is it!\p"
# 90 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'm a cut above the GRUNTS you've seen\n"
# 91 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "so far.\p"
# 92 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'm not stalling for time.\n"
# 93 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'm going to pulverize you!$"
# 94 "data/maps/AquaHideout_B2F/scripts.pory"

# 95 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattDefeat:
# 96 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe…\n"
# 97 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "So, I lost, too…$"
# 98 "data/maps/AquaHideout_B2F/scripts.pory"

# 99 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_OurBossGotThroughHisPreparations:
# 100 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe!\p"
# 101 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "While I was toying with you, our BOSS\n"
# 102 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "got through his preparations!$"
# 103 "data/maps/AquaHideout_B2F/scripts.pory"

# 104 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattPostBattle:
# 105 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe!\p"
# 106 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Our BOSS has already gone on his way to\n"
# 107 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "some cave under the sea!\p"
# 108 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "If you're going to give chase, you'd\n"
# 109 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "better search the big, wide sea beyond\l"
# 110 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "LILYCOVE.\p"
# 111 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "But will you find it then?\n"
# 112 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe!$"
# 113 "data/maps/AquaHideout_B2F/scripts.pory"

# 114 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4Intro:
# 115 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Wahahah, I grew weary of waiting!\n"
# 116 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You owe me a battle, too!$"
# 117 "data/maps/AquaHideout_B2F/scripts.pory"

# 118 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4Defeat:
# 119 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Tired of waiting…\n"
# 120 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Lost and dazed…$"
# 121 "data/maps/AquaHideout_B2F/scripts.pory"

# 122 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4PostBattle:
# 123 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "BOSS…\n"
# 124 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Is this good enough?$"
# 125 "data/maps/AquaHideout_B2F/scripts.pory"

# 126 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6Intro:
# 127 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Warp panels, the HIDEOUT's pride\n"
# 128 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "and joy!\p"
# 129 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You're clueless about where you are,\n"
# 130 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "aren't you?\p"
# 131 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Fluster and tire out the enemy, then\n"
# 132 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "lower the boom! That's our plan!$"
# 133 "data/maps/AquaHideout_B2F/scripts.pory"

# 134 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6Defeat:
# 135 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "What's wrong with you?\n"
# 136 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You're not tired at all!$"
# 137 "data/maps/AquaHideout_B2F/scripts.pory"

# 138 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6PostBattle:
# 139 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "That reminds me… I can't remember\n"
# 140 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "where I put the MASTER BALL.\p"
# 141 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "If I fail to guard it, our BOSS will\n"
# 142 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "chew me out…$"
# 143 "data/maps/AquaHideout_B2F/scripts.pory"

# 144 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8Intro:
# 145 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "When I joined TEAM AQUA, the first\n"
# 146 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "thing I had to learn was how these\l"
# 147 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "warp panels connected.$"
# 148 "data/maps/AquaHideout_B2F/scripts.pory"

# 149 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8Defeat:
# 150 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I was too occupied thinking about\n"
# 151 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "the warp panels…$"
# 152 "data/maps/AquaHideout_B2F/scripts.pory"

# 153 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8PostBattle:
# 154 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'll have to learn about how I can\n"
# 155 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "battle more effectively…$"
