# 4 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 5 "data/maps/MtChimney_CableCarStation/scripts.pory"
.set LOCALID_ATTENDANT, 1
# 6 "data/maps/MtChimney_CableCarStation/scripts.pory"
.set LOCALID_RIVAL2, 3

MtChimney_CableCarStation_MapScripts::
# 10 "data/maps/MtChimney_CableCarStation/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_CableCarStation_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 13 "data/maps/MtChimney_CableCarStation/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MtChimney_CableCarStation_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MtChimney_CableCarStation_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data/maps/MtChimney_CableCarStation/scripts.pory"
	call_if_eq VAR_CABLE_CAR_STATION_STATE, 1, MtChimney_CableCarStation_EventScript_MoveAttendantAside
	return

MtChimney_CableCarStation_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 14 "data/maps/MtChimney_CableCarStation/scripts.pory"
	map_script_2 VAR_CABLE_CAR_STATION_STATE, 1, MtChimney_CableCarStation_EventScript_ExitCableCar
	.2byte 0


MtChimney_CableCarStation_EventScript_MoveAttendantAside::
# 19 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setobjectxyperm 1, 5, 4
# 20 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
	return


MtChimney_CableCarStation_EventScript_ExitCableCar::
# 25 "data/maps/MtChimney_CableCarStation/scripts.pory"
	lockall
# 26 "data/maps/MtChimney_CableCarStation/scripts.pory"
	goto_if_set FLAG_RIVAL2_CABLE_CAR, MtChimney_CableCarStation_EventScript_ExitCableCarWithRival2
# 27 "data/maps/MtChimney_CableCarStation/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtChimney_CableCarStation_Movement_ExitCableCar
# 28 "data/maps/MtChimney_CableCarStation/scripts.pory"
	applymovement 1, MtChimney_CableCarStation_Movement_FollowPlayerOutFromCableCar
# 29 "data/maps/MtChimney_CableCarStation/scripts.pory"
	waitmovement 0
# 30 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setvar VAR_CABLE_CAR_STATION_STATE, 0
# 31 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setobjectxyperm 1, 6, 7
# 32 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 33 "data/maps/MtChimney_CableCarStation/scripts.pory"
	releaseall
	end


MtChimney_CableCarStation_EventScript_ExitCableCarWithRival2::
# 38 "data/maps/MtChimney_CableCarStation/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route112_CableCarStation_Movement_ExitCableCarWithRival2
# 39 "data/maps/MtChimney_CableCarStation/scripts.pory"
	applymovement 1, Route112_CableCarStation_Movement_FollowPlayerOutFromCableCarAfterRival2
# 40 "data/maps/MtChimney_CableCarStation/scripts.pory"
	applymovement 3, Route112_CableCarStation_Movement_Rival2ExitCableCar
# 41 "data/maps/MtChimney_CableCarStation/scripts.pory"
	waitmovement 0
# 42 "data/maps/MtChimney_CableCarStation/scripts.pory"
	rival2talk Route112_CableCarStation_Text_SpencerGoSeeWhatsGoingOn, Route112_CableCarStation_Text_BrenGoSeeWhatsGoingOn, Route112_CableCarStation_Text_KyleGoSeeWhatsGoingOn
# 45 "data/maps/MtChimney_CableCarStation/scripts.pory"
	closemessage
# 46 "data/maps/MtChimney_CableCarStation/scripts.pory"
	delay 20
# 47 "data/maps/MtChimney_CableCarStation/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 48 "data/maps/MtChimney_CableCarStation/scripts.pory"
	applymovement 3, Route112_CableCarStation_Movement_Rival2LeaveStation
# 49 "data/maps/MtChimney_CableCarStation/scripts.pory"
	waitmovement 0
# 50 "data/maps/MtChimney_CableCarStation/scripts.pory"
	playse SE_EXIT
# 51 "data/maps/MtChimney_CableCarStation/scripts.pory"
	removeobject 3
# 52 "data/maps/MtChimney_CableCarStation/scripts.pory"
	waitse
# 53 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setvar VAR_CABLE_CAR_STATION_STATE, 0
# 54 "data/maps/MtChimney_CableCarStation/scripts.pory"
	clearflag FLAG_RIVAL2_CABLE_CAR
# 55 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setobjectxyperm 1, 6, 7
# 56 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 57 "data/maps/MtChimney_CableCarStation/scripts.pory"
	releaseall
	end


# 61 "data/maps/MtChimney_CableCarStation/scripts.pory"
Route112_CableCarStation_Movement_ExitCableCarWithRival2:
# 62 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 62 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 62 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 62 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 63 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_right
# 64 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_in_place_faster_left
	step_end

# 67 "data/maps/MtChimney_CableCarStation/scripts.pory"
Route112_CableCarStation_Movement_Rival2ExitCableCar:
# 68 "data/maps/MtChimney_CableCarStation/scripts.pory"
	delay_16
# 69 "data/maps/MtChimney_CableCarStation/scripts.pory"
	set_visible
# 70 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 70 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 70 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 70 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 71 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_in_place_faster_right
	step_end

# 74 "data/maps/MtChimney_CableCarStation/scripts.pory"
Route112_CableCarStation_Movement_FollowPlayerOutFromCableCarAfterRival2:
# 75 "data/maps/MtChimney_CableCarStation/scripts.pory"
	delay_16
# 75 "data/maps/MtChimney_CableCarStation/scripts.pory"
	delay_16
# 76 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_right
# 77 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 77 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
	step_end

# 80 "data/maps/MtChimney_CableCarStation/scripts.pory"
Route112_CableCarStation_Movement_Rival2LeaveStation:
# 81 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 81 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 81 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 82 "data/maps/MtChimney_CableCarStation/scripts.pory"
	delay_16
	step_end

# 97 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 98 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_EventScript_Attendant::
# 99 "data/maps/MtChimney_CableCarStation/scripts.pory"
	lock
# 100 "data/maps/MtChimney_CableCarStation/scripts.pory"
	faceplayer
# 101 "data/maps/MtChimney_CableCarStation/scripts.pory"
	msgbox MtChimney_CableCarStation_Text_CableCarReadyGetOn, MSGBOX_YESNO
# 102 "data/maps/MtChimney_CableCarStation/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MtChimney_CableCarStation_EventScript_RideCableCar
# 103 "data/maps/MtChimney_CableCarStation/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_CableCarStation_EventScript_DeclineRide
# 104 "data/maps/MtChimney_CableCarStation/scripts.pory"
	end
# 105 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 106 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_EventScript_RideCableCar::
# 107 "data/maps/MtChimney_CableCarStation/scripts.pory"
	msgbox MtChimney_CableCarStation_Text_StepThisWay, MSGBOX_DEFAULT
# 108 "data/maps/MtChimney_CableCarStation/scripts.pory"
	closemessage
# 109 "data/maps/MtChimney_CableCarStation/scripts.pory"
	applymovement LOCALID_ATTENDANT, MtChimney_CableCarStation_Movement_LeadPlayerToCableCar
# 110 "data/maps/MtChimney_CableCarStation/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtChimney_CableCarStation_Movement_BoardCableCar
# 111 "data/maps/MtChimney_CableCarStation/scripts.pory"
	waitmovement 0
# 112 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setvar VAR_0x8004, TRUE  @ Going down
# 113 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setvar VAR_CABLE_CAR_STATION_STATE, 2
# 114 "data/maps/MtChimney_CableCarStation/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 115 "data/maps/MtChimney_CableCarStation/scripts.pory"
	special CableCarWarp
# 116 "data/maps/MtChimney_CableCarStation/scripts.pory"
	special CableCar
# 117 "data/maps/MtChimney_CableCarStation/scripts.pory"
	waitstate
# 118 "data/maps/MtChimney_CableCarStation/scripts.pory"
	release
# 119 "data/maps/MtChimney_CableCarStation/scripts.pory"
	end
# 120 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 121 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_EventScript_DeclineRide::
# 122 "data/maps/MtChimney_CableCarStation/scripts.pory"
	msgbox MtChimney_CableCarStation_Text_RideAnotherTime, MSGBOX_DEFAULT
# 123 "data/maps/MtChimney_CableCarStation/scripts.pory"
	release
# 124 "data/maps/MtChimney_CableCarStation/scripts.pory"
	end
# 125 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 126 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_Movement_LeadPlayerToCableCar:
# 127 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_up
# 128 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_up
# 129 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_left
# 130 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_in_place_faster_right
# 131 "data/maps/MtChimney_CableCarStation/scripts.pory"
	step_end
# 132 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 133 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_Movement_FollowPlayerOutFromCableCar:
# 134 "data/maps/MtChimney_CableCarStation/scripts.pory"
	delay_16
# 135 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_right
# 136 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 137 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 138 "data/maps/MtChimney_CableCarStation/scripts.pory"
	step_end
# 139 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 140 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_Movement_BoardCableCar:
# 141 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_up
# 142 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_up
# 143 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_up
# 144 "data/maps/MtChimney_CableCarStation/scripts.pory"
	delay_16
# 145 "data/maps/MtChimney_CableCarStation/scripts.pory"
	step_end
# 146 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 147 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_Movement_ExitCableCar:
# 148 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 149 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 150 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 151 "data/maps/MtChimney_CableCarStation/scripts.pory"
	delay_16
# 152 "data/maps/MtChimney_CableCarStation/scripts.pory"
	step_end
# 153 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 154 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_Text_CableCarReadyGetOn:
# 155 "data/maps/MtChimney_CableCarStation/scripts.pory"
	.string "The CABLE CAR is ready to go down.\n"
# 156 "data/maps/MtChimney_CableCarStation/scripts.pory"
	.string "Would you like to be on it?$"
# 157 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 158 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_Text_StepThisWay:
# 159 "data/maps/MtChimney_CableCarStation/scripts.pory"
	.string "Please step this way.$"
# 160 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 161 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_Text_RideAnotherTime:
# 162 "data/maps/MtChimney_CableCarStation/scripts.pory"
	.string "Please ride with us another time.$"

Route112_CableCarStation_Text_SpencerGoSeeWhatsGoingOn::
# 85 "data/maps/MtChimney_CableCarStation/scripts.pory"
	.string "Let's go see what's going on up here!$"

Route112_CableCarStation_Text_BrenGoSeeWhatsGoingOn::
# 89 "data/maps/MtChimney_CableCarStation/scripts.pory"
	.string "Let's go see what's going on up here!$"

Route112_CableCarStation_Text_KyleGoSeeWhatsGoingOn::
# 93 "data/maps/MtChimney_CableCarStation/scripts.pory"
	.string "Let's go see what's going on up here!$"
