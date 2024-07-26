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
	call_if_eq VAR_METEOR_FALLS_STATE, 3, Route114_EventScript_DestroyFollower
# 28 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute114North
# 29 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute114South
# 30 "data/maps/Route114/scripts.pory"
	end
# 31 "data/maps/Route114/scripts.pory"

# 32 "data/maps/Route114/scripts.pory"
Route114_OnFrame:
# 33 "data/maps/Route114/scripts.pory"
	map_script_2 VAR_METEOR_FALLS_STATE, 3, Route114_EventScript_ResetMeteorFallsFollower
# 34 "data/maps/Route114/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 35 "data/maps/Route114/scripts.pory"
	.2byte 0

Route114_EventScript_DestroyFollower::
# 39 "data/maps/Route114/scripts.pory"
	destroyfollower
# 40 "data/maps/Route114/scripts.pory"
	clearflag FLAG_HIDE_METEOR_FALLS_RIVAL1
	return


Route114_EventScript_ResetMeteorFallsFollower::
# 45 "data/maps/Route114/scripts.pory"
	setvar VAR_METEOR_FALLS_STATE, 2
	end


Route114_EventScript_WallyTrigger1::
# 50 "data/maps/Route114/scripts.pory"
	lock
# 51 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 1
# 52 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyTrigger2::
# 57 "data/maps/Route114/scripts.pory"
	lock
# 58 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 2
# 59 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyTrigger3::
# 64 "data/maps/Route114/scripts.pory"
	lock
# 65 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 3
# 66 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyTrigger4::
# 71 "data/maps/Route114/scripts.pory"
	lock
# 72 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 4
# 73 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyTrigger5::
# 78 "data/maps/Route114/scripts.pory"
	lock
# 79 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 5
# 80 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyTrigger6::
# 85 "data/maps/Route114/scripts.pory"
	lock
# 86 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 6
# 87 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyTrigger7::
# 92 "data/maps/Route114/scripts.pory"
	lock
# 93 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 7
# 94 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyTrigger8::
# 99 "data/maps/Route114/scripts.pory"
	lock
# 100 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 8
# 101 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyTrigger9::
# 106 "data/maps/Route114/scripts.pory"
	lock
# 107 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 9
# 108 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyTrigger10::
# 113 "data/maps/Route114/scripts.pory"
	lock
# 114 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 10
# 115 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyEvent
	end


Route114_EventScript_WallyEvent::
# 120 "data/maps/Route114/scripts.pory"
	playse SE_PIN
# 121 "data/maps/Route114/scripts.pory"
	applymovement 28, Common_Movement_ExclamationMark
# 122 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 123 "data/maps/Route114/scripts.pory"
	compare VAR_0x8008, 4
	goto_if_lt Route114_EventScript_WallyEvent_2
# 126 "data/maps/Route114/scripts.pory"
	compare VAR_0x8008, 3
	goto_if_gt Route114_EventScript_WallyEvent_5
Route114_EventScript_WallyEvent_4:
# 130 "data/maps/Route114/scripts.pory"
	applymovement 28, Common_Movement_FaceDown
Route114_EventScript_WallyEvent_1:
# 132 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 133 "data/maps/Route114/scripts.pory"
	delay 56
# 134 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_OhHey, MSGBOX_AUTOCLOSE
# 135 "data/maps/Route114/scripts.pory"
	applymovement 28, Common_Movement_FaceRight
# 136 "data/maps/Route114/scripts.pory"
	switch VAR_0x8008
# 137 "data/maps/Route114/scripts.pory"
	case 1, Route114_EventScript_WallyEvent_11
# 139 "data/maps/Route114/scripts.pory"
	case 2, Route114_EventScript_WallyEvent_12
# 141 "data/maps/Route114/scripts.pory"
	case 3, Route114_EventScript_WallyEvent_13
# 143 "data/maps/Route114/scripts.pory"
	case 4, Route114_EventScript_WallyEvent_14
# 145 "data/maps/Route114/scripts.pory"
	case 5, Route114_EventScript_WallyEvent_15
# 147 "data/maps/Route114/scripts.pory"
	case 6, Route114_EventScript_WallyEvent_16
# 149 "data/maps/Route114/scripts.pory"
	case 7, Route114_EventScript_WallyEvent_17
# 151 "data/maps/Route114/scripts.pory"
	case 8, Route114_EventScript_WallyEvent_18
# 153 "data/maps/Route114/scripts.pory"
	case 9, Route114_EventScript_WallyEvent_19
# 155 "data/maps/Route114/scripts.pory"
	case 10, Route114_EventScript_WallyEvent_20
Route114_EventScript_WallyEvent_9:
# 158 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 159 "data/maps/Route114/scripts.pory"
	applymovement 28, Common_Movement_FaceRight
# 160 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 161 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_SomeoneRidingThisWay, MSGBOX_AUTOCLOSE
# 162 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 163 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 164 "data/maps/Route114/scripts.pory"
	addobject 29
# 165 "data/maps/Route114/scripts.pory"
	playse SE_BIKE_BELL
# 166 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WatchRivalBike
# 167 "data/maps/Route114/scripts.pory"
	applymovement 28, Route114_Movement_WatchRivalBike
# 168 "data/maps/Route114/scripts.pory"
	applymovement 29, Route114_Movement_Rival1BikesAround
# 169 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 170 "data/maps/Route114/scripts.pory"
	delay 20
# 171 "data/maps/Route114/scripts.pory"
	removeobject 29
# 172 "data/maps/Route114/scripts.pory"
	addobject 30
# 173 "data/maps/Route114/scripts.pory"
	rival1talk Route114_Text_SpencerLetsBattle, Route114_Text_BrenLetsBattle, Route114_Text_KyleLetsBattle
# 176 "data/maps/Route114/scripts.pory"
	closemessage
# 177 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 178 "data/maps/Route114/scripts.pory"
	applymovement 28, Common_Movement_BeginTalkRight
# 179 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 180 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_PleaseLetMeAssist, MSGBOX_AUTOCLOSE
# 181 "data/maps/Route114/scripts.pory"
	delay 10
# 182 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 183 "data/maps/Route114/scripts.pory"
	applymovement 28, Common_Movement_FaceDown
# 184 "data/maps/Route114/scripts.pory"
	applymovement 30, Common_Movement_BeginTalkUp
# 185 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 186 "data/maps/Route114/scripts.pory"
	rival1talk Route114_Text_SpencerPickYourPokemon, Route114_Text_BrenPickYourPokemon, Route114_Text_KylePickYourPokemon
# 189 "data/maps/Route114/scripts.pory"
	closemessage
# 190 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_PrepareForRival1Battle
	end

Route114_EventScript_WallyEvent_2:
# 124 "data/maps/Route114/scripts.pory"
	applymovement 28, Common_Movement_FaceUp
	goto Route114_EventScript_WallyEvent_1

Route114_EventScript_WallyEvent_3:
# 127 "data/maps/Route114/scripts.pory"
	applymovement 28, Common_Movement_FaceRight
	goto Route114_EventScript_WallyEvent_1

Route114_EventScript_WallyEvent_5:
# 126 "data/maps/Route114/scripts.pory"
	compare VAR_0x8008, 9
	goto_if_lt Route114_EventScript_WallyEvent_3
	goto Route114_EventScript_WallyEvent_4

Route114_EventScript_WallyEvent_11:
# 138 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally1
	goto Route114_EventScript_WallyEvent_9

Route114_EventScript_WallyEvent_12:
# 140 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally2
	goto Route114_EventScript_WallyEvent_9

Route114_EventScript_WallyEvent_13:
# 142 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally3
	goto Route114_EventScript_WallyEvent_9

Route114_EventScript_WallyEvent_14:
# 144 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally4
	goto Route114_EventScript_WallyEvent_9

Route114_EventScript_WallyEvent_15:
# 146 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally5
	goto Route114_EventScript_WallyEvent_9

Route114_EventScript_WallyEvent_16:
# 148 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally6
	goto Route114_EventScript_WallyEvent_9

Route114_EventScript_WallyEvent_17:
# 150 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally7
	goto Route114_EventScript_WallyEvent_9

Route114_EventScript_WallyEvent_18:
# 152 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally8
	goto Route114_EventScript_WallyEvent_9

Route114_EventScript_WallyEvent_19:
# 154 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally9
	goto Route114_EventScript_WallyEvent_9

Route114_EventScript_WallyEvent_20:
# 156 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WalkToWally10
	goto Route114_EventScript_WallyEvent_9


Route114_EventScript_PrepareForRival1Battle::
# 195 "data/maps/Route114/scripts.pory"
	special SavePlayerParty
# 196 "data/maps/Route114/scripts.pory"
	fadescreen FADE_TO_BLACK
# 197 "data/maps/Route114/scripts.pory"
	special ChooseHalfPartyForBattle
# 198 "data/maps/Route114/scripts.pory"
	waitstate
# 199 "data/maps/Route114/scripts.pory"
	goto_if_ne VAR_RESULT, 0, Route114_EventScript_BeginRival1Battle
# 200 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_QuitPartySelect
	end


Route114_EventScript_QuitPartySelect::
# 205 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_CantBackOut
# 206 "data/maps/Route114/scripts.pory"
	closemessage
# 207 "data/maps/Route114/scripts.pory"
	special SavePlayerParty
# 208 "data/maps/Route114/scripts.pory"
	fadescreen FADE_TO_BLACK
# 209 "data/maps/Route114/scripts.pory"
	special ChooseHalfPartyForBattle
# 210 "data/maps/Route114/scripts.pory"
	waitstate
# 211 "data/maps/Route114/scripts.pory"
	goto_if_ne VAR_RESULT, 0, Route114_EventScript_BeginRival1Battle
# 212 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_QuitPartySelect
	end


Route114_EventScript_BeginRival1Battle::
# 217 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_BeginRival1Battle_Text_0, MSGBOX_DEFAULT
# 218 "data/maps/Route114/scripts.pory"
	closemessage
# 219 "data/maps/Route114/scripts.pory"
	checkfriendchoice
# 220 "data/maps/Route114/scripts.pory"
	switch VAR_RESULT
# 221 "data/maps/Route114/scripts.pory"
	case SPENCER, Route114_EventScript_BeginRival1Battle_3
# 223 "data/maps/Route114/scripts.pory"
	case BREN, Route114_EventScript_BeginRival1Battle_4
# 225 "data/maps/Route114/scripts.pory"
	case KYLE, Route114_EventScript_BeginRival1Battle_5
Route114_EventScript_BeginRival1Battle_1:
# 228 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WallyPostBattle
	return

Route114_EventScript_BeginRival1Battle_3:
# 222 "data/maps/Route114/scripts.pory"
	multi_2_vs_1 TRAINER_BREN_NEAR_FALLARBOR, Route114_Text_BrenDefeated, PARTNER_WALLY_ROUTE_114
	goto Route114_EventScript_BeginRival1Battle_1

Route114_EventScript_BeginRival1Battle_4:
# 224 "data/maps/Route114/scripts.pory"
	multi_2_vs_1 TRAINER_KYLE_NEAR_FALLARBOR, Route114_Text_KyleDefeated, PARTNER_WALLY_ROUTE_114
	goto Route114_EventScript_BeginRival1Battle_1

Route114_EventScript_BeginRival1Battle_5:
# 226 "data/maps/Route114/scripts.pory"
	multi_2_vs_1 TRAINER_SPENCER_NEAR_FALLARBOR, Route114_Text_SpencerDefeated, PARTNER_WALLY_ROUTE_114
	goto Route114_EventScript_BeginRival1Battle_1


Route114_EventScript_WallyPostBattle::
# 232 "data/maps/Route114/scripts.pory"
	applymovement 30, Common_Movement_BeginTalkUp
# 233 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 234 "data/maps/Route114/scripts.pory"
	rival1talk Route114_Text_SpencerPostBattle, Route114_Text_BrenPostBattle, Route114_Text_KylePostBattle
# 237 "data/maps/Route114/scripts.pory"
	closemessage
# 238 "data/maps/Route114/scripts.pory"
	setobjectxyperm 29, 31, 11
# 239 "data/maps/Route114/scripts.pory"
	playse SE_BIKE_BELL
# 240 "data/maps/Route114/scripts.pory"
	removeobject 30
# 241 "data/maps/Route114/scripts.pory"
	addobject 29
# 242 "data/maps/Route114/scripts.pory"
	addobject 31
# 243 "data/maps/Route114/scripts.pory"
	delay 30
# 244 "data/maps/Route114/scripts.pory"
	applymovement 31, Route114_Movement_Rival2GoesToFossilHouse
# 245 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WatchRival1Leave
# 246 "data/maps/Route114/scripts.pory"
	applymovement 28, Route114_Movement_WatchRival1Leave
# 247 "data/maps/Route114/scripts.pory"
	applymovement 29, Route114_Movement_Rival1BikesAway
# 248 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 249 "data/maps/Route114/scripts.pory"
	removeobject 29
# 250 "data/maps/Route114/scripts.pory"
	opendoor 29, 5
# 251 "data/maps/Route114/scripts.pory"
	waitdooranim
# 252 "data/maps/Route114/scripts.pory"
	applymovement 31, Common_Movement_Walk_Up
# 253 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 254 "data/maps/Route114/scripts.pory"
	removeobject 31
# 255 "data/maps/Route114/scripts.pory"
	closedoor 29, 5
# 256 "data/maps/Route114/scripts.pory"
	waitdooranim
# 257 "data/maps/Route114/scripts.pory"
	delay 16
# 258 "data/maps/Route114/scripts.pory"
	applymovement 28, Common_Movement_WalkInPlaceFasterRight
# 259 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 260 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_UntilWeMeetAgain, MSGBOX_AUTOCLOSE
# 261 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route114_Movement_WatchWallyLeave
# 262 "data/maps/Route114/scripts.pory"
	applymovement 28, Route114_Movement_WallyLeave
# 263 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 264 "data/maps/Route114/scripts.pory"
	removeobject 28
# 265 "data/maps/Route114/scripts.pory"
	setvar VAR_METEOR_FALLS_STATE, 1
# 266 "data/maps/Route114/scripts.pory"
	setvar VAR_BURIED_RIVAL2, 1
# 267 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8008, 0
# 268 "data/maps/Route114/scripts.pory"
	setflag FLAG_HIDE_ROUTE_113_RIVAL1
# 269 "data/maps/Route114/scripts.pory"
	setflag FLAG_HIDE_ROUTE_113_RIVAL2
# 270 "data/maps/Route114/scripts.pory"
	setflag FLAG_HIDE_ROUTE_113_LAO_ON_SIDE
# 271 "data/maps/Route114/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_113_LAO
# 272 "data/maps/Route114/scripts.pory"
	release
	end


# 276 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally1:
# 277 "data/maps/Route114/scripts.pory"
	walk_down
# 277 "data/maps/Route114/scripts.pory"
	walk_down
# 277 "data/maps/Route114/scripts.pory"
	walk_down
# 277 "data/maps/Route114/scripts.pory"
	walk_down
# 277 "data/maps/Route114/scripts.pory"
	walk_down
# 278 "data/maps/Route114/scripts.pory"
	walk_left
	step_end

# 281 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally2:
# 282 "data/maps/Route114/scripts.pory"
	walk_down
# 282 "data/maps/Route114/scripts.pory"
	walk_down
# 282 "data/maps/Route114/scripts.pory"
	walk_down
# 282 "data/maps/Route114/scripts.pory"
	walk_down
# 283 "data/maps/Route114/scripts.pory"
	walk_left
	step_end

# 286 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally3:
# 287 "data/maps/Route114/scripts.pory"
	walk_down
# 287 "data/maps/Route114/scripts.pory"
	walk_down
# 287 "data/maps/Route114/scripts.pory"
	walk_down
# 288 "data/maps/Route114/scripts.pory"
	walk_left
	step_end

# 291 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally4:
# 292 "data/maps/Route114/scripts.pory"
	walk_down
# 292 "data/maps/Route114/scripts.pory"
	walk_down
# 293 "data/maps/Route114/scripts.pory"
	walk_left
# 293 "data/maps/Route114/scripts.pory"
	walk_left
	step_end

# 296 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally5:
# 297 "data/maps/Route114/scripts.pory"
	walk_left
# 297 "data/maps/Route114/scripts.pory"
	walk_left
# 298 "data/maps/Route114/scripts.pory"
	walk_down
# 299 "data/maps/Route114/scripts.pory"
	walk_left
	step_end

# 302 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally6:
# 303 "data/maps/Route114/scripts.pory"
	walk_left
# 303 "data/maps/Route114/scripts.pory"
	walk_left
# 303 "data/maps/Route114/scripts.pory"
	walk_left
	step_end

# 306 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally7:
# 307 "data/maps/Route114/scripts.pory"
	walk_left
# 307 "data/maps/Route114/scripts.pory"
	walk_left
# 308 "data/maps/Route114/scripts.pory"
	walk_up
# 309 "data/maps/Route114/scripts.pory"
	walk_left
	step_end

# 312 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally8:
# 313 "data/maps/Route114/scripts.pory"
	walk_up
# 313 "data/maps/Route114/scripts.pory"
	walk_up
# 314 "data/maps/Route114/scripts.pory"
	walk_left
# 314 "data/maps/Route114/scripts.pory"
	walk_left
	step_end

# 317 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally9:
# 318 "data/maps/Route114/scripts.pory"
	walk_up
# 318 "data/maps/Route114/scripts.pory"
	walk_up
# 318 "data/maps/Route114/scripts.pory"
	walk_up
# 319 "data/maps/Route114/scripts.pory"
	walk_left
	step_end

# 322 "data/maps/Route114/scripts.pory"
Route114_Movement_WalkToWally10:
# 323 "data/maps/Route114/scripts.pory"
	walk_up
# 323 "data/maps/Route114/scripts.pory"
	walk_up
# 323 "data/maps/Route114/scripts.pory"
	walk_up
# 324 "data/maps/Route114/scripts.pory"
	walk_in_place_left
	step_end

# 327 "data/maps/Route114/scripts.pory"
Route114_Movement_Rival1BikesAround:
# 328 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 328 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 328 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 328 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 328 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 328 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 328 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 328 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 328 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 328 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 328 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 329 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 329 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 329 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 329 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 330 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 330 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 330 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 330 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 330 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 331 "data/maps/Route114/scripts.pory"
	walk_fast_up
# 331 "data/maps/Route114/scripts.pory"
	walk_fast_up
# 331 "data/maps/Route114/scripts.pory"
	walk_fast_up
# 331 "data/maps/Route114/scripts.pory"
	walk_fast_up
# 332 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 332 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 332 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 332 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 332 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 333 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 333 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 333 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 333 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 334 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 334 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 334 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 335 "data/maps/Route114/scripts.pory"
	walk_fast_up
# 336 "data/maps/Route114/scripts.pory"
	delay_16
	step_end

# 339 "data/maps/Route114/scripts.pory"
Route114_Movement_WatchRivalBike:
# 340 "data/maps/Route114/scripts.pory"
	delay_8
# 340 "data/maps/Route114/scripts.pory"
	delay_8
# 340 "data/maps/Route114/scripts.pory"
	delay_8
# 340 "data/maps/Route114/scripts.pory"
	delay_8
# 340 "data/maps/Route114/scripts.pory"
	delay_8
# 340 "data/maps/Route114/scripts.pory"
	delay_8
# 340 "data/maps/Route114/scripts.pory"
	delay_8
# 341 "data/maps/Route114/scripts.pory"
	face_up
# 342 "data/maps/Route114/scripts.pory"
	delay_8
# 342 "data/maps/Route114/scripts.pory"
	delay_8
# 342 "data/maps/Route114/scripts.pory"
	delay_8
# 342 "data/maps/Route114/scripts.pory"
	delay_8
# 343 "data/maps/Route114/scripts.pory"
	face_left
# 344 "data/maps/Route114/scripts.pory"
	delay_8
# 344 "data/maps/Route114/scripts.pory"
	delay_8
# 344 "data/maps/Route114/scripts.pory"
	delay_8
# 344 "data/maps/Route114/scripts.pory"
	delay_8
# 345 "data/maps/Route114/scripts.pory"
	face_down
# 346 "data/maps/Route114/scripts.pory"
	delay_8
# 346 "data/maps/Route114/scripts.pory"
	delay_8
# 346 "data/maps/Route114/scripts.pory"
	delay_8
# 346 "data/maps/Route114/scripts.pory"
	delay_8
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
# 352 "data/maps/Route114/scripts.pory"
	delay_8
# 352 "data/maps/Route114/scripts.pory"
	delay_8
# 352 "data/maps/Route114/scripts.pory"
	delay_8
# 352 "data/maps/Route114/scripts.pory"
	delay_8
# 353 "data/maps/Route114/scripts.pory"
	face_down
	step_end

# 356 "data/maps/Route114/scripts.pory"
Route114_Movement_Rival1BikesAway:
# 357 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 357 "data/maps/Route114/scripts.pory"
	walk_fast_right
# 358 "data/maps/Route114/scripts.pory"
	walk_fast_up
# 358 "data/maps/Route114/scripts.pory"
	walk_fast_up
# 358 "data/maps/Route114/scripts.pory"
	walk_fast_up
# 359 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 359 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 359 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 359 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 359 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 360 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 360 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 360 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 360 "data/maps/Route114/scripts.pory"
	walk_fast_down
# 361 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 361 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 361 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 361 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 361 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 361 "data/maps/Route114/scripts.pory"
	walk_fast_left
# 361 "data/maps/Route114/scripts.pory"
	walk_fast_left
	step_end

# 364 "data/maps/Route114/scripts.pory"
Route114_Movement_WatchRival1Leave:
# 365 "data/maps/Route114/scripts.pory"
	delay_8
# 366 "data/maps/Route114/scripts.pory"
	face_right
# 367 "data/maps/Route114/scripts.pory"
	delay_8
# 367 "data/maps/Route114/scripts.pory"
	delay_8
# 367 "data/maps/Route114/scripts.pory"
	delay_8
# 367 "data/maps/Route114/scripts.pory"
	delay_8
# 368 "data/maps/Route114/scripts.pory"
	face_up
# 369 "data/maps/Route114/scripts.pory"
	delay_8
# 369 "data/maps/Route114/scripts.pory"
	delay_8
# 369 "data/maps/Route114/scripts.pory"
	delay_8
# 369 "data/maps/Route114/scripts.pory"
	delay_8
# 369 "data/maps/Route114/scripts.pory"
	delay_8
# 370 "data/maps/Route114/scripts.pory"
	face_left
	step_end

# 373 "data/maps/Route114/scripts.pory"
Route114_Movement_Rival2GoesToFossilHouse:
# 374 "data/maps/Route114/scripts.pory"
	walk_left
# 374 "data/maps/Route114/scripts.pory"
	walk_left
# 374 "data/maps/Route114/scripts.pory"
	walk_left
# 374 "data/maps/Route114/scripts.pory"
	walk_left
# 374 "data/maps/Route114/scripts.pory"
	walk_left
# 374 "data/maps/Route114/scripts.pory"
	walk_left
# 374 "data/maps/Route114/scripts.pory"
	walk_left
# 374 "data/maps/Route114/scripts.pory"
	walk_left
# 374 "data/maps/Route114/scripts.pory"
	walk_left
# 374 "data/maps/Route114/scripts.pory"
	walk_left
# 375 "data/maps/Route114/scripts.pory"
	face_up
	step_end

# 378 "data/maps/Route114/scripts.pory"
Route114_Movement_WatchWallyLeave:
# 379 "data/maps/Route114/scripts.pory"
	delay_16
# 380 "data/maps/Route114/scripts.pory"
	face_up
# 381 "data/maps/Route114/scripts.pory"
	delay_16
# 381 "data/maps/Route114/scripts.pory"
	delay_16
# 382 "data/maps/Route114/scripts.pory"
	face_right
	step_end

# 385 "data/maps/Route114/scripts.pory"
Route114_Movement_WallyLeave:
# 386 "data/maps/Route114/scripts.pory"
	walk_up
# 387 "data/maps/Route114/scripts.pory"
	walk_right
# 387 "data/maps/Route114/scripts.pory"
	walk_right
# 387 "data/maps/Route114/scripts.pory"
	walk_right
# 387 "data/maps/Route114/scripts.pory"
	walk_right
# 387 "data/maps/Route114/scripts.pory"
	walk_right
# 387 "data/maps/Route114/scripts.pory"
	walk_right
# 387 "data/maps/Route114/scripts.pory"
	walk_right
# 387 "data/maps/Route114/scripts.pory"
	walk_right
# 387 "data/maps/Route114/scripts.pory"
	walk_right
	step_end

# 501 "data/maps/Route114/scripts.pory"

# 502 "data/maps/Route114/scripts.pory"
Route114_EventScript_Man::
# 503 "data/maps/Route114/scripts.pory"
	lock
# 504 "data/maps/Route114/scripts.pory"
	faceplayer
# 505 "data/maps/Route114/scripts.pory"
	dotimebasedevents
# 506 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_114_RECEIVED_BERRY, Route114_EventScript_ReceivedBerry
# 507 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LoveUsingBerryCrushShareBerry, MSGBOX_DEFAULT
# 508 "data/maps/Route114/scripts.pory"
	random NUM_ROUTE_114_MAN_BERRIES
# 509 "data/maps/Route114/scripts.pory"
	addvar VAR_RESULT, NUM_ROUTE_114_MAN_BERRIES_SKIPPED
# 510 "data/maps/Route114/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 511 "data/maps/Route114/scripts.pory"
	giveitem VAR_RESULT
# 512 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 513 "data/maps/Route114/scripts.pory"
	setflag FLAG_DAILY_ROUTE_114_RECEIVED_BERRY
# 514 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TryBerryCrushWithFriends, MSGBOX_DEFAULT
# 515 "data/maps/Route114/scripts.pory"
	release
# 516 "data/maps/Route114/scripts.pory"
	end
# 517 "data/maps/Route114/scripts.pory"

# 518 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedBerry::
# 519 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FunToThinkAboutBerries, MSGBOX_DEFAULT
# 520 "data/maps/Route114/scripts.pory"
	release
# 521 "data/maps/Route114/scripts.pory"
	end
# 522 "data/maps/Route114/scripts.pory"

# 523 "data/maps/Route114/scripts.pory"
Route114_EventScript_RoarGentleman::
# 524 "data/maps/Route114/scripts.pory"
	lock
# 525 "data/maps/Route114/scripts.pory"
	faceplayer
# 526 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ROAR, Route114_EventScript_ReceivedRoar
# 527 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AllMyMonDoesIsRoarTakeThis, MSGBOX_DEFAULT
# 528 "data/maps/Route114/scripts.pory"
	giveitem ITEM_TM_ROAR
# 529 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 530 "data/maps/Route114/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROAR
# 531 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 532 "data/maps/Route114/scripts.pory"
	release
# 533 "data/maps/Route114/scripts.pory"
	end
# 534 "data/maps/Route114/scripts.pory"

# 535 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedRoar::
# 536 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 537 "data/maps/Route114/scripts.pory"
	release
# 538 "data/maps/Route114/scripts.pory"
	end
# 539 "data/maps/Route114/scripts.pory"

# 540 "data/maps/Route114/scripts.pory"
Route114_EventScript_Poochyena::
# 541 "data/maps/Route114/scripts.pory"
	lock
# 542 "data/maps/Route114/scripts.pory"
	faceplayer
# 543 "data/maps/Route114/scripts.pory"
	waitse
# 544 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_ENCOUNTER
# 545 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Poochyena, MSGBOX_DEFAULT
# 546 "data/maps/Route114/scripts.pory"
	waitmoncry
# 547 "data/maps/Route114/scripts.pory"
	release
# 548 "data/maps/Route114/scripts.pory"
	end
# 549 "data/maps/Route114/scripts.pory"

# 550 "data/maps/Route114/scripts.pory"
Route114_EventScript_MeteorFallsSign::
# 551 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_MeteorFallsSign, MSGBOX_SIGN
# 552 "data/maps/Route114/scripts.pory"
	end
# 553 "data/maps/Route114/scripts.pory"

# 554 "data/maps/Route114/scripts.pory"
Route114_EventScript_FossilManiacsHouseSign::
# 555 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FossilManiacsHouseSign, MSGBOX_SIGN
# 556 "data/maps/Route114/scripts.pory"
	end
# 557 "data/maps/Route114/scripts.pory"

# 558 "data/maps/Route114/scripts.pory"
Route114_EventScript_LanettesHouseSign::
# 559 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LanettesHouse, MSGBOX_SIGN
# 560 "data/maps/Route114/scripts.pory"
	end
# 561 "data/maps/Route114/scripts.pory"

# 562 "data/maps/Route114/scripts.pory"
Route114_EventScript_Lenny::
# 563 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_LENNY, Route114_Text_LennyIntro, Route114_Text_LennyDefeat
# 564 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LennyPostBattle, MSGBOX_AUTOCLOSE
# 565 "data/maps/Route114/scripts.pory"
	end
# 566 "data/maps/Route114/scripts.pory"

# 567 "data/maps/Route114/scripts.pory"
Route114_EventScript_Lucas::
# 568 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_LUCAS_1, Route114_Text_LucasIntro, Route114_Text_LucasDefeat
# 569 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LucasPostBattle, MSGBOX_AUTOCLOSE
# 570 "data/maps/Route114/scripts.pory"
	end
# 571 "data/maps/Route114/scripts.pory"

# 572 "data/maps/Route114/scripts.pory"
Route114_EventScript_Shane::
# 573 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_SHANE, Route114_Text_ShaneIntro, Route114_Text_ShaneDefeat
# 574 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ShanePostBattle, MSGBOX_AUTOCLOSE
# 575 "data/maps/Route114/scripts.pory"
	end
# 576 "data/maps/Route114/scripts.pory"

# 577 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nancy::
# 578 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NANCY, Route114_Text_NancyIntro, Route114_Text_NancyDefeat
# 579 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NancyPostBattle, MSGBOX_AUTOCLOSE
# 580 "data/maps/Route114/scripts.pory"
	end
# 581 "data/maps/Route114/scripts.pory"

# 582 "data/maps/Route114/scripts.pory"
Route114_EventScript_Steve::
# 583 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_STEVE_1, Route114_Text_SteveIntro, Route114_Text_SteveDefeat, Route114_EventScript_RegisterSteve
# 584 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 585 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_EventScript_RematchSteve
# 586 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostBattle, MSGBOX_DEFAULT
# 587 "data/maps/Route114/scripts.pory"
	release
# 588 "data/maps/Route114/scripts.pory"
	end
# 589 "data/maps/Route114/scripts.pory"

# 590 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterSteve::
# 591 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 592 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 593 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_SteveRegister, MSGBOX_DEFAULT
# 594 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_STEVE_1
# 595 "data/maps/Route114/scripts.pory"
	release
# 596 "data/maps/Route114/scripts.pory"
	end
# 597 "data/maps/Route114/scripts.pory"

# 598 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchSteve::
# 599 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_STEVE_1, Route114_Text_SteveRematchIntro, Route114_Text_SteveRematchDefeat
# 600 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostRematch, MSGBOX_AUTOCLOSE
# 601 "data/maps/Route114/scripts.pory"
	end
# 602 "data/maps/Route114/scripts.pory"

# 603 "data/maps/Route114/scripts.pory"
Route114_EventScript_Bernie::
# 604 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_BERNIE_1, Route114_Text_BernieIntro, Route114_Text_BernieDefeat, Route114_EventScript_RegisterBernie
# 605 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 606 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_EventScript_RematchBernie
# 607 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostBattle, MSGBOX_DEFAULT
# 608 "data/maps/Route114/scripts.pory"
	release
# 609 "data/maps/Route114/scripts.pory"
	end
# 610 "data/maps/Route114/scripts.pory"

# 611 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterBernie::
# 612 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 613 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 614 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BernieRegister, MSGBOX_DEFAULT
# 615 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_BERNIE_1
# 616 "data/maps/Route114/scripts.pory"
	release
# 617 "data/maps/Route114/scripts.pory"
	end
# 618 "data/maps/Route114/scripts.pory"

# 619 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchBernie::
# 620 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_BERNIE_1, Route114_Text_BernieRematchIntro, Route114_Text_BernieRematchDefeat
# 621 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostRematch, MSGBOX_AUTOCLOSE
# 622 "data/maps/Route114/scripts.pory"
	end
# 623 "data/maps/Route114/scripts.pory"

# 624 "data/maps/Route114/scripts.pory"
Route114_EventScript_Claude::
# 625 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_CLAUDE, Route114_Text_ClaudeIntro, Route114_Text_ClaudeDefeat
# 626 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ClaudePostBattle, MSGBOX_AUTOCLOSE
# 627 "data/maps/Route114/scripts.pory"
	end
# 628 "data/maps/Route114/scripts.pory"

# 629 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nolan::
# 630 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NOLAN, Route114_Text_NolanIntro, Route114_Text_NolanDefeat
# 631 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NolanPostBattle, MSGBOX_AUTOCLOSE
# 632 "data/maps/Route114/scripts.pory"
	end
# 633 "data/maps/Route114/scripts.pory"

# 634 "data/maps/Route114/scripts.pory"
Route114_EventScript_Tyra::
# 635 "data/maps/Route114/scripts.pory"
	trainerbattle_double TRAINER_TYRA_AND_IVY, Route114_Text_TyraIntro, Route114_Text_TyraDefeat, Route114_Text_TyraNotEnoughMons
# 636 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TyraPostBattle, MSGBOX_AUTOCLOSE
# 637 "data/maps/Route114/scripts.pory"
	end
# 638 "data/maps/Route114/scripts.pory"

# 639 "data/maps/Route114/scripts.pory"
Route114_EventScript_Ivy::
# 640 "data/maps/Route114/scripts.pory"
	trainerbattle_double TRAINER_TYRA_AND_IVY, Route114_Text_IvyIntro, Route114_Text_IvyDefeat, Route114_Text_IvyNotEnoughMons
# 641 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_IvyPostBattle, MSGBOX_AUTOCLOSE
# 642 "data/maps/Route114/scripts.pory"
	end
# 643 "data/maps/Route114/scripts.pory"

# 644 "data/maps/Route114/scripts.pory"
Route114_EventScript_Angelina::
# 645 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_ANGELINA, Route114_Text_AngelinaIntro, Route114_Text_AngelinaDefeat
# 646 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AngelinaPostBattle, MSGBOX_AUTOCLOSE
# 647 "data/maps/Route114/scripts.pory"
	end
# 648 "data/maps/Route114/scripts.pory"

# 649 "data/maps/Route114/scripts.pory"
Route114_EventScript_Charlotte::
# 650 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_CHARLOTTE, Route114_Text_CharlotteIntro, Route114_Text_CharlotteDefeat
# 651 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_CharlottePostBattle, MSGBOX_AUTOCLOSE
# 652 "data/maps/Route114/scripts.pory"
	end
# 653 "data/maps/Route114/scripts.pory"

# 654 "data/maps/Route114/scripts.pory"
Route114_EventScript_Kai::
# 655 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_KAI, Route114_Text_KaiIntro, Route114_Text_KaiDefeat
# 656 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_KaiPostBattle, MSGBOX_AUTOCLOSE
# 657 "data/maps/Route114/scripts.pory"
	end
# 658 "data/maps/Route114/scripts.pory"

# 659 "data/maps/Route114/scripts.pory"
Route114_Text_AllMyMonDoesIsRoarTakeThis:
# 660 "data/maps/Route114/scripts.pory"
	.string "All my POKéMON does is ROAR…\n"
# 661 "data/maps/Route114/scripts.pory"
	.string "No one dares to come near me…\p"
# 662 "data/maps/Route114/scripts.pory"
	.string "Sigh… If you would, please take\n"
# 663 "data/maps/Route114/scripts.pory"
	.string "this TM away…$"
# 664 "data/maps/Route114/scripts.pory"

# 665 "data/maps/Route114/scripts.pory"
Route114_Text_ExplainRoar:
# 666 "data/maps/Route114/scripts.pory"
	.string "TM05 contains ROAR.\n"
# 667 "data/maps/Route114/scripts.pory"
	.string "A ROAR sends POKéMON scurrying.$"
# 668 "data/maps/Route114/scripts.pory"

# 669 "data/maps/Route114/scripts.pory"
Route114_Text_Poochyena:
# 670 "data/maps/Route114/scripts.pory"
	.string "Bow! Bowwow!$"
# 671 "data/maps/Route114/scripts.pory"

# 672 "data/maps/Route114/scripts.pory"
Route114_Text_MeteorFallsSign:
# 673 "data/maps/Route114/scripts.pory"
	.string "METEOR FALLS\n"
# 674 "data/maps/Route114/scripts.pory"
	.string "RUSTBORO CITY THROUGH HERE$"
# 675 "data/maps/Route114/scripts.pory"

# 676 "data/maps/Route114/scripts.pory"
Route114_Text_FossilManiacsHouseSign:
# 677 "data/maps/Route114/scripts.pory"
	.string "FOSSIL MANIAC'S HOUSE\n"
# 678 "data/maps/Route114/scripts.pory"
	.string "“Fossils gratefully accepted!”$"
# 679 "data/maps/Route114/scripts.pory"

# 680 "data/maps/Route114/scripts.pory"
Route114_Text_LanettesHouse:
# 681 "data/maps/Route114/scripts.pory"
	.string "LANETTE'S HOUSE$"

Route114_EventScript_BeginRival1Battle_Text_0:
# 217 "data/maps/Route114/scripts.pory"
	.string "Don't hold back!$"

Route114_Text_OhHey::
# 390 "data/maps/Route114/scripts.pory"
	.string "Oh, hey {PLAYER}!$"

Route114_Text_SomeoneRidingThisWay::
# 394 "data/maps/Route114/scripts.pory"
	.string "WALLY: I didn't think I'd run into you so\n"
	.string "soon.\p"
	.string "Don't worry. I'm not here to battle you.\p"
	.string "RALTS and I came out here to train.\n"
	.string "It's been going pretty well!\p"
	.string "Oh!\n"
	.string "I think I see someone riding their bike\l"
	.string "this way!$"

Route114_Text_UntilWeMeetAgain::
# 403 "data/maps/Route114/scripts.pory"
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
# 414 "data/maps/Route114/scripts.pory"
	.string "SPENCER: I got a new POKéMON and I'm\n"
	.string "raring to try it out.\p"
	.string "C'mon!\n"
	.string "Let's have a battle!\n"
	.string "Give me all you got!$"

Route114_Text_BrenLetsBattle::
# 421 "data/maps/Route114/scripts.pory"
	.string "BREN: I got a new POKéMON and I'm raring\n"
	.string "to try it out.\p"
	.string "C'mon!\n"
	.string "Let's have a battle!\n"
	.string "Give me all you got!$"

Route114_Text_KyleLetsBattle::
# 428 "data/maps/Route114/scripts.pory"
	.string "KYLE: I got a new POKéMON and I'm raring\n"
	.string "to try it out.\p"
	.string "C'mon!\n"
	.string "Let's have a battle!\n"
	.string "Give me all you got!$"

Route114_Text_PleaseLetMeAssist::
# 435 "data/maps/Route114/scripts.pory"
	.string "WALLY: {PLAYER}, you've been a help\n"
	.string "to me so many times now.\l"
	.string "I want to assist you for once.\p"
	.string "Please let me battle alongside you!$"

Route114_Text_SpencerPickYourPokemon::
# 441 "data/maps/Route114/scripts.pory"
	.string "SPENCER: That's fine by me!\n"
	.string "I'm feeling so good right now, I can\l"
	.string "probably beat you both easily!\p"
	.string "Pick your POKéMON and prepare for\n"
	.string "defeat!$"

Route114_Text_BrenPickYourPokemon::
# 447 "data/maps/Route114/scripts.pory"
	.string "BREN: That's fine by me!\n"
	.string "I'm feeling so good right now, I can\l"
	.string "probably beat you both easily!\p"
	.string "Pick your POKéMON and prepare for\n"
	.string "defeat!$"

Route114_Text_KylePickYourPokemon::
# 453 "data/maps/Route114/scripts.pory"
	.string "KYLE: That's fine by me!\n"
	.string "I'm feeling so good right now, I can\l"
	.string "probably beat you both easily!\p"
	.string "Pick your POKéMON and prepare for\n"
	.string "defeat!$"

Route114_Text_CantBackOut::
# 459 "data/maps/Route114/scripts.pory"
	.string "Come on!\n"
	.string "You can't back out of this one.\n"
	.string "I think I can win this time!$"

Route114_Text_SpencerDefeated::
# 465 "data/maps/Route114/scripts.pory"
	.string "I thought I had that one for sure!$"

Route114_Text_BrenDefeated::
# 469 "data/maps/Route114/scripts.pory"
	.string "I thought I had that one for sure!$"

Route114_Text_KyleDefeated::
# 473 "data/maps/Route114/scripts.pory"
	.string "I thought I had that one for sure!$"

Route114_Text_SpencerPostBattle::
# 477 "data/maps/Route114/scripts.pory"
	.string "SPENCER: That was some awesome\n"
	.string "teamwork, you two!\p"
	.string "With a little bit more training, I feel\n"
	.string "like I could've won.\p"
	.string "Maybe I need to add more POKéMON to my\n"
	.string "team…\p"
	.string "In any case, this was fun!\n"
	.string "Let's battle again soon!$"

Route114_Text_BrenPostBattle::
# 485 "data/maps/Route114/scripts.pory"
	.string "BREN: That was some awesome teamwork,\n"
	.string "you two!\p"
	.string "With a little bit more training, I feel\n"
	.string "like I could've won.\p"
	.string "Maybe I need to add more POKéMON to my\n"
	.string "team…\p"
	.string "In any case, this was fun!\n"
	.string "Let's battle again soon!$"

Route114_Text_KylePostBattle::
# 493 "data/maps/Route114/scripts.pory"
	.string "KYLE: That was some awesome teamwork,\n"
	.string "you two!\p"
	.string "With a little bit more training, I feel\n"
	.string "like I could've won.\p"
	.string "Maybe I need to add more POKéMON to my\n"
	.string "team…\p"
	.string "In any case, this was fun!\n"
	.string "Let's battle again soon!$"
