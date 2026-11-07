# 1 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 2 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_MapScripts::
# 3 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.byte 0
# 4 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 5 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.set BET_AMOUNT_5,  5
# 6 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.set BET_AMOUNT_10, 10
# 7 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.set BET_AMOUNT_15, 15
# 8 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 9 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_Gambler::
# 10 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	lock
# 11 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	faceplayer
# 12 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_set FLAG_MET_BATTLE_FRONTIER_GAMBLER, BattleFrontier_Lounge3_EventScript_AlreadyMetGambler
# 13 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call BattleFrontier_Lounge3_EventScript_CountSilverSymbols
# 14 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_le VAR_0x8004, 2, BattleFrontier_Lounge3_EventScript_NotEnoughSilverSymbols
# 15 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setflag FLAG_MET_BATTLE_FRONTIER_GAMBLER
# 16 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_YouLookToughExplainGambling, MSGBOX_DEFAULT
# 17 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_AskToEnterChallenge
# 18 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 19 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 20 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_AskToEnterChallenge::
# 21 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special ShowFrontierGamblerLookingMessage
# 22 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitmessage
# 23 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitbuttonpress
# 24 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_HowAboutEnteringEventForMe, MSGBOX_YESNO
# 25 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_Lounge3_EventScript_DeclineChallenge
# 26 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_SpotMeSomeBattlePoints, MSGBOX_YESNO
# 27 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_Lounge3_EventScript_DeclineChallenge
# 28 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	message BattleFrontier_Lounge3_Text_HowMuchCanYouSpot
# 29 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitmessage
# 30 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special ShowBattlePointsWindow
# 31 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_ChooseBetAmount
# 32 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 33 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 34 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_ChooseBetAmount::
# 35 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	multichoice 20, 4, MULTI_FRONTIER_GAMBLER_BET, FALSE
# 36 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	copyvar VAR_FRONTIER_GAMBLER_AMOUNT_BET, VAR_RESULT
# 37 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	switch VAR_RESULT
# 38 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case FRONTIER_GAMBLER_BET_5, BattleFrontier_Lounge3_EventScript_Bet5
# 39 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case FRONTIER_GAMBLER_BET_10, BattleFrontier_Lounge3_EventScript_Bet10
# 40 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case FRONTIER_GAMBLER_BET_15, BattleFrontier_Lounge3_EventScript_Bet15
# 41 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case FRONTIER_GAMBLER_BET_CANCEL, BattleFrontier_Lounge3_EventScript_CancelBet
# 42 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_Lounge3_EventScript_CancelBet
# 43 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 44 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 45 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_Bet5::
# 46 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8008, BET_AMOUNT_5
# 47 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_TryPlaceBet
# 48 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 49 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 50 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_Bet10::
# 51 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8008, BET_AMOUNT_10
# 52 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_TryPlaceBet
# 53 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 54 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 55 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_Bet15::
# 56 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8008, BET_AMOUNT_15
# 57 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_TryPlaceBet
# 58 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 59 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 60 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_TryPlaceBet::
# 61 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 62 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_ge VAR_TEMP_1, VAR_0x8008, BattleFrontier_Lounge3_EventScript_PlaceBet
# 63 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_YouDontHaveEnoughPoints, MSGBOX_DEFAULT
# 64 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	message BattleFrontier_Lounge3_Text_HowMuchCanYouSpot
# 65 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitmessage
# 66 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_ChooseBetAmount
# 67 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 68 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 69 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_PlaceBet::
# 70 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 71 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special TakeFrontierBattlePoints
# 72 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_PLACED_BET
# 73 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special UpdateBattlePointsWindow
# 74 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	playse SE_SHOP
# 75 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_ThanksOffYouGo, MSGBOX_DEFAULT
# 76 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_FinishBet
# 77 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 78 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 79 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_FinishBet::
# 80 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special ShowFrontierGamblerGoMessage
# 81 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitmessage
# 82 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitbuttonpress
# 83 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special CloseBattlePointsWindow
# 84 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	release
# 85 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 86 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 87 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_CountSilverSymbols::
# 88 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8004, 0
# 89 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call_if_set FLAG_SYS_TOWER_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
# 90 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call_if_set FLAG_SYS_DOME_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
# 91 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call_if_set FLAG_SYS_PALACE_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
# 92 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call_if_set FLAG_SYS_ARENA_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
# 93 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call_if_set FLAG_SYS_FACTORY_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
# 94 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call_if_set FLAG_SYS_PIKE_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
# 95 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call_if_set FLAG_SYS_PYRAMID_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
# 96 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	return
# 97 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 98 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount::
# 99 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	addvar VAR_0x8004, 1
# 100 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	return
# 101 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 102 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_NotEnoughSilverSymbols::
# 103 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_CantYouSeeWereBusyHere, MSGBOX_DEFAULT
# 104 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_FaceOriginalDirection
# 105 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 106 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 107 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_AlreadyMetGambler::
# 108 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_Oh, MSGBOX_DEFAULT
# 109 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_ge VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_PLACED_BET, BattleFrontier_Lounge3_EventScript_CheckBetResults
# 110 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_AskToEnterChallenge
# 111 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 112 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 113 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_CheckBetResults::
# 114 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_eq VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_PLACED_BET, BattleFrontier_Lounge3_EventScript_ChallengeNotAttempted
# 115 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_eq VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_WON, BattleFrontier_Lounge3_EventScript_WonChallenge
# 116 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_LostChallenge
# 117 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 118 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 119 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_WonChallenge::
# 120 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_HelloChampHeresYourPoints, MSGBOX_DEFAULT
# 121 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call_if_eq VAR_FRONTIER_GAMBLER_AMOUNT_BET, FRONTIER_GAMBLER_BET_5, BattleFrontier_Lounge3_EventScript_RewardBet5
# 122 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call_if_eq VAR_FRONTIER_GAMBLER_AMOUNT_BET, FRONTIER_GAMBLER_BET_10, BattleFrontier_Lounge3_EventScript_RewardBet10
# 123 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call_if_eq VAR_FRONTIER_GAMBLER_AMOUNT_BET, FRONTIER_GAMBLER_BET_15, BattleFrontier_Lounge3_EventScript_RewardBet15
# 124 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_ObtainedBattlePoints, MSGBOX_GETPOINTS
# 125 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special GiveFrontierBattlePoints
# 126 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_ThinkOfMeForAnotherChallenge, MSGBOX_DEFAULT
# 127 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_WAITING
# 128 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	release
# 129 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 130 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 131 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_LostChallenge::
# 132 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_NiceTryCantReturnPoints, MSGBOX_DEFAULT
# 133 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_WAITING
# 134 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	release
# 135 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 136 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 137 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_RewardBet5::
# 138 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	buffernumberstring STR_VAR_1, (BET_AMOUNT_5 * 2)
# 139 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8004, (BET_AMOUNT_5 * 2)
# 140 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	return
# 141 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 142 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_RewardBet10::
# 143 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	buffernumberstring STR_VAR_1, (BET_AMOUNT_10 * 2)
# 144 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8004, (BET_AMOUNT_10 * 2)
# 145 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	return
# 146 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 147 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_RewardBet15::
# 148 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	buffernumberstring STR_VAR_1, (BET_AMOUNT_15 * 2)
# 149 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8004, (BET_AMOUNT_15 * 2)
# 150 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	return
# 151 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 152 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_ChallengeNotAttempted::
# 153 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special ShowFrontierGamblerGoMessage
# 154 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitmessage
# 155 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitbuttonpress
# 156 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	release
# 157 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 158 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 159 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_DeclineChallenge::
# 160 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_NotInterested, MSGBOX_DEFAULT
# 161 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	release
# 162 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 163 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 164 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_CancelBet::
# 165 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special CloseBattlePointsWindow
# 166 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_DeclineChallenge
# 167 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 168 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 169 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_Man::
# 170 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_ShouldBeTakingChallenges, MSGBOX_NPC
# 171 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 172 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 173 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_Woman::
# 174 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	lock
# 175 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	faceplayer
# 176 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_BackedWrongTrainer, MSGBOX_DEFAULT
# 177 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_FaceOriginalDirection
# 178 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 179 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 180 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_PokefanF::
# 181 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	lock
# 182 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	faceplayer
# 183 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_KnowWinnerWhenISeeOne, MSGBOX_DEFAULT
# 184 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_FaceOriginalDirection
# 185 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 186 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 187 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_FatMan::
# 188 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	lock
# 189 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	faceplayer
# 190 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_TrainerGoodButRattled, MSGBOX_DEFAULT
# 191 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_FaceOriginalDirection
# 192 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 193 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 194 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_FaceOriginalDirection::
# 195 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	closemessage
# 196 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	applywaitmovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 197 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	release
# 198 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 199 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 200 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_CantYouSeeWereBusyHere::
# 201 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "…What's that you want?\p"
# 202 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Can't you see we're kind of busy here?\n"
# 203 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Can't your business wait till later?$"
# 204 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 205 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_YouLookToughExplainGambling::
# 206 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "…Huh?\n"
# 207 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "You look to me like a tough TRAINER.\p"
# 208 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Heheh…\n"
# 209 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Listen, I have this proposition.\p"
# 210 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "We have a little group going here,\n"
# 211 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "and we play a little game with what\l"
# 212 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "goes on in the BATTLE FRONTIER.\p"
# 213 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "The rules are really simple.\p"
# 214 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "First, we pick one of the facilities\n"
# 215 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "in the BATTLE FRONTIER.\p"
# 216 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Then, we each pick a different TRAINER\n"
# 217 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "who's taking that facility's challenge,\l"
# 218 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "and bet with our Battle Points.\p"
# 219 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "The guy who bet on the TRAINER with\n"
# 220 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "the best record takes all the Battle\l"
# 221 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Points in the pool.\p"
# 222 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Sounds simple, huh?\n"
# 223 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "So, anyway…$"
# 224 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 225 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattleTowerSingle::
# 226 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
# 227 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "going to be challenging the BATTLE\l"
# 228 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "TOWER's SINGLE BATTLE ROOMS.\p"
# 229 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "But so far, I haven't seen a TRAINER\n"
# 230 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "that has that winning quality.$"
# 231 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 232 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattleTowerDouble::
# 233 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
# 234 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "going to be challenging the BATTLE\l"
# 235 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "TOWER's DOUBLE BATTLE ROOMS.\p"
# 236 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "But so far, I haven't seen a TRAINER\n"
# 237 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "that has that winning quality.$"
# 238 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 239 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattleTowerMulti::
# 240 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
# 241 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "going to be challenging the BATTLE\l"
# 242 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "TOWER's MULTI BATTLE ROOMS.\p"
# 243 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "But so far, I haven't seen a TRAINER\n"
# 244 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "that has that winning quality.$"
# 245 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 246 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattleDomeSingle::
# 247 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
# 248 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "going to be entering the BATTLE\l"
# 249 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "DOME's SINGLE BATTLE Tourney.\p"
# 250 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "But so far, I haven't seen a TRAINER\n"
# 251 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "that has that winning quality.$"
# 252 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 253 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattleDomeDouble::
# 254 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
# 255 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "going to be entering the BATTLE\l"
# 256 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "DOME's DOUBLE BATTLE Tourney.\p"
# 257 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "But so far, I haven't seen a TRAINER\n"
# 258 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "that has that winning quality.$"
# 259 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 260 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattleFactorySingle::
# 261 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
# 262 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "going to be entering the BATTLE\l"
# 263 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "FACTORY's Battle Swap Single Tourney.\p"
# 264 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "But so far, I haven't seen a TRAINER\n"
# 265 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "that has that winning quality.$"
# 266 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 267 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattleFactoryDouble::
# 268 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
# 269 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "going to be entering the BATTLE\l"
# 270 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "FACTORY's Battle Swap Double Tourney.\p"
# 271 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "But so far, I haven't seen a TRAINER\n"
# 272 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "that has that winning quality.$"
# 273 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 274 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattlePalaceSingle::
# 275 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
# 276 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "going to be challenging the BATTLE\l"
# 277 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "PALACE's SINGLE BATTLE HALLS.\p"
# 278 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "But so far, I haven't seen a TRAINER\n"
# 279 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "that has that winning quality.$"
# 280 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 281 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattlePalaceDouble::
# 282 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
# 283 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "going to be challenging the BATTLE\l"
# 284 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "PALACE's DOUBLE BATTLE HALLS.\p"
# 285 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "But so far, I haven't seen a TRAINER\n"
# 286 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "that has that winning quality.$"
# 287 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 288 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattleArena::
# 289 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
# 290 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "going to be entering the BATTLE\l"
# 291 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "ARENA's Set KO Tourney.\p"
# 292 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "But so far, I haven't seen a TRAINER\n"
# 293 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "that has that winning quality.$"
# 294 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 295 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattlePike::
# 296 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
# 297 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "going to be entering the BATTLE PIKE's\l"
# 298 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Battle Choice.\p"
# 299 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "But so far, I haven't seen a TRAINER\n"
# 300 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "that has that winning quality.$"
# 301 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 302 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattlePyramid::
# 303 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
# 304 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "going to be entering the BATTLE\l"
# 305 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "PYRAMID's Battle Quest.\p"
# 306 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "But so far, I haven't seen a TRAINER\n"
# 307 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "that has that winning quality.$"
# 308 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 309 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_HowAboutEnteringEventForMe::
# 310 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "I'll see to it that you benefit, too.\n"
# 311 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "So how about it?\l"
# 312 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "How about entering that event for me?$"
# 313 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 314 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_SpotMeSomeBattlePoints::
# 315 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "All right, that's perfect.\n"
# 316 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "So, uh… How about spotting me some\l"
# 317 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "of your Battle Points?\p"
# 318 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Trust me, I'll show you my gratitude\n"
# 319 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "afterward.$"
# 320 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 321 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_HowMuchCanYouSpot::
# 322 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Great, great!\n"
# 323 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "So, how much can you spot me?$"
# 324 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 325 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_YouDontHaveEnoughPoints::
# 326 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Oh, no, no, no!\n"
# 327 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "You don't have enough Battle Points!\p"
# 328 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "I wish you wouldn't monkey around and\n"
# 329 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "waste everyone's time!$"
# 330 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 331 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ThanksOffYouGo::
# 332 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Heheh! Thanks much!\n"
# 333 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "So, off you go!$"
# 334 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 335 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattleTowerSingle::
# 336 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE TOWER's\n"
# 337 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "SINGLE BATTLE ROOMS pronto!\p"
# 338 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "It's a must-win situation!\n"
# 339 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Don't blow your chance!\l"
# 340 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Both of our futures depend on you!$"
# 341 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 342 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattleTowerDouble::
# 343 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE TOWER's\n"
# 344 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "DOUBLE BATTLE ROOMS pronto!\p"
# 345 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "It's a must-win situation!\n"
# 346 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Don't blow your chance!\l"
# 347 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Both of our futures depend on you!$"
# 348 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 349 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattleTowerMulti::
# 350 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE TOWER's\n"
# 351 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "MULTI BATTLE ROOMS pronto!\p"
# 352 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "It's a must-win situation!\n"
# 353 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Don't blow your chance!\l"
# 354 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Both of our futures depend on you!$"
# 355 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 356 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattleDomeSingle::
# 357 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE DOME's\n"
# 358 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "SINGLE BATTLE Tourney pronto!\p"
# 359 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "It's a must-win situation!\n"
# 360 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Don't blow your chance!\l"
# 361 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Both of our futures depend on you!$"
# 362 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 363 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattleDomeDouble::
# 364 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE DOME's\n"
# 365 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "DOUBLE BATTLE Tourney pronto!\p"
# 366 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "It's a must-win situation!\n"
# 367 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Don't blow your chance!\l"
# 368 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Both of our futures depend on you!$"
# 369 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 370 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattleFactorySingle::
# 371 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE FACTORY's\n"
# 372 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Battle Swap Single Tourney pronto!\p"
# 373 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "It's a must-win situation!\n"
# 374 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Don't blow your chance!\l"
# 375 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Both of our futures depend on you!$"
# 376 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 377 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattleFactoryDouble::
# 378 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE FACTORY's\n"
# 379 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Battle Swap Double Tourney pronto!\p"
# 380 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "It's a must-win situation!\n"
# 381 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Don't blow your chance!\l"
# 382 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Both of our futures depend on you!$"
# 383 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 384 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattlePalaceSingle::
# 385 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE PALACE's\n"
# 386 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "SINGLE BATTLE HALLS pronto!\p"
# 387 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "It's a must-win situation!\n"
# 388 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Don't blow your chance!\l"
# 389 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Both of our futures depend on you!$"
# 390 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 391 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattlePalaceDouble::
# 392 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE PALACE's\n"
# 393 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "DOUBLE BATTLE HALLS pronto!\p"
# 394 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "It's a must-win situation!\n"
# 395 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Don't blow your chance!\l"
# 396 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Both of our futures depend on you!$"
# 397 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 398 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattleArena::
# 399 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE ARENA's\n"
# 400 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Set KO Tourney pronto!\p"
# 401 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "It's a must-win situation!\n"
# 402 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Don't blow your chance!\l"
# 403 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Both of our futures depend on you!$"
# 404 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 405 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattlePike::
# 406 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE PIKE's\n"
# 407 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Battle Choice pronto!\p"
# 408 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "It's a must-win situation!\n"
# 409 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Don't blow your chance!\l"
# 410 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Both of our futures depend on you!$"
# 411 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 412 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattlePyramid::
# 413 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE PYRAMID's\n"
# 414 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Battle Quest pronto!\p"
# 415 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "It's a must-win situation!\n"
# 416 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Don't blow your chance!\l"
# 417 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Both of our futures depend on you!$"
# 418 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 419 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_NiceTryCantReturnPoints::
# 420 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Oh, it's you…\n"
# 421 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Nice try…\p"
# 422 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "I hate to break it to you, but I can't\n"
# 423 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "return your Battle Points…\p"
# 424 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "I guess we'll have to let it motivate\n"
# 425 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "us to try harder next time!$"
# 426 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 427 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_HelloChampHeresYourPoints::
# 428 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Oh, yes!\n"
# 429 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Hello there, champ!\p"
# 430 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "I knew you could!\n"
# 431 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "I knew you would!\l"
# 432 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "We're both big winners!\p"
# 433 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "I'll return your Battle Points and,\n"
# 434 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "of course, a little extra from me!$"
# 435 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 436 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ObtainedBattlePoints::
# 437 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "{PLAYER} obtained\n"
# 438 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "{STR_VAR_1} Battle Points.$"
# 439 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 440 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ThinkOfMeForAnotherChallenge::
# 441 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "If you're up for another challenge,\n"
# 442 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "please do think of me!$"
# 443 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 444 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_NotInterested::
# 445 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Not interested?! You shouldn't be\n"
# 446 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "so afraid to take a chance!$"
# 447 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 448 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_Oh::
# 449 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Oh…$"
# 450 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 451 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_BackedWrongTrainer::
# 452 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "I backed the wrong TRAINER again!\p"
# 453 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Maybe I should be battling normally\n"
# 454 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "like everyone else…$"
# 455 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 456 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_TrainerGoodButRattled::
# 457 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "That TRAINER…\p"
# 458 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "He's good, but he gets rattled too\n"
# 459 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "easily to survive the BATTLE DOME…$"
# 460 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 461 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_KnowWinnerWhenISeeOne::
# 462 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Giggle!\n"
# 463 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "I know a winner when I see one!$"
# 464 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 465 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ShouldBeTakingChallenges::
# 466 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Those TRAINERS…\n"
# 467 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What are they doing?\l"
# 468 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "They should be taking challenges.$"
