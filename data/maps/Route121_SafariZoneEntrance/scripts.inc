# 1 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 2 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_MapScripts::
# 3 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route121_SafariZoneEntrance_OnFrame
# 4 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	.byte 0
# 5 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 6 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_OnFrame:
# 7 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	map_script_2 VAR_SAFARI_ZONE_STATE, 1, Route121_SafariZoneEntrance_EventScript_ExitSafariZone
# 8 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	.2byte 0
# 9 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 10 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_ExitSafariZone::
# 11 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	lockall
# 12 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Route121_SafariZoneEntrance_Movement_ExitSafariZone
# 13 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_SAFARI_ZONE_STATE, 0
# 14 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	releaseall
# 15 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 16 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 17 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_Movement_ExitSafariZone:
# 18 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_up
# 19 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 20 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 21 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 22 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 23 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 24 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 25 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 26 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	step_end
# 27 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 28 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_WelcomeAttendant::
# 29 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WelcomeToSafariZone, MSGBOX_NPC
# 30 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 31 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 32 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_InfoAttendant::
# 33 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	lock
# 34 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	faceplayer
# 35 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WelcomeFirstTime, MSGBOX_YESNO
# 36 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route121_SafariZoneEntrance_EventScript_FirstTimeInfo
# 37 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_ComeInAndEnjoy, MSGBOX_DEFAULT
# 38 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
# 39 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 40 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 41 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_FirstTimeInfo::
# 42 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_FirstTimeInfo, MSGBOX_DEFAULT
# 43 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	release
# 44 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 45 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 46 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_EntranceCounterTrigger::
# 47 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	lockall
# 48 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 49 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	showmoneybox 0, 0
# 50 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WouldYouLikeToPlay, MSGBOX_YESNO
# 51 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone
# 52 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_PlayAnotherTime, MSGBOX_DEFAULT
# 53 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
# 54 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 55 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 56 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone::
# 57 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	checkitem ITEM_POKEBLOCK_CASE
# 58 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Route121_SafariZoneEntrance_EventScript_NoPokeblockCase
# 59 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	call Route121_SafariZoneEntrance_EventScript_CheckHasRoomForPokemon
# 60 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	checkmoney 500
# 61 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Route121_SafariZoneEntrance_EventScript_NotEnoughMoney
# 62 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	playse SE_SHOP
# 63 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_ThatWillBe500Please, MSGBOX_DEFAULT
# 64 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	removemoney 500
# 65 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	updatemoneybox
# 66 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_HereAreYourSafariBalls, MSGBOX_DEFAULT
# 67 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 68 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	message Route121_SafariZoneEntrance_Text_Received30SafariBalls
# 69 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitfanfare
# 70 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_PleaseEnjoyYourself, MSGBOX_DEFAULT
# 71 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	closemessage
# 72 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	hidemoneybox
# 73 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Route121_SafariZoneEntrance_Movement_EnterSafariZone
# 74 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special EnterSafariMode
# 75 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_SAFARI_ZONE_STATE, 2
# 76 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	clearflag FLAG_GOOD_LUCK_SAFARI_ZONE
# 77 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	warp MAP_SAFARI_ZONE_SOUTH, 32, 33
# 78 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitstate
# 79 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 80 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 81 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_CheckHasRoomForPokemon::
# 82 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	getpartysize
# 83 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_ne VAR_RESULT, PARTY_SIZE, Route121_SafariZoneEntrance_EventScript_HasRoomForPokemon
# 84 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	specialvar VAR_RESULT, ScriptCheckFreePokemonStorageSpace
# 85 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route121_SafariZoneEntrance_EventScript_HasRoomForPokemon
# 86 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_PCIsFull, MSGBOX_DEFAULT
# 87 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
# 88 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 89 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 90 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_HasRoomForPokemon::
# 91 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	return
# 92 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 93 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_NoPokeblockCase::
# 94 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_YouNeedPokeblockCase, MSGBOX_DEFAULT
# 95 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
# 96 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 97 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 98 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_NotEnoughMoney::
# 99 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_NotEnoughMoney, MSGBOX_DEFAULT
# 100 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
# 101 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 102 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 103 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter::
# 104 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	closemessage
# 105 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	hidemoneybox
# 106 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Route121_SafariZoneEntrance_Movement_BackAwayFromCounter
# 107 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	releaseall
# 108 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
# 109 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 110 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_Movement_BackAwayFromCounter:
# 111 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 112 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	step_end
# 113 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 114 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_Movement_EnterSafariZone:
# 115 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_left
# 116 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_left
# 117 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_left
# 118 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_left
# 119 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_left
# 120 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_left
# 121 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_down
# 122 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	delay_16
# 123 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	step_end
# 124 "data/maps/Route121_SafariZoneEntrance/scripts.pory"

# 125 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_TrainerTipSign::
# 126 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_TrainerTip, MSGBOX_SIGN
# 127 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	end
