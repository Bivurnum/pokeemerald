# 3 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 4 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_MapScripts::
# 5 "data/maps/Route109_SeashoreHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route109_SeashoreHouse_OnTransition
# 6 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.byte 0
# 7 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 8 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_OnTransition:
# 9 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_LANDMARK_SEASHORE_HOUSE
# 10 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 11 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 12 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Owner::
# 13 "data/maps/Route109_SeashoreHouse/scripts.pory"
	lock
# 14 "data/maps/Route109_SeashoreHouse/scripts.pory"
	faceplayer
# 15 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
# 16 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_6_SODA_POP, Route109_SeashoreHouse_EventScript_AlreadyReceivedSodaPop
# 17 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_SEASHORE_HOUSE, Route109_SeashoreHouse_EventScript_DefeatedTrainers
# 18 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_set FLAG_TEMP_2, Route109_SeashoreHouse_EventScript_AlreadyGaveIntroduction
# 19 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_SeashoreHouseIntro, MSGBOX_DEFAULT
# 20 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 21 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 22 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 23 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 24 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_AlreadyGaveIntroduction::
# 25 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_ShowMeSomeHotMatches, MSGBOX_DEFAULT
# 26 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 27 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 28 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 29 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_DefeatedTrainers::
# 30 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_TakeTheseSodaPopBottles, MSGBOX_DEFAULT
# 31 "data/maps/Route109_SeashoreHouse/scripts.pory"
	giveitem ITEM_SODA_POP, 6
# 32 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route109_SeashoreHouse_EventScript_BagFull
# 33 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_RECEIVED_6_SODA_POP
# 34 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 35 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 36 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 37 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_BagFull::
# 38 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_BagFull, MSGBOX_DEFAULT
# 39 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 40 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 41 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 42 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_AlreadyReceivedSodaPop::
# 43 "data/maps/Route109_SeashoreHouse/scripts.pory"
	showmoneybox 0, 0
# 44 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_WantToBuySodaPop, MSGBOX_YESNO
# 45 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route109_SeashoreHouse_EventScript_BuySodaPop
# 46 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_ThatsTooBad, MSGBOX_DEFAULT
# 47 "data/maps/Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 48 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 49 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 50 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 51 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_BuySodaPop::
# 52 "data/maps/Route109_SeashoreHouse/scripts.pory"
	checkmoney 300
# 53 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route109_SeashoreHouse_EventScript_NotEnoughMoney
# 54 "data/maps/Route109_SeashoreHouse/scripts.pory"
	checkitemspace ITEM_SODA_POP
# 55 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route109_SeashoreHouse_EventScript_NotEnoughSpace
# 56 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_HereYouGo, MSGBOX_DEFAULT
# 57 "data/maps/Route109_SeashoreHouse/scripts.pory"
	removemoney 300
# 58 "data/maps/Route109_SeashoreHouse/scripts.pory"
	updatemoneybox
# 59 "data/maps/Route109_SeashoreHouse/scripts.pory"
	giveitem ITEM_SODA_POP
# 60 "data/maps/Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 61 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 62 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 63 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 64 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_NotEnoughMoney::
# 65 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_NotEnoughMoney, MSGBOX_DEFAULT
# 66 "data/maps/Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 67 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 68 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 69 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 70 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_NotEnoughSpace::
# 71 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 72 "data/maps/Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 73 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 74 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 75 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 76 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Dwayne::
# 77 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_DWAYNE, Route109_SeashoreHouse_Text_DwayneIntro, Route109_SeashoreHouse_Text_DwayneDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletionAfterBattle
# 78 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_DwaynePostBattle, MSGBOX_AUTOCLOSE
# 79 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 80 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 81 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Johanna::
# 82 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_JOHANNA, Route109_SeashoreHouse_Text_JohannaIntro, Route109_SeashoreHouse_Text_JohannaDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletionAfterBattle
# 83 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_JohannaPostBattle, MSGBOX_AUTOCLOSE
# 84 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 85 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 86 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Simon::
# 87 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_SIMON, Route109_SeashoreHouse_Text_SimonIntro, Route109_SeashoreHouse_Text_SimonDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletionAfterBattle
# 88 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_SimonPostBattle, MSGBOX_AUTOCLOSE
# 89 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end

Route109_SeashoreHouse_EventScript_Rival2Trigger::
# 93 "data/maps/Route109_SeashoreHouse/scripts.pory"
	lock
# 94 "data/maps/Route109_SeashoreHouse/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 95 "data/maps/Route109_SeashoreHouse/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 96 "data/maps/Route109_SeashoreHouse/scripts.pory"
	waitmovement 0
# 97 "data/maps/Route109_SeashoreHouse/scripts.pory"
	delay 60
# 98 "data/maps/Route109_SeashoreHouse/scripts.pory"
	applymovement 5, Route109_SeashoreHouse_Movement_Rival2Approach
# 99 "data/maps/Route109_SeashoreHouse/scripts.pory"
	waitmovement 0
# 100 "data/maps/Route109_SeashoreHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 101 "data/maps/Route109_SeashoreHouse/scripts.pory"
	waitmovement 0
# 102 "data/maps/Route109_SeashoreHouse/scripts.pory"
	checkfriendchoice
# 103 "data/maps/Route109_SeashoreHouse/scripts.pory"
	switch VAR_RESULT
# 104 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case SPENCER, Route109_SeashoreHouse_EventScript_Rival2Trigger_3
# 107 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case BREN, Route109_SeashoreHouse_EventScript_Rival2Trigger_4
# 110 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case KYLE, Route109_SeashoreHouse_EventScript_Rival2Trigger_5
Route109_SeashoreHouse_EventScript_Rival2Trigger_1:
# 114 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setvar VAR_SEASHORE_HOUSE_RIVAL_STATE, 1
# 115 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
# 116 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
	end

Route109_SeashoreHouse_EventScript_Rival2Trigger_3:
# 105 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_KyleIntro, MSGBOX_DEFAULT
# 106 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_KYLE_SEASHORE, Route109_SeashoreHouse_Text_KyleDefeated
	goto Route109_SeashoreHouse_EventScript_Rival2Trigger_1

Route109_SeashoreHouse_EventScript_Rival2Trigger_4:
# 108 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_SpencerIntro, MSGBOX_DEFAULT
# 109 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_SPENCER_SEASHORE, Route109_SeashoreHouse_Text_SpencerDefeated
	goto Route109_SeashoreHouse_EventScript_Rival2Trigger_1

Route109_SeashoreHouse_EventScript_Rival2Trigger_5:
# 111 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_BrenIntro, MSGBOX_DEFAULT
# 112 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_BREN_SEASHORE, Route109_SeashoreHouse_Text_BrenDefeated
	goto Route109_SeashoreHouse_EventScript_Rival2Trigger_1


# 120 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Movement_Rival2Approach:
# 121 "data/maps/Route109_SeashoreHouse/scripts.pory"
	walk_right
	step_end

Route109_SeashoreHouse_EventScript_CheckTrainersCompletionAfterBattle::
# 125 "data/maps/Route109_SeashoreHouse/scripts.pory"
	call Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
# 126 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
	end


Route109_SeashoreHouse_EventScript_CheckTrainersCompletion::
# 131 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_not_defeated TRAINER_DWAYNE, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
# 132 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_not_defeated TRAINER_JOHANNA, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
# 133 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_not_defeated TRAINER_SIMON, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
# 134 "data/maps/Route109_SeashoreHouse/scripts.pory"
	checkflag FLAG_HIDE_SEASHORE_HOUSE_RIVAL2
# 135 "data/maps/Route109_SeashoreHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route109_SeashoreHouse_EventScript_CheckTrainersCompletion_2
Route109_SeashoreHouse_EventScript_CheckTrainersCompletion_1:
# 146 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_DEFEATED_SEASHORE_HOUSE
	return

Route109_SeashoreHouse_EventScript_CheckTrainersCompletion_2:
# 136 "data/maps/Route109_SeashoreHouse/scripts.pory"
	checkfriendchoice
# 137 "data/maps/Route109_SeashoreHouse/scripts.pory"
	switch VAR_RESULT
# 138 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case SPENCER, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion_5
# 140 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case BREN, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion_6
# 142 "data/maps/Route109_SeashoreHouse/scripts.pory"
	case KYLE, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion_7
	goto Route109_SeashoreHouse_EventScript_CheckTrainersCompletion_1

Route109_SeashoreHouse_EventScript_CheckTrainersCompletion_5:
# 139 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_not_defeated TRAINER_KYLE_SEASHORE, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
	goto Route109_SeashoreHouse_EventScript_CheckTrainersCompletion_1

Route109_SeashoreHouse_EventScript_CheckTrainersCompletion_6:
# 141 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_not_defeated TRAINER_SPENCER_SEASHORE, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
	goto Route109_SeashoreHouse_EventScript_CheckTrainersCompletion_1

Route109_SeashoreHouse_EventScript_CheckTrainersCompletion_7:
# 143 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_not_defeated TRAINER_BREN_SEASHORE, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
	goto Route109_SeashoreHouse_EventScript_CheckTrainersCompletion_1


Route109_SeashoreHouse_EventScript_TrainersNotCompleted::
	return


Route109_SeashoreHouse_EventScript_Rival2::
# 155 "data/maps/Route109_SeashoreHouse/scripts.pory"
	lock
# 156 "data/maps/Route109_SeashoreHouse/scripts.pory"
	applymovement 5, Common_Movement_FacePlayer
# 157 "data/maps/Route109_SeashoreHouse/scripts.pory"
	waitmovement 0
# 158 "data/maps/Route109_SeashoreHouse/scripts.pory"
	rival2talk Route109_SeashoreHouse_Text_SpencerPostBattle, Route109_SeashoreHouse_Text_BrenPostBattle, Route109_SeashoreHouse_Text_KylePostBattle
# 161 "data/maps/Route109_SeashoreHouse/scripts.pory"
	closemessage
# 162 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
	end


# 217 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 218 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_SeashoreHouseIntro:
# 219 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I'm the owner of the SEASHORE HOUSE.\n"
# 220 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "But you can call me MR. SEA!\p"
# 221 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "What I love above all is to see hot\n"
# 222 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "POKéMON battles.\p"
# 223 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Let me see that your heart burns hot!\p"
# 224 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "If you can defeat all the TRAINERS\n"
# 225 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "here, I'll reward your efforts.$"
# 226 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 227 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_ShowMeSomeHotMatches:
# 228 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Show me some hot matches!\p"
# 229 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I run this SEASHORE HOUSE just for\n"
# 230 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "that reason alone!$"
# 231 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 232 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_TakeTheseSodaPopBottles:
# 233 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "You're scorching hot!\n"
# 234 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Those battles blazed!\l"
# 235 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I'm more than just satisfied!\p"
# 236 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "As thanks for showing me your hot\n"
# 237 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "streak, I want you to take these.\p"
# 238 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "It's half a dozen bottles of SODA POP!$"
# 239 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 240 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_BagFull:
# 241 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Oh, but hey, your BAG's jammed full.\n"
# 242 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I'll hang on to these for you.$"
# 243 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 244 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_WantToBuySodaPop:
# 245 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Want to buy some SODA POP?\n"
# 246 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "POKéMON love it!\p"
# 247 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Just ¥300 a bottle!\n"
# 248 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Buy some!$"
# 249 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 250 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_HereYouGo:
# 251 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Here you go!$"
# 252 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 253 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_NotEnoughMoney:
# 254 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "You don't have the money.$"
# 255 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 256 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_ThatsTooBad:
# 257 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "No?\n"
# 258 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "That's too bad.$"
# 259 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 260 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_DwayneIntro:
# 261 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "If you're looking for a battle in the\n"
# 262 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "SEASHORE HOUSE, you'll find no\l"
# 263 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "hotter TRAINER than me, matey!$"
# 264 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 265 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_DwayneDefeated:
# 266 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "That was a hot battle!\n"
# 267 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I can accept that loss, matey!$"
# 268 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 269 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_DwaynePostBattle:
# 270 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Whenever I'm in SLATEPORT, I enjoy\n"
# 271 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "hot battles and ice-cold SODA POP!$"
# 272 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 273 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_JohannaIntro:
# 274 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Boring battles aren't worth the effort.\p"
# 275 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Fiery hot battles are what toughen up\n"
# 276 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "TRAINERS and POKéMON!$"
# 277 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 278 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_JohannaDefeated:
# 279 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "That's hot!$"
# 280 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 281 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_JohannaPostBattle:
# 282 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Whew, I'm all thirsty.\n"
# 283 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Maybe I'll have a SODA POP.$"
# 284 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 285 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_SimonIntro:
# 286 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I'm going to show you how great\n"
# 287 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "my POKéMON are, but don't cry!$"
# 288 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 289 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_SimonDefeated:
# 290 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "…I lost, but I won't cry…$"
# 291 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 292 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_SimonPostBattle:
# 293 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "If one of my POKéMON knew the move\n"
# 294 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "for carrying me across water on its\l"
# 295 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "back, I could get rid of this inner tube.$"

Route109_SeashoreHouse_Text_SpencerIntro::
# 166 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "That guy over there gave me some\n"
	.string "SODA POP in exchange for battling\l"
	.string "trainers who come in here. What a steal!\p"
	.string "…Hold on.\n"
	.string "You're a trainer!\l"
	.string "Time to earn my keep!$"

Route109_SeashoreHouse_Text_BrenIntro::
# 174 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "That guy over there gave me some\n"
	.string "SODA POP in exchange for battling\l"
	.string "trainers who come in here. What a steal!\p"
	.string "…Hold on.\n"
	.string "You're a trainer!\l"
	.string "Time to earn my keep!$"

Route109_SeashoreHouse_Text_KyleIntro::
# 182 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "That guy over there gave me some\n"
	.string "SODA POP in exchange for battling\l"
	.string "trainers who come in here. What a steal!\p"
	.string "…Hold on.\n"
	.string "You're a trainer!\l"
	.string "Time to earn my keep!$"

Route109_SeashoreHouse_Text_SpencerDefeated::
# 190 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "At least I have my SODA POP!$"

Route109_SeashoreHouse_Text_BrenDefeated::
# 194 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "At least I have my SODA POP!$"

Route109_SeashoreHouse_Text_KyleDefeated::
# 198 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "At least I have my SODA POP!$"

Route109_SeashoreHouse_Text_SpencerPostBattle::
# 202 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I know it's for POKéMON, but\n"
	.string "I like the taste of SODA POP, too!$"

Route109_SeashoreHouse_Text_BrenPostBattle::
# 207 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I know it's for POKéMON, but\n"
	.string "I like the taste of SODA POP, too!$"

Route109_SeashoreHouse_Text_KylePostBattle::
# 212 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I know it's for POKéMON, but\n"
	.string "I like the taste of SODA POP, too!$"
