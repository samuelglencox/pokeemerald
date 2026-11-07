# 1 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 2 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_MapScripts::
# 3 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.byte 0
# 4 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 5 "data/maps/BattleFrontier_Lounge1/scripts.pory"
@ NPC that rates pokemon based on their IVs
# 6 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_Breeder::
# 7 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	lock
# 8 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	faceplayer
# 9 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	call_if_unset FLAG_MET_BATTLE_FRONTIER_BREEDER, BattleFrontier_Lounge1_EventScript_BreederIntro
# 10 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	call_if_set FLAG_MET_BATTLE_FRONTIER_BREEDER, BattleFrontier_Lounge1_EventScript_AlreadyMetBreeder
# 11 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	setflag FLAG_MET_BATTLE_FRONTIER_BREEDER
# 12 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder
# 13 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 14 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 15 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder::
# 16 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	special ChoosePartyMon
# 17 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_ne VAR_0x8004, PARTY_NOTHING_CHOSEN, BattleFrontier_Lounge1_EventScript_ShowMonToBreeder
# 18 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, BattleFrontier_Lounge1_EventScript_CancelMonSelect
# 19 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 20 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 21 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_BreederIntro::
# 22 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_PokemonBreederIntro, MSGBOX_DEFAULT
# 23 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	return
# 24 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 25 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_AlreadyMetBreeder::
# 26 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_LetsLookAtYourPokemon, MSGBOX_DEFAULT
# 27 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	return
# 28 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 29 "data/maps/BattleFrontier_Lounge1/scripts.pory"
@ BufferVarsForIVRater buffers the following values
# 30 "data/maps/BattleFrontier_Lounge1/scripts.pory"
@ VAR_0x8005: Sum of the mons IVs
# 31 "data/maps/BattleFrontier_Lounge1/scripts.pory"
@ VAR_0x8006: Stat id of highest IV stat
# 32 "data/maps/BattleFrontier_Lounge1/scripts.pory"
@ VAR_0x8007: IV of the highest IV stat
# 33 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_ShowMonToBreeder::
# 34 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 35 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, BattleFrontier_Lounge1_EventScript_ShowEggToBreeder
# 36 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	special BufferVarsForIVRater
# 37 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_le VAR_0x8005, 90, BattleFrontier_Lounge1_EventScript_AverageTotalIVs       @ Average of 15
# 38 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_le VAR_0x8005, 120, BattleFrontier_Lounge1_EventScript_AboveAverageTotalIVs @ Average of 20
# 39 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_le VAR_0x8005, 150, BattleFrontier_Lounge1_EventScript_HighTotalIVs         @ Average of 25
# 40 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_ge VAR_0x8005, 151, BattleFrontier_Lounge1_EventScript_VeryHighTotalIVs     @ Average of > 25
# 41 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 42 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 43 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_ShowEggToBreeder::
# 44 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_EvenICantTell, MSGBOX_DEFAULT
# 45 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder
# 46 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 47 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 48 "data/maps/BattleFrontier_Lounge1/scripts.pory"
@ Comment on the highest IV stat
# 49 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVStat::
# 50 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_eq VAR_0x8006, STAT_HP, BattleFrontier_Lounge1_EventScript_HighestIVHP
# 51 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_eq VAR_0x8006, STAT_ATK, BattleFrontier_Lounge1_EventScript_HighestIVAtk
# 52 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_eq VAR_0x8006, STAT_DEF, BattleFrontier_Lounge1_EventScript_HighestIVDef
# 53 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_eq VAR_0x8006, STAT_SPEED, BattleFrontier_Lounge1_EventScript_HighestIVSpeed
# 54 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_eq VAR_0x8006, STAT_SPATK, BattleFrontier_Lounge1_EventScript_HighestIVSpAtk
# 55 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_eq VAR_0x8006, STAT_SPDEF, BattleFrontier_Lounge1_EventScript_HighestIVSpDef
# 56 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 57 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 58 "data/maps/BattleFrontier_Lounge1/scripts.pory"
@ Comment on the highest IV value
# 59 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVValue::
# 60 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_le VAR_0x8007, 15, BattleFrontier_Lounge1_EventScript_HighestIVLow
# 61 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_le VAR_0x8007, 25, BattleFrontier_Lounge1_EventScript_HighestIVMid
# 62 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_le VAR_0x8007, 30, BattleFrontier_Lounge1_EventScript_HighestIVHigh
# 63 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_ge VAR_0x8007, 31, BattleFrontier_Lounge1_EventScript_HighestIVMax
# 64 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 65 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 66 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_EndBreederComments::
# 67 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	release
# 68 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 69 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 70 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_AverageTotalIVs::
# 71 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_AverageAbility, MSGBOX_DEFAULT
# 72 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat
# 73 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 74 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 75 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_AboveAverageTotalIVs::
# 76 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_BetterThanAverageAbility, MSGBOX_DEFAULT
# 77 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat
# 78 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 79 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 80 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighTotalIVs::
# 81 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_ImpressiveAbility, MSGBOX_DEFAULT
# 82 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat
# 83 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 84 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 85 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_VeryHighTotalIVs::
# 86 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_OutstandingAbility, MSGBOX_DEFAULT
# 87 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat
# 88 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 89 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 90 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVHP::
# 91 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_BestAspectHP, MSGBOX_DEFAULT
# 92 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
# 93 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 94 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 95 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVAtk::
# 96 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_BestAspectAtk, MSGBOX_DEFAULT
# 97 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
# 98 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 99 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 100 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVDef::
# 101 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_BestAspectDef, MSGBOX_DEFAULT
# 102 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
# 103 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 104 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 105 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVSpeed::
# 106 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_BestAspectSpeed, MSGBOX_DEFAULT
# 107 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
# 108 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 109 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 110 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVSpAtk::
# 111 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_BestAspectSpAtk, MSGBOX_DEFAULT
# 112 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
# 113 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 114 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 115 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVSpDef::
# 116 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_BestAspectSpDef, MSGBOX_DEFAULT
# 117 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
# 118 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 119 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 120 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVLow::
# 121 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_StatRelativelyGood, MSGBOX_DEFAULT
# 122 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_EndBreederComments
# 123 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 124 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 125 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVMid::
# 126 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_StatImpressive, MSGBOX_DEFAULT
# 127 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_EndBreederComments
# 128 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 129 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 130 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVHigh::
# 131 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_StatOutstanding, MSGBOX_DEFAULT
# 132 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_EndBreederComments
# 133 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 134 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 135 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVMax::
# 136 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_StatFlawless, MSGBOX_DEFAULT
# 137 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_EndBreederComments
# 138 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 139 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 140 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_CancelMonSelect::
# 141 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_NoTimeForMyAdvice, MSGBOX_DEFAULT
# 142 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	release
# 143 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 144 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 145 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_Boy1::
# 146 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_SaidMyMonIsOutstanding, MSGBOX_NPC
# 147 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 148 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 149 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_Boy2::
# 150 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_DidntDoAnythingSpecialRaisingIt, MSGBOX_NPC
# 151 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 152 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 153 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_PokemonBreederIntro:
# 154 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "For 70 years I have raised POKéMON!\n"
# 155 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "I am the man they revere as\l"
# 156 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "the legendary top POKéMON BREEDER!\p"
# 157 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "If you ever become as seasoned as me,\n"
# 158 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "you'll see the abilities of POKéMON\l"
# 159 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "at a glance.\p"
# 160 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "You're a TRAINER. Doesn't it interest\n"
# 161 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "you to know your own POKéMON's\l"
# 162 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "abilities?\p"
# 163 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Here!\n"
# 164 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Let's have a look at your POKéMON!$"
# 165 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 166 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_AverageAbility:
# 167 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "…Hmm…\p"
# 168 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "This one, overall, I would describe\n"
# 169 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "as being of average ability.$"
# 170 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 171 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_BetterThanAverageAbility:
# 172 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "…Hmm…\p"
# 173 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "This one, overall, I would describe as\n"
# 174 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "having better-than-average ability.$"
# 175 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 176 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_ImpressiveAbility:
# 177 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "…Hmm…\p"
# 178 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "This one, overall, I would say is\n"
# 179 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "quite impressive in ability!$"
# 180 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 181 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_OutstandingAbility:
# 182 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "…Hmm…\p"
# 183 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "This one, overall, I would say is\n"
# 184 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "wonderfully outstanding in ability!$"
# 185 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 186 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_BestAspectHP:
# 187 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Incidentally, the best aspect of it,\n"
# 188 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "I would say, is its HP…$"
# 189 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 190 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_BestAspectAtk:
# 191 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Incidentally, the best aspect of it,\n"
# 192 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "I would say, is its ATTACK…$"
# 193 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 194 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_BestAspectDef:
# 195 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Incidentally, the best aspect of it,\n"
# 196 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "I would say, is its DEFENSE…$"
# 197 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 198 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_BestAspectSpAtk:
# 199 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Incidentally, the best aspect of it,\n"
# 200 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "I would say, is its SPECIAL ATTACK…$"
# 201 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 202 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_BestAspectSpDef:
# 203 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Incidentally, the best aspect of it,\n"
# 204 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "I would say, is its SPECIAL DEFENSE…$"
# 205 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 206 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_BestAspectSpeed:
# 207 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Incidentally, the best aspect of it,\n"
# 208 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "I would say, is its SPEED…$"
# 209 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 210 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_StatRelativelyGood:
# 211 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "That stat is relatively good.\n"
# 212 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "…Hm… That's how I call it.$"
# 213 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 214 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_StatImpressive:
# 215 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "That stat is quite impressive.\n"
# 216 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "…Hm… That's how I call it.$"
# 217 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 218 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_StatOutstanding:
# 219 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "That stat is outstanding!\n"
# 220 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "…Hm… That's how I call it.$"
# 221 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 222 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_StatFlawless:
# 223 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "It's flawless! A thing of perfection!\n"
# 224 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "…Hm… That's how I call it.$"
# 225 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 226 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_NoTimeForMyAdvice:
# 227 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "What?\n"
# 228 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "You have no time for my advice?\p"
# 229 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "You should always be eager to learn\n"
# 230 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "from the experiences of your elders!$"
# 231 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 232 "data/maps/BattleFrontier_Lounge1/scripts.pory"
@ Unused
# 233 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_HaveBusinessNeedsTending:
# 234 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Yes, what is it now?\p"
# 235 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "I have business that needs tending!\n"
# 236 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Save it for next time!$"
# 237 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 238 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_LetsLookAtYourPokemon:
# 239 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Ah, youngster! Do your POKéMON's\n"
# 240 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "abilities intrigue you?\p"
# 241 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Here, here!\n"
# 242 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Let's have a look at your POKéMON!$"
# 243 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 244 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_EvenICantTell:
# 245 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "An expert I am, but even I can't tell\n"
# 246 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "anything about an unhatched POKéMON!\p"
# 247 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Show me a POKéMON!\n"
# 248 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "A POKéMON is what I need to see!$"
# 249 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 250 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_SaidMyMonIsOutstanding:
# 251 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "He said my POKéMON is outstanding!\n"
# 252 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "I'm glad I raised it carefully!$"
# 253 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 254 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_DidntDoAnythingSpecialRaisingIt:
# 255 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "He said my POKéMON is outstanding!\n"
# 256 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "But I didn't do anything special\l"
# 257 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "raising it…$"
