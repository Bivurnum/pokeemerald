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
	rival1talk SlateportCity_OceanicMuseum_2F_SpencerFoundStern, SlateportCity_OceanicMuseum_2F_BrenFoundStern, SlateportCity_OceanicMuseum_2F_KyleFoundStern
# 26 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 27 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 8, Common_Movement_FaceLeft
# 28 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 29 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	release
	end


SlateportCity_OceanicMuseum_2F_EventScript_CaptStern::
# 52 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock
# 53 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	faceplayer
# 54 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_ThankYouForTheParts, MSGBOX_DEFAULT
# 55 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 56 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 57 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject 3
# 58 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter
# 59 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 60 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject 4
# 61 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter
# 62 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 63 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach
# 64 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach
# 65 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 66 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts
# 67 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WellTakeThoseParts, MSGBOX_DEFAULT
# 68 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_ne VAR_FACING, DIR_EAST, SlateportCity_OceanicMuseum_2F_EventScript_SternFaceGrunts
# 69 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternWhoAreYou, MSGBOX_DEFAULT
# 70 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WereTeamAqua, MSGBOX_DEFAULT
# 71 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 72 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	getplayerxy VAR_0x8001, VAR_0x8002
# 73 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_0x8001, 13
	goto_if_eq SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_2
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_1:
# 76 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 8, SlateportCity_OceanicMuseum_2F_Movement_RivalApproachGrunt
# 77 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 78 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 79 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 80 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	rival1talk SlateportCity_OceanicMuseum_2F_SpencerBattleTogether, SlateportCity_OceanicMuseum_2F_BrenBattleTogether, SlateportCity_OceanicMuseum_2F_KyleBattleTogether
# 83 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 84 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call SlateportCity_OceanicMuseum_2F_EventScript_PrepareForGruntBattle
# 85 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
# 86 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
# 87 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 88 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 16
# 89 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterDown
# 90 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 91 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 92 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, Common_Movement_BeginTalkDown
# 93 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 94 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_BossGoingToBeFurious, MSGBOX_DEFAULT
# 95 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 96 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 16
# 97 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, Common_Movement_BeginTalkUp
# 98 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 99 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_MeddlingKid, MSGBOX_DEFAULT
# 100 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 101 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 35
# 102 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject 2
# 103 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 2, SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter
# 104 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie
# 105 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 106 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_CameToSeeWhatsTakingSoLong, MSGBOX_DEFAULT
# 107 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 108 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 2, SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer
# 109 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 110 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_ArchieWarning, MSGBOX_DEFAULT
# 111 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 112 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	savebgm MUS_DUMMY
# 113 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadedefaultbgm
# 114 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 115 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject 2
# 116 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject 3
# 117 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject 4
# 118 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 119 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 30
# 120 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS
# 121 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterRight
# 122 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 123 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 124 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 1, Common_Movement_BeginTalkLeft
# 125 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 126 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternThankYouForSavingUs, MSGBOX_DEFAULT
# 127 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_0x8004, ITEM_DEVON_PARTS
# 128 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 129 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternIveGotToGo, MSGBOX_DEFAULT
# 130 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 131 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 132 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playfanfare MUS_HEAL
# 133 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitfanfare
# 134 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	special HealPlayerParty
	callnative UpdateFollowingPokemon
	removeobject LOCALID_CAPT_STERN
	setflag FLAG_HIDE_ROUTE_110_TEAM_AQUA
# 137 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_eq VAR_REGISTER_BIRCH_STATE, 0, SlateportCity_OceanicMuseum_2F_EventScript_ReadyRegisterBirch
# 138 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_DELIVERED_DEVON_GOODS
# 139 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_DEVON_EMPLOYEE
# 140 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
# 141 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1
# 142 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 143 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 144 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 8, Common_Movement_BeginTalkDown
# 145 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 146 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	rival1talk SlateportCity_OceanicMuseum_2F_SpencerAfterStern, SlateportCity_OceanicMuseum_2F_BrenAfterStern, SlateportCity_OceanicMuseum_2F_KyleAfterStern
# 149 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 150 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 151 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 8, SlateportCity_OceanicMuseum_2F_Movement_Rival1Leaves
# 152 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 153 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject 8
# 154 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_CAPTAIN_STERN
# 155 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	release
	end

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_2:
# 74 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_1


SlateportCity_OceanicMuseum_2F_EventScript_PrepareForGruntBattle::
# 160 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	special SavePlayerParty
# 161 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 162 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	special ChooseHalfPartyForBattle
# 163 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitstate
# 164 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	goto_if_ne VAR_RESULT, 0, SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle
# 165 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	goto SlateportCity_OceanicMuseum_2F_EventScript_QuitPartySelect
	return


SlateportCity_OceanicMuseum_2F_EventScript_QuitPartySelect::
# 170 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_NotGetOutOfThisOne
# 171 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 172 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	special SavePlayerParty
# 173 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 174 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	special ChooseHalfPartyForBattle
# 175 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitstate
# 176 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	goto_if_ne VAR_RESULT, 0, SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle
# 177 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	goto SlateportCity_OceanicMuseum_2F_EventScript_QuitPartySelect
	end


SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle::
# 182 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 183 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	turnobject 8, DIR_WEST
# 184 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_Text_0, MSGBOX_DEFAULT
# 185 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 186 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
# 187 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
# 188 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 189 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	checkfriendchoice
# 190 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	switch VAR_RESULT
# 191 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	case SPENCER, SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_3
# 193 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	case BREN, SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_4
# 195 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	case KYLE, SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_5
SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_1:
	return

SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_3:
# 192 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	multi_2_vs_2 TRAINER_GRUNT_MUSEUM_1, SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat, TRAINER_GRUNT_MUSEUM_2, SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat, PARTNER_BREN_MUSEUM
	goto SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_1

SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_4:
# 194 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	multi_2_vs_2 TRAINER_GRUNT_MUSEUM_1, SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat, TRAINER_GRUNT_MUSEUM_2, SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat, PARTNER_KYLE_MUSEUM
	goto SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_1

SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_5:
# 196 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	multi_2_vs_2 TRAINER_GRUNT_MUSEUM_1, SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat, TRAINER_GRUNT_MUSEUM_2, SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat, PARTNER_SPENCER_MUSEUM
	goto SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_1


SlateportCity_OceanicMuseum_2F_EventScript_ReadyRegisterBirch::
# 202 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 1
	return


SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts::
# 207 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 208 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
	return


SlateportCity_OceanicMuseum_2F_EventScript_SternFaceGrunts::
# 213 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterLeft
# 214 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
	return


SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntSouth::
# 219 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth
# 220 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 8, SlateportCity_OceanicMuseum_2F_Movement_RivalApproachGrunt
# 221 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
	return


SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntWest::
# 226 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest
# 227 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
	return


# 231 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth:
# 232 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 233 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 234 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_left
	step_end

# 237 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest:
# 238 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 239 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 240 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 241 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 242 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_left
	step_end

# 245 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_RivalApproachGrunt:
# 246 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 247 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 247 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 248 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 249 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_down
	step_end

# 252 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_Unused:
# 253 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 254 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 255 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 256 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 257 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 258 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 259 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 260 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 261 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 262 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 263 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 264 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 265 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_8
	step_end

# 268 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer:
# 269 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
	step_end

# 272 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter:
# 273 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 274 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 275 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 276 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 277 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 278 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 279 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 280 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 281 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
	step_end

# 284 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle:
# 285 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
	step_end

# 288 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter:
# 289 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 290 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 291 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_down
	step_end

# 294 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach:
# 295 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 296 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 297 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 298 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 299 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 300 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
	step_end

# 303 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated:
# 304 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock_facing_direction
# 305 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 306 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	unlock_facing_direction
	step_end

# 309 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter:
# 310 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
	step_end

# 313 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach:
# 314 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 315 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 316 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 317 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 318 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 319 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 320 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 321 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
	step_end

# 324 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie:
# 325 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 326 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 327 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 328 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 329 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 330 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 331 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 332 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 333 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_8
# 334 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_fast_down
# 335 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_up
	step_end

# 338 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_Rival1Leaves:
# 339 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 339 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 339 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 339 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 339 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 339 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 340 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 340 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 340 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 340 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 341 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	set_invisible
	step_end

# 394 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 395 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample1::
# 396 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1, MSGBOX_SIGN
# 397 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 398 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 399 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample2::
# 400 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2, MSGBOX_SIGN
# 401 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 402 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 403 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PressureExperiment::
# 404 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_PressureExperiment, MSGBOX_SIGN
# 405 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 406 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 407 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_HoennModel::
# 408 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_HoennModel, MSGBOX_SIGN
# 409 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 410 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 411 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_DeepSeawaterDisplay::
# 412 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay, MSGBOX_SIGN
# 413 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 414 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 415 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SurfaceSeawaterDisplay::
# 416 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay, MSGBOX_SIGN
# 417 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 418 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 419 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SSTidalReplica::
# 420 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica, MSGBOX_SIGN
# 421 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 422 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 423 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SubmarineReplica::
# 424 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica, MSGBOX_SIGN
# 425 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 426 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 427 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SubmersibleReplica::
# 428 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica, MSGBOX_SIGN
# 429 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 430 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 431 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SSAnneReplica::
# 432 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica, MSGBOX_SIGN
# 433 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 434 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 435 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron1::
# 436 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip, MSGBOX_NPC
# 437 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 438 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 439 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron2::
# 440 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum, MSGBOX_NPC
# 441 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 442 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 443 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron3::
# 444 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock
# 445 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	faceplayer
# 446 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine, MSGBOX_DEFAULT
# 447 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 448 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 449 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 450 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	release
# 451 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 452 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 453 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_ThankYouForTheParts:
# 454 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Yes? If you're looking for STERN,\n"
# 455 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "that would be me.\p"
# 456 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ah! Those must be the parts I ordered\n"
# 457 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "from MR. STONE of DEVON.\p"
# 458 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Thank you! That's great!\n"
# 459 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We can prepare for our expedition now.$"
# 460 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 461 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WellTakeThoseParts:
# 462 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Hehehe, hold it!\n"
# 463 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We'll take those parts!$"
# 464 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 465 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternWhoAreYou:
# 466 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "CAPT. STERN: Wh-what?\n"
# 467 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Who are you people?$"
# 468 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 469 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WereTeamAqua:
# 470 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We're TEAM AQUA!\p"
# 471 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Our BOSS wants those parts!\n"
# 472 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Shut your yap and fork them over!$"
# 473 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 474 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat:
# 475 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Awaaaah!\n"
# 476 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Some kids beat us!$"
# 477 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 478 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_BossGoingToBeFurious:
# 479 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Oh, man, what a disaster…\n"
# 480 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "The BOSS is going to be furious…$"
# 481 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 482 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_LetMeTakeCareOfThis:
# 483 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Humph, sniveling wimp!\n"
# 484 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Let me take care of this!$"
# 485 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 486 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat:
# 487 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "What?!\n"
# 488 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "What do you mean we lost?!$"
# 489 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 490 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_MeddlingKid:
# 491 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Now what? If we don't get the parts,\n"
# 492 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "we're in for it!\p"
# 493 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Arrgh, I didn't count on being meddled\n"
# 494 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "with by some meddling kids!$"
# 495 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 496 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_CameToSeeWhatsTakingSoLong:
# 497 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I came to see what was taking so\n"
# 498 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "long to snatch some parts, and you\l"
# 499 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "simps are held up by mere children?$"
# 500 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 501 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_ArchieWarning:
# 502 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We are TEAM AQUA,\n"
# 503 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "and we love the sea!\p"
# 504 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "And I am TEAM AQUA's leader,\n"
# 505 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "ARCHIE!\p"
# 506 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "What makes you interfere with us?\p"
# 507 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "…No! You can't be!\n"
# 508 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "You're not with TEAM MAGMA?\p"
# 509 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Wait, that can't be right.\n"
# 510 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "You're not dressed for the part.\p"
# 511 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "… … … … … …\n"
# 512 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "… … … … … …\p"
# 513 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "POKéMON, people… All life depends on\n"
# 514 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "the sea.\p"
# 515 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "So, TEAM AQUA is dedicated to\n"
# 516 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "the expansion of the sea.\p"
# 517 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Don't you agree? What we are doing\n"
# 518 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "is a magnificent undertaking.\p"
# 519 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ah, fine…\n"
# 520 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "You're still too young to understand\l"
# 521 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "our noble objective.\p"
# 522 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "But, I warn you, don't even consider\n"
# 523 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "interfering with our plans again.\p"
# 524 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "The consequences will cost you\n"
# 525 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "dearly!\p"
# 526 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "And don't you forget it!$"
# 527 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 528 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternThankYouForSavingUs:
# 529 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "CAPT. STERN: You're…\n"
# 530 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ah, okay, you're {PLAYER}{KUN}…\p"
# 531 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Anyway, that was a tense situation!\n"
# 532 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Thank you two for saving us!\p"
# 533 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Oh, yes, I almost forgot that you\n"
# 534 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "even brought the parts from DEVON!$"
# 535 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 536 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternIveGotToGo:
# 537 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "CAPT. STERN: Whoops!\n"
# 538 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "There's no time to lose!\p"
# 539 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We have to set out on our ocean-floor\n"
# 540 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "expedition really soon.\p"
# 541 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Thanks again, but now I've got\n"
# 542 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "to go!\p"
# 543 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Feel free to wander around and check\n"
# 544 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "out our facilities, though.$"
# 545 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 546 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip:
# 547 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I saw a model of a ship here.\p"
# 548 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It reminded me of the ABANDONED SHIP\n"
# 549 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "near DEWFORD TOWN…$"
# 550 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 551 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum:
# 552 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Don't you dare run around inside\n"
# 553 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "the MUSEUM!$"
# 554 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 555 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine:
# 556 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Wow, the submarine's awesome!\n"
# 557 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I want to go for a ride!$"
# 558 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 559 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1:
# 560 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“WATER QUALITY SAMPLE 1,” the\n"
# 561 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "label says.\p"
# 562 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "The sea is all connected, but the\n"
# 563 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "water seems to differ by region.$"
# 564 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 565 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2:
# 566 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“WATER QUALITY SAMPLE 2,” the\n"
# 567 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "label says.\p"
# 568 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Does the saltiness of seawater differ\n"
# 569 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "by region, too?$"
# 570 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 571 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_PressureExperiment:
# 572 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "A rubber ball is expanding and\n"
# 573 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "shrinking.\p"
# 574 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“In the sea, the weight of water itself\n"
# 575 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "exerts pressure.\p"
# 576 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“In shallow water, the pressure is not\n"
# 577 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "very heavy.\p"
# 578 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“However, in extremely deep water,\n"
# 579 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "the pressure can reach even tens of\l"
# 580 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "thousands of tons on a small area.”$"
# 581 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 582 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_HoennModel:
# 583 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“MODEL OF HOENN REGION”\p"
# 584 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It's a miniature diorama of the\n"
# 585 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "HOENN region.\p"
# 586 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Where is LITTLEROOT TOWN on this?$"
# 587 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 588 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay:
# 589 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It's a display on the flow of seawater.\p"
# 590 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Near the bottom of the sea, water\n"
# 591 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "flows due to differences in such\l"
# 592 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "factors as temperature and salinity.”$"
# 593 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 594 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay:
# 595 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It's a display on the flow of seawater.\p"
# 596 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Toward the surface, seawater flows\n"
# 597 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "as currents driven by the winds.”$"
# 598 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 599 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica:
# 600 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“THE FERRY S.S. TIDAL\p"
# 601 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“A scale replica of the ship under\n"
# 602 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "construction at STERN'S SHIPYARD.”$"
# 603 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 604 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica:
# 605 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“SUBMARINE EXPLORER 1\p"
# 606 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“A replica of the high-performance\n"
# 607 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "ocean floor exploration submarine.”$"
# 608 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 609 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica:
# 610 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“SUBMERSIBLE POD\p"
# 611 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“A replica of a compact, unmanned\n"
# 612 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "pod for seafloor exploration.”$"
# 613 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 614 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica:
# 615 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“S.S. ANNE\p"
# 616 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“A replica of the luxury liner that\n"
# 617 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "circles the globe.”$"

SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_Text_0:
# 184 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Bring it on!$"

SlateportCity_OceanicMuseum_2F_SpencerFoundStern::
# 33 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Look, {PLAYER}!\n"
	.string "I found CAPT. STERN.\l"
	.string "Go ahead and deliver those GOODS!$"

SlateportCity_OceanicMuseum_2F_BrenFoundStern::
# 39 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Look, {PLAYER}!\n"
	.string "I found CAPT. STERN.\l"
	.string "Go ahead and deliver those GOODS!$"

SlateportCity_OceanicMuseum_2F_KyleFoundStern::
# 45 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Look, {PLAYER}!\n"
	.string "I found CAPT. STERN.\l"
	.string "Go ahead and deliver those GOODS!$"

SlateportCity_OceanicMuseum_2F_SpencerBattleTogether::
# 344 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "C'mon!\n"
	.string "Let's take them on together!\p"
	.string "Choose the POKéMON you want to battle\n"
	.string "with.$"

SlateportCity_OceanicMuseum_2F_BrenBattleTogether::
# 350 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "C'mon!\n"
	.string "Let's take them on together!\p"
	.string "Choose the POKéMON you want to battle\n"
	.string "with.$"

SlateportCity_OceanicMuseum_2F_KyleBattleTogether::
# 356 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "C'mon!\n"
	.string "Let's take them on together!\p"
	.string "Choose the POKéMON you want to battle\n"
	.string "with.$"

SlateportCity_OceanicMuseum_2F_Text_NotGetOutOfThisOne::
# 362 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We have to protect STERN!\n"
	.string "Come on! Fight with me!$"

SlateportCity_OceanicMuseum_2F_SpencerAfterStern::
# 367 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We really have to watch out\n"
	.string "for those AQUA guys, huh?\p"
	.string "It seems they may be more trouble\n"
	.string "than we first thought.\p"
	.string "Anyway, nice work!\n"
	.string "All this battling has me revved up for\l"
	.string "the next GYM! I'm headed for MAUVILLE.\l"
	.string "See you out there!$"

SlateportCity_OceanicMuseum_2F_BrenAfterStern::
# 376 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We really have to watch out\n"
	.string "for those AQUA guys, huh?\p"
	.string "It seems they may be more trouble\n"
	.string "than we first thought.\p"
	.string "Anyway, nice work!\n"
	.string "All this battling has me revved up for\l"
	.string "the next GYM! I'm headed for MAUVILLE.\l"
	.string "See you out there!$"

SlateportCity_OceanicMuseum_2F_KyleAfterStern::
# 385 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We really have to watch out\n"
	.string "for those AQUA guys, huh?\p"
	.string "It seems they may be more trouble\n"
	.string "than we first thought.\p"
	.string "Anyway, nice work!\n"
	.string "All this battling has me revved up for\l"
	.string "the next GYM! I'm headed for MAUVILLE.\l"
	.string "See you out there!$"
