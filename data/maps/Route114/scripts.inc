# 4 "data/maps/Route114/scripts.pory"

# 5 "data/maps/Route114/scripts.pory"
.set LOCALID_WALLY, 28
# 6 "data/maps/Route114/scripts.pory"
.set LOCALID_RIVAL1, 29
# 7 "data/maps/Route114/scripts.pory"

# 8 "data/maps/Route114/scripts.pory"
Route114_MapScripts::
# 9 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_OnTransition
# 10 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route114_OnLoad
# 11 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route114_OnFrame
# 12 "data/maps/Route114/scripts.pory"
	.byte 0
# 13 "data/maps/Route114/scripts.pory"

# 14 "data/maps/Route114/scripts.pory"
Route114_OnTransition:
# 15 "data/maps/Route114/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 16 "data/maps/Route114/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 17 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 18 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH, AbnormalWeather_StartGroudonWeather
# 19 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH, AbnormalWeather_StartGroudonWeather
# 20 "data/maps/Route114/scripts.pory"
	end
# 21 "data/maps/Route114/scripts.pory"

# 22 "data/maps/Route114/scripts.pory"
Route114_OnLoad:
# 23 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute114North
# 24 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute114South
# 25 "data/maps/Route114/scripts.pory"
	end
# 26 "data/maps/Route114/scripts.pory"

# 27 "data/maps/Route114/scripts.pory"
Route114_OnFrame:
# 28 "data/maps/Route114/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 29 "data/maps/Route114/scripts.pory"
	.2byte 0

Route114_EventScript_WallyTrigger1::
# 33 "data/maps/Route114/scripts.pory"
	lock
# 34 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 1
# 35 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyTrigger2::
# 40 "data/maps/Route114/scripts.pory"
	lock
# 41 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 2
# 42 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyTrigger3::
# 47 "data/maps/Route114/scripts.pory"
	lock
# 48 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 3
# 49 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyTrigger4::
# 54 "data/maps/Route114/scripts.pory"
	lock
# 55 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 4
# 56 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyTrigger5::
# 61 "data/maps/Route114/scripts.pory"
	lock
# 62 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 5
# 63 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyTrigger6::
# 68 "data/maps/Route114/scripts.pory"
	lock
# 69 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 6
# 70 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyTrigger7::
# 75 "data/maps/Route114/scripts.pory"
	lock
# 76 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 7
# 77 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyTrigger8::
# 82 "data/maps/Route114/scripts.pory"
	lock
# 83 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 8
# 84 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyTrigger9::
# 89 "data/maps/Route114/scripts.pory"
	lock
# 90 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 9
# 91 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyTrigger10::
# 96 "data/maps/Route114/scripts.pory"
	lock
# 97 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 10
# 98 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyEvent::
# 103 "data/maps/Route114/scripts.pory"
	playse SE_PIN
# 104 "data/maps/Route114/scripts.pory"
	applymovement 28, Common_Movement_ExclamationMark
# 105 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 106 "data/maps/Route114/scripts.pory"
	compare VAR_0x8008, 4
	goto_if_lt Route114_EventScript_WallyEvent_2
# 109 "data/maps/Route114/scripts.pory"
	compare VAR_0x8008, 3
	goto_if_gt Route114_EventScript_WallyEvent_5
Route114_EventScript_WallyEvent_4:
# 113 "data/maps/Route114/scripts.pory"
	applymovement 28, Common_Movement_FaceDown
Route114_EventScript_WallyEvent_1:
# 115 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 116 "data/maps/Route114/scripts.pory"
	delay 56
# 117 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_OhHey, MSGBOX_AUTOCLOSE
# 118 "data/maps/Route114/scripts.pory"
	switch VAR_0x8008
# 119 "data/maps/Route114/scripts.pory"
	case 1, Route114_EventScript_WallyEvent_11
# 121 "data/maps/Route114/scripts.pory"
	case 2, Route114_EventScript_WallyEvent_12
# 123 "data/maps/Route114/scripts.pory"
	case 3, Route114_EventScript_WallyEvent_13
# 125 "data/maps/Route114/scripts.pory"
	case 4, Route114_EventScript_WallyEvent_14
# 127 "data/maps/Route114/scripts.pory"
	case 5, Route114_EventScript_WallyEvent_15
# 129 "data/maps/Route114/scripts.pory"
	case 6, Route114_EventScript_WallyEvent_16
# 131 "data/maps/Route114/scripts.pory"
	case 7, Route114_EventScript_WallyEvent_17
# 133 "data/maps/Route114/scripts.pory"
	case 8, Route114_EventScript_WallyEvent_18
# 135 "data/maps/Route114/scripts.pory"
	case 9, Route114_EventScript_WallyEvent_19
# 137 "data/maps/Route114/scripts.pory"
	case 10, Route114_EventScript_WallyEvent_20
Route114_EventScript_WallyEvent_9:
# 140 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 141 "data/maps/Route114/scripts.pory"
	applymovement 28, Common_Movement_FaceRight
# 142 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 143 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_SomeoneRidingThisWay, MSGBOX_AUTOCLOSE
# 144 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 145 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 146 "data/maps/Route114/scripts.pory"
	addobject 29
# 147 "data/maps/Route114/scripts.pory"
	playse SE_BIKE_BELL
# 148 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WatchRivalBike
# 149 "data/maps/Route114/scripts.pory"
	applymovement 28, Route114_Movement_WatchRivalBike
# 150 "data/maps/Route114/scripts.pory"
	applymovement 29, Route114_Movement_Rival1BikesAround
# 151 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 152 "data/maps/Route114/scripts.pory"
	playse SE_BIKE_BELL
# 153 "data/maps/Route114/scripts.pory"
	applymovement 29, Route114_Movement_Rival1BikesAway
# 154 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 156 "data/maps/Route114/scripts.pory"
	setvar VAR_METEOR_FALLS_STATE, 1
# 157 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 0
# 158 "data/maps/Route114/scripts.pory"
	setflag FLAG_HIDE_ROUTE_113_RIVAL1
# 159 "data/maps/Route114/scripts.pory"
	release
	end

Route114_EventScript_WallyEvent_2:
# 107 "data/maps/Route114/scripts.pory"
	applymovement 28, Common_Movement_FaceUp
	goto Route114_EventScript_WallyEvent_1

Route114_EventScript_WallyEvent_3:
# 110 "data/maps/Route114/scripts.pory"
	applymovement 28, Common_Movement_FaceRight
	goto Route114_EventScript_WallyEvent_1

Route114_EventScript_WallyEvent_5:
# 109 "data/maps/Route114/scripts.pory"
	compare VAR_0x8008, 9
	goto_if_lt Route114_EventScript_WallyEvent_3
	goto Route114_EventScript_WallyEvent_4

Route114_EventScript_WallyEvent_11:
# 120 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally1
	goto Route114_EventScript_WallyEvent_9

Route114_EventScript_WallyEvent_12:
# 122 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally2
	goto Route114_EventScript_WallyEvent_9

Route114_EventScript_WallyEvent_13:
# 124 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally3
	goto Route114_EventScript_WallyEvent_9

Route114_EventScript_WallyEvent_14:
# 126 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally4
	goto Route114_EventScript_WallyEvent_9

Route114_EventScript_WallyEvent_15:
# 128 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally5
	goto Route114_EventScript_WallyEvent_9

Route114_EventScript_WallyEvent_16:
# 130 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally6
	goto Route114_EventScript_WallyEvent_9

Route114_EventScript_WallyEvent_17:
# 132 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally7
	goto Route114_EventScript_WallyEvent_9

Route114_EventScript_WallyEvent_18:
# 134 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally8
	goto Route114_EventScript_WallyEvent_9

Route114_EventScript_WallyEvent_19:
# 136 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally9
	goto Route114_EventScript_WallyEvent_9

Route114_EventScript_WallyEvent_20:
# 138 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally10
	goto Route114_EventScript_WallyEvent_9


# 163 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally1:
# 164 "data/maps/Route114/scripts.pory"
	walk_down
# 164 "data/maps/Route114/scripts.pory"
	walk_down
# 164 "data/maps/Route114/scripts.pory"
	walk_down
# 164 "data/maps/Route114/scripts.pory"
	walk_down
# 164 "data/maps/Route114/scripts.pory"
	walk_down
# 165 "data/maps/Route114/scripts.pory"
	walk_left
	step_end

# 168 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally2:
# 169 "data/maps/Route114/scripts.pory"
	walk_down
# 169 "data/maps/Route114/scripts.pory"
	walk_down
# 169 "data/maps/Route114/scripts.pory"
	walk_down
# 169 "data/maps/Route114/scripts.pory"
	walk_down
# 170 "data/maps/Route114/scripts.pory"
	walk_left
	step_end

# 173 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally3:
# 174 "data/maps/Route114/scripts.pory"
	walk_down
# 174 "data/maps/Route114/scripts.pory"
	walk_down
# 174 "data/maps/Route114/scripts.pory"
	walk_down
# 175 "data/maps/Route114/scripts.pory"
	walk_left
	step_end

# 178 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally4:
# 179 "data/maps/Route114/scripts.pory"
	walk_down
# 179 "data/maps/Route114/scripts.pory"
	walk_down
# 180 "data/maps/Route114/scripts.pory"
	walk_left
# 180 "data/maps/Route114/scripts.pory"
	walk_left
	step_end

# 183 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally5:
# 184 "data/maps/Route114/scripts.pory"
	walk_left
# 184 "data/maps/Route114/scripts.pory"
	walk_left
# 185 "data/maps/Route114/scripts.pory"
	walk_down
# 186 "data/maps/Route114/scripts.pory"
	walk_left
	step_end

# 189 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally6:
# 190 "data/maps/Route114/scripts.pory"
	walk_left
# 190 "data/maps/Route114/scripts.pory"
	walk_left
# 190 "data/maps/Route114/scripts.pory"
	walk_left
	step_end

# 193 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally7:
# 194 "data/maps/Route114/scripts.pory"
	walk_left
# 194 "data/maps/Route114/scripts.pory"
	walk_left
# 195 "data/maps/Route114/scripts.pory"
	walk_up
# 196 "data/maps/Route114/scripts.pory"
	walk_left
	step_end

# 199 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally8:
# 200 "data/maps/Route114/scripts.pory"
	walk_up
# 200 "data/maps/Route114/scripts.pory"
	walk_up
# 201 "data/maps/Route114/scripts.pory"
	walk_left
# 201 "data/maps/Route114/scripts.pory"
	walk_left
	step_end

# 204 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally9:
# 205 "data/maps/Route114/scripts.pory"
	walk_up
# 205 "data/maps/Route114/scripts.pory"
	walk_up
# 205 "data/maps/Route114/scripts.pory"
	walk_up
# 206 "data/maps/Route114/scripts.pory"
	walk_left
	step_end

# 209 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally10:
# 210 "data/maps/Route114/scripts.pory"
	walk_up
# 210 "data/maps/Route114/scripts.pory"
	walk_up
# 210 "data/maps/Route114/scripts.pory"
	walk_up
# 211 "data/maps/Route114/scripts.pory"
	walk_in_place_left
	step_end

# 214 "data/maps/Route114/scripts.pory"
Route114_Movement_Rival1BikesAround:
# 215 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 215 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 215 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 215 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 215 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 215 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 215 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 215 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 215 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 215 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 215 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 216 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 216 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 216 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 216 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 217 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 217 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 217 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 217 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 217 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 218 "data/maps/Route114/scripts.pory"
	walk_fast_up
# 218 "data/maps/Route114/scripts.pory"
	walk_fast_up
# 218 "data/maps/Route114/scripts.pory"
	walk_fast_up
# 218 "data/maps/Route114/scripts.pory"
	walk_fast_up
# 219 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 219 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 219 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 219 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 219 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 220 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 220 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 220 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 220 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 221 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 221 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 221 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 221 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 221 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 222 "data/maps/Route114/scripts.pory"
	walk_fast_up
# 222 "data/maps/Route114/scripts.pory"
	walk_fast_up
# 222 "data/maps/Route114/scripts.pory"
	walk_fast_up
# 222 "data/maps/Route114/scripts.pory"
	walk_fast_up
# 223 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 223 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 223 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 223 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 223 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 224 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 224 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 224 "data/maps/Route114/scripts.pory"
	walk_fast_down
	step_end

# 227 "data/maps/Route114/scripts.pory"
Route114_Movement_WatchRivalBike:
# 228 "data/maps/Route114/scripts.pory"
	delay_8
# 228 "data/maps/Route114/scripts.pory"
	delay_8
# 228 "data/maps/Route114/scripts.pory"
	delay_8
# 228 "data/maps/Route114/scripts.pory"
	delay_8
# 228 "data/maps/Route114/scripts.pory"
	delay_8
# 228 "data/maps/Route114/scripts.pory"
	delay_8
# 228 "data/maps/Route114/scripts.pory"
	delay_8
# 229 "data/maps/Route114/scripts.pory"
	face_up
# 230 "data/maps/Route114/scripts.pory"
	delay_8
# 230 "data/maps/Route114/scripts.pory"
	delay_8
# 230 "data/maps/Route114/scripts.pory"
	delay_8
# 230 "data/maps/Route114/scripts.pory"
	delay_8
# 231 "data/maps/Route114/scripts.pory"
	face_left
# 232 "data/maps/Route114/scripts.pory"
	delay_8
# 232 "data/maps/Route114/scripts.pory"
	delay_8
# 232 "data/maps/Route114/scripts.pory"
	delay_8
# 232 "data/maps/Route114/scripts.pory"
	delay_8
# 233 "data/maps/Route114/scripts.pory"
	face_down
# 234 "data/maps/Route114/scripts.pory"
	delay_8
# 234 "data/maps/Route114/scripts.pory"
	delay_8
# 234 "data/maps/Route114/scripts.pory"
	delay_8
# 234 "data/maps/Route114/scripts.pory"
	delay_8
# 234 "data/maps/Route114/scripts.pory"
	delay_8
# 235 "data/maps/Route114/scripts.pory"
	face_right
# 236 "data/maps/Route114/scripts.pory"
	delay_8
# 236 "data/maps/Route114/scripts.pory"
	delay_8
# 236 "data/maps/Route114/scripts.pory"
	delay_8
# 236 "data/maps/Route114/scripts.pory"
	delay_8
# 237 "data/maps/Route114/scripts.pory"
	face_up
# 238 "data/maps/Route114/scripts.pory"
	delay_8
# 238 "data/maps/Route114/scripts.pory"
	delay_8
# 238 "data/maps/Route114/scripts.pory"
	delay_8
# 238 "data/maps/Route114/scripts.pory"
	delay_8
# 238 "data/maps/Route114/scripts.pory"
	delay_8
# 239 "data/maps/Route114/scripts.pory"
	face_left
# 240 "data/maps/Route114/scripts.pory"
	delay_8
# 240 "data/maps/Route114/scripts.pory"
	delay_8
# 240 "data/maps/Route114/scripts.pory"
	delay_8
# 240 "data/maps/Route114/scripts.pory"
	delay_8
# 241 "data/maps/Route114/scripts.pory"
	face_down
# 242 "data/maps/Route114/scripts.pory"
	delay_8
# 242 "data/maps/Route114/scripts.pory"
	delay_8
# 242 "data/maps/Route114/scripts.pory"
	delay_8
# 242 "data/maps/Route114/scripts.pory"
	delay_8
# 242 "data/maps/Route114/scripts.pory"
	delay_8
# 243 "data/maps/Route114/scripts.pory"
	face_right
# 244 "data/maps/Route114/scripts.pory"
	delay_8
# 244 "data/maps/Route114/scripts.pory"
	delay_8
# 244 "data/maps/Route114/scripts.pory"
	delay_8
# 244 "data/maps/Route114/scripts.pory"
	delay_8
# 245 "data/maps/Route114/scripts.pory"
	face_up
# 246 "data/maps/Route114/scripts.pory"
	delay_8
# 246 "data/maps/Route114/scripts.pory"
	delay_8
# 246 "data/maps/Route114/scripts.pory"
	delay_8
# 246 "data/maps/Route114/scripts.pory"
	delay_8
# 246 "data/maps/Route114/scripts.pory"
	delay_8
# 247 "data/maps/Route114/scripts.pory"
	face_left
	step_end

# 250 "data/maps/Route114/scripts.pory"
Route114_Movement_Rival1BikesAway:
# 251 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 251 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 251 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 251 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 251 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 251 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 251 "data/maps/Route114/scripts.pory"
	walk_fast_left
	step_end

# 267 "data/maps/Route114/scripts.pory"

# 268 "data/maps/Route114/scripts.pory"
Route114_EventScript_Man::
# 269 "data/maps/Route114/scripts.pory"
	lock
# 270 "data/maps/Route114/scripts.pory"
	faceplayer
# 271 "data/maps/Route114/scripts.pory"
	dotimebasedevents
# 272 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_114_RECEIVED_BERRY, Route114_EventScript_ReceivedBerry
# 273 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LoveUsingBerryCrushShareBerry, MSGBOX_DEFAULT
# 274 "data/maps/Route114/scripts.pory"
	random NUM_ROUTE_114_MAN_BERRIES
# 275 "data/maps/Route114/scripts.pory"
	addvar VAR_RESULT, NUM_ROUTE_114_MAN_BERRIES_SKIPPED
# 276 "data/maps/Route114/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 277 "data/maps/Route114/scripts.pory"
	giveitem VAR_RESULT
# 278 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 279 "data/maps/Route114/scripts.pory"
	setflag FLAG_DAILY_ROUTE_114_RECEIVED_BERRY
# 280 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TryBerryCrushWithFriends, MSGBOX_DEFAULT
# 281 "data/maps/Route114/scripts.pory"
	release
# 282 "data/maps/Route114/scripts.pory"
	end
# 283 "data/maps/Route114/scripts.pory"

# 284 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedBerry::
# 285 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FunToThinkAboutBerries, MSGBOX_DEFAULT
# 286 "data/maps/Route114/scripts.pory"
	release
# 287 "data/maps/Route114/scripts.pory"
	end
# 288 "data/maps/Route114/scripts.pory"

# 289 "data/maps/Route114/scripts.pory"
Route114_EventScript_RoarGentleman::
# 290 "data/maps/Route114/scripts.pory"
	lock
# 291 "data/maps/Route114/scripts.pory"
	faceplayer
# 292 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ROAR, Route114_EventScript_ReceivedRoar
# 293 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AllMyMonDoesIsRoarTakeThis, MSGBOX_DEFAULT
# 294 "data/maps/Route114/scripts.pory"
	giveitem ITEM_TM_ROAR
# 295 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 296 "data/maps/Route114/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROAR
# 297 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 298 "data/maps/Route114/scripts.pory"
	release
# 299 "data/maps/Route114/scripts.pory"
	end
# 300 "data/maps/Route114/scripts.pory"

# 301 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedRoar::
# 302 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 303 "data/maps/Route114/scripts.pory"
	release
# 304 "data/maps/Route114/scripts.pory"
	end
# 305 "data/maps/Route114/scripts.pory"

# 306 "data/maps/Route114/scripts.pory"
Route114_EventScript_Poochyena::
# 307 "data/maps/Route114/scripts.pory"
	lock
# 308 "data/maps/Route114/scripts.pory"
	faceplayer
# 309 "data/maps/Route114/scripts.pory"
	waitse
# 310 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_ENCOUNTER
# 311 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Poochyena, MSGBOX_DEFAULT
# 312 "data/maps/Route114/scripts.pory"
	waitmoncry
# 313 "data/maps/Route114/scripts.pory"
	release
# 314 "data/maps/Route114/scripts.pory"
	end
# 315 "data/maps/Route114/scripts.pory"

# 316 "data/maps/Route114/scripts.pory"
Route114_EventScript_MeteorFallsSign::
# 317 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_MeteorFallsSign, MSGBOX_SIGN
# 318 "data/maps/Route114/scripts.pory"
	end
# 319 "data/maps/Route114/scripts.pory"

# 320 "data/maps/Route114/scripts.pory"
Route114_EventScript_FossilManiacsHouseSign::
# 321 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FossilManiacsHouseSign, MSGBOX_SIGN
# 322 "data/maps/Route114/scripts.pory"
	end
# 323 "data/maps/Route114/scripts.pory"

# 324 "data/maps/Route114/scripts.pory"
Route114_EventScript_LanettesHouseSign::
# 325 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LanettesHouse, MSGBOX_SIGN
# 326 "data/maps/Route114/scripts.pory"
	end
# 327 "data/maps/Route114/scripts.pory"

# 328 "data/maps/Route114/scripts.pory"
Route114_EventScript_Lenny::
# 329 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_LENNY, Route114_Text_LennyIntro, Route114_Text_LennyDefeat
# 330 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LennyPostBattle, MSGBOX_AUTOCLOSE
# 331 "data/maps/Route114/scripts.pory"
	end
# 332 "data/maps/Route114/scripts.pory"

# 333 "data/maps/Route114/scripts.pory"
Route114_EventScript_Lucas::
# 334 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_LUCAS_1, Route114_Text_LucasIntro, Route114_Text_LucasDefeat
# 335 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LucasPostBattle, MSGBOX_AUTOCLOSE
# 336 "data/maps/Route114/scripts.pory"
	end
# 337 "data/maps/Route114/scripts.pory"

# 338 "data/maps/Route114/scripts.pory"
Route114_EventScript_Shane::
# 339 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_SHANE, Route114_Text_ShaneIntro, Route114_Text_ShaneDefeat
# 340 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ShanePostBattle, MSGBOX_AUTOCLOSE
# 341 "data/maps/Route114/scripts.pory"
	end
# 342 "data/maps/Route114/scripts.pory"

# 343 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nancy::
# 344 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NANCY, Route114_Text_NancyIntro, Route114_Text_NancyDefeat
# 345 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NancyPostBattle, MSGBOX_AUTOCLOSE
# 346 "data/maps/Route114/scripts.pory"
	end
# 347 "data/maps/Route114/scripts.pory"

# 348 "data/maps/Route114/scripts.pory"
Route114_EventScript_Steve::
# 349 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_STEVE_1, Route114_Text_SteveIntro, Route114_Text_SteveDefeat, Route114_EventScript_RegisterSteve
# 350 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 351 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_EventScript_RematchSteve
# 352 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostBattle, MSGBOX_DEFAULT
# 353 "data/maps/Route114/scripts.pory"
	release
# 354 "data/maps/Route114/scripts.pory"
	end
# 355 "data/maps/Route114/scripts.pory"

# 356 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterSteve::
# 357 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 358 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 359 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_SteveRegister, MSGBOX_DEFAULT
# 360 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_STEVE_1
# 361 "data/maps/Route114/scripts.pory"
	release
# 362 "data/maps/Route114/scripts.pory"
	end
# 363 "data/maps/Route114/scripts.pory"

# 364 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchSteve::
# 365 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_STEVE_1, Route114_Text_SteveRematchIntro, Route114_Text_SteveRematchDefeat
# 366 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostRematch, MSGBOX_AUTOCLOSE
# 367 "data/maps/Route114/scripts.pory"
	end
# 368 "data/maps/Route114/scripts.pory"

# 369 "data/maps/Route114/scripts.pory"
Route114_EventScript_Bernie::
# 370 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_BERNIE_1, Route114_Text_BernieIntro, Route114_Text_BernieDefeat, Route114_EventScript_RegisterBernie
# 371 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 372 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_EventScript_RematchBernie
# 373 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostBattle, MSGBOX_DEFAULT
# 374 "data/maps/Route114/scripts.pory"
	release
# 375 "data/maps/Route114/scripts.pory"
	end
# 376 "data/maps/Route114/scripts.pory"

# 377 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterBernie::
# 378 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 379 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 380 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BernieRegister, MSGBOX_DEFAULT
# 381 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_BERNIE_1
# 382 "data/maps/Route114/scripts.pory"
	release
# 383 "data/maps/Route114/scripts.pory"
	end
# 384 "data/maps/Route114/scripts.pory"

# 385 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchBernie::
# 386 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_BERNIE_1, Route114_Text_BernieRematchIntro, Route114_Text_BernieRematchDefeat
# 387 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostRematch, MSGBOX_AUTOCLOSE
# 388 "data/maps/Route114/scripts.pory"
	end
# 389 "data/maps/Route114/scripts.pory"

# 390 "data/maps/Route114/scripts.pory"
Route114_EventScript_Claude::
# 391 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_CLAUDE, Route114_Text_ClaudeIntro, Route114_Text_ClaudeDefeat
# 392 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ClaudePostBattle, MSGBOX_AUTOCLOSE
# 393 "data/maps/Route114/scripts.pory"
	end
# 394 "data/maps/Route114/scripts.pory"

# 395 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nolan::
# 396 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NOLAN, Route114_Text_NolanIntro, Route114_Text_NolanDefeat
# 397 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NolanPostBattle, MSGBOX_AUTOCLOSE
# 398 "data/maps/Route114/scripts.pory"
	end
# 399 "data/maps/Route114/scripts.pory"

# 400 "data/maps/Route114/scripts.pory"
Route114_EventScript_Tyra::
# 401 "data/maps/Route114/scripts.pory"
	trainerbattle_double TRAINER_TYRA_AND_IVY, Route114_Text_TyraIntro, Route114_Text_TyraDefeat, Route114_Text_TyraNotEnoughMons
# 402 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TyraPostBattle, MSGBOX_AUTOCLOSE
# 403 "data/maps/Route114/scripts.pory"
	end
# 404 "data/maps/Route114/scripts.pory"

# 405 "data/maps/Route114/scripts.pory"
Route114_EventScript_Ivy::
# 406 "data/maps/Route114/scripts.pory"
	trainerbattle_double TRAINER_TYRA_AND_IVY, Route114_Text_IvyIntro, Route114_Text_IvyDefeat, Route114_Text_IvyNotEnoughMons
# 407 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_IvyPostBattle, MSGBOX_AUTOCLOSE
# 408 "data/maps/Route114/scripts.pory"
	end
# 409 "data/maps/Route114/scripts.pory"

# 410 "data/maps/Route114/scripts.pory"
Route114_EventScript_Angelina::
# 411 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_ANGELINA, Route114_Text_AngelinaIntro, Route114_Text_AngelinaDefeat
# 412 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AngelinaPostBattle, MSGBOX_AUTOCLOSE
# 413 "data/maps/Route114/scripts.pory"
	end
# 414 "data/maps/Route114/scripts.pory"

# 415 "data/maps/Route114/scripts.pory"
Route114_EventScript_Charlotte::
# 416 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_CHARLOTTE, Route114_Text_CharlotteIntro, Route114_Text_CharlotteDefeat
# 417 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_CharlottePostBattle, MSGBOX_AUTOCLOSE
# 418 "data/maps/Route114/scripts.pory"
	end
# 419 "data/maps/Route114/scripts.pory"

# 420 "data/maps/Route114/scripts.pory"
Route114_EventScript_Kai::
# 421 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_KAI, Route114_Text_KaiIntro, Route114_Text_KaiDefeat
# 422 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_KaiPostBattle, MSGBOX_AUTOCLOSE
# 423 "data/maps/Route114/scripts.pory"
	end
# 424 "data/maps/Route114/scripts.pory"

# 425 "data/maps/Route114/scripts.pory"
Route114_Text_AllMyMonDoesIsRoarTakeThis:
# 426 "data/maps/Route114/scripts.pory"
	.string "All my POKéMON does is ROAR…\n"
# 427 "data/maps/Route114/scripts.pory"
	.string "No one dares to come near me…\p"
# 428 "data/maps/Route114/scripts.pory"
	.string "Sigh… If you would, please take\n"
# 429 "data/maps/Route114/scripts.pory"
	.string "this TM away…$"
# 430 "data/maps/Route114/scripts.pory"

# 431 "data/maps/Route114/scripts.pory"
Route114_Text_ExplainRoar:
# 432 "data/maps/Route114/scripts.pory"
	.string "TM05 contains ROAR.\n"
# 433 "data/maps/Route114/scripts.pory"
	.string "A ROAR sends POKéMON scurrying.$"
# 434 "data/maps/Route114/scripts.pory"

# 435 "data/maps/Route114/scripts.pory"
Route114_Text_Poochyena:
# 436 "data/maps/Route114/scripts.pory"
	.string "Bow! Bowwow!$"
# 437 "data/maps/Route114/scripts.pory"

# 438 "data/maps/Route114/scripts.pory"
Route114_Text_MeteorFallsSign:
# 439 "data/maps/Route114/scripts.pory"
	.string "METEOR FALLS\n"
# 440 "data/maps/Route114/scripts.pory"
	.string "RUSTBORO CITY THROUGH HERE$"
# 441 "data/maps/Route114/scripts.pory"

# 442 "data/maps/Route114/scripts.pory"
Route114_Text_FossilManiacsHouseSign:
# 443 "data/maps/Route114/scripts.pory"
	.string "FOSSIL MANIAC'S HOUSE\n"
# 444 "data/maps/Route114/scripts.pory"
	.string "“Fossils gratefully accepted!”$"
# 445 "data/maps/Route114/scripts.pory"

# 446 "data/maps/Route114/scripts.pory"
Route114_Text_LanettesHouse:
# 447 "data/maps/Route114/scripts.pory"
	.string "LANETTE'S HOUSE$"

Route114_Text_OhHey::
# 254 "data/maps/Route114/scripts.pory"
	.string "Oh, hey {PLAYER}!$"

Route114_Text_SomeoneRidingThisWay::
# 258 "data/maps/Route114/scripts.pory"
	.string "WALLY: I didn't think I'd run into you so\n"
	.string "soon.\p"
	.string "Don't worry. I'm not here to battle you.\p"
	.string "RALTS and I came out here to train.\n"
	.string "It's been going pretty well!\p"
	.string "Oh!\n"
	.string "I think I see someone riding their bike\l"
	.string "this way!$"
