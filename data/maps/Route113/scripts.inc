# 4 "data/maps/Route113/scripts.pory"

# 5 "data/maps/Route113/scripts.pory"
.set LOCALID_RIVAL2, 17
# 6 "data/maps/Route113/scripts.pory"
.set LOCALID_RIVAL1, 19

Route113_MapScripts::
# 9 "data/maps/Route113/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route113_MapScripts_MAP_SCRIPT_ON_RESUME
# 12 "data/maps/Route113/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route113_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 17 "data/maps/Route113/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route113_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route113_MapScripts_MAP_SCRIPT_ON_RESUME:
# 10 "data/maps/Route113/scripts.pory"
	setstepcallback STEP_CB_ASH
	return

Route113_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 13 "data/maps/Route113/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 14 "data/maps/Route113/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 15 "data/maps/Route113/scripts.pory"
	call Route113_EventScript_CheckSetAshWeather
	return

Route113_MapScripts_MAP_SCRIPT_ON_LOAD:
# 18 "data/maps/Route113/scripts.pory"
	goto_if_unset FLAG_HIDE_ROUTE_113_RIVAL1, Route113_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Route113_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 19 "data/maps/Route113/scripts.pory"
	call Route113_EventScript_SetRival1Path
	return


Route113_EventScript_CheckSetAshWeather::
# 25 "data/maps/Route113/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 26 "data/maps/Route113/scripts.pory"
	goto_if_lt VAR_TEMP_0, 19, Route113_EventScript_DontSetAshWeather
# 27 "data/maps/Route113/scripts.pory"
	goto_if_gt VAR_TEMP_0, 84, Route113_EventScript_DontSetAshWeather
# 28 "data/maps/Route113/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
	return


Route113_EventScript_DontSetAshWeather::
	return


Route113_EventScript_SetRival1Path::
# 37 "data/maps/Route113/scripts.pory"
	setmetatile 83, 9, 0x212, FALSE
# 38 "data/maps/Route113/scripts.pory"
	setmetatile 82, 9, 0x212, FALSE
# 39 "data/maps/Route113/scripts.pory"
	setmetatile 82, 8, 0x212, FALSE
# 40 "data/maps/Route113/scripts.pory"
	setmetatile 81, 8, 0x212, FALSE
# 41 "data/maps/Route113/scripts.pory"
	setmetatile 81, 7, 0x212, FALSE
# 42 "data/maps/Route113/scripts.pory"
	setmetatile 81, 6, 0x212, FALSE
# 43 "data/maps/Route113/scripts.pory"
	setmetatile 81, 5, 0x212, FALSE
	return


# 46 "data/maps/Route113/scripts.pory"

# 47 "data/maps/Route113/scripts.pory"
Route113_EventScript_Gentleman::
# 48 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_AshCanBeFashionedIntoGlass, MSGBOX_NPC
# 49 "data/maps/Route113/scripts.pory"
	end
# 50 "data/maps/Route113/scripts.pory"

# 51 "data/maps/Route113/scripts.pory"
Route113_EventScript_NinjaBoy::
# 52 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_FunWalkingThroughAsh, MSGBOX_NPC
# 53 "data/maps/Route113/scripts.pory"
	end
# 54 "data/maps/Route113/scripts.pory"

# 55 "data/maps/Route113/scripts.pory"
Route113_EventScript_RouteSign111::
# 56 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_RouteSign111, MSGBOX_SIGN
# 57 "data/maps/Route113/scripts.pory"
	end
# 58 "data/maps/Route113/scripts.pory"

# 59 "data/maps/Route113/scripts.pory"
Route113_EventScript_RouteSignFallarbor::
# 60 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_RouteSignFallarbor, MSGBOX_SIGN
# 61 "data/maps/Route113/scripts.pory"
	end
# 62 "data/maps/Route113/scripts.pory"

# 63 "data/maps/Route113/scripts.pory"
Route113_EventScript_GlassWorkshopSign::
# 64 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_GlassWorkshopSign, MSGBOX_SIGN
# 65 "data/maps/Route113/scripts.pory"
	end
# 66 "data/maps/Route113/scripts.pory"

# 67 "data/maps/Route113/scripts.pory"
Route113_EventScript_TrainerTipsRegisterKeyItems::
# 68 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_TrainerTipsRegisterKeyItems, MSGBOX_SIGN
# 69 "data/maps/Route113/scripts.pory"
	end
# 70 "data/maps/Route113/scripts.pory"

# 71 "data/maps/Route113/scripts.pory"
Route113_EventScript_Jaylen::
# 72 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_JAYLEN, Route113_Text_JaylenIntro, Route113_Text_JaylenDefeat
# 73 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_JaylenPostBattle, MSGBOX_AUTOCLOSE
# 74 "data/maps/Route113/scripts.pory"
	end
# 75 "data/maps/Route113/scripts.pory"

# 76 "data/maps/Route113/scripts.pory"
Route113_EventScript_Dillon::
# 77 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_DILLON, Route113_Text_DillonIntro, Route113_Text_DillonDefeat
# 78 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_DillonPostBattle, MSGBOX_AUTOCLOSE
# 79 "data/maps/Route113/scripts.pory"
	end
# 80 "data/maps/Route113/scripts.pory"

# 81 "data/maps/Route113/scripts.pory"
Route113_EventScript_Madeline::
# 82 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_MADELINE_1, Route113_Text_MadelineIntro, Route113_Text_MadelineDefeat, Route113_EventScript_RegisterMadeline
# 83 "data/maps/Route113/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 84 "data/maps/Route113/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route113_EventScript_RematchMadeline
# 85 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_MadelinePostBattle, MSGBOX_DEFAULT
# 86 "data/maps/Route113/scripts.pory"
	release
# 87 "data/maps/Route113/scripts.pory"
	end
# 88 "data/maps/Route113/scripts.pory"

# 89 "data/maps/Route113/scripts.pory"
Route113_EventScript_RegisterMadeline::
# 90 "data/maps/Route113/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 91 "data/maps/Route113/scripts.pory"
	waitmovement 0
# 92 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_MadelineRegister, MSGBOX_DEFAULT
# 93 "data/maps/Route113/scripts.pory"
	register_matchcall TRAINER_MADELINE_1
# 94 "data/maps/Route113/scripts.pory"
	release
# 95 "data/maps/Route113/scripts.pory"
	end
# 96 "data/maps/Route113/scripts.pory"

# 97 "data/maps/Route113/scripts.pory"
Route113_EventScript_RematchMadeline::
# 98 "data/maps/Route113/scripts.pory"
	trainerbattle_rematch TRAINER_MADELINE_1, Route113_Text_MadelineRematchIntro, Route113_Text_MadelineRematchDefeat
# 99 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_MadelinePostRematch, MSGBOX_AUTOCLOSE
# 100 "data/maps/Route113/scripts.pory"
	end
# 101 "data/maps/Route113/scripts.pory"

# 102 "data/maps/Route113/scripts.pory"
Route113_EventScript_Lao::
# 103 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_LAO_1, Route113_Text_LaoIntro, Route113_Text_LaoDefeat, Route113_EventScript_RegisterLao
# 104 "data/maps/Route113/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 105 "data/maps/Route113/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route113_EventScript_RematchLao
# 106 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LaoPostBattle, MSGBOX_DEFAULT
# 107 "data/maps/Route113/scripts.pory"
	release
# 108 "data/maps/Route113/scripts.pory"
	end
# 109 "data/maps/Route113/scripts.pory"

# 110 "data/maps/Route113/scripts.pory"
Route113_EventScript_RegisterLao::
# 111 "data/maps/Route113/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 112 "data/maps/Route113/scripts.pory"
	waitmovement 0
# 113 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LaoRegister, MSGBOX_DEFAULT
# 114 "data/maps/Route113/scripts.pory"
	register_matchcall TRAINER_LAO_1
# 115 "data/maps/Route113/scripts.pory"
	release
# 116 "data/maps/Route113/scripts.pory"
	end
# 117 "data/maps/Route113/scripts.pory"

# 118 "data/maps/Route113/scripts.pory"
Route113_EventScript_RematchLao::
# 119 "data/maps/Route113/scripts.pory"
	trainerbattle_rematch TRAINER_LAO_1, Route113_Text_LaoRematchIntro, Route113_Text_LaoRematchDefeat
# 120 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LaoPostRematch, MSGBOX_AUTOCLOSE
# 121 "data/maps/Route113/scripts.pory"
	end
# 122 "data/maps/Route113/scripts.pory"

# 123 "data/maps/Route113/scripts.pory"
Route113_EventScript_Lung::
# 124 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_LUNG, Route113_Text_LungIntro, Route113_Text_LungDefeat
# 125 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LungPostBattle, MSGBOX_AUTOCLOSE
# 126 "data/maps/Route113/scripts.pory"
	end
# 127 "data/maps/Route113/scripts.pory"

# 128 "data/maps/Route113/scripts.pory"
Route113_EventScript_Tori::
# 129 "data/maps/Route113/scripts.pory"
	trainerbattle_double TRAINER_TORI_AND_TIA, Route113_Text_ToriIntro, Route113_Text_ToriDefeat, Route113_Text_ToriNotEnoughMons
# 130 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_ToriPostBattle, MSGBOX_AUTOCLOSE
# 131 "data/maps/Route113/scripts.pory"
	end
# 132 "data/maps/Route113/scripts.pory"

# 133 "data/maps/Route113/scripts.pory"
Route113_EventScript_Tia::
# 134 "data/maps/Route113/scripts.pory"
	trainerbattle_double TRAINER_TORI_AND_TIA, Route113_Text_TiaIntro, Route113_Text_TiaDefeat, Route113_Text_TiaNotEnoughMons
# 135 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_TiaPostBattle, MSGBOX_AUTOCLOSE
# 136 "data/maps/Route113/scripts.pory"
	end
# 137 "data/maps/Route113/scripts.pory"

# 138 "data/maps/Route113/scripts.pory"
Route113_EventScript_Sophie::
# 139 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_SOPHIE, Route113_Text_SophieIntro, Route113_Text_SophieDefeat
# 140 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_SophiePostBattle, MSGBOX_AUTOCLOSE
# 141 "data/maps/Route113/scripts.pory"
	end
# 142 "data/maps/Route113/scripts.pory"

# 143 "data/maps/Route113/scripts.pory"
Route113_EventScript_Coby::
# 144 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_COBY, Route113_Text_CobyIntro, Route113_Text_CobyDefeat
# 145 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_CobyPostBattle, MSGBOX_AUTOCLOSE
# 146 "data/maps/Route113/scripts.pory"
	end
# 147 "data/maps/Route113/scripts.pory"

# 148 "data/maps/Route113/scripts.pory"
Route113_EventScript_Lawrence::
# 149 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_LAWRENCE, Route113_Text_LawrenceIntro, Route113_Text_LawrenceDefeat
# 150 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LawrencePostBattle, MSGBOX_AUTOCLOSE
# 151 "data/maps/Route113/scripts.pory"
	end
# 152 "data/maps/Route113/scripts.pory"

# 153 "data/maps/Route113/scripts.pory"
Route113_EventScript_Wyatt::
# 154 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_WYATT, Route113_Text_WyattIntro, Route113_Text_WyattDefeat
# 155 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_WyattPostBattle, MSGBOX_AUTOCLOSE
# 156 "data/maps/Route113/scripts.pory"
	end

Route113_EventScript_Rival1::
# 160 "data/maps/Route113/scripts.pory"
	lock
# 161 "data/maps/Route113/scripts.pory"
	applymovement 19, Common_Movement_FacePlayer
# 162 "data/maps/Route113/scripts.pory"
	waitmovement 0
# 163 "data/maps/Route113/scripts.pory"
	compare VAR_TEMP_2, 5
	goto_if_ne Route113_EventScript_Rival1_2
# 170 "data/maps/Route113/scripts.pory"
	rival1talk Route113_Text_SpencerNatureNeverCeases, Route113_Text_BrenNatureNeverCeases, Route113_Text_KyleNatureNeverCeases
Route113_EventScript_Rival1_1:
# 174 "data/maps/Route113/scripts.pory"
	closemessage
# 175 "data/maps/Route113/scripts.pory"
	applymovement 19, Common_Movement_FaceOriginalDirection
# 176 "data/maps/Route113/scripts.pory"
	waitmovement 0
# 177 "data/maps/Route113/scripts.pory"
	release
	end

Route113_EventScript_Rival1_2:
# 164 "data/maps/Route113/scripts.pory"
	rival1talk Route113_Text_SpencerLikeItsSnowing, Route113_Text_BrenLikeItsSnowing, Route113_Text_KyleLikeItsSnowing
# 167 "data/maps/Route113/scripts.pory"
	setvar VAR_TEMP_2, 5
	goto Route113_EventScript_Rival1_1


Route113_EventScript_RevealRival2Trigger::
# 182 "data/maps/Route113/scripts.pory"
	lock
# 183 "data/maps/Route113/scripts.pory"
	removeobject 17
# 184 "data/maps/Route113/scripts.pory"
	setobjectmovementtype 17, MOVEMENT_TYPE_BURIED
# 185 "data/maps/Route113/scripts.pory"
	addobject 17
# 186 "data/maps/Route113/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_113_RIVAL2
# 187 "data/maps/Route113/scripts.pory"
	getplayerxy VAR_0x8003, VAR_0x8004
# 188 "data/maps/Route113/scripts.pory"
	compare VAR_0x8003, 30
	goto_if_eq Route113_EventScript_RevealRival2Trigger_2
# 192 "data/maps/Route113/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
Route113_EventScript_RevealRival2Trigger_1:
# 194 "data/maps/Route113/scripts.pory"
	applymovement 17, Route113_Movement_Rival2Reveal
# 195 "data/maps/Route113/scripts.pory"
	waitmovement 0
# 196 "data/maps/Route113/scripts.pory"
	rival2talk Route113_Text_SpencerDidIStartleYou, Route113_Text_BrenDidIStartleYou, Route113_Text_KyleDidIStartleYou
# 199 "data/maps/Route113/scripts.pory"
	closemessage
# 200 "data/maps/Route113/scripts.pory"
	setvar VAR_BURIED_RIVAL2, 1
# 201 "data/maps/Route113/scripts.pory"
	checkfriendchoice
# 202 "data/maps/Route113/scripts.pory"
	switch VAR_RESULT
# 203 "data/maps/Route113/scripts.pory"
	case SPENCER, Route113_EventScript_RevealRival2Trigger_7
# 205 "data/maps/Route113/scripts.pory"
	case BREN, Route113_EventScript_RevealRival2Trigger_8
# 207 "data/maps/Route113/scripts.pory"
	case KYLE, Route113_EventScript_RevealRival2Trigger_9
Route113_EventScript_RevealRival2Trigger_5:
# 210 "data/maps/Route113/scripts.pory"
	rival2talk Route113_Text_SpencerPracticeMore, Route113_Text_BrenPracticeMore, Route113_Text_KylePracticeMore
# 213 "data/maps/Route113/scripts.pory"
	closemessage
# 214 "data/maps/Route113/scripts.pory"
	call Route113_EventScript_Rival2JumpBackIn
# 215 "data/maps/Route113/scripts.pory"
	setvar VAR_BURIED_RIVAL2, 1
# 216 "data/maps/Route113/scripts.pory"
	release
	end

Route113_EventScript_RevealRival2Trigger_2:
# 189 "data/maps/Route113/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto Route113_EventScript_RevealRival2Trigger_1

Route113_EventScript_RevealRival2Trigger_7:
# 204 "data/maps/Route113/scripts.pory"
	trainerbattle_no_intro TRAINER_KYLE_NEAR_FALLARBOR, Route113_Text_KyleDefeated
	goto Route113_EventScript_RevealRival2Trigger_5

Route113_EventScript_RevealRival2Trigger_8:
# 206 "data/maps/Route113/scripts.pory"
	trainerbattle_no_intro TRAINER_SPENCER_NEAR_FALLARBOR, Route113_Text_SpencerDefeated
	goto Route113_EventScript_RevealRival2Trigger_5

Route113_EventScript_RevealRival2Trigger_9:
# 208 "data/maps/Route113/scripts.pory"
	trainerbattle_no_intro TRAINER_BREN_NEAR_FALLARBOR, Route113_Text_BrenDefeated
	goto Route113_EventScript_RevealRival2Trigger_5


Route113_EventScript_Rival2::
# 221 "data/maps/Route113/scripts.pory"
	lock
# 222 "data/maps/Route113/scripts.pory"
	removeobject 17
# 223 "data/maps/Route113/scripts.pory"
	setobjectmovementtype 17, MOVEMENT_TYPE_BURIED
# 224 "data/maps/Route113/scripts.pory"
	addobject 17
# 225 "data/maps/Route113/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_113_RIVAL2
# 226 "data/maps/Route113/scripts.pory"
	applymovement 17, Route113_Movement_Rival2Reveal
# 227 "data/maps/Route113/scripts.pory"
	waitmovement 0
# 228 "data/maps/Route113/scripts.pory"
	rival2talk Route113_Text_SpencerArtNotScience, Route113_Text_BrenArtNotScience, Route113_Text_KyleArtNotScience
# 231 "data/maps/Route113/scripts.pory"
	closemessage
# 232 "data/maps/Route113/scripts.pory"
	call Route113_EventScript_Rival2JumpBackIn
# 233 "data/maps/Route113/scripts.pory"
	release
	end


Route113_EventScript_Rival2JumpBackIn::
# 238 "data/maps/Route113/scripts.pory"
	getplayerxy VAR_0x8001, VAR_0x8002
# 239 "data/maps/Route113/scripts.pory"
	compare VAR_0x8001, 28
	goto_if_eq Route113_EventScript_Rival2JumpBackIn_2
# 242 "data/maps/Route113/scripts.pory"
	compare VAR_0x8001, 29
	goto_if_eq Route113_EventScript_Rival2JumpBackIn_3
# 251 "data/maps/Route113/scripts.pory"
	applymovement 17, Route113_Movement_Rival2JumpBackInRight
Route113_EventScript_Rival2JumpBackIn_1:
# 253 "data/maps/Route113/scripts.pory"
	waitmovement 0
# 254 "data/maps/Route113/scripts.pory"
	setobjectmovementtype 17, MOVEMENT_TYPE_INVISIBLE
	return

Route113_EventScript_Rival2JumpBackIn_2:
# 240 "data/maps/Route113/scripts.pory"
	applymovement 17, Route113_Movement_Rival2JumpBackInLeft
	goto Route113_EventScript_Rival2JumpBackIn_1

Route113_EventScript_Rival2JumpBackIn_3:
# 243 "data/maps/Route113/scripts.pory"
	compare VAR_0x8002, 5
	goto_if_eq Route113_EventScript_Rival2JumpBackIn_7
# 247 "data/maps/Route113/scripts.pory"
	applymovement 17, Route113_Movement_Rival2JumpBackInDown
	goto Route113_EventScript_Rival2JumpBackIn_1

Route113_EventScript_Rival2JumpBackIn_7:
# 244 "data/maps/Route113/scripts.pory"
	applymovement 17, Route113_Movement_Rival2JumpBackInUp
	goto Route113_EventScript_Rival2JumpBackIn_1


# 258 "data/maps/Route113/scripts.pory"
Route113_Movement_Rival2Reveal:
# 259 "data/maps/Route113/scripts.pory"
	face_player
# 260 "data/maps/Route113/scripts.pory"
	reveal_trainer
	step_end

# 263 "data/maps/Route113/scripts.pory"
Route113_Movement_Rival2JumpBackInUp:
# 264 "data/maps/Route113/scripts.pory"
	jump_in_place_up
# 265 "data/maps/Route113/scripts.pory"
	set_invisible
	step_end

# 268 "data/maps/Route113/scripts.pory"
Route113_Movement_Rival2JumpBackInDown:
# 269 "data/maps/Route113/scripts.pory"
	jump_in_place_down
# 270 "data/maps/Route113/scripts.pory"
	set_invisible
	step_end

# 273 "data/maps/Route113/scripts.pory"
Route113_Movement_Rival2JumpBackInRight:
# 274 "data/maps/Route113/scripts.pory"
	jump_in_place_right
# 275 "data/maps/Route113/scripts.pory"
	set_invisible
	step_end

# 278 "data/maps/Route113/scripts.pory"
Route113_Movement_Rival2JumpBackInLeft:
# 279 "data/maps/Route113/scripts.pory"
	jump_in_place_left
# 280 "data/maps/Route113/scripts.pory"
	set_invisible
	step_end

# 376 "data/maps/Route113/scripts.pory"

# 377 "data/maps/Route113/scripts.pory"
Route113_Text_AshCanBeFashionedIntoGlass:
# 378 "data/maps/Route113/scripts.pory"
	.string "Wahahaha! Today's technology is a\n"
# 379 "data/maps/Route113/scripts.pory"
	.string "wondrous thing!\p"
# 380 "data/maps/Route113/scripts.pory"
	.string "Take this volcanic ash here.\n"
# 381 "data/maps/Route113/scripts.pory"
	.string "It can be fashioned into glass.$"
# 382 "data/maps/Route113/scripts.pory"

# 383 "data/maps/Route113/scripts.pory"
Route113_Text_FunWalkingThroughAsh:
# 384 "data/maps/Route113/scripts.pory"
	.string "It's fun walking through the volcano's\n"
# 385 "data/maps/Route113/scripts.pory"
	.string "ashes on the ground and grass.\p"
# 386 "data/maps/Route113/scripts.pory"
	.string "You can see where you walked--it's\n"
# 387 "data/maps/Route113/scripts.pory"
	.string "really neat!$"
# 388 "data/maps/Route113/scripts.pory"

# 389 "data/maps/Route113/scripts.pory"
Route113_Text_RouteSign111:
# 390 "data/maps/Route113/scripts.pory"
	.string "ROUTE 113\n"
# 391 "data/maps/Route113/scripts.pory"
	.string "{RIGHT_ARROW} ROUTE 111$"
# 392 "data/maps/Route113/scripts.pory"

# 393 "data/maps/Route113/scripts.pory"
Route113_Text_RouteSignFallarbor:
# 394 "data/maps/Route113/scripts.pory"
	.string "ROUTE 113\n"
# 395 "data/maps/Route113/scripts.pory"
	.string "{LEFT_ARROW} FALLARBOR TOWN$"
# 396 "data/maps/Route113/scripts.pory"

# 397 "data/maps/Route113/scripts.pory"
Route113_Text_TrainerTipsRegisterKeyItems:
# 398 "data/maps/Route113/scripts.pory"
	.string "TRAINER TIPS\p"
# 399 "data/maps/Route113/scripts.pory"
	.string "You may register one of the KEY ITEMS\n"
# 400 "data/maps/Route113/scripts.pory"
	.string "in your BAG as SELECT.\p"
# 401 "data/maps/Route113/scripts.pory"
	.string "Simply press SELECT to use\n"
# 402 "data/maps/Route113/scripts.pory"
	.string "the registered item conveniently.$"
# 403 "data/maps/Route113/scripts.pory"

# 404 "data/maps/Route113/scripts.pory"
Route113_Text_GlassWorkshopSign:
# 405 "data/maps/Route113/scripts.pory"
	.string "GLASS WORKSHOP\n"
# 406 "data/maps/Route113/scripts.pory"
	.string "“Turning Volcanic Ash into Glass Items”$"

Route113_Text_SpencerLikeItsSnowing::
# 283 "data/maps/Route113/scripts.pory"
	.string "Can you believe this?\n"
	.string "It's like it's snowing!$"

Route113_Text_BrenLikeItsSnowing::
# 288 "data/maps/Route113/scripts.pory"
	.string "Can you believe this?\n"
	.string "It's like it's snowing!$"

Route113_Text_KyleLikeItsSnowing::
# 293 "data/maps/Route113/scripts.pory"
	.string "Can you believe this?\n"
	.string "It's like it's snowing!$"

Route113_Text_SpencerNatureNeverCeases::
# 298 "data/maps/Route113/scripts.pory"
	.string "Nature never ceases to amaze, does it?\n"
	.string "To think that a volcano could do this!$"

Route113_Text_BrenNatureNeverCeases::
# 303 "data/maps/Route113/scripts.pory"
	.string "Nature never ceases to amaze, does it?\n"
	.string "To think that a volcano could do this!$"

Route113_Text_KyleNatureNeverCeases::
# 308 "data/maps/Route113/scripts.pory"
	.string "Nature never ceases to amaze, does it?\n"
	.string "To think that a volcano could do this!$"

Route113_Text_SpencerDidIStartleYou::
# 313 "data/maps/Route113/scripts.pory"
	.string "HaHA!\n"
	.string "Did I startle you?\p"
	.string "A young ninja taught me the art of\n"
	.string "ambush!$"

Route113_Text_BrenDidIStartleYou::
# 319 "data/maps/Route113/scripts.pory"
	.string "HaHA!\n"
	.string "Did I startle you?\p"
	.string "A young ninja taught me the art of\n"
	.string "ambush!$"

Route113_Text_KyleDidIStartleYou::
# 325 "data/maps/Route113/scripts.pory"
	.string "HaHA!\n"
	.string "Did I startle you?\p"
	.string "A young ninja taught me the art of\n"
	.string "ambush!$"

Route113_Text_SpencerPracticeMore::
# 331 "data/maps/Route113/scripts.pory"
	.string "Maybe I'm not as good a ninja as I\n"
	.string "thought I was. I just have to practice\l"
	.string "more!$"

Route113_Text_BrenPracticeMore::
# 336 "data/maps/Route113/scripts.pory"
	.string "Maybe I'm not as good a ninja as I\n"
	.string "thought I was. I just have to practice\l"
	.string "more!$"

Route113_Text_KylePracticeMore::
# 341 "data/maps/Route113/scripts.pory"
	.string "Maybe I'm not as good a ninja as I\n"
	.string "thought I was. I just have to practice\l"
	.string "more!$"

Route113_Text_SpencerArtNotScience::
# 346 "data/maps/Route113/scripts.pory"
	.string "It's an art, not a science.\n"
	.string "A ninja must be stealthy, yet alert!$"

Route113_Text_BrenArtNotScience::
# 351 "data/maps/Route113/scripts.pory"
	.string "It's an art, not a science.\n"
	.string "A ninja must be stealthy, yet alert!$"

Route113_Text_KyleArtNotScience::
# 356 "data/maps/Route113/scripts.pory"
	.string "It's an art, not a science.\n"
	.string "A ninja must be stealthy, yet alert!$"

Route113_Text_SpencerDefeated::
# 361 "data/maps/Route113/scripts.pory"
	.string "…\n"
	.string "But I had the element of surprise…$"

Route113_Text_BrenDefeated::
# 366 "data/maps/Route113/scripts.pory"
	.string "…\n"
	.string "But I had the element of surprise…$"

Route113_Text_KyleDefeated::
# 371 "data/maps/Route113/scripts.pory"
	.string "…\n"
	.string "But I had the element of surprise…$"
