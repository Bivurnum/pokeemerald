# 6 "data/maps/Route104/scripts.pory"

# 7 "data/maps/Route104/scripts.pory"
@ NOTE: Route 104's sail to Dewford script references local IDs from Dewford's map.
# 8 "data/maps/Route104/scripts.pory"
@  These are labeled in DewfordTown/scripts.inc
# 9 "data/maps/Route104/scripts.pory"
.set LOCALID_BRINEY, 8
# 10 "data/maps/Route104/scripts.pory"
.set LOCALID_RIVAL1, 34
# 11 "data/maps/Route104/scripts.pory"
.set LOCALID_RIVAL2, 35
# 12 "data/maps/Route104/scripts.pory"
.set LOCALID_PEEKO, 36

Route104_MapScripts::
# 16 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 19 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route104_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 23 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route104_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 17 "data/maps/Route104/scripts.pory"
	call Route104_OnTransition
	return

Route104_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 20 "data/maps/Route104/scripts.pory"
	map_script_2 VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_StartSailToDewford
# 21 "data/maps/Route104/scripts.pory"
	map_script_2 VAR_BOARD_BRINEY_BOAT_STATE, 10, Route104_EventScript_StartSailToDewfordAfterWaitForRival
	.2byte 0

Route104_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 24 "data/maps/Route104/scripts.pory"
	map_script_2 VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
# 27 "data/maps/Route104/scripts.pory"
	map_script_2 VAR_BOARD_BRINEY_BOAT_STATE, 10, Route104_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_1
	.2byte 0

Route104_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 25 "data/maps/Route104/scripts.pory"
	hideobjectat 36, MAP_ROUTE104
	return

Route104_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_1:
# 28 "data/maps/Route104/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	return


Route104_EventScript_StartSailToDewford::
# 34 "data/maps/Route104/scripts.pory"
	lockall
# 35 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_SailToDewford
	return


Route104_OnTransition::
# 39 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_102_RIVAL1
# 40 "data/maps/Route104/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 41 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_TrySetRivalPos
# 42 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_ShowOrHideWhiteHerbFlorist
# 43 "data/maps/Route104/scripts.pory"
	compare VAR_BOARD_BRINEY_BOAT_STATE, 10
	goto_if_eq Route104_OnTransition_2
Route104_OnTransition_1:
	return

Route104_OnTransition_2:
# 44 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_RIVAL1
# 45 "data/maps/Route104/scripts.pory"
	setobjectxyperm 8, 16, 51
# 46 "data/maps/Route104/scripts.pory"
	setobjectxyperm 36, 17, 51
# 47 "data/maps/Route104/scripts.pory"
	setobjectxyperm 34, 18, 51
# 48 "data/maps/Route104/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_LEFT
# 49 "data/maps/Route104/scripts.pory"
	setobjectmovementtype 34, MOVEMENT_TYPE_FACE_LEFT
	goto Route104_OnTransition_1


# 54 "data/maps/Route104/scripts.pory"

# 55 "data/maps/Route104/scripts.pory"
Route104_EventScript_ShowOrHideWhiteHerbFlorist::
# 56 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_EventScript_HideWhiteHerbFlorist
# 57 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route104_EventScript_HideWhiteHerbFlorist
# 58 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 59 "data/maps/Route104/scripts.pory"
	return
# 60 "data/maps/Route104/scripts.pory"

# 61 "data/maps/Route104/scripts.pory"
Route104_EventScript_HideWhiteHerbFlorist::
# 62 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 63 "data/maps/Route104/scripts.pory"
	return
# 64 "data/maps/Route104/scripts.pory"

# 65 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrySetRivalPos::
# 66 "data/maps/Route104/scripts.pory"
	goto_if_ge VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_DontSetRivalPos
# 67 "data/maps/Route104/scripts.pory"
	goto_if_le VAR_RUSTBORO_CITY_STATE, 7, Route104_EventScript_DontSetRivalPos
# 68 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_RIVAL1, 17, 50
# 69 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_BRINEY, 17, 50
# 70 "data/maps/Route104/scripts.pory"
	turnobject LOCALID_BRINEY, DIR_SOUTH
# 71 "data/maps/Route104/scripts.pory"
	return
# 72 "data/maps/Route104/scripts.pory"

# 73 "data/maps/Route104/scripts.pory"
Route104_EventScript_DontSetRivalPos::
# 74 "data/maps/Route104/scripts.pory"
	return

Route104_EventScript_StartSailToDewfordAfterWaitForRival::
# 78 "data/maps/Route104/scripts.pory"
	lockall
# 79 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_LeaveWithoutRival2
	return


Route104_EventScript_Rival1::
# 83 "data/maps/Route104/scripts.pory"
	lockall
# 84 "data/maps/Route104/scripts.pory"
	applymovement 34, Common_Movement_FacePlayer
# 85 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 86 "data/maps/Route104/scripts.pory"
	compare VAR_RUSTURF_TUNNEL_STATE, 5
	goto_if_lt Route104_EventScript_Rival1_2
# 97 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_SeeWhatsTakingSoLong, MSGBOX_DEFAULT
# 98 "data/maps/Route104/scripts.pory"
	releaseall
	end

Route104_EventScript_Rival1_2:
# 87 "data/maps/Route104/scripts.pory"
	compare VAR_TEMP_5, 5
	goto_if_ne Route104_EventScript_Rival1_5
# 92 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WhatsAcrossTheSea, MSGBOX_DEFAULT
Route104_EventScript_Rival1_4:
# 94 "data/maps/Route104/scripts.pory"
	releaseall
	end

Route104_EventScript_Rival1_5:
# 88 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WhatsItLikeToSurf, MSGBOX_DEFAULT
# 89 "data/maps/Route104/scripts.pory"
	setvar VAR_TEMP_5, 5
	goto Route104_EventScript_Rival1_4


Route104_EventScript_RivalTrigger::
# 111 "data/maps/Route104/scripts.pory"
	lockall
# 112 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 113 "data/maps/Route104/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 114 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 115 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 116 "data/maps/Route104/scripts.pory"
	ballfollowingmon
# 117 "data/maps/Route104/scripts.pory"
	addobject 34
# 118 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerBackUp
# 119 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 120 "data/maps/Route104/scripts.pory"
	applymovement 34, Route104_Movement_RivalExitBrineysCottage
# 121 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 122 "data/maps/Route104/scripts.pory"
	delay 20
# 123 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 0
# 124 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 125 "data/maps/Route104/scripts.pory"
	playse SE_PIN
# 126 "data/maps/Route104/scripts.pory"
	applymovement 34, Common_Movement_ExclamationMark
# 127 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 128 "data/maps/Route104/scripts.pory"
	applymovement 34, Common_Movement_Delay48
# 129 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 130 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_Rival1Encounter
	return


# 133 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalWalkSlowLeft:
# 134 "data/maps/Route104/scripts.pory"
	walk_slow_left
	step_end

# 137 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalApproachPlayer:
# 138 "data/maps/Route104/scripts.pory"
	walk_down
# 139 "data/maps/Route104/scripts.pory"
	face_right
	step_end

# 142 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerFaceRival:
# 143 "data/maps/Route104/scripts.pory"
	delay_4
# 144 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
	step_end

Route104_EventScript_RestoreMusic::
# 148 "data/maps/Route104/scripts.pory"
	savebgm MUS_DUMMY
# 149 "data/maps/Route104/scripts.pory"
	fadedefaultbgm
	return


Route104_EventScript_Rival1Encounter::
# 154 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_OUTDOOR_DEWFORD_RIVALS
# 155 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrineyStillPreparing, MSGBOX_DEFAULT
# 156 "data/maps/Route104/scripts.pory"
	closemessage
# 157 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_RUSTURF_TUNNEL_STATE, 6, Route104_EventScript_BattleRival1
# 158 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_Rival1HowsYourPokedex
# 159 "data/maps/Route104/scripts.pory"
	waitmessage
# 160 "data/maps/Route104/scripts.pory"
	fadeoutbgm 1
# 161 "data/maps/Route104/scripts.pory"
	savebgm MUS_ROUTE104
# 162 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerWaitForRival2
# 163 "data/maps/Route104/scripts.pory"
	applymovement 34, Route104_Movement_WaitForRival2
# 164 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 165 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TakingALongTime, MSGBOX_DEFAULT
# 166 "data/maps/Route104/scripts.pory"
	closemessage
# 167 "data/maps/Route104/scripts.pory"
	delay 40
# 168 "data/maps/Route104/scripts.pory"
	playbgm MUS_ROUTE104, TRUE
# 169 "data/maps/Route104/scripts.pory"
	playse SE_PIN
# 170 "data/maps/Route104/scripts.pory"
	applymovement 34, Common_Movement_ExclamationMark
# 171 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 172 "data/maps/Route104/scripts.pory"
	applymovement 34, Common_Movement_FaceUp
# 173 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 174 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 175 "data/maps/Route104/scripts.pory"
	addobject 8
# 176 "data/maps/Route104/scripts.pory"
	applymovement 34, Route104_Movement_StepOutOfBrineysWay
# 177 "data/maps/Route104/scripts.pory"
	applymovement 8, Route104_Movement_StepOutOfCottage
# 178 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 179 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_AreYouReadyToGo, MSGBOX_DEFAULT
# 180 "data/maps/Route104/scripts.pory"
	closemessage
# 181 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_Player1ShallWeWait
# 182 "data/maps/Route104/scripts.pory"
	applymovement 34, Route104_Movement_Rival1ShallWeWait
# 183 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 184 "data/maps/Route104/scripts.pory"
	delay 10
# 185 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DoYouThinkWeShouldWait, MSGBOX_YESNO
# 186 "data/maps/Route104/scripts.pory"
	closemessage
# 187 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 188 "data/maps/Route104/scripts.pory"
	case NO, Route104_EventScript_Rival1Encounter_3
# 190 "data/maps/Route104/scripts.pory"
	case YES, Route104_EventScript_Rival1Encounter_4
Route104_EventScript_Rival1Encounter_1:
# 193 "data/maps/Route104/scripts.pory"
	releaseall
	end

Route104_EventScript_Rival1Encounter_3:
# 189 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_DontWaitForRival
	goto Route104_EventScript_Rival1Encounter_1

Route104_EventScript_Rival1Encounter_4:
# 191 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_WaitForRival
	goto Route104_EventScript_Rival1Encounter_1


Route104_EventScript_BattleRival1::
# 198 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_Rival1BattleIntro, MSGBOX_DEFAULT
# 199 "data/maps/Route104/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 7
# 200 "data/maps/Route104/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 201 "data/maps/Route104/scripts.pory"
	checkfriendchoice
# 202 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 203 "data/maps/Route104/scripts.pory"
	case SPENCER, Route104_EventScript_BattleRival1_3
# 205 "data/maps/Route104/scripts.pory"
	case BREN, Route104_EventScript_BattleRival1_4
# 207 "data/maps/Route104/scripts.pory"
	case KYLE, Route104_EventScript_BattleRival1_5
Route104_EventScript_BattleRival1_1:
	return

Route104_EventScript_BattleRival1_3:
# 204 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BREN_RUSTBORO, RustboroCity_Text_RivalEndBattleBren
	goto Route104_EventScript_BattleRival1_1

Route104_EventScript_BattleRival1_4:
# 206 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_KYLE_RUSTBORO, RustboroCity_Text_RivalEndBattleKyle
	goto Route104_EventScript_BattleRival1_1

Route104_EventScript_BattleRival1_5:
# 208 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_SPENCER_RUSTBORO, RustboroCity_Text_RivalEndBattleSpencer
	goto Route104_EventScript_BattleRival1_1


Route104_EventScript_WaitForRival::
# 214 "data/maps/Route104/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 9
# 215 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 216 "data/maps/Route104/scripts.pory"
	applymovement 34, Common_Movement_FaceUp
# 217 "data/maps/Route104/scripts.pory"
	applymovement 8, Common_Movement_BeginTalkDown
# 218 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 219 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LetMeKnowWhenReadyToSail, MSGBOX_DEFAULT
# 220 "data/maps/Route104/scripts.pory"
	closemessage
# 221 "data/maps/Route104/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterUp
# 222 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 223 "data/maps/Route104/scripts.pory"
	applymovement 8, Route104_Movement_EnterCottage
# 224 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 225 "data/maps/Route104/scripts.pory"
	removeobject 8
# 226 "data/maps/Route104/scripts.pory"
	delay 10
# 227 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 228 "data/maps/Route104/scripts.pory"
	applymovement 34, Common_Movement_WalkInPlaceFasterLeft
# 229 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 230 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_SeeWhatsTakingSoLong, MSGBOX_DEFAULT
# 231 "data/maps/Route104/scripts.pory"
	closemessage
# 232 "data/maps/Route104/scripts.pory"
	delay 5
# 233 "data/maps/Route104/scripts.pory"
	applymovement 34, Route104_Movement_GoWaitForOtherRival
# 234 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 235 "data/maps/Route104/scripts.pory"
	releaseall
	end


Route104_EventScript_GoFindRivalTrigger1::
# 240 "data/maps/Route104/scripts.pory"
	lock
# 241 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8006, 1
# 242 "data/maps/Route104/scripts.pory"
	addobject 35
# 243 "data/maps/Route104/scripts.pory"
	applymovement 35, Route104_Movement_Rival2WalksIn
# 244 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 245 "data/maps/Route104/scripts.pory"
	playse SE_PIN
# 246 "data/maps/Route104/scripts.pory"
	applymovement 35, Common_Movement_ExclamationMark
# 247 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 248 "data/maps/Route104/scripts.pory"
	delay 20
# 249 "data/maps/Route104/scripts.pory"
	ballfollowingmon
# 250 "data/maps/Route104/scripts.pory"
	applymovement 35, Route104_Movement_Rival2ApproachPlayer1
# 251 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 252 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_Rival2ShowsUp
	return


Route104_EventScript_GoFindRivalTrigger2::
# 256 "data/maps/Route104/scripts.pory"
	lock
# 257 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8006, 2
# 258 "data/maps/Route104/scripts.pory"
	setobjectxyperm 35, 23, 46
# 259 "data/maps/Route104/scripts.pory"
	addobject 35
# 260 "data/maps/Route104/scripts.pory"
	applymovement 35, Route104_Movement_Rival2WalksIn
# 261 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 262 "data/maps/Route104/scripts.pory"
	playse SE_PIN
# 263 "data/maps/Route104/scripts.pory"
	applymovement 35, Common_Movement_ExclamationMark
# 264 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 265 "data/maps/Route104/scripts.pory"
	delay 20
# 266 "data/maps/Route104/scripts.pory"
	ballfollowingmon
# 267 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerMoveForApproach2
# 268 "data/maps/Route104/scripts.pory"
	applymovement 35, Route104_Movement_Rival2ApproachPlayer2
# 269 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 270 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_Rival2ShowsUp
	return


Route104_EventScript_GoFindRivalTrigger3::
# 274 "data/maps/Route104/scripts.pory"
	lock
# 275 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8006, 3
# 276 "data/maps/Route104/scripts.pory"
	setobjectxyperm 35, 23, 47
# 277 "data/maps/Route104/scripts.pory"
	addobject 35
# 278 "data/maps/Route104/scripts.pory"
	applymovement 35, Route104_Movement_Rival2WalksIn
# 279 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 280 "data/maps/Route104/scripts.pory"
	playse SE_PIN
# 281 "data/maps/Route104/scripts.pory"
	applymovement 35, Common_Movement_ExclamationMark
# 282 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 283 "data/maps/Route104/scripts.pory"
	delay 20
# 284 "data/maps/Route104/scripts.pory"
	ballfollowingmon
# 285 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerMoveForApproach3
# 286 "data/maps/Route104/scripts.pory"
	applymovement 35, Route104_Movement_Rival2ApproachPlayer3
# 287 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 288 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_Rival2ShowsUp
	return


Route104_EventScript_BeachTriggerLeft::
# 292 "data/maps/Route104/scripts.pory"
	lockall
# 293 "data/maps/Route104/scripts.pory"
	ballfollowingmon
# 294 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 295 "data/maps/Route104/scripts.pory"
	applymovement 34, Route104_Movement_ApproachPlayerBeachLeft
# 296 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 297 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_NotTheWayToRustboro, MSGBOX_DEFAULT
# 298 "data/maps/Route104/scripts.pory"
	closemessage
# 299 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Walk_Up
# 300 "data/maps/Route104/scripts.pory"
	applymovement 34, Route104_Movement_Rival1ReturnFromBeachBlockLeft
# 301 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 302 "data/maps/Route104/scripts.pory"
	releaseall
	end


Route104_EventScript_BeachTriggerRight::
# 307 "data/maps/Route104/scripts.pory"
	lockall
# 308 "data/maps/Route104/scripts.pory"
	ballfollowingmon
# 309 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 310 "data/maps/Route104/scripts.pory"
	applymovement 34, Route104_Movement_ApproachPlayerBeachRight
# 311 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 312 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_NotTheWayToRustboro, MSGBOX_DEFAULT
# 313 "data/maps/Route104/scripts.pory"
	closemessage
# 314 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Walk_Up
# 315 "data/maps/Route104/scripts.pory"
	applymovement 34, Route104_Movement_Rival1ReturnFromBeachBlockRight
# 316 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 317 "data/maps/Route104/scripts.pory"
	releaseall
	end


# 321 "data/maps/Route104/scripts.pory"
Route104_Movement_ApproachPlayerBeachLeft:
# 322 "data/maps/Route104/scripts.pory"
	walk_down
# 323 "data/maps/Route104/scripts.pory"
	walk_left
# 323 "data/maps/Route104/scripts.pory"
	walk_left
# 324 "data/maps/Route104/scripts.pory"
	walk_down
	step_end

# 327 "data/maps/Route104/scripts.pory"
Route104_Movement_Rival1ReturnFromBeachBlockLeft:
# 328 "data/maps/Route104/scripts.pory"
	walk_up
# 329 "data/maps/Route104/scripts.pory"
	walk_right
# 329 "data/maps/Route104/scripts.pory"
	walk_right
# 330 "data/maps/Route104/scripts.pory"
	walk_up
# 331 "data/maps/Route104/scripts.pory"
	face_down
	step_end

# 334 "data/maps/Route104/scripts.pory"
Route104_Movement_ApproachPlayerBeachRight:
# 335 "data/maps/Route104/scripts.pory"
	walk_down
# 336 "data/maps/Route104/scripts.pory"
	walk_left
# 337 "data/maps/Route104/scripts.pory"
	walk_down
	step_end

# 340 "data/maps/Route104/scripts.pory"
Route104_Movement_Rival1ReturnFromBeachBlockRight:
# 341 "data/maps/Route104/scripts.pory"
	walk_up
# 342 "data/maps/Route104/scripts.pory"
	walk_right
# 343 "data/maps/Route104/scripts.pory"
	walk_up
# 344 "data/maps/Route104/scripts.pory"
	face_down
	step_end

Route104_EventScript_Rival2ShowsUp::
# 354 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_AfraidYouLeftWithoutMe
# 355 "data/maps/Route104/scripts.pory"
	closemessage
# 356 "data/maps/Route104/scripts.pory"
	applymovement 34, Route104_Movement_Rival1Approach
# 357 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 358 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 359 "data/maps/Route104/scripts.pory"
	applymovement 35, Route104_Movement_ApproachRival1
# 360 "data/maps/Route104/scripts.pory"
	applymovement 34, Common_Movement_BeginTalkRight
# 361 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 362 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_IllGoLetBrineyKnow, MSGBOX_DEFAULT
# 363 "data/maps/Route104/scripts.pory"
	closemessage
# 364 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 365 "data/maps/Route104/scripts.pory"
	applymovement 35, Common_Movement_Walk_Left
# 366 "data/maps/Route104/scripts.pory"
	applymovement 34, Route104_Movement_GoTellBriney
# 367 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 368 "data/maps/Route104/scripts.pory"
	applymovement 34, Route104_Movement_EnterCottage
# 369 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 370 "data/maps/Route104/scripts.pory"
	delay 5
# 371 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 372 "data/maps/Route104/scripts.pory"
	applymovement 35, Common_Movement_BeginTalkUp
# 373 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 374 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WeShouldRegister
# 375 "data/maps/Route104/scripts.pory"
	closemessage
# 376 "data/maps/Route104/scripts.pory"
	delay 30
# 377 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 378 "data/maps/Route104/scripts.pory"
	msgbox RustboroCity_Text_RegisteredRival2, MSGBOX_DEFAULT
# 379 "data/maps/Route104/scripts.pory"
	waitfanfare
# 380 "data/maps/Route104/scripts.pory"
	closemessage
# 381 "data/maps/Route104/scripts.pory"
	checkfriendchoice
# 382 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 383 "data/maps/Route104/scripts.pory"
	case SPENCER, Route104_EventScript_Rival2ShowsUp_3
# 385 "data/maps/Route104/scripts.pory"
	case BREN, Route104_EventScript_Rival2ShowsUp_4
# 387 "data/maps/Route104/scripts.pory"
	case KYLE, Route104_EventScript_Rival2ShowsUp_5
Route104_EventScript_Rival2ShowsUp_1:
# 390 "data/maps/Route104/scripts.pory"
	setvar VAR_0x800A, 2
# 391 "data/maps/Route104/scripts.pory"
	delay 30
# 392 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 393 "data/maps/Route104/scripts.pory"
	applymovement 35, Common_Movement_FaceLeft
# 394 "data/maps/Route104/scripts.pory"
	applymovement 34, Route104_Movement_Rival1ComesBackOutOfCottage
# 395 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 396 "data/maps/Route104/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_DOWN
# 397 "data/maps/Route104/scripts.pory"
	addobject 8
# 398 "data/maps/Route104/scripts.pory"
	applymovement 8, Route104_Movement_StepOutOfCottage
# 399 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 400 "data/maps/Route104/scripts.pory"
	applymovement 8, Common_Movement_BeginTalkRight
# 401 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 402 "data/maps/Route104/scripts.pory"
	msgbox RustboroCity_Text_AnchorsAweigh, MSGBOX_DEFAULT
# 403 "data/maps/Route104/scripts.pory"
	closemessage
# 404 "data/maps/Route104/scripts.pory"
	applymovement 8, Common_Movement_BeginTalkUp
# 405 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 406 "data/maps/Route104/scripts.pory"
	msgbox RustboroCity_Text_PeekoSettingSail, MSGBOX_DEFAULT
# 407 "data/maps/Route104/scripts.pory"
	closemessage
# 408 "data/maps/Route104/scripts.pory"
	applymovement 8, Common_Movement_Walk_Left
# 409 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 410 "data/maps/Route104/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 411 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 412 "data/maps/Route104/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 413 "data/maps/Route104/scripts.pory"
	addobject 36
# 414 "data/maps/Route104/scripts.pory"
	applymovement 36, Route104_Movement_StepOutOfCottage
# 415 "data/maps/Route104/scripts.pory"
	applymovement 35, Route104_Movement_JoinBoatCrew
# 416 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 417 "data/maps/Route104/scripts.pory"
	waitmoncry
# 418 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 419 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 420 "data/maps/Route104/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 10
# 421 "data/maps/Route104/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 422 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_R104, MAP_ROUTE104, 0
# 423 "data/maps/Route104/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE104, 0
# 424 "data/maps/Route104/scripts.pory"
	setobjectsubpriority 34, MAP_ROUTE104, 0
# 425 "data/maps/Route104/scripts.pory"
	setobjectsubpriority 35, MAP_ROUTE104, 0
# 426 "data/maps/Route104/scripts.pory"
	setobjectsubpriority 36, MAP_ROUTE104, 0
# 427 "data/maps/Route104/scripts.pory"
	applymovement 8, Route104_Movement_BrineyBoardShip
# 428 "data/maps/Route104/scripts.pory"
	applymovement 36, Route104_Movement_PeekoBoardShip
# 429 "data/maps/Route104/scripts.pory"
	applymovement 34, Route104_Movement_Rival1BoardShip
# 430 "data/maps/Route104/scripts.pory"
	applymovement 35, Route104_Movement_Rival2BoardShip
# 431 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerBoardShip
# 432 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 433 "data/maps/Route104/scripts.pory"
	removeobject LOCALID_BRINEY_R104
# 434 "data/maps/Route104/scripts.pory"
	removeobject 36
# 435 "data/maps/Route104/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 436 "data/maps/Route104/scripts.pory"
	hideobjectat 34, MAP_ROUTE104
# 437 "data/maps/Route104/scripts.pory"
	hideobjectat 35, MAP_ROUTE104
# 438 "data/maps/Route104/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 439 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_SailToDewfordDadCalls
	end

Route104_EventScript_Rival2ShowsUp_3:
# 384 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_KYLE_MATCH_CALL
	goto Route104_EventScript_Rival2ShowsUp_1

Route104_EventScript_Rival2ShowsUp_4:
# 386 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_SPENCER_MATCH_CALL
	goto Route104_EventScript_Rival2ShowsUp_1

Route104_EventScript_Rival2ShowsUp_5:
# 388 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_BREN_MATCH_CALL
	goto Route104_EventScript_Rival2ShowsUp_1


Route104_EventScript_DontWaitForRival::
# 444 "data/maps/Route104/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 10
# 445 "data/maps/Route104/scripts.pory"
	setvar VAR_0x800A, 0
# 446 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 447 "data/maps/Route104/scripts.pory"
	applymovement 34, Common_Movement_FaceUp
# 448 "data/maps/Route104/scripts.pory"
	applymovement 8, Common_Movement_BeginTalkDown
# 449 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 450 "data/maps/Route104/scripts.pory"
	msgbox RustboroCity_Text_AnchorsAweigh, MSGBOX_DEFAULT
# 451 "data/maps/Route104/scripts.pory"
	closemessage
# 452 "data/maps/Route104/scripts.pory"
	applymovement 8, Common_Movement_FaceUp
# 453 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 454 "data/maps/Route104/scripts.pory"
	applymovement 8, Common_Movement_BeginTalkUp
# 455 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 456 "data/maps/Route104/scripts.pory"
	msgbox RustboroCity_Text_PeekoSettingSail, MSGBOX_DEFAULT
# 457 "data/maps/Route104/scripts.pory"
	closemessage
# 458 "data/maps/Route104/scripts.pory"
	applymovement 8, Common_Movement_Walk_Left
# 459 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 460 "data/maps/Route104/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 461 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 462 "data/maps/Route104/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 463 "data/maps/Route104/scripts.pory"
	addobject 36
# 464 "data/maps/Route104/scripts.pory"
	applymovement 36, Route104_Movement_StepOutOfCottage
# 465 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 466 "data/maps/Route104/scripts.pory"
	applymovement 34, Common_Movement_Walk_Up
# 467 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 468 "data/maps/Route104/scripts.pory"
	waitmoncry
# 469 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_LeaveWithoutRival2
	return


Route104_EventScript_LeaveWithoutRival2::
# 473 "data/maps/Route104/scripts.pory"
	applymovement 8, Route104_Movement_WalkToBoatInterrupted
# 474 "data/maps/Route104/scripts.pory"
	applymovement 36, Route104_Movement_WalkToBoatInterrupted
# 475 "data/maps/Route104/scripts.pory"
	applymovement 34, Route104_Movement_WalkToBoatInterrupted
# 476 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 477 "data/maps/Route104/scripts.pory"
	msgbox RustboroCity_Text_WaitForMe
# 478 "data/maps/Route104/scripts.pory"
	waitmessage
# 479 "data/maps/Route104/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 480 "data/maps/Route104/scripts.pory"
	applymovement 36, Common_Movement_FaceRight
# 481 "data/maps/Route104/scripts.pory"
	applymovement 34, Common_Movement_FaceRight
# 482 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 483 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 484 "data/maps/Route104/scripts.pory"
	playse SE_PIN
# 485 "data/maps/Route104/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 486 "data/maps/Route104/scripts.pory"
	applymovement 36, Common_Movement_ExclamationMark
# 487 "data/maps/Route104/scripts.pory"
	applymovement 34, Common_Movement_ExclamationMark
# 488 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 489 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 490 "data/maps/Route104/scripts.pory"
	delay 40
# 491 "data/maps/Route104/scripts.pory"
	waitse
# 492 "data/maps/Route104/scripts.pory"
	closemessage
# 493 "data/maps/Route104/scripts.pory"
	addobject 35
# 494 "data/maps/Route104/scripts.pory"
	applymovement 35, Route104_Movement_Rival2RunToCatchUp
# 495 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 496 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 497 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 498 "data/maps/Route104/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 10
# 499 "data/maps/Route104/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 500 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_R104, MAP_ROUTE104, 0
# 501 "data/maps/Route104/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE104, 0
# 502 "data/maps/Route104/scripts.pory"
	setobjectsubpriority 34, MAP_ROUTE104, 0
# 503 "data/maps/Route104/scripts.pory"
	setobjectsubpriority 35, MAP_ROUTE104, 0
# 504 "data/maps/Route104/scripts.pory"
	setobjectsubpriority 36, MAP_ROUTE104, 0
# 505 "data/maps/Route104/scripts.pory"
	applymovement 8, Route104_Movement_BrineyBoardShipAfterInterrupted
# 506 "data/maps/Route104/scripts.pory"
	applymovement 36, Route104_Movement_PeekoBoardShipAfterInterrupted
# 507 "data/maps/Route104/scripts.pory"
	applymovement 34, Route104_Movement_Rival1BoardShipAfterInterrupted
# 508 "data/maps/Route104/scripts.pory"
	applymovement 35, Route104_Movement_Rival2BoardShipAfterInterrupted
# 509 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerBoardShipAfterInterrupted
# 510 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 511 "data/maps/Route104/scripts.pory"
	removeobject LOCALID_BRINEY_R104
# 512 "data/maps/Route104/scripts.pory"
	removeobject 36
# 513 "data/maps/Route104/scripts.pory"
	removeobject 34
# 514 "data/maps/Route104/scripts.pory"
	removeobject 35
# 515 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_RIVAL1
# 516 "data/maps/Route104/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 517 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_SailToDewfordDadCalls
	end


# 521 "data/maps/Route104/scripts.pory"
Route104_Movement_WaitForRival2:
# 522 "data/maps/Route104/scripts.pory"
	delay_16
# 522 "data/maps/Route104/scripts.pory"
	delay_16
# 523 "data/maps/Route104/scripts.pory"
	face_right
# 524 "data/maps/Route104/scripts.pory"
	delay_16
# 524 "data/maps/Route104/scripts.pory"
	delay_16
# 524 "data/maps/Route104/scripts.pory"
	delay_16
# 524 "data/maps/Route104/scripts.pory"
	delay_16
# 524 "data/maps/Route104/scripts.pory"
	delay_16
# 524 "data/maps/Route104/scripts.pory"
	delay_16
# 524 "data/maps/Route104/scripts.pory"
	delay_16
# 524 "data/maps/Route104/scripts.pory"
	delay_16
# 525 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_down
	step_end

# 528 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerWaitForRival2:
# 529 "data/maps/Route104/scripts.pory"
	delay_16
# 529 "data/maps/Route104/scripts.pory"
	delay_16
# 529 "data/maps/Route104/scripts.pory"
	delay_16
# 530 "data/maps/Route104/scripts.pory"
	face_right
	step_end

# 533 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerReturnFromWait:
# 534 "data/maps/Route104/scripts.pory"
	delay_4
# 535 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_up
	step_end

# 538 "data/maps/Route104/scripts.pory"
Route104_Movement_StepOutOfBrineysWay:
# 539 "data/maps/Route104/scripts.pory"
	face_left
# 540 "data/maps/Route104/scripts.pory"
	lock_facing_direction
# 541 "data/maps/Route104/scripts.pory"
	walk_right
# 542 "data/maps/Route104/scripts.pory"
	unlock_facing_direction
	step_end

# 545 "data/maps/Route104/scripts.pory"
Route104_Movement_StepOutOfCottage:
# 546 "data/maps/Route104/scripts.pory"
	delay_4
# 547 "data/maps/Route104/scripts.pory"
	walk_down
	step_end

# 550 "data/maps/Route104/scripts.pory"
Route104_Movement_Rival1ShallWeWait:
# 551 "data/maps/Route104/scripts.pory"
	walk_down
# 552 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
	step_end

# 555 "data/maps/Route104/scripts.pory"
Route104_Movement_Player1ShallWeWait:
# 556 "data/maps/Route104/scripts.pory"
	delay_4
# 557 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_right
	step_end

# 560 "data/maps/Route104/scripts.pory"
Route104_Movement_EnterCottage:
# 561 "data/maps/Route104/scripts.pory"
	walk_up
# 562 "data/maps/Route104/scripts.pory"
	set_invisible
	step_end

# 565 "data/maps/Route104/scripts.pory"
Route104_Movement_GoWaitForOtherRival:
# 566 "data/maps/Route104/scripts.pory"
	walk_up
# 567 "data/maps/Route104/scripts.pory"
	face_down
	step_end

# 570 "data/maps/Route104/scripts.pory"
Route104_Movement_Rival2WalksIn:
# 571 "data/maps/Route104/scripts.pory"
	walk_down
# 571 "data/maps/Route104/scripts.pory"
	walk_down
# 571 "data/maps/Route104/scripts.pory"
	walk_down
	step_end

# 574 "data/maps/Route104/scripts.pory"
Route104_Movement_Rival2ApproachPlayer1:
# 575 "data/maps/Route104/scripts.pory"
	walk_down
# 575 "data/maps/Route104/scripts.pory"
	walk_down
# 575 "data/maps/Route104/scripts.pory"
	walk_down
# 576 "data/maps/Route104/scripts.pory"
	walk_left
# 576 "data/maps/Route104/scripts.pory"
	walk_left
	step_end

# 579 "data/maps/Route104/scripts.pory"
Route104_Movement_Rival2ApproachPlayer2:
# 580 "data/maps/Route104/scripts.pory"
	walk_down
# 580 "data/maps/Route104/scripts.pory"
	walk_down
# 581 "data/maps/Route104/scripts.pory"
	walk_left
# 581 "data/maps/Route104/scripts.pory"
	walk_left
	step_end

# 584 "data/maps/Route104/scripts.pory"
Route104_Movement_Rival2ApproachPlayer3:
# 585 "data/maps/Route104/scripts.pory"
	walk_down
# 586 "data/maps/Route104/scripts.pory"
	walk_left
# 586 "data/maps/Route104/scripts.pory"
	walk_left
	step_end

# 589 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerMoveForApproach2:
# 590 "data/maps/Route104/scripts.pory"
	walk_up
# 591 "data/maps/Route104/scripts.pory"
	face_right
	step_end

# 594 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerMoveForApproach3:
# 595 "data/maps/Route104/scripts.pory"
	walk_up
# 595 "data/maps/Route104/scripts.pory"
	walk_up
# 596 "data/maps/Route104/scripts.pory"
	face_right
	step_end

# 599 "data/maps/Route104/scripts.pory"
Route104_Movement_Rival1Approach:
# 600 "data/maps/Route104/scripts.pory"
	walk_right
# 601 "data/maps/Route104/scripts.pory"
	walk_down
# 602 "data/maps/Route104/scripts.pory"
	walk_right
	step_end

# 605 "data/maps/Route104/scripts.pory"
Route104_Movement_ApproachRival1:
# 606 "data/maps/Route104/scripts.pory"
	walk_down
# 607 "data/maps/Route104/scripts.pory"
	face_left
	step_end

# 610 "data/maps/Route104/scripts.pory"
Route104_Movement_GoTellBriney:
# 611 "data/maps/Route104/scripts.pory"
	walk_left
# 611 "data/maps/Route104/scripts.pory"
	walk_left
# 611 "data/maps/Route104/scripts.pory"
	walk_left
# 612 "data/maps/Route104/scripts.pory"
	walk_up
	step_end

# 615 "data/maps/Route104/scripts.pory"
Route104_Movement_Rival1ComesBackOutOfCottage:
# 616 "data/maps/Route104/scripts.pory"
	face_down
# 617 "data/maps/Route104/scripts.pory"
	set_visible
# 618 "data/maps/Route104/scripts.pory"
	delay_4
# 619 "data/maps/Route104/scripts.pory"
	walk_down
# 620 "data/maps/Route104/scripts.pory"
	walk_right
# 621 "data/maps/Route104/scripts.pory"
	face_left
	step_end

# 624 "data/maps/Route104/scripts.pory"
Route104_Movement_JoinBoatCrew:
# 625 "data/maps/Route104/scripts.pory"
	walk_left
# 626 "data/maps/Route104/scripts.pory"
	walk_up
# 627 "data/maps/Route104/scripts.pory"
	face_left
	step_end

# 630 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyBoardShip:
# 631 "data/maps/Route104/scripts.pory"
	walk_left
# 631 "data/maps/Route104/scripts.pory"
	walk_left
# 631 "data/maps/Route104/scripts.pory"
	walk_left
# 631 "data/maps/Route104/scripts.pory"
	walk_left
# 632 "data/maps/Route104/scripts.pory"
	walk_down
# 632 "data/maps/Route104/scripts.pory"
	walk_down
# 633 "data/maps/Route104/scripts.pory"
	set_invisible
	step_end

# 636 "data/maps/Route104/scripts.pory"
Route104_Movement_PeekoBoardShip:
# 637 "data/maps/Route104/scripts.pory"
	walk_left
# 637 "data/maps/Route104/scripts.pory"
	walk_left
# 637 "data/maps/Route104/scripts.pory"
	walk_left
# 637 "data/maps/Route104/scripts.pory"
	walk_left
# 637 "data/maps/Route104/scripts.pory"
	walk_left
# 638 "data/maps/Route104/scripts.pory"
	walk_down
# 638 "data/maps/Route104/scripts.pory"
	walk_down
# 639 "data/maps/Route104/scripts.pory"
	set_invisible
	step_end

# 642 "data/maps/Route104/scripts.pory"
Route104_Movement_Rival1BoardShip:
# 643 "data/maps/Route104/scripts.pory"
	walk_left
# 643 "data/maps/Route104/scripts.pory"
	walk_left
# 643 "data/maps/Route104/scripts.pory"
	walk_left
# 643 "data/maps/Route104/scripts.pory"
	walk_left
# 643 "data/maps/Route104/scripts.pory"
	walk_left
# 643 "data/maps/Route104/scripts.pory"
	walk_left
# 644 "data/maps/Route104/scripts.pory"
	walk_down
# 644 "data/maps/Route104/scripts.pory"
	walk_down
# 645 "data/maps/Route104/scripts.pory"
	set_invisible
	step_end

# 648 "data/maps/Route104/scripts.pory"
Route104_Movement_Rival2BoardShip:
# 649 "data/maps/Route104/scripts.pory"
	walk_left
# 649 "data/maps/Route104/scripts.pory"
	walk_left
# 649 "data/maps/Route104/scripts.pory"
	walk_left
# 649 "data/maps/Route104/scripts.pory"
	walk_left
# 649 "data/maps/Route104/scripts.pory"
	walk_left
# 649 "data/maps/Route104/scripts.pory"
	walk_left
# 649 "data/maps/Route104/scripts.pory"
	walk_left
# 650 "data/maps/Route104/scripts.pory"
	walk_down
# 650 "data/maps/Route104/scripts.pory"
	walk_down
# 651 "data/maps/Route104/scripts.pory"
	set_invisible
	step_end

# 654 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBoardShip:
# 655 "data/maps/Route104/scripts.pory"
	walk_left
# 655 "data/maps/Route104/scripts.pory"
	walk_left
# 655 "data/maps/Route104/scripts.pory"
	walk_left
# 655 "data/maps/Route104/scripts.pory"
	walk_left
# 655 "data/maps/Route104/scripts.pory"
	walk_left
# 655 "data/maps/Route104/scripts.pory"
	walk_left
# 655 "data/maps/Route104/scripts.pory"
	walk_left
# 655 "data/maps/Route104/scripts.pory"
	walk_left
# 656 "data/maps/Route104/scripts.pory"
	walk_down
# 656 "data/maps/Route104/scripts.pory"
	walk_down
# 657 "data/maps/Route104/scripts.pory"
	set_invisible
	step_end

# 660 "data/maps/Route104/scripts.pory"
Route104_Movement_WalkToBoatInterrupted:
# 661 "data/maps/Route104/scripts.pory"
	walk_left
# 661 "data/maps/Route104/scripts.pory"
	walk_left
	step_end

# 664 "data/maps/Route104/scripts.pory"
Route104_Movement_Rival2RunToCatchUp:
# 665 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 665 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 665 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 665 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 665 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 665 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 666 "data/maps/Route104/scripts.pory"
	walk_fast_left
# 666 "data/maps/Route104/scripts.pory"
	walk_fast_left
# 666 "data/maps/Route104/scripts.pory"
	walk_fast_left
# 666 "data/maps/Route104/scripts.pory"
	walk_fast_left
# 666 "data/maps/Route104/scripts.pory"
	walk_fast_left
# 666 "data/maps/Route104/scripts.pory"
	walk_fast_left
	step_end

# 669 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyBoardShipAfterInterrupted:
# 670 "data/maps/Route104/scripts.pory"
	walk_left
# 670 "data/maps/Route104/scripts.pory"
	walk_left
# 671 "data/maps/Route104/scripts.pory"
	walk_down
# 671 "data/maps/Route104/scripts.pory"
	walk_down
# 672 "data/maps/Route104/scripts.pory"
	set_invisible
	step_end

# 675 "data/maps/Route104/scripts.pory"
Route104_Movement_PeekoBoardShipAfterInterrupted:
# 676 "data/maps/Route104/scripts.pory"
	walk_left
# 676 "data/maps/Route104/scripts.pory"
	walk_left
# 676 "data/maps/Route104/scripts.pory"
	walk_left
# 677 "data/maps/Route104/scripts.pory"
	walk_down
# 677 "data/maps/Route104/scripts.pory"
	walk_down
# 678 "data/maps/Route104/scripts.pory"
	set_invisible
	step_end

# 681 "data/maps/Route104/scripts.pory"
Route104_Movement_Rival1BoardShipAfterInterrupted:
# 682 "data/maps/Route104/scripts.pory"
	walk_left
# 682 "data/maps/Route104/scripts.pory"
	walk_left
# 682 "data/maps/Route104/scripts.pory"
	walk_left
# 682 "data/maps/Route104/scripts.pory"
	walk_left
# 683 "data/maps/Route104/scripts.pory"
	walk_down
# 683 "data/maps/Route104/scripts.pory"
	walk_down
# 684 "data/maps/Route104/scripts.pory"
	set_invisible
	step_end

# 687 "data/maps/Route104/scripts.pory"
Route104_Movement_Rival2BoardShipAfterInterrupted:
# 688 "data/maps/Route104/scripts.pory"
	walk_left
# 688 "data/maps/Route104/scripts.pory"
	walk_left
# 688 "data/maps/Route104/scripts.pory"
	walk_left
# 688 "data/maps/Route104/scripts.pory"
	walk_left
# 688 "data/maps/Route104/scripts.pory"
	walk_left
# 689 "data/maps/Route104/scripts.pory"
	walk_down
# 689 "data/maps/Route104/scripts.pory"
	walk_down
# 690 "data/maps/Route104/scripts.pory"
	set_invisible
	step_end

# 693 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBoardShipAfterInterrupted:
# 694 "data/maps/Route104/scripts.pory"
	walk_up
# 695 "data/maps/Route104/scripts.pory"
	walk_left
# 695 "data/maps/Route104/scripts.pory"
	walk_left
# 695 "data/maps/Route104/scripts.pory"
	walk_left
# 695 "data/maps/Route104/scripts.pory"
	walk_left
# 695 "data/maps/Route104/scripts.pory"
	walk_left
# 696 "data/maps/Route104/scripts.pory"
	walk_down
# 696 "data/maps/Route104/scripts.pory"
	walk_down
# 697 "data/maps/Route104/scripts.pory"
	set_invisible
	step_end

# 761 "data/maps/Route104/scripts.pory"

# 762 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBackUp:
# 763 "data/maps/Route104/scripts.pory"
	face_up
# 764 "data/maps/Route104/scripts.pory"
	lock_facing_direction
# 765 "data/maps/Route104/scripts.pory"
	walk_down
# 766 "data/maps/Route104/scripts.pory"
	unlock_facing_direction
# 767 "data/maps/Route104/scripts.pory"
	step_end
# 768 "data/maps/Route104/scripts.pory"

# 769 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalExitBrineysCottage:
# 770 "data/maps/Route104/scripts.pory"
	walk_down
# 771 "data/maps/Route104/scripts.pory"
	step_end
# 772 "data/maps/Route104/scripts.pory"

# 773 "data/maps/Route104/scripts.pory"
Route104_EventScript_ExpertF::
# 774 "data/maps/Route104/scripts.pory"
	lock
# 775 "data/maps/Route104/scripts.pory"
	faceplayer
# 776 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104, Route104_EventScript_ReceivedBerry
# 777 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PlantBerriesInSoilTakeThis, MSGBOX_DEFAULT
# 778 "data/maps/Route104/scripts.pory"
	giveitem ITEM_CHESTO_BERRY
# 779 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 780 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104
# 781 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 782 "data/maps/Route104/scripts.pory"
	release
# 783 "data/maps/Route104/scripts.pory"
	end
# 784 "data/maps/Route104/scripts.pory"

# 785 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBerry::
# 786 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 787 "data/maps/Route104/scripts.pory"
	release
# 788 "data/maps/Route104/scripts.pory"
	end
# 789 "data/maps/Route104/scripts.pory"

# 790 "data/maps/Route104/scripts.pory"
Route104_EventScript_WhiteHerbFlorist::
# 791 "data/maps/Route104/scripts.pory"
	lock
# 792 "data/maps/Route104/scripts.pory"
	faceplayer
# 793 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_WHITE_HERB, Route104_EventScript_ReceivedWhiteHerb
# 794 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DontNeedThisTakeIt, MSGBOX_DEFAULT
# 795 "data/maps/Route104/scripts.pory"
	giveitem ITEM_WHITE_HERB
# 796 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 797 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_WHITE_HERB
# 798 "data/maps/Route104/scripts.pory"
	release
# 799 "data/maps/Route104/scripts.pory"
	end
# 800 "data/maps/Route104/scripts.pory"

# 801 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedWhiteHerb::
# 802 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_FlowerShopSellingSaplings, MSGBOX_DEFAULT
# 803 "data/maps/Route104/scripts.pory"
	release
# 804 "data/maps/Route104/scripts.pory"
	end
# 805 "data/maps/Route104/scripts.pory"

# 806 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl1::
# 807 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrineyLivesInSeasideCottage, MSGBOX_NPC
# 808 "data/maps/Route104/scripts.pory"
	end
# 809 "data/maps/Route104/scripts.pory"

# 810 "data/maps/Route104/scripts.pory"
Route104_EventScript_BugCatcher::
# 811 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WhatsItLikeAtBottomOfSea, MSGBOX_SIGN
# 812 "data/maps/Route104/scripts.pory"
	end
# 813 "data/maps/Route104/scripts.pory"

# 814 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrineysCottageSign::
# 815 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MrBrineysCottage, MSGBOX_SIGN
# 816 "data/maps/Route104/scripts.pory"
	end
# 817 "data/maps/Route104/scripts.pory"

# 818 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignPetalburg::
# 819 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignPetalburg, MSGBOX_SIGN
# 820 "data/maps/Route104/scripts.pory"
	end
# 821 "data/maps/Route104/scripts.pory"

# 822 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignRustboro::
# 823 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignRustboro, MSGBOX_SIGN
# 824 "data/maps/Route104/scripts.pory"
	end
# 825 "data/maps/Route104/scripts.pory"

# 826 "data/maps/Route104/scripts.pory"
Route104_EventScript_FlowerShopSign::
# 827 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PrettyPetalFlowShop, MSGBOX_SIGN
# 828 "data/maps/Route104/scripts.pory"
	end
# 829 "data/maps/Route104/scripts.pory"

# 830 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrainerTipsDoubleBattles::
# 831 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainerTipsDoubleBattles, MSGBOX_SIGN
# 832 "data/maps/Route104/scripts.pory"
	end
# 833 "data/maps/Route104/scripts.pory"

# 834 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy1::
# 835 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ThrowBallAtWeakenedPokemon, MSGBOX_NPC
# 836 "data/maps/Route104/scripts.pory"
	end
# 837 "data/maps/Route104/scripts.pory"

# 838 "data/maps/Route104/scripts.pory"
Route104_EventScript_Woman::
# 839 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_OnlyThrowBallAtWildPokemon, MSGBOX_NPC
# 840 "data/maps/Route104/scripts.pory"
	end
# 841 "data/maps/Route104/scripts.pory"

# 842 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy2::
# 843 "data/maps/Route104/scripts.pory"
	lock
# 844 "data/maps/Route104/scripts.pory"
	faceplayer
# 845 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_BULLET_SEED, Route104_EventScript_ReceivedBulletSeed
# 846 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LikeFillingMouthWithSeedsTakeThis, MSGBOX_DEFAULT
# 847 "data/maps/Route104/scripts.pory"
	giveitem ITEM_TM_BULLET_SEED
# 848 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 849 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULLET_SEED
# 850 "data/maps/Route104/scripts.pory"
	release
# 851 "data/maps/Route104/scripts.pory"
	end
# 852 "data/maps/Route104/scripts.pory"

# 853 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBulletSeed::
# 854 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TMsAreOneTimeUse, MSGBOX_DEFAULT
# 855 "data/maps/Route104/scripts.pory"
	release
# 856 "data/maps/Route104/scripts.pory"
	end
# 857 "data/maps/Route104/scripts.pory"

# 858 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl2::
# 859 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ImNotATrainer, MSGBOX_NPC
# 860 "data/maps/Route104/scripts.pory"
	end
# 861 "data/maps/Route104/scripts.pory"

# 862 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewford::
# 863 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_R104, MAP_ROUTE104, 0
# 864 "data/maps/Route104/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE104, 0
# 865 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BRINEY_R104, Route104_Movement_BrineyBoardBoat
# 866 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 867 "data/maps/Route104/scripts.pory"
	removeobject LOCALID_BRINEY_R104
# 868 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerBoardBoat
# 869 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 870 "data/maps/Route104/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 871 "data/maps/Route104/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 872 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordNoCall
# 873 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordDadCalls
# 874 "data/maps/Route104/scripts.pory"
	end
# 875 "data/maps/Route104/scripts.pory"

# 876 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordNoCall::
# 877 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewford
# 878 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewford
# 879 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 880 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford

Route104_EventScript_SailToDewfordDadCalls::
# 884 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewfordBeforeDadCalls
# 885 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewfordBeforeDadCalls
# 886 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 887 "data/maps/Route104/scripts.pory"
	pokenavcall Route104_Text_DadPokenavCall
# 888 "data/maps/Route104/scripts.pory"
	waitmessage
# 889 "data/maps/Route104/scripts.pory"
	delay 30
# 890 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 891 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredDadInPokenav, MSGBOX_DEFAULT
# 892 "data/maps/Route104/scripts.pory"
	waitfanfare
# 893 "data/maps/Route104/scripts.pory"
	closemessage
# 894 "data/maps/Route104/scripts.pory"
	delay 30
# 895 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_NORMAN_MATCH_CALL
# 896 "data/maps/Route104/scripts.pory"
	compare VAR_0x800A, 2
	goto_if_ne Route104_EventScript_SailToDewfordDadCalls_2
Route104_EventScript_SailToDewfordDadCalls_1:
# 916 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewfordAfterDadCalls
# 917 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewfordAfterDadCalls, MAP_ROUTE104
# 918 "data/maps/Route104/scripts.pory"
	waitmovement LOCALID_BOAT_R104, MAP_ROUTE104
# 919 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 920 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford2
	return

Route104_EventScript_SailToDewfordDadCalls_2:
# 897 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RivalBoatRegister
# 898 "data/maps/Route104/scripts.pory"
	waitmessage
# 899 "data/maps/Route104/scripts.pory"
	delay 30
# 900 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 901 "data/maps/Route104/scripts.pory"
	msgbox RustboroCity_Text_RegisteredRival2, MSGBOX_DEFAULT
# 902 "data/maps/Route104/scripts.pory"
	waitfanfare
# 903 "data/maps/Route104/scripts.pory"
	closemessage
# 904 "data/maps/Route104/scripts.pory"
	checkfriendchoice
# 905 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 906 "data/maps/Route104/scripts.pory"
	case SPENCER, Route104_EventScript_SailToDewfordDadCalls_6
# 908 "data/maps/Route104/scripts.pory"
	case BREN, Route104_EventScript_SailToDewfordDadCalls_7
# 910 "data/maps/Route104/scripts.pory"
	case KYLE, Route104_EventScript_SailToDewfordDadCalls_8
Route104_EventScript_SailToDewfordDadCalls_4:
# 913 "data/maps/Route104/scripts.pory"
	delay 30
# 914 "data/maps/Route104/scripts.pory"
	setvar VAR_0x800A, 0
	goto Route104_EventScript_SailToDewfordDadCalls_1

Route104_EventScript_SailToDewfordDadCalls_6:
# 907 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_KYLE_MATCH_CALL
	goto Route104_EventScript_SailToDewfordDadCalls_4

Route104_EventScript_SailToDewfordDadCalls_7:
# 909 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_SPENCER_MATCH_CALL
	goto Route104_EventScript_SailToDewfordDadCalls_4

Route104_EventScript_SailToDewfordDadCalls_8:
# 911 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_BREN_MATCH_CALL
	goto Route104_EventScript_SailToDewfordDadCalls_4


# 929 "data/maps/Route104/scripts.pory"

# 930 "data/maps/Route104/scripts.pory"
Route104_EventScript_ArriveInDewford::
# 931 "data/maps/Route104/scripts.pory"
	delay 50
# 932 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerExitBoat
# 933 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 934 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 935 "data/maps/Route104/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 936 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerMoveForBriney
# 937 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 938 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_BRINEY_DEWFORD, 12, 8
# 939 "data/maps/Route104/scripts.pory"
	addobject LOCALID_BRINEY_DEWFORD
# 940 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 941 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 942 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, Route104_Movement_BrineyExitBoat
# 943 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 944 "data/maps/Route104/scripts.pory"
	addobject LOCALID_BOAT_DEWFORD
# 945 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 946 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 947 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 948 "data/maps/Route104/scripts.pory"
	hideobjectat LOCALID_BOAT_R104, MAP_ROUTE104
# 949 "data/maps/Route104/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 950 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 951 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN
# 952 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_BRINEY_DEWFORD
# 953 "data/maps/Route104/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 0
# 954 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_DeliverLetterReminder
# 955 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_LandedInDewford
# 956 "data/maps/Route104/scripts.pory"
	end

Route104_EventScript_ArriveInDewford2::
# 960 "data/maps/Route104/scripts.pory"
	delay 50
# 961 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_RIVAL1_DEWFORD, 12, 8
# 962 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_RIVAL2_DEWFORD, 12, 8
# 963 "data/maps/Route104/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL1_DEWFORD, MOVEMENT_TYPE_FACE_DOWN
# 964 "data/maps/Route104/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL2_DEWFORD, MOVEMENT_TYPE_FACE_DOWN
# 965 "data/maps/Route104/scripts.pory"
	addobject LOCALID_RIVAL1_DEWFORD
# 966 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_RIVAL1_DEWFORD, MAP_DEWFORD_TOWN, 0
# 967 "data/maps/Route104/scripts.pory"
	addobject LOCALID_RIVAL2_DEWFORD
# 968 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_RIVAL2_DEWFORD, MAP_DEWFORD_TOWN, 0
# 969 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL1_DEWFORD, Route104_Movement_Rival1ExitBoat
# 970 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL2_DEWFORD, Route104_Movement_Rival2ExitBoat
# 971 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerExitBoatAfterRivals
# 972 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 973 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 974 "data/maps/Route104/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 975 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_BRINEY_DEWFORD, 12, 8
# 976 "data/maps/Route104/scripts.pory"
	addobject LOCALID_BRINEY_DEWFORD
# 977 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 978 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 979 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, Route104_Movement_BrineyExitBoat
# 980 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 981 "data/maps/Route104/scripts.pory"
	addobject LOCALID_BOAT_DEWFORD
# 982 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 983 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 984 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 985 "data/maps/Route104/scripts.pory"
	hideobjectat LOCALID_BOAT_R104, MAP_ROUTE104
# 986 "data/maps/Route104/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 987 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 988 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN
# 989 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority LOCALID_RIVAL1_DEWFORD, MAP_DEWFORD_TOWN
# 990 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority LOCALID_RIVAL2_DEWFORD, MAP_DEWFORD_TOWN
# 991 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_BRINEY_DEWFORD
# 992 "data/maps/Route104/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 0
# 993 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LandedInDewfordDeliverLetter, MSGBOX_DEFAULT
# 994 "data/maps/Route104/scripts.pory"
	closemessage
# 995 "data/maps/Route104/scripts.pory"
	delay 20
# 996 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 997 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL2_DEWFORD, Common_Movement_BeginTalkRight
# 998 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 999 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WeShouldSplitUp, MSGBOX_DEFAULT
# 1000 "data/maps/Route104/scripts.pory"
	closemessage
# 1001 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL1_DEWFORD, Route104_Movement_Rival1LeavesAfterBoat
# 1002 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL2_DEWFORD, Route104_Movement_Rival2LeavesAfterBoat
# 1003 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 1004 "data/maps/Route104/scripts.pory"
	removeobject LOCALID_RIVAL1_DEWFORD
# 1005 "data/maps/Route104/scripts.pory"
	removeobject LOCALID_RIVAL2_DEWFORD
# 1006 "data/maps/Route104/scripts.pory"
	setflag FLAG_MR_BRINEY_SAILING_INTRO
# 1007 "data/maps/Route104/scripts.pory"
	delay 20
# 1008 "data/maps/Route104/scripts.pory"
	releaseall
	end


Route104_EventScript_EndOfDemo::
# 1013 "data/maps/Route104/scripts.pory"
	lock
# 1014 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_EndOfDemo, MSGBOX_DEFAULT
# 1015 "data/maps/Route104/scripts.pory"
	closemessage
# 1016 "data/maps/Route104/scripts.pory"
	release
	end


# 1020 "data/maps/Route104/scripts.pory"
Route104_Movement_Rival1ExitBoat:
# 1021 "data/maps/Route104/scripts.pory"
	walk_down
# 1022 "data/maps/Route104/scripts.pory"
	walk_left
# 1022 "data/maps/Route104/scripts.pory"
	walk_left
# 1022 "data/maps/Route104/scripts.pory"
	walk_left
# 1023 "data/maps/Route104/scripts.pory"
	face_right
	step_end

# 1026 "data/maps/Route104/scripts.pory"
Route104_Movement_Rival2ExitBoat:
# 1027 "data/maps/Route104/scripts.pory"
	walk_in_place_down
# 1028 "data/maps/Route104/scripts.pory"
	walk_down
# 1029 "data/maps/Route104/scripts.pory"
	walk_left
# 1029 "data/maps/Route104/scripts.pory"
	walk_left
# 1030 "data/maps/Route104/scripts.pory"
	face_right
	step_end

# 1033 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerExitBoatAfterRivals:
# 1034 "data/maps/Route104/scripts.pory"
	walk_down
# 1035 "data/maps/Route104/scripts.pory"
	set_visible
# 1036 "data/maps/Route104/scripts.pory"
	delay_4
# 1036 "data/maps/Route104/scripts.pory"
	delay_4
# 1036 "data/maps/Route104/scripts.pory"
	delay_4
# 1037 "data/maps/Route104/scripts.pory"
	delay_2
# 1038 "data/maps/Route104/scripts.pory"
	walk_down
# 1039 "data/maps/Route104/scripts.pory"
	walk_left
# 1040 "data/maps/Route104/scripts.pory"
	face_right
	step_end

# 1043 "data/maps/Route104/scripts.pory"
Route104_Movement_Rival1LeavesAfterBoat:
# 1044 "data/maps/Route104/scripts.pory"
	walk_left
# 1044 "data/maps/Route104/scripts.pory"
	walk_left
# 1044 "data/maps/Route104/scripts.pory"
	walk_left
# 1045 "data/maps/Route104/scripts.pory"
	walk_down
# 1045 "data/maps/Route104/scripts.pory"
	walk_down
# 1046 "data/maps/Route104/scripts.pory"
	walk_left
# 1046 "data/maps/Route104/scripts.pory"
	walk_left
# 1047 "data/maps/Route104/scripts.pory"
	walk_down
# 1047 "data/maps/Route104/scripts.pory"
	walk_down
# 1047 "data/maps/Route104/scripts.pory"
	walk_down
# 1047 "data/maps/Route104/scripts.pory"
	walk_down
# 1047 "data/maps/Route104/scripts.pory"
	walk_down
	step_end

# 1050 "data/maps/Route104/scripts.pory"
Route104_Movement_Rival2LeavesAfterBoat:
# 1051 "data/maps/Route104/scripts.pory"
	walk_left
# 1051 "data/maps/Route104/scripts.pory"
	walk_left
# 1051 "data/maps/Route104/scripts.pory"
	walk_left
# 1051 "data/maps/Route104/scripts.pory"
	walk_left
# 1052 "data/maps/Route104/scripts.pory"
	walk_up
# 1052 "data/maps/Route104/scripts.pory"
	walk_up
# 1052 "data/maps/Route104/scripts.pory"
	walk_up
# 1052 "data/maps/Route104/scripts.pory"
	walk_up
# 1053 "data/maps/Route104/scripts.pory"
	walk_left
# 1053 "data/maps/Route104/scripts.pory"
	walk_left
# 1053 "data/maps/Route104/scripts.pory"
	walk_left
# 1053 "data/maps/Route104/scripts.pory"
	walk_left
	step_end

# 1066 "data/maps/Route104/scripts.pory"

# 1067 "data/maps/Route104/scripts.pory"
Route104_EventScript_DeliverLetterReminder::
# 1068 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LandedInDewfordDeliverLetter, MSGBOX_DEFAULT
# 1069 "data/maps/Route104/scripts.pory"
	releaseall
# 1070 "data/maps/Route104/scripts.pory"
	end
# 1071 "data/maps/Route104/scripts.pory"

# 1072 "data/maps/Route104/scripts.pory"
Route104_EventScript_LandedInDewford::
# 1073 "data/maps/Route104/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 1074 "data/maps/Route104/scripts.pory"
	releaseall
# 1075 "data/maps/Route104/scripts.pory"
	end
# 1076 "data/maps/Route104/scripts.pory"

# 1077 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordBeforeDadCalls:
# 1078 "data/maps/Route104/scripts.pory"
	walk_down
# 1079 "data/maps/Route104/scripts.pory"
	walk_down
# 1080 "data/maps/Route104/scripts.pory"
	walk_down
# 1081 "data/maps/Route104/scripts.pory"
	walk_down
# 1082 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1083 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1084 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1085 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1086 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1087 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1088 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1089 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1090 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1091 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1092 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1093 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1094 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1095 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1096 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1097 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1098 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1099 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1100 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1101 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1102 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1103 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1104 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1105 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1106 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1107 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1108 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1109 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1110 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1111 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1112 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1113 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1114 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1115 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1116 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1117 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1118 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1119 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1120 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1121 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1122 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1123 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1124 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1125 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1126 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1127 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1128 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1129 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1130 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1131 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1132 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1133 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1134 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1135 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1136 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1137 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1138 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1139 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1140 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1141 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1142 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1143 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1144 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1145 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1146 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1147 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1148 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1149 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1150 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1151 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1152 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1153 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1154 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1155 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1156 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1157 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1158 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1159 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1160 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1161 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1162 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1163 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1164 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1165 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1166 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1167 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1168 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1169 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1170 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1171 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1172 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1173 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1174 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1175 "data/maps/Route104/scripts.pory"
	step_end
# 1176 "data/maps/Route104/scripts.pory"

# 1177 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordAfterDadCalls:
# 1178 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1179 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1180 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1181 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1182 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1183 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1184 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1185 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1186 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1187 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1188 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1189 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1190 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1191 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1192 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1193 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1194 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1195 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1196 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1197 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1198 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1199 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1200 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1201 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1202 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1203 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1204 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1205 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1206 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1207 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1208 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1209 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1210 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1211 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1212 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1213 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1214 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1215 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1216 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1217 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1218 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1219 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1220 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1221 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1222 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1223 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1224 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1225 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1226 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1227 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1228 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1229 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1230 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1231 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1232 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1233 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1234 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1235 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1236 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1237 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1238 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1239 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1240 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1241 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1242 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1243 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1244 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1245 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1246 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1247 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1248 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1249 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1250 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1251 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1252 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1253 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1254 "data/maps/Route104/scripts.pory"
	walk_right
# 1255 "data/maps/Route104/scripts.pory"
	walk_right
# 1256 "data/maps/Route104/scripts.pory"
	walk_down
# 1257 "data/maps/Route104/scripts.pory"
	walk_down
# 1258 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1259 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1260 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1261 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1262 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1263 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1264 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1265 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1266 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1267 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1268 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1269 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1270 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1271 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1272 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1273 "data/maps/Route104/scripts.pory"
	walk_down
# 1274 "data/maps/Route104/scripts.pory"
	walk_down
# 1275 "data/maps/Route104/scripts.pory"
	step_end
# 1276 "data/maps/Route104/scripts.pory"

# 1277 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewford:
# 1278 "data/maps/Route104/scripts.pory"
	walk_down
# 1279 "data/maps/Route104/scripts.pory"
	walk_down
# 1280 "data/maps/Route104/scripts.pory"
	walk_down
# 1281 "data/maps/Route104/scripts.pory"
	walk_down
# 1282 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1283 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1284 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1285 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1286 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1287 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1288 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1289 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1290 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1291 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1292 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1293 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1294 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1295 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1296 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1297 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1298 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1299 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1300 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1301 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1302 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1303 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1304 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1305 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1306 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1307 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1308 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1309 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1310 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1311 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1312 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1313 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1314 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1315 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1316 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1317 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1318 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1319 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1320 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1321 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1322 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1323 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1324 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1325 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1326 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1327 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1328 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1329 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1330 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1331 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1332 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1333 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1334 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1335 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1336 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1337 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1338 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1339 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1340 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1341 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1342 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1343 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1344 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1345 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1346 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1347 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1348 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1349 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1350 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1351 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1352 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1353 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1354 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1355 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1356 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1357 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1358 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1359 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1360 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1361 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1362 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1363 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1364 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1365 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1366 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1367 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1368 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1369 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1370 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1371 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1372 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1373 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1374 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1375 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1376 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1377 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1378 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1379 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1380 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1381 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1382 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1383 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1384 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1385 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1386 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1387 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1388 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1389 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1390 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1391 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1392 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1393 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1394 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1395 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1396 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1397 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1398 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1399 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1400 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1401 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1402 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1403 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1404 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1405 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1406 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1407 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1408 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1409 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1410 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1411 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1412 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1413 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1414 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1415 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1416 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1417 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1418 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1419 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1420 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1421 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1422 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1423 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1424 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1425 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1426 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1427 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1428 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1429 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1431 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1432 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1433 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1434 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1435 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1436 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1437 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1438 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1439 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1440 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1441 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1442 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1443 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1444 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1445 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1446 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1447 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1448 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1449 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1450 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1451 "data/maps/Route104/scripts.pory"
	walk_right
# 1452 "data/maps/Route104/scripts.pory"
	walk_right
# 1453 "data/maps/Route104/scripts.pory"
	walk_down
# 1454 "data/maps/Route104/scripts.pory"
	walk_down
# 1455 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1456 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1457 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1458 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1459 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1460 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1461 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1462 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1463 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1464 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1465 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1466 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1467 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1468 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1469 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1470 "data/maps/Route104/scripts.pory"
	walk_down
# 1471 "data/maps/Route104/scripts.pory"
	walk_down
# 1472 "data/maps/Route104/scripts.pory"
	step_end
# 1473 "data/maps/Route104/scripts.pory"

# 1474 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBoardBoat:
# 1475 "data/maps/Route104/scripts.pory"
	walk_left
# 1476 "data/maps/Route104/scripts.pory"
	walk_down
# 1477 "data/maps/Route104/scripts.pory"
	walk_down
# 1478 "data/maps/Route104/scripts.pory"
	step_end
# 1479 "data/maps/Route104/scripts.pory"

# 1480 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerExitBoat:
# 1481 "data/maps/Route104/scripts.pory"
	walk_down
# 1482 "data/maps/Route104/scripts.pory"
	step_end
# 1483 "data/maps/Route104/scripts.pory"

# 1484 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerMoveForBriney:
# 1485 "data/maps/Route104/scripts.pory"
	walk_down
# 1486 "data/maps/Route104/scripts.pory"
	walk_left
# 1487 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_right
# 1488 "data/maps/Route104/scripts.pory"
	step_end
# 1489 "data/maps/Route104/scripts.pory"

# 1490 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyBoardBoat:
# 1491 "data/maps/Route104/scripts.pory"
	walk_down
# 1492 "data/maps/Route104/scripts.pory"
	walk_down
# 1493 "data/maps/Route104/scripts.pory"
	step_end
# 1494 "data/maps/Route104/scripts.pory"

# 1495 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyExitBoat:
# 1496 "data/maps/Route104/scripts.pory"
	walk_down
# 1497 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
# 1498 "data/maps/Route104/scripts.pory"
	step_end
# 1499 "data/maps/Route104/scripts.pory"

# 1500 "data/maps/Route104/scripts.pory"
Route104_EventScript_Ivan::
# 1501 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_IVAN, Route104_Text_IvanIntro, Route104_Text_IvanDefeat
# 1502 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
# 1503 "data/maps/Route104/scripts.pory"
	end
# 1504 "data/maps/Route104/scripts.pory"

# 1505 "data/maps/Route104/scripts.pory"
Route104_EventScript_Billy::
# 1506 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_BILLY, Route104_Text_BillyIntro, Route104_Text_BillyDefeat
# 1507 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
# 1508 "data/maps/Route104/scripts.pory"
	end
# 1509 "data/maps/Route104/scripts.pory"

# 1510 "data/maps/Route104/scripts.pory"
Route104_EventScript_Haley::
# 1511 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_HALEY_1, Route104_Text_HaleyIntro, Route104_Text_HaleyDefeat, Route104_EventScript_TryRegisterHaleyAfterBattle
# 1512 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1513 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchHaley
# 1514 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_HALEY_1
# 1515 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 1516 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterHaley
# 1517 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 1518 "data/maps/Route104/scripts.pory"
	release
# 1519 "data/maps/Route104/scripts.pory"
	end
# 1520 "data/maps/Route104/scripts.pory"

# 1521 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaleyAfterBattle::
# 1522 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 1523 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 1524 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaleyAfterBattle
# 1525 "data/maps/Route104/scripts.pory"
	release
# 1526 "data/maps/Route104/scripts.pory"
	end
# 1527 "data/maps/Route104/scripts.pory"

# 1528 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaleyAfterBattle::
# 1529 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister2, MSGBOX_DEFAULT
# 1530 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 1531 "data/maps/Route104/scripts.pory"
	release
# 1532 "data/maps/Route104/scripts.pory"
	end
# 1533 "data/maps/Route104/scripts.pory"

# 1534 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaley::
# 1535 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaley
# 1536 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 1537 "data/maps/Route104/scripts.pory"
	release
# 1538 "data/maps/Route104/scripts.pory"
	end
# 1539 "data/maps/Route104/scripts.pory"

# 1540 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaley::
# 1541 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister1, MSGBOX_DEFAULT
# 1542 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 1543 "data/maps/Route104/scripts.pory"
	release
# 1544 "data/maps/Route104/scripts.pory"
	end
# 1545 "data/maps/Route104/scripts.pory"

# 1546 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchHaley::
# 1547 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_HALEY_1, Route104_Text_HaleyRematchIntro, Route104_Text_HaleyRematchDefeat
# 1548 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostRematch, MSGBOX_AUTOCLOSE
# 1549 "data/maps/Route104/scripts.pory"
	end
# 1550 "data/maps/Route104/scripts.pory"

# 1551 "data/maps/Route104/scripts.pory"
Route104_EventScript_Winston::
# 1552 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_WINSTON_1, Route104_Text_WinstonIntro, Route104_Text_WinstonDefeat, Route104_EventScript_TryRegisterWinstonAfterBattle
# 1553 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1554 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchWinston
# 1555 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_WINSTON_1
# 1556 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 1557 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterWinston
# 1558 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 1559 "data/maps/Route104/scripts.pory"
	release
# 1560 "data/maps/Route104/scripts.pory"
	end
# 1561 "data/maps/Route104/scripts.pory"

# 1562 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinstonAfterBattle::
# 1563 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 1564 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 1565 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinstonAfterBattle
# 1566 "data/maps/Route104/scripts.pory"
	release
# 1567 "data/maps/Route104/scripts.pory"
	end
# 1568 "data/maps/Route104/scripts.pory"

# 1569 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinstonAfterBattle::
# 1570 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister2, MSGBOX_DEFAULT
# 1571 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 1572 "data/maps/Route104/scripts.pory"
	release
# 1573 "data/maps/Route104/scripts.pory"
	end
# 1574 "data/maps/Route104/scripts.pory"

# 1575 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinston::
# 1576 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinston
# 1577 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 1578 "data/maps/Route104/scripts.pory"
	release
# 1579 "data/maps/Route104/scripts.pory"
	end
# 1580 "data/maps/Route104/scripts.pory"

# 1581 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinston::
# 1582 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister1, MSGBOX_DEFAULT
# 1583 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 1584 "data/maps/Route104/scripts.pory"
	release
# 1585 "data/maps/Route104/scripts.pory"
	end
# 1586 "data/maps/Route104/scripts.pory"

# 1587 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchWinston::
# 1588 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_WINSTON_1, Route104_Text_WinstonRematchIntro, Route104_Text_WinstonRematchDefeat
# 1589 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostRematch, MSGBOX_AUTOCLOSE
# 1590 "data/maps/Route104/scripts.pory"
	end
# 1591 "data/maps/Route104/scripts.pory"

# 1592 "data/maps/Route104/scripts.pory"
Route104_EventScript_Cindy::
# 1593 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_CINDY_1, Route104_Text_CindyIntro, Route104_Text_CindyDefeat, Route104_EventScript_TryRegisterCindyAfterBattle
# 1594 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1595 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchCindy
# 1596 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_CINDY_1
# 1597 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 1598 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterCindy
# 1599 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 1600 "data/maps/Route104/scripts.pory"
	release
# 1601 "data/maps/Route104/scripts.pory"
	end
# 1602 "data/maps/Route104/scripts.pory"

# 1603 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindyAfterBattle::
# 1604 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 1605 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 1606 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindyAfterBattle
# 1607 "data/maps/Route104/scripts.pory"
	release
# 1608 "data/maps/Route104/scripts.pory"
	end
# 1609 "data/maps/Route104/scripts.pory"

# 1610 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindyAfterBattle::
# 1611 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister2, MSGBOX_DEFAULT
# 1612 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 1613 "data/maps/Route104/scripts.pory"
	release
# 1614 "data/maps/Route104/scripts.pory"
	end
# 1615 "data/maps/Route104/scripts.pory"

# 1616 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindy::
# 1617 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindy
# 1618 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 1619 "data/maps/Route104/scripts.pory"
	release
# 1620 "data/maps/Route104/scripts.pory"
	end
# 1621 "data/maps/Route104/scripts.pory"

# 1622 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindy::
# 1623 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister1, MSGBOX_DEFAULT
# 1624 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 1625 "data/maps/Route104/scripts.pory"
	release
# 1626 "data/maps/Route104/scripts.pory"
	end
# 1627 "data/maps/Route104/scripts.pory"

# 1628 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchCindy::
# 1629 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_CINDY_1, Route104_Text_CindyRematchIntro, Route104_Text_CindyRematchDefeat
# 1630 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostRematch, MSGBOX_AUTOCLOSE
# 1631 "data/maps/Route104/scripts.pory"
	end
# 1632 "data/maps/Route104/scripts.pory"

# 1633 "data/maps/Route104/scripts.pory"
Route104_EventScript_Gina::
# 1634 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_GinaIntro, Route104_Text_GinaDefeat, Route104_Text_GinaNotEnoughMons
# 1635 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 1636 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_GinaPostBattle, MSGBOX_DEFAULT
# 1637 "data/maps/Route104/scripts.pory"
	release
# 1638 "data/maps/Route104/scripts.pory"
	end
# 1639 "data/maps/Route104/scripts.pory"

# 1640 "data/maps/Route104/scripts.pory"
Route104_EventScript_Mia::
# 1641 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_MiaIntro, Route104_Text_MiaDefeat, Route104_Text_MiaNotEnoughMons
# 1642 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 1643 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MiaPostBattle, MSGBOX_DEFAULT
# 1644 "data/maps/Route104/scripts.pory"
	release
# 1645 "data/maps/Route104/scripts.pory"
	end
# 1646 "data/maps/Route104/scripts.pory"

# 1647 "data/maps/Route104/scripts.pory"
Route104_EventScript_Darian::
# 1648 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_DARIAN, Route104_Text_DarianIntro, Route104_Text_DarianDefeat
# 1649 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
# 1650 "data/maps/Route104/scripts.pory"
	end
# 1651 "data/maps/Route104/scripts.pory"

# 1652 "data/maps/Route104/scripts.pory"
Route104_Text_BrineyLivesInSeasideCottage:
# 1653 "data/maps/Route104/scripts.pory"
	.string "That seaside cottage is where\n"
# 1654 "data/maps/Route104/scripts.pory"
	.string "MR. BRINEY lives.\p"
# 1655 "data/maps/Route104/scripts.pory"
	.string "He was once a mighty sailor who never\n"
# 1656 "data/maps/Route104/scripts.pory"
	.string "feared the sea, however stormy.$"
# 1657 "data/maps/Route104/scripts.pory"

# 1658 "data/maps/Route104/scripts.pory"
Route104_Text_WhatsItLikeAtBottomOfSea:
# 1659 "data/maps/Route104/scripts.pory"
	.string "The sea, huh?\p"
# 1660 "data/maps/Route104/scripts.pory"
	.string "I wonder what it's like at the bottom\n"
# 1661 "data/maps/Route104/scripts.pory"
	.string "of the sea?$"
# 1662 "data/maps/Route104/scripts.pory"

# 1663 "data/maps/Route104/scripts.pory"
Route104_Text_ThrowBallAtWeakenedPokemon:
# 1664 "data/maps/Route104/scripts.pory"
	.string "If you're going to throw a POKé BALL,\n"
# 1665 "data/maps/Route104/scripts.pory"
	.string "weaken the wild POKéMON first.\p"
# 1666 "data/maps/Route104/scripts.pory"
	.string "It will be easier to catch if it's been\n"
# 1667 "data/maps/Route104/scripts.pory"
	.string "poisoned, burned, or lulled to sleep.$"
# 1668 "data/maps/Route104/scripts.pory"

# 1669 "data/maps/Route104/scripts.pory"
Route104_Text_OnlyThrowBallAtWildPokemon:
# 1670 "data/maps/Route104/scripts.pory"
	.string "You're a thief if you try to steal\n"
# 1671 "data/maps/Route104/scripts.pory"
	.string "someone else's POKéMON.\p"
# 1672 "data/maps/Route104/scripts.pory"
	.string "You should throw POKé BALLS only at\n"
# 1673 "data/maps/Route104/scripts.pory"
	.string "wild POKéMON.$"
# 1674 "data/maps/Route104/scripts.pory"

# 1675 "data/maps/Route104/scripts.pory"
Route104_Text_ImNotATrainer:
# 1676 "data/maps/Route104/scripts.pory"
	.string "Oh, no, I'm not a TRAINER.\p"
# 1677 "data/maps/Route104/scripts.pory"
	.string "But that's right, if TRAINERS lock eyes,\n"
# 1678 "data/maps/Route104/scripts.pory"
	.string "it's a challenge to battle.\p"
# 1679 "data/maps/Route104/scripts.pory"
	.string "If you don't want to battle, stay out\n"
# 1680 "data/maps/Route104/scripts.pory"
	.string "of their sight.$"
# 1681 "data/maps/Route104/scripts.pory"

# 1682 "data/maps/Route104/scripts.pory"
Route104_Text_LikeFillingMouthWithSeedsTakeThis:
# 1683 "data/maps/Route104/scripts.pory"
	.string "I like filling my mouth with seeds,\n"
# 1684 "data/maps/Route104/scripts.pory"
	.string "then spitting them out fast!\p"
# 1685 "data/maps/Route104/scripts.pory"
	.string "You can have this, so you try it out!\p"
# 1686 "data/maps/Route104/scripts.pory"
	.string "Use it on a POKéMON, and it will learn\n"
# 1687 "data/maps/Route104/scripts.pory"
	.string "a move for firing seeds rapidly.$"
# 1688 "data/maps/Route104/scripts.pory"

# 1689 "data/maps/Route104/scripts.pory"
Route104_Text_TMsAreOneTimeUse:
# 1690 "data/maps/Route104/scripts.pory"
	.string "A word of advice!\p"
# 1691 "data/maps/Route104/scripts.pory"
	.string "A TM, TECHNICAL MACHINE, is good only\n"
# 1692 "data/maps/Route104/scripts.pory"
	.string "for one-time use.\p"
# 1693 "data/maps/Route104/scripts.pory"
	.string "Once you use it, it's gone.\n"
# 1694 "data/maps/Route104/scripts.pory"
	.string "Think twice before using it!$"
# 1695 "data/maps/Route104/scripts.pory"

# 1696 "data/maps/Route104/scripts.pory"
Route104_Text_DontNeedThisTakeIt:
# 1697 "data/maps/Route104/scripts.pory"
	.string "This FLOWER SHOP started selling\n"
# 1698 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 1699 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 1700 "data/maps/Route104/scripts.pory"
	.string "shopping.\p"
# 1701 "data/maps/Route104/scripts.pory"
	.string "I don't need this WHITE HERB anymore.\n"
# 1702 "data/maps/Route104/scripts.pory"
	.string "Would you take it, please?$"
# 1703 "data/maps/Route104/scripts.pory"

# 1704 "data/maps/Route104/scripts.pory"
Route104_Text_FlowerShopSellingSaplings:
# 1705 "data/maps/Route104/scripts.pory"
	.string "This FLOWER SHOP started selling\n"
# 1706 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 1707 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 1708 "data/maps/Route104/scripts.pory"
	.string "shopping. Where should I put them?$"
# 1709 "data/maps/Route104/scripts.pory"

# 1710 "data/maps/Route104/scripts.pory"
Route104_Text_MrBrineysCottage:
# 1711 "data/maps/Route104/scripts.pory"
	.string "MR. BRINEY'S COTTAGE$"
# 1712 "data/maps/Route104/scripts.pory"

# 1713 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignPetalburg:
# 1714 "data/maps/Route104/scripts.pory"
	.string "ROUTE 1O4\n"
# 1715 "data/maps/Route104/scripts.pory"
	.string "{RIGHT_ARROW} PETALBURG CITY$"
# 1716 "data/maps/Route104/scripts.pory"

# 1717 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignRustboro:
# 1718 "data/maps/Route104/scripts.pory"
	.string "ROUTE 1O4\n"
# 1719 "data/maps/Route104/scripts.pory"
	.string "{UP_ARROW} RUSTBORO CITY$"
# 1720 "data/maps/Route104/scripts.pory"

# 1721 "data/maps/Route104/scripts.pory"
Route104_Text_PrettyPetalFlowShop:
# 1722 "data/maps/Route104/scripts.pory"
	.string "PRETTY PETAL FLOWER SHOP$"
# 1723 "data/maps/Route104/scripts.pory"

# 1724 "data/maps/Route104/scripts.pory"
Route104_Text_TrainerTipsDoubleBattles:
# 1725 "data/maps/Route104/scripts.pory"
	.string "TRAINER TIPS\p"
# 1726 "data/maps/Route104/scripts.pory"
	.string "In the HOENN region there are pairs\n"
# 1727 "data/maps/Route104/scripts.pory"
	.string "of TRAINERS who challenge others\l"
# 1728 "data/maps/Route104/scripts.pory"
	.string "for 2-on-2 POKéMON battles called\l"
# 1729 "data/maps/Route104/scripts.pory"
	.string "DOUBLE BATTLES.\p"
# 1730 "data/maps/Route104/scripts.pory"
	.string "In a DOUBLE BATTLE, the TRAINER must\n"
# 1731 "data/maps/Route104/scripts.pory"
	.string "send out two POKéMON, the one at the\l"
# 1732 "data/maps/Route104/scripts.pory"
	.string "left of the list and the top one.\l"
# 1733 "data/maps/Route104/scripts.pory"
	.string "Watch how POKéMON are lined up.$"

Route104_Text_WhatsItLikeToSurf::
# 102 "data/maps/Route104/scripts.pory"
	.string "Wouldn't it be awesome to ride a\n"
	.string "POKéMON over the water?$"

Route104_Text_WhatsAcrossTheSea::
# 106 "data/maps/Route104/scripts.pory"
	.string "I wonder what's out there beyond the\n"
	.string "sea…$"

Route104_Text_NotTheWayToRustboro::
# 347 "data/maps/Route104/scripts.pory"
	.string "That's not the way to RUSTBORO!\n"
	.string "{RIVAL2} said he was going to the DEVON\l"
	.string "building.\l"
	.string "You should go look for him there.$"

Route104_Text_TakingALongTime::
# 700 "data/maps/Route104/scripts.pory"
	.string "{RIVAL}: {RIVAL2} sure is taking a long time…$"

Route104_Text_AreYouReadyToGo::
# 704 "data/maps/Route104/scripts.pory"
	.string "MR. BRINEY: Well now, boys.\n"
	.string "I'm all set to take a boat trip to\l"
	.string "DEWFORD.\l"
	.string "Are you ready to go?$"

Route104_Text_DoYouThinkWeShouldWait::
# 710 "data/maps/Route104/scripts.pory"
	.string "{RIVAL}: {RIVAL2} isn't here yet.\n"
	.string "Do you think we should wait for him?$"

Route104_Text_LetMeKnowWhenReadyToSail::
# 715 "data/maps/Route104/scripts.pory"
	.string "MR. BRINEY: I'm in no rush to shove off.\n"
	.string "You just let me know when you're ready\l"
	.string "to sail.$"

Route104_Text_SeeWhatsTakingSoLong::
# 720 "data/maps/Route104/scripts.pory"
	.string "{RIVAL}: Will you go see what's\n"
	.string "taking {RIVAL2} so long?\l"
	.string "I'll stay here in case he shows up.$"

Route104_Text_AfraidYouLeftWithoutMe::
# 725 "data/maps/Route104/scripts.pory"
	.string "{RIVAL2}: Boy, am I glad you're still here.\n"
	.string "I was afraid you guys left without me!$"

Route104_Text_IllGoLetBrineyKnow::
# 730 "data/maps/Route104/scripts.pory"
	.string "{RIVAL}: Good.\n"
	.string "Now that we're all here, we can make our\l"
	.string "way to DEWFORD. I'll go let BRINEY know\l"
	.string "we are ready to set sail!$"

Route104_Text_WeShouldRegister::
# 736 "data/maps/Route104/scripts.pory"
	.string "{RIVAL2}: Oh, hey look!\n"
	.string "I got a POKéNAV, too!\l"
	.string "We should register each other.$"

RustboroCity_Text_RegisteredRival2::
# 742 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered {RIVAL2}\n"
	.string "in the POKéNAV.$"

RustboroCity_Text_AnchorsAweigh::
# 747 "data/maps/Route104/scripts.pory"
	.string "MR. BRINEY: DEWFORD it is, then!\p"
	.string "Anchors aweigh!$"

RustboroCity_Text_PeekoSettingSail::
# 752 "data/maps/Route104/scripts.pory"
	.string "PEEKO, we're setting sail, my darling!$"

RustboroCity_Text_WaitForMe::
# 756 "data/maps/Route104/scripts.pory"
	.string "{RIVAL2}: Wait for me!\n"
	.string "I'm coming too!$"

Route104_Text_RivalBoatRegister::
# 923 "data/maps/Route104/scripts.pory"
	.string "{RIVAL2}: Oh, that reminds me, {PLAYER}!\n"
	.string "I got a POKéNAV from the DEVON\l"
	.string "PRESIDENT.\p"
	.string "We should register each other.$"

Route104_Text_WeShouldSplitUp::
# 1056 "data/maps/Route104/scripts.pory"
	.string "{RIVAL2}: We should split up and\n"
	.string "look around for this STEVEN guy.\l"
	.string "We have a letter to deliver!$"

Route104_Text_EndOfDemo::
# 1062 "data/maps/Route104/scripts.pory"
	.string "// END OF DEMO //$"

Route104_Text_BrineyStillPreparing::
# 1736 "data/maps/Route104/scripts.pory"
	.string "{RIVAL}: Oh, hey, {PLAYER}!\p"
	.string "I spoke to MR. BRINEY and he agreed to\n"
	.string "ferry us to DEWFORD.\p"
	.string "You say {RIVAL2} is coming with us?\n"
	.string "Awesome!\l"
	.string "He's got some time to catch up.\l"
	.string "BRINEY is still preparing for the trip.$"

Route104_Text_RegisteredBrendan::
# 1745 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered BRENDAN\n"
	.string "in the POKéNAV.$"

Route104_Text_Rival1HowsYourPokedex::
# 1750 "data/maps/Route104/scripts.pory"
	.string "{RIVAL}: {PLAYER}, how's your\n"
	.string "POKéDEX?\l"
	.string "Are you close to 50 species yet?\l"
	.string "I've barely been able to reach a dozen\l"
	.string "so far!\l"
	.string "Hopefully we'll find more different\l"
	.string "kinds around DEWFORD.\p"
	.string "Anyway…\n"
	.string "… … …\l"
	.string "$"

Route104_Text_BrendanDoingGreatLetsBattle::
# 1759 "data/maps/Route104/scripts.pory"
	.string "Me, I'm doing great!\p"
	.string "Want to check out how good I am with\n"
	.string "a battle?$"

Route104_Text_BrendanNoConfidence::
# 1765 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
	.string "any confidence in your POKéMON?$"

Route104_Text_BrendanLetsBattle::
# 1770 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: What's up?\n"
	.string "Want to have a battle with me?$"

Route104_Text_Rival1BattleIntro::
# 1775 "data/maps/Route104/scripts.pory"
	.string "Since we have some time to kill, why\n"
	.string "don't we battle?\l"
	.string "You can't say no to me this time!$"

Route104_Text_BrendanDefeat::
# 1780 "data/maps/Route104/scripts.pory"
	.string "Hmm…\n"
	.string "You're pretty good.$"

Route104_Text_BrendanPostBattle::
# 1785 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: You've gotten pretty decent\n"
	.string "at handling POKéMON.\p"
	.string "But, you know, you shouldn't just be\n"
	.string "making POKéMON battle.\p"
	.string "Like MR. BRINEY, it's important to\n"
	.string "become friends with your POKéMON.$"
