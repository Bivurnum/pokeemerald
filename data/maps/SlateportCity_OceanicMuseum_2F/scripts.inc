# 7 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 8 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
.set LOCALID_CAPT_STERN, 1
# 9 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
.set LOCALID_ARCHIE, 2
# 10 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
.set LOCALID_GRUNT_1, 3
# 11 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
.set LOCALID_GRUNT_2, 4
# 12 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
.set LOCALID_RIVAL1, 8

SlateportCity_OceanicMuseum_2F_MapScripts::
	.byte 0


SlateportCity_OceanicMuseum_2F_EventScript_Rival1::
# 20 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock
# 21 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 8, Common_Movement_FacePlayer
# 22 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 23 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	checkfriendchoice
# 24 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	switch VAR_RESULT
# 25 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	case SPENCER, SlateportCity_OceanicMuseum_2F_EventScript_Rival1_3
# 27 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	case BREN, SlateportCity_OceanicMuseum_2F_EventScript_Rival1_4
# 29 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	case KYLE, SlateportCity_OceanicMuseum_2F_EventScript_Rival1_5
SlateportCity_OceanicMuseum_2F_EventScript_Rival1_1:
# 32 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 33 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 8, Common_Movement_FaceLeft
# 34 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 35 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	release
	end

SlateportCity_OceanicMuseum_2F_EventScript_Rival1_3:
# 26 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_BrenFoundStern, MSGBOX_DEFAULT
	goto SlateportCity_OceanicMuseum_2F_EventScript_Rival1_1

SlateportCity_OceanicMuseum_2F_EventScript_Rival1_4:
# 28 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_KyleFoundStern, MSGBOX_DEFAULT
	goto SlateportCity_OceanicMuseum_2F_EventScript_Rival1_1

SlateportCity_OceanicMuseum_2F_EventScript_Rival1_5:
# 30 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_SpencerFoundStern, MSGBOX_DEFAULT
	goto SlateportCity_OceanicMuseum_2F_EventScript_Rival1_1


SlateportCity_OceanicMuseum_2F_EventScript_CaptStern::
# 58 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock
# 59 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	faceplayer
# 60 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_ThankYouForTheParts, MSGBOX_DEFAULT
# 61 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 62 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 63 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject 3
# 64 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter
# 65 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 66 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject 4
# 67 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter
# 68 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 69 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach
# 70 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach
# 71 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 72 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts
# 73 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WellTakeThoseParts, MSGBOX_DEFAULT
# 74 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_ne VAR_FACING, DIR_EAST, SlateportCity_OceanicMuseum_2F_EventScript_SternFaceGrunts
# 75 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternWhoAreYou, MSGBOX_DEFAULT
# 76 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WereTeamAqua, MSGBOX_DEFAULT
# 77 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 78 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	getplayerxy VAR_0x8001, VAR_0x8002
# 79 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_0x8001, 13
	goto_if_eq SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_2
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_1:
# 82 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 8, SlateportCity_OceanicMuseum_2F_Movement_RivalApproachGrunt
# 83 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 84 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 85 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 86 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	checkfriendchoice
# 87 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	switch VAR_RESULT
# 88 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	case SPENCER, SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_6
# 90 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	case BREN, SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_7
# 92 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	case KYLE, SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_8
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_4:
# 95 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call SlateportCity_OceanicMuseum_2F_EventScript_PrepareForGruntBattle
# 96 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
# 97 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
# 98 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 99 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 16
# 100 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterDown
# 101 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 102 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 103 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, Common_Movement_BeginTalkDown
# 104 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 105 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_BossGoingToBeFurious, MSGBOX_DEFAULT
# 106 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 107 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 16
# 108 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, Common_Movement_BeginTalkUp
# 109 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 110 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_MeddlingKid, MSGBOX_DEFAULT
# 111 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 112 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 35
# 113 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject 2
# 114 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 2, SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter
# 115 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie
# 116 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 117 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_CameToSeeWhatsTakingSoLong, MSGBOX_DEFAULT
# 118 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 119 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 2, SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer
# 120 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 121 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_ArchieWarning, MSGBOX_DEFAULT
# 122 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 123 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	savebgm MUS_DUMMY
# 124 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadedefaultbgm
# 125 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 126 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject 2
# 127 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject 3
# 128 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject 4
# 129 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 130 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 30
# 131 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS
# 132 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterRight
# 133 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 134 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 135 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 1, Common_Movement_BeginTalkLeft
# 136 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 137 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternThankYouForSavingUs, MSGBOX_DEFAULT
# 138 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_0x8004, ITEM_DEVON_PARTS
# 139 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 140 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternIveGotToGo, MSGBOX_DEFAULT
# 141 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 142 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 143 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playfanfare MUS_HEAL
# 144 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitfanfare
# 145 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	special HealPlayerParty
# 146 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject 1
# 147 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_110_TEAM_AQUA
# 148 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_eq VAR_REGISTER_BIRCH_STATE, 0, SlateportCity_OceanicMuseum_2F_EventScript_ReadyRegisterBirch
# 149 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_DELIVERED_DEVON_GOODS
# 150 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_DEVON_EMPLOYEE
# 151 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
# 152 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1
# 153 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 154 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 155 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 8, Common_Movement_BeginTalkDown
# 156 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 157 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	checkfriendchoice
# 158 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	switch VAR_RESULT
# 159 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	case SPENCER, SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_11
# 161 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	case BREN, SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_12
# 163 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	case KYLE, SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_13
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_9:
# 166 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 167 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 168 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 8, SlateportCity_OceanicMuseum_2F_Movement_Rival1Leaves
# 169 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 170 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject 8
# 171 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_CAPTAIN_STERN
# 172 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	release
	end

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_2:
# 80 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_1

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_6:
# 89 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_BrenBattleTogether, MSGBOX_DEFAULT
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_4

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_7:
# 91 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_KyleBattleTogether, MSGBOX_DEFAULT
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_4

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_8:
# 93 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_SpencerBattleTogether, MSGBOX_DEFAULT
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_4

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_11:
# 160 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_BrenAfterStern, MSGBOX_DEFAULT
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_9

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_12:
# 162 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_KyleAfterStern, MSGBOX_DEFAULT
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_9

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_13:
# 164 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_SpencerAfterStern, MSGBOX_DEFAULT
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_9


SlateportCity_OceanicMuseum_2F_EventScript_PrepareForGruntBattle::
# 177 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	special SavePlayerParty
# 178 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 179 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	special ChooseHalfPartyForBattle
# 180 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitstate
# 181 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	goto_if_ne VAR_RESULT, 0, SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle
# 182 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	goto SlateportCity_OceanicMuseum_2F_EventScript_QuitPartySelect
	return


SlateportCity_OceanicMuseum_2F_EventScript_QuitPartySelect::
# 187 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_NotGetOutOfThisOne
# 188 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 189 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	special SavePlayerParty
# 190 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 191 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	special ChooseHalfPartyForBattle
# 192 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitstate
# 193 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	goto_if_ne VAR_RESULT, 0, SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle
# 194 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	goto SlateportCity_OceanicMuseum_2F_EventScript_QuitPartySelect
	end


SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle::
# 199 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 200 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	turnobject 8, DIR_WEST
# 201 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_Text_0, MSGBOX_DEFAULT
# 202 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 203 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
# 204 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
# 205 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 206 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	checkfriendchoice
# 207 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	switch VAR_RESULT
# 208 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	case SPENCER, SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_3
# 210 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	case BREN, SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_4
# 212 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	case KYLE, SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_5
SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_1:
	return

SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_3:
# 209 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	multi_2_vs_2 TRAINER_GRUNT_MUSEUM_1, SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat, TRAINER_GRUNT_MUSEUM_2, SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat, PARTNER_BREN_MUSEUM
	goto SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_1

SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_4:
# 211 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	multi_2_vs_2 TRAINER_GRUNT_MUSEUM_1, SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat, TRAINER_GRUNT_MUSEUM_2, SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat, PARTNER_KYLE_MUSEUM
	goto SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_1

SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_5:
# 213 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	multi_2_vs_2 TRAINER_GRUNT_MUSEUM_1, SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat, TRAINER_GRUNT_MUSEUM_2, SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat, PARTNER_SPENCER_MUSEUM
	goto SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_1


SlateportCity_OceanicMuseum_2F_EventScript_ReadyRegisterBirch::
# 219 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 1
	return


SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts::
# 224 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 225 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
	return


SlateportCity_OceanicMuseum_2F_EventScript_SternFaceGrunts::
# 230 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterLeft
# 231 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
	return


SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntSouth::
# 236 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth
# 237 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 8, SlateportCity_OceanicMuseum_2F_Movement_RivalApproachGrunt
# 238 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
	return


SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntWest::
# 243 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest
# 244 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
	return


# 248 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth:
# 249 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 250 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 251 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_left
	step_end

# 254 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest:
# 255 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 256 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 257 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 258 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 259 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_left
	step_end

# 262 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_RivalApproachGrunt:
# 263 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 264 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 264 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 265 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 266 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_down
	step_end

# 269 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_Unused:
# 270 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 271 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 272 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 273 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 274 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 275 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 276 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 277 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 278 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 279 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 280 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 281 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 282 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_8
	step_end

# 285 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer:
# 286 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
	step_end

# 289 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter:
# 290 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 291 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 292 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 293 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 294 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 295 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 296 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 297 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 298 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
	step_end

# 301 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle:
# 302 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
	step_end

# 305 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter:
# 306 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 307 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 308 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_down
	step_end

# 311 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach:
# 312 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 313 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 314 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 315 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 316 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 317 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
	step_end

# 320 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated:
# 321 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock_facing_direction
# 322 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 323 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	unlock_facing_direction
	step_end

# 326 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter:
# 327 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
	step_end

# 330 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach:
# 331 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 332 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 333 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 334 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 335 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 336 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 337 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 338 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
	step_end

# 341 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie:
# 342 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 343 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 344 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 345 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 346 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 347 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 348 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 349 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 350 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_8
# 351 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_fast_down
# 352 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_up
	step_end

# 355 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_Rival1Leaves:
# 356 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 356 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 356 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 356 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 356 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 356 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 357 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 357 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 357 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 357 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 358 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	set_invisible
	step_end

# 411 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 412 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample1::
# 413 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1, MSGBOX_SIGN
# 414 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 415 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 416 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample2::
# 417 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2, MSGBOX_SIGN
# 418 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 419 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 420 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PressureExperiment::
# 421 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_PressureExperiment, MSGBOX_SIGN
# 422 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 423 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 424 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_HoennModel::
# 425 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_HoennModel, MSGBOX_SIGN
# 426 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 427 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 428 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_DeepSeawaterDisplay::
# 429 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay, MSGBOX_SIGN
# 430 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 431 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 432 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SurfaceSeawaterDisplay::
# 433 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay, MSGBOX_SIGN
# 434 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 435 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 436 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SSTidalReplica::
# 437 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica, MSGBOX_SIGN
# 438 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 439 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 440 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SubmarineReplica::
# 441 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica, MSGBOX_SIGN
# 442 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 443 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 444 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SubmersibleReplica::
# 445 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica, MSGBOX_SIGN
# 446 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 447 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 448 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SSAnneReplica::
# 449 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica, MSGBOX_SIGN
# 450 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 451 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 452 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron1::
# 453 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip, MSGBOX_NPC
# 454 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 455 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 456 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron2::
# 457 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum, MSGBOX_NPC
# 458 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 459 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 460 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron3::
# 461 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock
# 462 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	faceplayer
# 463 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine, MSGBOX_DEFAULT
# 464 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 465 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 466 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 467 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	release
# 468 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 469 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 470 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_ThankYouForTheParts:
# 471 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Yes? If you're looking for STERN,\n"
# 472 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "that would be me.\p"
# 473 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ah! Those must be the parts I ordered\n"
# 474 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "from MR. STONE of DEVON.\p"
# 475 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Thank you! That's great!\n"
# 476 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We can prepare for our expedition now.$"
# 477 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 478 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WellTakeThoseParts:
# 479 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Hehehe, hold it!\n"
# 480 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We'll take those parts!$"
# 481 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 482 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternWhoAreYou:
# 483 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "CAPT. STERN: Wh-what?\n"
# 484 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Who are you people?$"
# 485 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 486 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WereTeamAqua:
# 487 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We're TEAM AQUA!\p"
# 488 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Our BOSS wants those parts!\n"
# 489 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Shut your yap and fork them over!$"
# 490 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 491 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat:
# 492 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Awaaaah!\n"
# 493 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Some kids beat us!$"
# 494 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 495 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_BossGoingToBeFurious:
# 496 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Oh, man, what a disaster…\n"
# 497 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "The BOSS is going to be furious…$"
# 498 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 499 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_LetMeTakeCareOfThis:
# 500 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Humph, sniveling wimp!\n"
# 501 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Let me take care of this!$"
# 502 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 503 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat:
# 504 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "What?!\n"
# 505 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "What do you mean we lost?!$"
# 506 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 507 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_MeddlingKid:
# 508 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Now what? If we don't get the parts,\n"
# 509 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "we're in for it!\p"
# 510 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Arrgh, I didn't count on being meddled\n"
# 511 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "with by some meddling kids!$"
# 512 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 513 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_CameToSeeWhatsTakingSoLong:
# 514 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I came to see what was taking so\n"
# 515 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "long to snatch some parts, and you\l"
# 516 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "simps are held up by mere children?$"
# 517 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 518 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_ArchieWarning:
# 519 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We are TEAM AQUA,\n"
# 520 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "and we love the sea!\p"
# 521 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "And I am TEAM AQUA's leader,\n"
# 522 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "ARCHIE!\p"
# 523 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "What makes you interfere with us?\p"
# 524 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "…No! You can't be!\n"
# 525 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "You're not with TEAM MAGMA?\p"
# 526 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Wait, that can't be right.\n"
# 527 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "You're not dressed for the part.\p"
# 528 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "… … … … … …\n"
# 529 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "… … … … … …\p"
# 530 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "POKéMON, people… All life depends on\n"
# 531 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "the sea.\p"
# 532 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "So, TEAM AQUA is dedicated to\n"
# 533 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "the expansion of the sea.\p"
# 534 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Don't you agree? What we are doing\n"
# 535 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "is a magnificent undertaking.\p"
# 536 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ah, fine…\n"
# 537 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "You're still too young to understand\l"
# 538 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "our noble objective.\p"
# 539 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "But, I warn you, don't even consider\n"
# 540 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "interfering with our plans again.\p"
# 541 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "The consequences will cost you\n"
# 542 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "dearly!\p"
# 543 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "And don't you forget it!$"
# 544 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 545 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternThankYouForSavingUs:
# 546 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "CAPT. STERN: You're…\n"
# 547 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ah, okay, you're {PLAYER}{KUN}…\p"
# 548 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Anyway, that was a tense situation!\n"
# 549 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Thank you two for saving us!\p"
# 550 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Oh, yes, I almost forgot that you\n"
# 551 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "even brought the parts from DEVON!$"
# 552 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 553 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternIveGotToGo:
# 554 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "CAPT. STERN: Whoops!\n"
# 555 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "There's no time to lose!\p"
# 556 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We have to set out on our ocean-floor\n"
# 557 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "expedition really soon.\p"
# 558 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Thanks again, but now I've got\n"
# 559 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "to go!\p"
# 560 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Feel free to wander around and check\n"
# 561 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "out our facilities, though.$"
# 562 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 563 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip:
# 564 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I saw a model of a ship here.\p"
# 565 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It reminded me of the ABANDONED SHIP\n"
# 566 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "near DEWFORD TOWN…$"
# 567 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 568 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum:
# 569 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Don't you dare run around inside\n"
# 570 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "the MUSEUM!$"
# 571 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 572 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine:
# 573 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Wow, the submarine's awesome!\n"
# 574 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I want to go for a ride!$"
# 575 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 576 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1:
# 577 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“WATER QUALITY SAMPLE 1,” the\n"
# 578 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "label says.\p"
# 579 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "The sea is all connected, but the\n"
# 580 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "water seems to differ by region.$"
# 581 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 582 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2:
# 583 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“WATER QUALITY SAMPLE 2,” the\n"
# 584 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "label says.\p"
# 585 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Does the saltiness of seawater differ\n"
# 586 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "by region, too?$"
# 587 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 588 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_PressureExperiment:
# 589 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "A rubber ball is expanding and\n"
# 590 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "shrinking.\p"
# 591 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“In the sea, the weight of water itself\n"
# 592 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "exerts pressure.\p"
# 593 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“In shallow water, the pressure is not\n"
# 594 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "very heavy.\p"
# 595 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“However, in extremely deep water,\n"
# 596 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "the pressure can reach even tens of\l"
# 597 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "thousands of tons on a small area.”$"
# 598 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 599 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_HoennModel:
# 600 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“MODEL OF HOENN REGION”\p"
# 601 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It's a miniature diorama of the\n"
# 602 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "HOENN region.\p"
# 603 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Where is LITTLEROOT TOWN on this?$"
# 604 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 605 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay:
# 606 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It's a display on the flow of seawater.\p"
# 607 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Near the bottom of the sea, water\n"
# 608 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "flows due to differences in such\l"
# 609 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "factors as temperature and salinity.”$"
# 610 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 611 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay:
# 612 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It's a display on the flow of seawater.\p"
# 613 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Toward the surface, seawater flows\n"
# 614 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "as currents driven by the winds.”$"
# 615 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 616 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica:
# 617 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“THE FERRY S.S. TIDAL\p"
# 618 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“A scale replica of the ship under\n"
# 619 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "construction at STERN'S SHIPYARD.”$"
# 620 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 621 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica:
# 622 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“SUBMARINE EXPLORER 1\p"
# 623 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“A replica of the high-performance\n"
# 624 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "ocean floor exploration submarine.”$"
# 625 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 626 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica:
# 627 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“SUBMERSIBLE POD\p"
# 628 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“A replica of a compact, unmanned\n"
# 629 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "pod for seafloor exploration.”$"
# 630 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 631 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica:
# 632 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“S.S. ANNE\p"
# 633 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“A replica of the luxury liner that\n"
# 634 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "circles the globe.”$"

SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_Text_0:
# 201 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Bring it on!$"

SlateportCity_OceanicMuseum_2F_SpencerFoundStern::
# 39 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Look, {PLAYER}!\n"
	.string "I found CAPT. STERN.\l"
	.string "Go ahead and deliver those GOODS!$"

SlateportCity_OceanicMuseum_2F_BrenFoundStern::
# 45 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Look, {PLAYER}!\n"
	.string "I found CAPT. STERN.\l"
	.string "Go ahead and deliver those GOODS!$"

SlateportCity_OceanicMuseum_2F_KyleFoundStern::
# 51 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Look, {PLAYER}!\n"
	.string "I found CAPT. STERN.\l"
	.string "Go ahead and deliver those GOODS!$"

SlateportCity_OceanicMuseum_2F_SpencerBattleTogether::
# 361 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "C'mon!\n"
	.string "Let's take them on together!\p"
	.string "Choose the POKéMON you want to battle\n"
	.string "with.$"

SlateportCity_OceanicMuseum_2F_BrenBattleTogether::
# 367 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "C'mon!\n"
	.string "Let's take them on together!\p"
	.string "Choose the POKéMON you want to battle\n"
	.string "with.$"

SlateportCity_OceanicMuseum_2F_KyleBattleTogether::
# 373 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "C'mon!\n"
	.string "Let's take them on together!\p"
	.string "Choose the POKéMON you want to battle\n"
	.string "with.$"

SlateportCity_OceanicMuseum_2F_Text_NotGetOutOfThisOne::
# 379 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We have to protect STERN!\n"
	.string "Come on! Fight with me!$"

SlateportCity_OceanicMuseum_2F_SpencerAfterStern::
# 384 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We really have to watch out\n"
	.string "for those AQUA guys, huh?\p"
	.string "It seems they may be more trouble\n"
	.string "than we first thought.\p"
	.string "Anyway, nice work!\n"
	.string "All this battling has me revved up for\l"
	.string "the next GYM! I'm headed for MAUVILLE.\l"
	.string "See you out there!$"

SlateportCity_OceanicMuseum_2F_BrenAfterStern::
# 393 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We really have to watch out\n"
	.string "for those AQUA guys, huh?\p"
	.string "It seems they may be more trouble\n"
	.string "than we first thought.\p"
	.string "Anyway, nice work!\n"
	.string "All this battling has me revved up for\l"
	.string "the next GYM! I'm headed for MAUVILLE.\l"
	.string "See you out there!$"

SlateportCity_OceanicMuseum_2F_KyleAfterStern::
# 402 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We really have to watch out\n"
	.string "for those AQUA guys, huh?\p"
	.string "It seems they may be more trouble\n"
	.string "than we first thought.\p"
	.string "Anyway, nice work!\n"
	.string "All this battling has me revved up for\l"
	.string "the next GYM! I'm headed for MAUVILLE.\l"
	.string "See you out there!$"
