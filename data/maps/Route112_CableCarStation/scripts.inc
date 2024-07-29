# 1 "data/maps/Route112_CableCarStation/scripts.pory"

# 2 "data/maps/Route112_CableCarStation/scripts.pory"
.set LOCALID_ATTENDANT, 1
# 3 "data/maps/Route112_CableCarStation/scripts.pory"

# 4 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_MapScripts::
# 5 "data/maps/Route112_CableCarStation/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route112_CableCarStation_OnTransition
# 6 "data/maps/Route112_CableCarStation/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route112_CableCarStation_OnFrame
# 7 "data/maps/Route112_CableCarStation/scripts.pory"
	.byte 0
# 8 "data/maps/Route112_CableCarStation/scripts.pory"

# 9 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_OnTransition:
# 10 "data/maps/Route112_CableCarStation/scripts.pory"
	setescapewarp MAP_ROUTE112, 28, 28
# 11 "data/maps/Route112_CableCarStation/scripts.pory"
	call_if_eq VAR_CABLE_CAR_STATION_STATE, 2, Route112_CableCarStation_EventScript_MoveAttendantAside
# 12 "data/maps/Route112_CableCarStation/scripts.pory"
	end
# 13 "data/maps/Route112_CableCarStation/scripts.pory"

# 14 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_EventScript_MoveAttendantAside::
# 15 "data/maps/Route112_CableCarStation/scripts.pory"
	setobjectxyperm LOCALID_ATTENDANT, 7, 4
# 16 "data/maps/Route112_CableCarStation/scripts.pory"
	setobjectmovementtype LOCALID_ATTENDANT, MOVEMENT_TYPE_FACE_LEFT
# 17 "data/maps/Route112_CableCarStation/scripts.pory"
	return
# 18 "data/maps/Route112_CableCarStation/scripts.pory"

# 19 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_OnFrame:
# 20 "data/maps/Route112_CableCarStation/scripts.pory"
	map_script_2 VAR_CABLE_CAR_STATION_STATE, 2, Route112_CableCarStation_EventScript_ExitCableCar
# 21 "data/maps/Route112_CableCarStation/scripts.pory"
	.2byte 0
# 22 "data/maps/Route112_CableCarStation/scripts.pory"

# 23 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_EventScript_ExitCableCar::
# 24 "data/maps/Route112_CableCarStation/scripts.pory"
	lockall
# 25 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route112_CableCarStation_Movement_ExitCableCar
# 26 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement LOCALID_ATTENDANT, Route112_CableCarStation_Movement_FollowPlayerOutFromCableCar
# 27 "data/maps/Route112_CableCarStation/scripts.pory"
	waitmovement 0
# 28 "data/maps/Route112_CableCarStation/scripts.pory"
	setvar VAR_CABLE_CAR_STATION_STATE, 0
# 29 "data/maps/Route112_CableCarStation/scripts.pory"
	setobjectxyperm LOCALID_ATTENDANT, 6, 7
# 30 "data/maps/Route112_CableCarStation/scripts.pory"
	setobjectmovementtype LOCALID_ATTENDANT, MOVEMENT_TYPE_FACE_DOWN
# 31 "data/maps/Route112_CableCarStation/scripts.pory"
	releaseall
# 32 "data/maps/Route112_CableCarStation/scripts.pory"
	end

Route112_CableCarStation_EventScript_ToggleCableCarRival::
# 36 "data/maps/Route112_CableCarStation/scripts.pory"
	lock
# 37 "data/maps/Route112_CableCarStation/scripts.pory"
	goto_if_unset FLAG_RIVAL2_CABLE_CAR, Route112_CableCarStation_EventScript_ToggleCableCarRival_2
# 42 "data/maps/Route112_CableCarStation/scripts.pory"
	msgbox Route112_CableCarStation_EventScript_ToggleCableCarRival_Text_1, MSGBOX_AUTOCLOSE
# 43 "data/maps/Route112_CableCarStation/scripts.pory"
	clearflag FLAG_RIVAL2_CABLE_CAR
Route112_CableCarStation_EventScript_ToggleCableCarRival_1:
# 45 "data/maps/Route112_CableCarStation/scripts.pory"
	release
	end

Route112_CableCarStation_EventScript_ToggleCableCarRival_2:
# 38 "data/maps/Route112_CableCarStation/scripts.pory"
	msgbox Route112_CableCarStation_EventScript_ToggleCableCarRival_Text_0, MSGBOX_AUTOCLOSE
# 39 "data/maps/Route112_CableCarStation/scripts.pory"
	setflag FLAG_RIVAL2_CABLE_CAR
	goto Route112_CableCarStation_EventScript_ToggleCableCarRival_1


# 49 "data/maps/Route112_CableCarStation/scripts.pory"

# 50 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_EventScript_Attendant::
# 51 "data/maps/Route112_CableCarStation/scripts.pory"
	lock
# 52 "data/maps/Route112_CableCarStation/scripts.pory"
	faceplayer
# 53 "data/maps/Route112_CableCarStation/scripts.pory"
	msgbox Route112_CableCarStation_Text_CableCarReadyGetOn, MSGBOX_YESNO
# 54 "data/maps/Route112_CableCarStation/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route112_CableCarStation_EventScript_RideCableCar
# 55 "data/maps/Route112_CableCarStation/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route112_CableCarStation_EventScript_DeclineRide
# 56 "data/maps/Route112_CableCarStation/scripts.pory"
	end
# 57 "data/maps/Route112_CableCarStation/scripts.pory"

# 58 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_EventScript_RideCableCar::
# 59 "data/maps/Route112_CableCarStation/scripts.pory"
	msgbox Route112_CableCarStation_Text_StepThisWay, MSGBOX_DEFAULT
# 60 "data/maps/Route112_CableCarStation/scripts.pory"
	closemessage
# 61 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement LOCALID_ATTENDANT, Route112_CableCarStation_Movement_LeadPlayerToCableCar
# 62 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route112_CableCarStation_Movement_BoardCableCar
# 63 "data/maps/Route112_CableCarStation/scripts.pory"
	waitmovement 0
# 64 "data/maps/Route112_CableCarStation/scripts.pory"
	setvar VAR_0x8004, FALSE  @ Going up
# 65 "data/maps/Route112_CableCarStation/scripts.pory"
	setvar VAR_CABLE_CAR_STATION_STATE, 1
# 66 "data/maps/Route112_CableCarStation/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 67 "data/maps/Route112_CableCarStation/scripts.pory"
	special CableCarWarp
# 68 "data/maps/Route112_CableCarStation/scripts.pory"
	special CableCar
# 69 "data/maps/Route112_CableCarStation/scripts.pory"
	waitstate
# 70 "data/maps/Route112_CableCarStation/scripts.pory"
	release
# 71 "data/maps/Route112_CableCarStation/scripts.pory"
	end
# 72 "data/maps/Route112_CableCarStation/scripts.pory"

# 73 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_EventScript_DeclineRide::
# 74 "data/maps/Route112_CableCarStation/scripts.pory"
	msgbox Route112_CableCarStation_Text_RideAnotherTime, MSGBOX_DEFAULT
# 75 "data/maps/Route112_CableCarStation/scripts.pory"
	release
# 76 "data/maps/Route112_CableCarStation/scripts.pory"
	end
# 77 "data/maps/Route112_CableCarStation/scripts.pory"

# 78 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Movement_LeadPlayerToCableCar:
# 79 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 80 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 81 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_right
# 82 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_in_place_faster_left
# 83 "data/maps/Route112_CableCarStation/scripts.pory"
	step_end
# 84 "data/maps/Route112_CableCarStation/scripts.pory"

# 85 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Movement_FollowPlayerOutFromCableCar:
# 86 "data/maps/Route112_CableCarStation/scripts.pory"
	delay_16
# 87 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_left
# 88 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
# 89 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
# 90 "data/maps/Route112_CableCarStation/scripts.pory"
	step_end
# 91 "data/maps/Route112_CableCarStation/scripts.pory"

# 92 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Movement_BoardCableCar:
# 93 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 94 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 95 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 96 "data/maps/Route112_CableCarStation/scripts.pory"
	delay_16
# 97 "data/maps/Route112_CableCarStation/scripts.pory"
	step_end
# 98 "data/maps/Route112_CableCarStation/scripts.pory"

# 99 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Movement_ExitCableCar:
# 100 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
# 101 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
# 102 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
# 103 "data/maps/Route112_CableCarStation/scripts.pory"
	delay_16
# 104 "data/maps/Route112_CableCarStation/scripts.pory"
	step_end
# 105 "data/maps/Route112_CableCarStation/scripts.pory"

# 106 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Text_CableCarReadyGetOn:
# 107 "data/maps/Route112_CableCarStation/scripts.pory"
	.string "The CABLE CAR is ready to go up.\n"
# 108 "data/maps/Route112_CableCarStation/scripts.pory"
	.string "Would you like to be on it?$"
# 109 "data/maps/Route112_CableCarStation/scripts.pory"

# 110 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Text_StepThisWay:
# 111 "data/maps/Route112_CableCarStation/scripts.pory"
	.string "Please step this way.$"
# 112 "data/maps/Route112_CableCarStation/scripts.pory"

# 113 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Text_RideAnotherTime:
# 114 "data/maps/Route112_CableCarStation/scripts.pory"
	.string "Please ride with us another time.$"

Route112_CableCarStation_EventScript_ToggleCableCarRival_Text_0:
# 38 "data/maps/Route112_CableCarStation/scripts.pory"
	.string "Rival will ride.$"

Route112_CableCarStation_EventScript_ToggleCableCarRival_Text_1:
# 42 "data/maps/Route112_CableCarStation/scripts.pory"
	.string "No more Rival.$"
