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
	.byte 0
# 16 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 17 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Victor::
# 18 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 19 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 20 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VICTOR
# 21 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_MySonIsStrongerThanYou, MSGBOX_DEFAULT
# 22 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 23 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 24 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 25 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Victoria::
# 26 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 27 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 28 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VICTORIA
# 29 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_MACHO_BRACE, Route111_WinstrateFamilysHouse_EventScript_ReceivedMachoBrace
# 30 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_LikeYouToHaveMachoBrace, MSGBOX_DEFAULT
# 31 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_MACHO_BRACE
# 32 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 33 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_RECEIVED_MACHO_BRACE
# 34 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 35 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 36 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 37 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_ReceivedMachoBrace::
# 38 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles, MSGBOX_DEFAULT
# 39 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 40 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 41 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 42 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Vivi::
# 43 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 44 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 45 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VIVI
# 46 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_StrongerFamilyMembers, MSGBOX_DEFAULT
# 47 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 48 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 49 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 50 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Vicky::
# 51 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 52 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 53 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VICKY
# 54 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_set FLAG_TEMP_4, Route111_WinstrateFamilysHouse_EventScript_AlreadySpokenTo
# 55 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrong, MSGBOX_DEFAULT
# 56 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_TEMP_4
# 57 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 58 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 59 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 60 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_AlreadySpokenTo::
# 61 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort, MSGBOX_DEFAULT
# 62 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 63 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end

Route111_WinstrateFamilysHouse_EventScript_Rival1::
# 67 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 68 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	applymovement 5, Common_Movement_FacePlayer
# 69 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	waitmovement 0
# 70 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, 5
# 71 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	rival1talk Route111_WinstrateFamilysHouse_Text_SpencerRareToFindFamily, Route111_WinstrateFamilysHouse_Text_BrenRareToFindFamily, Route111_WinstrateFamilysHouse_Text_KyleRareToFindFamily
# 74 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	closemessage
# 75 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
	end


# 91 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 92 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection::
# 93 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	closemessage
# 94 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FaceOriginalDirection
# 95 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	waitmovement 0
# 96 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	release
# 97 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 98 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 99 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_MySonIsStrongerThanYou:
# 100 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "You're the first TRAINER I've seen who\n"
# 101 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "deploys POKéMON so masterfully.\p"
# 102 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "But, I should tell you--my son is\n"
# 103 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "stronger than you.\p"
# 104 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "He even took the POKéMON LEAGUE\n"
# 105 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "challenge, I'll have you know.$"
# 106 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 107 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_LikeYouToHaveMachoBrace:
# 108 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "We use this MACHO BRACE to more\n"
# 109 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "effectively strengthen our POKéMON\l"
# 110 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "in training.\p"
# 111 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Since you've beaten all of us here,\n"
# 112 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "I don't know if you need it, but we\l"
# 113 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "would like you to have our MACHO BRACE.$"
# 114 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 115 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles:
# 116 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "When it comes to POKéMON battles,\n"
# 117 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "we tend to be pretty passionate.$"
# 118 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 119 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_StrongerFamilyMembers:
# 120 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Mommy is stronger than Daddy.\p"
# 121 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "I'm stronger than Mommy.\p"
# 122 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "And Grandma's stronger than me!\p"
# 123 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "But my big brother is even stronger\n"
# 124 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "than Grandma.$"
# 125 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 126 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_GrandsonStrong:
# 127 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "There's no question that you're strong.\p"
# 128 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "But if you were to battle my grandson,\n"
# 129 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "you'd end up crying in frustration.\p"
# 130 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "He's much stronger than any TRAINER\n"
# 131 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "our family knows.\p"
# 132 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "He must be challenging the POKéMON\n"
# 133 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "LEAGUE CHAMPION by now.\p"
# 134 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Knowing my grandson, he could be the\n"
# 135 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "CHAMPION already!$"
# 136 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 137 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort:
# 138 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "My grandson must be challenging the\n"
# 139 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "POKéMON LEAGUE CHAMPION by now.\p"
# 140 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Knowing my grandson, he could be the\n"
# 141 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "CHAMPION already!$"

Route111_WinstrateFamilysHouse_Text_SpencerRareToFindFamily::
# 79 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "It's kind of rare to find a whole family\n"
	.string "of POKéMON trainers, huh?$"

Route111_WinstrateFamilysHouse_Text_BrenRareToFindFamily::
# 83 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "It's kind of rare to find a whole family\n"
	.string "of POKéMON trainers, huh?$"

Route111_WinstrateFamilysHouse_Text_KyleRareToFindFamily::
# 87 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "It's kind of rare to find a whole family\n"
	.string "of POKéMON trainers, huh?$"
