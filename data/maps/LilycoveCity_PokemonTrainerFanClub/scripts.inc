# 1 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 2 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_MapScripts::
# 3 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LilycoveCity_PokemonTrainerFanClub_OnFrame
# 4 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_PokemonTrainerFanClub_OnTransition
# 5 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.byte 0
# 6 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 7 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	@ See field_specials.c for a breakdown of the Fan Club and its variables
# 8 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 9 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_OnFrame:
# 10 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	map_script_2 VAR_LILYCOVE_FAN_CLUB_STATE, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_MeetFirstFans
# 11 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.2byte 0
# 12 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 13 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MeetFirstFans::
# 14 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lockall
# 15 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	applywaitmovement LOCALID_TRAINER_FAN_CLUB_LASS, Common_Movement_WalkInPlaceFasterDown
# 16 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_OhWowItsPlayer, MSGBOX_DEFAULT
# 17 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_LITTLE_GIRL, LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlWatchPlayer
# 18 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_MAN, LilycoveCity_PokemonTrainerFanClub_Movement_FanApproachPlayer
# 19 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 20 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 21 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_HeardAboutYouImYourFan, MSGBOX_DEFAULT
# 22 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	applywaitmovement LOCALID_TRAINER_FAN_CLUB_LITTLE_GIRL, LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlMoveCloserToPlayer
# 23 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 24 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	applywaitmovement LOCALID_TRAINER_FAN_CLUB_LITTLE_GIRL, LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlHideFromPlayer
# 25 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_LILYCOVE_FAN_CLUB_STATE, 2
# 26 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	releaseall
# 27 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 28 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 29 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Movement_FanApproachPlayer:
# 30 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	delay_8
# 31 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_in_place_faster_down
# 32 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 33 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 34 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 35 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_left
# 36 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_left
# 37 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	step_end
# 38 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 39 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlWatchPlayer:
# 40 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_left
# 41 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_left
# 42 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_down
# 43 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_down
# 44 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_left
# 45 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_down
# 46 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	step_end
# 47 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 48 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlMoveCloserToPlayer:
# 49 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 50 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_in_place_faster_right
# 51 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	step_end
# 52 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 53 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlHideFromPlayer:
# 54 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	jump_in_place_right
# 55 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_up
# 56 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_up
# 57 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_right
# 58 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_in_place_faster_down
# 59 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	step_end
# 60 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 61 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_OnTransition:
# 62 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_HideOrShowInterviewer
# 63 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_LILYCOVE_FAN_CLUB_STATE, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_SetFanMemberPositionsForFirstFanMeeting
# 64 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_LILYCOVE_FAN_CLUB_STATE, 2, LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions
# 65 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 66 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 67 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions::
# 68 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special TryLoseFansFromPlayTime
# 69 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow
# 70 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 71 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 72 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember1ToFarTable
# 73 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER2
# 74 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 75 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember2ToFarTable
# 76 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER3
# 77 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 78 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember3ToFarTable
# 79 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER4
# 80 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 81 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable
# 82 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER5
# 83 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 84 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable
# 85 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER6
# 86 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 87 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember6ToFarTable
# 88 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER7
# 89 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 90 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable
# 91 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER8
# 92 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 93 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable
# 94 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 95 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 96 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_HideOrShowInterviewer::
# 97 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, ShouldHideFanClubInterviewer
# 98 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_HideInterviewer
# 99 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_FAN_CLUB_INTERVIEWER
# 100 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	clearflag FLAG_FAN_CLUB_STRENGTH_SHARED
# 101 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 102 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 103 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_HideInterviewer::
# 104 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_FAN_CLUB_INTERVIEWER
# 105 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 106 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 107 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
@ Set up the fan club TV show, if the player has at least 5 fans in the club
# 108 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
@ Rather than counting up, 1 is subtracted from the total for each member not a fan of the players
# 109 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow::
# 110 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8005, NUM_TRAINER_FAN_CLUB_MEMBERS
# 111 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 112 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 113 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 114 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER2
# 115 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 116 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 117 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER3
# 118 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 119 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 120 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER4
# 121 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 122 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 123 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER5
# 124 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 125 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 126 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER6
# 127 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 128 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 129 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER7
# 130 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 131 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 132 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER8
# 133 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 134 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 135 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_ge VAR_0x8005, 5, LilycoveCity_PokemonTrainerFanClub_EventScript_TrySetUpTVShow
# 136 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 137 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 138 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan::
# 139 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	subvar VAR_0x8005, 1
# 140 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 141 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 142 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_TrySetUpTVShow::
# 143 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special TryPutTrainerFanClubOnAir
# 144 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 145 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 146 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember1ToFarTable::
# 147 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_LASS, 7, 5
# 148 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 149 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 150 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember2ToFarTable::
# 151 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_POKEFAN_M, 3, 4
# 152 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 153 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 154 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember3ToFarTable::
# 155 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_LITTLE_GIRL, 7, 2
# 156 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 157 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 158 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable::
# 159 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_NINJA_BOY, 5, 5
# 160 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 161 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 162 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable::
# 163 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_BOY, 5, 2
# 164 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 165 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 166 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember6ToFarTable::
# 167 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_MAN, 8, 4
# 168 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 169 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 170 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable::
# 171 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_WOMAN, 3, 3
# 172 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 173 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 174 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable::
# 175 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_EXPERT_F, 8, 3
# 176 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 177 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 178 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_SetFanMemberPositionsForFirstFanMeeting::
# 179 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow
# 180 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember2ToFarTable
# 181 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable
# 182 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable
# 183 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable
# 184 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable
# 185 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 186 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 187 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Man::
# 188 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 189 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 190 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER6
# 191 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 192 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_LILYCOVE_FAN_CLUB_STATE, 0, LilycoveCity_PokemonTrainerFanClub_EventScript_ManPlayerNotChampion
# 193 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 194 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_ManPlayersFan
# 195 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 196 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), LilycoveCity_PokemonTrainerFanClub_EventScript_ManOnlyNonFan
# 197 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_TrainersPowerIsOutOfTheOrdinary, MSGBOX_DEFAULT
# 198 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 199 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 200 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 201 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ManPlayersFan::
# 202 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 203 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_ManOnlyFan
# 204 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YoureOneWeWantToWin, MSGBOX_DEFAULT
# 205 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 206 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 207 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 208 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ManOnlyFan::
# 209 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_OthersDontKnowYoureTheBest, MSGBOX_DEFAULT
# 210 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 211 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 212 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 213 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ManOnlyNonFan::
# 214 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsBestNoOneWantsToListen, MSGBOX_DEFAULT
# 215 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 216 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 217 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 218 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ManPlayerNotChampion::
# 219 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_HearingAboutToughNewTrainer, MSGBOX_DEFAULT
# 220 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 221 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 222 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 223 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Lass::
# 224 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 225 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 226 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 227 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 228 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_LILYCOVE_FAN_CLUB_STATE, 0, LilycoveCity_PokemonTrainerFanClub_EventScript_LassPlayerNotChampion
# 229 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 230 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_LassPlayersFan
# 231 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 232 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), LilycoveCity_PokemonTrainerFanClub_EventScript_LassOnlyNonFan
# 233 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_ICantHelpLikingBrawly, MSGBOX_DEFAULT
# 234 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 235 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 236 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 237 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LassPlayersFan::
# 238 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 239 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_LassOnlyFan
# 240 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_ImPullingForYou, MSGBOX_DEFAULT
# 241 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 242 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 243 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 244 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LassOnlyFan::
# 245 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_BrawlyNoImYourFan, MSGBOX_DEFAULT
# 246 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 247 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 248 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 249 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LassOnlyNonFan::
# 250 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_NobodyUnderstandsBrawly, MSGBOX_DEFAULT
# 251 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 252 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 253 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 254 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LassPlayerNotChampion::
# 255 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_MyFavoriteTrainerIsBrawly, MSGBOX_DEFAULT
# 256 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 257 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 258 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 259 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanM::
# 260 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 261 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 262 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER2
# 263 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 264 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_LILYCOVE_FAN_CLUB_STATE, 0, LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMPlayerNotChampion
# 265 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 266 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMPlayersFan
# 267 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 268 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMOnlyNonFan
# 269 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_LongWayToGoComparedToNorman, MSGBOX_DEFAULT
# 270 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 271 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 272 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 273 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMPlayersFan::
# 274 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 275 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMOnlyFan
# 276 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YouveSurpassedYourFather, MSGBOX_DEFAULT
# 277 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 278 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 279 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 280 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMOnlyFan::
# 281 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YourFatherNeverGaveUpSoKeepOnBattling, MSGBOX_DEFAULT
# 282 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 283 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 284 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 285 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMOnlyNonFan::
# 286 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YouAndNormanAreDifferent, MSGBOX_DEFAULT
# 287 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 288 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 289 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 290 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMPlayerNotChampion::
# 291 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_WeDiscussStrongestTrainers, MSGBOX_DEFAULT
# 292 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 293 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 294 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 295 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirl::
# 296 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 297 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 298 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER3
# 299 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 300 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_LILYCOVE_FAN_CLUB_STATE, 0, LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayerNotChampion
# 301 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 302 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan
# 303 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 304 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyNonFan
# 305 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_EveryoneThinksTrainerIsCool, MSGBOX_DEFAULT
# 306 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 307 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 308 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 309 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan::
# 310 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 311 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyFan
# 312 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_OhWoweeItsPlayer, MSGBOX_DEFAULT
# 313 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 314 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 315 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 316 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyFan::
# 317 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_AlwaysCheerForYou, MSGBOX_DEFAULT
# 318 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 319 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 320 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 321 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyNonFan::
# 322 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsReallyCoolItsJustMe, MSGBOX_DEFAULT
# 323 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 324 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 325 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 326 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayerNotChampion::
# 327 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_WishThereWasTrainerLikeThat, MSGBOX_DEFAULT
# 328 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 329 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 330 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 331 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoy::
# 332 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 333 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 334 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER4
# 335 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 336 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 337 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoyPlayersFan
# 338 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 339 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoyOnlyNonFan
# 340 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsWickedlyCool, MSGBOX_DEFAULT
# 341 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 342 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 343 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 344 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoyPlayersFan::
# 345 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 346 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoyOnlyFan
# 347 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_WantToBeStrongLikeYou, MSGBOX_DEFAULT
# 348 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 349 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 350 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 351 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoyOnlyFan::
# 352 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_OnlyOneWhoCheersForYou, MSGBOX_DEFAULT
# 353 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 354 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 355 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 356 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoyOnlyNonFan::
# 357 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_NeverGoingToStopBeingTrainersFan, MSGBOX_DEFAULT
# 358 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 359 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 360 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 361 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Boy::
# 362 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 363 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 364 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER5
# 365 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 366 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 367 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_BoyPlayersFan
# 368 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 369 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), LilycoveCity_PokemonTrainerFanClub_EventScript_BoyOnlyNonFan
# 370 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_ThinkTrainerIsNumberOne, MSGBOX_DEFAULT
# 371 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 372 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 373 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 374 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_BoyPlayersFan::
# 375 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 376 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_BoyOnlyFan
# 377 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YoureAmazingAfterAll, MSGBOX_DEFAULT
# 378 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 379 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 380 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 381 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_BoyOnlyFan::
# 382 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_ImInYourCorner, MSGBOX_DEFAULT
# 383 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 384 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 385 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 386 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_BoyOnlyNonFan::
# 387 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YoureMaybeStrongerThanTrainer, MSGBOX_DEFAULT
# 388 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 389 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 390 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 391 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Woman::
# 392 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 393 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 394 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER7
# 395 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 396 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 397 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan
# 398 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 399 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), LilycoveCity_PokemonTrainerFanClub_EventScript_WomanOnlyNonFan
# 400 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsStandout, MSGBOX_DEFAULT
# 401 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 402 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 403 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 404 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan::
# 405 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 406 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_WomanOnlyFan
# 407 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YouChangedMyMind, MSGBOX_DEFAULT
# 408 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 409 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 410 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 411 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_WomanOnlyFan::
# 412 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YouBattleAttractivelyInToughSituation, MSGBOX_DEFAULT
# 413 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 414 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 415 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 416 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_WomanOnlyNonFan::
# 417 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_NoOneCanKnockYouButTrainerStronger, MSGBOX_DEFAULT
# 418 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 419 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 420 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 421 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertF::
# 422 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 423 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 424 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER8
# 425 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 426 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 427 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertFPlayersFan
# 428 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 429 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertFOnlyNonFan
# 430 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_HaventRealizedPotential, MSGBOX_DEFAULT
# 431 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 432 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 433 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 434 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertFPlayersFan::
# 435 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 436 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertFOnlyFan
# 437 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YouImpressive, MSGBOX_DEFAULT
# 438 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 439 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 440 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 441 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertFOnlyFan::
# 442 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_OnlyIRecognizeYourTrueWorth, MSGBOX_DEFAULT
# 443 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 444 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 445 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 446 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertFOnlyNonFan::
# 447 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YourePowerfulButNotTrueStrength, MSGBOX_DEFAULT
# 448 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 449 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 450 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 451 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Interviewer::
# 452 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 453 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 454 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_set FLAG_FAN_CLUB_STRENGTH_SHARED, LilycoveCity_PokemonTrainerFanClub_EventScript_AlreadyInterviewed
# 455 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_unset FLAG_FAN_CLUB_STRENGTH_SHARED, LilycoveCity_PokemonTrainerFanClub_EventScript_Interview
# 456 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 457 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 458 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
@ The interviewer doesnt count as an individual fan club member
# 459 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
@ Instead they always ask about whoever the Lass would be interested in, if not the player
# 460 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Interview::
# 461 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8005, TVSHOW_FAN_CLUB_SPECIAL
# 462 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special InterviewBefore
# 463 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_AlreadyInterviewed2
# 464 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8006
# 465 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 466 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 467 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_WhatsYourOpinionOfTrainer, MSGBOX_DEFAULT
# 468 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_FAN_QUESTION
# 469 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 470 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call Common_ShowEasyChatScreen
# 471 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 472 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 473 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_SubmitOpinion
# 474 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 0, LilycoveCity_PokemonTrainerFanClub_EventScript_CancelGiveOpinion
# 475 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 476 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 477 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_SubmitOpinion::
# 478 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_ThatsWhatYouThink, MSGBOX_DEFAULT
# 479 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_RateTrainer
# 480 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 481 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 482 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CancelGiveOpinion::
# 483 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 484 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 485 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_HaveYouForgottenTrainer, MSGBOX_YESNO
# 486 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LilycoveCity_PokemonTrainerFanClub_EventScript_ForgetTrainer
# 487 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_PokemonTrainerFanClub_EventScript_AskForOpinion
# 488 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 489 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 490 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_AskForOpinion::
# 491 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 492 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 493 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_WhatsYourOpinionOfTrainer2, MSGBOX_DEFAULT
# 494 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_FAN_QUESTION
# 495 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 496 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call Common_ShowEasyChatScreen
# 497 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 498 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 499 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_SubmitOpinion
# 500 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 0, LilycoveCity_PokemonTrainerFanClub_EventScript_CancelGiveOpinion
# 501 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 502 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 503 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_RateTrainer::
# 504 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 505 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 506 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	message LilycoveCity_PokemonTrainerFanClub_Text_HowStrongRateTrainer
# 507 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	waitmessage
# 508 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_POKEMON_FAN_CLUB_RATER
# 509 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special ShowScrollableMultichoice
# 510 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 511 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	switch VAR_RESULT
# 512 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	case 11, LilycoveCity_PokemonTrainerFanClub_EventScript_CancelRateTrainer
# 513 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_PokemonTrainerFanClub_EventScript_CancelRateTrainer
# 514 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 515 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 516 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	copyvar VAR_0x8006, VAR_0x800A
# 517 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 518 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special PutFanClubSpecialOnTheAir
# 519 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_CompleteInterview
# 520 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 521 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 522 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CancelRateTrainer::
# 523 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 524 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 525 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_HaveYouForgottenTrainer2, MSGBOX_YESNO
# 526 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LilycoveCity_PokemonTrainerFanClub_EventScript_ForgetTrainer
# 527 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_PokemonTrainerFanClub_EventScript_RateTrainer
# 528 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 529 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 530 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ForgetTrainer::
# 531 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 532 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 533 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YouShouldMeetTrainer, MSGBOX_DEFAULT
# 534 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 535 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 536 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 537 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CompleteInterview::
# 538 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 539 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 540 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_ThankYouIllShareThisInfo, MSGBOX_DEFAULT
# 541 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setflag FLAG_FAN_CLUB_STRENGTH_SHARED
# 542 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 543 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 544 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 545 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_AlreadyInterviewed::
# 546 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 547 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 548 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_HopeYouCatchTVSpecial, MSGBOX_DEFAULT
# 549 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 550 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 551 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 552 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
@ Shouldnt be reached
# 553 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_AlreadyInterviewed2::
# 554 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 555 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 556 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_OhWowItsPlayer:
# 557 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Oh, wow!\n"
# 558 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "It's {PLAYER}!$"
# 559 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 560 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_HeardAboutYouImYourFan:
# 561 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I've heard the news!\n"
# 562 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "You're really strong, aren't you?\p"
# 563 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "We always argue about who is the\n"
# 564 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "strongest of all TRAINERS here.\p"
# 565 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "So when I heard about you, I decided\n"
# 566 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "to be your fan!\p"
# 567 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I hope you'll keep on battling other\n"
# 568 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "tough TRAINERS.\p"
# 569 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "That way, we'll be able to see more\n"
# 570 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "of your hot, hot battles.\p"
# 571 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "That will make the others here see\n"
# 572 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "exactly how great you are.\p"
# 573 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Remember, I'm cheering for you,\n"
# 574 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{PLAYER}!$"
# 575 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 576 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YoureOneWeWantToWin:
# 577 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Yo, {PLAYER}!\n"
# 578 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "You're the one we want to win!$"
# 579 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 580 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_OthersDontKnowYoureTheBest:
# 581 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "The others, they don't know that\n"
# 582 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "you're the best of the best!\p"
# 583 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Isn't that right, {PLAYER}?\n"
# 584 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Show them you've got guts!$"
# 585 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 586 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_TrainersPowerIsOutOfTheOrdinary:
# 587 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I hate to say this, but the TRAINER\n"
# 588 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "everybody's talking about is\l"
# 589 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{STR_VAR_1}, no question about it!\p"
# 590 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "That TRAINER's power…\n"
# 591 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "It's out of the ordinary.$"
# 592 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 593 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsBestNoOneWantsToListen:
# 594 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Darn it… I've been telling people\n"
# 595 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "that {STR_VAR_1} is the best now…\p"
# 596 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "But no one wants to listen…$"
# 597 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 598 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_HearingAboutToughNewTrainer:
# 599 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I've been hearing things about\n"
# 600 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "a tough new TRAINER.\p"
# 601 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "This TRAINER's supposed to be beating\n"
# 602 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "GYM LEADERS, even.\p"
# 603 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Do you know anything about this\n"
# 604 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "new TRAINER?$"
# 605 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 606 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_ImPullingForYou:
# 607 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Oh!\n"
# 608 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{PLAYER}!\p"
# 609 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Go for it!\n"
# 610 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I'm pulling for you!$"
# 611 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 612 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_BrawlyNoImYourFan:
# 613 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Sigh…\n"
# 614 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "BRAWLY…\p"
# 615 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Oh, no! Wait!\n"
# 616 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "That's not right! No, no, no!\p"
# 617 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I'm your fan through and through!\p"
# 618 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "So make me proud!\n"
# 619 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Go for it!$"
# 620 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 621 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_ICantHelpLikingBrawly:
# 622 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I can't help it, I can only get to\n"
# 623 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "like BRAWLY…$"
# 624 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 625 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_NobodyUnderstandsBrawly:
# 626 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Nobody understands the charm of\n"
# 627 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "BRAWLY…\p"
# 628 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I don't care!\p"
# 629 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Even if I'm the only one, I'm going\n"
# 630 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "to keep cheering for BRAWLY!$"
# 631 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 632 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_MyFavoriteTrainerIsBrawly:
# 633 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Whatever anyone says, my favorite\n"
# 634 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "TRAINER is DEWFORD's GYM LEADER\l"
# 635 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "BRAWLY!$"
# 636 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 637 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YouveSurpassedYourFather:
# 638 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "You've surpassed your own father in\n"
# 639 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "every regard!\p"
# 640 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I'm telling you, so there's no question\n"
# 641 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "about it at all!$"
# 642 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 643 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YourFatherNeverGaveUpSoKeepOnBattling:
# 644 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Even when things turned bleak,\n"
# 645 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "your father never gave up.\p"
# 646 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "This I know to be true.\p"
# 647 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "You never give up even if you lose!\n"
# 648 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "So keep on battling!$"
# 649 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 650 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_LongWayToGoComparedToNorman:
# 651 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "NORMAN battled with more power,\n"
# 652 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "charisma, and showmanship than you.\p"
# 653 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Even though people may say that\n"
# 654 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "you're strong…\p"
# 655 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "You've still got a long way to go\n"
# 656 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "compared to your father.$"
# 657 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 658 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YouAndNormanAreDifferent:
# 659 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "You're beginning to get the same\n"
# 660 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "air of awe NORMAN exudes.\p"
# 661 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "But there's something conclusively\n"
# 662 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "different between you and NORMAN.\p"
# 663 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I can't tell you what that is.\n"
# 664 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "You'll have to find it yourself.$"
# 665 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 666 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_WeDiscussStrongestTrainers:
# 667 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Everyone here, we're all huge fans\n"
# 668 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "of POKéMON battles.\p"
# 669 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "We discuss who we consider to be\n"
# 670 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "the strongest of all TRAINERS.\p"
# 671 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "If you were to become famous,\n"
# 672 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "we might even become your fans!$"
# 673 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 674 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_OhWoweeItsPlayer:
# 675 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Oh, woweee! It's {PLAYER}!\n"
# 676 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "For real, too!\p"
# 677 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Please, shake my hand, shake my hand!$"
# 678 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 679 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_AlwaysCheerForYou:
# 680 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I'll always cheer for you, {PLAYER}!\n"
# 681 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Always, always!\p"
# 682 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I don't want to see you lose ever,\n"
# 683 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{PLAYER}.\p"
# 684 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Because I know you're really,\n"
# 685 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "really strong, {PLAYER}!$"
# 686 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 687 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_EveryoneThinksTrainerIsCool:
# 688 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{STR_VAR_1} is really cool…\p"
# 689 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Everyone thinks so, right, right?$"
# 690 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 691 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsReallyCoolItsJustMe:
# 692 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{STR_VAR_1} really is cool, don't\n"
# 693 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "you think so?\p"
# 694 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Even if it's just me, I'm going to keep\n"
# 695 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "cheering my favorite TRAINER.$"
# 696 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 697 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_WishThereWasTrainerLikeThat:
# 698 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "My favorite TRAINER is…\p"
# 699 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Cool…\p"
# 700 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Strong…\p"
# 701 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "And really nice…\p"
# 702 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I wish there was a TRAINER like that…$"
# 703 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 704 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_WantToBeStrongLikeYou:
# 705 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Whoa! It's {PLAYER}!\n"
# 706 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Wicked!\p"
# 707 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "When I grow up, I want to be strong\n"
# 708 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "like you, {PLAYER}!$"
# 709 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 710 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_OnlyOneWhoCheersForYou:
# 711 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Even if I'm the only one…\p"
# 712 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "You'll always be the only one\n"
# 713 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I cheer for, {PLAYER}!\p"
# 714 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Because I believe in you, {PLAYER}!$"
# 715 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 716 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsWickedlyCool:
# 717 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{STR_VAR_1} is so wickedly cool…\n"
# 718 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I want to shake hands with my hero.$"
# 719 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 720 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_NeverGoingToStopBeingTrainersFan:
# 721 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Even if I'm the only one…\p"
# 722 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I'm never going to stop being\n"
# 723 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{STR_VAR_1}'s fan!\p"
# 724 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Because I've heard, {STR_VAR_1}\n"
# 725 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "never loses!$"
# 726 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 727 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YoureAmazingAfterAll:
# 728 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{PLAYER}!\n"
# 729 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "You are amazing after all!\p"
# 730 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Ever since I set eyes on you,\n"
# 731 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I knew that you were great.\p"
# 732 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "It looks like my eyes didn't deceive me.$"
# 733 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 734 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_ImInYourCorner:
# 735 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Who cares about the others.\n"
# 736 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I'm in your corner!\p"
# 737 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "You don't need to worry. Just get\n"
# 738 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "out there and battle like always.$"
# 739 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 740 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_ThinkTrainerIsNumberOne:
# 741 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "You're a pretty decent TRAINER,\n"
# 742 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I think.\p"
# 743 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "But I also think that {STR_VAR_1}\n"
# 744 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "is number one right now.\p"
# 745 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "That's just my opinion.\n"
# 746 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Don't worry about it too much.$"
# 747 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 748 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YoureMaybeStrongerThanTrainer:
# 749 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Wow, you really are strong.\n"
# 750 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Maybe even stronger than {STR_VAR_1}.\p"
# 751 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "But {STR_VAR_1} needs me.\p"
# 752 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "If I don't cheer for {STR_VAR_1},\n"
# 753 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "who will?$"
# 754 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 755 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YouChangedMyMind:
# 756 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "You've changed my mind!\n"
# 757 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "You are strong, aren't you?\p"
# 758 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I'd like you to tell me how you managed\n"
# 759 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "to get so strong!$"
# 760 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 761 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YouBattleAttractivelyInToughSituation:
# 762 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "The tougher the situation, the more\n"
# 763 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "attractively you battle.\p"
# 764 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I can't wait for your next battle!$"
# 765 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 766 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsStandout:
# 767 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Among the recently hot TRAINERS,\n"
# 768 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{STR_VAR_1} is the standout.\p"
# 769 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "That toughness, it's simply not normal.\p"
# 770 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "You're doing okay, but you're not in\n"
# 771 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "the same class as {STR_VAR_1}.$"
# 772 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 773 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_NoOneCanKnockYouButTrainerStronger:
# 774 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "You are really popular…\p"
# 775 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "You're strong, and you're caring to\n"
# 776 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "POKéMON. No one can knock you.\p"
# 777 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "But, you know, I believe in {STR_VAR_1}.\p"
# 778 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{STR_VAR_1} is definitely stronger!\n"
# 779 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I'm positive!$"
# 780 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 781 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YouImpressive:
# 782 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "You…\p"
# 783 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Impressive!$"
# 784 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 785 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_OnlyIRecognizeYourTrueWorth:
# 786 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Your true worth, it is fine if only\n"
# 787 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I recognized it.\p"
# 788 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "The others I doubt will understand\n"
# 789 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "the hidden power that beats within.$"
# 790 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 791 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_HaventRealizedPotential:
# 792 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Yes, I see strength in your eyes.\p"
# 793 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "But!\p"
# 794 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "You still haven't realized your\n"
# 795 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "potential.$"
# 796 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 797 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YourePowerfulButNotTrueStrength:
# 798 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "It is true that you are tremendously\n"
# 799 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "powerful.\p"
# 800 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "But!\n"
# 801 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "I can tell…\p"
# 802 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "That strength cannot be considered\n"
# 803 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "true strength yet!\p"
# 804 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "True strength is…!\n"
# 805 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "… …\p"
# 806 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Actually, I have no idea, either.$"
