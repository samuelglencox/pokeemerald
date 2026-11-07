# 1 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 2 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_MapScripts::
# 3 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 5 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_Greeter::
# 6 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_WelcomeToDeptStore, MSGBOX_NPC
# 7 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 8 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 9 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk::
# 10 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	lock
# 11 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	faceplayer
# 12 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	dotimebasedevents
# 13 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto_if_ne VAR_POKELOT_PRIZE_ITEM, ITEM_NONE, LilycoveCity_DepartmentStore_1F_EventScript_GivePrizeFromEarlier
# 14 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto_if_set FLAG_DAILY_PICKED_LOTO_TICKET, LilycoveCity_DepartmentStore_1F_EventScript_ComeBackTomorrow
# 15 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_LotteryCornerDrawTicket, MSGBOX_YESNO
# 16 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_DepartmentStore_1F_EventScript_PleaseVisitAgain
# 17 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	setflag FLAG_DAILY_PICKED_LOTO_TICKET
# 18 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	message LilycoveCity_DepartmentStore_1F_Text_PleasePickTicket
# 19 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	waitmessage
# 20 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	special RetrieveLotteryNumber
# 21 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 22 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	special BufferLottoTicketNumber
# 23 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_TicketNumberIsXPleaseWait, MSGBOX_DEFAULT
# 24 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	applywaitmovement LOCALID_LOTTERY_CLERK, Common_Movement_WalkInPlaceFasterRight
# 25 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	playse SE_PC_ON
# 26 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	special DoLotteryCornerComputerEffect
# 27 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	special PickLotteryCornerTicket
# 28 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	delay 220
# 29 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	special EndLotteryCornerComputerEffect
# 30 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	delay 10
# 31 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	applywaitmovement LOCALID_LOTTERY_CLERK, Common_Movement_FacePlayer
# 32 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto_if_eq VAR_0x8004, 0, LilycoveCity_DepartmentStore_1F_EventScript_NoMatch
# 33 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	incrementgamestat GAME_STAT_WON_POKEMON_LOTTERY
# 34 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	call_if_eq VAR_0x8006, 0, LilycoveCity_DepartmentStore_1F_EventScript_TicketMatchPartyMon
# 35 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	call_if_eq VAR_0x8006, 1, LilycoveCity_DepartmentStore_1F_EventScript_TicketMatchPCMon
# 36 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8005
# 37 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	call_if_eq VAR_0x8004, 1, LilycoveCity_DepartmentStore_1F_EventScript_TwoDigitMatch
# 38 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	call_if_eq VAR_0x8004, 2, LilycoveCity_DepartmentStore_1F_EventScript_ThreeDigitMatch
# 39 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	call_if_eq VAR_0x8004, 3, LilycoveCity_DepartmentStore_1F_EventScript_FourDigitMatch
# 40 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	call_if_eq VAR_0x8004, 4, LilycoveCity_DepartmentStore_1F_EventScript_FullMatch
# 41 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	giveitem VAR_0x8005
# 42 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, LilycoveCity_DepartmentStore_1F_EventScript_RecordPrizeNoRoom
# 43 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	special TryPutLotteryWinnerReportOnAir
# 44 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto LilycoveCity_DepartmentStore_1F_EventScript_PleaseVisitAgain2
# 45 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 46 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 47 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_TicketMatchPartyMon::
# 48 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_TicketMatchesPartyMon, MSGBOX_DEFAULT
# 49 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	return
# 50 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 51 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_TicketMatchPCMon::
# 52 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_TicketMatchesPCMon, MSGBOX_DEFAULT
# 53 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	return
# 54 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 55 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_ComeBackTomorrow::
# 56 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_ComeBackTomorrow, MSGBOX_DEFAULT
# 57 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	release
# 58 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 59 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 60 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_PleaseVisitAgain::
# 61 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_PleaseVisitAgain, MSGBOX_DEFAULT
# 62 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	release
# 63 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 64 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 65 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_NoMatch::
# 66 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_NoNumbersMatched, MSGBOX_DEFAULT
# 67 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto LilycoveCity_DepartmentStore_1F_EventScript_PleaseVisitAgain2
# 68 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 69 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 70 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_PleaseVisitAgain2::
# 71 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_PleaseVisitAgain2, MSGBOX_DEFAULT
# 72 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	release
# 73 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 74 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 75 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_TwoDigitMatch::
# 76 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_TwoDigitsMatched, MSGBOX_DEFAULT
# 77 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	return
# 78 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 79 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_ThreeDigitMatch::
# 80 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_ThreeDigitsMatched, MSGBOX_DEFAULT
# 81 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	return
# 82 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 83 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_FourDigitMatch::
# 84 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_FourDigitsMatched, MSGBOX_DEFAULT
# 85 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	return
# 86 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 87 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_FullMatch::
# 88 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_AllFiveDigitsMatched, MSGBOX_DEFAULT
# 89 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	return
# 90 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 91 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_RecordPrizeNoRoom::
# 92 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	copyvar VAR_POKELOT_PRIZE_PLACE, VAR_0x8004
# 93 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	copyvar VAR_POKELOT_PRIZE_ITEM, VAR_0x8005
# 94 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto LilycoveCity_DepartmentStore_1F_EventScript_NoRoomForPrize
# 95 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 96 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 97 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_NoRoomForPrize::
# 98 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_NoRoomForThis, MSGBOX_DEFAULT
# 99 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	release
# 100 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 101 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 102 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_GivePrizeFromEarlier::
# 103 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_PrizeWeveBeenHolding, MSGBOX_DEFAULT
# 104 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	giveitem VAR_POKELOT_PRIZE_ITEM
# 105 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, LilycoveCity_DepartmentStore_1F_EventScript_NoRoomForPrize
# 106 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	copyvar VAR_0x8004, VAR_POKELOT_PRIZE_PLACE
# 107 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	copyvar VAR_0x8005, VAR_POKELOT_PRIZE_ITEM
# 108 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	special TryPutLotteryWinnerReportOnAir
# 109 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	setvar VAR_POKELOT_PRIZE_ITEM, ITEM_NONE
# 110 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	setvar VAR_POKELOT_PRIZE_PLACE, 0
# 111 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	release
# 112 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 113 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 114 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_PokefanF::
# 115 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_IBuyAllSortsOfThings, MSGBOX_NPC
# 116 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 117 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 118 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_LittleGirl::
# 119 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_MomBuyingMeFurniture, MSGBOX_NPC
# 120 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 121 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 122 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_PokefanM::
# 123 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_BuyingSomethingForAzumarill, MSGBOX_NPC
# 124 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 125 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 126 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_Azumarill::
# 127 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	lock
# 128 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	faceplayer
# 129 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	waitse
# 130 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 131 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_Azumarill, MSGBOX_DEFAULT
# 132 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	waitmoncry
# 133 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	release
# 134 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 135 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 136 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_FloorNamesSign::
# 137 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_FloorNamesSign, MSGBOX_SIGN
# 138 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 139 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 140 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_Text_WelcomeToDeptStore:
# 141 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "Welcome to LILYCOVE DEPARTMENT STORE.$"
# 142 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 143 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_Text_IBuyAllSortsOfThings:
# 144 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "Whenever I come to the DEPARTMENT\n"
# 145 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "STORE, I always end up buying all sorts\l"
# 146 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "of things because it's so fun.$"
# 147 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 148 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_Text_MomBuyingMeFurniture:
# 149 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "Today, my mom is going to buy me some\n"
# 150 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "nice furniture.$"
# 151 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 152 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_Text_BuyingSomethingForAzumarill:
# 153 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "I'm buying something for my AZUMARILL\n"
# 154 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "as a reward for winning a CONTEST.$"
# 155 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 156 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_Text_Azumarill:
# 157 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "AZUMARILL: Maririroo!$"
# 158 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 159 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_Text_FloorNamesSign:
# 160 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "1F: SERVICE COUNTER\n"
# 161 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "    LOTTERY CORNER\p"
# 162 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "2F: TRAINER'S ZONE\p"
# 163 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "3F: BATTLE COLLECTION\p"
# 164 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "4F: TM CORNER\p"
# 165 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "5F: POKé DOLL FLOOR\p"
# 166 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "ROOFTOP: ROOFTOP PLAZA$"
# 167 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 168 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
@ Unused
# 169 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_Text_WirelessCommIsFun:
# 170 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "Wireless Communication is a\n"
# 171 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "lot of fun, isn't it?\p"
# 172 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "I think it lets you do things that\n"
# 173 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "weren't possible before.\p"
# 174 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "For instance, you can now trade\n"
# 175 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "with people you couldn't before.\p"
# 176 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "I think it's going to be exciting!$"
# 177 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 178 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
@ Unused
# 179 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_Text_SpreadWordAboutWirelessComm:
# 180 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "I want to spread the word about how\n"
# 181 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "fun Wireless Communication can be.$"
