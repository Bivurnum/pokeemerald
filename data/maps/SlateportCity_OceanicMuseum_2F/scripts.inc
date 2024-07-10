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
	applymovement 8, Common_Movement_FaceLeft
# 27 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 28 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	release
	end


SlateportCity_OceanicMuseum_2F_EventScript_CaptStern::
# 51 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock
# 52 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	faceplayer
# 53 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_ThankYouForTheParts, MSGBOX_DEFAULT
# 54 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 55 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 56 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject 3
# 57 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter
# 58 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 59 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject 4
# 60 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter
# 61 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 62 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach
# 63 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach
# 64 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 65 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts
# 66 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WellTakeThoseParts, MSGBOX_DEFAULT
# 67 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_ne VAR_FACING, DIR_EAST, SlateportCity_OceanicMuseum_2F_EventScript_SternFaceGrunts
# 68 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternWhoAreYou, MSGBOX_DEFAULT
# 69 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WereTeamAqua, MSGBOX_DEFAULT
# 70 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 71 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	getplayerxy VAR_0x8001, VAR_0x8002
# 72 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_0x8001, 13
	goto_if_eq SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_2
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_1:
# 75 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 8, SlateportCity_OceanicMuseum_2F_Movement_RivalApproachGrunt
# 76 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 77 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 78 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 79 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	rival1talk SlateportCity_OceanicMuseum_2F_SpencerBattleTogether, SlateportCity_OceanicMuseum_2F_BrenBattleTogether, SlateportCity_OceanicMuseum_2F_KyleBattleTogether
# 82 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call SlateportCity_OceanicMuseum_2F_EventScript_PrepareForGruntBattle
# 83 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
# 84 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
# 85 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 86 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 16
# 87 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterDown
# 88 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 89 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 90 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, Common_Movement_BeginTalkDown
# 91 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 92 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_BossGoingToBeFurious, MSGBOX_DEFAULT
# 93 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 94 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 16
# 95 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, Common_Movement_BeginTalkUp
# 96 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 97 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_MeddlingKid, MSGBOX_DEFAULT
# 98 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 99 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 35
# 100 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject 2
# 101 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 2, SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter
# 102 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie
# 103 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 104 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_CameToSeeWhatsTakingSoLong, MSGBOX_DEFAULT
# 105 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 106 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 2, SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer
# 107 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 108 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_ArchieWarning, MSGBOX_DEFAULT
# 109 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 110 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	savebgm MUS_DUMMY
# 111 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadedefaultbgm
# 112 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 113 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject 2
# 114 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject 3
# 115 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject 4
# 116 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 117 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 30
# 118 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS
# 119 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterRight
# 120 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 121 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 122 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 1, Common_Movement_BeginTalkLeft
# 123 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 124 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternThankYouForSavingUs, MSGBOX_DEFAULT
# 125 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_0x8004, ITEM_DEVON_PARTS
# 126 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 127 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternIveGotToGo, MSGBOX_DEFAULT
# 128 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 129 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 130 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playfanfare MUS_HEAL
# 131 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitfanfare
# 132 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	special HealPlayerParty
# 133 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject 1
# 134 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_110_TEAM_AQUA
# 135 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_eq VAR_REGISTER_BIRCH_STATE, 0, SlateportCity_OceanicMuseum_2F_EventScript_ReadyRegisterBirch
# 136 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_DELIVERED_DEVON_GOODS
# 137 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_DEVON_EMPLOYEE
# 138 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
# 139 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1
# 140 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 141 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 142 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 8, Common_Movement_BeginTalkDown
# 143 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 144 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	rival1talk SlateportCity_OceanicMuseum_2F_SpencerAfterStern, SlateportCity_OceanicMuseum_2F_BrenAfterStern, SlateportCity_OceanicMuseum_2F_KyleAfterStern
# 147 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 148 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 8, SlateportCity_OceanicMuseum_2F_Movement_Rival1Leaves
# 149 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 150 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject 8
# 151 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_CAPTAIN_STERN
# 152 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	release
	end

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_2:
# 73 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_1


SlateportCity_OceanicMuseum_2F_EventScript_PrepareForGruntBattle::
# 157 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	special SavePlayerParty
# 158 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 159 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	special ChooseHalfPartyForBattle
# 160 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitstate
# 161 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	goto_if_ne VAR_RESULT, 0, SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle
# 162 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	goto SlateportCity_OceanicMuseum_2F_EventScript_QuitPartySelect
	return


SlateportCity_OceanicMuseum_2F_EventScript_QuitPartySelect::
# 167 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_NotGetOutOfThisOne
# 168 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 169 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	special SavePlayerParty
# 170 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 171 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	special ChooseHalfPartyForBattle
# 172 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitstate
# 173 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	goto_if_ne VAR_RESULT, 0, SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle
# 174 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	goto SlateportCity_OceanicMuseum_2F_EventScript_QuitPartySelect
	end


SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle::
# 179 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 180 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	turnobject 8, DIR_WEST
# 181 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_Text_0, MSGBOX_DEFAULT
# 182 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 183 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
# 184 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
# 185 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 186 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	checkfriendchoice
# 187 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	switch VAR_RESULT
# 188 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	case SPENCER, SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_3
# 190 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	case BREN, SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_4
# 192 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	case KYLE, SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_5
SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_1:
	return

SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_3:
# 189 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	multi_2_vs_2 TRAINER_GRUNT_MUSEUM_1, SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat, TRAINER_GRUNT_MUSEUM_2, SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat, PARTNER_BREN_MUSEUM
	goto SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_1

SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_4:
# 191 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	multi_2_vs_2 TRAINER_GRUNT_MUSEUM_1, SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat, TRAINER_GRUNT_MUSEUM_2, SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat, PARTNER_KYLE_MUSEUM
	goto SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_1

SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_5:
# 193 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	multi_2_vs_2 TRAINER_GRUNT_MUSEUM_1, SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat, TRAINER_GRUNT_MUSEUM_2, SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat, PARTNER_SPENCER_MUSEUM
	goto SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_1


SlateportCity_OceanicMuseum_2F_EventScript_ReadyRegisterBirch::
# 199 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 1
	return


SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts::
# 204 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 205 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
	return


SlateportCity_OceanicMuseum_2F_EventScript_SternFaceGrunts::
# 210 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterLeft
# 211 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
	return


SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntSouth::
# 216 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth
# 217 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 8, SlateportCity_OceanicMuseum_2F_Movement_RivalApproachGrunt
# 218 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
	return


SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntWest::
# 223 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest
# 224 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
	return


# 228 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth:
# 229 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 230 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 231 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_left
	step_end

# 234 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest:
# 235 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 236 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 237 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 238 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 239 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_left
	step_end

# 242 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_RivalApproachGrunt:
# 243 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 244 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 244 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 245 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 246 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_down
	step_end

# 249 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_Unused:
# 250 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 251 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 252 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 253 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 254 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 255 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 256 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 257 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 258 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 259 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 260 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 261 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 262 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_8
	step_end

# 265 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer:
# 266 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
	step_end

# 269 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter:
# 270 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 271 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 272 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 273 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 274 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 275 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 276 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 277 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 278 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
	step_end

# 281 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle:
# 282 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
	step_end

# 285 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter:
# 286 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 287 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 288 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_down
	step_end

# 291 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach:
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
	step_end

# 300 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated:
# 301 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock_facing_direction
# 302 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 303 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	unlock_facing_direction
	step_end

# 306 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter:
# 307 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
	step_end

# 310 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach:
# 311 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
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
# 318 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
	step_end

# 321 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie:
# 322 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 323 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 324 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
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
	delay_8
# 331 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_fast_down
# 332 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_up
	step_end

# 335 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_Rival1Leaves:
# 336 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 336 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 336 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 336 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 336 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 336 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 337 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 337 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 337 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 337 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 338 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	set_invisible
	step_end

# 391 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 392 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample1::
# 393 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1, MSGBOX_SIGN
# 394 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 395 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 396 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample2::
# 397 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2, MSGBOX_SIGN
# 398 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 399 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 400 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PressureExperiment::
# 401 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_PressureExperiment, MSGBOX_SIGN
# 402 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 403 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 404 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_HoennModel::
# 405 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_HoennModel, MSGBOX_SIGN
# 406 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 407 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 408 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_DeepSeawaterDisplay::
# 409 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay, MSGBOX_SIGN
# 410 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 411 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 412 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SurfaceSeawaterDisplay::
# 413 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay, MSGBOX_SIGN
# 414 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 415 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 416 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SSTidalReplica::
# 417 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica, MSGBOX_SIGN
# 418 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 419 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 420 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SubmarineReplica::
# 421 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica, MSGBOX_SIGN
# 422 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 423 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 424 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SubmersibleReplica::
# 425 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica, MSGBOX_SIGN
# 426 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 427 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 428 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SSAnneReplica::
# 429 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica, MSGBOX_SIGN
# 430 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 431 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 432 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron1::
# 433 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip, MSGBOX_NPC
# 434 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 435 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 436 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron2::
# 437 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum, MSGBOX_NPC
# 438 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 439 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 440 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron3::
# 441 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock
# 442 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	faceplayer
# 443 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine, MSGBOX_DEFAULT
# 444 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 445 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 446 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 447 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	release
# 448 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 449 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 450 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_ThankYouForTheParts:
# 451 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Yes? If you're looking for STERN,\n"
# 452 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "that would be me.\p"
# 453 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ah! Those must be the parts I ordered\n"
# 454 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "from MR. STONE of DEVON.\p"
# 455 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Thank you! That's great!\n"
# 456 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We can prepare for our expedition now.$"
# 457 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 458 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WellTakeThoseParts:
# 459 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Hehehe, hold it!\n"
# 460 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We'll take those parts!$"
# 461 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 462 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternWhoAreYou:
# 463 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "CAPT. STERN: Wh-what?\n"
# 464 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Who are you people?$"
# 465 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 466 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WereTeamAqua:
# 467 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We're TEAM AQUA!\p"
# 468 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Our BOSS wants those parts!\n"
# 469 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Shut your yap and fork them over!$"
# 470 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 471 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat:
# 472 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Awaaaah!\n"
# 473 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Some kids beat us!$"
# 474 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 475 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_BossGoingToBeFurious:
# 476 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Oh, man, what a disaster…\n"
# 477 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "The BOSS is going to be furious…$"
# 478 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 479 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_LetMeTakeCareOfThis:
# 480 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Humph, sniveling wimp!\n"
# 481 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Let me take care of this!$"
# 482 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 483 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat:
# 484 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "What?!\n"
# 485 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "What do you mean we lost?!$"
# 486 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 487 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_MeddlingKid:
# 488 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Now what? If we don't get the parts,\n"
# 489 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "we're in for it!\p"
# 490 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Arrgh, I didn't count on being meddled\n"
# 491 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "with by some meddling kids!$"
# 492 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 493 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_CameToSeeWhatsTakingSoLong:
# 494 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I came to see what was taking so\n"
# 495 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "long to snatch some parts, and you\l"
# 496 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "simps are held up by mere children?$"
# 497 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 498 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_ArchieWarning:
# 499 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We are TEAM AQUA,\n"
# 500 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "and we love the sea!\p"
# 501 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "And I am TEAM AQUA's leader,\n"
# 502 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "ARCHIE!\p"
# 503 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "What makes you interfere with us?\p"
# 504 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "…No! You can't be!\n"
# 505 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "You're not with TEAM MAGMA?\p"
# 506 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Wait, that can't be right.\n"
# 507 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "You're not dressed for the part.\p"
# 508 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "… … … … … …\n"
# 509 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "… … … … … …\p"
# 510 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "POKéMON, people… All life depends on\n"
# 511 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "the sea.\p"
# 512 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "So, TEAM AQUA is dedicated to\n"
# 513 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "the expansion of the sea.\p"
# 514 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Don't you agree? What we are doing\n"
# 515 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "is a magnificent undertaking.\p"
# 516 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ah, fine…\n"
# 517 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "You're still too young to understand\l"
# 518 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "our noble objective.\p"
# 519 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "But, I warn you, don't even consider\n"
# 520 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "interfering with our plans again.\p"
# 521 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "The consequences will cost you\n"
# 522 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "dearly!\p"
# 523 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "And don't you forget it!$"
# 524 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 525 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternThankYouForSavingUs:
# 526 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "CAPT. STERN: You're…\n"
# 527 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ah, okay, you're {PLAYER}{KUN}…\p"
# 528 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Anyway, that was a tense situation!\n"
# 529 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Thank you two for saving us!\p"
# 530 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Oh, yes, I almost forgot that you\n"
# 531 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "even brought the parts from DEVON!$"
# 532 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 533 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternIveGotToGo:
# 534 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "CAPT. STERN: Whoops!\n"
# 535 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "There's no time to lose!\p"
# 536 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We have to set out on our ocean-floor\n"
# 537 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "expedition really soon.\p"
# 538 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Thanks again, but now I've got\n"
# 539 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "to go!\p"
# 540 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Feel free to wander around and check\n"
# 541 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "out our facilities, though.$"
# 542 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 543 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip:
# 544 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I saw a model of a ship here.\p"
# 545 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It reminded me of the ABANDONED SHIP\n"
# 546 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "near DEWFORD TOWN…$"
# 547 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 548 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum:
# 549 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Don't you dare run around inside\n"
# 550 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "the MUSEUM!$"
# 551 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 552 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine:
# 553 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Wow, the submarine's awesome!\n"
# 554 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I want to go for a ride!$"
# 555 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 556 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1:
# 557 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“WATER QUALITY SAMPLE 1,” the\n"
# 558 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "label says.\p"
# 559 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "The sea is all connected, but the\n"
# 560 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "water seems to differ by region.$"
# 561 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 562 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2:
# 563 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“WATER QUALITY SAMPLE 2,” the\n"
# 564 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "label says.\p"
# 565 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Does the saltiness of seawater differ\n"
# 566 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "by region, too?$"
# 567 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 568 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_PressureExperiment:
# 569 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "A rubber ball is expanding and\n"
# 570 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "shrinking.\p"
# 571 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“In the sea, the weight of water itself\n"
# 572 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "exerts pressure.\p"
# 573 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“In shallow water, the pressure is not\n"
# 574 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "very heavy.\p"
# 575 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“However, in extremely deep water,\n"
# 576 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "the pressure can reach even tens of\l"
# 577 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "thousands of tons on a small area.”$"
# 578 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 579 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_HoennModel:
# 580 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“MODEL OF HOENN REGION”\p"
# 581 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It's a miniature diorama of the\n"
# 582 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "HOENN region.\p"
# 583 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Where is LITTLEROOT TOWN on this?$"
# 584 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 585 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay:
# 586 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It's a display on the flow of seawater.\p"
# 587 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Near the bottom of the sea, water\n"
# 588 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "flows due to differences in such\l"
# 589 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "factors as temperature and salinity.”$"
# 590 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 591 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay:
# 592 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It's a display on the flow of seawater.\p"
# 593 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Toward the surface, seawater flows\n"
# 594 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "as currents driven by the winds.”$"
# 595 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 596 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica:
# 597 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“THE FERRY S.S. TIDAL\p"
# 598 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“A scale replica of the ship under\n"
# 599 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "construction at STERN'S SHIPYARD.”$"
# 600 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 601 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica:
# 602 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“SUBMARINE EXPLORER 1\p"
# 603 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“A replica of the high-performance\n"
# 604 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "ocean floor exploration submarine.”$"
# 605 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 606 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica:
# 607 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“SUBMERSIBLE POD\p"
# 608 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“A replica of a compact, unmanned\n"
# 609 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "pod for seafloor exploration.”$"
# 610 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 611 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica:
# 612 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“S.S. ANNE\p"
# 613 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“A replica of the luxury liner that\n"
# 614 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "circles the globe.”$"

SlateportCity_OceanicMuseum_2F_EventScript_BeginGruntBattle_Text_0:
# 181 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Bring it on!$"

SlateportCity_OceanicMuseum_2F_SpencerFoundStern::
# 32 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Look, {PLAYER}!\n"
	.string "I found CAPT. STERN.\l"
	.string "Go ahead and deliver those GOODS!$"

SlateportCity_OceanicMuseum_2F_BrenFoundStern::
# 38 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Look, {PLAYER}!\n"
	.string "I found CAPT. STERN.\l"
	.string "Go ahead and deliver those GOODS!$"

SlateportCity_OceanicMuseum_2F_KyleFoundStern::
# 44 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Look, {PLAYER}!\n"
	.string "I found CAPT. STERN.\l"
	.string "Go ahead and deliver those GOODS!$"

SlateportCity_OceanicMuseum_2F_SpencerBattleTogether::
# 341 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "C'mon!\n"
	.string "Let's take them on together!\p"
	.string "Choose the POKéMON you want to battle\n"
	.string "with.$"

SlateportCity_OceanicMuseum_2F_BrenBattleTogether::
# 347 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "C'mon!\n"
	.string "Let's take them on together!\p"
	.string "Choose the POKéMON you want to battle\n"
	.string "with.$"

SlateportCity_OceanicMuseum_2F_KyleBattleTogether::
# 353 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "C'mon!\n"
	.string "Let's take them on together!\p"
	.string "Choose the POKéMON you want to battle\n"
	.string "with.$"

SlateportCity_OceanicMuseum_2F_Text_NotGetOutOfThisOne::
# 359 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We have to protect STERN!\n"
	.string "Come on! Fight with me!$"

SlateportCity_OceanicMuseum_2F_SpencerAfterStern::
# 364 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We really have to watch out\n"
	.string "for those AQUA guys, huh?\p"
	.string "It seems they may be more trouble\n"
	.string "than we first thought.\p"
	.string "Anyway, nice work!\n"
	.string "All this battling has me revved up for\l"
	.string "the next GYM! I'm headed for MAUVILLE.\l"
	.string "See you out there!$"

SlateportCity_OceanicMuseum_2F_BrenAfterStern::
# 373 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We really have to watch out\n"
	.string "for those AQUA guys, huh?\p"
	.string "It seems they may be more trouble\n"
	.string "than we first thought.\p"
	.string "Anyway, nice work!\n"
	.string "All this battling has me revved up for\l"
	.string "the next GYM! I'm headed for MAUVILLE.\l"
	.string "See you out there!$"

SlateportCity_OceanicMuseum_2F_KyleAfterStern::
# 382 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We really have to watch out\n"
	.string "for those AQUA guys, huh?\p"
	.string "It seems they may be more trouble\n"
	.string "than we first thought.\p"
	.string "Anyway, nice work!\n"
	.string "All this battling has me revved up for\l"
	.string "the next GYM! I'm headed for MAUVILLE.\l"
	.string "See you out there!$"
