# 4 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 5 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
.set LOCALID_FOSSIL_MANIAC, 1
# 6 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
.set LOCALID_RIVAL2, 2
# 7 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 8 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_MapScripts::
# 9 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_FossilManiacsTunnel_OnTransition
# 10 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route114_FossilManiacsTunnel_OnLoad
# 11 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.byte 0
# 12 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 13 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_OnTransition:
# 14 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 15 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, Route114_FossilManiacsTunnel_EventScript_MoveFossilManiac
# 16 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 17 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 18 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_MoveFossilManiac::
# 19 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setobjectxyperm LOCALID_FOSSIL_MANIAC, 6, 5
# 20 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setobjectmovementtype LOCALID_FOSSIL_MANIAC, MOVEMENT_TYPE_FACE_DOWN
# 21 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	return
# 22 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 23 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_OnLoad:
# 24 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	call_if_unset FLAG_SYS_GAME_CLEAR, Route114_FossilManiacsTunnel_EventScript_CloseDesertUnderpass
# 25 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 26 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 27 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_CloseDesertUnderpass::
# 28 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setmetatile 6, 1, METATILE_Fallarbor_RedRockWall, TRUE
# 29 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setmetatile 6, 2, METATILE_Fallarbor_RedRockWall, TRUE
# 30 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	return
# 31 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 32 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_ManiacMentionCaveIn::
# 33 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	lockall
# 34 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	applymovement LOCALID_FOSSIL_MANIAC, Common_Movement_WalkInPlaceFasterUp
# 35 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 36 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	waitmovement 0
# 37 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_NotSafeThatWay, MSGBOX_DEFAULT
# 38 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setvar VAR_FOSSIL_MANIAC_STATE, 2
# 39 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	releaseall
# 40 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 41 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 42 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_FossilManiac::
# 43 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	lock
# 44 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	faceplayer
# 45 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto_if_set FLAG_RECEIVED_REVIVED_FOSSIL_MON, Route114_FossilManiacsTunnel_EventScript_PlayerRevivedFossil
# 46 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	checkitem ITEM_ROOT_FOSSIL
# 47 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_FossilManiacsTunnel_EventScript_PlayerHasFossil
# 48 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	checkitem ITEM_CLAW_FOSSIL
# 49 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_FossilManiacsTunnel_EventScript_PlayerHasFossil
# 50 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_LookInDesertForFossils, MSGBOX_DEFAULT
# 51 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	release
# 52 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 53 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 54 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_PlayerHasFossil::
# 55 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_DevonCorpRevivingFossils, MSGBOX_DEFAULT
# 56 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	release
# 57 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 58 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 59 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_PlayerRevivedFossil::
# 60 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_FossilsAreWonderful, MSGBOX_DEFAULT
# 61 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	release
# 62 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end

Route114_FossilManiacsTunnel_EventScript_Rival2::
# 66 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	lock
# 67 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 68 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	waitmovement 0
# 69 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	compare VAR_TEMP_5, 5
	goto_if_ne Route114_FossilManiacsTunnel_EventScript_Rival2_2
# 76 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_MANIAC_BIG_NUGGET, Route114_FossilManiacsTunnel_EventScript_Rival2_5
# 82 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	rival2talk Route114_FossilManiacsTunnel_Text_SpencerMoreMotivated, Route114_FossilManiacsTunnel_Text_BrenMoreMotivated, Route114_FossilManiacsTunnel_Text_KyleMoreMotivated
Route114_FossilManiacsTunnel_EventScript_Rival2_1:
# 87 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	closemessage
# 88 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	applymovement 2, Common_Movement_FaceOriginalDirection
# 89 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	waitmovement 0
# 90 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	release
	end

Route114_FossilManiacsTunnel_EventScript_Rival2_2:
# 70 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	rival2talk Route114_FossilManiacsTunnel_Text_SpencerThisGuyIsCrazy, Route114_FossilManiacsTunnel_Text_BrenThisGuyIsCrazy, Route114_FossilManiacsTunnel_Text_KyleThisGuyIsCrazy
# 73 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setvar VAR_TEMP_5, 5
	goto Route114_FossilManiacsTunnel_EventScript_Rival2_1

Route114_FossilManiacsTunnel_EventScript_Rival2_5:
# 77 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	rival2talk Route114_FossilManiacsTunnel_Text_SpencerMustBeSomething, Route114_FossilManiacsTunnel_Text_BrenMustBeSomething, Route114_FossilManiacsTunnel_Text_KYleMustBeSomething
	goto Route114_FossilManiacsTunnel_EventScript_Rival2_1


# 142 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 143 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_LookInDesertForFossils:
# 144 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "I'm the FOSSIL MANIAC…\n"
# 145 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "I'm a nice guy who loves FOSSILS…\p"
# 146 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Do you want a FOSSIL?\p"
# 147 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "But the FOSSILS around these parts all\n"
# 148 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "belong to me… None for you…\p"
# 149 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "If you can't bear to go without\n"
# 150 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "a FOSSIL, look in a desert where there\l"
# 151 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "are boulders and sand that may hide\l"
# 152 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "FOSSILS…$"
# 153 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 154 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_DevonCorpRevivingFossils:
# 155 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "You found a FOSSIL, didn't you?\n"
# 156 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "That's so nice… It's so dreamy…\p"
# 157 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "What are you going to do with that\n"
# 158 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "FOSSIL?\p"
# 159 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "From what I've heard, DEVON is doing\n"
# 160 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "research on reviving POKéMON from\l"
# 161 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "FOSSILS…\p"
# 162 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "I love my FOSSILS, so I would never\n"
# 163 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "do anything like that…$"
# 164 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 165 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_FossilsAreWonderful:
# 166 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "FOSSILS are so… Wonderful…\n"
# 167 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "It's so dreamy…$"
# 168 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 169 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_NotSafeThatWay:
# 170 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Oh…\n"
# 171 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "It's not safe that way…\p"
# 172 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "I was digging away, you see…\n"
# 173 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "When the whole wall collapsed…\p"
# 174 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "I think there's a giant cavern\n"
# 175 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "underneath now…\p"
# 176 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "But I've left it alone because I don't\n"
# 177 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "think there are any FOSSILS there…$"

Route114_FossilManiacsTunnel_Text_SpencerThisGuyIsCrazy::
# 94 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Have you seen the size of this tunnel?\n"
	.string "This guy is CRAZY!\p"
	.string "He's only interested in FOSSILS, so I'm\n"
	.string "looking to see if he unearthed anything\l"
	.string "else when he excavated this place.$"

Route114_FossilManiacsTunnel_Text_BrenThisGuyIsCrazy::
# 100 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Have you seen the size of this tunnel?\n"
	.string "This guy is CRAZY!\p"
	.string "He's only interested in FOSSILS, so I'm\n"
	.string "looking to see if he unearthed anything\l"
	.string "else when he excavated this place.$"

Route114_FossilManiacsTunnel_Text_KyleThisGuyIsCrazy::
# 106 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Have you seen the size of this tunnel?\n"
	.string "This guy is CRAZY!\p"
	.string "He's only interested in FOSSILS, so I'm\n"
	.string "looking to see if he unearthed anything\l"
	.string "else when he excavated this place.$"

Route114_FossilManiacsTunnel_Text_SpencerMustBeSomething::
# 112 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "There must be something ACTUALLY\n"
	.string "valuable around here that he missed.$"

Route114_FossilManiacsTunnel_Text_BrenMustBeSomething::
# 116 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "There must be something ACTUALLY\n"
	.string "valuable around here that he missed.$"

Route114_FossilManiacsTunnel_Text_KYleMustBeSomething::
# 120 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "There must be something ACTUALLY\n"
	.string "valuable around here that he missed.$"

Route114_FossilManiacsTunnel_Text_SpencerMoreMotivated::
# 124 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Whoa!\n"
	.string "You found a BIG NUGGET just lying\l"
	.string "around in the rubble?\p"
	.string "Now I'm even more motivated to find\n"
	.string "something!$"

Route114_FossilManiacsTunnel_Text_BrenMoreMotivated::
# 130 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Whoa!\n"
	.string "You found a BIG NUGGET just lying\l"
	.string "around in the rubble?\p"
	.string "Now I'm even more motivated to find\n"
	.string "something!$"

Route114_FossilManiacsTunnel_Text_KyleMoreMotivated::
# 136 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Whoa!\n"
	.string "You found a BIG NUGGET just lying\l"
	.string "around in the rubble?\p"
	.string "Now I'm even more motivated to find\n"
	.string "something!$"
