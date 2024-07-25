# 5 "data/maps/Route114/scripts.pory"

# 6 "data/maps/Route114/scripts.pory"
.set LOCALID_WALLY, 28
# 7 "data/maps/Route114/scripts.pory"
.set LOCALID_RIVAL1BIKE, 29
# 8 "data/maps/Route114/scripts.pory"
.set LOCALID_RIVAL1, 30
# 9 "data/maps/Route114/scripts.pory"

# 10 "data/maps/Route114/scripts.pory"
Route114_MapScripts::
# 11 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_OnTransition
# 12 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route114_OnLoad
# 13 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route114_OnFrame
# 14 "data/maps/Route114/scripts.pory"
	.byte 0
# 15 "data/maps/Route114/scripts.pory"

# 16 "data/maps/Route114/scripts.pory"
Route114_OnTransition:
# 17 "data/maps/Route114/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 18 "data/maps/Route114/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 19 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 20 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH, AbnormalWeather_StartGroudonWeather
# 21 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH, AbnormalWeather_StartGroudonWeather
# 22 "data/maps/Route114/scripts.pory"
	end
# 23 "data/maps/Route114/scripts.pory"

# 24 "data/maps/Route114/scripts.pory"
Route114_OnLoad:
# 25 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute114North
# 26 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute114South
# 27 "data/maps/Route114/scripts.pory"
	end
# 28 "data/maps/Route114/scripts.pory"

# 29 "data/maps/Route114/scripts.pory"
Route114_OnFrame:
# 30 "data/maps/Route114/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 31 "data/maps/Route114/scripts.pory"
	.2byte 0

Route114_EventScript_MoveRival2Trigger::
# 35 "data/maps/Route114/scripts.pory"
	setvar VAR_METEOR_FALLS_STATE, 2
# 36 "data/maps/Route114/scripts.pory"
	setflag FLAG_HIDE_ROUTE_113_RIVAL2
# 37 "data/maps/Route114/scripts.pory"
	setflag FLAG_HIDE_ROUTE_113_LAO_ON_SIDE
# 38 "data/maps/Route114/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_113_LAO
# 39 "data/maps/Route114/scripts.pory"
	clearflag FLAG_HIDE_DIG_HOUSE_RIVAL2
	return


Route114_EventScript_WallyTrigger1::
# 43 "data/maps/Route114/scripts.pory"
	lock
# 44 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 1
# 45 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyTrigger2::
# 50 "data/maps/Route114/scripts.pory"
	lock
# 51 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 2
# 52 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyTrigger3::
# 57 "data/maps/Route114/scripts.pory"
	lock
# 58 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 3
# 59 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyTrigger4::
# 64 "data/maps/Route114/scripts.pory"
	lock
# 65 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 4
# 66 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyTrigger5::
# 71 "data/maps/Route114/scripts.pory"
	lock
# 72 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 5
# 73 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyTrigger6::
# 78 "data/maps/Route114/scripts.pory"
	lock
# 79 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 6
# 80 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyTrigger7::
# 85 "data/maps/Route114/scripts.pory"
	lock
# 86 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 7
# 87 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyTrigger8::
# 92 "data/maps/Route114/scripts.pory"
	lock
# 93 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 8
# 94 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyTrigger9::
# 99 "data/maps/Route114/scripts.pory"
	lock
# 100 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 9
# 101 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyTrigger10::
# 106 "data/maps/Route114/scripts.pory"
	lock
# 107 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 10
# 108 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyEvent::
# 113 "data/maps/Route114/scripts.pory"
	playse SE_PIN
# 114 "data/maps/Route114/scripts.pory"
	applymovement 28, Common_Movement_ExclamationMark
# 115 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 116 "data/maps/Route114/scripts.pory"
	compare VAR_0x8008, 4
	goto_if_lt Route114_EventScript_WallyEvent_2
# 119 "data/maps/Route114/scripts.pory"
	compare VAR_0x8008, 3
	goto_if_gt Route114_EventScript_WallyEvent_5
Route114_EventScript_WallyEvent_4:
# 123 "data/maps/Route114/scripts.pory"
	applymovement 28, Common_Movement_FaceDown
Route114_EventScript_WallyEvent_1:
# 125 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 126 "data/maps/Route114/scripts.pory"
	delay 56
# 127 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_OhHey, MSGBOX_AUTOCLOSE
# 128 "data/maps/Route114/scripts.pory"
	applymovement 28, Common_Movement_FaceRight
# 129 "data/maps/Route114/scripts.pory"
	switch VAR_0x8008
# 130 "data/maps/Route114/scripts.pory"
	case 1, Route114_EventScript_WallyEvent_11
# 132 "data/maps/Route114/scripts.pory"
	case 2, Route114_EventScript_WallyEvent_12
# 134 "data/maps/Route114/scripts.pory"
	case 3, Route114_EventScript_WallyEvent_13
# 136 "data/maps/Route114/scripts.pory"
	case 4, Route114_EventScript_WallyEvent_14
# 138 "data/maps/Route114/scripts.pory"
	case 5, Route114_EventScript_WallyEvent_15
# 140 "data/maps/Route114/scripts.pory"
	case 6, Route114_EventScript_WallyEvent_16
# 142 "data/maps/Route114/scripts.pory"
	case 7, Route114_EventScript_WallyEvent_17
# 144 "data/maps/Route114/scripts.pory"
	case 8, Route114_EventScript_WallyEvent_18
# 146 "data/maps/Route114/scripts.pory"
	case 9, Route114_EventScript_WallyEvent_19
# 148 "data/maps/Route114/scripts.pory"
	case 10, Route114_EventScript_WallyEvent_20
Route114_EventScript_WallyEvent_9:
# 151 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 152 "data/maps/Route114/scripts.pory"
	applymovement 28, Common_Movement_FaceRight
# 153 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 154 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_SomeoneRidingThisWay, MSGBOX_AUTOCLOSE
# 155 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 156 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 157 "data/maps/Route114/scripts.pory"
	addobject 29
# 158 "data/maps/Route114/scripts.pory"
	playse SE_BIKE_BELL
# 159 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WatchRivalBike
# 160 "data/maps/Route114/scripts.pory"
	applymovement 28, Route114_Movement_WatchRivalBike
# 161 "data/maps/Route114/scripts.pory"
	applymovement 29, Route114_Movement_Rival1BikesAround
# 162 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 163 "data/maps/Route114/scripts.pory"
	delay 20
# 164 "data/maps/Route114/scripts.pory"
	removeobject 29
# 165 "data/maps/Route114/scripts.pory"
	addobject 30
# 166 "data/maps/Route114/scripts.pory"
	rival1talk Route114_Text_SpencerLetsBattle, Route114_Text_BrenLetsBattle, Route114_Text_KyleLetsBattle
# 169 "data/maps/Route114/scripts.pory"
	closemessage
# 170 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 171 "data/maps/Route114/scripts.pory"
	applymovement 28, Common_Movement_BeginTalkRight
# 172 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 173 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_PleaseLetMeAssist
# 174 "data/maps/Route114/scripts.pory"
	delay 10
# 175 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 176 "data/maps/Route114/scripts.pory"
	applymovement 28, Common_Movement_FaceDown
# 177 "data/maps/Route114/scripts.pory"
	applymovement 30, Common_Movement_BeginTalkUp
# 178 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 179 "data/maps/Route114/scripts.pory"
	rival1talk Route114_Text_SpencerPickYourPokemon, Route114_Text_BrenPickYourPokemon, Route114_Text_KylePickYourPokemon
# 182 "data/maps/Route114/scripts.pory"
	closemessage
# 183 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_PrepareForRival1Battle
	end

Route114_EventScript_WallyEvent_2:
# 117 "data/maps/Route114/scripts.pory"
	applymovement 28, Common_Movement_FaceUp
	goto Route114_EventScript_WallyEvent_1

Route114_EventScript_WallyEvent_3:
# 120 "data/maps/Route114/scripts.pory"
	applymovement 28, Common_Movement_FaceRight
	goto Route114_EventScript_WallyEvent_1

Route114_EventScript_WallyEvent_5:
# 119 "data/maps/Route114/scripts.pory"
	compare VAR_0x8008, 9
	goto_if_lt Route114_EventScript_WallyEvent_3
	goto Route114_EventScript_WallyEvent_4

Route114_EventScript_WallyEvent_11:
# 131 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally1
	goto Route114_EventScript_WallyEvent_9

Route114_EventScript_WallyEvent_12:
# 133 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally2
	goto Route114_EventScript_WallyEvent_9

Route114_EventScript_WallyEvent_13:
# 135 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally3
	goto Route114_EventScript_WallyEvent_9

Route114_EventScript_WallyEvent_14:
# 137 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally4
	goto Route114_EventScript_WallyEvent_9

Route114_EventScript_WallyEvent_15:
# 139 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally5
	goto Route114_EventScript_WallyEvent_9

Route114_EventScript_WallyEvent_16:
# 141 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally6
	goto Route114_EventScript_WallyEvent_9

Route114_EventScript_WallyEvent_17:
# 143 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally7
	goto Route114_EventScript_WallyEvent_9

Route114_EventScript_WallyEvent_18:
# 145 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally8
	goto Route114_EventScript_WallyEvent_9

Route114_EventScript_WallyEvent_19:
# 147 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally9
	goto Route114_EventScript_WallyEvent_9

Route114_EventScript_WallyEvent_20:
# 149 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally10
	goto Route114_EventScript_WallyEvent_9


Route114_EventScript_PrepareForRival1Battle::
# 188 "data/maps/Route114/scripts.pory"
	special SavePlayerParty
# 189 "data/maps/Route114/scripts.pory"
	fadescreen FADE_TO_BLACK
# 190 "data/maps/Route114/scripts.pory"
	special ChooseHalfPartyForBattle
# 191 "data/maps/Route114/scripts.pory"
	waitstate
# 192 "data/maps/Route114/scripts.pory"
	goto_if_ne VAR_RESULT, 0, Route114_EventScript_BeginRival1Battle
# 193 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_QuitPartySelect
	end


Route114_EventScript_QuitPartySelect::
# 198 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_CantBackOut
# 199 "data/maps/Route114/scripts.pory"
	closemessage
# 200 "data/maps/Route114/scripts.pory"
	special SavePlayerParty
# 201 "data/maps/Route114/scripts.pory"
	fadescreen FADE_TO_BLACK
# 202 "data/maps/Route114/scripts.pory"
	special ChooseHalfPartyForBattle
# 203 "data/maps/Route114/scripts.pory"
	waitstate
# 204 "data/maps/Route114/scripts.pory"
	goto_if_ne VAR_RESULT, 0, Route114_EventScript_BeginRival1Battle
# 205 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_QuitPartySelect
	end


Route114_EventScript_BeginRival1Battle::
# 210 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_BeginRival1Battle_Text_0, MSGBOX_DEFAULT
# 211 "data/maps/Route114/scripts.pory"
	closemessage
# 212 "data/maps/Route114/scripts.pory"
	checkfriendchoice
# 213 "data/maps/Route114/scripts.pory"
	switch VAR_RESULT
# 214 "data/maps/Route114/scripts.pory"
	case SPENCER, Route114_EventScript_BeginRival1Battle_3
# 216 "data/maps/Route114/scripts.pory"
	case BREN, Route114_EventScript_BeginRival1Battle_4
# 218 "data/maps/Route114/scripts.pory"
	case KYLE, Route114_EventScript_BeginRival1Battle_5
Route114_EventScript_BeginRival1Battle_1:
# 221 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyPostBattle
	return

Route114_EventScript_BeginRival1Battle_3:
# 215 "data/maps/Route114/scripts.pory"
	multi_2_vs_1 TRAINER_BREN_NEAR_FALLARBOR, Route114_Text_BrenDefeated, PARTNER_WALLY_ROUTE_114
	goto Route114_EventScript_BeginRival1Battle_1

Route114_EventScript_BeginRival1Battle_4:
# 217 "data/maps/Route114/scripts.pory"
	multi_2_vs_1 TRAINER_KYLE_NEAR_FALLARBOR, Route114_Text_KyleDefeated, PARTNER_WALLY_ROUTE_114
	goto Route114_EventScript_BeginRival1Battle_1

Route114_EventScript_BeginRival1Battle_5:
# 219 "data/maps/Route114/scripts.pory"
	multi_2_vs_1 TRAINER_SPENCER_NEAR_FALLARBOR, Route114_Text_SpencerDefeated, PARTNER_WALLY_ROUTE_114
	goto Route114_EventScript_BeginRival1Battle_1


Route114_EventScript_WallyPostBattle::
# 225 "data/maps/Route114/scripts.pory"
	applymovement 30, Common_Movement_BeginTalkUp
# 226 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 227 "data/maps/Route114/scripts.pory"
	rival1talk Route114_Text_SpencerPostBattle, Route114_Text_BrenPostBattle, Route114_Text_KylePostBattle
# 230 "data/maps/Route114/scripts.pory"
	closemessage
# 231 "data/maps/Route114/scripts.pory"
	setobjectxyperm 29, 31, 12
# 232 "data/maps/Route114/scripts.pory"
	playse SE_BIKE_BELL
# 233 "data/maps/Route114/scripts.pory"
	removeobject 30
# 234 "data/maps/Route114/scripts.pory"
	addobject 29
# 235 "data/maps/Route114/scripts.pory"
	delay 30
# 236 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WatchRival1Leave
# 237 "data/maps/Route114/scripts.pory"
	applymovement 28, Route114_Movement_WatchRival1Leave
# 238 "data/maps/Route114/scripts.pory"
	applymovement 29, Route114_Movement_Rival1BikesAway
# 239 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 240 "data/maps/Route114/scripts.pory"
	removeobject 29
# 241 "data/maps/Route114/scripts.pory"
	delay 16
# 242 "data/maps/Route114/scripts.pory"
	applymovement 28, Common_Movement_WalkInPlaceFasterRight
# 243 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 244 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_UntilWeMeetAgain, MSGBOX_AUTOCLOSE
# 245 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WatchWallyLeave
# 246 "data/maps/Route114/scripts.pory"
	applymovement 28, Route114_Movement_WallyLeave
# 247 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 248 "data/maps/Route114/scripts.pory"
	removeobject 28
# 249 "data/maps/Route114/scripts.pory"
	setvar VAR_METEOR_FALLS_STATE, 1
# 250 "data/maps/Route114/scripts.pory"
	setvar VAR_BURIED_RIVAL2, 1
# 251 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 0
# 252 "data/maps/Route114/scripts.pory"
	setflag FLAG_HIDE_ROUTE_113_RIVAL1
# 253 "data/maps/Route114/scripts.pory"
	release
	end


# 257 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally1:
# 258 "data/maps/Route114/scripts.pory"
	walk_down
# 258 "data/maps/Route114/scripts.pory"
	walk_down
# 258 "data/maps/Route114/scripts.pory"
	walk_down
# 258 "data/maps/Route114/scripts.pory"
	walk_down
# 258 "data/maps/Route114/scripts.pory"
	walk_down
# 259 "data/maps/Route114/scripts.pory"
	walk_left
	step_end

# 262 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally2:
# 263 "data/maps/Route114/scripts.pory"
	walk_down
# 263 "data/maps/Route114/scripts.pory"
	walk_down
# 263 "data/maps/Route114/scripts.pory"
	walk_down
# 263 "data/maps/Route114/scripts.pory"
	walk_down
# 264 "data/maps/Route114/scripts.pory"
	walk_left
	step_end

# 267 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally3:
# 268 "data/maps/Route114/scripts.pory"
	walk_down
# 268 "data/maps/Route114/scripts.pory"
	walk_down
# 268 "data/maps/Route114/scripts.pory"
	walk_down
# 269 "data/maps/Route114/scripts.pory"
	walk_left
	step_end

# 272 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally4:
# 273 "data/maps/Route114/scripts.pory"
	walk_down
# 273 "data/maps/Route114/scripts.pory"
	walk_down
# 274 "data/maps/Route114/scripts.pory"
	walk_left
# 274 "data/maps/Route114/scripts.pory"
	walk_left
	step_end

# 277 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally5:
# 278 "data/maps/Route114/scripts.pory"
	walk_left
# 278 "data/maps/Route114/scripts.pory"
	walk_left
# 279 "data/maps/Route114/scripts.pory"
	walk_down
# 280 "data/maps/Route114/scripts.pory"
	walk_left
	step_end

# 283 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally6:
# 284 "data/maps/Route114/scripts.pory"
	walk_left
# 284 "data/maps/Route114/scripts.pory"
	walk_left
# 284 "data/maps/Route114/scripts.pory"
	walk_left
	step_end

# 287 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally7:
# 288 "data/maps/Route114/scripts.pory"
	walk_left
# 288 "data/maps/Route114/scripts.pory"
	walk_left
# 289 "data/maps/Route114/scripts.pory"
	walk_up
# 290 "data/maps/Route114/scripts.pory"
	walk_left
	step_end

# 293 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally8:
# 294 "data/maps/Route114/scripts.pory"
	walk_up
# 294 "data/maps/Route114/scripts.pory"
	walk_up
# 295 "data/maps/Route114/scripts.pory"
	walk_left
# 295 "data/maps/Route114/scripts.pory"
	walk_left
	step_end

# 298 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally9:
# 299 "data/maps/Route114/scripts.pory"
	walk_up
# 299 "data/maps/Route114/scripts.pory"
	walk_up
# 299 "data/maps/Route114/scripts.pory"
	walk_up
# 300 "data/maps/Route114/scripts.pory"
	walk_left
	step_end

# 303 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally10:
# 304 "data/maps/Route114/scripts.pory"
	walk_up
# 304 "data/maps/Route114/scripts.pory"
	walk_up
# 304 "data/maps/Route114/scripts.pory"
	walk_up
# 305 "data/maps/Route114/scripts.pory"
	walk_in_place_left
	step_end

# 308 "data/maps/Route114/scripts.pory"
Route114_Movement_Rival1BikesAround:
# 309 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 309 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 309 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 309 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 309 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 309 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 309 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 309 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 309 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 309 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 309 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 310 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 310 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 310 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 310 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 311 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 311 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 311 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 311 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 311 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 312 "data/maps/Route114/scripts.pory"
	walk_fast_up
# 312 "data/maps/Route114/scripts.pory"
	walk_fast_up
# 312 "data/maps/Route114/scripts.pory"
	walk_fast_up
# 312 "data/maps/Route114/scripts.pory"
	walk_fast_up
# 313 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 313 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 313 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 313 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 313 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 314 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 314 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 314 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 314 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 315 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 315 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 315 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 316 "data/maps/Route114/scripts.pory"
	walk_fast_up
# 317 "data/maps/Route114/scripts.pory"
	delay_16
	step_end

# 320 "data/maps/Route114/scripts.pory"
Route114_Movement_WatchRivalBike:
# 321 "data/maps/Route114/scripts.pory"
	delay_8
# 321 "data/maps/Route114/scripts.pory"
	delay_8
# 321 "data/maps/Route114/scripts.pory"
	delay_8
# 321 "data/maps/Route114/scripts.pory"
	delay_8
# 321 "data/maps/Route114/scripts.pory"
	delay_8
# 321 "data/maps/Route114/scripts.pory"
	delay_8
# 321 "data/maps/Route114/scripts.pory"
	delay_8
# 322 "data/maps/Route114/scripts.pory"
	face_up
# 323 "data/maps/Route114/scripts.pory"
	delay_8
# 323 "data/maps/Route114/scripts.pory"
	delay_8
# 323 "data/maps/Route114/scripts.pory"
	delay_8
# 323 "data/maps/Route114/scripts.pory"
	delay_8
# 324 "data/maps/Route114/scripts.pory"
	face_left
# 325 "data/maps/Route114/scripts.pory"
	delay_8
# 325 "data/maps/Route114/scripts.pory"
	delay_8
# 325 "data/maps/Route114/scripts.pory"
	delay_8
# 325 "data/maps/Route114/scripts.pory"
	delay_8
# 326 "data/maps/Route114/scripts.pory"
	face_down
# 327 "data/maps/Route114/scripts.pory"
	delay_8
# 327 "data/maps/Route114/scripts.pory"
	delay_8
# 327 "data/maps/Route114/scripts.pory"
	delay_8
# 327 "data/maps/Route114/scripts.pory"
	delay_8
# 327 "data/maps/Route114/scripts.pory"
	delay_8
# 328 "data/maps/Route114/scripts.pory"
	face_right
# 329 "data/maps/Route114/scripts.pory"
	delay_8
# 329 "data/maps/Route114/scripts.pory"
	delay_8
# 329 "data/maps/Route114/scripts.pory"
	delay_8
# 329 "data/maps/Route114/scripts.pory"
	delay_8
# 330 "data/maps/Route114/scripts.pory"
	face_up
# 331 "data/maps/Route114/scripts.pory"
	delay_8
# 331 "data/maps/Route114/scripts.pory"
	delay_8
# 331 "data/maps/Route114/scripts.pory"
	delay_8
# 331 "data/maps/Route114/scripts.pory"
	delay_8
# 331 "data/maps/Route114/scripts.pory"
	delay_8
# 332 "data/maps/Route114/scripts.pory"
	face_left
# 333 "data/maps/Route114/scripts.pory"
	delay_8
# 333 "data/maps/Route114/scripts.pory"
	delay_8
# 333 "data/maps/Route114/scripts.pory"
	delay_8
# 333 "data/maps/Route114/scripts.pory"
	delay_8
# 334 "data/maps/Route114/scripts.pory"
	face_down
	step_end

# 337 "data/maps/Route114/scripts.pory"
Route114_Movement_Rival1BikesAway:
# 338 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 338 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 339 "data/maps/Route114/scripts.pory"
	walk_fast_up
# 339 "data/maps/Route114/scripts.pory"
	walk_fast_up
# 339 "data/maps/Route114/scripts.pory"
	walk_fast_up
# 340 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 340 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 340 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 340 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 340 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 341 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 341 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 342 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 342 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 342 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 342 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 342 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 342 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 342 "data/maps/Route114/scripts.pory"
	walk_fast_left
	step_end

# 345 "data/maps/Route114/scripts.pory"
Route114_Movement_WatchRival1Leave:
# 346 "data/maps/Route114/scripts.pory"
	delay_8
# 347 "data/maps/Route114/scripts.pory"
	face_right
# 348 "data/maps/Route114/scripts.pory"
	delay_8
# 348 "data/maps/Route114/scripts.pory"
	delay_8
# 348 "data/maps/Route114/scripts.pory"
	delay_8
# 348 "data/maps/Route114/scripts.pory"
	delay_8
# 349 "data/maps/Route114/scripts.pory"
	face_up
# 350 "data/maps/Route114/scripts.pory"
	delay_8
# 350 "data/maps/Route114/scripts.pory"
	delay_8
# 350 "data/maps/Route114/scripts.pory"
	delay_8
# 350 "data/maps/Route114/scripts.pory"
	delay_8
# 350 "data/maps/Route114/scripts.pory"
	delay_8
# 351 "data/maps/Route114/scripts.pory"
	face_left
	step_end

# 354 "data/maps/Route114/scripts.pory"
Route114_Movement_WatchWallyLeave:
# 355 "data/maps/Route114/scripts.pory"
	delay_16
# 356 "data/maps/Route114/scripts.pory"
	face_up
# 357 "data/maps/Route114/scripts.pory"
	delay_16
# 357 "data/maps/Route114/scripts.pory"
	delay_16
# 358 "data/maps/Route114/scripts.pory"
	face_right
	step_end

# 361 "data/maps/Route114/scripts.pory"
Route114_Movement_WallyLeave:
# 362 "data/maps/Route114/scripts.pory"
	walk_up
# 363 "data/maps/Route114/scripts.pory"
	walk_right
# 363 "data/maps/Route114/scripts.pory"
	walk_right
# 363 "data/maps/Route114/scripts.pory"
	walk_right
# 363 "data/maps/Route114/scripts.pory"
	walk_right
# 363 "data/maps/Route114/scripts.pory"
	walk_right
# 363 "data/maps/Route114/scripts.pory"
	walk_right
# 363 "data/maps/Route114/scripts.pory"
	walk_right
# 363 "data/maps/Route114/scripts.pory"
	walk_right
# 363 "data/maps/Route114/scripts.pory"
	walk_right
	step_end

# 477 "data/maps/Route114/scripts.pory"

# 478 "data/maps/Route114/scripts.pory"
Route114_EventScript_Man::
# 479 "data/maps/Route114/scripts.pory"
	lock
# 480 "data/maps/Route114/scripts.pory"
	faceplayer
# 481 "data/maps/Route114/scripts.pory"
	dotimebasedevents
# 482 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_114_RECEIVED_BERRY, Route114_EventScript_ReceivedBerry
# 483 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LoveUsingBerryCrushShareBerry, MSGBOX_DEFAULT
# 484 "data/maps/Route114/scripts.pory"
	random NUM_ROUTE_114_MAN_BERRIES
# 485 "data/maps/Route114/scripts.pory"
	addvar VAR_RESULT, NUM_ROUTE_114_MAN_BERRIES_SKIPPED
# 486 "data/maps/Route114/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 487 "data/maps/Route114/scripts.pory"
	giveitem VAR_RESULT
# 488 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 489 "data/maps/Route114/scripts.pory"
	setflag FLAG_DAILY_ROUTE_114_RECEIVED_BERRY
# 490 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TryBerryCrushWithFriends, MSGBOX_DEFAULT
# 491 "data/maps/Route114/scripts.pory"
	release
# 492 "data/maps/Route114/scripts.pory"
	end
# 493 "data/maps/Route114/scripts.pory"

# 494 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedBerry::
# 495 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FunToThinkAboutBerries, MSGBOX_DEFAULT
# 496 "data/maps/Route114/scripts.pory"
	release
# 497 "data/maps/Route114/scripts.pory"
	end
# 498 "data/maps/Route114/scripts.pory"

# 499 "data/maps/Route114/scripts.pory"
Route114_EventScript_RoarGentleman::
# 500 "data/maps/Route114/scripts.pory"
	lock
# 501 "data/maps/Route114/scripts.pory"
	faceplayer
# 502 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ROAR, Route114_EventScript_ReceivedRoar
# 503 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AllMyMonDoesIsRoarTakeThis, MSGBOX_DEFAULT
# 504 "data/maps/Route114/scripts.pory"
	giveitem ITEM_TM_ROAR
# 505 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 506 "data/maps/Route114/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROAR
# 507 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 508 "data/maps/Route114/scripts.pory"
	release
# 509 "data/maps/Route114/scripts.pory"
	end
# 510 "data/maps/Route114/scripts.pory"

# 511 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedRoar::
# 512 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 513 "data/maps/Route114/scripts.pory"
	release
# 514 "data/maps/Route114/scripts.pory"
	end
# 515 "data/maps/Route114/scripts.pory"

# 516 "data/maps/Route114/scripts.pory"
Route114_EventScript_Poochyena::
# 517 "data/maps/Route114/scripts.pory"
	lock
# 518 "data/maps/Route114/scripts.pory"
	faceplayer
# 519 "data/maps/Route114/scripts.pory"
	waitse
# 520 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_ENCOUNTER
# 521 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Poochyena, MSGBOX_DEFAULT
# 522 "data/maps/Route114/scripts.pory"
	waitmoncry
# 523 "data/maps/Route114/scripts.pory"
	release
# 524 "data/maps/Route114/scripts.pory"
	end
# 525 "data/maps/Route114/scripts.pory"

# 526 "data/maps/Route114/scripts.pory"
Route114_EventScript_MeteorFallsSign::
# 527 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_MeteorFallsSign, MSGBOX_SIGN
# 528 "data/maps/Route114/scripts.pory"
	end
# 529 "data/maps/Route114/scripts.pory"

# 530 "data/maps/Route114/scripts.pory"
Route114_EventScript_FossilManiacsHouseSign::
# 531 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FossilManiacsHouseSign, MSGBOX_SIGN
# 532 "data/maps/Route114/scripts.pory"
	end
# 533 "data/maps/Route114/scripts.pory"

# 534 "data/maps/Route114/scripts.pory"
Route114_EventScript_LanettesHouseSign::
# 535 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LanettesHouse, MSGBOX_SIGN
# 536 "data/maps/Route114/scripts.pory"
	end
# 537 "data/maps/Route114/scripts.pory"

# 538 "data/maps/Route114/scripts.pory"
Route114_EventScript_Lenny::
# 539 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_LENNY, Route114_Text_LennyIntro, Route114_Text_LennyDefeat
# 540 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LennyPostBattle, MSGBOX_AUTOCLOSE
# 541 "data/maps/Route114/scripts.pory"
	end
# 542 "data/maps/Route114/scripts.pory"

# 543 "data/maps/Route114/scripts.pory"
Route114_EventScript_Lucas::
# 544 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_LUCAS_1, Route114_Text_LucasIntro, Route114_Text_LucasDefeat
# 545 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LucasPostBattle, MSGBOX_AUTOCLOSE
# 546 "data/maps/Route114/scripts.pory"
	end
# 547 "data/maps/Route114/scripts.pory"

# 548 "data/maps/Route114/scripts.pory"
Route114_EventScript_Shane::
# 549 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_SHANE, Route114_Text_ShaneIntro, Route114_Text_ShaneDefeat
# 550 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ShanePostBattle, MSGBOX_AUTOCLOSE
# 551 "data/maps/Route114/scripts.pory"
	end
# 552 "data/maps/Route114/scripts.pory"

# 553 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nancy::
# 554 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NANCY, Route114_Text_NancyIntro, Route114_Text_NancyDefeat
# 555 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NancyPostBattle, MSGBOX_AUTOCLOSE
# 556 "data/maps/Route114/scripts.pory"
	end
# 557 "data/maps/Route114/scripts.pory"

# 558 "data/maps/Route114/scripts.pory"
Route114_EventScript_Steve::
# 559 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_STEVE_1, Route114_Text_SteveIntro, Route114_Text_SteveDefeat, Route114_EventScript_RegisterSteve
# 560 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 561 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_EventScript_RematchSteve
# 562 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostBattle, MSGBOX_DEFAULT
# 563 "data/maps/Route114/scripts.pory"
	release
# 564 "data/maps/Route114/scripts.pory"
	end
# 565 "data/maps/Route114/scripts.pory"

# 566 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterSteve::
# 567 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 568 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 569 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_SteveRegister, MSGBOX_DEFAULT
# 570 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_STEVE_1
# 571 "data/maps/Route114/scripts.pory"
	release
# 572 "data/maps/Route114/scripts.pory"
	end
# 573 "data/maps/Route114/scripts.pory"

# 574 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchSteve::
# 575 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_STEVE_1, Route114_Text_SteveRematchIntro, Route114_Text_SteveRematchDefeat
# 576 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostRematch, MSGBOX_AUTOCLOSE
# 577 "data/maps/Route114/scripts.pory"
	end
# 578 "data/maps/Route114/scripts.pory"

# 579 "data/maps/Route114/scripts.pory"
Route114_EventScript_Bernie::
# 580 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_BERNIE_1, Route114_Text_BernieIntro, Route114_Text_BernieDefeat, Route114_EventScript_RegisterBernie
# 581 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 582 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_EventScript_RematchBernie
# 583 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostBattle, MSGBOX_DEFAULT
# 584 "data/maps/Route114/scripts.pory"
	release
# 585 "data/maps/Route114/scripts.pory"
	end
# 586 "data/maps/Route114/scripts.pory"

# 587 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterBernie::
# 588 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 589 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 590 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BernieRegister, MSGBOX_DEFAULT
# 591 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_BERNIE_1
# 592 "data/maps/Route114/scripts.pory"
	release
# 593 "data/maps/Route114/scripts.pory"
	end
# 594 "data/maps/Route114/scripts.pory"

# 595 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchBernie::
# 596 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_BERNIE_1, Route114_Text_BernieRematchIntro, Route114_Text_BernieRematchDefeat
# 597 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostRematch, MSGBOX_AUTOCLOSE
# 598 "data/maps/Route114/scripts.pory"
	end
# 599 "data/maps/Route114/scripts.pory"

# 600 "data/maps/Route114/scripts.pory"
Route114_EventScript_Claude::
# 601 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_CLAUDE, Route114_Text_ClaudeIntro, Route114_Text_ClaudeDefeat
# 602 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ClaudePostBattle, MSGBOX_AUTOCLOSE
# 603 "data/maps/Route114/scripts.pory"
	end
# 604 "data/maps/Route114/scripts.pory"

# 605 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nolan::
# 606 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NOLAN, Route114_Text_NolanIntro, Route114_Text_NolanDefeat
# 607 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NolanPostBattle, MSGBOX_AUTOCLOSE
# 608 "data/maps/Route114/scripts.pory"
	end
# 609 "data/maps/Route114/scripts.pory"

# 610 "data/maps/Route114/scripts.pory"
Route114_EventScript_Tyra::
# 611 "data/maps/Route114/scripts.pory"
	trainerbattle_double TRAINER_TYRA_AND_IVY, Route114_Text_TyraIntro, Route114_Text_TyraDefeat, Route114_Text_TyraNotEnoughMons
# 612 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TyraPostBattle, MSGBOX_AUTOCLOSE
# 613 "data/maps/Route114/scripts.pory"
	end
# 614 "data/maps/Route114/scripts.pory"

# 615 "data/maps/Route114/scripts.pory"
Route114_EventScript_Ivy::
# 616 "data/maps/Route114/scripts.pory"
	trainerbattle_double TRAINER_TYRA_AND_IVY, Route114_Text_IvyIntro, Route114_Text_IvyDefeat, Route114_Text_IvyNotEnoughMons
# 617 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_IvyPostBattle, MSGBOX_AUTOCLOSE
# 618 "data/maps/Route114/scripts.pory"
	end
# 619 "data/maps/Route114/scripts.pory"

# 620 "data/maps/Route114/scripts.pory"
Route114_EventScript_Angelina::
# 621 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_ANGELINA, Route114_Text_AngelinaIntro, Route114_Text_AngelinaDefeat
# 622 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AngelinaPostBattle, MSGBOX_AUTOCLOSE
# 623 "data/maps/Route114/scripts.pory"
	end
# 624 "data/maps/Route114/scripts.pory"

# 625 "data/maps/Route114/scripts.pory"
Route114_EventScript_Charlotte::
# 626 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_CHARLOTTE, Route114_Text_CharlotteIntro, Route114_Text_CharlotteDefeat
# 627 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_CharlottePostBattle, MSGBOX_AUTOCLOSE
# 628 "data/maps/Route114/scripts.pory"
	end
# 629 "data/maps/Route114/scripts.pory"

# 630 "data/maps/Route114/scripts.pory"
Route114_EventScript_Kai::
# 631 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_KAI, Route114_Text_KaiIntro, Route114_Text_KaiDefeat
# 632 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_KaiPostBattle, MSGBOX_AUTOCLOSE
# 633 "data/maps/Route114/scripts.pory"
	end
# 634 "data/maps/Route114/scripts.pory"

# 635 "data/maps/Route114/scripts.pory"
Route114_Text_AllMyMonDoesIsRoarTakeThis:
# 636 "data/maps/Route114/scripts.pory"
	.string "All my POKéMON does is ROAR…\n"
# 637 "data/maps/Route114/scripts.pory"
	.string "No one dares to come near me…\p"
# 638 "data/maps/Route114/scripts.pory"
	.string "Sigh… If you would, please take\n"
# 639 "data/maps/Route114/scripts.pory"
	.string "this TM away…$"
# 640 "data/maps/Route114/scripts.pory"

# 641 "data/maps/Route114/scripts.pory"
Route114_Text_ExplainRoar:
# 642 "data/maps/Route114/scripts.pory"
	.string "TM05 contains ROAR.\n"
# 643 "data/maps/Route114/scripts.pory"
	.string "A ROAR sends POKéMON scurrying.$"
# 644 "data/maps/Route114/scripts.pory"

# 645 "data/maps/Route114/scripts.pory"
Route114_Text_Poochyena:
# 646 "data/maps/Route114/scripts.pory"
	.string "Bow! Bowwow!$"
# 647 "data/maps/Route114/scripts.pory"

# 648 "data/maps/Route114/scripts.pory"
Route114_Text_MeteorFallsSign:
# 649 "data/maps/Route114/scripts.pory"
	.string "METEOR FALLS\n"
# 650 "data/maps/Route114/scripts.pory"
	.string "RUSTBORO CITY THROUGH HERE$"
# 651 "data/maps/Route114/scripts.pory"

# 652 "data/maps/Route114/scripts.pory"
Route114_Text_FossilManiacsHouseSign:
# 653 "data/maps/Route114/scripts.pory"
	.string "FOSSIL MANIAC'S HOUSE\n"
# 654 "data/maps/Route114/scripts.pory"
	.string "“Fossils gratefully accepted!”$"
# 655 "data/maps/Route114/scripts.pory"

# 656 "data/maps/Route114/scripts.pory"
Route114_Text_LanettesHouse:
# 657 "data/maps/Route114/scripts.pory"
	.string "LANETTE'S HOUSE$"

Route114_EventScript_BeginRival1Battle_Text_0:
# 210 "data/maps/Route114/scripts.pory"
	.string "Let's get to it!$"

Route114_Text_OhHey::
# 366 "data/maps/Route114/scripts.pory"
	.string "Oh, hey {PLAYER}!$"

Route114_Text_SomeoneRidingThisWay::
# 370 "data/maps/Route114/scripts.pory"
	.string "WALLY: I didn't think I'd run into you so\n"
	.string "soon.\p"
	.string "Don't worry. I'm not here to battle you.\p"
	.string "RALTS and I came out here to train.\n"
	.string "It's been going pretty well!\p"
	.string "Oh!\n"
	.string "I think I see someone riding their bike\l"
	.string "this way!$"

Route114_Text_UntilWeMeetAgain::
# 379 "data/maps/Route114/scripts.pory"
	.string "WALLY: Even though we beat him, I can\n"
	.string "tell he wasn't taking it easy on us.\p"
	.string "Thank you for letting me battle with\n"
	.string "you.\n"
	.string "I had a lot of fun!\p"
	.string "Between this cool guy on the bike and\n"
	.string "the boy who helped me battle in\l"
	.string "MAUVILLE, you have some pretty\l"
	.string "awesome companions.\p"
	.string "The three of you are so strong…\p"
	.string "But someday I'm going to show you just\n"
	.string "how strong I can get!\p"
	.string "You just wait!\n"
	.string "Until we meet again!$"

Route114_Text_SpencerLetsBattle::
# 390 "data/maps/Route114/scripts.pory"
	.string "SPENCER: I got a new POKéMON and I'm\n"
	.string "raring to try it out.\p"
	.string "C'mon!\n"
	.string "Let's have a battle!\n"
	.string "Give me all you got!$"

Route114_Text_BrenLetsBattle::
# 397 "data/maps/Route114/scripts.pory"
	.string "BREN: I got a new POKéMON and I'm raring\n"
	.string "to try it out.\p"
	.string "C'mon!\n"
	.string "Let's have a battle!\n"
	.string "Give me all you got!$"

Route114_Text_KyleLetsBattle::
# 404 "data/maps/Route114/scripts.pory"
	.string "KYLE: I got a new POKéMON and I'm raring\n"
	.string "to try it out.\p"
	.string "C'mon!\n"
	.string "Let's have a battle!\n"
	.string "Give me all you got!$"

Route114_Text_PleaseLetMeAssist::
# 411 "data/maps/Route114/scripts.pory"
	.string "WALLY: {PLAYER}, you've been a help\n"
	.string "to me so many times now.\l"
	.string "I want to assist you for once.\p"
	.string "Please let me battle alongside you!$"

Route114_Text_SpencerPickYourPokemon::
# 417 "data/maps/Route114/scripts.pory"
	.string "SPENCER: That's fine by me!\n"
	.string "I'm feeling so good right now, I can\l"
	.string "probably beat you both easily!\p"
	.string "Pick your POKéMON and prepare for\n"
	.string "defeat!$"

Route114_Text_BrenPickYourPokemon::
# 423 "data/maps/Route114/scripts.pory"
	.string "BREN: That's fine by me!\n"
	.string "I'm feeling so good right now, I can\l"
	.string "probably beat you both easily!\p"
	.string "Pick your POKéMON and prepare for\n"
	.string "defeat!$"

Route114_Text_KylePickYourPokemon::
# 429 "data/maps/Route114/scripts.pory"
	.string "KYLE: That's fine by me!\n"
	.string "I'm feeling so good right now, I can\l"
	.string "probably beat you both easily!\p"
	.string "Pick your POKéMON and prepare for\n"
	.string "defeat!$"

Route114_Text_CantBackOut::
# 435 "data/maps/Route114/scripts.pory"
	.string "Come on!\n"
	.string "You can't back out of this one.\n"
	.string "I think I can win this time!$"

Route114_Text_SpencerDefeated::
# 441 "data/maps/Route114/scripts.pory"
	.string "I thought I had that one for sure!$"

Route114_Text_BrenDefeated::
# 445 "data/maps/Route114/scripts.pory"
	.string "I thought I had that one for sure!$"

Route114_Text_KyleDefeated::
# 449 "data/maps/Route114/scripts.pory"
	.string "I thought I had that one for sure!$"

Route114_Text_SpencerPostBattle::
# 453 "data/maps/Route114/scripts.pory"
	.string "SPENCER: That was some awesome\n"
	.string "teamwork, you two!\p"
	.string "With a little bit more training, I feel\n"
	.string "like I could've won.\p"
	.string "Maybe I need to add more POKéMON to my\n"
	.string "team…\p"
	.string "In any case, this was fun!\n"
	.string "Let's battle again soon!$"

Route114_Text_BrenPostBattle::
# 461 "data/maps/Route114/scripts.pory"
	.string "BREN: That was some awesome teamwork,\n"
	.string "you two!\p"
	.string "With a little bit more training, I feel\n"
	.string "like I could've won.\p"
	.string "Maybe I need to add more POKéMON to my\n"
	.string "team…\p"
	.string "In any case, this was fun!\n"
	.string "Let's battle again soon!$"

Route114_Text_KylePostBattle::
# 469 "data/maps/Route114/scripts.pory"
	.string "KYLE: That was some awesome teamwork,\n"
	.string "you two!\p"
	.string "With a little bit more training, I feel\n"
	.string "like I could've won.\p"
	.string "Maybe I need to add more POKéMON to my\n"
	.string "team…\p"
	.string "In any case, this was fun!\n"
	.string "Let's battle again soon!$"
