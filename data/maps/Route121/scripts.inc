# 1 "data/maps/Route121/scripts.pory"

# 2 "data/maps/Route121/scripts.pory"
Route121_MapScripts::
# 3 "data/maps/Route121/scripts.pory"
	.byte 0
# 4 "data/maps/Route121/scripts.pory"

# 5 "data/maps/Route121/scripts.pory"
Route121_EventScript_Woman::
# 6 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_AheadLoomsMtPyre, MSGBOX_NPC
# 7 "data/maps/Route121/scripts.pory"
	end
# 8 "data/maps/Route121/scripts.pory"

# 9 "data/maps/Route121/scripts.pory"
Route121_EventScript_MtPyrePierSign::
# 10 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MtPyrePierSign, MSGBOX_SIGN
# 11 "data/maps/Route121/scripts.pory"
	end
# 12 "data/maps/Route121/scripts.pory"

# 13 "data/maps/Route121/scripts.pory"
Route121_EventScript_SafariZoneSign::
# 14 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_SafariZoneSign, MSGBOX_SIGN
# 15 "data/maps/Route121/scripts.pory"
	end
# 16 "data/maps/Route121/scripts.pory"

# 17 "data/maps/Route121/scripts.pory"
Route121_EventScript_AquaGruntsMoveOut::
# 18 "data/maps/Route121/scripts.pory"
	lockall
# 19 "data/maps/Route121/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 20 "data/maps/Route121/scripts.pory"
	applywaitmovement LOCALID_ROUTE121_GRUNT_2, Common_Movement_WalkInPlaceRight
# 21 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_OkayMoveOutToMtPyre, MSGBOX_DEFAULT
# 22 "data/maps/Route121/scripts.pory"
	closemessage
# 23 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_ROUTE121_GRUNT_1, Route121_Movement_Grunt1Exit
# 24 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_ROUTE121_GRUNT_2, Route121_Movement_Grunt2Exit
# 25 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_ROUTE121_GRUNT_3, Route121_Movement_Grunt3Exit
# 26 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 27 "data/maps/Route121/scripts.pory"
	fadedefaultbgm
# 28 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_ROUTE121_GRUNT_1
# 29 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_ROUTE121_GRUNT_2
# 30 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_ROUTE121_GRUNT_3
# 31 "data/maps/Route121/scripts.pory"
	setvar VAR_ROUTE121_STATE, 1
# 32 "data/maps/Route121/scripts.pory"
	releaseall
# 33 "data/maps/Route121/scripts.pory"
	end
# 34 "data/maps/Route121/scripts.pory"

# 35 "data/maps/Route121/scripts.pory"
Route121_Movement_Grunt1Exit:
# 36 "data/maps/Route121/scripts.pory"
	walk_down
# 37 "data/maps/Route121/scripts.pory"
	walk_down
# 38 "data/maps/Route121/scripts.pory"
	walk_down
# 39 "data/maps/Route121/scripts.pory"
	walk_down
# 40 "data/maps/Route121/scripts.pory"
	walk_down
# 41 "data/maps/Route121/scripts.pory"
	walk_down
# 42 "data/maps/Route121/scripts.pory"
	walk_down
# 43 "data/maps/Route121/scripts.pory"
	walk_down
# 44 "data/maps/Route121/scripts.pory"
	step_end
# 45 "data/maps/Route121/scripts.pory"

# 46 "data/maps/Route121/scripts.pory"
Route121_Movement_Grunt2Exit:
# 47 "data/maps/Route121/scripts.pory"
	walk_down
# 48 "data/maps/Route121/scripts.pory"
	walk_down
# 49 "data/maps/Route121/scripts.pory"
	walk_down
# 50 "data/maps/Route121/scripts.pory"
	walk_down
# 51 "data/maps/Route121/scripts.pory"
	walk_down
# 52 "data/maps/Route121/scripts.pory"
	walk_down
# 53 "data/maps/Route121/scripts.pory"
	walk_down
# 54 "data/maps/Route121/scripts.pory"
	walk_down
# 55 "data/maps/Route121/scripts.pory"
	step_end
# 56 "data/maps/Route121/scripts.pory"

# 57 "data/maps/Route121/scripts.pory"
Route121_Movement_Grunt3Exit:
# 58 "data/maps/Route121/scripts.pory"
	walk_down
# 59 "data/maps/Route121/scripts.pory"
	walk_down
# 60 "data/maps/Route121/scripts.pory"
	walk_down
# 61 "data/maps/Route121/scripts.pory"
	walk_down
# 62 "data/maps/Route121/scripts.pory"
	walk_down
# 63 "data/maps/Route121/scripts.pory"
	walk_down
# 64 "data/maps/Route121/scripts.pory"
	walk_down
# 65 "data/maps/Route121/scripts.pory"
	walk_down
# 66 "data/maps/Route121/scripts.pory"
	step_end
# 67 "data/maps/Route121/scripts.pory"

# 68 "data/maps/Route121/scripts.pory"
Route121_EventScript_Vanessa::
# 69 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_VANESSA, Route121_Text_VanessaIntro, Route121_Text_VanessaDefeat
# 70 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_VanessaPostBattle, MSGBOX_AUTOCLOSE
# 71 "data/maps/Route121/scripts.pory"
	end
# 72 "data/maps/Route121/scripts.pory"

# 73 "data/maps/Route121/scripts.pory"
Route121_EventScript_Walter::
# 74 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_WALTER_1, Route121_Text_WalterIntro, Route121_Text_WalterDefeat, Route121_EventScript_RegisterWalter
# 75 "data/maps/Route121/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 76 "data/maps/Route121/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route121_EventScript_RematchWalter
# 77 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_WalterPostBattle, MSGBOX_DEFAULT
# 78 "data/maps/Route121/scripts.pory"
	release
# 79 "data/maps/Route121/scripts.pory"
	end
# 80 "data/maps/Route121/scripts.pory"

# 81 "data/maps/Route121/scripts.pory"
Route121_EventScript_RegisterWalter::
# 82 "data/maps/Route121/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 83 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 84 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_WalterRegister, MSGBOX_DEFAULT
# 85 "data/maps/Route121/scripts.pory"
	register_matchcall TRAINER_WALTER_1
# 86 "data/maps/Route121/scripts.pory"
	release
# 87 "data/maps/Route121/scripts.pory"
	end
# 88 "data/maps/Route121/scripts.pory"

# 89 "data/maps/Route121/scripts.pory"
Route121_EventScript_RematchWalter::
# 90 "data/maps/Route121/scripts.pory"
	trainerbattle_rematch TRAINER_WALTER_1, Route121_Text_WalterRematchIntro, Route121_Text_WalterRematchDefeat
# 91 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_WalterPostRematch, MSGBOX_AUTOCLOSE
# 92 "data/maps/Route121/scripts.pory"
	end
# 93 "data/maps/Route121/scripts.pory"

# 94 "data/maps/Route121/scripts.pory"
Route121_EventScript_Tammy::
# 95 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_TAMMY, Route121_Text_TammyIntro, Route121_Text_TammyDefeat
# 96 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_TammyPostBattle, MSGBOX_AUTOCLOSE
# 97 "data/maps/Route121/scripts.pory"
	end
# 98 "data/maps/Route121/scripts.pory"

# 99 "data/maps/Route121/scripts.pory"
Route121_EventScript_Kate::
# 100 "data/maps/Route121/scripts.pory"
	trainerbattle_double TRAINER_KATE_AND_JOY, Route121_Text_KateIntro, Route121_Text_KateDefeat, Route121_Text_KateNotEnoughMons
# 101 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_KatePostBattle, MSGBOX_AUTOCLOSE
# 102 "data/maps/Route121/scripts.pory"
	end
# 103 "data/maps/Route121/scripts.pory"

# 104 "data/maps/Route121/scripts.pory"
Route121_EventScript_Joy::
# 105 "data/maps/Route121/scripts.pory"
	trainerbattle_double TRAINER_KATE_AND_JOY, Route121_Text_JoyIntro, Route121_Text_JoyDefeat, Route121_Text_JoyNotEnoughMons
# 106 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JoyPostBattle, MSGBOX_AUTOCLOSE
# 107 "data/maps/Route121/scripts.pory"
	end
# 108 "data/maps/Route121/scripts.pory"

# 109 "data/maps/Route121/scripts.pory"
Route121_EventScript_Jessica::
# 110 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_JESSICA_1, Route121_Text_JessicaIntro, Route121_Text_JessicaDefeat, Route121_EventScript_RegisterJessica
# 111 "data/maps/Route121/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 112 "data/maps/Route121/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route121_EventScript_RematchJessica
# 113 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JessicaPostBattle, MSGBOX_DEFAULT
# 114 "data/maps/Route121/scripts.pory"
	release
# 115 "data/maps/Route121/scripts.pory"
	end
# 116 "data/maps/Route121/scripts.pory"

# 117 "data/maps/Route121/scripts.pory"
Route121_EventScript_RegisterJessica::
# 118 "data/maps/Route121/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 119 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 120 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JessicaRegister, MSGBOX_DEFAULT
# 121 "data/maps/Route121/scripts.pory"
	register_matchcall TRAINER_JESSICA_1
# 122 "data/maps/Route121/scripts.pory"
	release
# 123 "data/maps/Route121/scripts.pory"
	end
# 124 "data/maps/Route121/scripts.pory"

# 125 "data/maps/Route121/scripts.pory"
Route121_EventScript_RematchJessica::
# 126 "data/maps/Route121/scripts.pory"
	trainerbattle_rematch TRAINER_JESSICA_1, Route121_Text_JessicaRematchIntro, Route121_Text_JessicaRematchDefeat
# 127 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JessicaPostRematch, MSGBOX_AUTOCLOSE
# 128 "data/maps/Route121/scripts.pory"
	end
# 129 "data/maps/Route121/scripts.pory"

# 130 "data/maps/Route121/scripts.pory"
Route121_EventScript_Cale::
# 131 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_CALE, Route121_Text_CaleIntro, Route121_Text_CaleDefeat
# 132 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CalePostBattle, MSGBOX_AUTOCLOSE
# 133 "data/maps/Route121/scripts.pory"
	end
# 134 "data/maps/Route121/scripts.pory"

# 135 "data/maps/Route121/scripts.pory"
Route121_EventScript_Myles::
# 136 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_MYLES, Route121_Text_MylesIntro, Route121_Text_MylesDefeat
# 137 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MylesPostBattle, MSGBOX_AUTOCLOSE
# 138 "data/maps/Route121/scripts.pory"
	end
# 139 "data/maps/Route121/scripts.pory"

# 140 "data/maps/Route121/scripts.pory"
Route121_EventScript_Pat::
# 141 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_PAT, Route121_Text_PatIntro, Route121_Text_PatDefeat
# 142 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_PatPostBattle, MSGBOX_AUTOCLOSE
# 143 "data/maps/Route121/scripts.pory"
	end
# 144 "data/maps/Route121/scripts.pory"

# 145 "data/maps/Route121/scripts.pory"
Route121_EventScript_Marcel::
# 146 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_MARCEL, Route121_Text_MarcelIntro, Route121_Text_MarcelDefeat
# 147 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MarcelPostBattle, MSGBOX_AUTOCLOSE
# 148 "data/maps/Route121/scripts.pory"
	end
# 149 "data/maps/Route121/scripts.pory"

# 150 "data/maps/Route121/scripts.pory"
Route121_EventScript_Cristin::
# 151 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_CRISTIN_1, Route121_Text_CristinIntro, Route121_Text_CristinDefeat, Route121_EventScript_RegisterCristin
# 152 "data/maps/Route121/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 153 "data/maps/Route121/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route121_EventScript_RematchCristin
# 154 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CristinPostBattle, MSGBOX_DEFAULT
# 155 "data/maps/Route121/scripts.pory"
	release
# 156 "data/maps/Route121/scripts.pory"
	end
# 157 "data/maps/Route121/scripts.pory"

# 158 "data/maps/Route121/scripts.pory"
Route121_EventScript_RegisterCristin::
# 159 "data/maps/Route121/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 160 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 161 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CristinRegister, MSGBOX_DEFAULT
# 162 "data/maps/Route121/scripts.pory"
	register_matchcall TRAINER_CRISTIN_1
# 163 "data/maps/Route121/scripts.pory"
	release
# 164 "data/maps/Route121/scripts.pory"
	end
# 165 "data/maps/Route121/scripts.pory"

# 166 "data/maps/Route121/scripts.pory"
Route121_EventScript_RematchCristin::
# 167 "data/maps/Route121/scripts.pory"
	trainerbattle_rematch TRAINER_CRISTIN_1, Route121_Text_CristinRematchIntro, Route121_Text_CristinRematchDefeat
# 168 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CristinPostRematch, MSGBOX_AUTOCLOSE
# 169 "data/maps/Route121/scripts.pory"
	end
# 170 "data/maps/Route121/scripts.pory"

# 171 "data/maps/Route121/scripts.pory"
Route121_Text_OkayMoveOutToMtPyre:
# 172 "data/maps/Route121/scripts.pory"
	.string "Okay!\n"
# 173 "data/maps/Route121/scripts.pory"
	.string "We're to move out to MT. PYRE!$"
# 174 "data/maps/Route121/scripts.pory"

# 175 "data/maps/Route121/scripts.pory"
Route121_Text_AheadLoomsMtPyre:
# 176 "data/maps/Route121/scripts.pory"
	.string "Ahead looms MT. PYRE…\p"
# 177 "data/maps/Route121/scripts.pory"
	.string "It is a natural monument to the spirits \n"
# 178 "data/maps/Route121/scripts.pory"
	.string "of departed POKéMON…$"
# 179 "data/maps/Route121/scripts.pory"

# 180 "data/maps/Route121/scripts.pory"
Route121_Text_MtPyrePierSign:
# 181 "data/maps/Route121/scripts.pory"
	.string "MT. PYRE PIER\p"
# 182 "data/maps/Route121/scripts.pory"
	.string "…The sign is old and worn out.\n"
# 183 "data/maps/Route121/scripts.pory"
	.string "The words are barely legible…$"
# 184 "data/maps/Route121/scripts.pory"

# 185 "data/maps/Route121/scripts.pory"
Route121_Text_SafariZoneSign:
# 186 "data/maps/Route121/scripts.pory"
	.string "“Filled with rare POKéMON!”\n"
# 187 "data/maps/Route121/scripts.pory"
	.string "SAFARI ZONE$"
