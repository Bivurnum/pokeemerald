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
	ballfollowingmon
# 55 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_ThankYouForTheParts, MSGBOX_DEFAULT
# 56 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 57 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 58 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject 3
# 59 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter
# 60 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 61 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject 4
# 62 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter
# 63 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 64 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach
# 65 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach
# 66 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 67 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts
# 68 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WellTakeThoseParts, MSGBOX_DEFAULT
# 69 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_ne VAR_FACING, DIR_EAST, SlateportCity_OceanicMuseum_2F_EventScript_SternFaceGrunts
# 70 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternWhoAreYou, MSGBOX_DEFAULT
# 71 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WereTeamAqua, MSGBOX_DEFAULT
# 72 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 73 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	getplayerxy VAR_0x8001, VAR_0x8002
# 74 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_0x8001, 13
	goto_if_eq SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_2
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_1:
# 77 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 8, SlateportCity_OceanicMuseum_2F_Movement_RivalApproachGrunt
# 78 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 79 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 80 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 81 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	rival1talk SlateportCity_OceanicMuseum_2F_SpencerBattleTogether, SlateportCity_OceanicMuseum_2F_BrenBattleTogether, SlateportCity_OceanicMuseum_2F_KyleBattleTogether
# 84 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 85 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call SlateportCity_OceanicMuseum_2F_EventScript_PrepareForGruntBattle
# 86 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
# 87 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
# 88 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 89 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 16
# 90 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterDown
# 91 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 92 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 93 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, Common_Movement_BeginTalkDown
# 94 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 95 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_BossGoingToBeFurious, MSGBOX_DEFAULT
# 96 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 97 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 16
# 98 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, Common_Movement_BeginTalkUp
# 99 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 100 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_MeddlingKid, MSGBOX_DEFAULT
# 101 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 102 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 35
# 103 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject 2
# 104 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 2, SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter
# 105 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie
# 106 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 107 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_CameToSeeWhatsTakingSoLong, MSGBOX_DEFAULT
# 108 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 109 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 2, SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer
# 110 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 111 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_ArchieWarning, MSGBOX_DEFAULT
# 112 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 113 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	savebgm MUS_DUMMY
# 114 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadedefaultbgm
# 115 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 116 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject 2
# 117 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject 3
# 118 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject 4
# 119 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 120 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 30
# 121 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS
# 122 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterRight
# 123 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 124 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 125 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 1, Common_Movement_BeginTalkLeft
# 126 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 127 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternThankYouForSavingUs, MSGBOX_DEFAULT
# 128 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_0x8004, ITEM_DEVON_PARTS
# 129 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 130 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternIveGotToGo, MSGBOX_DEFAULT
# 131 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 132 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 133 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playfanfare MUS_HEAL
# 134 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitfanfare
# 135 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	special HealPlayerParty
# 136 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject 1
# 137 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	callnative UpdateFollowingPokemon
# 138 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_110_TEAM_AQUA
# 139 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_eq VAR_REGISTER_BIRCH_STATE, 0, SlateportCity_OceanicMuseum_2F_EventScript_ReadyRegisterBirch
# 140 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_DELIVERED_DEVON_GOODS
# 141 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_DEVON_EMPLOYEE
# 142 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
# 143 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1
# 144 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 145 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 146 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 8, Common_Movement_BeginTalkDown
# 147 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 148 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	rival1talk SlateportCity_OceanicMuseum_2F_SpencerAfterStern, SlateportCity_OceanicMuseum_2F_BrenAfterStern, SlateportCity_OceanicMuseum_2F_KyleAfterStern
# 151 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 152 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 153 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 8, SlateportCity_OceanicMuseum_2F_Movement_Rival1Leaves
# 154 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 155 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject 8
# 156 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_CAPTAIN_STERN
# 157 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	release
	end

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_2:
# 75 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_1


SlateportCity_OceanicMuseum_2F_EventScript_PrepareForGruntBattle::
# 162 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	special SavePlayerParty
# 163 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 164 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	special ChooseHalfPartyForBattle
# 165 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitstate
# 166 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	goto_if_ne VAR_RESULT, 0, SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle
# 167 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	goto SlateportCity_OceanicMuseum_2F_EventScript_QuitPartySelect
	return


SlateportCity_OceanicMuseum_2F_EventScript_QuitPartySelect::
# 172 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_NotGetOutOfThisOne
# 173 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 174 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	special SavePlayerParty
# 175 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 176 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	special ChooseHalfPartyForBattle
# 177 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitstate
# 178 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	goto_if_ne VAR_RESULT, 0, SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle
# 179 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	goto SlateportCity_OceanicMuseum_2F_EventScript_QuitPartySelect
	end


SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle::
# 184 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 185 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	turnobject 8, DIR_WEST
# 186 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_Text_0, MSGBOX_DEFAULT
# 187 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 188 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
# 189 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
# 190 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 191 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	checkfriendchoice
# 192 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	switch VAR_RESULT
# 193 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	case SPENCER, SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_3
# 195 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	case BREN, SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_4
# 197 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	case KYLE, SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_5
SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_1:
	return

SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_3:
# 194 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	multi_2_vs_2 TRAINER_GRUNT_MUSEUM_1, SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat, TRAINER_GRUNT_MUSEUM_2, SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat, PARTNER_BREN_MUSEUM
	goto SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_1

SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_4:
# 196 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	multi_2_vs_2 TRAINER_GRUNT_MUSEUM_1, SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat, TRAINER_GRUNT_MUSEUM_2, SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat, PARTNER_KYLE_MUSEUM
	goto SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_1

SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_5:
# 198 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	multi_2_vs_2 TRAINER_GRUNT_MUSEUM_1, SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat, TRAINER_GRUNT_MUSEUM_2, SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat, PARTNER_SPENCER_MUSEUM
	goto SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_1


SlateportCity_OceanicMuseum_2F_EventScript_ReadyRegisterBirch::
# 204 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 1
	return


SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts::
# 209 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 210 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
	return


SlateportCity_OceanicMuseum_2F_EventScript_SternFaceGrunts::
# 215 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterLeft
# 216 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
	return


SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntSouth::
# 221 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth
# 222 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 8, SlateportCity_OceanicMuseum_2F_Movement_RivalApproachGrunt
# 223 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
	return


SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntWest::
# 228 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest
# 229 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
	return


# 233 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth:
# 234 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 235 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 236 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_left
	step_end

# 239 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest:
# 240 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 241 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 242 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 243 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 244 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_left
	step_end

# 247 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_RivalApproachGrunt:
# 248 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 249 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 249 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 250 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 251 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_down
	step_end

# 254 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_Unused:
# 255 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 256 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 257 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 258 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 259 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 260 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 261 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 262 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 263 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 264 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 265 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 266 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 267 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_8
	step_end

# 270 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer:
# 271 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
	step_end

# 274 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter:
# 275 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 276 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 277 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 278 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 279 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 280 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 281 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 282 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 283 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
	step_end

# 286 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle:
# 287 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
	step_end

# 290 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter:
# 291 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 292 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 293 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_down
	step_end

# 296 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach:
# 297 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 298 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 299 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 300 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 301 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 302 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
	step_end

# 305 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated:
# 306 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock_facing_direction
# 307 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 308 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	unlock_facing_direction
	step_end

# 311 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter:
# 312 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
	step_end

# 315 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach:
# 316 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 317 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 318 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 319 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 320 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 321 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 322 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 323 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
	step_end

# 326 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie:
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
	delay_16
# 334 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 335 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_8
# 336 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_fast_down
# 337 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_up
	step_end

# 340 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_Rival1Leaves:
# 341 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 341 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 341 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 341 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 341 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 341 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 342 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 342 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 342 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 342 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 343 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	set_invisible
	step_end

# 396 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 397 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample1::
# 398 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1, MSGBOX_SIGN
# 399 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 400 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 401 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample2::
# 402 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2, MSGBOX_SIGN
# 403 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 404 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 405 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PressureExperiment::
# 406 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_PressureExperiment, MSGBOX_SIGN
# 407 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 408 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 409 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_HoennModel::
# 410 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_HoennModel, MSGBOX_SIGN
# 411 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 412 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 413 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_DeepSeawaterDisplay::
# 414 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay, MSGBOX_SIGN
# 415 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 416 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 417 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SurfaceSeawaterDisplay::
# 418 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay, MSGBOX_SIGN
# 419 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 420 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 421 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SSTidalReplica::
# 422 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica, MSGBOX_SIGN
# 423 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 424 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 425 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SubmarineReplica::
# 426 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica, MSGBOX_SIGN
# 427 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 428 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 429 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SubmersibleReplica::
# 430 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica, MSGBOX_SIGN
# 431 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 432 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 433 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SSAnneReplica::
# 434 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica, MSGBOX_SIGN
# 435 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 436 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 437 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron1::
# 438 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip, MSGBOX_NPC
# 439 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 440 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 441 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron2::
# 442 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum, MSGBOX_NPC
# 443 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 444 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 445 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron3::
# 446 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock
# 447 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	faceplayer
# 448 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine, MSGBOX_DEFAULT
# 449 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 450 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 451 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 452 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	release
# 453 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 454 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 455 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_ThankYouForTheParts:
# 456 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Yes? If you're looking for STERN,\n"
# 457 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "that would be me.\p"
# 458 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ah! Those must be the parts I ordered\n"
# 459 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "from MR. STONE of DEVON.\p"
# 460 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Thank you! That's great!\n"
# 461 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We can prepare for our expedition now.$"
# 462 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 463 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WellTakeThoseParts:
# 464 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Hehehe, hold it!\n"
# 465 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We'll take those parts!$"
# 466 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 467 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternWhoAreYou:
# 468 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "CAPT. STERN: Wh-what?\n"
# 469 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Who are you people?$"
# 470 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 471 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WereTeamAqua:
# 472 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We're TEAM AQUA!\p"
# 473 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Our BOSS wants those parts!\n"
# 474 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Shut your yap and fork them over!$"
# 475 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 476 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat:
# 477 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Awaaaah!\n"
# 478 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Some kids beat us!$"
# 479 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 480 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_BossGoingToBeFurious:
# 481 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Oh, man, what a disaster…\n"
# 482 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "The BOSS is going to be furious…$"
# 483 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 484 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_LetMeTakeCareOfThis:
# 485 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Humph, sniveling wimp!\n"
# 486 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Let me take care of this!$"
# 487 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 488 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat:
# 489 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "What?!\n"
# 490 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "What do you mean we lost?!$"
# 491 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 492 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_MeddlingKid:
# 493 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Now what? If we don't get the parts,\n"
# 494 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "we're in for it!\p"
# 495 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Arrgh, I didn't count on being meddled\n"
# 496 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "with by some meddling kids!$"
# 497 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 498 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_CameToSeeWhatsTakingSoLong:
# 499 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I came to see what was taking so\n"
# 500 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "long to snatch some parts, and you\l"
# 501 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "simps are held up by mere children?$"
# 502 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 503 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_ArchieWarning:
# 504 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We are TEAM AQUA,\n"
# 505 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "and we love the sea!\p"
# 506 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "And I am TEAM AQUA's leader,\n"
# 507 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "ARCHIE!\p"
# 508 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "What makes you interfere with us?\p"
# 509 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "…No! You can't be!\n"
# 510 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "You're not with TEAM MAGMA?\p"
# 511 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Wait, that can't be right.\n"
# 512 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "You're not dressed for the part.\p"
# 513 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "… … … … … …\n"
# 514 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "… … … … … …\p"
# 515 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "POKéMON, people… All life depends on\n"
# 516 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "the sea.\p"
# 517 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "So, TEAM AQUA is dedicated to\n"
# 518 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "the expansion of the sea.\p"
# 519 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Don't you agree? What we are doing\n"
# 520 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "is a magnificent undertaking.\p"
# 521 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ah, fine…\n"
# 522 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "You're still too young to understand\l"
# 523 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "our noble objective.\p"
# 524 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "But, I warn you, don't even consider\n"
# 525 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "interfering with our plans again.\p"
# 526 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "The consequences will cost you\n"
# 527 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "dearly!\p"
# 528 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "And don't you forget it!$"
# 529 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 530 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternThankYouForSavingUs:
# 531 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "CAPT. STERN: You're…\n"
# 532 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ah, okay, you're {PLAYER}{KUN}…\p"
# 533 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Anyway, that was a tense situation!\n"
# 534 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Thank you two for saving us!\p"
# 535 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Oh, yes, I almost forgot that you\n"
# 536 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "even brought the parts from DEVON!$"
# 537 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 538 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternIveGotToGo:
# 539 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "CAPT. STERN: Whoops!\n"
# 540 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "There's no time to lose!\p"
# 541 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We have to set out on our ocean-floor\n"
# 542 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "expedition really soon.\p"
# 543 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Thanks again, but now I've got\n"
# 544 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "to go!\p"
# 545 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Feel free to wander around and check\n"
# 546 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "out our facilities, though.$"
# 547 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 548 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip:
# 549 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I saw a model of a ship here.\p"
# 550 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It reminded me of the ABANDONED SHIP\n"
# 551 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "near DEWFORD TOWN…$"
# 552 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 553 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum:
# 554 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Don't you dare run around inside\n"
# 555 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "the MUSEUM!$"
# 556 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 557 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine:
# 558 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Wow, the submarine's awesome!\n"
# 559 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I want to go for a ride!$"
# 560 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 561 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1:
# 562 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“WATER QUALITY SAMPLE 1,” the\n"
# 563 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "label says.\p"
# 564 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "The sea is all connected, but the\n"
# 565 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "water seems to differ by region.$"
# 566 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 567 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2:
# 568 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“WATER QUALITY SAMPLE 2,” the\n"
# 569 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "label says.\p"
# 570 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Does the saltiness of seawater differ\n"
# 571 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "by region, too?$"
# 572 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 573 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_PressureExperiment:
# 574 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "A rubber ball is expanding and\n"
# 575 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "shrinking.\p"
# 576 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“In the sea, the weight of water itself\n"
# 577 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "exerts pressure.\p"
# 578 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“In shallow water, the pressure is not\n"
# 579 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "very heavy.\p"
# 580 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“However, in extremely deep water,\n"
# 581 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "the pressure can reach even tens of\l"
# 582 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "thousands of tons on a small area.”$"
# 583 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 584 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_HoennModel:
# 585 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“MODEL OF HOENN REGION”\p"
# 586 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It's a miniature diorama of the\n"
# 587 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "HOENN region.\p"
# 588 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Where is LITTLEROOT TOWN on this?$"
# 589 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 590 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay:
# 591 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It's a display on the flow of seawater.\p"
# 592 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Near the bottom of the sea, water\n"
# 593 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "flows due to differences in such\l"
# 594 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "factors as temperature and salinity.”$"
# 595 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 596 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay:
# 597 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It's a display on the flow of seawater.\p"
# 598 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Toward the surface, seawater flows\n"
# 599 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "as currents driven by the winds.”$"
# 600 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 601 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica:
# 602 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“THE FERRY S.S. TIDAL\p"
# 603 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“A scale replica of the ship under\n"
# 604 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "construction at STERN'S SHIPYARD.”$"
# 605 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 606 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica:
# 607 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“SUBMARINE EXPLORER 1\p"
# 608 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“A replica of the high-performance\n"
# 609 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "ocean floor exploration submarine.”$"
# 610 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 611 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica:
# 612 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“SUBMERSIBLE POD\p"
# 613 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“A replica of a compact, unmanned\n"
# 614 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "pod for seafloor exploration.”$"
# 615 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 616 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica:
# 617 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“S.S. ANNE\p"
# 618 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“A replica of the luxury liner that\n"
# 619 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "circles the globe.”$"

SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_Text_0:
# 186 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
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
# 346 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "C'mon!\n"
	.string "Let's take them on together!\p"
	.string "Choose the POKéMON you want to battle\n"
	.string "with.$"

SlateportCity_OceanicMuseum_2F_BrenBattleTogether::
# 352 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "C'mon!\n"
	.string "Let's take them on together!\p"
	.string "Choose the POKéMON you want to battle\n"
	.string "with.$"

SlateportCity_OceanicMuseum_2F_KyleBattleTogether::
# 358 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "C'mon!\n"
	.string "Let's take them on together!\p"
	.string "Choose the POKéMON you want to battle\n"
	.string "with.$"

SlateportCity_OceanicMuseum_2F_Text_NotGetOutOfThisOne::
# 364 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We have to protect STERN!\n"
	.string "Come on! Fight with me!$"

SlateportCity_OceanicMuseum_2F_SpencerAfterStern::
# 369 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We really have to watch out\n"
	.string "for those AQUA guys, huh?\p"
	.string "It seems they may be more trouble\n"
	.string "than we first thought.\p"
	.string "Anyway, nice work!\n"
	.string "All this battling has me revved up for\l"
	.string "the next GYM! I'm headed for MAUVILLE.\l"
	.string "See you out there!$"

SlateportCity_OceanicMuseum_2F_BrenAfterStern::
# 378 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We really have to watch out\n"
	.string "for those AQUA guys, huh?\p"
	.string "It seems they may be more trouble\n"
	.string "than we first thought.\p"
	.string "Anyway, nice work!\n"
	.string "All this battling has me revved up for\l"
	.string "the next GYM! I'm headed for MAUVILLE.\l"
	.string "See you out there!$"

SlateportCity_OceanicMuseum_2F_KyleAfterStern::
# 387 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We really have to watch out\n"
	.string "for those AQUA guys, huh?\p"
	.string "It seems they may be more trouble\n"
	.string "than we first thought.\p"
	.string "Anyway, nice work!\n"
	.string "All this battling has me revved up for\l"
	.string "the next GYM! I'm headed for MAUVILLE.\l"
	.string "See you out there!$"
