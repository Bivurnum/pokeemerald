Route103_MapScripts::
# 6 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route103_OnTransition
# 7 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route103_OnLoad
	.byte 0


Route103_OnTransition::
# 11 "data/maps/Route103/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 12 "data/maps/Route103/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
	end


Route103_OnLoad::
# 17 "data/maps/Route103/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, Route103_EventScript_OpenAlteringCave
	end


Route103_EventScript_OpenAlteringCave::
# 22 "data/maps/Route103/scripts.pory"
	setmetatile 45, 5, METATILE_General_CaveEntrance_Top, TRUE
# 23 "data/maps/Route103/scripts.pory"
	setmetatile 45, 6, METATILE_General_CaveEntrance_Bottom, FALSE
	return


Route103_EventScript_Rival::
# 28 "data/maps/Route103/scripts.pory"
	lockall
# 29 "data/maps/Route103/scripts.pory"
	checkfriendchoice
# 30 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, SPENCER, Route103_EventScript_RivalBren
# 31 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, BREN, Route103_EventScript_RivalKyle
# 32 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, KYLE, Route103_EventScript_RivalSpencer
	end


Route103_EventScript_Rival2::
# 37 "data/maps/Route103/scripts.pory"
	lock
# 38 "data/maps/Route103/scripts.pory"
	faceplayer
# 39 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_CantBeatWingull, MSGBOX_DEFAULT
# 40 "data/maps/Route103/scripts.pory"
	closemessage
# 41 "data/maps/Route103/scripts.pory"
	release
	end


Route103_EventScript_RivalBren::
# 46 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrenRoute103Pokemon, MSGBOX_DEFAULT
# 47 "data/maps/Route103/scripts.pory"
	closemessage
# 48 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 49 "data/maps/Route103/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 50 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route103/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 52 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 53 "data/maps/Route103/scripts.pory"
	applymovement 2, Common_Movement_Delay48
# 54 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 55 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrenLetsBattle, MSGBOX_DEFAULT
# 56 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_StartBrenBattle
	end


Route103_EventScript_RivalKyle::
# 61 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_KyleRoute103Pokemon, MSGBOX_DEFAULT
# 62 "data/maps/Route103/scripts.pory"
	closemessage
# 63 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 64 "data/maps/Route103/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 65 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 66 "data/maps/Route103/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 67 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route103/scripts.pory"
	applymovement 2, Common_Movement_Delay48
# 69 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 70 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_KyleLetsBattle, MSGBOX_DEFAULT
# 71 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_StartKyleBattle
	end


Route103_EventScript_RivalSpencer::
# 76 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_SpencerRoute103Pokemon, MSGBOX_DEFAULT
# 77 "data/maps/Route103/scripts.pory"
	closemessage
# 78 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 79 "data/maps/Route103/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 80 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 81 "data/maps/Route103/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 82 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 83 "data/maps/Route103/scripts.pory"
	applymovement 2, Common_Movement_Delay48
# 84 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 85 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_SpencerLetsBattle, MSGBOX_DEFAULT
# 86 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_StartSpencerBattle
	end


# 90 "data/maps/Route103/scripts.pory"

# 91 "data/maps/Route103/scripts.pory"

# 92 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartKyleBattle::
# 93 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_KYLE_ROUTE_103, Route103_Text_KyleDefeated
# 94 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterKyleBattle
# 95 "data/maps/Route103/scripts.pory"
	end
# 96 "data/maps/Route103/scripts.pory"

# 97 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrenBattle::
# 98 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BREN_ROUTE_103, Route103_Text_BrenDefeated
# 99 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrenBattle
# 100 "data/maps/Route103/scripts.pory"
	end
# 101 "data/maps/Route103/scripts.pory"

# 102 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartSpencerBattle::
# 103 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_SPENCER_ROUTE_103, Route103_Text_SpencerDefeated
# 104 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterSpencerBattle
# 105 "data/maps/Route103/scripts.pory"
	end
# 106 "data/maps/Route103/scripts.pory"

# 107 "data/maps/Route103/scripts.pory"
Route103_EventScript_AfterKyleBattle::
# 108 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_KyleTimeToHeadBack, MSGBOX_DEFAULT
# 109 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 110 "data/maps/Route103/scripts.pory"
	end
# 111 "data/maps/Route103/scripts.pory"

# 112 "data/maps/Route103/scripts.pory"
Route103_EventScript_AfterBrenBattle::
# 113 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrenTimeToHeadBack, MSGBOX_DEFAULT
# 114 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 115 "data/maps/Route103/scripts.pory"
	end
# 116 "data/maps/Route103/scripts.pory"

# 117 "data/maps/Route103/scripts.pory"
Route103_EventScript_AfterSpencerBattle::
# 118 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_SpencerTimeToHeadBack, MSGBOX_DEFAULT
# 119 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 120 "data/maps/Route103/scripts.pory"
	end
# 121 "data/maps/Route103/scripts.pory"

# 122 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExit::
# 123 "data/maps/Route103/scripts.pory"
	closemessage
# 124 "data/maps/Route103/scripts.pory"
	switch VAR_FACING
# 125 "data/maps/Route103/scripts.pory"
	case DIR_SOUTH, Route103_EventScript_RivalExitFacingSouth
# 126 "data/maps/Route103/scripts.pory"
	case DIR_NORTH, Route103_EventScript_RivalExitFacingNorth
# 127 "data/maps/Route103/scripts.pory"
	case DIR_WEST, Route103_EventScript_RivalExitFacingEastOrWest
# 128 "data/maps/Route103/scripts.pory"
	case DIR_EAST, Route103_EventScript_RivalExitFacingEastOrWest
# 129 "data/maps/Route103/scripts.pory"
	end

Route103_EventScript_RivalExitFacingNorth::
# 133 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingNorth
# 134 "data/maps/Route103/scripts.pory"
	applymovement 2, Route103_Movement_RivalExitFacingNorth1
# 135 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 136 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 137 "data/maps/Route103/scripts.pory"
	applymovement 2, Route103_Movement_RivalExitFacingNorth2
# 138 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 139 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
	end


Route103_EventScript_RivalExitFacingEastOrWest::
# 144 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingEastOrWest
# 145 "data/maps/Route103/scripts.pory"
	applymovement 2, Route103_Movement_RivalExit1
# 146 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 147 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 148 "data/maps/Route103/scripts.pory"
	applymovement 2, Route103_Movement_RivalExit2
# 149 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 150 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
	end


Route103_EventScript_RivalExitFacingSouth::
# 155 "data/maps/Route103/scripts.pory"
	applymovement 2, Route103_Movement_RivalExit1
# 156 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 157 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 158 "data/maps/Route103/scripts.pory"
	applymovement 2, Route103_Movement_RivalExit2
# 159 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 160 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
	end


Route103_EventScript_RivalEnd::
# 165 "data/maps/Route103/scripts.pory"
	removeobject 2
# 166 "data/maps/Route103/scripts.pory"
	removeobject 21
# 167 "data/maps/Route103/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 4
# 168 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 169 "data/maps/Route103/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
# 170 "data/maps/Route103/scripts.pory"
	setflag FLAG_HIDE_ROUTE_103_RIVAL
# 171 "data/maps/Route103/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 1
# 172 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 173 "data/maps/Route103/scripts.pory"
	savebgm MUS_DUMMY
# 174 "data/maps/Route103/scripts.pory"
	fadedefaultbgm
# 175 "data/maps/Route103/scripts.pory"
	releaseall
	end


Route103_EventScript_Rival1OtherSide::
# 180 "data/maps/Route103/scripts.pory"
	lock
# 181 "data/maps/Route103/scripts.pory"
	applymovement 22, Common_Movement_FacePlayer
# 182 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 183 "data/maps/Route103/scripts.pory"
	compare VAR_TEMP_5, 5
	goto_if_ne Route103_EventScript_Rival1OtherSide_2
# 190 "data/maps/Route103/scripts.pory"
	rival1talk Route103_Text_SpencerLaterTalked, Route103_Text_BrenLaterTalked, Route103_Text_KyleLaterTalked
Route103_EventScript_Rival1OtherSide_1:
# 194 "data/maps/Route103/scripts.pory"
	closemessage
# 195 "data/maps/Route103/scripts.pory"
	applymovement 22, Common_Movement_FaceLeft
# 196 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 197 "data/maps/Route103/scripts.pory"
	release
	end

Route103_EventScript_Rival1OtherSide_2:
# 184 "data/maps/Route103/scripts.pory"
	rival1talk Route103_Text_SpencerLater, Route103_Text_BrenLater, Route103_Text_KyleLater
# 187 "data/maps/Route103/scripts.pory"
	setvar VAR_TEMP_5, 5
	goto Route103_EventScript_Rival1OtherSide_1


# 234 "data/maps/Route103/scripts.pory"

# 235 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth1:
# 236 "data/maps/Route103/scripts.pory"
	walk_left
# 237 "data/maps/Route103/scripts.pory"
	walk_down
# 238 "data/maps/Route103/scripts.pory"
	step_end
# 239 "data/maps/Route103/scripts.pory"

# 240 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth2:
# 241 "data/maps/Route103/scripts.pory"
	jump_2_down
# 242 "data/maps/Route103/scripts.pory"
	delay_16
# 243 "data/maps/Route103/scripts.pory"
	walk_down
# 244 "data/maps/Route103/scripts.pory"
	walk_down
# 245 "data/maps/Route103/scripts.pory"
	walk_down
# 246 "data/maps/Route103/scripts.pory"
	walk_down
# 247 "data/maps/Route103/scripts.pory"
	step_end
# 248 "data/maps/Route103/scripts.pory"

# 249 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingNorth:
# 250 "data/maps/Route103/scripts.pory"
	delay_16
# 251 "data/maps/Route103/scripts.pory"
	delay_4
# 252 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_left
# 253 "data/maps/Route103/scripts.pory"
	delay_16
# 254 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 255 "data/maps/Route103/scripts.pory"
	step_end
# 256 "data/maps/Route103/scripts.pory"

# 257 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit1:
# 258 "data/maps/Route103/scripts.pory"
	walk_down
# 259 "data/maps/Route103/scripts.pory"
	step_end
# 260 "data/maps/Route103/scripts.pory"

# 261 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit2:
# 262 "data/maps/Route103/scripts.pory"
	jump_2_down
# 263 "data/maps/Route103/scripts.pory"
	delay_16
# 264 "data/maps/Route103/scripts.pory"
	walk_down
# 265 "data/maps/Route103/scripts.pory"
	walk_down
# 266 "data/maps/Route103/scripts.pory"
	walk_down
# 267 "data/maps/Route103/scripts.pory"
	step_end
# 268 "data/maps/Route103/scripts.pory"

# 269 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingEastOrWest:
# 270 "data/maps/Route103/scripts.pory"
	delay_16
# 271 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 272 "data/maps/Route103/scripts.pory"
	step_end
# 273 "data/maps/Route103/scripts.pory"

# 274 "data/maps/Route103/scripts.pory"
Route103_EventScript_Boy::
# 275 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShouldHaveBroughtPotion, MSGBOX_NPC
# 276 "data/maps/Route103/scripts.pory"
	end
# 277 "data/maps/Route103/scripts.pory"

# 278 "data/maps/Route103/scripts.pory"
Route103_EventScript_Man::
# 279 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShortcutToOldale, MSGBOX_NPC
# 280 "data/maps/Route103/scripts.pory"
	end
# 281 "data/maps/Route103/scripts.pory"

# 282 "data/maps/Route103/scripts.pory"
Route103_EventScript_RouteSign::
# 283 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RouteSign, MSGBOX_SIGN
# 284 "data/maps/Route103/scripts.pory"
	end
# 285 "data/maps/Route103/scripts.pory"

# 286 "data/maps/Route103/scripts.pory"
Route103_EventScript_Daisy::
# 287 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_DAISY, Route103_Text_DaisyIntro, Route103_Text_DaisyDefeated
# 288 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
# 289 "data/maps/Route103/scripts.pory"
	end
# 290 "data/maps/Route103/scripts.pory"

# 291 "data/maps/Route103/scripts.pory"
Route103_EventScript_Amy::
# 292 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyIntro, Route103_Text_AmyDefeated, Route103_Text_AmyNotEnoughPokemon, Route102_EventScript_AmyRegisterMatchCallAfterBattle
# 293 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 294 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_AmyRematch
# 295 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
# 296 "data/maps/Route103/scripts.pory"
	end
# 297 "data/maps/Route103/scripts.pory"

# 298 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRegisterMatchCallAfterBattle::
# 299 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 300 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 301 "data/maps/Route103/scripts.pory"
	release
# 302 "data/maps/Route103/scripts.pory"
	end
# 303 "data/maps/Route103/scripts.pory"

# 304 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRematch::
# 305 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyRematchIntro, Route103_Text_AmyRematchDefeated, Route103_Text_AmyRematchNotEnoughPokemon
# 306 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
# 307 "data/maps/Route103/scripts.pory"
	end
# 308 "data/maps/Route103/scripts.pory"

# 309 "data/maps/Route103/scripts.pory"
Route103_EventScript_Liv::
# 310 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivIntro, Route103_Text_LivDefeated, Route103_Text_LivNotEnoughPokemon, Route102_EventScript_LivRegisterMatchCallAfterBattle
# 311 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 312 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_LivRematch
# 313 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivPostBattle, MSGBOX_AUTOCLOSE
# 314 "data/maps/Route103/scripts.pory"
	end
# 315 "data/maps/Route103/scripts.pory"

# 316 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRegisterMatchCallAfterBattle::
# 317 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 318 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 319 "data/maps/Route103/scripts.pory"
	release
# 320 "data/maps/Route103/scripts.pory"
	end
# 321 "data/maps/Route103/scripts.pory"

# 322 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRematch::
# 323 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivRematchIntro, Route103_Text_LivRematchDefeated, Route103_Text_LivRematchNotEnoughPokemon
# 324 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
# 325 "data/maps/Route103/scripts.pory"
	end
# 326 "data/maps/Route103/scripts.pory"

# 327 "data/maps/Route103/scripts.pory"
Route103_EventScript_Andrew::
# 328 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ANDREW, Route103_Text_AndrewIntro, Route103_Text_AndrewDefeated
# 329 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
# 330 "data/maps/Route103/scripts.pory"
	end
# 331 "data/maps/Route103/scripts.pory"

# 332 "data/maps/Route103/scripts.pory"
Route103_EventScript_Miguel::
# 333 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MIGUEL_1, Route103_Text_MiguelIntro, Route103_Text_MiguelDefeated, Route102_EventScript_MiguelRegisterMatchCallAfterBattle
# 334 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 335 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route103_EventScript_MiguelRematch
# 336 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelPostBattle, MSGBOX_DEFAULT
# 337 "data/maps/Route103/scripts.pory"
	release
# 338 "data/maps/Route103/scripts.pory"
	end
# 339 "data/maps/Route103/scripts.pory"

# 340 "data/maps/Route103/scripts.pory"
Route102_EventScript_MiguelRegisterMatchCallAfterBattle::
# 341 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 342 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 343 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRegister, MSGBOX_DEFAULT
# 344 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_MIGUEL_1
# 345 "data/maps/Route103/scripts.pory"
	release
# 346 "data/maps/Route103/scripts.pory"
	end
# 347 "data/maps/Route103/scripts.pory"

# 348 "data/maps/Route103/scripts.pory"
Route103_EventScript_MiguelRematch::
# 349 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_Text_MiguelRematchIntro, Route103_Text_MiguelRematchDefeated
# 350 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
# 351 "data/maps/Route103/scripts.pory"
	end
# 352 "data/maps/Route103/scripts.pory"

# 353 "data/maps/Route103/scripts.pory"
Route103_EventScript_Marcos::
# 354 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MARCOS, Route103_Text_MarcosIntro, Route103_Text_MarcosDefeated
# 355 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 356 "data/maps/Route103/scripts.pory"
	end
# 357 "data/maps/Route103/scripts.pory"

# 358 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rhett::
# 359 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_RHETT, Route103_Text_RhettIntro, Route103_Text_RhettDefeated
# 360 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
# 361 "data/maps/Route103/scripts.pory"
	end
# 362 "data/maps/Route103/scripts.pory"

# 363 "data/maps/Route103/scripts.pory"
Route103_EventScript_Pete::
# 364 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_PETE, Route103_Text_PeteIntro, Route103_Text_PeteDefeated
# 365 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
# 366 "data/maps/Route103/scripts.pory"
	end
# 367 "data/maps/Route103/scripts.pory"

# 368 "data/maps/Route103/scripts.pory"
Route103_EventScript_Isabelle::
# 369 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ISABELLE, Route103_Text_IsabelleIntro, Route103_Text_IsabelleDefeated
# 370 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
# 371 "data/maps/Route103/scripts.pory"
	end
# 372 "data/maps/Route103/scripts.pory"

# 373 "data/maps/Route103/scripts.pory"
Route103_Text_KyleRoute103Pokemon:
# 374 "data/maps/Route103/scripts.pory"
	.string "KYLE: Let's see… Is PIKACHU\n"
# 375 "data/maps/Route103/scripts.pory"
	.string "found on this route?$"
# 376 "data/maps/Route103/scripts.pory"

# 377 "data/maps/Route103/scripts.pory"
Route103_Text_KyleLetsBattle:
# 378 "data/maps/Route103/scripts.pory"
	.string "Oh, hi, {PLAYER}{KUN}!\p"
# 379 "data/maps/Route103/scripts.pory"
	.string "…Oh, I see you finally got\n"
# 380 "data/maps/Route103/scripts.pory"
	.string "your POKéMON from PROF. BIRCH.\p"
# 381 "data/maps/Route103/scripts.pory"
	.string "Since we're here, let's have a quick\n"
# 382 "data/maps/Route103/scripts.pory"
	.string "battle!\p"
# 383 "data/maps/Route103/scripts.pory"
	.string "I'll give you a taste of what being\n"
# 384 "data/maps/Route103/scripts.pory"
	.string "a real TRAINER is like.$"
# 385 "data/maps/Route103/scripts.pory"

# 386 "data/maps/Route103/scripts.pory"
Route103_Text_KyleDefeated:
# 387 "data/maps/Route103/scripts.pory"
	.string "Wow! That's great!\n"
# 388 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}{KUN}, you're pretty good!$"
# 389 "data/maps/Route103/scripts.pory"

# 390 "data/maps/Route103/scripts.pory"
Route103_Text_KyleTimeToHeadBack:
# 391 "data/maps/Route103/scripts.pory"
	.string "KYLE: That's really impressive!\n"
# 392 "data/maps/Route103/scripts.pory"
	.string "I mean, you just got that POKéMON,\l"
# 393 "data/maps/Route103/scripts.pory"
	.string "but it already likes you.\p"
# 394 "data/maps/Route103/scripts.pory"
	.string "You might be able to befriend any\n"
# 395 "data/maps/Route103/scripts.pory"
	.string "kind of POKéMON easily.\p"
# 396 "data/maps/Route103/scripts.pory"
	.string "What was that? PROF. BIRCH mentioned\n"
# 397 "data/maps/Route103/scripts.pory"
	.string "that he wanted to speak to the three\l"
# 398 "data/maps/Route103/scripts.pory"
	.string "of us once we all had POKéMON?\p"
# 399 "data/maps/Route103/scripts.pory"
	.string "Then, let's head back to the LAB!$"
# 400 "data/maps/Route103/scripts.pory"

# 401 "data/maps/Route103/scripts.pory"
Route103_Text_BrenRoute103Pokemon:
# 402 "data/maps/Route103/scripts.pory"
	.string "BREN: It's ok, PIPLUP.\n"
# 403 "data/maps/Route103/scripts.pory"
	.string "we'll win the next one…$"
# 404 "data/maps/Route103/scripts.pory"

# 405 "data/maps/Route103/scripts.pory"
Route103_Text_BrenLetsBattle:
# 406 "data/maps/Route103/scripts.pory"
	.string "Hey, it's {PLAYER}!\n"
# 407 "data/maps/Route103/scripts.pory"
	.string "What kind of POKéMON did you get?\p"
# 408 "data/maps/Route103/scripts.pory"
	.string "Since we're here, how about a\n"
# 409 "data/maps/Route103/scripts.pory"
	.string "little battle?\p"
# 410 "data/maps/Route103/scripts.pory"
	.string "I won't go easy on you!$"
# 411 "data/maps/Route103/scripts.pory"

# 412 "data/maps/Route103/scripts.pory"
Route103_Text_BrenDefeated:
# 413 "data/maps/Route103/scripts.pory"
	.string "Huh, {PLAYER}, you're not too shabby.$"
# 414 "data/maps/Route103/scripts.pory"

# 415 "data/maps/Route103/scripts.pory"
Route103_Text_BrenTimeToHeadBack:
# 416 "data/maps/Route103/scripts.pory"
	.string "BREN: Wow! You sure rocked it!\n"
# 417 "data/maps/Route103/scripts.pory"
	.string "Here I had a head start and I\l"
# 418 "data/maps/Route103/scripts.pory"
	.string "still have to play catch up.\p"
# 419 "data/maps/Route103/scripts.pory"
	.string "Don't worry. Next time we'll be\n"
# 420 "data/maps/Route103/scripts.pory"
	.string "ready for you!\p"
# 421 "data/maps/Route103/scripts.pory"
	.string "Oh? The PROF. wants us back at\n"
# 422 "data/maps/Route103/scripts.pory"
	.string "the lab?\p"
# 423 "data/maps/Route103/scripts.pory"
	.string "Well, what are we waiting for?$"
# 424 "data/maps/Route103/scripts.pory"

# 425 "data/maps/Route103/scripts.pory"
Route103_Text_SpencerRoute103Pokemon:
# 426 "data/maps/Route103/scripts.pory"
	.string "SPENCER: Man, POTIONS are\n"
# 427 "data/maps/Route103/scripts.pory"
	.string "pretty easy to use, huh…$"
# 428 "data/maps/Route103/scripts.pory"

# 429 "data/maps/Route103/scripts.pory"
Route103_Text_SpencerLetsBattle:
# 430 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}! Hi!\p"
# 431 "data/maps/Route103/scripts.pory"
	.string "Glad to see you made it out\n"
# 432 "data/maps/Route103/scripts.pory"
	.string "here in one piece.\p"
# 433 "data/maps/Route103/scripts.pory"
	.string "I hope you came prepared,\n"
# 434 "data/maps/Route103/scripts.pory"
	.string "because it's battle time!\p"
# 435 "data/maps/Route103/scripts.pory"
	.string "Let's go!$"
# 436 "data/maps/Route103/scripts.pory"

# 437 "data/maps/Route103/scripts.pory"
Route103_Text_SpencerDefeated:
# 438 "data/maps/Route103/scripts.pory"
	.string "Way to go, {PLAYER}!$"
# 439 "data/maps/Route103/scripts.pory"

# 440 "data/maps/Route103/scripts.pory"
Route103_Text_SpencerTimeToHeadBack:
# 441 "data/maps/Route103/scripts.pory"
	.string "SPENCER: That was a great battle!\n"
# 442 "data/maps/Route103/scripts.pory"
	.string "You and your POKéMON are in\l"
# 443 "data/maps/Route103/scripts.pory"
	.string "perfect sync.\p"
# 444 "data/maps/Route103/scripts.pory"
	.string "I should expect nothing less from\n"
# 445 "data/maps/Route103/scripts.pory"
	.string "the son of a GYM LEADER.\p"
# 446 "data/maps/Route103/scripts.pory"
	.string "Huh? You're saying we should go back\n"
# 447 "data/maps/Route103/scripts.pory"
	.string "to the lab? Leave it to that\l"
# 448 "data/maps/Route103/scripts.pory"
	.string "scatterbrained PROF. to\l"
# 449 "data/maps/Route103/scripts.pory"
	.string "forget something.\p"
# 450 "data/maps/Route103/scripts.pory"
	.string "OK! I'll meet you there!$"
# 451 "data/maps/Route103/scripts.pory"

# 452 "data/maps/Route103/scripts.pory"
Route103_Text_ShouldHaveBroughtPotion:
# 453 "data/maps/Route103/scripts.pory"
	.string "My POKéMON is staggeringly tired…\n"
# 454 "data/maps/Route103/scripts.pory"
	.string "I should have brought a POTION…$"
# 455 "data/maps/Route103/scripts.pory"

# 456 "data/maps/Route103/scripts.pory"
Route103_Text_ShortcutToOldale:
# 457 "data/maps/Route103/scripts.pory"
	.string "If you cross the sea from here,\n"
# 458 "data/maps/Route103/scripts.pory"
	.string "it'll be a shortcut to OLDALE TOWN.\p"
# 459 "data/maps/Route103/scripts.pory"
	.string "Fufufu, that's useful, isn't it?$"
# 460 "data/maps/Route103/scripts.pory"

# 461 "data/maps/Route103/scripts.pory"
Route103_Text_RouteSign:
# 462 "data/maps/Route103/scripts.pory"
	.string "ROUTE 103\n"
# 463 "data/maps/Route103/scripts.pory"
	.string "{DOWN_ARROW} OLDALE TOWN$"

Route103_Text_SpencerLater::
# 201 "data/maps/Route103/scripts.pory"
	.string "Can you believe this is the same ROUTE\n"
	.string "where we first battled each other?\l"
	.string "Just on the other side of the water.\l"
	.string "Seems like so long ago, though I know\l"
	.string "most of our journey is still ahead of us.$"

Route103_Text_BrenLater::
# 207 "data/maps/Route103/scripts.pory"
	.string "Can you believe this is the same ROUTE\n"
	.string "where we first battled each other?\l"
	.string "Just on the other side of the water.\l"
	.string "Seems like so long ago, though I know\l"
	.string "most of our journey is still ahead of us.$"

Route103_Text_KyleLater::
# 213 "data/maps/Route103/scripts.pory"
	.string "Can you believe this is the same ROUTE\n"
	.string "where we first battled each other?\l"
	.string "Just on the other side of the water.\l"
	.string "Seems like so long ago, though I know\l"
	.string "most of our journey is still ahead of us.$"

Route103_Text_SpencerLaterTalked::
# 219 "data/maps/Route103/scripts.pory"
	.string "It's kinda nice to look back on how far\n"
	.string "we've come.\p"
	.string "And speculate on what lies ahead.$"

Route103_Text_BrenLaterTalked::
# 224 "data/maps/Route103/scripts.pory"
	.string "It's kinda nice to look back on how far\n"
	.string "we've come.\p"
	.string "And speculate on what lies ahead.$"

Route103_Text_KyleLaterTalked::
# 229 "data/maps/Route103/scripts.pory"
	.string "It's kinda nice to look back on how far\n"
	.string "we've come.\p"
	.string "And speculate on what lies ahead.$"

Route103_Text_CantBeatWingull::
# 467 "data/maps/Route103/scripts.pory"
	.string "Darn.\p"
	.string "I'm really having trouble\n"
	.string "beating WINGULL in battle.$"
