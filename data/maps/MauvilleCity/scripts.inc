# 6 "data/maps/MauvilleCity/scripts.pory"

# 7 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_WALLY, 6
# 8 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_WALLYS_UNCLE, 7
# 9 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_SCOTT, 11
# 10 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_RIVAL2, 12

MauvilleCity_MapScripts::
# 14 "data/maps/MauvilleCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MauvilleCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 15 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_VISITED_MAUVILLE_CITY
# 16 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 17 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION
# 18 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_SYS_TV_START
# 19 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 20 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 0
# 21 "data/maps/MauvilleCity/scripts.pory"
	call_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_MoveWattsonBackToGym
	return


MauvilleCity_EventScript_MoveWattsonBackToGym::
# 26 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 27 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 28 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_WATTSON_REMATCH_AVAILABLE
	return


MauvilleCity_EventScript_Boy::
# 33 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_NurseHurtMonBackToHealth, MSGBOX_NPC
	end


MauvilleCity_EventScript_Maniac::
# 38 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_AllSortsOfPeopleComeThrough, MSGBOX_NPC
	end


MauvilleCity_EventScript_Woman::
# 43 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RydelVeryGenerous, MSGBOX_NPC
	end


MauvilleCity_EventScript_RichBoy::
# 48 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_PokemonCanJumpYouOnBike, MSGBOX_NPC
	end


MauvilleCity_EventScript_CitySign::
# 53 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_CitySign, MSGBOX_SIGN
	end


MauvilleCity_EventScript_GymSign::
# 58 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GymSign, MSGBOX_SIGN
	end


MauvilleCity_EventScript_BikeShopSign::
# 63 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BikeShopSign, MSGBOX_SIGN
	end


MauvilleCity_EventScript_GameCornerSign::
# 68 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GameCornerSign, MSGBOX_SIGN
	end


MauvilleCity_EventScript_SchoolKidM::
# 73 "data/maps/MauvilleCity/scripts.pory"
	lock
# 74 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 75 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_TV_EXPLAINED, MauvilleCity_EventScript_TVExplained
# 76 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ExplainTV, MSGBOX_DEFAULT
# 77 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_TV_EXPLAINED
# 78 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_TVExplained::
# 83 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BeenCheckingOutTV, MSGBOX_DEFAULT
# 84 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_Rival2::
# 89 "data/maps/MauvilleCity/scripts.pory"
	lock
# 90 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, Common_Movement_FacePlayer
# 91 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 92 "data/maps/MauvilleCity/scripts.pory"
	rival2talk MauvilleCity_Text_SpencerDontRushHim, MauvilleCity_Text_BrenDontRushHim, MauvilleCity_Text_KyleDontRushHim
# 95 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_WallysUncle::
# 127 "data/maps/MauvilleCity/scripts.pory"
	lock
# 128 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 129 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_UncleAskPlayerToBattleWally
# 130 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleHesTooPeppy, MSGBOX_DEFAULT
# 131 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 132 "data/maps/MauvilleCity/scripts.pory"
	applymovement 7, Common_Movement_FaceOriginalDirection
# 133 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 134 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_UncleAskPlayerToBattleWally::
# 139 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleCanYouBattleWally, MSGBOX_DEFAULT
# 140 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 141 "data/maps/MauvilleCity/scripts.pory"
	applymovement 7, Common_Movement_FaceOriginalDirection
# 142 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 143 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_Wally::
# 148 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 149 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_WallyRequestBattleAgain
# 150 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 151 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 152 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWantToChallengeGym, MSGBOX_DEFAULT
# 153 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleYourePushingIt, MSGBOX_DEFAULT
# 154 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWeCanBeatAnyone, MSGBOX_DEFAULT
# 155 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_FacePlayer
# 156 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 157 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 158 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 159 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 160 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_Delay48
# 161 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 162 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWillYouBattleMe, MSGBOX_YESNO
# 163 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
	end


MauvilleCity_EventScript_BattleWallyPrompt::
# 168 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, MauvilleCity_EventScript_BattleWally
# 169 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_EventScript_DeclineWallyBattle
# 170 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 171 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 172 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_BattleWallyPrompt_3
# 174 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_BattleWallyPrompt_4
MauvilleCity_EventScript_BattleWallyPrompt_1:
	end

MauvilleCity_EventScript_BattleWallyPrompt_3:
# 173 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_WallyAndUncleExitNorth
	goto MauvilleCity_EventScript_BattleWallyPrompt_1

MauvilleCity_EventScript_BattleWallyPrompt_4:
# 175 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_WallyAndUncleExitEast
	goto MauvilleCity_EventScript_BattleWallyPrompt_1


MauvilleCity_EventScript_WallyAndUncleExitNorth::
# 181 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth1
# 182 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, MauvilleCity_Movement_WallyExitNorth1
# 183 "data/maps/MauvilleCity/scripts.pory"
	applymovement 7, MauvilleCity_Movement_WallysUncleExitNorth1
# 184 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 185 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 186 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 187 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 188 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerFaceUncleNorth
# 189 "data/maps/MauvilleCity/scripts.pory"
	applymovement 7, MauvilleCity_Movement_WallysUncleApproachPlayerNorth
# 190 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 191 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 192 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 193 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth2
# 194 "data/maps/MauvilleCity/scripts.pory"
	applymovement 7, MauvilleCity_Movement_WallysUncleExitNorth2
# 195 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, MauvilleCity_Movement_WallyExitNorth2
# 196 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 197 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
	end


MauvilleCity_EventScript_WallyAndUncleExitEast::
# 202 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast1
# 203 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, MauvilleCity_Movement_WallyExitEast1
# 204 "data/maps/MauvilleCity/scripts.pory"
	applymovement 7, MauvilleCity_Movement_WallysUncleExitEast1
# 205 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 206 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 207 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 208 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 209 "data/maps/MauvilleCity/scripts.pory"
	applymovement 7, MauvilleCity_Movement_WallysUncleApproachPlayerEast
# 210 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 211 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 212 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 213 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast2
# 214 "data/maps/MauvilleCity/scripts.pory"
	applymovement 7, MauvilleCity_Movement_WallysUncleExitEast2
# 215 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, MauvilleCity_Movement_WallyExitEast2
# 216 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 217 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
	end


MauvilleCity_EventScript_DefeatedWally::
# 222 "data/maps/MauvilleCity/scripts.pory"
	removeobject 6
# 223 "data/maps/MauvilleCity/scripts.pory"
	removeobject 7
# 224 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 225 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
# 226 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_MAUVILLE
# 227 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_WALLY_CALL_STEP_COUNTER, 0
# 228 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 229 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottApproachPlayerNorth
# 230 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottApproachPlayerEast
# 231 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 232 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 233 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ScottYouDidntHoldBack, MSGBOX_DEFAULT
# 234 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 235 "data/maps/MauvilleCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 236 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottExitNorth
# 237 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottExitEast
# 238 "data/maps/MauvilleCity/scripts.pory"
	removeobject 11
# 239 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


MauvilleCity_EventScript_ScottApproachPlayerNorth::
# 244 "data/maps/MauvilleCity/scripts.pory"
	addobject 11
# 245 "data/maps/MauvilleCity/scripts.pory"
	applymovement 11, MauvilleCity_Movement_ScottApproachPlayerNorth
# 246 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	return


MauvilleCity_EventScript_ScottApproachPlayerEast::
# 251 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm 11, 12, 13
# 252 "data/maps/MauvilleCity/scripts.pory"
	addobject 11
# 253 "data/maps/MauvilleCity/scripts.pory"
	applymovement 11, MauvilleCity_Movement_ScottApproachPlayerEast
# 254 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	return


MauvilleCity_EventScript_ScottExitNorth::
# 259 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitNorth
# 260 "data/maps/MauvilleCity/scripts.pory"
	applymovement 11, MauvilleCity_Movement_ScottExitNorth
# 261 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	return


MauvilleCity_EventScript_ScottExitEast::
# 266 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitEast
# 267 "data/maps/MauvilleCity/scripts.pory"
	applymovement 11, MauvilleCity_Movement_ScottExitEast
# 268 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	return


MauvilleCity_EventScript_BattleWally::
# 273 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyHereICome, MSGBOX_DEFAULT
# 274 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 275 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_BattleWally_3
# 281 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_BattleWally_4
MauvilleCity_EventScript_BattleWally_1:
# 288 "data/maps/MauvilleCity/scripts.pory"
	rival2talk MauvilleCity_Text_SpencerTeamUpWithWally, MauvilleCity_Text_BrenTeamUpWithWally, MauvilleCity_Text_KyleTeamUpWithWally
# 291 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 292 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_BattleWally_7
# 294 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_BattleWally_8
MauvilleCity_EventScript_BattleWally_5:
# 297 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 298 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyAgreesToTeamUp
# 299 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 300 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 301 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_BattleWally_11
# 304 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_BattleWally_12
MauvilleCity_EventScript_BattleWally_9:
# 308 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 309 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_LetsDoThis
# 310 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 311 "data/maps/MauvilleCity/scripts.pory"
	trainerbattle TRAINER_BATTLE_SET_TRAINER_A, TRAINER_WALLY_MAUVILLE, 0, NULL, MauvilleCity_Text_WallyPostBattle
# 312 "data/maps/MauvilleCity/scripts.pory"
	checkfriendchoice
# 313 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_RESULT
# 314 "data/maps/MauvilleCity/scripts.pory"
	case SPENCER, MauvilleCity_EventScript_BattleWally_15
# 316 "data/maps/MauvilleCity/scripts.pory"
	case BREN, MauvilleCity_EventScript_BattleWally_16
# 318 "data/maps/MauvilleCity/scripts.pory"
	case KYLE, MauvilleCity_EventScript_BattleWally_17
MauvilleCity_EventScript_BattleWally_13:
# 321 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_0x8005, 200
# 322 "data/maps/MauvilleCity/scripts.pory"
	dotrainerbattle
# 323 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_0x8005, 0
# 326 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 327 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 328 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyIllGoBackToVerdanturf, MSGBOX_DEFAULT
# 329 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_FacePlayer
# 330 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 331 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ThankYouNotEnoughToBattle, MSGBOX_DEFAULT
# 332 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 333 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 334 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleNoNeedToBeDown, MSGBOX_DEFAULT
	return

MauvilleCity_EventScript_BattleWally_3:
# 276 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, MauvilleCity_Movement_Rival2WalkToWallySouth
# 277 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 278 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterLeft
# 279 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 280 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	goto MauvilleCity_EventScript_BattleWally_1

MauvilleCity_EventScript_BattleWally_4:
# 282 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, MauvilleCity_Movement_Rival2WalkToWallyWest
# 283 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 284 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterDown
# 285 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 286 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	goto MauvilleCity_EventScript_BattleWally_1

MauvilleCity_EventScript_BattleWally_7:
# 293 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_BeginTalkLeft
	goto MauvilleCity_EventScript_BattleWally_5

MauvilleCity_EventScript_BattleWally_8:
# 295 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_BeginTalkDown
	goto MauvilleCity_EventScript_BattleWally_5

MauvilleCity_EventScript_BattleWally_11:
# 302 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterDown
# 303 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceFasterDown
	goto MauvilleCity_EventScript_BattleWally_9

MauvilleCity_EventScript_BattleWally_12:
# 305 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterLeft
# 306 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceFasterLeft
	goto MauvilleCity_EventScript_BattleWally_9

MauvilleCity_EventScript_BattleWally_15:
# 315 "data/maps/MauvilleCity/scripts.pory"
	trainerbattle TRAINER_BATTLE_SET_TRAINER_B, TRAINER_KYLE_MAUVILLE, 0, MauvilleCity_Text_RivalBeforeBattle, MauvilleCity_Text_RivalPostBattle
	goto MauvilleCity_EventScript_BattleWally_13

MauvilleCity_EventScript_BattleWally_16:
# 317 "data/maps/MauvilleCity/scripts.pory"
	trainerbattle TRAINER_BATTLE_SET_TRAINER_B, TRAINER_SPENCER_MAUVILLE, 0, MauvilleCity_Text_RivalBeforeBattle, MauvilleCity_Text_RivalPostBattle
	goto MauvilleCity_EventScript_BattleWally_13

MauvilleCity_EventScript_BattleWally_17:
# 319 "data/maps/MauvilleCity/scripts.pory"
	trainerbattle TRAINER_BATTLE_SET_TRAINER_B, TRAINER_BREN_MAUVILLE, 0, MauvilleCity_Text_RivalBeforeBattle, MauvilleCity_Text_RivalPostBattle
	goto MauvilleCity_EventScript_BattleWally_13


MauvilleCity_EventScript_DeclineWallyBattle::
# 408 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DECLINED_WALLY_BATTLE_MAUVILLE
# 409 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyMyUncleWontKnowImStrong, MSGBOX_DEFAULT
# 410 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_WallyRequestBattleAgain::
# 415 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_FacePlayer
# 416 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 417 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyPleaseBattleMe, MSGBOX_YESNO
# 418 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
	end


# 422 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_Rival2WalkToWallyWest:
# 423 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 423 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 424 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 424 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 424 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 425 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_fast_up
	step_end

# 428 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_Rival2WalkToWallySouth:
# 429 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 430 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 430 "data/maps/MauvilleCity/scripts.pory"
	walk_right
	step_end

# 433 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth1:
# 434 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 434 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 435 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 435 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 436 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 439 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast1:
# 440 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 440 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 441 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 441 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 441 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 444 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth2:
# 445 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 445 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 446 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 446 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 446 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 446 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 446 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 446 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 446 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 446 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 447 "data/maps/MauvilleCity/scripts.pory"
	delay_8
	step_end

# 450 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast2:
# 451 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 451 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 452 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 452 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 452 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 452 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 452 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 452 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 452 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 452 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 453 "data/maps/MauvilleCity/scripts.pory"
	delay_8
	step_end

# 456 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth2:
# 457 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 458 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 459 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
	step_end

# 462 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast2:
# 463 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 463 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 463 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 464 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
	step_end

# 467 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitNorth:
# 468 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 469 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
	step_end

# 472 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitEast:
# 473 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 473 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 474 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
	step_end

# 477 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast1:
# 478 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 479 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
	step_end

# 482 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth1:
# 483 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 484 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
	step_end

# 487 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth1:
# 488 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 488 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 488 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 489 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 489 "data/maps/MauvilleCity/scripts.pory"
	walk_down
	step_end

# 492 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast1:
# 493 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 494 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 494 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 495 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 495 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 498 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerFaceUncleNorth:
# 499 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 500 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 501 "data/maps/MauvilleCity/scripts.pory"
	delay_4
# 502 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
	step_end

# 505 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerNorth:
# 506 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 506 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 507 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
	step_end

# 510 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerEast:
# 511 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 512 "data/maps/MauvilleCity/scripts.pory"
	walk_up
	step_end

# 515 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth2:
# 516 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 516 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 516 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 516 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 516 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 516 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 516 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 516 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 519 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast2:
# 520 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 521 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 521 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 521 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 521 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 521 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 521 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 521 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 521 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 524 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerNorth:
# 525 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 525 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 525 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 525 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 525 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 525 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 526 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 526 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 526 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 526 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 527 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
	step_end

# 530 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerEast:
# 531 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 531 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 531 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 531 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 531 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 532 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 532 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 532 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 532 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 532 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 533 "data/maps/MauvilleCity/scripts.pory"
	walk_up
	step_end

# 536 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitNorth:
# 537 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 537 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 537 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 537 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 537 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 537 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 537 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 537 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 537 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 540 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitEast:
# 541 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 542 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 542 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 542 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 542 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 542 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 542 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 542 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 542 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 542 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

MauvilleCity_EventScript_Wattson::
# 546 "data/maps/MauvilleCity/scripts.pory"
	lock
# 547 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 548 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_ReceivedThunderbolt
# 549 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_EventScript_CompletedNewMauville
# 550 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_BASEMENT_KEY_FROM_WATTSON, MauvilleCity_EventScript_BegunNewMauville
# 551 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonNeedFavorTakeKey, MSGBOX_DEFAULT
# 552 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_BASEMENT_KEY
# 553 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 554 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
# 555 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 556 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_BegunNewMauville::
# 561 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 562 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_CompletedNewMauville::
# 567 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonThanksTakeTM, MSGBOX_DEFAULT
# 568 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_TM_THUNDERBOLT
# 569 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 570 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON
# 571 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 572 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_ReceivedThunderbolt::
# 577 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 578 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_RegisterWallyCall::
# 583 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 584 "data/maps/MauvilleCity/scripts.pory"
	pokenavcall MauvilleCity_Text_WallyPokenavCall
# 585 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 586 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 587 "data/maps/MauvilleCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 588 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RegisteredWally, MSGBOX_DEFAULT
# 589 "data/maps/MauvilleCity/scripts.pory"
	waitfanfare
# 590 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 591 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 592 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
# 593 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 594 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


MauvilleCity_Text_SpencerDontRushHim::
# 99 "data/maps/MauvilleCity/scripts.pory"
	.string "That kid is blocking the way into the\n"
	.string "GYM.\l"
	.string "Seems like he's still working up his\l"
	.string "courage\l"
	.string "to take on the GYM challenge.\l"
	.string "I get it. I hear WATTSON is no joke! I\l"
	.string "don't want to rush him, so I'll\l"
	.string "just wait my turn.$"

MauvilleCity_Text_BrenDontRushHim::
# 108 "data/maps/MauvilleCity/scripts.pory"
	.string "That kid is blocking the way into the\n"
	.string "GYM.\l"
	.string "Seems like he's still working up his\l"
	.string "courage\l"
	.string "to take on the GYM challenge.\l"
	.string "I get it. I hear WATTSON is no joke! I\l"
	.string "don't want to rush him, so I'll\l"
	.string "just wait my turn.$"

MauvilleCity_Text_KyleDontRushHim::
# 117 "data/maps/MauvilleCity/scripts.pory"
	.string "That kid is blocking the way into the\n"
	.string "GYM.\l"
	.string "Seems like he's still working up his\l"
	.string "courage\l"
	.string "to take on the GYM challenge.\l"
	.string "I get it. I hear WATTSON is no joke! I\l"
	.string "don't want to rush him, so I'll\l"
	.string "just wait my turn.$"

MauvilleCity_Text_WallyBeforeBattle::
# 338 "data/maps/MauvilleCity/scripts.pory"
	.string "Wally before$"

MauvilleCity_Text_RivalBeforeBattle::
# 342 "data/maps/MauvilleCity/scripts.pory"
	.string "Rival before$"

MauvilleCity_Text_WallyPostBattle::
# 346 "data/maps/MauvilleCity/scripts.pory"
	.string "Wally post battle$"

MauvilleCity_Text_RivalPostBattle::
# 350 "data/maps/MauvilleCity/scripts.pory"
	.string "Rival post battle$"

MauvilleCity_Text_SpencerTeamUpWithWally::
# 354 "data/maps/MauvilleCity/scripts.pory"
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
# 368 "data/maps/MauvilleCity/scripts.pory"
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
# 382 "data/maps/MauvilleCity/scripts.pory"
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
# 396 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Well…\n"
	.string "Um, I guess it couldn't hurt.\p"
	.string "Okay… Yeah!\n"
	.string "That actually sounds fun.$"

MauvilleCity_Text_LetsDoThis::
# 403 "data/maps/MauvilleCity/scripts.pory"
	.string "Let's do this!$"

MauvilleCity_Text_UncleHesTooPeppy::
# 598 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: It's because of POKéMON that\n"
	.string "this boy's got more pep, I suppose…\l"
	.string "But he's become a bit too peppy…$"

MauvilleCity_Text_WallyWantToChallengeGym::
# 604 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Aww, UNCLE, please?\p"
	.string "I want to challenge this GYM and see\n"
	.string "how much better I've become.\p"
	.string "Please? May I, please?$"

MauvilleCity_Text_UncleYourePushingIt::
# 611 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: Now hold on, WALLY.\p"
	.string "Since you started living with POKéMON,\n"
	.string "you have grown quite a lot stronger.\p"
	.string "But don't you think you're pushing it\n"
	.string "to suddenly challenge a GYM?$"

MauvilleCity_Text_WallyWeCanBeatAnyone::
# 619 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: I'm not pushing it.\p"
	.string "If I combine forces with RALTS,\n"
	.string "we can beat anyone!$"

MauvilleCity_Text_WallyWillYouBattleMe::
# 625 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh! Hi, {PLAYER}!\p"
	.string "I've gotten a lot stronger since\n"
	.string "we met.\p"
	.string "{PLAYER}, I want you and my UNCLE to\n"
	.string "understand that.\p"
	.string "{PLAYER}, please, will you have\n"
	.string "a battle with me?$"

MauvilleCity_Text_WallyMyUncleWontKnowImStrong::
# 635 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh… If you won't battle me,\n"
	.string "{PLAYER}, my UNCLE won't know that I've\l"
	.string "become really strong.$"

MauvilleCity_Text_UncleCanYouBattleWally::
# 641 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, was it?\n"
	.string "On WALLY's behalf, can I ask you to\l"
	.string "battle with him just this once?\p"
	.string "I don't think he's going to listen to\n"
	.string "any reason the way he is now.$"

MauvilleCity_Text_WallyPleaseBattleMe::
# 649 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, please!\n"
	.string "Battle with me, please.$"

MauvilleCity_Text_WallyHereICome::
# 654 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, thank you.\p"
	.string "Okay… Here I come!$"

MauvilleCity_Text_WallyDefeat::
# 659 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: … … … … … … …\p"
	.string "… … … … … … … …\p"
	.string "I lost…$"

MauvilleCity_Text_WallyIllGoBackToVerdanturf::
# 665 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: UNCLE…\n"
	.string "I'll go back to VERDANTURF…$"

MauvilleCity_Text_ThankYouNotEnoughToBattle::
# 670 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, thank you.\n"
	.string "Being a TRAINER is tough, isn't it?\p"
	.string "It's not enough just to have POKéMON\n"
	.string "and make them battle. That isn't what\l"
	.string "being a real TRAINER is about.$"

MauvilleCity_Text_UncleNoNeedToBeDown::
# 678 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: WALLY, there's no need to be so\n"
	.string "down on yourself.\p"
	.string "Why, what's keeping you from becoming\n"
	.string "stronger and stronger?\p"
	.string "Come on, let's go home.\n"
	.string "Everyone's waiting for you.$"

MauvilleCity_Text_UncleVisitUsSometime::
# 687 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, it just dawned on me\n"
	.string "that you must be the TRAINER who kept\l"
	.string "an eye out for WALLY when he caught\l"
	.string "his POKéMON.\p"
	.string "Why don't you visit us in VERDANTURF\n"
	.string "sometime?\l"
	.string "I'm sure WALLY would enjoy it.$"

MauvilleCity_Text_WallyPokenavCall::
# 697 "data/maps/MauvilleCity/scripts.pory"
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
# 709 "data/maps/MauvilleCity/scripts.pory"
	.string "Registered WALLY\n"
	.string "in the POKéNAV.$"

MauvilleCity_Text_ScottYouDidntHoldBack::
# 714 "data/maps/MauvilleCity/scripts.pory"
	.string "SCOTT: Hehe…\n"
	.string "I was watching that match!\p"
	.string "You're friends with that boy WALLY,\n"
	.string "aren't you?\p"
	.string "But you didn't hold anything back\n"
	.string "and beat him impressively.\p"
	.string "Yeah! That's what a real POKéMON\n"
	.string "battle is all about!\p"
	.string "I idolize TRAINERS like that!\p"
	.string "… … … … … …\n"
	.string "I'll be cheering for you!$"

MauvilleCity_Text_WattsonNeedFavorTakeKey::
# 728 "data/maps/MauvilleCity/scripts.pory"
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
# 744 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Don't you worry about it.\n"
	.string "It won't be a challenge to you.\p"
	.string "The entrance to NEW MAUVILLE is just\n"
	.string "a short SURF away from ROUTE 110.\p"
	.string "That's it, then, you have my trust!\n"
	.string "Wahahahaha!$"

MauvilleCity_Text_WattsonThanksTakeTM::
# 753 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Wahahahaha!\p"
	.string "I knew it, {PLAYER}{KUN}! I knew I'd made\n"
	.string "the right choice asking you!\p"
	.string "This is my thanks--a TM containing\n"
	.string "THUNDERBOLT!\p"
	.string "Go on, you've earned it!$"

MauvilleCity_Text_WattsonYoungTakeCharge::
# 762 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Wahahahaha!\p"
	.string "It pleases me to no end to see\n"
	.string "the young step up and take charge!$"

MauvilleCity_Text_NurseHurtMonBackToHealth::
# 768 "data/maps/MauvilleCity/scripts.pory"
	.string "You know, it's cool to have POKéMON\n"
	.string "battles and stuff…\p"
	.string "But if your POKéMON gets hurt,\n"
	.string "you have to nurse it back to health.$"

MauvilleCity_Text_AllSortsOfPeopleComeThrough::
# 775 "data/maps/MauvilleCity/scripts.pory"
	.string "The roads of this town stretch north\n"
	.string "and south, and east and west.\p"
	.string "Because of that, we get all sorts of\n"
	.string "people coming through.$"

MauvilleCity_Text_RydelVeryGenerous::
# 782 "data/maps/MauvilleCity/scripts.pory"
	.string "Have you been to RYDEL'S CYCLES yet?\p"
	.string "RYDEL, the owner, is a very generous\n"
	.string "man.$"

MauvilleCity_Text_PokemonCanJumpYouOnBike::
# 788 "data/maps/MauvilleCity/scripts.pory"
	.string "Even if you're riding a BIKE,\n"
	.string "wild POKéMON could jump you.$"

MauvilleCity_Text_CitySign::
# 793 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY\n"
	.string "“The bright and shiny city of fun!”$"

MauvilleCity_Text_GymSign::
# 798 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\n"
	.string "LEADER: WATTSON\l"
	.string "“The cheerfully electrifying man!”$"

MauvilleCity_Text_BikeShopSign::
# 804 "data/maps/MauvilleCity/scripts.pory"
	.string "“Ride in gravel and shake up your\n"
	.string "soul!”\l"
	.string "RYDEL'S CYCLES$"

MauvilleCity_Text_GameCornerSign::
# 810 "data/maps/MauvilleCity/scripts.pory"
	.string "“The play spot for all!”\n"
	.string "MAUVILLE GAME CORNER$"

MauvilleCity_Text_ExplainTV::
# 815 "data/maps/MauvilleCity/scripts.pory"
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
# 828 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, have you been checking out TVs?$"
