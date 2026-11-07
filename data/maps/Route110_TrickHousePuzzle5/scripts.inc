# 1 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_MapScripts::
# 3 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHousePuzzle5_OnTransition
# 4 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.byte 0
# 5 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 6 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_OnTransition:
# 7 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_1, 0
# 8 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_2, 0
# 9 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_3, 0
# 10 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_4, 0
# 11 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_5, 0
# 12 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_8, 0
# 13 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 14 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 15 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Scroll::
# 16 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 17 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_5_STATE, 0, Route110_TrickHousePuzzle5_EventScript_FoundScroll
# 18 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
# 19 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 20 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 21 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_FoundScroll::
# 22 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_5_STATE, 1
# 23 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
# 24 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 25 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 26 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1::
# 27 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 28 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_1, Common_Movement_FacePlayer
# 29 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq VAR_TEMP_1, 1, Route110_TrickHousePuzzle5_EventScript_CorrectGoThrough
# 30 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 31 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate
# 32 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 33 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 34 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2::
# 35 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 36 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_2, Common_Movement_FacePlayer
# 37 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, Route110_TrickHousePuzzle5_EventScript_CorrectGoThrough
# 38 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 39 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate
# 40 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 41 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 42 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3::
# 43 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 44 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_3, Common_Movement_FacePlayer
# 45 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq VAR_TEMP_3, 1, Route110_TrickHousePuzzle5_EventScript_CorrectGoThrough
# 46 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 47 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate
# 48 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 49 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 50 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4::
# 51 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 52 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_4, Common_Movement_FacePlayer
# 53 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq VAR_TEMP_4, 1, Route110_TrickHousePuzzle5_EventScript_CorrectGoThrough
# 54 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 55 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate
# 56 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 57 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 58 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5::
# 59 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 60 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_5, Common_Movement_FacePlayer
# 61 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq VAR_TEMP_5, 1, Route110_TrickHousePuzzle5_EventScript_CorrectGoThrough
# 62 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 63 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll5Activate
# 64 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 65 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 66 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Trigger0::
# 67 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 68 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 69 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate
# 70 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 71 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 72 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Trigger1::
# 73 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 74 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 1
# 75 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate
# 76 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 77 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 78 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Trigger2::
# 79 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 80 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 2
# 81 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate
# 82 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 83 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 84 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Trigger3::
# 85 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 86 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 3
# 87 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate
# 88 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 89 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 90 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Trigger4::
# 91 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 92 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 4
# 93 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate
# 94 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 95 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 96 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Trigger0::
# 97 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 98 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 99 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate
# 100 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 101 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 102 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Trigger1::
# 103 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 104 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 1
# 105 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate
# 106 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 107 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 108 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Trigger2::
# 109 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 110 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 2
# 111 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate
# 112 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 113 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 114 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Trigger3::
# 115 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 116 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 3
# 117 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate
# 118 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 119 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 120 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Trigger4::
# 121 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 122 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 4
# 123 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate
# 124 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 125 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 126 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Trigger5::
# 127 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 128 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 5
# 129 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate
# 130 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 131 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 132 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Trigger0::
# 133 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 134 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 135 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate
# 136 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 137 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 138 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Trigger1::
# 139 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 140 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 1
# 141 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate
# 142 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 143 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 144 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Trigger2::
# 145 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 146 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 2
# 147 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate
# 148 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 149 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 150 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Trigger3::
# 151 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 152 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 3
# 153 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate
# 154 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 155 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 156 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Trigger4::
# 157 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 158 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 4
# 159 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate
# 160 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 161 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 162 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Trigger0::
# 163 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 164 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 165 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate
# 166 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 167 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 168 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Trigger1::
# 169 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 170 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 1
# 171 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate
# 172 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 173 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 174 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Trigger2::
# 175 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 176 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 2
# 177 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate
# 178 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 179 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 180 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Trigger3::
# 181 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 182 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 3
# 183 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate
# 184 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 185 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 186 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Trigger4::
# 187 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 188 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 4
# 189 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate
# 190 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 191 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 192 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
@ Unused
# 193 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Trigger5::
# 194 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 195 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 5
# 196 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate
# 197 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 198 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 199 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5Trigger0::
# 200 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 201 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 202 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll5Activate
# 203 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 204 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 205 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate::
# 206 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_1, 1
# 207 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_8, LOCALID_MECHADOLL_1
# 208 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	playse SE_PIN
# 209 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_1, Common_Movement_ExclamationMark
# 210 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_1, Common_Movement_Delay48
# 211 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_9, 1, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1
# 212 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_9, 2, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2
# 213 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_9, 3, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3
# 214 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_9, 4, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4
# 215 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll1Intro, MSGBOX_DEFAULT
# 216 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	random 3
# 217 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 218 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz1
# 219 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz2
# 220 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz3
# 221 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 222 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 223 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate::
# 224 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_2, 1
# 225 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_8, LOCALID_MECHADOLL_2
# 226 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	playse SE_PIN
# 227 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_2, Common_Movement_ExclamationMark
# 228 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_2, Common_Movement_Delay48
# 229 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_9, 1, Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight1
# 230 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_9, 2, Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight2
# 231 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_9, 3, Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight3
# 232 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_9, 4, Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight4
# 233 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_9, 5, Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight5
# 234 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll2Intro, MSGBOX_DEFAULT
# 235 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	random 3
# 236 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 237 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz1
# 238 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz2
# 239 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz3
# 240 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 241 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 242 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate::
# 243 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_3, 1
# 244 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_8, LOCALID_MECHADOLL_3
# 245 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	playse SE_PIN
# 246 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_3, Common_Movement_ExclamationMark
# 247 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_3, Common_Movement_Delay48
# 248 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_9, 1, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1
# 249 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_9, 2, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2
# 250 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_9, 3, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3
# 251 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_9, 4, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4
# 252 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll3Intro, MSGBOX_DEFAULT
# 253 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	random 3
# 254 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 255 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz1
# 256 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz2
# 257 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz3
# 258 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 259 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 260 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate::
# 261 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_4, 1
# 262 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_8, LOCALID_MECHADOLL_4
# 263 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	playse SE_PIN
# 264 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_4, Common_Movement_ExclamationMark
# 265 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_4, Common_Movement_Delay48
# 266 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_9, 1, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1
# 267 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_9, 2, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2
# 268 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_9, 3, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3
# 269 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_9, 4, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4
# 270 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll4Intro, MSGBOX_DEFAULT
# 271 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	random 3
# 272 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 273 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz1
# 274 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz2
# 275 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz3
# 276 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 277 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 278 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5Activate::
# 279 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_5, 1
# 280 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_8, LOCALID_MECHADOLL_5
# 281 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	playse SE_PIN
# 282 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_5, Common_Movement_ExclamationMark
# 283 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_5, Common_Movement_Delay48
# 284 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll5Intro, MSGBOX_DEFAULT
# 285 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	random 3
# 286 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 287 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz1
# 288 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz2
# 289 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz3
# 290 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 291 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 292 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz1::
# 293 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz1, MSGBOX_DEFAULT
# 294 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL1_Q1, TRUE
# 295 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 296 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 297 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 298 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 299 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 300 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz2::
# 301 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz2, MSGBOX_DEFAULT
# 302 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL1_Q2, TRUE
# 303 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 304 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 305 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 306 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 307 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 308 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz3::
# 309 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz3, MSGBOX_DEFAULT
# 310 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL1_Q3, TRUE
# 311 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 312 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 313 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 314 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 315 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 316 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz1::
# 317 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz1, MSGBOX_DEFAULT
# 318 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL2_Q1, TRUE
# 319 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 320 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 321 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 322 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 323 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 324 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz2::
# 325 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz2, MSGBOX_DEFAULT
# 326 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL2_Q2, TRUE
# 327 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 328 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 329 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 330 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 331 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 332 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz3::
# 333 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz3, MSGBOX_DEFAULT
# 334 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL2_Q3, TRUE
# 335 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 336 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 337 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 338 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 339 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 340 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz1::
# 341 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz1, MSGBOX_DEFAULT
# 342 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL3_Q1, TRUE
# 343 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 344 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 345 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 346 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 347 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 348 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz2::
# 349 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz2, MSGBOX_DEFAULT
# 350 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL3_Q2, TRUE
# 351 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 352 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 353 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 354 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 355 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 356 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz3::
# 357 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz3, MSGBOX_DEFAULT
# 358 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL3_Q3, TRUE
# 359 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 360 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 361 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 362 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 363 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 364 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz1::
# 365 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz1, MSGBOX_DEFAULT
# 366 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL4_Q1, TRUE
# 367 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 368 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 369 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 370 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 371 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 372 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz2::
# 373 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz2, MSGBOX_DEFAULT
# 374 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL4_Q2, TRUE
# 375 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 376 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 377 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 378 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 379 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 380 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz3::
# 381 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz3, MSGBOX_DEFAULT
# 382 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL4_Q3, TRUE
# 383 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 384 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 385 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 386 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 387 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 388 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz1::
# 389 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz1, MSGBOX_DEFAULT
# 390 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL5_Q1, TRUE
# 391 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 392 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 393 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 394 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 395 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 396 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz2::
# 397 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz2, MSGBOX_DEFAULT
# 398 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL5_Q2, TRUE
# 399 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 400 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 401 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 402 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 403 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 404 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz3::
# 405 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz3, MSGBOX_DEFAULT
# 406 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL5_Q3, TRUE
# 407 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 408 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 409 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 410 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 411 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 412 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer::
# 413 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitse
# 414 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	playse SE_FAILURE
# 415 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_DisappointmentError, MSGBOX_DEFAULT
# 416 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_Movement_MechadollShake
# 417 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_Movement_MechadollShake
# 418 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_Movement_MechadollShake
# 419 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_Movement_MechadollShake
# 420 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_Movement_MechadollShake
# 421 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Wahahahaha, MSGBOX_DEFAULT
# 422 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 423 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_WaitForNextChallenge, MSGBOX_DEFAULT
# 424 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	closemessage
# 425 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE5, 0, 21
# 426 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitstate
# 427 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	releaseall
# 428 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 429 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 430 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_CorrectAnswer::
# 431 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitse
# 432 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	playse SE_SUCCESS
# 433 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectGoThrough
# 434 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 435 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 436 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_CorrectGoThrough::
# 437 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_CorrectGoThrough, MSGBOX_DEFAULT
# 438 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	releaseall
# 439 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 440 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 441 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
@ Absurd redundancy in movement scripts that could be resolved by using VAR_TEMP_8 for applymovement instead
# 442 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
@ Many of the below movement scripts arent even used, see below
# 443 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
@   Mechadoll 2 is the only mechadoll to walk right, all the other WalkRight scripts are unused
# 444 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
@   Mechadoll 5 never walks, all the Mechadoll5Walk scripts are unused
# 445 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
@   No mechadoll walks left 5 paces, all the WalkLeft5 scripts are unused
# 446 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1::
# 447 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft1
# 448 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkLeft1
# 449 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft1
# 450 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft1
# 451 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkLeft1
# 452 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 453 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 454 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2::
# 455 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft2
# 456 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkLeft2
# 457 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft2
# 458 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft2
# 459 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkLeft2
# 460 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 461 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 462 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3::
# 463 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft3
# 464 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkLeft3
# 465 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft3
# 466 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft3
# 467 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkLeft3
# 468 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 469 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 470 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4::
# 471 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft4
# 472 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkLeft4
# 473 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft4
# 474 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft4
# 475 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkLeft4
# 476 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 477 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 478 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft5::
# 479 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft5
# 480 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkLeft5
# 481 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft5
# 482 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft5
# 483 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkLeft5
# 484 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 485 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 486 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight1::
# 487 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkRight1
# 488 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight1
# 489 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkRight1
# 490 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkRight1
# 491 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkRight1
# 492 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 493 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 494 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight2::
# 495 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkRight2
# 496 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight2
# 497 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkRight2
# 498 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkRight2
# 499 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkRight2
# 500 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 501 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 502 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight3::
# 503 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkRight3
# 504 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight3
# 505 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkRight3
# 506 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkRight3
# 507 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkRight3
# 508 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 509 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 510 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight4::
# 511 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkRight4
# 512 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight4
# 513 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkRight4
# 514 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkRight4
# 515 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkRight4
# 516 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 517 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 518 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight5::
# 519 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkRight5
# 520 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight5
# 521 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkRight5
# 522 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkRight5
# 523 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkRight5
# 524 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 525 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 526 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft1::
# 527 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_Movement_WalkLeft1
# 528 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 529 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 530 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkLeft1::
# 531 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_Movement_WalkLeft1
# 532 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 533 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 534 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft1::
# 535 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_Movement_WalkLeft1
# 536 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 537 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 538 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft1::
# 539 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_Movement_WalkLeft1
# 540 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 541 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 542 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkLeft1::
# 543 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_Movement_WalkLeft1
# 544 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 545 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 546 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft2::
# 547 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_Movement_WalkLeft2
# 548 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 549 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 550 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkLeft2::
# 551 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_Movement_WalkLeft2
# 552 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 553 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 554 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft2::
# 555 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_Movement_WalkLeft2
# 556 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 557 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 558 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft2::
# 559 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_Movement_WalkLeft2
# 560 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 561 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 562 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkLeft2::
# 563 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_Movement_WalkLeft2
# 564 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 565 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 566 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft3::
# 567 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_Movement_WalkLeft3
# 568 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 569 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 570 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkLeft3::
# 571 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_Movement_WalkLeft3
# 572 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 573 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 574 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft3::
# 575 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_Movement_WalkLeft3
# 576 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 577 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 578 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft3::
# 579 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_Movement_WalkLeft3
# 580 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 581 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 582 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkLeft3::
# 583 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_Movement_WalkLeft3
# 584 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 585 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 586 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft4::
# 587 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_Movement_WalkLeft4
# 588 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 589 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 590 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkLeft4::
# 591 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_Movement_WalkLeft4
# 592 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 593 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 594 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft4::
# 595 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_Movement_WalkLeft4
# 596 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 597 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 598 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft4::
# 599 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_Movement_WalkLeft4
# 600 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 601 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 602 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkLeft4::
# 603 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_Movement_WalkLeft4
# 604 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 605 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 606 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft5::
# 607 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_Movement_WalkLeft5
# 608 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 609 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 610 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkLeft5::
# 611 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_Movement_WalkLeft5
# 612 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 613 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 614 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft5::
# 615 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_Movement_WalkLeft5
# 616 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 617 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 618 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft5::
# 619 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_Movement_WalkLeft5
# 620 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 621 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 622 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkLeft5::
# 623 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_Movement_WalkLeft5
# 624 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 625 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 626 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkRight1::
# 627 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_Movement_WalkRight1
# 628 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 629 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 630 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight1::
# 631 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_Movement_WalkRight1
# 632 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 633 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 634 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkRight1::
# 635 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_Movement_WalkRight1
# 636 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 637 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 638 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkRight1::
# 639 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_Movement_WalkRight1
# 640 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 641 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 642 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkRight1::
# 643 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_Movement_WalkRight1
# 644 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 645 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 646 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkRight2::
# 647 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_Movement_WalkRight2
# 648 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 649 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 650 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight2::
# 651 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_Movement_WalkRight2
# 652 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 653 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 654 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkRight2::
# 655 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_Movement_WalkRight2
# 656 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 657 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 658 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkRight2::
# 659 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_Movement_WalkRight2
# 660 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 661 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 662 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkRight2::
# 663 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_Movement_WalkRight2
# 664 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 665 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 666 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkRight3::
# 667 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_Movement_WalkRight3
# 668 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 669 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 670 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight3::
# 671 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_Movement_WalkRight3
# 672 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 673 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 674 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkRight3::
# 675 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_Movement_WalkRight3
# 676 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 677 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 678 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkRight3::
# 679 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_Movement_WalkRight3
# 680 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 681 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 682 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkRight3::
# 683 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_Movement_WalkRight3
# 684 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 685 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 686 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkRight4::
# 687 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_Movement_WalkRight4
# 688 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 689 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 690 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight4::
# 691 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_Movement_WalkRight4
# 692 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 693 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 694 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkRight4::
# 695 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_Movement_WalkRight4
# 696 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 697 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 698 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkRight4::
# 699 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_Movement_WalkRight4
# 700 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 701 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 702 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkRight4::
# 703 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_Movement_WalkRight4
# 704 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 705 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 706 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkRight5::
# 707 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_Movement_WalkRight5
# 708 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 709 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 710 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight5::
# 711 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_Movement_WalkRight5
# 712 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 713 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 714 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkRight5::
# 715 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_Movement_WalkRight5
# 716 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 717 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 718 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkRight5::
# 719 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_Movement_WalkRight5
# 720 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 721 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 722 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkRight5::
# 723 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applywaitmovement LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_Movement_WalkRight5
# 724 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 725 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 726 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Movement_WalkLeft1:
# 727 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 728 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	step_end
# 729 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 730 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Movement_WalkLeft2:
# 731 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 732 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 733 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	step_end
# 734 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 735 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Movement_WalkLeft3:
# 736 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 737 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 738 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 739 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	step_end
# 740 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 741 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Movement_WalkLeft4:
# 742 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 743 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 744 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 745 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 746 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	step_end
# 747 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 748 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Movement_WalkLeft5:
# 749 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 750 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 751 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 752 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 753 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 754 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	step_end
# 755 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 756 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Movement_WalkRight1:
# 757 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 758 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	step_end
# 759 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 760 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Movement_WalkRight2:
# 761 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 762 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 763 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	step_end
# 764 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 765 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Movement_WalkRight3:
# 766 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 767 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 768 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 769 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	step_end
# 770 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 771 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Movement_WalkRight4:
# 772 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 773 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 774 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 775 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 776 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	step_end
# 777 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 778 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Movement_WalkRight5:
# 779 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 780 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 781 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 782 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 783 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 784 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	step_end
# 785 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 786 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Movement_MechadollShake:
# 787 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 788 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 789 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 790 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 791 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 792 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 793 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 794 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 795 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 796 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 797 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 798 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 799 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 800 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 801 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 802 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 803 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 804 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 805 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 806 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 807 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 808 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 809 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 810 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 811 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 812 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 813 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 814 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 815 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 816 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 817 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 818 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 819 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 820 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 821 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 822 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 823 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 824 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 825 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 826 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 827 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 828 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 829 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 830 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 831 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_down
# 832 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	step_end
# 833 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 834 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_WroteSecretCodeLockOpened:
# 835 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "{PLAYER} wrote down the secret code\n"
# 836 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "on the door.\p"
# 837 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "“TRICK MASTER is a genius.”\n"
# 838 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "… … … … … … … …\p"
# 839 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "The lock clicked open!$"
# 840 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 841 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll1Intro:
# 842 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "CLICKETY-CLACK…\n"
# 843 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 1 AM I!\p"
# 844 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "IF YOU ANSWER QUIZZES CORRECTLY,\n"
# 845 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "THEN YOU WILL GO TO MECHADOLL 5.\l"
# 846 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "THEN YOU CAN OBTAIN THE SECRET CODE.$"
# 847 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 848 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz1:
# 849 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 1 QUIZ.\p"
# 850 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "One of these POKéMON is not found\n"
# 851 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "on ROUTE 110. Which one is it?$"
# 852 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 853 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz2:
# 854 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 1 QUIZ.\p"
# 855 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "One of these POKéMON is not of the\n"
# 856 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "WATER type. Which one is it?$"
# 857 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 858 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz3:
# 859 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 1 QUIZ.\p"
# 860 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "One of these POKéMON does not use\n"
# 861 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "LEECH LIFE. Which one is it?$"
# 862 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 863 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_CorrectGoThrough:
# 864 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "CONGRATULATIONS. CORRECT YOU ARE.\n"
# 865 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "GO THROUGH. PLEASE.$"
# 866 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 867 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_DisappointmentError:
# 868 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "BZZZT. DISAPPOINTMENT.\n"
# 869 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "ERROR.$"
# 870 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 871 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Wahahahaha:
# 872 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "WAHAHAHAHA! WAHAHAHAHA!\n"
# 873 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "CLICKETY-CLACK!$"
# 874 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 875 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_WaitForNextChallenge:
# 876 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "YOUR NEXT CHALLENGE WE WAIT FOR.$"
# 877 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 878 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll2Intro:
# 879 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "CLICKETY-CLACK…\n"
# 880 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 2 AM I!\p"
# 881 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 1'S QUIZ DIFFICULTY LEVEL\n"
# 882 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "IS SET TOO LOW.$"
# 883 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 884 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz1:
# 885 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 2 QUIZ.\p"
# 886 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "Which of these POKéMON did WALLY\n"
# 887 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "borrow from your father?$"
# 888 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 889 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz2:
# 890 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 2 QUIZ.\p"
# 891 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "Which of these POKéMON was chasing\n"
# 892 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "PROF. BIRCH?$"
# 893 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 894 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz3:
# 895 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 2 QUIZ.\p"
# 896 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "Which of these POKéMON did TEAM AQUA\n"
# 897 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "use in PETALBURG FOREST?$"
# 898 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 899 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll3Intro:
# 900 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "CLICKETY-CLACK…\n"
# 901 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 3 AM I!\p"
# 902 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MATTERS OF MONEY ARE MY SOLE FOCUS.$"
# 903 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 904 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz1:
# 905 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 3 QUIZ.\p"
# 906 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "Which costs more?\n"
# 907 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "Three HARBOR MAILS or one BURN HEAL?$"
# 908 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 909 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz2:
# 910 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 3 QUIZ.\p"
# 911 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "Sell one GREAT BALL and buy\n"
# 912 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "one POTION. How much money remains?$"
# 913 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 914 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz3:
# 915 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 3 QUIZ.\p"
# 916 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "Do one REPEL and SODA POP cost\n"
# 917 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "more than one SUPER POTION?$"
# 918 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 919 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll4Intro:
# 920 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "CLICKETY-CLACK…\n"
# 921 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 4 THAT IS ME!\p"
# 922 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MY QUIZ IS AN OBJECT OF BEAUTY.$"
# 923 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 924 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz1:
# 925 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 4 QUIZ.\p"
# 926 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "In SEASHORE HOUSE, were there more men\n"
# 927 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "or women?$"
# 928 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 929 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz2:
# 930 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 4 QUIZ.\p"
# 931 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "In LAVARIDGE TOWN, were there more\n"
# 932 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "elderly men or elderly women?$"
# 933 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 934 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz3:
# 935 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 4 QUIZ.\p"
# 936 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "In the TRAINER'S SCHOOL, how many\n"
# 937 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "girl students were there?$"
# 938 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 939 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll5Intro:
# 940 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "CLICKETY-CLACK…\n"
# 941 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 5 AM I!\p"
# 942 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "THE MASTER'S BEST AND PROUDEST\n"
# 943 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "ACHIEVEMENT AM I.$"
# 944 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 945 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz1:
# 946 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 5 QUIZ.\p"
# 947 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "In SLATEPORT's POKéMON FAN CLUB,\n"
# 948 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "how many POKéMON were there?$"
# 949 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 950 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz2:
# 951 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 5 QUIZ.\p"
# 952 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "In FORTREE CITY, how many\n"
# 953 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "tree houses were there?$"
# 954 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 955 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz3:
# 956 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 5 QUIZ.\p"
# 957 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "On the CYCLING ROAD, how many\n"
# 958 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "TRIATHLETES were there?$"
