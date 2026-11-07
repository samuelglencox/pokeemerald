# 1 "data/maps/RusturfTunnel/scripts.pory"

# 2 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_MapScripts::
# 3 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RusturfTunnel_OnTransition
# 4 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RusturfTunnel_OnFrame
# 5 "data/maps/RusturfTunnel/scripts.pory"
	.byte 0
# 6 "data/maps/RusturfTunnel/scripts.pory"

# 7 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_OnFrame:
# 8 "data/maps/RusturfTunnel/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 4, RusturfTunnel_EventScript_ClearTunnelScene
# 9 "data/maps/RusturfTunnel/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 5, RusturfTunnel_EventScript_ClearTunnelScene
# 10 "data/maps/RusturfTunnel/scripts.pory"
	.2byte 0
# 11 "data/maps/RusturfTunnel/scripts.pory"

# 12 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_OnTransition:
# 13 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_RUSTURF_TUNNEL_STATE, 2, RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos
# 14 "data/maps/RusturfTunnel/scripts.pory"
	end
# 15 "data/maps/RusturfTunnel/scripts.pory"

# 16 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos::
# 17 "data/maps/RusturfTunnel/scripts.pory"
	setobjectxyperm LOCALID_RUSTURF_TUNNEL_PEEKO, 13, 4
# 18 "data/maps/RusturfTunnel/scripts.pory"
	setobjectxyperm LOCALID_RUSTURF_TUNNEL_GRUNT, 13, 5
# 19 "data/maps/RusturfTunnel/scripts.pory"
	return
# 20 "data/maps/RusturfTunnel/scripts.pory"

# 21 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Wanda::
# 22 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 23 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 24 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_BoyfriendOnOtherSideOfRock, MSGBOX_DEFAULT
# 25 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 26 "data/maps/RusturfTunnel/scripts.pory"
	applywaitmovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 27 "data/maps/RusturfTunnel/scripts.pory"
	release
# 28 "data/maps/RusturfTunnel/scripts.pory"
	end
# 29 "data/maps/RusturfTunnel/scripts.pory"

# 30 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriend::
# 31 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 32 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 33 "data/maps/RusturfTunnel/scripts.pory"
	goto_if_set FLAG_TEMP_1, RusturfTunnel_EventScript_AlreadySpokenTo
# 34 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_TEMP_1
# 35 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WhyCantTheyKeepDigging, MSGBOX_DEFAULT
# 36 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 37 "data/maps/RusturfTunnel/scripts.pory"
	applywaitmovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 38 "data/maps/RusturfTunnel/scripts.pory"
	release
# 39 "data/maps/RusturfTunnel/scripts.pory"
	end
# 40 "data/maps/RusturfTunnel/scripts.pory"

# 41 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_AlreadySpokenTo::
# 42 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ToGetToVerdanturf, MSGBOX_DEFAULT
# 43 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 44 "data/maps/RusturfTunnel/scripts.pory"
	applywaitmovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 45 "data/maps/RusturfTunnel/scripts.pory"
	release
# 46 "data/maps/RusturfTunnel/scripts.pory"
	end
# 47 "data/maps/RusturfTunnel/scripts.pory"

# 48 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene::
# 49 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 50 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_FaceWandasBoyfriend1
# 51 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_FaceWandasBoyfriend2
# 52 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_FaceWandasBoyfriend3
# 53 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_WandasBoyfriendNotice
# 54 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_YouShatteredBoulderTakeHM, MSGBOX_DEFAULT
# 55 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
# 56 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
# 57 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_HM_STRENGTH
# 58 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_RECEIVED_HM_STRENGTH
# 59 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ExplainStrength, MSGBOX_DEFAULT
# 60 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 61 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_BoyfriendApproachWanda1
# 62 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_BoyfriendApproachWanda2
# 63 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_BoyfriendApproachWanda3
# 64 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WandaReunion, MSGBOX_DEFAULT
# 65 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 66 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_WandaAndBoyfriendExit1
# 67 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_WandaAndBoyfriendExit
# 68 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_WandaAndBoyfriendExit
# 69 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_SetRusturfTunnelOpen
# 70 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
# 71 "data/maps/RusturfTunnel/scripts.pory"
	end
# 72 "data/maps/RusturfTunnel/scripts.pory"

# 73 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda1::
# 74 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend1
# 75 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda1
# 76 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 77 "data/maps/RusturfTunnel/scripts.pory"
	return
# 78 "data/maps/RusturfTunnel/scripts.pory"

# 79 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda2::
# 80 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
# 81 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda
# 82 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 83 "data/maps/RusturfTunnel/scripts.pory"
	applywaitmovement LOCALID_RUSTURF_TUNNEL_WANDA, Common_Movement_WalkInPlaceFasterDown
# 84 "data/maps/RusturfTunnel/scripts.pory"
	return
# 85 "data/maps/RusturfTunnel/scripts.pory"

# 86 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda3::
# 87 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
# 88 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda
# 89 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 90 "data/maps/RusturfTunnel/scripts.pory"
	applywaitmovement LOCALID_RUSTURF_TUNNEL_WANDA, Common_Movement_WalkInPlaceFasterDown
# 91 "data/maps/RusturfTunnel/scripts.pory"
	return
# 92 "data/maps/RusturfTunnel/scripts.pory"

# 93 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend1::
# 94 "data/maps/RusturfTunnel/scripts.pory"
	applywaitmovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, Common_Movement_WalkInPlaceFasterUp
# 95 "data/maps/RusturfTunnel/scripts.pory"
	applywaitmovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 96 "data/maps/RusturfTunnel/scripts.pory"
	return
# 97 "data/maps/RusturfTunnel/scripts.pory"

# 98 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend2::
# 99 "data/maps/RusturfTunnel/scripts.pory"
	applywaitmovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_BoyfriendFaceRight
# 100 "data/maps/RusturfTunnel/scripts.pory"
	return
# 101 "data/maps/RusturfTunnel/scripts.pory"

# 102 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend3::
# 103 "data/maps/RusturfTunnel/scripts.pory"
	return
# 104 "data/maps/RusturfTunnel/scripts.pory"

# 105 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer::
# 106 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 107 "data/maps/RusturfTunnel/scripts.pory"
	applywaitmovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendApproachPlayer
# 108 "data/maps/RusturfTunnel/scripts.pory"
	return
# 109 "data/maps/RusturfTunnel/scripts.pory"

# 110 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandaAndBoyfriendExit1::
# 111 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, RusturfTunnel_Movement_WandaExit1
# 112 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendExit1
# 113 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 114 "data/maps/RusturfTunnel/scripts.pory"
	return
# 115 "data/maps/RusturfTunnel/scripts.pory"

# 116 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandaAndBoyfriendExit::
# 117 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerWatchWandaExit
# 118 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, RusturfTunnel_Movement_WandaExit
# 119 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendExit
# 120 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 121 "data/maps/RusturfTunnel/scripts.pory"
	return
# 122 "data/maps/RusturfTunnel/scripts.pory"

# 123 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriendNotice::
# 124 "data/maps/RusturfTunnel/scripts.pory"
	playse SE_PIN
# 125 "data/maps/RusturfTunnel/scripts.pory"
	applywaitmovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, Common_Movement_ExclamationMark
# 126 "data/maps/RusturfTunnel/scripts.pory"
	applywaitmovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, Common_Movement_Delay48
# 127 "data/maps/RusturfTunnel/scripts.pory"
	return
# 128 "data/maps/RusturfTunnel/scripts.pory"

# 129 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandaExit1:
# 130 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 131 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 132 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 133 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 134 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 135 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 136 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 137 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 138 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 139 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 140 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 141 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 142 "data/maps/RusturfTunnel/scripts.pory"

# 143 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandaExit:
# 144 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 145 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 146 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 147 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 148 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 149 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 150 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 151 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 152 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 153 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 154 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 155 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 156 "data/maps/RusturfTunnel/scripts.pory"

# 157 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchWandaExit:
# 158 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 159 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 160 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 161 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 162 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 163 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 164 "data/maps/RusturfTunnel/scripts.pory"

# 165 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused1:
# 166 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 167 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 168 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 169 "data/maps/RusturfTunnel/scripts.pory"

# 170 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused2:
# 171 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 172 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 173 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 174 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 175 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 176 "data/maps/RusturfTunnel/scripts.pory"

# 177 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused3:
# 178 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 179 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_down
# 180 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 181 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 182 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 183 "data/maps/RusturfTunnel/scripts.pory"

# 184 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBoyfriend1:
# 185 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 186 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 187 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 188 "data/maps/RusturfTunnel/scripts.pory"

# 189 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBoyfriend:
# 190 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 191 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 192 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 193 "data/maps/RusturfTunnel/scripts.pory"

# 194 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendFaceRight:
# 195 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 196 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 197 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 198 "data/maps/RusturfTunnel/scripts.pory"

# 199 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendExit1:
# 200 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 201 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 202 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 203 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 204 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 205 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 206 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 207 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 208 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 209 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 210 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 211 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 212 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 213 "data/maps/RusturfTunnel/scripts.pory"

# 214 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendExit:
# 215 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 216 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 217 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 218 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 219 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 220 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 221 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 222 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 223 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 224 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 225 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 226 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 227 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 228 "data/maps/RusturfTunnel/scripts.pory"

# 229 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendApproachPlayer:
# 230 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 231 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 232 "data/maps/RusturfTunnel/scripts.pory"

# 233 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendApproachWanda1:
# 234 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_up
# 235 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_up
# 236 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_up
# 237 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 238 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 239 "data/maps/RusturfTunnel/scripts.pory"

# 240 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendApproachWanda:
# 241 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_right
# 242 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_right
# 243 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 244 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 245 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 246 "data/maps/RusturfTunnel/scripts.pory"

# 247 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos1::
# 248 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 1
# 249 "data/maps/RusturfTunnel/scripts.pory"
	end
# 250 "data/maps/RusturfTunnel/scripts.pory"

# 251 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos2::
# 252 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 2
# 253 "data/maps/RusturfTunnel/scripts.pory"
	end
# 254 "data/maps/RusturfTunnel/scripts.pory"

# 255 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos3::
# 256 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 3
# 257 "data/maps/RusturfTunnel/scripts.pory"
	end
# 258 "data/maps/RusturfTunnel/scripts.pory"

# 259 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_AquaGruntBackUp::
# 260 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 261 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ComeAndGetSome, MSGBOX_DEFAULT
# 262 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 263 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_GRUNT, RusturfTunnel_Movement_GruntAndPeekoBackUp
# 264 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_PEEKO, RusturfTunnel_Movement_GruntAndPeekoBackUp
# 265 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 266 "data/maps/RusturfTunnel/scripts.pory"
	copyobjectxytoperm LOCALID_RUSTURF_TUNNEL_GRUNT
# 267 "data/maps/RusturfTunnel/scripts.pory"
	copyobjectxytoperm LOCALID_RUSTURF_TUNNEL_PEEKO
# 268 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 3
# 269 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
# 270 "data/maps/RusturfTunnel/scripts.pory"
	end
# 271 "data/maps/RusturfTunnel/scripts.pory"

# 272 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_GruntAndPeekoBackUp:
# 273 "data/maps/RusturfTunnel/scripts.pory"
	lock_facing_direction
# 274 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 275 "data/maps/RusturfTunnel/scripts.pory"
	unlock_facing_direction
# 276 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 277 "data/maps/RusturfTunnel/scripts.pory"

# 278 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Peeko::
# 279 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 280 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 281 "data/maps/RusturfTunnel/scripts.pory"
	waitse
# 282 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 283 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_Peeko, MSGBOX_DEFAULT
# 284 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 285 "data/maps/RusturfTunnel/scripts.pory"
	release
# 286 "data/maps/RusturfTunnel/scripts.pory"
	end
# 287 "data/maps/RusturfTunnel/scripts.pory"

# 288 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Grunt::
# 289 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 290 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 291 "data/maps/RusturfTunnel/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 292 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_GruntIntro, MSGBOX_DEFAULT
# 293 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_RUSTURF_TUNNEL, RusturfTunnel_Text_GruntDefeat
# 294 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_GruntTakePackage, MSGBOX_DEFAULT
# 295 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_DEVON_GOODS
# 296 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 297 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PushPlayerAsideForGrunt
# 298 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_GRUNT, RusturfTunnel_Movement_GruntEscape
# 299 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 300 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_TUNNEL_GRUNT
# 301 "data/maps/RusturfTunnel/scripts.pory"
	delay 50
# 302 "data/maps/RusturfTunnel/scripts.pory"
	addobject LOCALID_RUSTURF_TUNNEL_BRINEY
# 303 "data/maps/RusturfTunnel/scripts.pory"
	applywaitmovement LOCALID_RUSTURF_TUNNEL_BRINEY, RusturfTunnel_Movement_BrineyApproachPeeko1
# 304 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerMoveAsideForBriney
# 305 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, RusturfTunnel_Movement_BrineyApproachPeeko2
# 306 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 307 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_PeekoGladToSeeYouSafe, MSGBOX_DEFAULT
# 308 "data/maps/RusturfTunnel/scripts.pory"
	applywaitmovement LOCALID_RUSTURF_TUNNEL_BRINEY, Common_Movement_FacePlayer
# 309 "data/maps/RusturfTunnel/scripts.pory"
	message RusturfTunnel_Text_ThankYouLetsGoHomePeeko
# 310 "data/maps/RusturfTunnel/scripts.pory"
	waitmessage
# 311 "data/maps/RusturfTunnel/scripts.pory"
	waitse
# 312 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 313 "data/maps/RusturfTunnel/scripts.pory"
	waitbuttonpress
# 314 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 315 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 316 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerWatchBrineyExit
# 317 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, RusturfTunnel_Movement_BrineyExit
# 318 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_PEEKO, RusturfTunnel_Movement_PeekoExit
# 319 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 320 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_TUNNEL_BRINEY
# 321 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_TUNNEL_PEEKO
# 322 "data/maps/RusturfTunnel/scripts.pory"
	clearflag FLAG_DEVON_GOODS_STOLEN
# 323 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_RECOVERED_DEVON_GOODS
# 324 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 4
# 325 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 326 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 327 "data/maps/RusturfTunnel/scripts.pory"
	release
# 328 "data/maps/RusturfTunnel/scripts.pory"
	end
# 329 "data/maps/RusturfTunnel/scripts.pory"

# 330 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PushPlayerAsideForGrunt:
# 331 "data/maps/RusturfTunnel/scripts.pory"
	face_down
# 332 "data/maps/RusturfTunnel/scripts.pory"
	lock_facing_direction
# 333 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 334 "data/maps/RusturfTunnel/scripts.pory"
	unlock_facing_direction
# 335 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 336 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 337 "data/maps/RusturfTunnel/scripts.pory"

# 338 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerMoveAsideForBriney:
# 339 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 340 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 341 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 342 "data/maps/RusturfTunnel/scripts.pory"

# 343 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_GruntEscape:
# 344 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 345 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 346 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 347 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 348 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 349 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 350 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 351 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 352 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 353 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 354 "data/maps/RusturfTunnel/scripts.pory"

# 355 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyApproachPeeko1:
# 356 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 357 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 358 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 359 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 360 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 361 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 362 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 363 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 364 "data/maps/RusturfTunnel/scripts.pory"

# 365 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyExit:
# 366 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 367 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 368 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 369 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 370 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 371 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 372 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 373 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 374 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 375 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 376 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 377 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 378 "data/maps/RusturfTunnel/scripts.pory"

# 379 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBrineyExit:
# 380 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 381 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 382 "data/maps/RusturfTunnel/scripts.pory"
	delay_4
# 383 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 384 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 385 "data/maps/RusturfTunnel/scripts.pory"

# 386 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyApproachPeeko2:
# 387 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 388 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 389 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 390 "data/maps/RusturfTunnel/scripts.pory"

# 391 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PeekoExit:
# 392 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 393 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 394 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 395 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 396 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 397 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 398 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 399 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 400 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 401 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 402 "data/maps/RusturfTunnel/scripts.pory"

# 403 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Mike::
# 404 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_single TRAINER_MIKE_2, RusturfTunnel_Text_MikeIntro, RusturfTunnel_Text_MikeDefeat
# 405 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_MikePostBattle, MSGBOX_AUTOCLOSE
# 406 "data/maps/RusturfTunnel/scripts.pory"
	end
# 407 "data/maps/RusturfTunnel/scripts.pory"

# 408 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ComeAndGetSome:
# 409 "data/maps/RusturfTunnel/scripts.pory"
	.string "What, are you coming?\n"
# 410 "data/maps/RusturfTunnel/scripts.pory"
	.string "Come and get some, then!$"
# 411 "data/maps/RusturfTunnel/scripts.pory"

# 412 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_Peeko:
# 413 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO: Pii pihyoh!$"
# 414 "data/maps/RusturfTunnel/scripts.pory"

# 415 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntIntro:
# 416 "data/maps/RusturfTunnel/scripts.pory"
	.string "Grah, keelhaul it all!\p"
# 417 "data/maps/RusturfTunnel/scripts.pory"
	.string "That hostage POKéMON turned out to\n"
# 418 "data/maps/RusturfTunnel/scripts.pory"
	.string "be worthless!\p"
# 419 "data/maps/RusturfTunnel/scripts.pory"
	.string "And to think I made a getaway…\n"
# 420 "data/maps/RusturfTunnel/scripts.pory"
	.string "In this tunnel to nowhere!\p"
# 421 "data/maps/RusturfTunnel/scripts.pory"
	.string "Hey! You!\n"
# 422 "data/maps/RusturfTunnel/scripts.pory"
	.string "So you want to battle me?$"
# 423 "data/maps/RusturfTunnel/scripts.pory"

# 424 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntDefeat:
# 425 "data/maps/RusturfTunnel/scripts.pory"
	.string "Urrrggh! My career in crime comes to\n"
# 426 "data/maps/RusturfTunnel/scripts.pory"
	.string "a dead end!$"
# 427 "data/maps/RusturfTunnel/scripts.pory"

# 428 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntTakePackage:
# 429 "data/maps/RusturfTunnel/scripts.pory"
	.string "This is plain not right…\p"
# 430 "data/maps/RusturfTunnel/scripts.pory"
	.string "The BOSS told me this would be a\n"
# 431 "data/maps/RusturfTunnel/scripts.pory"
	.string "slick-and-easy job to pull.\p"
# 432 "data/maps/RusturfTunnel/scripts.pory"
	.string "All I had to do was steal some package\n"
# 433 "data/maps/RusturfTunnel/scripts.pory"
	.string "from DEVON.\p"
# 434 "data/maps/RusturfTunnel/scripts.pory"
	.string "Tch!\n"
# 435 "data/maps/RusturfTunnel/scripts.pory"
	.string "You want it back that badly, take it!$"
# 436 "data/maps/RusturfTunnel/scripts.pory"

# 437 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_PeekoGladToSeeYouSafe:
# 438 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO!\n"
# 439 "data/maps/RusturfTunnel/scripts.pory"
	.string "Am I glad to see you're safe!$"
# 440 "data/maps/RusturfTunnel/scripts.pory"

# 441 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ThankYouLetsGoHomePeeko:
# 442 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO owes her life to you!\p"
# 443 "data/maps/RusturfTunnel/scripts.pory"
	.string "They call me MR. BRINEY.\n"
# 444 "data/maps/RusturfTunnel/scripts.pory"
	.string "And, you are?\p"
# 445 "data/maps/RusturfTunnel/scripts.pory"
	.string "… … … … … … … …\n"
# 446 "data/maps/RusturfTunnel/scripts.pory"
	.string "… … … … … … … …\p"
# 447 "data/maps/RusturfTunnel/scripts.pory"
	.string "Ah, so you are {PLAYER}{KUN}!\n"
# 448 "data/maps/RusturfTunnel/scripts.pory"
	.string "I sincerely thank you!\p"
# 449 "data/maps/RusturfTunnel/scripts.pory"
	.string "Now, if there's anything that troubles\n"
# 450 "data/maps/RusturfTunnel/scripts.pory"
	.string "you, don't hesitate to tell me!\p"
# 451 "data/maps/RusturfTunnel/scripts.pory"
	.string "You can usually find me in my cottage\n"
# 452 "data/maps/RusturfTunnel/scripts.pory"
	.string "by the sea near PETALBURG WOODS.\p"
# 453 "data/maps/RusturfTunnel/scripts.pory"
	.string "Come, PEEKO, we should make our way\n"
# 454 "data/maps/RusturfTunnel/scripts.pory"
	.string "home.\p"
# 455 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO: Pihyoh!$"
# 456 "data/maps/RusturfTunnel/scripts.pory"

# 457 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_WhyCantTheyKeepDigging:
# 458 "data/maps/RusturfTunnel/scripts.pory"
	.string "… …\p"
# 459 "data/maps/RusturfTunnel/scripts.pory"
	.string "Why can't they keep digging?\n"
# 460 "data/maps/RusturfTunnel/scripts.pory"
	.string "Is the bedrock too hard?\p"
# 461 "data/maps/RusturfTunnel/scripts.pory"
	.string "My beloved awaits me in VERDANTURF\n"
# 462 "data/maps/RusturfTunnel/scripts.pory"
	.string "TOWN just beyond here…\p"
# 463 "data/maps/RusturfTunnel/scripts.pory"
	.string "If RUSTBORO and VERDANTURF were\n"
# 464 "data/maps/RusturfTunnel/scripts.pory"
	.string "joined by this tunnel, I could visit\l"
# 465 "data/maps/RusturfTunnel/scripts.pory"
	.string "her every day…\p"
# 466 "data/maps/RusturfTunnel/scripts.pory"
	.string "But this…\n"
# 467 "data/maps/RusturfTunnel/scripts.pory"
	.string "What am I to do?$"
# 468 "data/maps/RusturfTunnel/scripts.pory"

# 469 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ToGetToVerdanturf:
# 470 "data/maps/RusturfTunnel/scripts.pory"
	.string "To get from RUSTBORO to VERDANTURF,\n"
# 471 "data/maps/RusturfTunnel/scripts.pory"
	.string "you need to go to DEWFORD, then pass\l"
# 472 "data/maps/RusturfTunnel/scripts.pory"
	.string "through SLATEPORT and MAUVILLE…$"
# 473 "data/maps/RusturfTunnel/scripts.pory"

# 474 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_YouShatteredBoulderTakeHM:
# 475 "data/maps/RusturfTunnel/scripts.pory"
	.string "Wow! You shattered that boulder\n"
# 476 "data/maps/RusturfTunnel/scripts.pory"
	.string "blocking the way.\p"
# 477 "data/maps/RusturfTunnel/scripts.pory"
	.string "To show you how much I appreciate it,\n"
# 478 "data/maps/RusturfTunnel/scripts.pory"
	.string "I'd like you to have this HM.$"
# 479 "data/maps/RusturfTunnel/scripts.pory"

# 480 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ExplainStrength:
# 481 "data/maps/RusturfTunnel/scripts.pory"
	.string "That HM contains STRENGTH.\p"
# 482 "data/maps/RusturfTunnel/scripts.pory"
	.string "If a muscular POKéMON were to learn\n"
# 483 "data/maps/RusturfTunnel/scripts.pory"
	.string "that, it would be able to move even\l"
# 484 "data/maps/RusturfTunnel/scripts.pory"
	.string "large boulders.$"
# 485 "data/maps/RusturfTunnel/scripts.pory"

# 486 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_WandaReunion:
# 487 "data/maps/RusturfTunnel/scripts.pory"
	.string "WANDA!\n"
# 488 "data/maps/RusturfTunnel/scripts.pory"
	.string "Now I can see you anytime!\p"
# 489 "data/maps/RusturfTunnel/scripts.pory"
	.string "WANDA: That's…wonderful.\p"
# 490 "data/maps/RusturfTunnel/scripts.pory"
	.string "Please, take some rest at my home.$"
# 491 "data/maps/RusturfTunnel/scripts.pory"

# 492 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_BoyfriendOnOtherSideOfRock:
# 493 "data/maps/RusturfTunnel/scripts.pory"
	.string "On the other side of this rock…\n"
# 494 "data/maps/RusturfTunnel/scripts.pory"
	.string "My boyfriend is there.\p"
# 495 "data/maps/RusturfTunnel/scripts.pory"
	.string "He… He's not just digging the tunnel\n"
# 496 "data/maps/RusturfTunnel/scripts.pory"
	.string "to come see me.\p"
# 497 "data/maps/RusturfTunnel/scripts.pory"
	.string "He works his hands raw and rough\n"
# 498 "data/maps/RusturfTunnel/scripts.pory"
	.string "for the benefit of everyone.$"
# 499 "data/maps/RusturfTunnel/scripts.pory"

# 500 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikeIntro:
# 501 "data/maps/RusturfTunnel/scripts.pory"
	.string "What do you call a wild man up in the\n"
# 502 "data/maps/RusturfTunnel/scripts.pory"
	.string "mountains? A mountain man, right?\p"
# 503 "data/maps/RusturfTunnel/scripts.pory"
	.string "So why don't they call a POKéMON in\n"
# 504 "data/maps/RusturfTunnel/scripts.pory"
	.string "the mountains a mountain POKéMON?$"
# 505 "data/maps/RusturfTunnel/scripts.pory"

# 506 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikeDefeat:
# 507 "data/maps/RusturfTunnel/scripts.pory"
	.string "My POKéMON…\n"
# 508 "data/maps/RusturfTunnel/scripts.pory"
	.string "Ran out of power…$"
# 509 "data/maps/RusturfTunnel/scripts.pory"

# 510 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikePostBattle:
# 511 "data/maps/RusturfTunnel/scripts.pory"
	.string "They halted development here to\n"
# 512 "data/maps/RusturfTunnel/scripts.pory"
	.string "protect POKéMON, right?\l"
# 513 "data/maps/RusturfTunnel/scripts.pory"
	.string "There's a feel-good story!$"
