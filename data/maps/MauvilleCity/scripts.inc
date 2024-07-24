# 8 "data/maps/MauvilleCity/scripts.pory"

# 9 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_WALLY, 6
# 10 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_WALLYS_UNCLE, 7
# 11 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_SCOTT, 11
# 12 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_RIVAL2, 12
# 13 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_RIVAL2OFFBIKE, 13
# 14 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_RIVAL2ONBIKE, 14

MauvilleCity_MapScripts::
# 18 "data/maps/MauvilleCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 29 "data/maps/MauvilleCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MauvilleCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MauvilleCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 19 "data/maps/MauvilleCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 20 "data/maps/MauvilleCity/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 21 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_VISITED_MAUVILLE_CITY
# 22 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 23 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION
# 24 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_SYS_TV_START
# 25 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 26 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 0
# 27 "data/maps/MauvilleCity/scripts.pory"
	call_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_MoveWattsonBackToGym
	return

MauvilleCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 30 "data/maps/MauvilleCity/scripts.pory"
	map_script_2 VAR_MAUVILLE_BIKE_SHOP_STATE, 1, MauvilleCity_EventScript_Rival2BikeRide
	.2byte 0


MauvilleCity_EventScript_MoveWattsonBackToGym::
# 35 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 36 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 37 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_WATTSON_REMATCH_AVAILABLE
	return


MauvilleCity_EventScript_Rival2BikeRide::
# 42 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 43 "data/maps/MauvilleCity/scripts.pory"
	delay 40
# 44 "data/maps/MauvilleCity/scripts.pory"
	playse SE_BIKE_BELL
# 45 "data/maps/MauvilleCity/scripts.pory"
	removeobject 13
# 46 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_HIDE_ROUTE_110_RIVAL
# 47 "data/maps/MauvilleCity/scripts.pory"
	addobject 14
# 48 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 49 "data/maps/MauvilleCity/scripts.pory"
	applymovement 14, MauvilleCity_Movement_Rival2BikeLeft
# 50 "data/maps/MauvilleCity/scripts.pory"
	msgboxtimed MauvilleCity_EventScript_Rival2BikeRide_Text_0, 80
# 51 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 52 "data/maps/MauvilleCity/scripts.pory"
	removeobject 14
# 53 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_BIKE_SHOP_STATE, 2
# 54 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 55 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


# 59 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_Rival2BikeLeft:
# 60 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_left
# 60 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_left
# 60 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_left
# 60 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_left
# 60 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_left
# 60 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_left
# 60 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_left
# 60 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_left
# 60 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_left
	step_end

MauvilleCity_EventScript_Boy::
# 64 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_NurseHurtMonBackToHealth, MSGBOX_NPC
	end


MauvilleCity_EventScript_Maniac::
# 69 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_AllSortsOfPeopleComeThrough, MSGBOX_NPC
	end


MauvilleCity_EventScript_Woman::
# 74 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RydelVeryGenerous, MSGBOX_NPC
	end


MauvilleCity_EventScript_RichBoy::
# 79 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_PokemonCanJumpYouOnBike, MSGBOX_NPC
	end


MauvilleCity_EventScript_CitySign::
# 84 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_CitySign, MSGBOX_SIGN
	end


MauvilleCity_EventScript_GymSign::
# 89 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GymSign, MSGBOX_SIGN
	end


MauvilleCity_EventScript_BikeShopSign::
# 95 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BikeShopSign, MSGBOX_SIGN
	end


MauvilleCity_EventScript_GameCornerSign::
# 100 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GameCornerSign, MSGBOX_SIGN
	end


MauvilleCity_EventScript_SchoolKidM::
# 105 "data/maps/MauvilleCity/scripts.pory"
	lock
# 106 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 107 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_TV_EXPLAINED, MauvilleCity_EventScript_TVExplained
# 108 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ExplainTV, MSGBOX_DEFAULT
# 109 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_TV_EXPLAINED
# 110 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_TVExplained::
# 115 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BeenCheckingOutTV, MSGBOX_DEFAULT
# 116 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_Rival2::
# 121 "data/maps/MauvilleCity/scripts.pory"
	lock
# 122 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, Common_Movement_FacePlayer
# 123 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 124 "data/maps/MauvilleCity/scripts.pory"
	rival2talk MauvilleCity_Text_SpencerDontRushHim, MauvilleCity_Text_BrenDontRushHim, MauvilleCity_Text_KyleDontRushHim
# 127 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 128 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_WallysUncle::
# 163 "data/maps/MauvilleCity/scripts.pory"
	lock
# 164 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 165 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_UncleAskPlayerToBattleWally
# 166 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleHesTooPeppy, MSGBOX_DEFAULT
# 167 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 168 "data/maps/MauvilleCity/scripts.pory"
	applymovement 7, Common_Movement_FaceOriginalDirection
# 169 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 170 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_UncleAskPlayerToBattleWally::
# 175 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleCanYouBattleWally, MSGBOX_DEFAULT
# 176 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 177 "data/maps/MauvilleCity/scripts.pory"
	applymovement 7, Common_Movement_FaceOriginalDirection
# 178 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 179 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_Wally::
# 184 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 185 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_WallyRequestBattleAgain
# 186 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 187 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 188 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWantToChallengeGym, MSGBOX_DEFAULT
# 189 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleYourePushingIt, MSGBOX_DEFAULT
# 190 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWeCanBeatAnyone, MSGBOX_DEFAULT
# 191 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_FacePlayer
# 192 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 193 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 194 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 195 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 196 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_Delay48
# 197 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 198 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWillYouBattleMe, MSGBOX_YESNO
# 199 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
	end


MauvilleCity_EventScript_BattleWallyPrompt::
# 204 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, MauvilleCity_EventScript_BattleWally
# 205 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_EventScript_DeclineWallyBattle
# 206 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 207 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 208 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_BattleWallyPrompt_3
# 210 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_BattleWallyPrompt_4
MauvilleCity_EventScript_BattleWallyPrompt_1:
	end

MauvilleCity_EventScript_BattleWallyPrompt_3:
# 209 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_WallyAndUncleExitNorth
	goto MauvilleCity_EventScript_BattleWallyPrompt_1

MauvilleCity_EventScript_BattleWallyPrompt_4:
# 211 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_WallyAndUncleExitEast
	goto MauvilleCity_EventScript_BattleWallyPrompt_1


MauvilleCity_EventScript_WallyAndUncleExitNorth::
# 217 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth1
# 218 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, MauvilleCity_Movement_PlayerWatchWallyExitEast1
# 219 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, MauvilleCity_Movement_WallyExitNorth1
# 220 "data/maps/MauvilleCity/scripts.pory"
	applymovement 7, MauvilleCity_Movement_WallysUncleExitNorth1
# 221 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 222 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 223 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 224 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 225 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerFaceUncleNorth
# 226 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, MauvilleCity_Movement_PlayerFaceUncleEast
# 227 "data/maps/MauvilleCity/scripts.pory"
	applymovement 7, MauvilleCity_Movement_WallysUncleApproachPlayerNorth
# 228 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 229 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 230 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 231 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth2
# 232 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, MauvilleCity_Movement_PlayerWatchWallyExitEast2
# 233 "data/maps/MauvilleCity/scripts.pory"
	applymovement 7, MauvilleCity_Movement_WallysUncleExitNorth2
# 234 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, MauvilleCity_Movement_WallyExitNorth2
# 235 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 236 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
	end


MauvilleCity_EventScript_WallyAndUncleExitEast::
# 241 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast1
# 242 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, MauvilleCity_Movement_PlayerWatchWallyExitNorth1
# 243 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, MauvilleCity_Movement_WallyExitEast1
# 244 "data/maps/MauvilleCity/scripts.pory"
	applymovement 7, MauvilleCity_Movement_WallysUncleExitEast1
# 245 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 246 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 247 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 248 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 249 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerFaceUncleEast
# 250 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, MauvilleCity_Movement_PlayerFaceUncleNorth
# 251 "data/maps/MauvilleCity/scripts.pory"
	applymovement 7, MauvilleCity_Movement_WallysUncleApproachPlayerEast
# 252 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 253 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 254 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 255 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast2
# 256 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, MauvilleCity_Movement_PlayerWatchWallyExitNorth2
# 257 "data/maps/MauvilleCity/scripts.pory"
	applymovement 7, MauvilleCity_Movement_WallysUncleExitEast2
# 258 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, MauvilleCity_Movement_WallyExitEast2
# 259 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 260 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
	end


MauvilleCity_EventScript_DefeatedWally::
# 265 "data/maps/MauvilleCity/scripts.pory"
	removeobject 6
# 266 "data/maps/MauvilleCity/scripts.pory"
	removeobject 7
# 267 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 268 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
# 269 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_MAUVILLE
# 270 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_WALLY_CALL_STEP_COUNTER, 0
# 271 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 272 "data/maps/MauvilleCity/scripts.pory"
	call MauvilleCity_EventScript_RivalPostWally
# 273 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottApproachPlayerNorth
# 274 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottApproachPlayerEast
# 275 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 276 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 277 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ScottYouDidntHoldBack, MSGBOX_DEFAULT
# 278 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 279 "data/maps/MauvilleCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 280 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottExitNorth
# 281 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottExitEast
# 282 "data/maps/MauvilleCity/scripts.pory"
	removeobject 11
# 283 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


MauvilleCity_EventScript_RivalPostWally::
# 288 "data/maps/MauvilleCity/scripts.pory"
	getplayerxy VAR_0x8001, VAR_0x8002
# 289 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_0x8001
# 290 "data/maps/MauvilleCity/scripts.pory"
	case 7, MauvilleCity_EventScript_RivalPostWally_3
# 293 "data/maps/MauvilleCity/scripts.pory"
	case 8, MauvilleCity_EventScript_RivalPostWally_4
MauvilleCity_EventScript_RivalPostWally_1:
# 297 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 298 "data/maps/MauvilleCity/scripts.pory"
	rival2talk MauvilleCity_Text_SpencerPostWally, MauvilleCity_Text_BrenPostWally, MauvilleCity_Text_KylePostWally
# 301 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 302 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_0x8001
# 303 "data/maps/MauvilleCity/scripts.pory"
	case 7, MauvilleCity_EventScript_RivalPostWally_7
# 306 "data/maps/MauvilleCity/scripts.pory"
	case 8, MauvilleCity_EventScript_RivalPostWally_8
MauvilleCity_EventScript_RivalPostWally_5:
# 309 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 310 "data/maps/MauvilleCity/scripts.pory"
	removeobject 12
# 311 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_WINSTRATE_RIVAL1
# 312 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_117_RIVAL2
	return

MauvilleCity_EventScript_RivalPostWally_3:
# 291 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerFaceRival2East
# 292 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, MauvilleCity_Movement_Rival2ToPlayerEast
	goto MauvilleCity_EventScript_RivalPostWally_1

MauvilleCity_EventScript_RivalPostWally_4:
# 294 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerFaceRival2North
# 295 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, MauvilleCity_Movement_Rival2ToPlayerNorth
	goto MauvilleCity_EventScript_RivalPostWally_1

MauvilleCity_EventScript_RivalPostWally_7:
# 304 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchRival2LeaveEast
# 305 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, MauvilleCity_Movement_Rival2LeaveAfterWallyEast
	goto MauvilleCity_EventScript_RivalPostWally_5

MauvilleCity_EventScript_RivalPostWally_8:
# 307 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, MauvilleCity_Movement_Rival2LeaveAfterWallyNorth
	goto MauvilleCity_EventScript_RivalPostWally_5


# 316 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerFaceRival2North:
# 317 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 318 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
	step_end

# 321 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerFaceRival2East:
# 322 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 323 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_right
	step_end

# 326 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_Rival2ToPlayerNorth:
# 327 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 328 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_right
	step_end

# 331 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_Rival2ToPlayerEast:
# 332 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 333 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
	step_end

# 336 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchRival2LeaveEast:
# 337 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 338 "data/maps/MauvilleCity/scripts.pory"
	face_down
# 339 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 339 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 340 "data/maps/MauvilleCity/scripts.pory"
	face_left
	step_end

# 343 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_Rival2LeaveAfterWallyNorth:
# 344 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 345 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 345 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 345 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 345 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 345 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 345 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 345 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 345 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 346 "data/maps/MauvilleCity/scripts.pory"
	delay_8
	step_end

# 349 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_Rival2LeaveAfterWallyEast:
# 350 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 350 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 351 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 351 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 351 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 351 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 351 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 351 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 351 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 351 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 351 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 351 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 352 "data/maps/MauvilleCity/scripts.pory"
	delay_8
	step_end

MauvilleCity_EventScript_ScottApproachPlayerNorth::
# 386 "data/maps/MauvilleCity/scripts.pory"
	addobject 11
# 387 "data/maps/MauvilleCity/scripts.pory"
	applymovement 11, MauvilleCity_Movement_ScottApproachPlayerNorth
# 388 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	return


MauvilleCity_EventScript_ScottApproachPlayerEast::
# 393 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm 11, 12, 13
# 394 "data/maps/MauvilleCity/scripts.pory"
	addobject 11
# 395 "data/maps/MauvilleCity/scripts.pory"
	applymovement 11, MauvilleCity_Movement_ScottApproachPlayerEast
# 396 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	return


MauvilleCity_EventScript_ScottExitNorth::
# 401 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitNorth
# 402 "data/maps/MauvilleCity/scripts.pory"
	applymovement 11, MauvilleCity_Movement_ScottExitNorth
# 403 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	return


MauvilleCity_EventScript_ScottExitEast::
# 408 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitEast
# 409 "data/maps/MauvilleCity/scripts.pory"
	applymovement 11, MauvilleCity_Movement_ScottExitEast
# 410 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	return


MauvilleCity_EventScript_BattleWally::
# 415 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyHereICome, MSGBOX_DEFAULT
# 416 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 417 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_BattleWally_3
# 423 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_BattleWally_4
MauvilleCity_EventScript_BattleWally_1:
# 430 "data/maps/MauvilleCity/scripts.pory"
	rival2talk MauvilleCity_Text_SpencerTeamUpWithWally, MauvilleCity_Text_BrenTeamUpWithWally, MauvilleCity_Text_KyleTeamUpWithWally
# 433 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 434 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 435 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_BattleWally_7
# 437 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_BattleWally_8
MauvilleCity_EventScript_BattleWally_5:
# 440 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 441 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyAgreesToTeamUp
# 442 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 443 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 444 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_BattleWally_11
# 449 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_BattleWally_12
MauvilleCity_EventScript_BattleWally_9:
# 455 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 456 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_LetsDoThis
# 457 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 458 "data/maps/MauvilleCity/scripts.pory"
	checkfriendchoice
# 459 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_RESULT
# 460 "data/maps/MauvilleCity/scripts.pory"
	case SPENCER, MauvilleCity_EventScript_BattleWally_15
# 462 "data/maps/MauvilleCity/scripts.pory"
	case BREN, MauvilleCity_EventScript_BattleWally_16
# 464 "data/maps/MauvilleCity/scripts.pory"
	case KYLE, MauvilleCity_EventScript_BattleWally_17
MauvilleCity_EventScript_BattleWally_13:
# 467 "data/maps/MauvilleCity/scripts.pory"
	getplayerxy VAR_0x8001, VAR_0x8002
# 468 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_0x8001
# 469 "data/maps/MauvilleCity/scripts.pory"
	case 7, MauvilleCity_EventScript_BattleWally_20
# 471 "data/maps/MauvilleCity/scripts.pory"
	case 8, MauvilleCity_EventScript_BattleWally_21
MauvilleCity_EventScript_BattleWally_18:
# 474 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 475 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 476 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyIllGoBackToVerdanturf, MSGBOX_DEFAULT
# 477 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_FacePlayer
# 478 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 479 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ThankYouNotEnoughToBattle, MSGBOX_DEFAULT
# 480 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 481 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 482 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleNoNeedToBeDown, MSGBOX_DEFAULT
	return

MauvilleCity_EventScript_BattleWally_3:
# 418 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, MauvilleCity_Movement_Rival2WalkToWallySouth
# 419 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 420 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterLeft
# 421 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 422 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	goto MauvilleCity_EventScript_BattleWally_1

MauvilleCity_EventScript_BattleWally_4:
# 424 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, MauvilleCity_Movement_Rival2WalkToWallyWest
# 425 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 426 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterDown
# 427 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 428 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	goto MauvilleCity_EventScript_BattleWally_1

MauvilleCity_EventScript_BattleWally_7:
# 436 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_BeginTalkLeft
	goto MauvilleCity_EventScript_BattleWally_5

MauvilleCity_EventScript_BattleWally_8:
# 438 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_BeginTalkDown
	goto MauvilleCity_EventScript_BattleWally_5

MauvilleCity_EventScript_BattleWally_11:
# 445 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 446 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterDown
# 447 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceFasterDown
# 448 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	goto MauvilleCity_EventScript_BattleWally_9

MauvilleCity_EventScript_BattleWally_12:
# 450 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 451 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterLeft
# 452 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceFasterLeft
# 453 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	goto MauvilleCity_EventScript_BattleWally_9

MauvilleCity_EventScript_BattleWally_15:
# 461 "data/maps/MauvilleCity/scripts.pory"
	doublebattle_vs_2 TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyDefeat, TRAINER_KYLE_MAUVILLE, MauvilleCity_Text_KylePostBattle
	goto MauvilleCity_EventScript_BattleWally_13

MauvilleCity_EventScript_BattleWally_16:
# 463 "data/maps/MauvilleCity/scripts.pory"
	doublebattle_vs_2 TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyDefeat, TRAINER_SPENCER_MAUVILLE, MauvilleCity_Text_SpencerPostBattle
	goto MauvilleCity_EventScript_BattleWally_13

MauvilleCity_EventScript_BattleWally_17:
# 465 "data/maps/MauvilleCity/scripts.pory"
	doublebattle_vs_2 TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyDefeat, TRAINER_BREN_MAUVILLE, MauvilleCity_Text_BrenPostBattle
	goto MauvilleCity_EventScript_BattleWally_13

MauvilleCity_EventScript_BattleWally_20:
# 470 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, Common_Movement_FaceUp
	goto MauvilleCity_EventScript_BattleWally_18

MauvilleCity_EventScript_BattleWally_21:
# 472 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, Common_Movement_FaceRight
	goto MauvilleCity_EventScript_BattleWally_18


MauvilleCity_EventScript_DeclineWallyBattle::
# 552 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DECLINED_WALLY_BATTLE_MAUVILLE
# 553 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyMyUncleWontKnowImStrong, MSGBOX_DEFAULT
# 554 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_WallyRequestBattleAgain::
# 559 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_FacePlayer
# 560 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 561 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyPleaseBattleMe, MSGBOX_YESNO
# 562 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
	end


# 566 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_Rival2WalkToWallyWest:
# 567 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 567 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 568 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 568 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 568 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 569 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_fast_up
	step_end

# 572 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_Rival2WalkToWallySouth:
# 573 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 574 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 574 "data/maps/MauvilleCity/scripts.pory"
	walk_right
	step_end

# 577 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth1:
# 578 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 579 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 579 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 580 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 580 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 580 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 583 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast1:
# 584 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 585 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 585 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 586 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 586 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 586 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 589 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth2:
# 590 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 590 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 590 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 591 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 591 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 591 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 591 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 591 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 591 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 591 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 591 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 592 "data/maps/MauvilleCity/scripts.pory"
	delay_8
	step_end

# 595 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast2:
# 596 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 596 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 596 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 597 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 597 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 597 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 597 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 597 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 597 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 597 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 597 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 598 "data/maps/MauvilleCity/scripts.pory"
	delay_8
	step_end

# 601 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth2:
# 602 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 603 "data/maps/MauvilleCity/scripts.pory"
	delay_8
	step_end

# 606 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast2:
# 607 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 607 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 607 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 608 "data/maps/MauvilleCity/scripts.pory"
	face_left
	step_end

# 611 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitNorth:
# 612 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 613 "data/maps/MauvilleCity/scripts.pory"
	face_left
	step_end

# 616 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitEast:
# 617 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 617 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 618 "data/maps/MauvilleCity/scripts.pory"
	face_left
	step_end

# 621 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast1:
# 622 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 623 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 624 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 625 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 626 "data/maps/MauvilleCity/scripts.pory"
	face_down
# 627 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 628 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 629 "data/maps/MauvilleCity/scripts.pory"
	face_left
	step_end

# 632 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth1:
# 633 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 634 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 635 "data/maps/MauvilleCity/scripts.pory"
	face_right
# 636 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 637 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 638 "data/maps/MauvilleCity/scripts.pory"
	face_down
# 639 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 640 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 641 "data/maps/MauvilleCity/scripts.pory"
	face_left
	step_end

# 644 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth1:
# 645 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 645 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 646 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 646 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 646 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 646 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 649 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast1:
# 650 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 650 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 651 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 651 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 651 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 651 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 654 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerFaceUncleNorth:
# 655 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 656 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 657 "data/maps/MauvilleCity/scripts.pory"
	delay_4
	step_end

# 660 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerFaceUncleEast:
# 661 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 662 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 663 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 664 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
	step_end

# 667 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerNorth:
# 668 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 669 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 669 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 670 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_right
	step_end

# 673 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerEast:
# 674 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 675 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 675 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 676 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
	step_end

# 679 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth2:
# 680 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 680 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 681 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 682 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 682 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 682 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 682 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 682 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 682 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 682 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 682 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 685 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast2:
# 686 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 686 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 687 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 688 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 688 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 688 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 688 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 688 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 688 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 688 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 688 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 691 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerNorth:
# 692 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 692 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 692 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 692 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 692 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 692 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 693 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 693 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 693 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 693 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 694 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
	step_end

# 697 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerEast:
# 698 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 698 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 698 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 698 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 698 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 699 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 699 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 699 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 699 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 699 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 700 "data/maps/MauvilleCity/scripts.pory"
	walk_up
	step_end

# 703 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitNorth:
# 704 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 704 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 704 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 704 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 704 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 704 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 704 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 704 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 704 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 707 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitEast:
# 708 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 709 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 709 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 709 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 709 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 709 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 709 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 709 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 709 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 709 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

MauvilleCity_EventScript_Wattson::
# 713 "data/maps/MauvilleCity/scripts.pory"
	lock
# 714 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 715 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_ReceivedThunderbolt
# 716 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_EventScript_CompletedNewMauville
# 717 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_BASEMENT_KEY_FROM_WATTSON, MauvilleCity_EventScript_BegunNewMauville
# 718 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonNeedFavorTakeKey, MSGBOX_DEFAULT
# 719 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_BASEMENT_KEY
# 720 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 721 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
# 722 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 723 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_BegunNewMauville::
# 728 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 729 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_CompletedNewMauville::
# 734 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonThanksTakeTM, MSGBOX_DEFAULT
# 735 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_TM_THUNDERBOLT
# 736 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 737 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON
# 738 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 739 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_ReceivedThunderbolt::
# 744 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 745 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_RegisterWallyCall::
# 750 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 751 "data/maps/MauvilleCity/scripts.pory"
	pokenavcall MauvilleCity_Text_WallyPokenavCall
# 752 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 753 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 754 "data/maps/MauvilleCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 755 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RegisteredWally, MSGBOX_DEFAULT
# 756 "data/maps/MauvilleCity/scripts.pory"
	waitfanfare
# 757 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 758 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 759 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
# 760 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 761 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


MauvilleCity_EventScript_Rival2BikeRide_Text_0:
# 50 "data/maps/MauvilleCity/scripts.pory"
	.string "WHEEEEEEEEEEEEEEE!$"

MauvilleCity_Text_SpencerDontRushHim::
# 132 "data/maps/MauvilleCity/scripts.pory"
	.string "That kid is blocking the way\n"
	.string "into the GYM.\l"
	.string "Seems like he's still working up his\l"
	.string "courage to take on the GYM challenge.\l"
	.string "I get it. I hear WATTSON is no joke!\l"
	.string "I don't want to rush him, so I'll\l"
	.string "just wait my turn.$"

MauvilleCity_Text_BrenDontRushHim::
# 142 "data/maps/MauvilleCity/scripts.pory"
	.string "That kid is blocking the way\n"
	.string "into the GYM.\l"
	.string "Seems like he's still working up his\l"
	.string "courage to take on the GYM challenge.\l"
	.string "I get it. I hear WATTSON is no joke!\l"
	.string "I don't want to rush him, so I'll\l"
	.string "just wait my turn.$"

MauvilleCity_Text_KyleDontRushHim::
# 152 "data/maps/MauvilleCity/scripts.pory"
	.string "That kid is blocking the way\n"
	.string "into the GYM.\l"
	.string "Seems like he's still working up his\l"
	.string "courage to take on the GYM challenge.\l"
	.string "I get it. I hear WATTSON is no joke!\l"
	.string "I don't want to rush him, so I'll\l"
	.string "just wait my turn.$"

MauvilleCity_Text_SpencerPostWally::
# 355 "data/maps/MauvilleCity/scripts.pory"
	.string "That WALLY is alright by me.\n"
	.string "He and I both gave it our all and still\l"
	.string "lost to you!\l"
	.string "What's your secret, huh?\l"
	.string "I obviously have to step up my training\l"
	.string "if I want to keep up.\p"
	.string "I think I should go bolster my team a\n"
	.string "bit before I take on the GYM.\l"
	.string "Based on what I've seen, you should\l"
	.string "have no trouble beating WATTSON.\p"
	.string "Keep shining bright, {PLAYER}!$"

MauvilleCity_Text_BrenPostWally::
# 365 "data/maps/MauvilleCity/scripts.pory"
	.string "That WALLY is alright by me.\n"
	.string "He and I both gave it our all and still\l"
	.string "lost to you!\l"
	.string "What's your secret, huh?\l"
	.string "I obviously have to step up my training\l"
	.string "if I want to keep up.\p"
	.string "I think I should go bolster my team a\n"
	.string "bit before I take on the GYM.\l"
	.string "Based on what I've seen, you should\l"
	.string "have no trouble beating WATTSON.\p"
	.string "Keep shining bright, {PLAYER}!$"

MauvilleCity_Text_KylePostWally::
# 375 "data/maps/MauvilleCity/scripts.pory"
	.string "That WALLY is alright by me.\n"
	.string "He and I both gave it our all and still\l"
	.string "lost to you!\l"
	.string "What's your secret, huh?\l"
	.string "I obviously have to step up my training\l"
	.string "if I want to keep up.\p"
	.string "I think I should go bolster my team a\n"
	.string "bit before I take on the GYM.\l"
	.string "Based on what I've seen, you should\l"
	.string "have no trouble beating WATTSON.\p"
	.string "Keep shining bright, {PLAYER}!$"

MauvilleCity_Text_SpencerPostBattle::
# 486 "data/maps/MauvilleCity/scripts.pory"
	.string "Always one step ahead of me, eh?$"

MauvilleCity_Text_BrenPostBattle::
# 490 "data/maps/MauvilleCity/scripts.pory"
	.string "Always one step ahead of me, eh?$"

MauvilleCity_Text_KylePostBattle::
# 494 "data/maps/MauvilleCity/scripts.pory"
	.string "Always one step ahead of me, eh?$"

MauvilleCity_Text_SpencerTeamUpWithWally::
# 498 "data/maps/MauvilleCity/scripts.pory"
	.string "SPENCER: You're name's WALLY, right?\n"
	.string "I'm SPENCER.\l"
	.string "I know you're chomping at the bit to\l"
	.string "battle {PLAYER}, but you might be\l"
	.string "biting off more than you can chew.\p"
	.string "{PLAYER} and I started our POKéMON\n"
	.string "journey at the same time, but I've never\l"
	.string "been able to beat him!\l"
	.string "He's quite the force!\p"
	.string "However, we may be able to beat him if\n"
	.string "you and I team up.\l"
	.string "What do you say?$"

MauvilleCity_Text_BrenTeamUpWithWally::
# 512 "data/maps/MauvilleCity/scripts.pory"
	.string "BREN: You're name's WALLY, right?\n"
	.string "I'm BREN.\l"
	.string "I know you're chomping at the bit to\l"
	.string "battle {PLAYER}, but you might be\l"
	.string "biting off more than you can chew.\p"
	.string "{PLAYER} and I started our POKéMON\n"
	.string "journey at the same time, but I've never\l"
	.string "been able to beat him!\l"
	.string "He's quite the force!\p"
	.string "However, we may be able to beat him if\n"
	.string "you and I team up.\l"
	.string "What do you say?$"

MauvilleCity_Text_KyleTeamUpWithWally::
# 526 "data/maps/MauvilleCity/scripts.pory"
	.string "KYLE: You're name's WALLY, right?\n"
	.string "I'm KYLE.\l"
	.string "I know you're chomping at the bit to\l"
	.string "battle {PLAYER}, but you might be\l"
	.string "biting off more than you can chew.\p"
	.string "{PLAYER} and I started our POKéMON\n"
	.string "journey at the same time, but I've never\l"
	.string "been able to beat him!\l"
	.string "He's quite the force!\p"
	.string "However, we may be able to beat him if\n"
	.string "you and I team up.\l"
	.string "What do you say?$"

MauvilleCity_Text_WallyAgreesToTeamUp::
# 540 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Well…\n"
	.string "Um, I guess it couldn't hurt.\p"
	.string "Okay… Yeah!\n"
	.string "That actually sounds fun.$"

MauvilleCity_Text_LetsDoThis::
# 547 "data/maps/MauvilleCity/scripts.pory"
	.string "Let's do this!$"

MauvilleCity_Text_UncleHesTooPeppy::
# 765 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: It's because of POKéMON that\n"
	.string "this boy's got more pep, I suppose…\l"
	.string "But he's become a bit too peppy…$"

MauvilleCity_Text_WallyWantToChallengeGym::
# 771 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Aww, UNCLE, please?\p"
	.string "I want to challenge this GYM and see\n"
	.string "how much better I've become.\p"
	.string "Please? May I, please?$"

MauvilleCity_Text_UncleYourePushingIt::
# 778 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: Now hold on, WALLY.\p"
	.string "Since you started living with POKéMON,\n"
	.string "you have grown quite a lot stronger.\p"
	.string "But don't you think you're pushing it\n"
	.string "to suddenly challenge a GYM?$"

MauvilleCity_Text_WallyWeCanBeatAnyone::
# 786 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: I'm not pushing it.\p"
	.string "If I combine forces with RALTS,\n"
	.string "we can beat anyone!$"

MauvilleCity_Text_WallyWillYouBattleMe::
# 792 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh! Hi, {PLAYER}!\p"
	.string "I've gotten a lot stronger since\n"
	.string "we met.\p"
	.string "{PLAYER}, I want you and my UNCLE to\n"
	.string "understand that.\p"
	.string "{PLAYER}, please, will you have\n"
	.string "a battle with me?$"

MauvilleCity_Text_WallyMyUncleWontKnowImStrong::
# 802 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh… If you won't battle me,\n"
	.string "{PLAYER}, my UNCLE won't know that I've\l"
	.string "become really strong.$"

MauvilleCity_Text_UncleCanYouBattleWally::
# 808 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, was it?\n"
	.string "On WALLY's behalf, can I ask you to\l"
	.string "battle with him just this once?\p"
	.string "I don't think he's going to listen to\n"
	.string "any reason the way he is now.$"

MauvilleCity_Text_WallyPleaseBattleMe::
# 816 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, please!\n"
	.string "Battle with me, please.$"

MauvilleCity_Text_WallyHereICome::
# 821 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, thank you.\p"
	.string "Okay… Here I come!$"

MauvilleCity_Text_WallyDefeat::
# 826 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: … … … … … … …\p"
	.string "… … … … … … … …\p"
	.string "We lost…$"

MauvilleCity_Text_WallyIllGoBackToVerdanturf::
# 832 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: UNCLE…\n"
	.string "I'll go back to VERDANTURF…$"

MauvilleCity_Text_ThankYouNotEnoughToBattle::
# 837 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, {RIVAL2}, thank you.\n"
	.string "Being a TRAINER is tough, isn't it?\p"
	.string "It's not enough just to have POKéMON\n"
	.string "and make them battle. That isn't what\l"
	.string "being a real TRAINER is about.$"

MauvilleCity_Text_UncleNoNeedToBeDown::
# 845 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: WALLY, there's no need to be so\n"
	.string "down on yourself.\p"
	.string "Why, what's keeping you from becoming\n"
	.string "stronger and stronger?\p"
	.string "Come on, let's go home.\n"
	.string "Everyone's waiting for you.$"

MauvilleCity_Text_UncleVisitUsSometime::
# 854 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, it just dawned on me\n"
	.string "that you must be the TRAINER who kept\l"
	.string "an eye out for WALLY when he caught\l"
	.string "his POKéMON.\p"
	.string "Why don't you visit us in VERDANTURF\n"
	.string "sometime?\l"
	.string "I'm sure WALLY would enjoy it.$"

MauvilleCity_Text_WallyPokenavCall::
# 864 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "WALLY: Oh, hello, {PLAYER}!\p"
	.string "I just wanted to tell you that\n"
	.string "my uncle bought me a POKéNAV!\p"
	.string "Now I can get in touch with you\n"
	.string "anytime, {PLAYER}!\p"
	.string "… … … … … …\n"
	.string "… … … … … Click!$"

MauvilleCity_Text_RegisteredWally::
# 876 "data/maps/MauvilleCity/scripts.pory"
	.string "Registered WALLY\n"
	.string "in the POKéNAV.$"

MauvilleCity_Text_ScottYouDidntHoldBack::
# 881 "data/maps/MauvilleCity/scripts.pory"
	.string "SCOTT: Hehe…\n"
	.string "I was watching that match!\p"
	.string "You're friends with those boys,\n"
	.string "aren't you?\p"
	.string "But you didn't hold anything back\n"
	.string "and beat them both impressively.\p"
	.string "Yeah! That's what a real POKéMON\n"
	.string "battle is all about!\p"
	.string "I idolize TRAINERS like that!\p"
	.string "… … … … … …\n"
	.string "I'll be cheering for you!$"

MauvilleCity_Text_WattsonNeedFavorTakeKey::
# 895 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Oh, {PLAYER}{KUN}!\n"
	.string "You look like you have a lot of zip!\l"
	.string "That's a good thing, wahahahaha!\p"
	.string "Fine! I've decided!\n"
	.string "I need a favor, {PLAYER}{KUN}!\p"
	.string "MAUVILLE CITY has an underground\n"
	.string "sector called NEW MAUVILLE.\p"
	.string "{PLAYER}{KUN}, I'd like you to go there and\n"
	.string "switch off the GENERATOR.\p"
	.string "The GENERATOR has been running a bit\n"
	.string "haywire. It's getting unsafe.\p"
	.string "Here, this is the KEY to get into\n"
	.string "NEW MAUVILLE.$"

MauvilleCity_Text_WattsonWontBeChallenge::
# 911 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Don't you worry about it.\n"
	.string "It won't be a challenge to you.\p"
	.string "The entrance to NEW MAUVILLE is just\n"
	.string "a short SURF away from ROUTE 110.\p"
	.string "That's it, then, you have my trust!\n"
	.string "Wahahahaha!$"

MauvilleCity_Text_WattsonThanksTakeTM::
# 920 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Wahahahaha!\p"
	.string "I knew it, {PLAYER}{KUN}! I knew I'd made\n"
	.string "the right choice asking you!\p"
	.string "This is my thanks--a TM containing\n"
	.string "THUNDERBOLT!\p"
	.string "Go on, you've earned it!$"

MauvilleCity_Text_WattsonYoungTakeCharge::
# 929 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Wahahahaha!\p"
	.string "It pleases me to no end to see\n"
	.string "the young step up and take charge!$"

MauvilleCity_Text_NurseHurtMonBackToHealth::
# 935 "data/maps/MauvilleCity/scripts.pory"
	.string "You know, it's cool to have POKéMON\n"
	.string "battles and stuff…\p"
	.string "But if your POKéMON gets hurt,\n"
	.string "you have to nurse it back to health.$"

MauvilleCity_Text_AllSortsOfPeopleComeThrough::
# 942 "data/maps/MauvilleCity/scripts.pory"
	.string "The roads of this town stretch north\n"
	.string "and south, and east and west.\p"
	.string "Because of that, we get all sorts of\n"
	.string "people coming through.$"

MauvilleCity_Text_RydelVeryGenerous::
# 949 "data/maps/MauvilleCity/scripts.pory"
	.string "Have you been to RYDEL'S CYCLES yet?\p"
	.string "RYDEL, the owner, is a very generous\n"
	.string "man.$"

MauvilleCity_Text_PokemonCanJumpYouOnBike::
# 955 "data/maps/MauvilleCity/scripts.pory"
	.string "Even if you're riding a BIKE,\n"
	.string "wild POKéMON could jump you.$"

MauvilleCity_Text_CitySign::
# 960 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY\n"
	.string "“The bright and shiny city of fun!”$"

MauvilleCity_Text_GymSign::
# 965 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\n"
	.string "LEADER: WATTSON\l"
	.string "“The cheerfully electrifying man!”$"

MauvilleCity_Text_BikeShopSign::
# 971 "data/maps/MauvilleCity/scripts.pory"
	.string "“Ride in gravel and shake up your\n"
	.string "soul!”\l"
	.string "RYDEL'S CYCLES$"

MauvilleCity_Text_GameCornerSign::
# 977 "data/maps/MauvilleCity/scripts.pory"
	.string "“The play spot for all!”\n"
	.string "MAUVILLE GAME CORNER$"

MauvilleCity_Text_ExplainTV::
# 982 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, do you check out TV at all?\p"
	.string "They've added a bunch of cool new\n"
	.string "shows recently.\p"
	.string "TV is so cool. I've seen my friends on\n"
	.string "TV just out of the blue.\p"
	.string "And, sometimes, they even put you on TV\n"
	.string "without telling you.\p"
	.string "I wish I would be on TV sometime.\p"
	.string "That's why I think you should check\n"
	.string "out TVs whenever you can.$"

MauvilleCity_Text_BeenCheckingOutTV::
# 995 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, have you been checking out TVs?$"
