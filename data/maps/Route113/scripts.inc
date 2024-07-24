# 3 "data/maps/Route113/scripts.pory"

# 4 "data/maps/Route113/scripts.pory"
.set LOCALID_RIVAL2, 17

Route113_MapScripts::
# 7 "data/maps/Route113/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route113_MapScripts_MAP_SCRIPT_ON_RESUME
# 10 "data/maps/Route113/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route113_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route113_MapScripts_MAP_SCRIPT_ON_RESUME:
# 8 "data/maps/Route113/scripts.pory"
	setstepcallback STEP_CB_ASH
	return

Route113_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/Route113/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 13 "data/maps/Route113/scripts.pory"
	call Route113_EventScript_CheckSetAshWeather
	return


Route113_EventScript_CheckSetAshWeather::
# 18 "data/maps/Route113/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 19 "data/maps/Route113/scripts.pory"
	goto_if_lt VAR_TEMP_0, 19, Route113_EventScript_DontSetAshWeather
# 20 "data/maps/Route113/scripts.pory"
	goto_if_gt VAR_TEMP_0, 84, Route113_EventScript_DontSetAshWeather
# 21 "data/maps/Route113/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
	return


Route113_EventScript_DontSetAshWeather::
	return


# 29 "data/maps/Route113/scripts.pory"

# 30 "data/maps/Route113/scripts.pory"
Route113_EventScript_Gentleman::
# 31 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_AshCanBeFashionedIntoGlass, MSGBOX_NPC
# 32 "data/maps/Route113/scripts.pory"
	end
# 33 "data/maps/Route113/scripts.pory"

# 34 "data/maps/Route113/scripts.pory"
Route113_EventScript_NinjaBoy::
# 35 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_FunWalkingThroughAsh, MSGBOX_NPC
# 36 "data/maps/Route113/scripts.pory"
	end
# 37 "data/maps/Route113/scripts.pory"

# 38 "data/maps/Route113/scripts.pory"
Route113_EventScript_RouteSign111::
# 39 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_RouteSign111, MSGBOX_SIGN
# 40 "data/maps/Route113/scripts.pory"
	end
# 41 "data/maps/Route113/scripts.pory"

# 42 "data/maps/Route113/scripts.pory"
Route113_EventScript_RouteSignFallarbor::
# 43 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_RouteSignFallarbor, MSGBOX_SIGN
# 44 "data/maps/Route113/scripts.pory"
	end
# 45 "data/maps/Route113/scripts.pory"

# 46 "data/maps/Route113/scripts.pory"
Route113_EventScript_GlassWorkshopSign::
# 47 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_GlassWorkshopSign, MSGBOX_SIGN
# 48 "data/maps/Route113/scripts.pory"
	end
# 49 "data/maps/Route113/scripts.pory"

# 50 "data/maps/Route113/scripts.pory"
Route113_EventScript_TrainerTipsRegisterKeyItems::
# 51 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_TrainerTipsRegisterKeyItems, MSGBOX_SIGN
# 52 "data/maps/Route113/scripts.pory"
	end
# 53 "data/maps/Route113/scripts.pory"

# 54 "data/maps/Route113/scripts.pory"
Route113_EventScript_Jaylen::
# 55 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_JAYLEN, Route113_Text_JaylenIntro, Route113_Text_JaylenDefeat
# 56 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_JaylenPostBattle, MSGBOX_AUTOCLOSE
# 57 "data/maps/Route113/scripts.pory"
	end
# 58 "data/maps/Route113/scripts.pory"

# 59 "data/maps/Route113/scripts.pory"
Route113_EventScript_Dillon::
# 60 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_DILLON, Route113_Text_DillonIntro, Route113_Text_DillonDefeat
# 61 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_DillonPostBattle, MSGBOX_AUTOCLOSE
# 62 "data/maps/Route113/scripts.pory"
	end
# 63 "data/maps/Route113/scripts.pory"

# 64 "data/maps/Route113/scripts.pory"
Route113_EventScript_Madeline::
# 65 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_MADELINE_1, Route113_Text_MadelineIntro, Route113_Text_MadelineDefeat, Route113_EventScript_RegisterMadeline
# 66 "data/maps/Route113/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 67 "data/maps/Route113/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route113_EventScript_RematchMadeline
# 68 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_MadelinePostBattle, MSGBOX_DEFAULT
# 69 "data/maps/Route113/scripts.pory"
	release
# 70 "data/maps/Route113/scripts.pory"
	end
# 71 "data/maps/Route113/scripts.pory"

# 72 "data/maps/Route113/scripts.pory"
Route113_EventScript_RegisterMadeline::
# 73 "data/maps/Route113/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 74 "data/maps/Route113/scripts.pory"
	waitmovement 0
# 75 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_MadelineRegister, MSGBOX_DEFAULT
# 76 "data/maps/Route113/scripts.pory"
	register_matchcall TRAINER_MADELINE_1
# 77 "data/maps/Route113/scripts.pory"
	release
# 78 "data/maps/Route113/scripts.pory"
	end
# 79 "data/maps/Route113/scripts.pory"

# 80 "data/maps/Route113/scripts.pory"
Route113_EventScript_RematchMadeline::
# 81 "data/maps/Route113/scripts.pory"
	trainerbattle_rematch TRAINER_MADELINE_1, Route113_Text_MadelineRematchIntro, Route113_Text_MadelineRematchDefeat
# 82 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_MadelinePostRematch, MSGBOX_AUTOCLOSE
# 83 "data/maps/Route113/scripts.pory"
	end
# 84 "data/maps/Route113/scripts.pory"

# 85 "data/maps/Route113/scripts.pory"
Route113_EventScript_Lao::
# 86 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_LAO_1, Route113_Text_LaoIntro, Route113_Text_LaoDefeat, Route113_EventScript_RegisterLao
# 87 "data/maps/Route113/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 88 "data/maps/Route113/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route113_EventScript_RematchLao
# 89 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LaoPostBattle, MSGBOX_DEFAULT
# 90 "data/maps/Route113/scripts.pory"
	release
# 91 "data/maps/Route113/scripts.pory"
	end
# 92 "data/maps/Route113/scripts.pory"

# 93 "data/maps/Route113/scripts.pory"
Route113_EventScript_RegisterLao::
# 94 "data/maps/Route113/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 95 "data/maps/Route113/scripts.pory"
	waitmovement 0
# 96 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LaoRegister, MSGBOX_DEFAULT
# 97 "data/maps/Route113/scripts.pory"
	register_matchcall TRAINER_LAO_1
# 98 "data/maps/Route113/scripts.pory"
	release
# 99 "data/maps/Route113/scripts.pory"
	end
# 100 "data/maps/Route113/scripts.pory"

# 101 "data/maps/Route113/scripts.pory"
Route113_EventScript_RematchLao::
# 102 "data/maps/Route113/scripts.pory"
	trainerbattle_rematch TRAINER_LAO_1, Route113_Text_LaoRematchIntro, Route113_Text_LaoRematchDefeat
# 103 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LaoPostRematch, MSGBOX_AUTOCLOSE
# 104 "data/maps/Route113/scripts.pory"
	end
# 105 "data/maps/Route113/scripts.pory"

# 106 "data/maps/Route113/scripts.pory"
Route113_EventScript_Lung::
# 107 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_LUNG, Route113_Text_LungIntro, Route113_Text_LungDefeat
# 108 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LungPostBattle, MSGBOX_AUTOCLOSE
# 109 "data/maps/Route113/scripts.pory"
	end
# 110 "data/maps/Route113/scripts.pory"

# 111 "data/maps/Route113/scripts.pory"
Route113_EventScript_Tori::
# 112 "data/maps/Route113/scripts.pory"
	trainerbattle_double TRAINER_TORI_AND_TIA, Route113_Text_ToriIntro, Route113_Text_ToriDefeat, Route113_Text_ToriNotEnoughMons
# 113 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_ToriPostBattle, MSGBOX_AUTOCLOSE
# 114 "data/maps/Route113/scripts.pory"
	end
# 115 "data/maps/Route113/scripts.pory"

# 116 "data/maps/Route113/scripts.pory"
Route113_EventScript_Tia::
# 117 "data/maps/Route113/scripts.pory"
	trainerbattle_double TRAINER_TORI_AND_TIA, Route113_Text_TiaIntro, Route113_Text_TiaDefeat, Route113_Text_TiaNotEnoughMons
# 118 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_TiaPostBattle, MSGBOX_AUTOCLOSE
# 119 "data/maps/Route113/scripts.pory"
	end
# 120 "data/maps/Route113/scripts.pory"

# 121 "data/maps/Route113/scripts.pory"
Route113_EventScript_Sophie::
# 122 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_SOPHIE, Route113_Text_SophieIntro, Route113_Text_SophieDefeat
# 123 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_SophiePostBattle, MSGBOX_AUTOCLOSE
# 124 "data/maps/Route113/scripts.pory"
	end
# 125 "data/maps/Route113/scripts.pory"

# 126 "data/maps/Route113/scripts.pory"
Route113_EventScript_Coby::
# 127 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_COBY, Route113_Text_CobyIntro, Route113_Text_CobyDefeat
# 128 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_CobyPostBattle, MSGBOX_AUTOCLOSE
# 129 "data/maps/Route113/scripts.pory"
	end
# 130 "data/maps/Route113/scripts.pory"

# 131 "data/maps/Route113/scripts.pory"
Route113_EventScript_Lawrence::
# 132 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_LAWRENCE, Route113_Text_LawrenceIntro, Route113_Text_LawrenceDefeat
# 133 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LawrencePostBattle, MSGBOX_AUTOCLOSE
# 134 "data/maps/Route113/scripts.pory"
	end
# 135 "data/maps/Route113/scripts.pory"

# 136 "data/maps/Route113/scripts.pory"
Route113_EventScript_Wyatt::
# 137 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_WYATT, Route113_Text_WyattIntro, Route113_Text_WyattDefeat
# 138 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_WyattPostBattle, MSGBOX_AUTOCLOSE
# 139 "data/maps/Route113/scripts.pory"
	end

Route113_EventScript_RevealRival2Trigger::
# 143 "data/maps/Route113/scripts.pory"
	lock
# 144 "data/maps/Route113/scripts.pory"
	removeobject 17
# 145 "data/maps/Route113/scripts.pory"
	setobjectmovementtype 17, MOVEMENT_TYPE_BURIED
# 146 "data/maps/Route113/scripts.pory"
	addobject 17
# 147 "data/maps/Route113/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_113_RIVAL2
# 148 "data/maps/Route113/scripts.pory"
	applymovement 17, Common_Movement_FacePlayer
# 149 "data/maps/Route113/scripts.pory"
	waitmovement 0
# 150 "data/maps/Route113/scripts.pory"
	applymovement 17, Route113_Movement_Rival2Reveal
# 151 "data/maps/Route113/scripts.pory"
	waitmovement 0
# 152 "data/maps/Route113/scripts.pory"
	rival2talk Route113_Text_SpencerDidIStartleYou, Route113_Text_BrenDidIStartleYou, Route113_Text_KyleDidIStartleYou
# 155 "data/maps/Route113/scripts.pory"
	closemessage
# 156 "data/maps/Route113/scripts.pory"
	setvar VAR_BURIED_RIVAL2, 1
# 157 "data/maps/Route113/scripts.pory"
	checkfriendchoice
# 158 "data/maps/Route113/scripts.pory"
	switch VAR_RESULT
# 159 "data/maps/Route113/scripts.pory"
	case SPENCER, Route113_EventScript_RevealRival2Trigger_3
# 161 "data/maps/Route113/scripts.pory"
	case BREN, Route113_EventScript_RevealRival2Trigger_4
# 163 "data/maps/Route113/scripts.pory"
	case KYLE, Route113_EventScript_RevealRival2Trigger_5
Route113_EventScript_RevealRival2Trigger_1:
# 166 "data/maps/Route113/scripts.pory"
	rival2talk Route113_Text_SpencerPracticeMore, Route113_Text_BrenPracticeMore, Route113_Text_KylePracticeMore
# 169 "data/maps/Route113/scripts.pory"
	closemessage
# 170 "data/maps/Route113/scripts.pory"
	call Route113_EventScript_Rival2JumpBackIn
# 171 "data/maps/Route113/scripts.pory"
	setvar VAR_BURIED_RIVAL2, 1
# 172 "data/maps/Route113/scripts.pory"
	release
	end

Route113_EventScript_RevealRival2Trigger_3:
# 160 "data/maps/Route113/scripts.pory"
	trainerbattle_no_intro TRAINER_KYLE_MAUVILLE, Route113_Text_KyleDefeated
	goto Route113_EventScript_RevealRival2Trigger_1

Route113_EventScript_RevealRival2Trigger_4:
# 162 "data/maps/Route113/scripts.pory"
	trainerbattle_no_intro TRAINER_SPENCER_MAUVILLE, Route113_Text_SpencerDefeated
	goto Route113_EventScript_RevealRival2Trigger_1

Route113_EventScript_RevealRival2Trigger_5:
# 164 "data/maps/Route113/scripts.pory"
	trainerbattle_no_intro TRAINER_BREN_MAUVILLE, Route113_Text_BrenDefeated
	goto Route113_EventScript_RevealRival2Trigger_1


Route113_EventScript_Rival2::
# 177 "data/maps/Route113/scripts.pory"
	lock
# 178 "data/maps/Route113/scripts.pory"
	removeobject 17
# 179 "data/maps/Route113/scripts.pory"
	setobjectmovementtype 17, MOVEMENT_TYPE_BURIED
# 180 "data/maps/Route113/scripts.pory"
	addobject 17
# 181 "data/maps/Route113/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_113_RIVAL2
# 182 "data/maps/Route113/scripts.pory"
	applymovement 17, Common_Movement_FacePlayer
# 183 "data/maps/Route113/scripts.pory"
	waitmovement 0
# 184 "data/maps/Route113/scripts.pory"
	applymovement 17, Route113_Movement_Rival2Reveal
# 185 "data/maps/Route113/scripts.pory"
	waitmovement 0
# 186 "data/maps/Route113/scripts.pory"
	rival2talk Route113_Text_SpencerArtNotScience, Route113_Text_BrenArtNotScience, Route113_Text_KyleArtNotScience
# 189 "data/maps/Route113/scripts.pory"
	closemessage
# 190 "data/maps/Route113/scripts.pory"
	call Route113_EventScript_Rival2JumpBackIn
# 191 "data/maps/Route113/scripts.pory"
	release
	end


Route113_EventScript_Rival2JumpBackIn::
# 196 "data/maps/Route113/scripts.pory"
	getplayerxy VAR_0x8001, VAR_0x8002
# 197 "data/maps/Route113/scripts.pory"
	compare VAR_0x8001, 28
	goto_if_eq Route113_EventScript_Rival2JumpBackIn_2
# 200 "data/maps/Route113/scripts.pory"
	compare VAR_0x8001, 29
	goto_if_eq Route113_EventScript_Rival2JumpBackIn_3
# 209 "data/maps/Route113/scripts.pory"
	applymovement 17, Route113_Movement_Rival2JumpBackInRight
Route113_EventScript_Rival2JumpBackIn_1:
# 211 "data/maps/Route113/scripts.pory"
	waitmovement 0
# 212 "data/maps/Route113/scripts.pory"
	setobjectmovementtype 17, MOVEMENT_TYPE_INVISIBLE
	return

Route113_EventScript_Rival2JumpBackIn_2:
# 198 "data/maps/Route113/scripts.pory"
	applymovement 17, Route113_Movement_Rival2JumpBackInLeft
	goto Route113_EventScript_Rival2JumpBackIn_1

Route113_EventScript_Rival2JumpBackIn_3:
# 201 "data/maps/Route113/scripts.pory"
	compare VAR_0x8002, 5
	goto_if_eq Route113_EventScript_Rival2JumpBackIn_7
# 205 "data/maps/Route113/scripts.pory"
	applymovement 17, Route113_Movement_Rival2JumpBackInDown
	goto Route113_EventScript_Rival2JumpBackIn_1

Route113_EventScript_Rival2JumpBackIn_7:
# 202 "data/maps/Route113/scripts.pory"
	applymovement 17, Route113_Movement_Rival2JumpBackInUp
	goto Route113_EventScript_Rival2JumpBackIn_1


# 216 "data/maps/Route113/scripts.pory"
Route113_Movement_Rival2Reveal:
# 217 "data/maps/Route113/scripts.pory"
	reveal_trainer
	step_end

# 220 "data/maps/Route113/scripts.pory"
Route113_Movement_Rival2JumpBackInUp:
# 221 "data/maps/Route113/scripts.pory"
	jump_in_place_up
# 222 "data/maps/Route113/scripts.pory"
	set_invisible
	step_end

# 225 "data/maps/Route113/scripts.pory"
Route113_Movement_Rival2JumpBackInDown:
# 226 "data/maps/Route113/scripts.pory"
	jump_in_place_down
# 227 "data/maps/Route113/scripts.pory"
	set_invisible
	step_end

# 230 "data/maps/Route113/scripts.pory"
Route113_Movement_Rival2JumpBackInRight:
# 231 "data/maps/Route113/scripts.pory"
	jump_in_place_right
# 232 "data/maps/Route113/scripts.pory"
	set_invisible
	step_end

# 235 "data/maps/Route113/scripts.pory"
Route113_Movement_Rival2JumpBackInLeft:
# 236 "data/maps/Route113/scripts.pory"
	jump_in_place_left
# 237 "data/maps/Route113/scripts.pory"
	set_invisible
	step_end

# 303 "data/maps/Route113/scripts.pory"

# 304 "data/maps/Route113/scripts.pory"
Route113_Text_AshCanBeFashionedIntoGlass:
# 305 "data/maps/Route113/scripts.pory"
	.string "Wahahaha! Today's technology is a\n"
# 306 "data/maps/Route113/scripts.pory"
	.string "wondrous thing!\p"
# 307 "data/maps/Route113/scripts.pory"
	.string "Take this volcanic ash here.\n"
# 308 "data/maps/Route113/scripts.pory"
	.string "It can be fashioned into glass.$"
# 309 "data/maps/Route113/scripts.pory"

# 310 "data/maps/Route113/scripts.pory"
Route113_Text_FunWalkingThroughAsh:
# 311 "data/maps/Route113/scripts.pory"
	.string "It's fun walking through the volcano's\n"
# 312 "data/maps/Route113/scripts.pory"
	.string "ashes on the ground and grass.\p"
# 313 "data/maps/Route113/scripts.pory"
	.string "You can see where you walked--it's\n"
# 314 "data/maps/Route113/scripts.pory"
	.string "really neat!$"
# 315 "data/maps/Route113/scripts.pory"

# 316 "data/maps/Route113/scripts.pory"
Route113_Text_RouteSign111:
# 317 "data/maps/Route113/scripts.pory"
	.string "ROUTE 113\n"
# 318 "data/maps/Route113/scripts.pory"
	.string "{RIGHT_ARROW} ROUTE 111$"
# 319 "data/maps/Route113/scripts.pory"

# 320 "data/maps/Route113/scripts.pory"
Route113_Text_RouteSignFallarbor:
# 321 "data/maps/Route113/scripts.pory"
	.string "ROUTE 113\n"
# 322 "data/maps/Route113/scripts.pory"
	.string "{LEFT_ARROW} FALLARBOR TOWN$"
# 323 "data/maps/Route113/scripts.pory"

# 324 "data/maps/Route113/scripts.pory"
Route113_Text_TrainerTipsRegisterKeyItems:
# 325 "data/maps/Route113/scripts.pory"
	.string "TRAINER TIPS\p"
# 326 "data/maps/Route113/scripts.pory"
	.string "You may register one of the KEY ITEMS\n"
# 327 "data/maps/Route113/scripts.pory"
	.string "in your BAG as SELECT.\p"
# 328 "data/maps/Route113/scripts.pory"
	.string "Simply press SELECT to use\n"
# 329 "data/maps/Route113/scripts.pory"
	.string "the registered item conveniently.$"
# 330 "data/maps/Route113/scripts.pory"

# 331 "data/maps/Route113/scripts.pory"
Route113_Text_GlassWorkshopSign:
# 332 "data/maps/Route113/scripts.pory"
	.string "GLASS WORKSHOP\n"
# 333 "data/maps/Route113/scripts.pory"
	.string "“Turning Volcanic Ash into Glass Items”$"

Route113_Text_SpencerDidIStartleYou::
# 240 "data/maps/Route113/scripts.pory"
	.string "HaHA!\n"
	.string "Did I startle you?\p"
	.string "A young ninja taught me the art of\n"
	.string "ambush!$"

Route113_Text_BrenDidIStartleYou::
# 246 "data/maps/Route113/scripts.pory"
	.string "HaHA!\n"
	.string "Did I startle you?\p"
	.string "A young ninja taught me the art of\n"
	.string "ambush!$"

Route113_Text_KyleDidIStartleYou::
# 252 "data/maps/Route113/scripts.pory"
	.string "HaHA!\n"
	.string "Did I startle you?\p"
	.string "A young ninja taught me the art of\n"
	.string "ambush!$"

Route113_Text_SpencerPracticeMore::
# 258 "data/maps/Route113/scripts.pory"
	.string "Maybe I'm not as good a ninja as I\n"
	.string "thought I was. I just have to practice\l"
	.string "more!$"

Route113_Text_BrenPracticeMore::
# 263 "data/maps/Route113/scripts.pory"
	.string "Maybe I'm not as good a ninja as I\n"
	.string "thought I was. I just have to practice\l"
	.string "more!$"

Route113_Text_KylePracticeMore::
# 268 "data/maps/Route113/scripts.pory"
	.string "Maybe I'm not as good a ninja as I\n"
	.string "thought I was. I just have to practice\l"
	.string "more!$"

Route113_Text_SpencerArtNotScience::
# 273 "data/maps/Route113/scripts.pory"
	.string "It's an art, not a science.\n"
	.string "A ninja must be stealthy, yet alert!$"

Route113_Text_BrenArtNotScience::
# 278 "data/maps/Route113/scripts.pory"
	.string "It's an art, not a science.\n"
	.string "A ninja must be stealthy, yet alert!$"

Route113_Text_KyleArtNotScience::
# 283 "data/maps/Route113/scripts.pory"
	.string "It's an art, not a science.\n"
	.string "A ninja must be stealthy, yet alert!$"

Route113_Text_SpencerDefeated::
# 288 "data/maps/Route113/scripts.pory"
	.string "…\n"
	.string "But I had the element of surprise…$"

Route113_Text_BrenDefeated::
# 293 "data/maps/Route113/scripts.pory"
	.string "…\n"
	.string "But I had the element of surprise…$"

Route113_Text_KyleDefeated::
# 298 "data/maps/Route113/scripts.pory"
	.string "…\n"
	.string "But I had the element of surprise…$"
