# 1 "data/maps/SlateportCity_Harbor/scripts.pory"

# 2 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_MapScripts::
# 3 "data/maps/SlateportCity_Harbor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_Harbor_OnTransition
# 4 "data/maps/SlateportCity_Harbor/scripts.pory"
	.byte 0
# 5 "data/maps/SlateportCity_Harbor/scripts.pory"

# 6 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_OnTransition:
# 7 "data/maps/SlateportCity_Harbor/scripts.pory"
	setescapewarp MAP_SLATEPORT_CITY, 28, 13
# 8 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_TEMP_1, 0
# 9 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_SLATEPORT_HARBOR_STATE, 1, SlateportCity_Harbor_EventScript_ReadyAquaEscapeScene
# 10 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_ShowSSTidal
# 11 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 12 "data/maps/SlateportCity_Harbor/scripts.pory"

# 13 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ShowSSTidal::
# 14 "data/maps/SlateportCity_Harbor/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SS_TIDAL
# 15 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 16 "data/maps/SlateportCity_Harbor/scripts.pory"

# 17 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ReadyAquaEscapeScene::
# 18 "data/maps/SlateportCity_Harbor/scripts.pory"
	savebgm MUS_ENCOUNTER_AQUA
# 19 "data/maps/SlateportCity_Harbor/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_HARBOR_CAPT_STERN, 12, 13
# 20 "data/maps/SlateportCity_Harbor/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_HARBOR_CAPT_STERN, MOVEMENT_TYPE_FACE_LEFT
# 21 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS
# 22 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 23 "data/maps/SlateportCity_Harbor/scripts.pory"

# 24 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeTrigger0::
# 25 "data/maps/SlateportCity_Harbor/scripts.pory"
	lockall
# 26 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8008, 0
# 27 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene
# 28 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 29 "data/maps/SlateportCity_Harbor/scripts.pory"

# 30 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeTrigger1::
# 31 "data/maps/SlateportCity_Harbor/scripts.pory"
	lockall
# 32 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8008, 1
# 33 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene
# 34 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 35 "data/maps/SlateportCity_Harbor/scripts.pory"

# 36 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeTrigger2::
# 37 "data/maps/SlateportCity_Harbor/scripts.pory"
	lockall
# 38 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8008, 2
# 39 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene
# 40 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 41 "data/maps/SlateportCity_Harbor/scripts.pory"

# 42 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeTrigger3::
# 43 "data/maps/SlateportCity_Harbor/scripts.pory"
	lockall
# 44 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8008, 3
# 45 "data/maps/SlateportCity_Harbor/scripts.pory"
	applywaitmovement LOCALID_PLAYER, SlateportCity_Harbor_Movement_PlayerWalkUp
# 46 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene
# 47 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 48 "data/maps/SlateportCity_Harbor/scripts.pory"

# 49 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeScene::
# 50 "data/maps/SlateportCity_Harbor/scripts.pory"
	applywaitmovement LOCALID_SLATEPORT_HARBOR_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 51 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SLATEPORT_HARBOR_GRUNT, Common_Movement_WalkInPlaceFasterDown
# 52 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 53 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 54 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_ArchieYouAgainHideoutInLilycove, MSGBOX_DEFAULT
# 55 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 56 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SLATEPORT_HARBOR_GRUNT, SlateportCity_Harbor_Movement_AquaBoardSub
# 57 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SLATEPORT_HARBOR_ARCHIE, SlateportCity_Harbor_Movement_AquaBoardSub
# 58 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SLATEPORT_HARBOR_SUBMARINE, SlateportCity_Harbor_Movement_SubmarineExit
# 59 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 60 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject LOCALID_SLATEPORT_HARBOR_GRUNT
# 61 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject LOCALID_SLATEPORT_HARBOR_ARCHIE
# 62 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject LOCALID_SLATEPORT_HARBOR_SUBMARINE
# 63 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_SLATEPORT_HARBOR_STATE, 2
# 64 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_MET_TEAM_AQUA_HARBOR
# 65 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_MOTEL_SCOTT
# 66 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_0x8008, 0, SlateportCity_Harbor_EventScript_SternApproachPlayer0
# 67 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_0x8008, 1, SlateportCity_Harbor_EventScript_SternApproachPlayer1
# 68 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_0x8008, 2, SlateportCity_Harbor_EventScript_SternApproachPlayer
# 69 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_0x8008, 3, SlateportCity_Harbor_EventScript_SternApproachPlayer
# 70 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_CaptSternWhyStealMySubmarine, MSGBOX_DEFAULT
# 71 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 72 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_1_BLOCKING_ENTRANCE
# 73 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_2_BLOCKING_ENTRANCE
# 74 "data/maps/SlateportCity_Harbor/scripts.pory"
	copyobjectxytoperm LOCALID_SLATEPORT_HARBOR_CAPT_STERN
# 75 "data/maps/SlateportCity_Harbor/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_HARBOR_CAPT_STERN, MOVEMENT_TYPE_FACE_RIGHT
# 76 "data/maps/SlateportCity_Harbor/scripts.pory"
	releaseall
# 77 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 78 "data/maps/SlateportCity_Harbor/scripts.pory"

# 79 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_SternApproachPlayer0::
# 80 "data/maps/SlateportCity_Harbor/scripts.pory"
	applywaitmovement LOCALID_SLATEPORT_HARBOR_CAPT_STERN, SlateportCity_Harbor_Movement_SternApproachPlayer0
# 81 "data/maps/SlateportCity_Harbor/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 82 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 83 "data/maps/SlateportCity_Harbor/scripts.pory"

# 84 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_SternApproachPlayer1::
# 85 "data/maps/SlateportCity_Harbor/scripts.pory"
	applywaitmovement LOCALID_SLATEPORT_HARBOR_CAPT_STERN, SlateportCity_Harbor_Movement_SternApproachPlayer1
# 86 "data/maps/SlateportCity_Harbor/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 87 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 88 "data/maps/SlateportCity_Harbor/scripts.pory"

# 89 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_SternApproachPlayer::
# 90 "data/maps/SlateportCity_Harbor/scripts.pory"
	applywaitmovement LOCALID_SLATEPORT_HARBOR_CAPT_STERN, SlateportCity_Harbor_Movement_SternApproachPlayer
# 91 "data/maps/SlateportCity_Harbor/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 92 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 93 "data/maps/SlateportCity_Harbor/scripts.pory"

# 94 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_AquaBoardSub:
# 95 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 96 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 97 "data/maps/SlateportCity_Harbor/scripts.pory"
	jump_up
# 98 "data/maps/SlateportCity_Harbor/scripts.pory"
	set_invisible
# 99 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 100 "data/maps/SlateportCity_Harbor/scripts.pory"

# 101 "data/maps/SlateportCity_Harbor/scripts.pory"
@ Unused, Archie instead shares above identical movement script with Grunt
# 102 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_ArchieBoardSub:
# 103 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 104 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 105 "data/maps/SlateportCity_Harbor/scripts.pory"
	jump_up
# 106 "data/maps/SlateportCity_Harbor/scripts.pory"
	set_invisible
# 107 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 108 "data/maps/SlateportCity_Harbor/scripts.pory"

# 109 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_SubmarineExit:
# 110 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 111 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 112 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 113 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 114 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 115 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 116 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 117 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 118 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 119 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 120 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 121 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 122 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 123 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 124 "data/maps/SlateportCity_Harbor/scripts.pory"

# 125 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_SternApproachPlayer0:
# 126 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 127 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 128 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 129 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 130 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 131 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 132 "data/maps/SlateportCity_Harbor/scripts.pory"

# 133 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_SternApproachPlayer1:
# 134 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 135 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 136 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 137 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 138 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 139 "data/maps/SlateportCity_Harbor/scripts.pory"

# 140 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_SternApproachPlayer:
# 141 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 142 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 143 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 144 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 145 "data/maps/SlateportCity_Harbor/scripts.pory"

# 146 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_PlayerWalkUp:
# 147 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 148 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 149 "data/maps/SlateportCity_Harbor/scripts.pory"

# 150 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_FerryAttendant::
# 151 "data/maps/SlateportCity_Harbor/scripts.pory"
	lock
# 152 "data/maps/SlateportCity_Harbor/scripts.pory"
	faceplayer
# 153 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_AskForTicket
# 154 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_FerryServiceUnavailable, MSGBOX_DEFAULT
# 155 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 156 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 157 "data/maps/SlateportCity_Harbor/scripts.pory"

# 158 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AskForTicket::
# 159 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_MayISeeYourTicket, MSGBOX_DEFAULT
# 160 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_FlashedTicketWhereTo
# 161 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 162 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseDestination
# 163 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 164 "data/maps/SlateportCity_Harbor/scripts.pory"

# 165 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDestination::
# 166 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_ON_SS_TIDAL, SlateportCity_Harbor_EventScript_ChooseDestinationWithBattleFrontier
# 167 "data/maps/SlateportCity_Harbor/scripts.pory"
	multichoicedefault 18, 8, MULTI_SSTIDAL_SLATEPORT_NO_BF, 2, FALSE
# 168 "data/maps/SlateportCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 169 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 0, SlateportCity_Harbor_EventScript_Lilycove
# 170 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 1, SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 171 "data/maps/SlateportCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 172 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 173 "data/maps/SlateportCity_Harbor/scripts.pory"

# 174 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDestinationWithBattleFrontier::
# 175 "data/maps/SlateportCity_Harbor/scripts.pory"
	multichoicedefault 17, 6, MULTI_SSTIDAL_SLATEPORT_WITH_BF, 2, FALSE
# 176 "data/maps/SlateportCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 177 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 0, SlateportCity_Harbor_EventScript_Lilycove
# 178 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 1, SlateportCity_Harbor_EventScript_BattleFrontier
# 179 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 2, SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 180 "data/maps/SlateportCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 181 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 182 "data/maps/SlateportCity_Harbor/scripts.pory"

# 183 "data/maps/SlateportCity_Harbor/scripts.pory"
@ Unused. Should be impossible for player to reach Ferry without having received SS Tidal ticket
# 184 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_NoTicket::
# 185 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_YouMustHaveTicket, MSGBOX_DEFAULT
# 186 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 187 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 188 "data/maps/SlateportCity_Harbor/scripts.pory"

# 189 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_Lilycove::
# 190 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_LilycoveItIs, MSGBOX_YESNO
# 191 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_Harbor_EventScript_ChooseNewDestination
# 192 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_BOARD_SLATEPORT
# 193 "data/maps/SlateportCity_Harbor/scripts.pory"
	call SlateportCity_Harbor_EventScript_BoardFerry
# 194 "data/maps/SlateportCity_Harbor/scripts.pory"
	warp MAP_SS_TIDAL_CORRIDOR, 1, 10
# 195 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitstate
# 196 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 197 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 198 "data/maps/SlateportCity_Harbor/scripts.pory"

# 199 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BattleFrontier::
# 200 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_BattleFrontierItIs, MSGBOX_YESNO
# 201 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_Harbor_EventScript_ChooseNewDestination
# 202 "data/maps/SlateportCity_Harbor/scripts.pory"
	call SlateportCity_Harbor_EventScript_BoardFerry
# 203 "data/maps/SlateportCity_Harbor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_OUTSIDE_WEST, 19, 67
# 204 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitstate
# 205 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 206 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 207 "data/maps/SlateportCity_Harbor/scripts.pory"

# 208 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseNewDestination::
# 209 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_WhereWouldYouLikeToGo
# 210 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 211 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseDestination
# 212 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 213 "data/maps/SlateportCity_Harbor/scripts.pory"

# 214 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BoardFerry::
# 215 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 216 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 217 "data/maps/SlateportCity_Harbor/scripts.pory"
	applywaitmovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterUp
# 218 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 30
# 219 "data/maps/SlateportCity_Harbor/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_SLATEPORT_CITY_HARBOR
# 220 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SlateportCity_Harbor_EventScript_BoardFerryNorth
# 221 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SlateportCity_Harbor_EventScript_BoardFerryEast
# 222 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 30
# 223 "data/maps/SlateportCity_Harbor/scripts.pory"
	hideplayer
# 224 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8004, LOCALID_SLATEPORT_HARBOR_SS_TIDAL
# 225 "data/maps/SlateportCity_Harbor/scripts.pory"
	call Common_EventScript_FerryDepart
# 226 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 227 "data/maps/SlateportCity_Harbor/scripts.pory"

# 228 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CancelDestinationSelect::
# 229 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_SailAnotherTime, MSGBOX_DEFAULT
# 230 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 231 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 232 "data/maps/SlateportCity_Harbor/scripts.pory"

# 233 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BoardFerryEast::
# 234 "data/maps/SlateportCity_Harbor/scripts.pory"
	applywaitmovement LOCALID_PLAYER, SlateportCity_Harbor_Movement_BoardFerryEast
# 235 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 236 "data/maps/SlateportCity_Harbor/scripts.pory"

# 237 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BoardFerryNorth::
# 238 "data/maps/SlateportCity_Harbor/scripts.pory"
	applywaitmovement LOCALID_PLAYER, SlateportCity_Harbor_Movement_BoardFerryNorth
# 239 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 240 "data/maps/SlateportCity_Harbor/scripts.pory"

# 241 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_BoardFerryEast:
# 242 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 243 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_in_place_faster_up
# 244 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 245 "data/maps/SlateportCity_Harbor/scripts.pory"

# 246 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_BoardFerryNorth:
# 247 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 248 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 249 "data/maps/SlateportCity_Harbor/scripts.pory"

# 250 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_Sailor::
# 251 "data/maps/SlateportCity_Harbor/scripts.pory"
	lock
# 252 "data/maps/SlateportCity_Harbor/scripts.pory"
	faceplayer
# 253 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_SailorNoAbnormalWeather
# 254 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8004, 0
# 255 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_set FLAG_DEFEATED_KYOGRE, SlateportCity_Harbor_EventScript_CountDefeatedLegendary
# 256 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_set FLAG_DEFEATED_GROUDON, SlateportCity_Harbor_EventScript_CountDefeatedLegendary
# 257 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_0x8004, 2, SlateportCity_Harbor_EventScript_SailorNoAbnormalWeather  @ Defeated both
# 258 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_AbnormalWeather, MSGBOX_DEFAULT
# 259 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 260 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 261 "data/maps/SlateportCity_Harbor/scripts.pory"

# 262 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_SailorNoAbnormalWeather::
# 263 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_LoveToGoDeepUnderwaterSomeday, MSGBOX_DEFAULT
# 264 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 265 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 266 "data/maps/SlateportCity_Harbor/scripts.pory"

# 267 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CountDefeatedLegendary::
# 268 "data/maps/SlateportCity_Harbor/scripts.pory"
	addvar VAR_0x8004, 1
# 269 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 270 "data/maps/SlateportCity_Harbor/scripts.pory"

# 271 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_FatMan::
# 272 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_SubTooSmallForMe, MSGBOX_NPC
# 273 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 274 "data/maps/SlateportCity_Harbor/scripts.pory"

# 275 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CaptStern::
# 276 "data/maps/SlateportCity_Harbor/scripts.pory"
	lock
# 277 "data/maps/SlateportCity_Harbor/scripts.pory"
	faceplayer
# 278 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment
# 279 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_EVIL_TEAM_ESCAPED_STERN_SPOKE, SlateportCity_Harbor_EventScript_NeedDive
# 280 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, SlateportCity_Harbor_EventScript_TeamAquaLeftNeedDive
# 281 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_SLATEPORT_HARBOR_STATE, 2, SlateportCity_Harbor_EventScript_WhyStealSubmarine
# 282 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_SameThugsTriedToRobAtMuseum, MSGBOX_DEFAULT
# 283 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 284 "data/maps/SlateportCity_Harbor/scripts.pory"
	applywaitmovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 285 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 286 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 287 "data/maps/SlateportCity_Harbor/scripts.pory"

# 288 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_WhyStealSubmarine::
# 289 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_CaptSternWhyStealMySubmarine, MSGBOX_DEFAULT
# 290 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 291 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 292 "data/maps/SlateportCity_Harbor/scripts.pory"

# 293 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_TeamAquaLeftNeedDive::
# 294 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_EVIL_TEAM_ESCAPED_STERN_SPOKE
# 295 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_TeamAquaLeftNeedDive, MSGBOX_DEFAULT
# 296 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 297 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 298 "data/maps/SlateportCity_Harbor/scripts.pory"

# 299 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_NeedDive::
# 300 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_NeedDiveToCatchSub, MSGBOX_DEFAULT
# 301 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 302 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 303 "data/maps/SlateportCity_Harbor/scripts.pory"

# 304 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment::
# 305 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_TEMP_1, 1, SlateportCity_Harbor_EventScript_TradedScanner
# 306 "data/maps/SlateportCity_Harbor/scripts.pory"
	checkitem ITEM_SCANNER
# 307 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_Harbor_EventScript_AskToTradeScanner
# 308 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_FerryFinished
# 309 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_WontBeLongBeforeWeFinishFerry, MSGBOX_DEFAULT
# 310 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 311 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 312 "data/maps/SlateportCity_Harbor/scripts.pory"

# 313 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_FerryFinished::
# 314 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_FinishedMakingFerry, MSGBOX_DEFAULT
# 315 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 316 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 317 "data/maps/SlateportCity_Harbor/scripts.pory"

# 318 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AskToTradeScanner::
# 319 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_WouldYouTradeScanner
# 320 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 321 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseScannerTrade
# 322 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 323 "data/maps/SlateportCity_Harbor/scripts.pory"

# 324 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseScannerTrade::
# 325 "data/maps/SlateportCity_Harbor/scripts.pory"
	multichoice 0, 0, MULTI_STERN_DEEPSEA, FALSE
# 326 "data/maps/SlateportCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 327 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 0, SlateportCity_Harbor_EventScript_DeepSeaTooth
# 328 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 1, SlateportCity_Harbor_EventScript_DeepSeaScale
# 329 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 2, SlateportCity_Harbor_EventScript_DeclineTrade
# 330 "data/maps/SlateportCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_Harbor_EventScript_DeclineTrade
# 331 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 332 "data/maps/SlateportCity_Harbor/scripts.pory"

# 333 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_DeepSeaTooth::
# 334 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_TradeForDeepSeaTooth, MSGBOX_YESNO
# 335 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_Harbor_EventScript_ChooseDifferentTrade
# 336 "data/maps/SlateportCity_Harbor/scripts.pory"
	giveitem ITEM_DEEP_SEA_TOOTH
# 337 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 338 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeitem ITEM_SCANNER
# 339 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_HandedScannerToStern, MSGBOX_DEFAULT
# 340 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_EXCHANGED_SCANNER
# 341 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_TradedScanner
# 342 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 343 "data/maps/SlateportCity_Harbor/scripts.pory"

# 344 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_DeepSeaScale::
# 345 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_TradeForDeepSeaScale, MSGBOX_YESNO
# 346 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_Harbor_EventScript_ChooseDifferentTrade
# 347 "data/maps/SlateportCity_Harbor/scripts.pory"
	giveitem ITEM_DEEP_SEA_SCALE
# 348 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 349 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeitem ITEM_SCANNER
# 350 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_HandedScannerToStern, MSGBOX_DEFAULT
# 351 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_EXCHANGED_SCANNER
# 352 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_TradedScanner
# 353 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 354 "data/maps/SlateportCity_Harbor/scripts.pory"

# 355 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_DeclineTrade::
# 356 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_IfYouWantToTradeLetMeKnow, MSGBOX_DEFAULT
# 357 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 358 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 359 "data/maps/SlateportCity_Harbor/scripts.pory"

# 360 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDifferentTrade::
# 361 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_WhichOneDoYouWant
# 362 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 363 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseScannerTrade
# 364 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 365 "data/maps/SlateportCity_Harbor/scripts.pory"

# 366 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_TradedScanner::
# 367 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_TEMP_1, 1
# 368 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_ThisWillHelpResearch, MSGBOX_DEFAULT
# 369 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 370 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 371 "data/maps/SlateportCity_Harbor/scripts.pory"

# 372 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_FerryServiceUnavailable:
# 373 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I beg your pardon?\n"
# 374 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You're looking for a ship?\p"
# 375 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I'm sorry, the ferry service isn't\n"
# 376 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "available at present…$"
# 377 "data/maps/SlateportCity_Harbor/scripts.pory"

# 378 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_MayISeeYourTicket:
# 379 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Hello, are you here for the ferry?\n"
# 380 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "May I see your TICKET?$"
# 381 "data/maps/SlateportCity_Harbor/scripts.pory"

# 382 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_YouMustHaveTicket:
# 383 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER} doesn't have the TICKET…\p"
# 384 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I'm terribly sorry.\p"
# 385 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You must have a TICKET to board\n"
# 386 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "the ferry.$"
# 387 "data/maps/SlateportCity_Harbor/scripts.pory"

# 388 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_FlashedTicketWhereTo:
# 389 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER} flashed the TICKET.\p"
# 390 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Perfect! That's all you need!\p"
# 391 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "And where would you like to go?$"
# 392 "data/maps/SlateportCity_Harbor/scripts.pory"

# 393 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_SailAnotherTime:
# 394 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Please sail with us another time!$"
# 395 "data/maps/SlateportCity_Harbor/scripts.pory"

# 396 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_LilycoveItIs:
# 397 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "LILYCOVE CITY it is, then!$"
# 398 "data/maps/SlateportCity_Harbor/scripts.pory"

# 399 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_BattleFrontierItIs:
# 400 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "BATTLE FRONTIER it is, then!$"
# 401 "data/maps/SlateportCity_Harbor/scripts.pory"

# 402 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_PleaseBoardFerry:
# 403 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Please board the ferry and wait for\n"
# 404 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "departure.$"
# 405 "data/maps/SlateportCity_Harbor/scripts.pory"

# 406 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WhereWouldYouLikeToGo:
# 407 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Then, where would you like to go?$"
# 408 "data/maps/SlateportCity_Harbor/scripts.pory"

# 409 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_LoveToGoDeepUnderwaterSomeday:
# 410 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "A journey to the bottom of the sea…\n"
# 411 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I wonder what it'd be like?\p"
# 412 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I'd love to go deep underwater like\n"
# 413 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "that someday.$"
# 414 "data/maps/SlateportCity_Harbor/scripts.pory"

# 415 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_AbnormalWeather:
# 416 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "For a ship to sail safely, we need to\n"
# 417 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "know about the weather!\p"
# 418 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Speaking of weather, I heard something\n"
# 419 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "from a guy at the WEATHER INSTITUTE.\p"
# 420 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "He was saying abnormal weather has\n"
# 421 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "been reported all over the place!\p"
# 422 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You should visit the WEATHER INSTITUTE\n"
# 423 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "and ask around!$"
# 424 "data/maps/SlateportCity_Harbor/scripts.pory"

# 425 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_SubTooSmallForMe:
# 426 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I wanted to go with CAPT. STERN on\n"
# 427 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "the ocean floor exploration.\p"
# 428 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "But the sub's too small for me.\p"
# 429 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "If I squeezed in, there wouldn't be\n"
# 430 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "any room for the CAPTAIN…$"
# 431 "data/maps/SlateportCity_Harbor/scripts.pory"

# 432 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_SameThugsTriedToRobAtMuseum:
# 433 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Those thugs…\p"
# 434 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "They're the same lot who tried to rob\n"
# 435 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "the DEVON GOODS at the MUSEUM.$"
# 436 "data/maps/SlateportCity_Harbor/scripts.pory"

# 437 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_ArchieYouAgainHideoutInLilycove:
# 438 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "ARCHIE: Oh?\n"
# 439 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Not you again…\p"
# 440 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You are tenacious to track us here,\n"
# 441 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "that much I will give you.\p"
# 442 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "But now…\n"
# 443 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "No one can stop us! No one!\p"
# 444 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Or, will you follow us back to our\n"
# 445 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "HIDEOUT in LILYCOVE CITY?\p"
# 446 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Fwahahahaha…$"
# 447 "data/maps/SlateportCity_Harbor/scripts.pory"

# 448 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_CaptSternWhyStealMySubmarine:
# 449 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Why…\p"
# 450 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Why would TEAM AQUA steal my\n"
# 451 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "SUBMARINE EXPLORER 1?\p"
# 452 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "They can't be after the slumbering\n"
# 453 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "POKéMON at the bottom of the sea…\p"
# 454 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "But even if I were to chase them,\n"
# 455 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I don't stand a chance against them…$"
# 456 "data/maps/SlateportCity_Harbor/scripts.pory"

# 457 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_TeamAquaLeftNeedDive:
# 458 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Oh, {PLAYER}{KUN}…\p"
# 459 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Okay… So TEAM AQUA left before you\n"
# 460 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "could stop them…\p"
# 461 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Oh, no, don't blame yourself.\n"
# 462 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You're not responsible for this.\p"
# 463 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Trying to catch a submarine…\n"
# 464 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "It's impossible for most people.\p"
# 465 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You would need a POKéMON that knows\n"
# 466 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "how to DIVE…\p"
# 467 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Perhaps if you went out to\n"
# 468 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "MOSSDEEP CITY…\p"
# 469 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "A lot of divers live out there, so\n"
# 470 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "someone might teach you…$"
# 471 "data/maps/SlateportCity_Harbor/scripts.pory"

# 472 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_NeedDiveToCatchSub:
# 473 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Trying to catch a\n"
# 474 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "submarine… It's impossible.\p"
# 475 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You would need a POKéMON that knows\n"
# 476 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "how to DIVE…\p"
# 477 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Perhaps if you went out to\n"
# 478 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "MOSSDEEP CITY…\p"
# 479 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "A lot of divers live out there, so\n"
# 480 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "someone might teach you…$"
# 481 "data/maps/SlateportCity_Harbor/scripts.pory"

# 482 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WontBeLongBeforeWeFinishFerry:
# 483 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Oh, yes.\n"
# 484 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "MR. BRINEY came to our SHIPYARD.\p"
# 485 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "It won't be long now before we finish\n"
# 486 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "making the ferry!$"
# 487 "data/maps/SlateportCity_Harbor/scripts.pory"

# 488 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_FinishedMakingFerry:
# 489 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: {PLAYER}{KUN}!\p"
# 490 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "We finally finished making the ferry\n"
# 491 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "S.S. TIDAL!\p"
# 492 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "We couldn't have done it without\n"
# 493 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "your friend MR. BRINEY.\p"
# 494 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Please go for a short cruise on it!$"
# 495 "data/maps/SlateportCity_Harbor/scripts.pory"

# 496 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WouldYouTradeScanner:
# 497 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Oh?\n"
# 498 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER}{KUN}, that item you have…\p"
# 499 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "That's a SCANNER! That would sure\n"
# 500 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "help us on our explorations.\p"
# 501 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER}{KUN}, would you trade your\n"
# 502 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "SCANNER for something?\p"
# 503 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Like, say, a DEEPSEATOOTH or\n"
# 504 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "a DEEPSEASCALE that I have?$"
# 505 "data/maps/SlateportCity_Harbor/scripts.pory"

# 506 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_IfYouWantToTradeLetMeKnow:
# 507 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Are you certain?\n"
# 508 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "It's useless to you, {PLAYER}{KUN}…\p"
# 509 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Well, okay, then. If you want to trade\n"
# 510 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "your SCANNER, let me know.$"
# 511 "data/maps/SlateportCity_Harbor/scripts.pory"

# 512 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_TradeForDeepSeaTooth:
# 513 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: So you'll trade it for\n"
# 514 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "my DEEPSEATOOTH?$"
# 515 "data/maps/SlateportCity_Harbor/scripts.pory"

# 516 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_TradeForDeepSeaScale:
# 517 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: So you'll trade it for\n"
# 518 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "my DEEPSEASCALE?$"
# 519 "data/maps/SlateportCity_Harbor/scripts.pory"

# 520 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WhichOneDoYouWant:
# 521 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Which one do you want?$"
# 522 "data/maps/SlateportCity_Harbor/scripts.pory"

# 523 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_HandedScannerToStern:
# 524 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER} handed the SCANNER to\n"
# 525 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN.$"
# 526 "data/maps/SlateportCity_Harbor/scripts.pory"

# 527 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_ThisWillHelpResearch:
# 528 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Thanks, {PLAYER}{KUN}!\n"
# 529 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "This will help our research a lot!$"
