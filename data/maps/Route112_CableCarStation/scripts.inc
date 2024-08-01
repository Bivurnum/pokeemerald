# 4 "data/maps/Route112_CableCarStation/scripts.pory"

# 5 "data/maps/Route112_CableCarStation/scripts.pory"
.set LOCALID_ATTENDANT, 1
# 6 "data/maps/Route112_CableCarStation/scripts.pory"
.set LOCALID_RIVAL2, 3

Route112_CableCarStation_MapScripts::
# 10 "data/maps/Route112_CableCarStation/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route112_CableCarStation_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 14 "data/maps/Route112_CableCarStation/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route112_CableCarStation_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route112_CableCarStation_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data/maps/Route112_CableCarStation/scripts.pory"
	setescapewarp MAP_ROUTE112, 28, 28
# 12 "data/maps/Route112_CableCarStation/scripts.pory"
	call_if_eq VAR_CABLE_CAR_STATION_STATE, 2, Route112_CableCarStation_EventScript_MoveAttendantAside
	return

Route112_CableCarStation_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 15 "data/maps/Route112_CableCarStation/scripts.pory"
	map_script_2 VAR_CABLE_CAR_STATION_STATE, 2, Route112_CableCarStation_EventScript_ExitCableCar
	.2byte 0


Route112_CableCarStation_EventScript_MoveAttendantAside::
# 20 "data/maps/Route112_CableCarStation/scripts.pory"
	setobjectxyperm 1, 7, 4
# 21 "data/maps/Route112_CableCarStation/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
	return


Route112_CableCarStation_EventScript_ExitCableCar::
# 26 "data/maps/Route112_CableCarStation/scripts.pory"
	lockall
# 27 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route112_CableCarStation_Movement_ExitCableCar
# 28 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement 1, Route112_CableCarStation_Movement_FollowPlayerOutFromCableCar
# 29 "data/maps/Route112_CableCarStation/scripts.pory"
	waitmovement 0
# 30 "data/maps/Route112_CableCarStation/scripts.pory"
	setvar VAR_CABLE_CAR_STATION_STATE, 0
# 31 "data/maps/Route112_CableCarStation/scripts.pory"
	setobjectxyperm 1, 6, 7
# 32 "data/maps/Route112_CableCarStation/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 33 "data/maps/Route112_CableCarStation/scripts.pory"
	releaseall
	end


Route112_CableCarStation_EventScript_Rival2Trigger1::
# 38 "data/maps/Route112_CableCarStation/scripts.pory"
	lock
# 39 "data/maps/Route112_CableCarStation/scripts.pory"
	call Route112_CableCarStation_EventScript_BeginRival2Scene
# 40 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route112_CableCarStation_Movement_WalkToRival2Left
# 41 "data/maps/Route112_CableCarStation/scripts.pory"
	goto Route112_CableCarStation_EventScript_Rival2Scene
	end


Route112_CableCarStation_EventScript_Rival2Trigger2::
# 46 "data/maps/Route112_CableCarStation/scripts.pory"
	lock
# 47 "data/maps/Route112_CableCarStation/scripts.pory"
	call Route112_CableCarStation_EventScript_BeginRival2Scene
# 48 "data/maps/Route112_CableCarStation/scripts.pory"
	goto Route112_CableCarStation_EventScript_Rival2Scene
	end


Route112_CableCarStation_EventScript_Rival2Trigger3::
# 53 "data/maps/Route112_CableCarStation/scripts.pory"
	lock
# 54 "data/maps/Route112_CableCarStation/scripts.pory"
	call Route112_CableCarStation_EventScript_BeginRival2Scene
# 55 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route112_CableCarStation_Movement_WalkToRival2Right
# 56 "data/maps/Route112_CableCarStation/scripts.pory"
	goto Route112_CableCarStation_EventScript_Rival2Scene
	end


Route112_CableCarStation_EventScript_BeginRival2Scene::
# 61 "data/maps/Route112_CableCarStation/scripts.pory"
	playse SE_EXIT
# 62 "data/maps/Route112_CableCarStation/scripts.pory"
	addobject 3
# 63 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 64 "data/maps/Route112_CableCarStation/scripts.pory"
	waitmovement 0
# 65 "data/maps/Route112_CableCarStation/scripts.pory"
	delay 20
# 66 "data/maps/Route112_CableCarStation/scripts.pory"
	waitse
# 67 "data/maps/Route112_CableCarStation/scripts.pory"
	rival2talk Route112_CableCarStation_Text_SpencerGladICaughtYou, Route112_CableCarStation_Text_BrenGladICaughtYou, Route112_CableCarStation_Text_KyleGladICaughtYou
# 70 "data/maps/Route112_CableCarStation/scripts.pory"
	closemessage
# 71 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement 3, Route112_CableCarStation_Movement_WalkToPlayer
	return


Route112_CableCarStation_EventScript_Rival2Scene::
# 76 "data/maps/Route112_CableCarStation/scripts.pory"
	waitmovement 0
# 77 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement 3, Common_Movement_BeginTalkUp
# 78 "data/maps/Route112_CableCarStation/scripts.pory"
	waitmovement 0
# 79 "data/maps/Route112_CableCarStation/scripts.pory"
	rival2talk Route112_CableCarStation_Text_SpencerLetsTakeTheCableCar, Route112_CableCarStation_Text_BrenLetsTakeTheCableCar, Route112_CableCarStation_Text_KyleLetsTakeTheCableCar
# 82 "data/maps/Route112_CableCarStation/scripts.pory"
	closemessage
# 83 "data/maps/Route112_CableCarStation/scripts.pory"
	delay 16
# 84 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement 3, Common_Movement_Walk_Up
# 85 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Walk_Up
# 86 "data/maps/Route112_CableCarStation/scripts.pory"
	waitmovement 0
# 87 "data/maps/Route112_CableCarStation/scripts.pory"
	delay 16
# 88 "data/maps/Route112_CableCarStation/scripts.pory"
	msgbox Route112_CableCarStation_Text_BothOfYouStepThisWay, MSGBOX_AUTOCLOSE
# 89 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement 1, Route112_CableCarStation_Movement_LeadPlayerToCableCar
# 90 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route112_CableCarStation_Movement_BoardCableCarWithRival2
# 91 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement 3, Route112_CableCarStation_Movement_Rival2BoardCableCar
# 92 "data/maps/Route112_CableCarStation/scripts.pory"
	waitmovement 0
# 93 "data/maps/Route112_CableCarStation/scripts.pory"
	setvar VAR_0x8004, FALSE
# 94 "data/maps/Route112_CableCarStation/scripts.pory"
	setvar VAR_CABLE_CAR_STATION_STATE, 1
# 95 "data/maps/Route112_CableCarStation/scripts.pory"
	setvar VAR_METEOR_FALLS_STATE, 5
# 96 "data/maps/Route112_CableCarStation/scripts.pory"
	setflag FLAG_RIVAL2_CABLE_CAR
# 97 "data/maps/Route112_CableCarStation/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 98 "data/maps/Route112_CableCarStation/scripts.pory"
	special CableCarWarp
# 99 "data/maps/Route112_CableCarStation/scripts.pory"
	special CableCar
# 100 "data/maps/Route112_CableCarStation/scripts.pory"
	waitstate
# 101 "data/maps/Route112_CableCarStation/scripts.pory"
	release
	end


# 105 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Movement_WalkToPlayer:
# 106 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 106 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
	step_end

# 109 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Movement_WalkToRival2Left:
# 110 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_right
# 111 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
	step_end

# 114 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Movement_WalkToRival2Right:
# 115 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_left
# 116 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
	step_end

# 119 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Movement_BoardCableCarWithRival2:
# 120 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 120 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 120 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 121 "data/maps/Route112_CableCarStation/scripts.pory"
	set_invisible
	step_end

# 124 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Movement_Rival2BoardCableCar:
# 125 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 125 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 125 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 125 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
	step_end

# 178 "data/maps/Route112_CableCarStation/scripts.pory"

# 179 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_EventScript_Attendant::
# 180 "data/maps/Route112_CableCarStation/scripts.pory"
	lock
# 181 "data/maps/Route112_CableCarStation/scripts.pory"
	faceplayer
# 182 "data/maps/Route112_CableCarStation/scripts.pory"
	msgbox Route112_CableCarStation_Text_CableCarReadyGetOn, MSGBOX_YESNO
# 183 "data/maps/Route112_CableCarStation/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route112_CableCarStation_EventScript_RideCableCar
# 184 "data/maps/Route112_CableCarStation/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route112_CableCarStation_EventScript_DeclineRide
# 185 "data/maps/Route112_CableCarStation/scripts.pory"
	end
# 186 "data/maps/Route112_CableCarStation/scripts.pory"

# 187 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_EventScript_RideCableCar::
# 188 "data/maps/Route112_CableCarStation/scripts.pory"
	msgbox Route112_CableCarStation_Text_StepThisWay, MSGBOX_DEFAULT
# 189 "data/maps/Route112_CableCarStation/scripts.pory"
	closemessage
# 190 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement LOCALID_ATTENDANT, Route112_CableCarStation_Movement_LeadPlayerToCableCar
# 191 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route112_CableCarStation_Movement_BoardCableCar
# 192 "data/maps/Route112_CableCarStation/scripts.pory"
	waitmovement 0
# 193 "data/maps/Route112_CableCarStation/scripts.pory"
	setvar VAR_0x8004, FALSE  @ Going up
# 194 "data/maps/Route112_CableCarStation/scripts.pory"
	setvar VAR_CABLE_CAR_STATION_STATE, 1
# 195 "data/maps/Route112_CableCarStation/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 196 "data/maps/Route112_CableCarStation/scripts.pory"
	special CableCarWarp
# 197 "data/maps/Route112_CableCarStation/scripts.pory"
	special CableCar
# 198 "data/maps/Route112_CableCarStation/scripts.pory"
	waitstate
# 199 "data/maps/Route112_CableCarStation/scripts.pory"
	release
# 200 "data/maps/Route112_CableCarStation/scripts.pory"
	end
# 201 "data/maps/Route112_CableCarStation/scripts.pory"

# 202 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_EventScript_DeclineRide::
# 203 "data/maps/Route112_CableCarStation/scripts.pory"
	msgbox Route112_CableCarStation_Text_RideAnotherTime, MSGBOX_DEFAULT
# 204 "data/maps/Route112_CableCarStation/scripts.pory"
	release
# 205 "data/maps/Route112_CableCarStation/scripts.pory"
	end
# 206 "data/maps/Route112_CableCarStation/scripts.pory"

# 207 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Movement_LeadPlayerToCableCar:
# 208 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 209 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 210 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_right
# 211 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_in_place_faster_left
# 212 "data/maps/Route112_CableCarStation/scripts.pory"
	step_end
# 213 "data/maps/Route112_CableCarStation/scripts.pory"

# 214 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Movement_FollowPlayerOutFromCableCar:
# 215 "data/maps/Route112_CableCarStation/scripts.pory"
	delay_16
# 216 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_left
# 217 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
# 218 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
# 219 "data/maps/Route112_CableCarStation/scripts.pory"
	step_end
# 220 "data/maps/Route112_CableCarStation/scripts.pory"

# 221 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Movement_BoardCableCar:
# 222 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 223 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 224 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 225 "data/maps/Route112_CableCarStation/scripts.pory"
	delay_16
# 226 "data/maps/Route112_CableCarStation/scripts.pory"
	step_end
# 227 "data/maps/Route112_CableCarStation/scripts.pory"

# 228 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Movement_ExitCableCar:
# 229 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
# 230 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
# 231 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
# 232 "data/maps/Route112_CableCarStation/scripts.pory"
	delay_16
# 233 "data/maps/Route112_CableCarStation/scripts.pory"
	step_end
# 234 "data/maps/Route112_CableCarStation/scripts.pory"

# 235 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Text_CableCarReadyGetOn:
# 236 "data/maps/Route112_CableCarStation/scripts.pory"
	.string "The CABLE CAR is ready to go up.\n"
# 237 "data/maps/Route112_CableCarStation/scripts.pory"
	.string "Would you like to be on it?$"
# 238 "data/maps/Route112_CableCarStation/scripts.pory"

# 239 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Text_StepThisWay:
# 240 "data/maps/Route112_CableCarStation/scripts.pory"
	.string "Please step this way.$"
# 241 "data/maps/Route112_CableCarStation/scripts.pory"

# 242 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Text_RideAnotherTime:
# 243 "data/maps/Route112_CableCarStation/scripts.pory"
	.string "Please ride with us another time.$"

Route112_CableCarStation_Text_SpencerGladICaughtYou::
# 128 "data/maps/Route112_CableCarStation/scripts.pory"
	.string "Oh, {PLAYER}!\n"
	.string "I'm glad I caught you!$"

Route112_CableCarStation_Text_BrenGladICaughtYou::
# 133 "data/maps/Route112_CableCarStation/scripts.pory"
	.string "Oh, {PLAYER}!\n"
	.string "I'm glad I caught you!$"

Route112_CableCarStation_Text_KyleGladICaughtYou::
# 138 "data/maps/Route112_CableCarStation/scripts.pory"
	.string "Oh, {PLAYER}!\n"
	.string "I'm glad I caught you!$"

Route112_CableCarStation_Text_SpencerLetsTakeTheCableCar::
# 143 "data/maps/Route112_CableCarStation/scripts.pory"
	.string "KYLE told me there was some serious\n"
	.string "trouble up on MT. CHIMNEY.\l"
	.string "Then he just ran off!\p"
	.string "I didn't know what to do, so I came\n"
	.string "looking for you.\p"
	.string "I'm so worried!\n"
	.string "We have to go see if KYLE is alright!\p"
	.string "C'mon!\n"
	.string "Let's take the cable car to the top.$"

Route112_CableCarStation_Text_BrenLetsTakeTheCableCar::
# 153 "data/maps/Route112_CableCarStation/scripts.pory"
	.string "SPENCER told me there was some serious\n"
	.string "trouble up on MT. CHIMNEY.\l"
	.string "Then he just ran off!\p"
	.string "I didn't know what to do, so I came\n"
	.string "looking for you.\p"
	.string "I'm so worried!\n"
	.string "We have to go see if SPENCER is alright!\p"
	.string "C'mon!\n"
	.string "Let's take the cable car to the top.$"

Route112_CableCarStation_Text_KyleLetsTakeTheCableCar::
# 163 "data/maps/Route112_CableCarStation/scripts.pory"
	.string "BREN told me there was some serious\n"
	.string "trouble up on MT. CHIMNEY.\l"
	.string "Then he just ran off!\p"
	.string "I didn't know what to do, so I came\n"
	.string "looking for you.\p"
	.string "I'm so worried!\n"
	.string "We have to go see if BREN is alright!\p"
	.string "C'mon!\n"
	.string "Let's take the cable car to the top.$"

Route112_CableCarStation_Text_BothOfYouStepThisWay::
# 173 "data/maps/Route112_CableCarStation/scripts.pory"
	.string "The CABLE CAR is ready to go up.\n"
	.string "Both of you please step this way.$"
