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
# 130 "data/maps/MauvilleCity/scripts.pory"
	lock
# 131 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 132 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_UncleAskPlayerToBattleWally
# 133 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleHesTooPeppy, MSGBOX_DEFAULT
# 134 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 135 "data/maps/MauvilleCity/scripts.pory"
	applymovement 7, Common_Movement_FaceOriginalDirection
# 136 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 137 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_UncleAskPlayerToBattleWally::
# 142 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleCanYouBattleWally, MSGBOX_DEFAULT
# 143 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 144 "data/maps/MauvilleCity/scripts.pory"
	applymovement 7, Common_Movement_FaceOriginalDirection
# 145 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 146 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_Wally::
# 151 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 152 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_WallyRequestBattleAgain
# 153 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 154 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 155 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWantToChallengeGym, MSGBOX_DEFAULT
# 156 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleYourePushingIt, MSGBOX_DEFAULT
# 157 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWeCanBeatAnyone, MSGBOX_DEFAULT
# 158 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_FacePlayer
# 159 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 160 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 161 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 162 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 163 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_Delay48
# 164 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 165 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWillYouBattleMe, MSGBOX_YESNO
# 166 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
	end


MauvilleCity_EventScript_BattleWallyPrompt::
# 171 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, MauvilleCity_EventScript_BattleWally
# 172 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_EventScript_DeclineWallyBattle
# 173 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 174 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 175 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_BattleWallyPrompt_3
# 177 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_BattleWallyPrompt_4
MauvilleCity_EventScript_BattleWallyPrompt_1:
	end

MauvilleCity_EventScript_BattleWallyPrompt_3:
# 176 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_WallyAndUncleExitNorth
	goto MauvilleCity_EventScript_BattleWallyPrompt_1

MauvilleCity_EventScript_BattleWallyPrompt_4:
# 178 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_WallyAndUncleExitEast
	goto MauvilleCity_EventScript_BattleWallyPrompt_1


MauvilleCity_EventScript_WallyAndUncleExitNorth::
# 184 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth1
# 185 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, MauvilleCity_Movement_PlayerWatchWallyExitEast1
# 186 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, MauvilleCity_Movement_WallyExitNorth1
# 187 "data/maps/MauvilleCity/scripts.pory"
	applymovement 7, MauvilleCity_Movement_WallysUncleExitNorth1
# 188 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 189 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 190 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 191 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 192 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerFaceUncleNorth
# 193 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, MauvilleCity_Movement_PlayerFaceUncleEast
# 194 "data/maps/MauvilleCity/scripts.pory"
	applymovement 7, MauvilleCity_Movement_WallysUncleApproachPlayerNorth
# 195 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 196 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 197 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 198 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth2
# 199 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, MauvilleCity_Movement_PlayerWatchWallyExitEast2
# 200 "data/maps/MauvilleCity/scripts.pory"
	applymovement 7, MauvilleCity_Movement_WallysUncleExitNorth2
# 201 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, MauvilleCity_Movement_WallyExitNorth2
# 202 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 203 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
	end


MauvilleCity_EventScript_WallyAndUncleExitEast::
# 208 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast1
# 209 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, MauvilleCity_Movement_PlayerWatchWallyExitNorth1
# 210 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, MauvilleCity_Movement_WallyExitEast1
# 211 "data/maps/MauvilleCity/scripts.pory"
	applymovement 7, MauvilleCity_Movement_WallysUncleExitEast1
# 212 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 213 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 214 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 215 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 216 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerFaceUncleEast
# 217 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, MauvilleCity_Movement_PlayerFaceUncleNorth
# 218 "data/maps/MauvilleCity/scripts.pory"
	applymovement 7, MauvilleCity_Movement_WallysUncleApproachPlayerEast
# 219 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 220 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 221 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 222 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast2
# 223 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, MauvilleCity_Movement_PlayerWatchWallyExitNorth2
# 224 "data/maps/MauvilleCity/scripts.pory"
	applymovement 7, MauvilleCity_Movement_WallysUncleExitEast2
# 225 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, MauvilleCity_Movement_WallyExitEast2
# 226 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 227 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
	end


MauvilleCity_EventScript_DefeatedWally::
# 232 "data/maps/MauvilleCity/scripts.pory"
	removeobject 6
# 233 "data/maps/MauvilleCity/scripts.pory"
	removeobject 7
# 234 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 235 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
# 236 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_MAUVILLE
# 237 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_WALLY_CALL_STEP_COUNTER, 0
# 238 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 239 "data/maps/MauvilleCity/scripts.pory"
	call MauvilleCity_EventScript_RivalPostWally
# 240 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottApproachPlayerNorth
# 241 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottApproachPlayerEast
# 242 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 243 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 244 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ScottYouDidntHoldBack, MSGBOX_DEFAULT
# 245 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 246 "data/maps/MauvilleCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 247 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottExitNorth
# 248 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottExitEast
# 249 "data/maps/MauvilleCity/scripts.pory"
	removeobject 11
# 250 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


MauvilleCity_EventScript_RivalPostWally::
# 255 "data/maps/MauvilleCity/scripts.pory"
	getplayerxy VAR_0x8001, VAR_0x8002
# 256 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_0x8001
# 257 "data/maps/MauvilleCity/scripts.pory"
	case 7, MauvilleCity_EventScript_RivalPostWally_3
# 260 "data/maps/MauvilleCity/scripts.pory"
	case 8, MauvilleCity_EventScript_RivalPostWally_4
MauvilleCity_EventScript_RivalPostWally_1:
# 264 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 265 "data/maps/MauvilleCity/scripts.pory"
	rival2talk MauvilleCity_Text_SpencerPostWally, MauvilleCity_Text_BrenPostWally, MauvilleCity_Text_KylePostWally
# 268 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_0x8001
# 269 "data/maps/MauvilleCity/scripts.pory"
	case 7, MauvilleCity_EventScript_RivalPostWally_7
# 272 "data/maps/MauvilleCity/scripts.pory"
	case 8, MauvilleCity_EventScript_RivalPostWally_8
MauvilleCity_EventScript_RivalPostWally_5:
# 275 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 276 "data/maps/MauvilleCity/scripts.pory"
	removeobject 12
	return

MauvilleCity_EventScript_RivalPostWally_3:
# 258 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerFaceRival2East
# 259 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, MauvilleCity_Movement_Rival2ToPlayerEast
	goto MauvilleCity_EventScript_RivalPostWally_1

MauvilleCity_EventScript_RivalPostWally_4:
# 261 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerFaceRival2North
# 262 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, MauvilleCity_Movement_Rival2ToPlayerNorth
	goto MauvilleCity_EventScript_RivalPostWally_1

MauvilleCity_EventScript_RivalPostWally_7:
# 270 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchRival2LeaveEast
# 271 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, MauvilleCity_Movement_Rival2LeaveAfterWallyEast
	goto MauvilleCity_EventScript_RivalPostWally_5

MauvilleCity_EventScript_RivalPostWally_8:
# 273 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, MauvilleCity_Movement_Rival2LeaveAfterWallyNorth
	goto MauvilleCity_EventScript_RivalPostWally_5


# 280 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerFaceRival2North:
# 281 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 282 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
	step_end

# 285 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerFaceRival2East:
# 286 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 287 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_right
	step_end

# 290 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_Rival2ToPlayerNorth:
# 291 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 292 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_right
	step_end

# 295 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_Rival2ToPlayerEast:
# 296 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 297 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
	step_end

# 300 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchRival2LeaveEast:
# 301 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 302 "data/maps/MauvilleCity/scripts.pory"
	face_down
# 303 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 303 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 304 "data/maps/MauvilleCity/scripts.pory"
	face_left
	step_end

# 307 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_Rival2LeaveAfterWallyNorth:
# 308 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 309 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 309 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 309 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 309 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 309 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 309 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 309 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 309 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 310 "data/maps/MauvilleCity/scripts.pory"
	delay_8
	step_end

# 313 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_Rival2LeaveAfterWallyEast:
# 314 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 314 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 315 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 315 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 315 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 315 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 315 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 315 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 315 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 315 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 315 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 315 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 316 "data/maps/MauvilleCity/scripts.pory"
	delay_8
	step_end

MauvilleCity_EventScript_ScottApproachPlayerNorth::
# 350 "data/maps/MauvilleCity/scripts.pory"
	addobject 11
# 351 "data/maps/MauvilleCity/scripts.pory"
	applymovement 11, MauvilleCity_Movement_ScottApproachPlayerNorth
# 352 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	return


MauvilleCity_EventScript_ScottApproachPlayerEast::
# 357 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm 11, 12, 13
# 358 "data/maps/MauvilleCity/scripts.pory"
	addobject 11
# 359 "data/maps/MauvilleCity/scripts.pory"
	applymovement 11, MauvilleCity_Movement_ScottApproachPlayerEast
# 360 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	return


MauvilleCity_EventScript_ScottExitNorth::
# 365 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitNorth
# 366 "data/maps/MauvilleCity/scripts.pory"
	applymovement 11, MauvilleCity_Movement_ScottExitNorth
# 367 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	return


MauvilleCity_EventScript_ScottExitEast::
# 372 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitEast
# 373 "data/maps/MauvilleCity/scripts.pory"
	applymovement 11, MauvilleCity_Movement_ScottExitEast
# 374 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	return


MauvilleCity_EventScript_BattleWally::
# 379 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyHereICome, MSGBOX_DEFAULT
# 380 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 381 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_BattleWally_3
# 387 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_BattleWally_4
MauvilleCity_EventScript_BattleWally_1:
# 394 "data/maps/MauvilleCity/scripts.pory"
	rival2talk MauvilleCity_Text_SpencerTeamUpWithWally, MauvilleCity_Text_BrenTeamUpWithWally, MauvilleCity_Text_KyleTeamUpWithWally
# 397 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 398 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_BattleWally_7
# 400 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_BattleWally_8
MauvilleCity_EventScript_BattleWally_5:
# 403 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 404 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyAgreesToTeamUp
# 405 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 406 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 407 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_BattleWally_11
# 412 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_BattleWally_12
MauvilleCity_EventScript_BattleWally_9:
# 418 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 419 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_LetsDoThis
# 420 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 421 "data/maps/MauvilleCity/scripts.pory"
	checkfriendchoice
# 422 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_RESULT
# 423 "data/maps/MauvilleCity/scripts.pory"
	case SPENCER, MauvilleCity_EventScript_BattleWally_15
# 425 "data/maps/MauvilleCity/scripts.pory"
	case BREN, MauvilleCity_EventScript_BattleWally_16
# 427 "data/maps/MauvilleCity/scripts.pory"
	case KYLE, MauvilleCity_EventScript_BattleWally_17
MauvilleCity_EventScript_BattleWally_13:
# 430 "data/maps/MauvilleCity/scripts.pory"
	getplayerxy VAR_0x8001, VAR_0x8002
# 431 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_0x8001
# 432 "data/maps/MauvilleCity/scripts.pory"
	case 7, MauvilleCity_EventScript_BattleWally_20
# 434 "data/maps/MauvilleCity/scripts.pory"
	case 8, MauvilleCity_EventScript_BattleWally_21
MauvilleCity_EventScript_BattleWally_18:
# 437 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 438 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 439 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyIllGoBackToVerdanturf, MSGBOX_DEFAULT
# 440 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_FacePlayer
# 441 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 442 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ThankYouNotEnoughToBattle, MSGBOX_DEFAULT
# 443 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterRight
# 444 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 445 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleNoNeedToBeDown, MSGBOX_DEFAULT
	return

MauvilleCity_EventScript_BattleWally_3:
# 382 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, MauvilleCity_Movement_Rival2WalkToWallySouth
# 383 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 384 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterLeft
# 385 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 386 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	goto MauvilleCity_EventScript_BattleWally_1

MauvilleCity_EventScript_BattleWally_4:
# 388 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, MauvilleCity_Movement_Rival2WalkToWallyWest
# 389 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 390 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterDown
# 391 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 392 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	goto MauvilleCity_EventScript_BattleWally_1

MauvilleCity_EventScript_BattleWally_7:
# 399 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_BeginTalkLeft
	goto MauvilleCity_EventScript_BattleWally_5

MauvilleCity_EventScript_BattleWally_8:
# 401 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_BeginTalkDown
	goto MauvilleCity_EventScript_BattleWally_5

MauvilleCity_EventScript_BattleWally_11:
# 408 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 409 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterDown
# 410 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceFasterDown
# 411 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	goto MauvilleCity_EventScript_BattleWally_9

MauvilleCity_EventScript_BattleWally_12:
# 413 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 414 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterLeft
# 415 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceFasterLeft
# 416 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	goto MauvilleCity_EventScript_BattleWally_9

MauvilleCity_EventScript_BattleWally_15:
# 424 "data/maps/MauvilleCity/scripts.pory"
	doublebattle_vs_2 TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyDefeat, TRAINER_KYLE_MAUVILLE, MauvilleCity_Text_KylePostBattle
	goto MauvilleCity_EventScript_BattleWally_13

MauvilleCity_EventScript_BattleWally_16:
# 426 "data/maps/MauvilleCity/scripts.pory"
	doublebattle_vs_2 TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyDefeat, TRAINER_SPENCER_MAUVILLE, MauvilleCity_Text_SpencerPostBattle
	goto MauvilleCity_EventScript_BattleWally_13

MauvilleCity_EventScript_BattleWally_17:
# 428 "data/maps/MauvilleCity/scripts.pory"
	doublebattle_vs_2 TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyDefeat, TRAINER_BREN_MAUVILLE, MauvilleCity_Text_BrenPostBattle
	goto MauvilleCity_EventScript_BattleWally_13

MauvilleCity_EventScript_BattleWally_20:
# 433 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, Common_Movement_FaceUp
	goto MauvilleCity_EventScript_BattleWally_18

MauvilleCity_EventScript_BattleWally_21:
# 435 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, Common_Movement_FaceRight
	goto MauvilleCity_EventScript_BattleWally_18


MauvilleCity_EventScript_DeclineWallyBattle::
# 515 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DECLINED_WALLY_BATTLE_MAUVILLE
# 516 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyMyUncleWontKnowImStrong, MSGBOX_DEFAULT
# 517 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_WallyRequestBattleAgain::
# 522 "data/maps/MauvilleCity/scripts.pory"
	applymovement 6, Common_Movement_FacePlayer
# 523 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 524 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyPleaseBattleMe, MSGBOX_YESNO
# 525 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
	end


# 529 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_Rival2WalkToWallyWest:
# 530 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 530 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 531 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 531 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 531 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 532 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_fast_up
	step_end

# 535 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_Rival2WalkToWallySouth:
# 536 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 537 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 537 "data/maps/MauvilleCity/scripts.pory"
	walk_right
	step_end

# 540 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth1:
# 541 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 542 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 542 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 543 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 543 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 543 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 546 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast1:
# 547 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 548 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 548 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 549 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 549 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 549 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 552 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth2:
# 553 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 553 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 553 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 554 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 554 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 554 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 554 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 554 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 554 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 554 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 554 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 555 "data/maps/MauvilleCity/scripts.pory"
	delay_8
	step_end

# 558 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast2:
# 559 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 559 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 559 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 560 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 560 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 560 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 560 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 560 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 560 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 560 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 560 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 561 "data/maps/MauvilleCity/scripts.pory"
	delay_8
	step_end

# 564 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth2:
# 565 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 566 "data/maps/MauvilleCity/scripts.pory"
	delay_8
	step_end

# 569 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast2:
# 570 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 570 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 570 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 571 "data/maps/MauvilleCity/scripts.pory"
	face_left
	step_end

# 574 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitNorth:
# 575 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 576 "data/maps/MauvilleCity/scripts.pory"
	face_left
	step_end

# 579 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitEast:
# 580 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 580 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 581 "data/maps/MauvilleCity/scripts.pory"
	face_left
	step_end

# 584 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast1:
# 585 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 586 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 587 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 588 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 589 "data/maps/MauvilleCity/scripts.pory"
	face_down
# 590 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 591 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 592 "data/maps/MauvilleCity/scripts.pory"
	face_left
	step_end

# 595 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth1:
# 596 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 597 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 598 "data/maps/MauvilleCity/scripts.pory"
	face_right
# 599 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 600 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 601 "data/maps/MauvilleCity/scripts.pory"
	face_down
# 602 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 603 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 604 "data/maps/MauvilleCity/scripts.pory"
	face_left
	step_end

# 607 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth1:
# 608 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 608 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 609 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 609 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 609 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 609 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 612 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast1:
# 613 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 613 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 614 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 614 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 614 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 614 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 617 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerFaceUncleNorth:
# 618 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 619 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 620 "data/maps/MauvilleCity/scripts.pory"
	delay_4
	step_end

# 623 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerFaceUncleEast:
# 624 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 625 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 626 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 627 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
	step_end

# 630 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerNorth:
# 631 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 632 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 632 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 633 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_right
	step_end

# 636 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerEast:
# 637 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 638 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 638 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 639 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
	step_end

# 642 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth2:
# 643 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 643 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 644 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 645 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 645 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 645 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 645 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 645 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 645 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 645 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 645 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 648 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast2:
# 649 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 649 "data/maps/MauvilleCity/scripts.pory"
	walk_left
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
MauvilleCity_Movement_ScottApproachPlayerNorth:
# 655 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 655 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 655 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 655 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 655 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 655 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 656 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 656 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 656 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 656 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 657 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
	step_end

# 660 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerEast:
# 661 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 661 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 661 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 661 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 661 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 662 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 662 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 662 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 662 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 662 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 663 "data/maps/MauvilleCity/scripts.pory"
	walk_up
	step_end

# 666 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitNorth:
# 667 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 667 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 667 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 667 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 667 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 667 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 667 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 667 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 667 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 670 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitEast:
# 671 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 672 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 672 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 672 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 672 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 672 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 672 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 672 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 672 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 672 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

MauvilleCity_EventScript_Wattson::
# 676 "data/maps/MauvilleCity/scripts.pory"
	lock
# 677 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 678 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_ReceivedThunderbolt
# 679 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_EventScript_CompletedNewMauville
# 680 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_BASEMENT_KEY_FROM_WATTSON, MauvilleCity_EventScript_BegunNewMauville
# 681 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonNeedFavorTakeKey, MSGBOX_DEFAULT
# 682 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_BASEMENT_KEY
# 683 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 684 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
# 685 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 686 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_BegunNewMauville::
# 691 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 692 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_CompletedNewMauville::
# 697 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonThanksTakeTM, MSGBOX_DEFAULT
# 698 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_TM_THUNDERBOLT
# 699 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 700 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON
# 701 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 702 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_ReceivedThunderbolt::
# 707 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 708 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_RegisterWallyCall::
# 713 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 714 "data/maps/MauvilleCity/scripts.pory"
	pokenavcall MauvilleCity_Text_WallyPokenavCall
# 715 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 716 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 717 "data/maps/MauvilleCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 718 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RegisteredWally, MSGBOX_DEFAULT
# 719 "data/maps/MauvilleCity/scripts.pory"
	waitfanfare
# 720 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 721 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 722 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
# 723 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 724 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


MauvilleCity_Text_SpencerDontRushHim::
# 99 "data/maps/MauvilleCity/scripts.pory"
	.string "That kid is blocking the way\n"
	.string "into the GYM.\l"
	.string "Seems like he's still working up his\l"
	.string "courage to take on the GYM challenge.\l"
	.string "I get it. I hear WATTSON is no joke!\l"
	.string "I don't want to rush him, so I'll\l"
	.string "just wait my turn.$"

MauvilleCity_Text_BrenDontRushHim::
# 109 "data/maps/MauvilleCity/scripts.pory"
	.string "That kid is blocking the way\n"
	.string "into the GYM.\l"
	.string "Seems like he's still working up his\l"
	.string "courage to take on the GYM challenge.\l"
	.string "I get it. I hear WATTSON is no joke!\l"
	.string "I don't want to rush him, so I'll\l"
	.string "just wait my turn.$"

MauvilleCity_Text_KyleDontRushHim::
# 119 "data/maps/MauvilleCity/scripts.pory"
	.string "That kid is blocking the way\n"
	.string "into the GYM.\l"
	.string "Seems like he's still working up his\l"
	.string "courage to take on the GYM challenge.\l"
	.string "I get it. I hear WATTSON is no joke!\l"
	.string "I don't want to rush him, so I'll\l"
	.string "just wait my turn.$"

MauvilleCity_Text_SpencerPostWally::
# 319 "data/maps/MauvilleCity/scripts.pory"
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
# 329 "data/maps/MauvilleCity/scripts.pory"
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
# 339 "data/maps/MauvilleCity/scripts.pory"
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
# 449 "data/maps/MauvilleCity/scripts.pory"
	.string "Always one step ahead of me, eh?$"

MauvilleCity_Text_BrenPostBattle::
# 453 "data/maps/MauvilleCity/scripts.pory"
	.string "Always one step ahead of me, eh?$"

MauvilleCity_Text_KylePostBattle::
# 457 "data/maps/MauvilleCity/scripts.pory"
	.string "Always one step ahead of me, eh?$"

MauvilleCity_Text_SpencerTeamUpWithWally::
# 461 "data/maps/MauvilleCity/scripts.pory"
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
# 475 "data/maps/MauvilleCity/scripts.pory"
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
# 489 "data/maps/MauvilleCity/scripts.pory"
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
# 503 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Well…\n"
	.string "Um, I guess it couldn't hurt.\p"
	.string "Okay… Yeah!\n"
	.string "That actually sounds fun.$"

MauvilleCity_Text_LetsDoThis::
# 510 "data/maps/MauvilleCity/scripts.pory"
	.string "Let's do this!$"

MauvilleCity_Text_UncleHesTooPeppy::
# 728 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: It's because of POKéMON that\n"
	.string "this boy's got more pep, I suppose…\l"
	.string "But he's become a bit too peppy…$"

MauvilleCity_Text_WallyWantToChallengeGym::
# 734 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Aww, UNCLE, please?\p"
	.string "I want to challenge this GYM and see\n"
	.string "how much better I've become.\p"
	.string "Please? May I, please?$"

MauvilleCity_Text_UncleYourePushingIt::
# 741 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: Now hold on, WALLY.\p"
	.string "Since you started living with POKéMON,\n"
	.string "you have grown quite a lot stronger.\p"
	.string "But don't you think you're pushing it\n"
	.string "to suddenly challenge a GYM?$"

MauvilleCity_Text_WallyWeCanBeatAnyone::
# 749 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: I'm not pushing it.\p"
	.string "If I combine forces with RALTS,\n"
	.string "we can beat anyone!$"

MauvilleCity_Text_WallyWillYouBattleMe::
# 755 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh! Hi, {PLAYER}!\p"
	.string "I've gotten a lot stronger since\n"
	.string "we met.\p"
	.string "{PLAYER}, I want you and my UNCLE to\n"
	.string "understand that.\p"
	.string "{PLAYER}, please, will you have\n"
	.string "a battle with me?$"

MauvilleCity_Text_WallyMyUncleWontKnowImStrong::
# 765 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh… If you won't battle me,\n"
	.string "{PLAYER}, my UNCLE won't know that I've\l"
	.string "become really strong.$"

MauvilleCity_Text_UncleCanYouBattleWally::
# 771 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, was it?\n"
	.string "On WALLY's behalf, can I ask you to\l"
	.string "battle with him just this once?\p"
	.string "I don't think he's going to listen to\n"
	.string "any reason the way he is now.$"

MauvilleCity_Text_WallyPleaseBattleMe::
# 779 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, please!\n"
	.string "Battle with me, please.$"

MauvilleCity_Text_WallyHereICome::
# 784 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, thank you.\p"
	.string "Okay… Here I come!$"

MauvilleCity_Text_WallyDefeat::
# 789 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: … … … … … … …\p"
	.string "… … … … … … … …\p"
	.string "We lost…$"

MauvilleCity_Text_WallyIllGoBackToVerdanturf::
# 795 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: UNCLE…\n"
	.string "I'll go back to VERDANTURF…$"

MauvilleCity_Text_ThankYouNotEnoughToBattle::
# 800 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, {RIVAL2}, thank you.\n"
	.string "Being a TRAINER is tough, isn't it?\p"
	.string "It's not enough just to have POKéMON\n"
	.string "and make them battle. That isn't what\l"
	.string "being a real TRAINER is about.$"

MauvilleCity_Text_UncleNoNeedToBeDown::
# 808 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: WALLY, there's no need to be so\n"
	.string "down on yourself.\p"
	.string "Why, what's keeping you from becoming\n"
	.string "stronger and stronger?\p"
	.string "Come on, let's go home.\n"
	.string "Everyone's waiting for you.$"

MauvilleCity_Text_UncleVisitUsSometime::
# 817 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, it just dawned on me\n"
	.string "that you must be the TRAINER who kept\l"
	.string "an eye out for WALLY when he caught\l"
	.string "his POKéMON.\p"
	.string "Why don't you visit us in VERDANTURF\n"
	.string "sometime?\l"
	.string "I'm sure WALLY would enjoy it.$"

MauvilleCity_Text_WallyPokenavCall::
# 827 "data/maps/MauvilleCity/scripts.pory"
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
# 839 "data/maps/MauvilleCity/scripts.pory"
	.string "Registered WALLY\n"
	.string "in the POKéNAV.$"

MauvilleCity_Text_ScottYouDidntHoldBack::
# 844 "data/maps/MauvilleCity/scripts.pory"
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
# 858 "data/maps/MauvilleCity/scripts.pory"
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
# 874 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Don't you worry about it.\n"
	.string "It won't be a challenge to you.\p"
	.string "The entrance to NEW MAUVILLE is just\n"
	.string "a short SURF away from ROUTE 110.\p"
	.string "That's it, then, you have my trust!\n"
	.string "Wahahahaha!$"

MauvilleCity_Text_WattsonThanksTakeTM::
# 883 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Wahahahaha!\p"
	.string "I knew it, {PLAYER}{KUN}! I knew I'd made\n"
	.string "the right choice asking you!\p"
	.string "This is my thanks--a TM containing\n"
	.string "THUNDERBOLT!\p"
	.string "Go on, you've earned it!$"

MauvilleCity_Text_WattsonYoungTakeCharge::
# 892 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Wahahahaha!\p"
	.string "It pleases me to no end to see\n"
	.string "the young step up and take charge!$"

MauvilleCity_Text_NurseHurtMonBackToHealth::
# 898 "data/maps/MauvilleCity/scripts.pory"
	.string "You know, it's cool to have POKéMON\n"
	.string "battles and stuff…\p"
	.string "But if your POKéMON gets hurt,\n"
	.string "you have to nurse it back to health.$"

MauvilleCity_Text_AllSortsOfPeopleComeThrough::
# 905 "data/maps/MauvilleCity/scripts.pory"
	.string "The roads of this town stretch north\n"
	.string "and south, and east and west.\p"
	.string "Because of that, we get all sorts of\n"
	.string "people coming through.$"

MauvilleCity_Text_RydelVeryGenerous::
# 912 "data/maps/MauvilleCity/scripts.pory"
	.string "Have you been to RYDEL'S CYCLES yet?\p"
	.string "RYDEL, the owner, is a very generous\n"
	.string "man.$"

MauvilleCity_Text_PokemonCanJumpYouOnBike::
# 918 "data/maps/MauvilleCity/scripts.pory"
	.string "Even if you're riding a BIKE,\n"
	.string "wild POKéMON could jump you.$"

MauvilleCity_Text_CitySign::
# 923 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY\n"
	.string "“The bright and shiny city of fun!”$"

MauvilleCity_Text_GymSign::
# 928 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\n"
	.string "LEADER: WATTSON\l"
	.string "“The cheerfully electrifying man!”$"

MauvilleCity_Text_BikeShopSign::
# 934 "data/maps/MauvilleCity/scripts.pory"
	.string "“Ride in gravel and shake up your\n"
	.string "soul!”\l"
	.string "RYDEL'S CYCLES$"

MauvilleCity_Text_GameCornerSign::
# 940 "data/maps/MauvilleCity/scripts.pory"
	.string "“The play spot for all!”\n"
	.string "MAUVILLE GAME CORNER$"

MauvilleCity_Text_ExplainTV::
# 945 "data/maps/MauvilleCity/scripts.pory"
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
# 958 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, have you been checking out TVs?$"
