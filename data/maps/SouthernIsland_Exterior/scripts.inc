# 1 "data/maps/SouthernIsland_Exterior/scripts.pory"

# 2 "data/maps/SouthernIsland_Exterior/scripts.pory"
SouthernIsland_Exterior_MapScripts::
# 3 "data/maps/SouthernIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SouthernIsland_Exterior_OnTransition
# 4 "data/maps/SouthernIsland_Exterior/scripts.pory"
	.byte 0
# 5 "data/maps/SouthernIsland_Exterior/scripts.pory"

# 6 "data/maps/SouthernIsland_Exterior/scripts.pory"
SouthernIsland_Exterior_OnTransition:
# 7 "data/maps/SouthernIsland_Exterior/scripts.pory"
	setflag FLAG_LANDMARK_SOUTHERN_ISLAND
# 8 "data/maps/SouthernIsland_Exterior/scripts.pory"
	end
# 9 "data/maps/SouthernIsland_Exterior/scripts.pory"

# 10 "data/maps/SouthernIsland_Exterior/scripts.pory"
SouthernIsland_Exterior_EventScript_Sailor::
# 11 "data/maps/SouthernIsland_Exterior/scripts.pory"
	lock
# 12 "data/maps/SouthernIsland_Exterior/scripts.pory"
	faceplayer
# 13 "data/maps/SouthernIsland_Exterior/scripts.pory"
	msgbox EventTicket_Text_SouthernIslandSailBack, MSGBOX_YESNO
# 14 "data/maps/SouthernIsland_Exterior/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SouthernIsland_Exterior_EventScript_AsYouLike
# 15 "data/maps/SouthernIsland_Exterior/scripts.pory"
	msgbox EventTicket_Text_SailHome, MSGBOX_DEFAULT
# 16 "data/maps/SouthernIsland_Exterior/scripts.pory"
	closemessage
# 17 "data/maps/SouthernIsland_Exterior/scripts.pory"
	applywaitmovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 18 "data/maps/SouthernIsland_Exterior/scripts.pory"
	delay 30
# 19 "data/maps/SouthernIsland_Exterior/scripts.pory"
	hideobjectat LOCALID_SOUTHERN_ISLAND_SAILOR, MAP_SOUTHERN_ISLAND_EXTERIOR
# 20 "data/maps/SouthernIsland_Exterior/scripts.pory"
	setvar VAR_0x8004, LOCALID_SOUTHERN_ISLAND_SS_TIDAL
# 21 "data/maps/SouthernIsland_Exterior/scripts.pory"
	call Common_EventScript_FerryDepartIsland
# 22 "data/maps/SouthernIsland_Exterior/scripts.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
# 23 "data/maps/SouthernIsland_Exterior/scripts.pory"
	waitstate
# 24 "data/maps/SouthernIsland_Exterior/scripts.pory"
	release
# 25 "data/maps/SouthernIsland_Exterior/scripts.pory"
	end
# 26 "data/maps/SouthernIsland_Exterior/scripts.pory"

# 27 "data/maps/SouthernIsland_Exterior/scripts.pory"
SouthernIsland_Exterior_EventScript_AsYouLike::
# 28 "data/maps/SouthernIsland_Exterior/scripts.pory"
	msgbox EventTicket_Text_AsYouLike, MSGBOX_DEFAULT
# 29 "data/maps/SouthernIsland_Exterior/scripts.pory"
	release
# 30 "data/maps/SouthernIsland_Exterior/scripts.pory"
	end
# 31 "data/maps/SouthernIsland_Exterior/scripts.pory"

# 32 "data/maps/SouthernIsland_Exterior/scripts.pory"
Ferry_EventScript_DepartIslandSouth::
# 33 "data/maps/SouthernIsland_Exterior/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Ferry_Movement_DepartIslandBoardSouth
# 34 "data/maps/SouthernIsland_Exterior/scripts.pory"
	return
# 35 "data/maps/SouthernIsland_Exterior/scripts.pory"

# 36 "data/maps/SouthernIsland_Exterior/scripts.pory"
Ferry_EventScript_DepartIslandWest::
# 37 "data/maps/SouthernIsland_Exterior/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Ferry_Movement_DepartIslandBoardWest
# 38 "data/maps/SouthernIsland_Exterior/scripts.pory"
	return
# 39 "data/maps/SouthernIsland_Exterior/scripts.pory"

# 40 "data/maps/SouthernIsland_Exterior/scripts.pory"
Ferry_Movement_DepartIslandBoardSouth:
# 41 "data/maps/SouthernIsland_Exterior/scripts.pory"
	walk_down
# 42 "data/maps/SouthernIsland_Exterior/scripts.pory"
	step_end
# 43 "data/maps/SouthernIsland_Exterior/scripts.pory"

# 44 "data/maps/SouthernIsland_Exterior/scripts.pory"
Ferry_Movement_DepartIslandBoardWest:
# 45 "data/maps/SouthernIsland_Exterior/scripts.pory"
	walk_left
# 46 "data/maps/SouthernIsland_Exterior/scripts.pory"
	walk_in_place_faster_down
# 47 "data/maps/SouthernIsland_Exterior/scripts.pory"
	step_end
# 48 "data/maps/SouthernIsland_Exterior/scripts.pory"

# 49 "data/maps/SouthernIsland_Exterior/scripts.pory"
SouthernIsland_Exterior_EventScript_Sign::
# 50 "data/maps/SouthernIsland_Exterior/scripts.pory"
	msgbox SouthernIsland_Exterior_Text_Sign, MSGBOX_SIGN
# 51 "data/maps/SouthernIsland_Exterior/scripts.pory"
	end
