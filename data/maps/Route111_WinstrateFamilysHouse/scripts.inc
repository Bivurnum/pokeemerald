# 7 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 8 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
.set LOCALID_VIVI, 1
# 9 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
.set LOCALID_VICTOR, 2
# 10 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
.set LOCALID_VICTORIA, 3
# 11 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
.set LOCALID_VICKY, 4
# 12 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
.set LOCALID_RIVAL1, 5
# 13 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 14 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_MapScripts::
# 15 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route111_WinstrateFamilysHouse_OnTransition
# 16 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.byte 0
# 17 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 18 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_OnTransition:
# 19 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 20 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 21 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 22 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Victor::
# 23 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 24 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 25 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VICTOR
# 26 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_MySonIsStrongerThanYou, MSGBOX_DEFAULT
# 27 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 28 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 29 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 30 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Victoria::
# 31 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 32 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 33 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VICTORIA
# 34 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_MACHO_BRACE, Route111_WinstrateFamilysHouse_EventScript_ReceivedMachoBrace
# 35 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_LikeYouToHaveMachoBrace, MSGBOX_DEFAULT
# 36 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_MACHO_BRACE
# 37 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 38 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_RECEIVED_MACHO_BRACE
# 39 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 40 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 41 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 42 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_ReceivedMachoBrace::
# 43 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles, MSGBOX_DEFAULT
# 44 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 45 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 46 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 47 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Vivi::
# 48 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 49 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 50 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VIVI
# 51 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_StrongerFamilyMembers, MSGBOX_DEFAULT
# 52 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 53 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 54 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 55 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Vicky::
# 56 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 57 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 58 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VICKY
# 59 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_set FLAG_TEMP_4, Route111_WinstrateFamilysHouse_EventScript_AlreadySpokenTo
# 60 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrong, MSGBOX_DEFAULT
# 61 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_TEMP_4
# 62 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 63 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 64 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 65 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_AlreadySpokenTo::
# 66 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort, MSGBOX_DEFAULT
# 67 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 68 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end

Route111_WinstrateFamilysHouse_EventScript_Rival1::
# 72 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 73 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	applymovement 5, Common_Movement_FacePlayer
# 74 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	waitmovement 0
# 75 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, 5
# 76 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	rival1talk Route111_WinstrateFamilysHouse_Text_SpencerRareToFindFamily, Route111_WinstrateFamilysHouse_Text_BrenRareToFindFamily, Route111_WinstrateFamilysHouse_Text_KyleRareToFindFamily
# 79 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	closemessage
# 80 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
	end


# 96 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 97 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection::
# 98 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	closemessage
# 99 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FaceOriginalDirection
# 100 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	waitmovement 0
# 101 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	release
# 102 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 103 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 104 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_MySonIsStrongerThanYou:
# 105 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "You're the first TRAINER I've seen who\n"
# 106 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "deploys POKéMON so masterfully.\p"
# 107 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "But, I should tell you--my son is\n"
# 108 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "stronger than you.\p"
# 109 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "He even took the POKéMON LEAGUE\n"
# 110 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "challenge, I'll have you know.$"
# 111 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 112 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_LikeYouToHaveMachoBrace:
# 113 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "We use this MACHO BRACE to more\n"
# 114 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "effectively strengthen our POKéMON\l"
# 115 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "in training.\p"
# 116 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Since you've beaten all of us here,\n"
# 117 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "I don't know if you need it, but we\l"
# 118 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "would like you to have our MACHO BRACE.$"
# 119 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 120 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles:
# 121 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "When it comes to POKéMON battles,\n"
# 122 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "we tend to be pretty passionate.$"
# 123 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 124 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_StrongerFamilyMembers:
# 125 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Mommy is stronger than Daddy.\p"
# 126 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "I'm stronger than Mommy.\p"
# 127 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "And Grandma's stronger than me!\p"
# 128 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "But my big brother is even stronger\n"
# 129 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "than Grandma.$"
# 130 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 131 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_GrandsonStrong:
# 132 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "There's no question that you're strong.\p"
# 133 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "But if you were to battle my grandson,\n"
# 134 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "you'd end up crying in frustration.\p"
# 135 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "He's much stronger than any TRAINER\n"
# 136 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "our family knows.\p"
# 137 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "He must be challenging the POKéMON\n"
# 138 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "LEAGUE CHAMPION by now.\p"
# 139 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Knowing my grandson, he could be the\n"
# 140 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "CHAMPION already!$"
# 141 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 142 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort:
# 143 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "My grandson must be challenging the\n"
# 144 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "POKéMON LEAGUE CHAMPION by now.\p"
# 145 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Knowing my grandson, he could be the\n"
# 146 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "CHAMPION already!$"

Route111_WinstrateFamilysHouse_Text_SpencerRareToFindFamily::
# 84 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "It's kind of rare to find a whole family\n"
	.string "of POKéMON trainers, huh?$"

Route111_WinstrateFamilysHouse_Text_BrenRareToFindFamily::
# 88 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "It's kind of rare to find a whole family\n"
	.string "of POKéMON trainers, huh?$"

Route111_WinstrateFamilysHouse_Text_KyleRareToFindFamily::
# 92 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "It's kind of rare to find a whole family\n"
	.string "of POKéMON trainers, huh?$"
