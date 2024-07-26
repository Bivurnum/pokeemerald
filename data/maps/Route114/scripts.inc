# 6 "data/maps/Route114/scripts.pory"

# 7 "data/maps/Route114/scripts.pory"
.set LOCALID_WALLY, 28
# 8 "data/maps/Route114/scripts.pory"
.set LOCALID_RIVAL1BIKE, 29
# 9 "data/maps/Route114/scripts.pory"
.set LOCALID_RIVAL1, 30
# 10 "data/maps/Route114/scripts.pory"
.set LOCALID_RIVAL2, 31
# 11 "data/maps/Route114/scripts.pory"

# 12 "data/maps/Route114/scripts.pory"
Route114_MapScripts::
# 13 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_OnTransition
# 14 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route114_OnLoad
# 15 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route114_OnFrame
# 16 "data/maps/Route114/scripts.pory"
	.byte 0
# 17 "data/maps/Route114/scripts.pory"

# 18 "data/maps/Route114/scripts.pory"
Route114_OnTransition:
# 19 "data/maps/Route114/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 20 "data/maps/Route114/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 21 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 22 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH, AbnormalWeather_StartGroudonWeather
# 23 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH, AbnormalWeather_StartGroudonWeather
# 24 "data/maps/Route114/scripts.pory"
	end
# 25 "data/maps/Route114/scripts.pory"

# 26 "data/maps/Route114/scripts.pory"
Route114_OnLoad:
# 27 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute114North
# 28 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute114South
# 29 "data/maps/Route114/scripts.pory"
	end
# 30 "data/maps/Route114/scripts.pory"

# 31 "data/maps/Route114/scripts.pory"
Route114_OnFrame:
# 32 "data/maps/Route114/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 33 "data/maps/Route114/scripts.pory"
	.2byte 0

Route114_EventScript_WallyTrigger1::
# 37 "data/maps/Route114/scripts.pory"
	lock
# 38 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 1
# 39 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyTrigger2::
# 44 "data/maps/Route114/scripts.pory"
	lock
# 45 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 2
# 46 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyTrigger3::
# 51 "data/maps/Route114/scripts.pory"
	lock
# 52 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 3
# 53 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyTrigger4::
# 58 "data/maps/Route114/scripts.pory"
	lock
# 59 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 4
# 60 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyTrigger5::
# 65 "data/maps/Route114/scripts.pory"
	lock
# 66 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 5
# 67 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyTrigger6::
# 72 "data/maps/Route114/scripts.pory"
	lock
# 73 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 6
# 74 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyTrigger7::
# 79 "data/maps/Route114/scripts.pory"
	lock
# 80 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 7
# 81 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyTrigger8::
# 86 "data/maps/Route114/scripts.pory"
	lock
# 87 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 8
# 88 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyTrigger9::
# 93 "data/maps/Route114/scripts.pory"
	lock
# 94 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 9
# 95 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyTrigger10::
# 100 "data/maps/Route114/scripts.pory"
	lock
# 101 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 10
# 102 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyEvent::
# 107 "data/maps/Route114/scripts.pory"
	playse SE_PIN
# 108 "data/maps/Route114/scripts.pory"
	applymovement 28, Common_Movement_ExclamationMark
# 109 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 110 "data/maps/Route114/scripts.pory"
	compare VAR_0x8008, 4
	goto_if_lt Route114_EventScript_WallyEvent_2
# 113 "data/maps/Route114/scripts.pory"
	compare VAR_0x8008, 3
	goto_if_gt Route114_EventScript_WallyEvent_5
Route114_EventScript_WallyEvent_4:
# 117 "data/maps/Route114/scripts.pory"
	applymovement 28, Common_Movement_FaceDown
Route114_EventScript_WallyEvent_1:
# 119 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 120 "data/maps/Route114/scripts.pory"
	delay 56
# 121 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_OhHey, MSGBOX_AUTOCLOSE
# 122 "data/maps/Route114/scripts.pory"
	applymovement 28, Common_Movement_FaceRight
# 123 "data/maps/Route114/scripts.pory"
	switch VAR_0x8008
# 124 "data/maps/Route114/scripts.pory"
	case 1, Route114_EventScript_WallyEvent_11
# 126 "data/maps/Route114/scripts.pory"
	case 2, Route114_EventScript_WallyEvent_12
# 128 "data/maps/Route114/scripts.pory"
	case 3, Route114_EventScript_WallyEvent_13
# 130 "data/maps/Route114/scripts.pory"
	case 4, Route114_EventScript_WallyEvent_14
# 132 "data/maps/Route114/scripts.pory"
	case 5, Route114_EventScript_WallyEvent_15
# 134 "data/maps/Route114/scripts.pory"
	case 6, Route114_EventScript_WallyEvent_16
# 136 "data/maps/Route114/scripts.pory"
	case 7, Route114_EventScript_WallyEvent_17
# 138 "data/maps/Route114/scripts.pory"
	case 8, Route114_EventScript_WallyEvent_18
# 140 "data/maps/Route114/scripts.pory"
	case 9, Route114_EventScript_WallyEvent_19
# 142 "data/maps/Route114/scripts.pory"
	case 10, Route114_EventScript_WallyEvent_20
Route114_EventScript_WallyEvent_9:
# 145 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 146 "data/maps/Route114/scripts.pory"
	applymovement 28, Common_Movement_FaceRight
# 147 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 148 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_SomeoneRidingThisWay, MSGBOX_AUTOCLOSE
# 149 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 150 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 151 "data/maps/Route114/scripts.pory"
	addobject 29
# 152 "data/maps/Route114/scripts.pory"
	playse SE_BIKE_BELL
# 153 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WatchRivalBike
# 154 "data/maps/Route114/scripts.pory"
	applymovement 28, Route114_Movement_WatchRivalBike
# 155 "data/maps/Route114/scripts.pory"
	applymovement 29, Route114_Movement_Rival1BikesAround
# 156 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 157 "data/maps/Route114/scripts.pory"
	delay 20
# 158 "data/maps/Route114/scripts.pory"
	removeobject 29
# 159 "data/maps/Route114/scripts.pory"
	addobject 30
# 160 "data/maps/Route114/scripts.pory"
	rival1talk Route114_Text_SpencerLetsBattle, Route114_Text_BrenLetsBattle, Route114_Text_KyleLetsBattle
# 163 "data/maps/Route114/scripts.pory"
	closemessage
# 164 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 165 "data/maps/Route114/scripts.pory"
	applymovement 28, Common_Movement_BeginTalkRight
# 166 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 167 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_PleaseLetMeAssist, MSGBOX_AUTOCLOSE
# 168 "data/maps/Route114/scripts.pory"
	delay 10
# 169 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 170 "data/maps/Route114/scripts.pory"
	applymovement 28, Common_Movement_FaceDown
# 171 "data/maps/Route114/scripts.pory"
	applymovement 30, Common_Movement_BeginTalkUp
# 172 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 173 "data/maps/Route114/scripts.pory"
	rival1talk Route114_Text_SpencerPickYourPokemon, Route114_Text_BrenPickYourPokemon, Route114_Text_KylePickYourPokemon
# 176 "data/maps/Route114/scripts.pory"
	closemessage
# 177 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_PrepareForRival1Battle
	end

Route114_EventScript_WallyEvent_2:
# 111 "data/maps/Route114/scripts.pory"
	applymovement 28, Common_Movement_FaceUp
	goto Route114_EventScript_WallyEvent_1

Route114_EventScript_WallyEvent_3:
# 114 "data/maps/Route114/scripts.pory"
	applymovement 28, Common_Movement_FaceRight
	goto Route114_EventScript_WallyEvent_1

Route114_EventScript_WallyEvent_5:
# 113 "data/maps/Route114/scripts.pory"
	compare VAR_0x8008, 9
	goto_if_lt Route114_EventScript_WallyEvent_3
	goto Route114_EventScript_WallyEvent_4

Route114_EventScript_WallyEvent_11:
# 125 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally1
	goto Route114_EventScript_WallyEvent_9

Route114_EventScript_WallyEvent_12:
# 127 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally2
	goto Route114_EventScript_WallyEvent_9

Route114_EventScript_WallyEvent_13:
# 129 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally3
	goto Route114_EventScript_WallyEvent_9

Route114_EventScript_WallyEvent_14:
# 131 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally4
	goto Route114_EventScript_WallyEvent_9

Route114_EventScript_WallyEvent_15:
# 133 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally5
	goto Route114_EventScript_WallyEvent_9

Route114_EventScript_WallyEvent_16:
# 135 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally6
	goto Route114_EventScript_WallyEvent_9

Route114_EventScript_WallyEvent_17:
# 137 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally7
	goto Route114_EventScript_WallyEvent_9

Route114_EventScript_WallyEvent_18:
# 139 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally8
	goto Route114_EventScript_WallyEvent_9

Route114_EventScript_WallyEvent_19:
# 141 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally9
	goto Route114_EventScript_WallyEvent_9

Route114_EventScript_WallyEvent_20:
# 143 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally10
	goto Route114_EventScript_WallyEvent_9


Route114_EventScript_PrepareForRival1Battle::
# 182 "data/maps/Route114/scripts.pory"
	special SavePlayerParty
# 183 "data/maps/Route114/scripts.pory"
	fadescreen FADE_TO_BLACK
# 184 "data/maps/Route114/scripts.pory"
	special ChooseHalfPartyForBattle
# 185 "data/maps/Route114/scripts.pory"
	waitstate
# 186 "data/maps/Route114/scripts.pory"
	goto_if_ne VAR_RESULT, 0, Route114_EventScript_BeginRival1Battle
# 187 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_QuitPartySelect
	end


Route114_EventScript_QuitPartySelect::
# 192 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_CantBackOut
# 193 "data/maps/Route114/scripts.pory"
	closemessage
# 194 "data/maps/Route114/scripts.pory"
	special SavePlayerParty
# 195 "data/maps/Route114/scripts.pory"
	fadescreen FADE_TO_BLACK
# 196 "data/maps/Route114/scripts.pory"
	special ChooseHalfPartyForBattle
# 197 "data/maps/Route114/scripts.pory"
	waitstate
# 198 "data/maps/Route114/scripts.pory"
	goto_if_ne VAR_RESULT, 0, Route114_EventScript_BeginRival1Battle
# 199 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_QuitPartySelect
	end


Route114_EventScript_BeginRival1Battle::
# 204 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_BeginRival1Battle_Text_0, MSGBOX_DEFAULT
# 205 "data/maps/Route114/scripts.pory"
	closemessage
# 206 "data/maps/Route114/scripts.pory"
	checkfriendchoice
# 207 "data/maps/Route114/scripts.pory"
	switch VAR_RESULT
# 208 "data/maps/Route114/scripts.pory"
	case SPENCER, Route114_EventScript_BeginRival1Battle_3
# 210 "data/maps/Route114/scripts.pory"
	case BREN, Route114_EventScript_BeginRival1Battle_4
# 212 "data/maps/Route114/scripts.pory"
	case KYLE, Route114_EventScript_BeginRival1Battle_5
Route114_EventScript_BeginRival1Battle_1:
# 215 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyPostBattle
	return

Route114_EventScript_BeginRival1Battle_3:
# 209 "data/maps/Route114/scripts.pory"
	multi_2_vs_1 TRAINER_BREN_NEAR_FALLARBOR, Route114_Text_BrenDefeated, PARTNER_WALLY_ROUTE_114
	goto Route114_EventScript_BeginRival1Battle_1

Route114_EventScript_BeginRival1Battle_4:
# 211 "data/maps/Route114/scripts.pory"
	multi_2_vs_1 TRAINER_KYLE_NEAR_FALLARBOR, Route114_Text_KyleDefeated, PARTNER_WALLY_ROUTE_114
	goto Route114_EventScript_BeginRival1Battle_1

Route114_EventScript_BeginRival1Battle_5:
# 213 "data/maps/Route114/scripts.pory"
	multi_2_vs_1 TRAINER_SPENCER_NEAR_FALLARBOR, Route114_Text_SpencerDefeated, PARTNER_WALLY_ROUTE_114
	goto Route114_EventScript_BeginRival1Battle_1


Route114_EventScript_WallyPostBattle::
# 219 "data/maps/Route114/scripts.pory"
	applymovement 30, Common_Movement_BeginTalkUp
# 220 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 221 "data/maps/Route114/scripts.pory"
	rival1talk Route114_Text_SpencerPostBattle, Route114_Text_BrenPostBattle, Route114_Text_KylePostBattle
# 224 "data/maps/Route114/scripts.pory"
	closemessage
# 225 "data/maps/Route114/scripts.pory"
	setobjectxyperm 29, 31, 11
# 226 "data/maps/Route114/scripts.pory"
	playse SE_BIKE_BELL
# 227 "data/maps/Route114/scripts.pory"
	removeobject 30
# 228 "data/maps/Route114/scripts.pory"
	addobject 29
# 229 "data/maps/Route114/scripts.pory"
	addobject 31
# 230 "data/maps/Route114/scripts.pory"
	delay 30
# 231 "data/maps/Route114/scripts.pory"
	applymovement 31, Route114_Movement_Rival2GoesToFossilHouse
# 232 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WatchRival1Leave
# 233 "data/maps/Route114/scripts.pory"
	applymovement 28, Route114_Movement_WatchRival1Leave
# 234 "data/maps/Route114/scripts.pory"
	applymovement 29, Route114_Movement_Rival1BikesAway
# 235 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 236 "data/maps/Route114/scripts.pory"
	removeobject 29
# 237 "data/maps/Route114/scripts.pory"
	opendoor 29, 5
# 238 "data/maps/Route114/scripts.pory"
	waitdooranim
# 239 "data/maps/Route114/scripts.pory"
	applymovement 31, Common_Movement_Walk_Up
# 240 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 241 "data/maps/Route114/scripts.pory"
	removeobject 31
# 242 "data/maps/Route114/scripts.pory"
	closedoor 29, 5
# 243 "data/maps/Route114/scripts.pory"
	waitdooranim
# 244 "data/maps/Route114/scripts.pory"
	delay 16
# 245 "data/maps/Route114/scripts.pory"
	applymovement 28, Common_Movement_WalkInPlaceFasterRight
# 246 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 247 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_UntilWeMeetAgain, MSGBOX_AUTOCLOSE
# 248 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WatchWallyLeave
# 249 "data/maps/Route114/scripts.pory"
	applymovement 28, Route114_Movement_WallyLeave
# 250 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 251 "data/maps/Route114/scripts.pory"
	removeobject 28
# 252 "data/maps/Route114/scripts.pory"
	setvar VAR_METEOR_FALLS_STATE, 1
# 253 "data/maps/Route114/scripts.pory"
	setvar VAR_BURIED_RIVAL2, 1
# 254 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 0
# 255 "data/maps/Route114/scripts.pory"
	setflag FLAG_HIDE_ROUTE_113_RIVAL1
# 256 "data/maps/Route114/scripts.pory"
	setflag FLAG_HIDE_ROUTE_113_RIVAL2
# 257 "data/maps/Route114/scripts.pory"
	setflag FLAG_HIDE_ROUTE_113_LAO_ON_SIDE
# 258 "data/maps/Route114/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_113_LAO
# 259 "data/maps/Route114/scripts.pory"
	release
	end


# 263 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally1:
# 264 "data/maps/Route114/scripts.pory"
	walk_down
# 264 "data/maps/Route114/scripts.pory"
	walk_down
# 264 "data/maps/Route114/scripts.pory"
	walk_down
# 264 "data/maps/Route114/scripts.pory"
	walk_down
# 264 "data/maps/Route114/scripts.pory"
	walk_down
# 265 "data/maps/Route114/scripts.pory"
	walk_left
	step_end

# 268 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally2:
# 269 "data/maps/Route114/scripts.pory"
	walk_down
# 269 "data/maps/Route114/scripts.pory"
	walk_down
# 269 "data/maps/Route114/scripts.pory"
	walk_down
# 269 "data/maps/Route114/scripts.pory"
	walk_down
# 270 "data/maps/Route114/scripts.pory"
	walk_left
	step_end

# 273 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally3:
# 274 "data/maps/Route114/scripts.pory"
	walk_down
# 274 "data/maps/Route114/scripts.pory"
	walk_down
# 274 "data/maps/Route114/scripts.pory"
	walk_down
# 275 "data/maps/Route114/scripts.pory"
	walk_left
	step_end

# 278 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally4:
# 279 "data/maps/Route114/scripts.pory"
	walk_down
# 279 "data/maps/Route114/scripts.pory"
	walk_down
# 280 "data/maps/Route114/scripts.pory"
	walk_left
# 280 "data/maps/Route114/scripts.pory"
	walk_left
	step_end

# 283 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally5:
# 284 "data/maps/Route114/scripts.pory"
	walk_left
# 284 "data/maps/Route114/scripts.pory"
	walk_left
# 285 "data/maps/Route114/scripts.pory"
	walk_down
# 286 "data/maps/Route114/scripts.pory"
	walk_left
	step_end

# 289 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally6:
# 290 "data/maps/Route114/scripts.pory"
	walk_left
# 290 "data/maps/Route114/scripts.pory"
	walk_left
# 290 "data/maps/Route114/scripts.pory"
	walk_left
	step_end

# 293 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally7:
# 294 "data/maps/Route114/scripts.pory"
	walk_left
# 294 "data/maps/Route114/scripts.pory"
	walk_left
# 295 "data/maps/Route114/scripts.pory"
	walk_up
# 296 "data/maps/Route114/scripts.pory"
	walk_left
	step_end

# 299 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally8:
# 300 "data/maps/Route114/scripts.pory"
	walk_up
# 300 "data/maps/Route114/scripts.pory"
	walk_up
# 301 "data/maps/Route114/scripts.pory"
	walk_left
# 301 "data/maps/Route114/scripts.pory"
	walk_left
	step_end

# 304 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally9:
# 305 "data/maps/Route114/scripts.pory"
	walk_up
# 305 "data/maps/Route114/scripts.pory"
	walk_up
# 305 "data/maps/Route114/scripts.pory"
	walk_up
# 306 "data/maps/Route114/scripts.pory"
	walk_left
	step_end

# 309 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally10:
# 310 "data/maps/Route114/scripts.pory"
	walk_up
# 310 "data/maps/Route114/scripts.pory"
	walk_up
# 310 "data/maps/Route114/scripts.pory"
	walk_up
# 311 "data/maps/Route114/scripts.pory"
	walk_in_place_left
	step_end

# 314 "data/maps/Route114/scripts.pory"
Route114_Movement_Rival1BikesAround:
# 315 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 315 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 315 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 315 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 315 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 315 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 315 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 315 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 315 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 315 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 315 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 316 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 316 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 316 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 316 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 317 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 317 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 317 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 317 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 317 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 318 "data/maps/Route114/scripts.pory"
	walk_fast_up
# 318 "data/maps/Route114/scripts.pory"
	walk_fast_up
# 318 "data/maps/Route114/scripts.pory"
	walk_fast_up
# 318 "data/maps/Route114/scripts.pory"
	walk_fast_up
# 319 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 319 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 319 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 319 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 319 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 320 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 320 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 320 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 320 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 321 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 321 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 321 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 322 "data/maps/Route114/scripts.pory"
	walk_fast_up
# 323 "data/maps/Route114/scripts.pory"
	delay_16
	step_end

# 326 "data/maps/Route114/scripts.pory"
Route114_Movement_WatchRivalBike:
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
# 327 "data/maps/Route114/scripts.pory"
	delay_8
# 327 "data/maps/Route114/scripts.pory"
	delay_8
# 328 "data/maps/Route114/scripts.pory"
	face_up
# 329 "data/maps/Route114/scripts.pory"
	delay_8
# 329 "data/maps/Route114/scripts.pory"
	delay_8
# 329 "data/maps/Route114/scripts.pory"
	delay_8
# 329 "data/maps/Route114/scripts.pory"
	delay_8
# 330 "data/maps/Route114/scripts.pory"
	face_left
# 331 "data/maps/Route114/scripts.pory"
	delay_8
# 331 "data/maps/Route114/scripts.pory"
	delay_8
# 331 "data/maps/Route114/scripts.pory"
	delay_8
# 331 "data/maps/Route114/scripts.pory"
	delay_8
# 332 "data/maps/Route114/scripts.pory"
	face_down
# 333 "data/maps/Route114/scripts.pory"
	delay_8
# 333 "data/maps/Route114/scripts.pory"
	delay_8
# 333 "data/maps/Route114/scripts.pory"
	delay_8
# 333 "data/maps/Route114/scripts.pory"
	delay_8
# 333 "data/maps/Route114/scripts.pory"
	delay_8
# 334 "data/maps/Route114/scripts.pory"
	face_right
# 335 "data/maps/Route114/scripts.pory"
	delay_8
# 335 "data/maps/Route114/scripts.pory"
	delay_8
# 335 "data/maps/Route114/scripts.pory"
	delay_8
# 335 "data/maps/Route114/scripts.pory"
	delay_8
# 336 "data/maps/Route114/scripts.pory"
	face_up
# 337 "data/maps/Route114/scripts.pory"
	delay_8
# 337 "data/maps/Route114/scripts.pory"
	delay_8
# 337 "data/maps/Route114/scripts.pory"
	delay_8
# 337 "data/maps/Route114/scripts.pory"
	delay_8
# 337 "data/maps/Route114/scripts.pory"
	delay_8
# 338 "data/maps/Route114/scripts.pory"
	face_left
# 339 "data/maps/Route114/scripts.pory"
	delay_8
# 339 "data/maps/Route114/scripts.pory"
	delay_8
# 339 "data/maps/Route114/scripts.pory"
	delay_8
# 339 "data/maps/Route114/scripts.pory"
	delay_8
# 340 "data/maps/Route114/scripts.pory"
	face_down
	step_end

# 343 "data/maps/Route114/scripts.pory"
Route114_Movement_Rival1BikesAway:
# 344 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 344 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 345 "data/maps/Route114/scripts.pory"
	walk_fast_up
# 345 "data/maps/Route114/scripts.pory"
	walk_fast_up
# 345 "data/maps/Route114/scripts.pory"
	walk_fast_up
# 346 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 346 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 346 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 346 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 346 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 347 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 347 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 347 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 347 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 348 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 348 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 348 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 348 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 348 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 348 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 348 "data/maps/Route114/scripts.pory"
	walk_fast_left
	step_end

# 351 "data/maps/Route114/scripts.pory"
Route114_Movement_WatchRival1Leave:
# 352 "data/maps/Route114/scripts.pory"
	delay_8
# 353 "data/maps/Route114/scripts.pory"
	face_right
# 354 "data/maps/Route114/scripts.pory"
	delay_8
# 354 "data/maps/Route114/scripts.pory"
	delay_8
# 354 "data/maps/Route114/scripts.pory"
	delay_8
# 354 "data/maps/Route114/scripts.pory"
	delay_8
# 355 "data/maps/Route114/scripts.pory"
	face_up
# 356 "data/maps/Route114/scripts.pory"
	delay_8
# 356 "data/maps/Route114/scripts.pory"
	delay_8
# 356 "data/maps/Route114/scripts.pory"
	delay_8
# 356 "data/maps/Route114/scripts.pory"
	delay_8
# 356 "data/maps/Route114/scripts.pory"
	delay_8
# 357 "data/maps/Route114/scripts.pory"
	face_left
	step_end

# 360 "data/maps/Route114/scripts.pory"
Route114_Movement_Rival2GoesToFossilHouse:
# 361 "data/maps/Route114/scripts.pory"
	walk_left
# 361 "data/maps/Route114/scripts.pory"
	walk_left
# 361 "data/maps/Route114/scripts.pory"
	walk_left
# 361 "data/maps/Route114/scripts.pory"
	walk_left
# 361 "data/maps/Route114/scripts.pory"
	walk_left
# 361 "data/maps/Route114/scripts.pory"
	walk_left
# 361 "data/maps/Route114/scripts.pory"
	walk_left
# 361 "data/maps/Route114/scripts.pory"
	walk_left
# 361 "data/maps/Route114/scripts.pory"
	walk_left
# 361 "data/maps/Route114/scripts.pory"
	walk_left
# 362 "data/maps/Route114/scripts.pory"
	face_up
	step_end

# 365 "data/maps/Route114/scripts.pory"
Route114_Movement_WatchWallyLeave:
# 366 "data/maps/Route114/scripts.pory"
	delay_16
# 367 "data/maps/Route114/scripts.pory"
	face_up
# 368 "data/maps/Route114/scripts.pory"
	delay_16
# 368 "data/maps/Route114/scripts.pory"
	delay_16
# 369 "data/maps/Route114/scripts.pory"
	face_right
	step_end

# 372 "data/maps/Route114/scripts.pory"
Route114_Movement_WallyLeave:
# 373 "data/maps/Route114/scripts.pory"
	walk_up
# 374 "data/maps/Route114/scripts.pory"
	walk_right
# 374 "data/maps/Route114/scripts.pory"
	walk_right
# 374 "data/maps/Route114/scripts.pory"
	walk_right
# 374 "data/maps/Route114/scripts.pory"
	walk_right
# 374 "data/maps/Route114/scripts.pory"
	walk_right
# 374 "data/maps/Route114/scripts.pory"
	walk_right
# 374 "data/maps/Route114/scripts.pory"
	walk_right
# 374 "data/maps/Route114/scripts.pory"
	walk_right
# 374 "data/maps/Route114/scripts.pory"
	walk_right
	step_end

# 488 "data/maps/Route114/scripts.pory"

# 489 "data/maps/Route114/scripts.pory"
Route114_EventScript_Man::
# 490 "data/maps/Route114/scripts.pory"
	lock
# 491 "data/maps/Route114/scripts.pory"
	faceplayer
# 492 "data/maps/Route114/scripts.pory"
	dotimebasedevents
# 493 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_114_RECEIVED_BERRY, Route114_EventScript_ReceivedBerry
# 494 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LoveUsingBerryCrushShareBerry, MSGBOX_DEFAULT
# 495 "data/maps/Route114/scripts.pory"
	random NUM_ROUTE_114_MAN_BERRIES
# 496 "data/maps/Route114/scripts.pory"
	addvar VAR_RESULT, NUM_ROUTE_114_MAN_BERRIES_SKIPPED
# 497 "data/maps/Route114/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 498 "data/maps/Route114/scripts.pory"
	giveitem VAR_RESULT
# 499 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 500 "data/maps/Route114/scripts.pory"
	setflag FLAG_DAILY_ROUTE_114_RECEIVED_BERRY
# 501 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TryBerryCrushWithFriends, MSGBOX_DEFAULT
# 502 "data/maps/Route114/scripts.pory"
	release
# 503 "data/maps/Route114/scripts.pory"
	end
# 504 "data/maps/Route114/scripts.pory"

# 505 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedBerry::
# 506 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FunToThinkAboutBerries, MSGBOX_DEFAULT
# 507 "data/maps/Route114/scripts.pory"
	release
# 508 "data/maps/Route114/scripts.pory"
	end
# 509 "data/maps/Route114/scripts.pory"

# 510 "data/maps/Route114/scripts.pory"
Route114_EventScript_RoarGentleman::
# 511 "data/maps/Route114/scripts.pory"
	lock
# 512 "data/maps/Route114/scripts.pory"
	faceplayer
# 513 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ROAR, Route114_EventScript_ReceivedRoar
# 514 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AllMyMonDoesIsRoarTakeThis, MSGBOX_DEFAULT
# 515 "data/maps/Route114/scripts.pory"
	giveitem ITEM_TM_ROAR
# 516 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 517 "data/maps/Route114/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROAR
# 518 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 519 "data/maps/Route114/scripts.pory"
	release
# 520 "data/maps/Route114/scripts.pory"
	end
# 521 "data/maps/Route114/scripts.pory"

# 522 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedRoar::
# 523 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 524 "data/maps/Route114/scripts.pory"
	release
# 525 "data/maps/Route114/scripts.pory"
	end
# 526 "data/maps/Route114/scripts.pory"

# 527 "data/maps/Route114/scripts.pory"
Route114_EventScript_Poochyena::
# 528 "data/maps/Route114/scripts.pory"
	lock
# 529 "data/maps/Route114/scripts.pory"
	faceplayer
# 530 "data/maps/Route114/scripts.pory"
	waitse
# 531 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_ENCOUNTER
# 532 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Poochyena, MSGBOX_DEFAULT
# 533 "data/maps/Route114/scripts.pory"
	waitmoncry
# 534 "data/maps/Route114/scripts.pory"
	release
# 535 "data/maps/Route114/scripts.pory"
	end
# 536 "data/maps/Route114/scripts.pory"

# 537 "data/maps/Route114/scripts.pory"
Route114_EventScript_MeteorFallsSign::
# 538 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_MeteorFallsSign, MSGBOX_SIGN
# 539 "data/maps/Route114/scripts.pory"
	end
# 540 "data/maps/Route114/scripts.pory"

# 541 "data/maps/Route114/scripts.pory"
Route114_EventScript_FossilManiacsHouseSign::
# 542 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FossilManiacsHouseSign, MSGBOX_SIGN
# 543 "data/maps/Route114/scripts.pory"
	end
# 544 "data/maps/Route114/scripts.pory"

# 545 "data/maps/Route114/scripts.pory"
Route114_EventScript_LanettesHouseSign::
# 546 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LanettesHouse, MSGBOX_SIGN
# 547 "data/maps/Route114/scripts.pory"
	end
# 548 "data/maps/Route114/scripts.pory"

# 549 "data/maps/Route114/scripts.pory"
Route114_EventScript_Lenny::
# 550 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_LENNY, Route114_Text_LennyIntro, Route114_Text_LennyDefeat
# 551 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LennyPostBattle, MSGBOX_AUTOCLOSE
# 552 "data/maps/Route114/scripts.pory"
	end
# 553 "data/maps/Route114/scripts.pory"

# 554 "data/maps/Route114/scripts.pory"
Route114_EventScript_Lucas::
# 555 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_LUCAS_1, Route114_Text_LucasIntro, Route114_Text_LucasDefeat
# 556 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LucasPostBattle, MSGBOX_AUTOCLOSE
# 557 "data/maps/Route114/scripts.pory"
	end
# 558 "data/maps/Route114/scripts.pory"

# 559 "data/maps/Route114/scripts.pory"
Route114_EventScript_Shane::
# 560 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_SHANE, Route114_Text_ShaneIntro, Route114_Text_ShaneDefeat
# 561 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ShanePostBattle, MSGBOX_AUTOCLOSE
# 562 "data/maps/Route114/scripts.pory"
	end
# 563 "data/maps/Route114/scripts.pory"

# 564 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nancy::
# 565 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NANCY, Route114_Text_NancyIntro, Route114_Text_NancyDefeat
# 566 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NancyPostBattle, MSGBOX_AUTOCLOSE
# 567 "data/maps/Route114/scripts.pory"
	end
# 568 "data/maps/Route114/scripts.pory"

# 569 "data/maps/Route114/scripts.pory"
Route114_EventScript_Steve::
# 570 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_STEVE_1, Route114_Text_SteveIntro, Route114_Text_SteveDefeat, Route114_EventScript_RegisterSteve
# 571 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 572 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_EventScript_RematchSteve
# 573 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostBattle, MSGBOX_DEFAULT
# 574 "data/maps/Route114/scripts.pory"
	release
# 575 "data/maps/Route114/scripts.pory"
	end
# 576 "data/maps/Route114/scripts.pory"

# 577 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterSteve::
# 578 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 579 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 580 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_SteveRegister, MSGBOX_DEFAULT
# 581 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_STEVE_1
# 582 "data/maps/Route114/scripts.pory"
	release
# 583 "data/maps/Route114/scripts.pory"
	end
# 584 "data/maps/Route114/scripts.pory"

# 585 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchSteve::
# 586 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_STEVE_1, Route114_Text_SteveRematchIntro, Route114_Text_SteveRematchDefeat
# 587 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostRematch, MSGBOX_AUTOCLOSE
# 588 "data/maps/Route114/scripts.pory"
	end
# 589 "data/maps/Route114/scripts.pory"

# 590 "data/maps/Route114/scripts.pory"
Route114_EventScript_Bernie::
# 591 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_BERNIE_1, Route114_Text_BernieIntro, Route114_Text_BernieDefeat, Route114_EventScript_RegisterBernie
# 592 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 593 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_EventScript_RematchBernie
# 594 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostBattle, MSGBOX_DEFAULT
# 595 "data/maps/Route114/scripts.pory"
	release
# 596 "data/maps/Route114/scripts.pory"
	end
# 597 "data/maps/Route114/scripts.pory"

# 598 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterBernie::
# 599 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 600 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 601 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BernieRegister, MSGBOX_DEFAULT
# 602 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_BERNIE_1
# 603 "data/maps/Route114/scripts.pory"
	release
# 604 "data/maps/Route114/scripts.pory"
	end
# 605 "data/maps/Route114/scripts.pory"

# 606 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchBernie::
# 607 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_BERNIE_1, Route114_Text_BernieRematchIntro, Route114_Text_BernieRematchDefeat
# 608 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostRematch, MSGBOX_AUTOCLOSE
# 609 "data/maps/Route114/scripts.pory"
	end
# 610 "data/maps/Route114/scripts.pory"

# 611 "data/maps/Route114/scripts.pory"
Route114_EventScript_Claude::
# 612 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_CLAUDE, Route114_Text_ClaudeIntro, Route114_Text_ClaudeDefeat
# 613 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ClaudePostBattle, MSGBOX_AUTOCLOSE
# 614 "data/maps/Route114/scripts.pory"
	end
# 615 "data/maps/Route114/scripts.pory"

# 616 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nolan::
# 617 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NOLAN, Route114_Text_NolanIntro, Route114_Text_NolanDefeat
# 618 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NolanPostBattle, MSGBOX_AUTOCLOSE
# 619 "data/maps/Route114/scripts.pory"
	end
# 620 "data/maps/Route114/scripts.pory"

# 621 "data/maps/Route114/scripts.pory"
Route114_EventScript_Tyra::
# 622 "data/maps/Route114/scripts.pory"
	trainerbattle_double TRAINER_TYRA_AND_IVY, Route114_Text_TyraIntro, Route114_Text_TyraDefeat, Route114_Text_TyraNotEnoughMons
# 623 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TyraPostBattle, MSGBOX_AUTOCLOSE
# 624 "data/maps/Route114/scripts.pory"
	end
# 625 "data/maps/Route114/scripts.pory"

# 626 "data/maps/Route114/scripts.pory"
Route114_EventScript_Ivy::
# 627 "data/maps/Route114/scripts.pory"
	trainerbattle_double TRAINER_TYRA_AND_IVY, Route114_Text_IvyIntro, Route114_Text_IvyDefeat, Route114_Text_IvyNotEnoughMons
# 628 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_IvyPostBattle, MSGBOX_AUTOCLOSE
# 629 "data/maps/Route114/scripts.pory"
	end
# 630 "data/maps/Route114/scripts.pory"

# 631 "data/maps/Route114/scripts.pory"
Route114_EventScript_Angelina::
# 632 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_ANGELINA, Route114_Text_AngelinaIntro, Route114_Text_AngelinaDefeat
# 633 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AngelinaPostBattle, MSGBOX_AUTOCLOSE
# 634 "data/maps/Route114/scripts.pory"
	end
# 635 "data/maps/Route114/scripts.pory"

# 636 "data/maps/Route114/scripts.pory"
Route114_EventScript_Charlotte::
# 637 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_CHARLOTTE, Route114_Text_CharlotteIntro, Route114_Text_CharlotteDefeat
# 638 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_CharlottePostBattle, MSGBOX_AUTOCLOSE
# 639 "data/maps/Route114/scripts.pory"
	end
# 640 "data/maps/Route114/scripts.pory"

# 641 "data/maps/Route114/scripts.pory"
Route114_EventScript_Kai::
# 642 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_KAI, Route114_Text_KaiIntro, Route114_Text_KaiDefeat
# 643 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_KaiPostBattle, MSGBOX_AUTOCLOSE
# 644 "data/maps/Route114/scripts.pory"
	end
# 645 "data/maps/Route114/scripts.pory"

# 646 "data/maps/Route114/scripts.pory"
Route114_Text_AllMyMonDoesIsRoarTakeThis:
# 647 "data/maps/Route114/scripts.pory"
	.string "All my POKéMON does is ROAR…\n"
# 648 "data/maps/Route114/scripts.pory"
	.string "No one dares to come near me…\p"
# 649 "data/maps/Route114/scripts.pory"
	.string "Sigh… If you would, please take\n"
# 650 "data/maps/Route114/scripts.pory"
	.string "this TM away…$"
# 651 "data/maps/Route114/scripts.pory"

# 652 "data/maps/Route114/scripts.pory"
Route114_Text_ExplainRoar:
# 653 "data/maps/Route114/scripts.pory"
	.string "TM05 contains ROAR.\n"
# 654 "data/maps/Route114/scripts.pory"
	.string "A ROAR sends POKéMON scurrying.$"
# 655 "data/maps/Route114/scripts.pory"

# 656 "data/maps/Route114/scripts.pory"
Route114_Text_Poochyena:
# 657 "data/maps/Route114/scripts.pory"
	.string "Bow! Bowwow!$"
# 658 "data/maps/Route114/scripts.pory"

# 659 "data/maps/Route114/scripts.pory"
Route114_Text_MeteorFallsSign:
# 660 "data/maps/Route114/scripts.pory"
	.string "METEOR FALLS\n"
# 661 "data/maps/Route114/scripts.pory"
	.string "RUSTBORO CITY THROUGH HERE$"
# 662 "data/maps/Route114/scripts.pory"

# 663 "data/maps/Route114/scripts.pory"
Route114_Text_FossilManiacsHouseSign:
# 664 "data/maps/Route114/scripts.pory"
	.string "FOSSIL MANIAC'S HOUSE\n"
# 665 "data/maps/Route114/scripts.pory"
	.string "“Fossils gratefully accepted!”$"
# 666 "data/maps/Route114/scripts.pory"

# 667 "data/maps/Route114/scripts.pory"
Route114_Text_LanettesHouse:
# 668 "data/maps/Route114/scripts.pory"
	.string "LANETTE'S HOUSE$"

Route114_EventScript_BeginRival1Battle_Text_0:
# 204 "data/maps/Route114/scripts.pory"
	.string "Don't hold back!$"

Route114_Text_OhHey::
# 377 "data/maps/Route114/scripts.pory"
	.string "Oh, hey {PLAYER}!$"

Route114_Text_SomeoneRidingThisWay::
# 381 "data/maps/Route114/scripts.pory"
	.string "WALLY: I didn't think I'd run into you so\n"
	.string "soon.\p"
	.string "Don't worry. I'm not here to battle you.\p"
	.string "RALTS and I came out here to train.\n"
	.string "It's been going pretty well!\p"
	.string "Oh!\n"
	.string "I think I see someone riding their bike\l"
	.string "this way!$"

Route114_Text_UntilWeMeetAgain::
# 390 "data/maps/Route114/scripts.pory"
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
# 401 "data/maps/Route114/scripts.pory"
	.string "SPENCER: I got a new POKéMON and I'm\n"
	.string "raring to try it out.\p"
	.string "C'mon!\n"
	.string "Let's have a battle!\n"
	.string "Give me all you got!$"

Route114_Text_BrenLetsBattle::
# 408 "data/maps/Route114/scripts.pory"
	.string "BREN: I got a new POKéMON and I'm raring\n"
	.string "to try it out.\p"
	.string "C'mon!\n"
	.string "Let's have a battle!\n"
	.string "Give me all you got!$"

Route114_Text_KyleLetsBattle::
# 415 "data/maps/Route114/scripts.pory"
	.string "KYLE: I got a new POKéMON and I'm raring\n"
	.string "to try it out.\p"
	.string "C'mon!\n"
	.string "Let's have a battle!\n"
	.string "Give me all you got!$"

Route114_Text_PleaseLetMeAssist::
# 422 "data/maps/Route114/scripts.pory"
	.string "WALLY: {PLAYER}, you've been a help\n"
	.string "to me so many times now.\l"
	.string "I want to assist you for once.\p"
	.string "Please let me battle alongside you!$"

Route114_Text_SpencerPickYourPokemon::
# 428 "data/maps/Route114/scripts.pory"
	.string "SPENCER: That's fine by me!\n"
	.string "I'm feeling so good right now, I can\l"
	.string "probably beat you both easily!\p"
	.string "Pick your POKéMON and prepare for\n"
	.string "defeat!$"

Route114_Text_BrenPickYourPokemon::
# 434 "data/maps/Route114/scripts.pory"
	.string "BREN: That's fine by me!\n"
	.string "I'm feeling so good right now, I can\l"
	.string "probably beat you both easily!\p"
	.string "Pick your POKéMON and prepare for\n"
	.string "defeat!$"

Route114_Text_KylePickYourPokemon::
# 440 "data/maps/Route114/scripts.pory"
	.string "KYLE: That's fine by me!\n"
	.string "I'm feeling so good right now, I can\l"
	.string "probably beat you both easily!\p"
	.string "Pick your POKéMON and prepare for\n"
	.string "defeat!$"

Route114_Text_CantBackOut::
# 446 "data/maps/Route114/scripts.pory"
	.string "Come on!\n"
	.string "You can't back out of this one.\n"
	.string "I think I can win this time!$"

Route114_Text_SpencerDefeated::
# 452 "data/maps/Route114/scripts.pory"
	.string "I thought I had that one for sure!$"

Route114_Text_BrenDefeated::
# 456 "data/maps/Route114/scripts.pory"
	.string "I thought I had that one for sure!$"

Route114_Text_KyleDefeated::
# 460 "data/maps/Route114/scripts.pory"
	.string "I thought I had that one for sure!$"

Route114_Text_SpencerPostBattle::
# 464 "data/maps/Route114/scripts.pory"
	.string "SPENCER: That was some awesome\n"
	.string "teamwork, you two!\p"
	.string "With a little bit more training, I feel\n"
	.string "like I could've won.\p"
	.string "Maybe I need to add more POKéMON to my\n"
	.string "team…\p"
	.string "In any case, this was fun!\n"
	.string "Let's battle again soon!$"

Route114_Text_BrenPostBattle::
# 472 "data/maps/Route114/scripts.pory"
	.string "BREN: That was some awesome teamwork,\n"
	.string "you two!\p"
	.string "With a little bit more training, I feel\n"
	.string "like I could've won.\p"
	.string "Maybe I need to add more POKéMON to my\n"
	.string "team…\p"
	.string "In any case, this was fun!\n"
	.string "Let's battle again soon!$"

Route114_Text_KylePostBattle::
# 480 "data/maps/Route114/scripts.pory"
	.string "KYLE: That was some awesome teamwork,\n"
	.string "you two!\p"
	.string "With a little bit more training, I feel\n"
	.string "like I could've won.\p"
	.string "Maybe I need to add more POKéMON to my\n"
	.string "team…\p"
	.string "In any case, this was fun!\n"
	.string "Let's battle again soon!$"
