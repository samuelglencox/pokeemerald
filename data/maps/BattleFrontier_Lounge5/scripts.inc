# 1 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 2 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_MapScripts::
# 3 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.byte 0
# 4 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 5 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_EventScript_NatureGirl::
# 6 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	lock
# 7 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	faceplayer
# 8 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	msgbox BattleFrontier_Lounge5_Text_NatureGirlGreeting, MSGBOX_YESNO
# 9 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_Lounge5_EventScript_NatureGirlNoneShown
# 10 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	special ChoosePartyMon
# 11 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	lock
# 12 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	faceplayer
# 13 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, BattleFrontier_Lounge5_EventScript_NatureGirlNoneShown
# 14 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 15 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, BattleFrontier_Lounge5_EventScript_NatureGirlEgg
# 16 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	special ShowNatureGirlMessage
# 17 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	waitmessage
# 18 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	waitbuttonpress
# 19 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	release
# 20 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	end
# 21 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 22 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_EventScript_NatureGirlEgg::
# 23 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	msgbox BattleFrontier_Lounge5_Text_NatureGirlEgg, MSGBOX_DEFAULT
# 24 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	release
# 25 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	end
# 26 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 27 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_EventScript_NatureGirlNoneShown::
# 28 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	msgbox BattleFrontier_Lounge5_Text_NatureGirlNoneShown, MSGBOX_DEFAULT
# 29 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	release
# 30 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	end
# 31 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 32 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_EventScript_Gentleman::
# 33 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	msgbox BattleFrontier_Lounge5_Text_LadyClaimsSheUnderstandsPokemon, MSGBOX_NPC
# 34 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	end
# 35 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 36 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_EventScript_BlackBelt::
# 37 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	msgbox BattleFrontier_Lounge5_Text_GirlSayingSomethingProfound, MSGBOX_NPC
# 38 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	end
# 39 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 40 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_EventScript_LittleBoy::
# 41 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	msgbox BattleFrontier_Lounge5_Text_GirlPlaysAtRedHouseALot, MSGBOX_NPC
# 42 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	end
# 43 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 44 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlGreeting::
# 45 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Ehehe!\n"
# 46 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "I can tell what POKéMON are thinking!\p"
# 47 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Please!\n"
# 48 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Can I see your POKéMON?$"
# 49 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 50 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlNoneShown::
# 51 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Boo!\n"
# 52 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Cheapie!$"
# 53 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 54 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlHardy::
# 55 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 56 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "This one says it likes to battle!\n"
# 57 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "It will battle even if it has a lot\l"
# 58 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "of ouchies!$"
# 59 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 60 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlLonely::
# 61 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 62 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "This one says it likes to be sneaky!\n"
# 63 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "But if it gets enough ouchies,\l"
# 64 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "it will hit back!$"
# 65 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 66 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlBrave::
# 67 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 68 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "This one says it likes to battle!\n"
# 69 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "But if it gets enough ouchies,\l"
# 70 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "it will worry about itself!$"
# 71 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 72 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlAdamant::
# 73 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 74 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "This one says it likes to battle!\n"
# 75 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "It will battle even if it has a lot\l"
# 76 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "of ouchies!$"
# 77 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 78 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlNaughty::
# 79 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 80 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "This one says it looks after itself!\n"
# 81 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "But if it gets enough ouchies,\l"
# 82 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "it will hit back!$"
# 83 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 84 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlBold::
# 85 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 86 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "This one says it likes to be sneaky!\n"
# 87 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "But if it gets enough ouchies,\l"
# 88 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "it will worry about itself!$"
# 89 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 90 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlDocileNaiveQuietQuirky::
# 91 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 92 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "This one says it likes to battle!\n"
# 93 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "It will battle even if it has a lot\l"
# 94 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "of ouchies!$"
# 95 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 96 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlRelaxed::
# 97 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 98 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "This one says it likes to be sneaky!\n"
# 99 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "But if it gets enough ouchies,\l"
# 100 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "it will hit back!$"
# 101 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 102 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlImpish::
# 103 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 104 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "This one says it likes to battle!\n"
# 105 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "But if it gets enough ouchies,\l"
# 106 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "it will worry about itself!$"
# 107 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 108 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlLax::
# 109 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 110 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "This one says it likes to be sneaky!\n"
# 111 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "It says it likes to be sneaky even\l"
# 112 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "if it has a lot of ouchies!$"
# 113 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 114 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlTimid::
# 115 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 116 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "This one says it likes to battle!\n"
# 117 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "But if it gets enough ouchies,\l"
# 118 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "it will turn sneaky!$"
# 119 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 120 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlHasty::
# 121 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 122 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "This one says it likes to battle!\n"
# 123 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "It will battle even if it has a lot\l"
# 124 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "of ouchies!$"
# 125 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 126 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlSerious::
# 127 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 128 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "This one says it likes to be sneaky!\n"
# 129 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "It says it likes to be sneaky even\l"
# 130 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "if it has a lot of ouchies!$"
# 131 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 132 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlJolly::
# 133 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 134 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "This one says it likes to be sneaky!\n"
# 135 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "But if it gets enough ouchies,\l"
# 136 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "it will worry about itself!$"
# 137 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 138 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlModest::
# 139 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 140 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "This one says it looks after itself!\n"
# 141 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "It says it worries about itself whether\l"
# 142 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "or not it has a lot of ouchies!$"
# 143 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 144 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlMild::
# 145 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 146 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "This one says it looks after itself!\n"
# 147 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "But if it gets enough ouchies,\l"
# 148 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "it will turn sneaky!$"
# 149 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 150 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlBashful::
# 151 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 152 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "This one says it looks after itself!\n"
# 153 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "It says it worries about itself even\l"
# 154 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "if it has a lot of ouchies!$"
# 155 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 156 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlRash::
# 157 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 158 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "This one says it likes to be sneaky!\n"
# 159 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "It says it likes to be sneaky even\l"
# 160 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "if it has a lot of ouchies!$"
# 161 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 162 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlCalm::
# 163 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 164 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "This one says it looks after itself!\n"
# 165 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "It says it worries about itself even\l"
# 166 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "if it has a lot of ouchies!$"
# 167 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 168 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlGentle::
# 169 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 170 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "This one says it looks after itself!\n"
# 171 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "But if it gets enough ouchies,\l"
# 172 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "it will hit back!$"
# 173 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 174 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlSassy::
# 175 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 176 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "This one says it likes to battle!\n"
# 177 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "But if it gets enough ouchies,\l"
# 178 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "it will turn sneaky!$"
# 179 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 180 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlCareful::
# 181 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 182 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "This one says it looks after itself!\n"
# 183 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "But if it gets enough ouchies,\l"
# 184 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "it will turn sneaky!$"
# 185 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 186 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlEgg::
# 187 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "That's silly! An EGG is asleep!\n"
# 188 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "I can't talk to it!$"
# 189 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 190 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_LadyClaimsSheUnderstandsPokemon::
# 191 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "How charming!\n"
# 192 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "That little lady claims she can\l"
# 193 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "understand POKéMON!$"
# 194 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 195 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_GirlSayingSomethingProfound::
# 196 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "I have this feeling that the little girl\n"
# 197 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "is saying something profound.$"
# 198 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 199 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_GirlPlaysAtRedHouseALot::
# 200 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "I know something!\p"
# 201 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "That little girl plays at the red house\n"
# 202 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "a lot!$"
