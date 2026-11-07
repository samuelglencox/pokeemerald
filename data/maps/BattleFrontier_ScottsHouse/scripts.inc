# 1 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 2 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_MapScripts::
# 3 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.byte 0
# 4 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 5 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_Scott::
# 6 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	lock
# 7 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	faceplayer
# 8 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_set FLAG_TEMP_4, BattleFrontier_ScottsHouse_EventScript_GivenBerry
# 9 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_set FLAG_TEMP_3, BattleFrontier_ScottsHouse_EventScript_GivenShield
# 10 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_set FLAG_TEMP_2, BattleFrontier_ScottsHouse_EventScript_GivenBattlePoints
# 11 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveItems
# 12 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 13 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 14 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveItems::
# 15 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SCOTT_GIVES_BATTLE_POINTS, BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier
# 16 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_COLLECTED_ALL_SILVER_SYMBOLS, BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols
# 17 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_COLLECTED_ALL_GOLD_SYMBOLS, BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols
# 18 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 19 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 20 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 21 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveShield::
# 22 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SILVER_SHIELD, BattleFrontier_ScottsHouse_EventScript_CheckGiveSilverShield
# 23 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_GOLD_SHIELD, BattleFrontier_ScottsHouse_EventScript_CheckGiveGoldShield
# 24 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_RandomComment
# 25 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 26 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 27 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols::
# 28 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_TOWER_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 29 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_DOME_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 30 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_PALACE_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 31 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_ARENA_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 32 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_FACTORY_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 33 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_PIKE_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 34 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_PYRAMID_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 35 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_YouveCollectedAllSilverSymbols, MSGBOX_DEFAULT
# 36 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	giveitem ITEM_LANSAT_BERRY
# 37 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ScottsHouse_EventScript_BerryPocketFull
# 38 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_COLLECTED_ALL_SILVER_SYMBOLS
# 39 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_TEMP_4
# 40 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 41 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 42 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 43 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols::
# 44 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_TOWER_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 45 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_DOME_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 46 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_PALACE_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 47 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_ARENA_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 48 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_FACTORY_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 49 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_PIKE_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 50 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_PYRAMID_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 51 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_YouveCollectedAllGoldSymbols, MSGBOX_DEFAULT
# 52 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	giveitem ITEM_STARF_BERRY
# 53 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ScottsHouse_EventScript_BerryPocketFull
# 54 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_COLLECTED_ALL_GOLD_SYMBOLS
# 55 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_TEMP_4
# 56 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 57 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 58 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 59 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_BerryPocketFull::
# 60 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_BerryPocketStuffed, MSGBOX_DEFAULT
# 61 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 62 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 63 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 64 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_GivenBerry::
# 65 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_SoGladIBroughtYouHere, MSGBOX_DEFAULT
# 66 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 67 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 68 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 69 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_RandomComment::
# 70 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	random 3
# 71 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_ScottsHouse_EventScript_FrontierBrainComment
# 72 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 2, BattleFrontier_ScottsHouse_EventScript_ArtisanCaveComment
# 73 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_WhyIGoSeekingTrainers, MSGBOX_DEFAULT
# 74 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 75 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 76 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 77 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_FrontierBrainComment::
# 78 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_HaveYouMetFrontierBrain, MSGBOX_DEFAULT
# 79 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 80 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 81 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 82 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_ArtisanCaveComment::
# 83 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_MayFindWildMonsInFrontier, MSGBOX_DEFAULT
# 84 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 85 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 86 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 87 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveSilverShield::
# 88 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 89 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 90 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	tower_get TOWER_DATA_WIN_STREAK
# 91 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_ge VAR_RESULT, 50, BattleFrontier_ScottsHouse_EventScript_GiveSilverShield
# 92 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_OPEN
# 93 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	tower_get TOWER_DATA_WIN_STREAK
# 94 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_ge VAR_RESULT, 50, BattleFrontier_ScottsHouse_EventScript_GiveSilverShield
# 95 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_RandomComment
# 96 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 97 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 98 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_GiveSilverShield::
# 99 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_Beat50TrainersInARow, MSGBOX_DEFAULT
# 100 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	givedecoration DECOR_SILVER_SHIELD
# 101 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ScottsHouse_EventScript_NoRoomForShield
# 102 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_RECEIVED_SILVER_SHIELD
# 103 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_TEMP_3
# 104 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GivenShield
# 105 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 106 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 107 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_NoRoomForShield::
# 108 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_ComeBackForThisLater, MSGBOX_DEFAULT
# 109 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 110 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 111 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 112 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_GivenShield::
# 113 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_ExpectingToHearEvenGreaterThings, MSGBOX_DEFAULT
# 114 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 115 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 116 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 117 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveGoldShield::
# 118 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 119 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 120 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	tower_get TOWER_DATA_WIN_STREAK
# 121 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_ge VAR_RESULT, 100, BattleFrontier_ScottsHouse_EventScript_GiveGoldShield
# 122 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_OPEN
# 123 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	tower_get TOWER_DATA_WIN_STREAK
# 124 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_ge VAR_RESULT, 100, BattleFrontier_ScottsHouse_EventScript_GiveGoldShield
# 125 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_RandomComment
# 126 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 127 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 128 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_GiveGoldShield::
# 129 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_Beat100TrainersInARow, MSGBOX_DEFAULT
# 130 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	givedecoration DECOR_GOLD_SHIELD
# 131 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ScottsHouse_EventScript_NoRoomForShield
# 132 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_RECEIVED_GOLD_SHIELD
# 133 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_TEMP_3
# 134 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GivenShield
# 135 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 136 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 137 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_GivenBattlePoints::
# 138 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_ExpectingGreatThings, MSGBOX_DEFAULT
# 139 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 140 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 141 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 142 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier::
# 143 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_WelcomeToBattleFrontier, MSGBOX_DEFAULT
# 144 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	closemessage
# 145 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	delay 30
# 146 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, BattleFrontier_ScottsHouse_EventScript_ScottFaceAwayNorth
# 147 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_ScottsHouse_EventScript_ScottFaceAwaySouth
# 148 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, BattleFrontier_ScottsHouse_EventScript_ScottFaceAwayEast
# 149 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, BattleFrontier_ScottsHouse_EventScript_ScottFaceAwayWest
# 150 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_HowMuchEffortItTookToMakeReal, MSGBOX_DEFAULT
# 151 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	applywaitmovement LOCALID_SCOTTS_HOUSE_SCOTT, Common_Movement_FacePlayer
# 152 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_HaveThisAsMementoOfOurPathsCrossing, MSGBOX_DEFAULT
# 153 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq VAR_SCOTT_STATE, 13, BattleFrontier_ScottsHouse_EventScript_Give4BattlePoints
# 154 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_ge VAR_SCOTT_STATE, 9, BattleFrontier_ScottsHouse_EventScript_Give3BattlePoints
# 155 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_ge VAR_SCOTT_STATE, 6, BattleFrontier_ScottsHouse_EventScript_Give2BattlePoints
# 156 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_Give1BattlePoint
# 157 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 158 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 159 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_Give4BattlePoints::
# 160 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	buffernumberstring STR_VAR_1, 4
# 161 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setvar VAR_0x8004, 4
# 162 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GiveBattlePoints
# 163 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 164 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 165 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_Give3BattlePoints::
# 166 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	buffernumberstring STR_VAR_1, 3
# 167 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setvar VAR_0x8004, 3
# 168 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GiveBattlePoints
# 169 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 170 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 171 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_Give2BattlePoints::
# 172 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	buffernumberstring STR_VAR_1, 2
# 173 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setvar VAR_0x8004, 2
# 174 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GiveBattlePoints
# 175 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 176 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 177 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_Give1BattlePoint::
# 178 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	buffernumberstring STR_VAR_1, 1
# 179 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setvar VAR_0x8004, 1
# 180 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GiveBattlePoints
# 181 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 182 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 183 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_GiveBattlePoints::
# 184 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	special GiveFrontierBattlePoints
# 185 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 186 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_ExplainBattlePoints, MSGBOX_DEFAULT
# 187 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_SCOTT_GIVES_BATTLE_POINTS
# 188 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 189 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 190 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 191 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 192 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_ScottFaceAwayNorth::
# 193 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	applywaitmovement LOCALID_SCOTTS_HOUSE_SCOTT, Common_Movement_WalkInPlaceFasterUp
# 194 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	return
# 195 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 196 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_ScottFaceAwaySouth::
# 197 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	applywaitmovement LOCALID_SCOTTS_HOUSE_SCOTT, Common_Movement_WalkInPlaceFasterDown
# 198 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	return
# 199 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 200 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_ScottFaceAwayEast::
# 201 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	applywaitmovement LOCALID_SCOTTS_HOUSE_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 202 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	return
# 203 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 204 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_ScottFaceAwayWest::
# 205 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	applywaitmovement LOCALID_SCOTTS_HOUSE_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 206 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	return
# 207 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 208 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_WelcomeToBattleFrontier:
# 209 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "SCOTT: Well, hello and welcome!\n"
# 210 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Heheh… Sorry about the cramped space.\p"
# 211 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Anyway, {PLAYER}{KUN}, let me formally\n"
# 212 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "welcome you to the BATTLE FRONTIER.\p"
# 213 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "This is my dream come true.\n"
# 214 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "It took me years and years, but I've\l"
# 215 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "finally given shape to my dream.$"
# 216 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 217 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_HowMuchEffortItTookToMakeReal:
# 218 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "On reflection, it was a terribly long\n"
# 219 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "journey…\p"
# 220 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "I left home alone on a quest to find\n"
# 221 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "strong TRAINERS.\p"
# 222 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "No one can imagine how much effort\n"
# 223 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "or time it took to make this real.$"
# 224 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 225 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_HaveThisAsMementoOfOurPathsCrossing:
# 226 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "But that's all in the past.\n"
# 227 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "No point dwelling on that!\p"
# 228 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "All I want for you is to enjoy battling\n"
# 229 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "to your heart's content here.\p"
# 230 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "{PLAYER}{KUN}, I want you to have this\n"
# 231 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "as a memento for all the time our\l"
# 232 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "paths crossed on our journeys.$"
# 233 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 234 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_ObtainedXBattlePoints:
# 235 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "{PLAYER} obtained\n"
# 236 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "{STR_VAR_1} Battle Point(s).$"
# 237 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 238 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_ExplainBattlePoints:
# 239 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "SCOTT: You can check your Battle\n"
# 240 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Points on your FRONTIER PASS.\p"
# 241 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "The more success you have here at\n"
# 242 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "the BATTLE FRONTIER, the more Battle\l"
# 243 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Points you will collect.\p"
# 244 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Use your Battle Points the way you\n"
# 245 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "see fit, like trading them for items.$"
# 246 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 247 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_ExpectingGreatThings:
# 248 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "I'm expecting great things from you!$"
# 249 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 250 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_WhyIGoSeekingTrainers:
# 251 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "SCOTT: Every TRAINER is an individual.\n"
# 252 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "They all lead lives of their own.\p"
# 253 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "But when they're in a battle,\n"
# 254 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "it doesn't matter who they are.\p"
# 255 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "They're all the same!\p"
# 256 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "I love the purity of battle,\n"
# 257 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "where everyone is equal.\p"
# 258 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "That's why I go everywhere seeking\n"
# 259 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "TRAINERS who are serious about\l"
# 260 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "battling, and invite them here.$"
# 261 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 262 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_HaveYouMetFrontierBrain:
# 263 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "SCOTT: Have you met any of\n"
# 264 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "the FRONTIER BRAINS?\p"
# 265 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Better yet, have you obtained any\n"
# 266 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "symbols from them?\p"
# 267 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "I handpicked the FRONTIER BRAINS\n"
# 268 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "as the toughest TRAINERS anywhere.\p"
# 269 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "But I'm sure that seeing how tough\n"
# 270 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "you are will startle even them!$"
# 271 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 272 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_MayFindWildMonsInFrontier:
# 273 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "SCOTT: You don't just train for battle,\n"
# 274 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "right?\p"
# 275 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "I think I remember you working on\n"
# 276 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "a POKéDEX as well.\p"
# 277 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Well, guess what?\p"
# 278 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "You may run into wild POKéMON in\n"
# 279 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "the BATTLE FRONTIER somewhere…\l"
# 280 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Fufufu!$"
# 281 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 282 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_YouveCollectedAllSilverSymbols:
# 283 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "SCOTT: Are you enjoying things in\n"
# 284 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "the BATTLE FRONTIER?\p"
# 285 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "…Wait a second…\n"
# 286 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Oh!\p"
# 287 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Your FRONTIER PASS!\n"
# 288 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "You've collected the full set\l"
# 289 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "of silver symbols!\p"
# 290 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "That's more than impressive!\n"
# 291 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "You are tough, just as I suspected!\p"
# 292 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Normally, I wouldn't do something\n"
# 293 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "like this, but this is a special time!\p"
# 294 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "I want you to have this.\n"
# 295 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "I'm sure you can put it to proper use.$"
# 296 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 297 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_YouveCollectedAllGoldSymbols:
# 298 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "SCOTT: I hope you're enjoying\n"
# 299 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "everything in the BATTLE FRONTIER.\p"
# 300 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "…Wait a second…\n"
# 301 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Oh, my disbelieving eyes!\p"
# 302 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Your FRONTIER PASS!\n"
# 303 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "You've gathered up the full set\l"
# 304 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "of gold symbols!\p"
# 305 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "That's more than stupendous!\n"
# 306 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "You're incredible, just as I suspected!\p"
# 307 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "… … … … … …\p"
# 308 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "{PLAYER}, you've got to accept this!\p"
# 309 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "I think you will be able to\n"
# 310 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "appreciate the value of my gift!$"
# 311 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 312 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_SoGladIBroughtYouHere:
# 313 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "I must say I have the gift of knowing\n"
# 314 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "a good TRAINER when I see one.\p"
# 315 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "I'm so glad I had the foresight to\n"
# 316 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "bring you here!$"
# 317 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 318 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_BerryPocketStuffed:
# 319 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Your BERRY POCKET seems to\n"
# 320 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "be stuffed.$"
# 321 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 322 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_Beat50TrainersInARow:
# 323 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "SCOTT: Oh, I heard about you!\n"
# 324 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "How you ruled the BATTLE TOWER!\l"
# 325 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "You beat over 50 TRAINERS in a row?\p"
# 326 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "That's fantastic!\n"
# 327 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "I want you to have this!$"
# 328 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 329 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_Beat100TrainersInARow:
# 330 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "SCOTT: Oh, my! I heard about you!\n"
# 331 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "How you overwhelmed the BATTLE TOWER!\l"
# 332 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "You beat over 100 TRAINERS in a row?\p"
# 333 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "That's ridiculously spectacular!\n"
# 334 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "You've got to have this!$"
# 335 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 336 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_ExpectingToHearEvenGreaterThings:
# 337 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "I'll be expecting to hear even greater\n"
# 338 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "things about you now!$"
# 339 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 340 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_ComeBackForThisLater:
# 341 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Oops, well, if you have too much\n"
# 342 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "stuff, come back for this later.$"
