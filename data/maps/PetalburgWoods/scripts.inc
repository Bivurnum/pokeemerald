# 1 "data/maps/PetalburgWoods/scripts.pory"

# 2 "data/maps/PetalburgWoods/scripts.pory"
.set LOCALID_GRUNT, 3
# 3 "data/maps/PetalburgWoods/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 4
# 4 "data/maps/PetalburgWoods/scripts.pory"
.set LOCALID_RIVAL2, 14

PetalburgWoods_MapScripts::
	.byte 0


PetalburgWoods_EventScript_DevonResearcherLeft::
# 11 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 12 "data/maps/PetalburgWoods/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_WOODS_RIVAL2
# 13 "data/maps/PetalburgWoods/scripts.pory"
	addobject LOCALID_RIVAL2
# 14 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HoldUpPlayer, MSGBOX_DEFAULT
# 15 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 16 "data/maps/PetalburgWoods/scripts.pory"
	ballfollowingmon
# 17 "data/maps/PetalburgWoods/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 18 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_RIVAL2, PetalburgWoods_Movement_Rival2ApproachBeforeDevonLeft
# 19 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 20 "data/maps/PetalburgWoods/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 21 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_DidYouHearThat
# 22 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 23 "data/maps/PetalburgWoods/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 24 "data/maps/PetalburgWoods/scripts.pory"
	turnobject LOCALID_RIVAL2, DIR_NORTH
# 25 "data/maps/PetalburgWoods/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 26 "data/maps/PetalburgWoods/scripts.pory"
	waitse
# 27 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 28 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayer
# 29 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 30 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 31 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 32 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachPlayerLeft
# 33 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 34 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 35 "data/maps/PetalburgWoods/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 36 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_RIVAL2, PetalburgWoods_Movement_Rival2PrepareToFightLeft
# 37 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 38 "data/maps/PetalburgWoods/scripts.pory"
	turnobject LOCALID_DEVON_EMPLOYEE, DIR_WEST
# 39 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_PrepareForGruntBattle
# 40 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 41 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 42 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 43 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_GiveGreatBallsLeft
# 44 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 45 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_GiveGreatBalls
# 46 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExit
# 47 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 48 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_RemoveDevonResearcher
# 49 "data/maps/PetalburgWoods/scripts.pory"
	turnobject LOCALID_RIVAL2, DIR_WEST
# 50 "data/maps/PetalburgWoods/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 51 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RivalLeave
	end


PetalburgWoods_EventScript_DevonResearcherRight::
# 56 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 57 "data/maps/PetalburgWoods/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_WOODS_RIVAL2
# 58 "data/maps/PetalburgWoods/scripts.pory"
	addobject LOCALID_RIVAL2
# 59 "data/maps/PetalburgWoods/scripts.pory"
	setobjectxy LOCALID_DEVON_EMPLOYEE, 26, 17
# 60 "data/maps/PetalburgWoods/scripts.pory"
	setobjectxy LOCALID_GRUNT, 26, 17
# 61 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HoldUpPlayer, MSGBOX_DEFAULT
# 62 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 63 "data/maps/PetalburgWoods/scripts.pory"
	ballfollowingmon
# 64 "data/maps/PetalburgWoods/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 65 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_RIVAL2, PetalburgWoods_Movement_Rival2ApproachBeforeDevonRight
# 66 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 67 "data/maps/PetalburgWoods/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 68 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_DidYouHearThat
# 69 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 70 "data/maps/PetalburgWoods/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 71 "data/maps/PetalburgWoods/scripts.pory"
	turnobject LOCALID_RIVAL2, DIR_NORTH
# 72 "data/maps/PetalburgWoods/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 73 "data/maps/PetalburgWoods/scripts.pory"
	waitse
# 74 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 75 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayer
# 76 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 77 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 78 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachPlayerRight
# 79 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 80 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 81 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 82 "data/maps/PetalburgWoods/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 83 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_RIVAL2, PetalburgWoods_Movement_Rival2PrepareToFightRight
# 84 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 85 "data/maps/PetalburgWoods/scripts.pory"
	turnobject LOCALID_DEVON_EMPLOYEE, DIR_EAST
# 86 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_PrepareForGruntBattle
# 87 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 88 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 89 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 90 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_GiveGreatBallsRight
# 91 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 92 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_GiveGreatBalls
# 93 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExit
# 94 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 95 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_RemoveDevonResearcher
# 96 "data/maps/PetalburgWoods/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 97 "data/maps/PetalburgWoods/scripts.pory"
	turnobject LOCALID_RIVAL2, DIR_EAST
# 98 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RivalLeave
	end


PetalburgWoods_EventScript_DevonResearcherIntro::
# 103 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
# 104 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 105 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
# 106 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 107 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayer
# 108 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 109 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 110 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 111 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 112 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 113 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 114 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 115 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 116 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcher
# 117 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 118 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 119 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 120 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 121 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
	return


PetalburgWoods_EventScript_PrepareForGruntBattle::
# 126 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TakeHimOnTogether, MSGBOX_DEFAULT
# 127 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 128 "data/maps/PetalburgWoods/scripts.pory"
	special SavePlayerParty
# 129 "data/maps/PetalburgWoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 130 "data/maps/PetalburgWoods/scripts.pory"
	special ChooseHalfPartyForBattle
# 131 "data/maps/PetalburgWoods/scripts.pory"
	waitstate
# 132 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_ne VAR_RESULT, 0, PetalburgWoods_EventScript_BeginGruntBattle
# 133 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_QuitPartySelect
	return


PetalburgWoods_EventScript_QuitPartySelect::
# 138 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NotGetOutOfThisOne
# 139 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 140 "data/maps/PetalburgWoods/scripts.pory"
	special SavePlayerParty
# 141 "data/maps/PetalburgWoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 142 "data/maps/PetalburgWoods/scripts.pory"
	special ChooseHalfPartyForBattle
# 143 "data/maps/PetalburgWoods/scripts.pory"
	waitstate
# 144 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_ne VAR_RESULT, 0, PetalburgWoods_EventScript_BeginGruntBattle
# 145 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_QuitPartySelect
	end


PetalburgWoods_EventScript_BeginGruntBattle::
# 150 "data/maps/PetalburgWoods/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 151 "data/maps/PetalburgWoods/scripts.pory"
	turnobject LOCALID_RIVAL2, DIR_NORTH
# 152 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_BeginGruntBattle_Text_0, MSGBOX_DEFAULT
# 153 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 154 "data/maps/PetalburgWoods/scripts.pory"
	checkfriendchoice
# 155 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 156 "data/maps/PetalburgWoods/scripts.pory"
	case SPENCER, PetalburgWoods_EventScript_BeginGruntBattle_3
# 158 "data/maps/PetalburgWoods/scripts.pory"
	case BREN, PetalburgWoods_EventScript_BeginGruntBattle_4
# 160 "data/maps/PetalburgWoods/scripts.pory"
	case KYLE, PetalburgWoods_EventScript_BeginGruntBattle_5
PetalburgWoods_EventScript_BeginGruntBattle_1:
	return

PetalburgWoods_EventScript_BeginGruntBattle_3:
# 157 "data/maps/PetalburgWoods/scripts.pory"
	multi_2_vs_1 TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe, PARTNER_KYLE_WOODS
	goto PetalburgWoods_EventScript_BeginGruntBattle_1

PetalburgWoods_EventScript_BeginGruntBattle_4:
# 159 "data/maps/PetalburgWoods/scripts.pory"
	multi_2_vs_1 TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe, PARTNER_SPENCER_WOODS
	goto PetalburgWoods_EventScript_BeginGruntBattle_1

PetalburgWoods_EventScript_BeginGruntBattle_5:
# 161 "data/maps/PetalburgWoods/scripts.pory"
	multi_2_vs_1 TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe, PARTNER_BREN_WOODS
	goto PetalburgWoods_EventScript_BeginGruntBattle_1


PetalburgWoods_EventScript_DevonResearcherPostBattle::
# 167 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouveGotSomeNerve, MSGBOX_DEFAULT
# 168 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 169 "data/maps/PetalburgWoods/scripts.pory"
	turnobject LOCALID_DEVON_EMPLOYEE, DIR_NORTH
# 170 "data/maps/PetalburgWoods/scripts.pory"
	fadedefaultbgm
# 171 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaRunAway
# 172 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 173 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_GRUNT
# 174 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 175 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 176 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
# 177 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
	return


PetalburgWoods_EventScript_GiveGreatBalls::
# 182 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 183 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_BagFull
# 184 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
	end


PetalburgWoods_EventScript_BagFull::
# 189 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 190 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
	end


PetalburgWoods_EventScript_DevonResearcherFinish::
# 195 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
# 196 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherStartExit
# 197 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 198 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
# 199 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
	return


PetalburgWoods_EventScript_RemoveDevonResearcher::
# 204 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 205 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
	return


PetalburgWoods_EventScript_RivalLeave::
# 210 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_BattleWasFun, MSGBOX_DEFAULT
# 211 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 212 "data/maps/PetalburgWoods/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 213 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_RIVAL2, PetalburgWoods_Movement_Rival2Exit
# 214 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 215 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_RIVAL2
# 216 "data/maps/PetalburgWoods/scripts.pory"
	savebgm MUS_DUMMY
# 217 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_WOODS_RIVAL2
# 218 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_RIVAL1
# 219 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_HIDE_ROUTE_102_RIVAL2
# 220 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 221 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
	end


# 259 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_Rival2ApproachBeforeDevonLeft:
# 260 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 260 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 260 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 260 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 260 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 260 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 260 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 260 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 260 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 261 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 261 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 261 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 262 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_left
	step_end

# 265 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_Rival2ApproachBeforeDevonRight:
# 266 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 266 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 266 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 266 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 266 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 266 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 266 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 266 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 267 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 267 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 267 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 268 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_right
	step_end

# 271 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherLookAround:
# 272 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 272 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 272 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 273 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 274 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 275 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 276 "data/maps/PetalburgWoods/scripts.pory"
	face_left
# 277 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 278 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 279 "data/maps/PetalburgWoods/scripts.pory"
	face_down
# 280 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 281 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 282 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 283 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 284 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 285 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
	step_end

# 288 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExit:
# 289 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 290 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 291 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 292 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 293 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 294 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 294 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
	step_end

# 297 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayer:
# 298 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 299 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 300 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 301 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
	step_end

# 304 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerRight:
# 305 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 306 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 307 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 308 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 309 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
	step_end

# 312 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitRight:
# 313 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 314 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 315 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 316 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 317 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 318 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 319 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 320 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
	step_end

# 323 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_WatchResearcherLeave:
# 324 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 325 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 326 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
	step_end

# 329 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayer:
# 330 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_down
# 330 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_down
# 330 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_down
# 330 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_down
	step_end

# 333 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight:
# 334 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 335 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 336 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
	step_end

# 339 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherStartExit:
# 340 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_right
# 341 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 342 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 343 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 344 "data/maps/PetalburgWoods/scripts.pory"
	emote_exclamation_mark
# 345 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 346 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
	step_end

# 349 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcher:
# 350 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 351 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
	step_end

# 354 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaBackOff:
# 355 "data/maps/PetalburgWoods/scripts.pory"
	lock_facing_direction
# 356 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 357 "data/maps/PetalburgWoods/scripts.pory"
	unlock_facing_direction
	step_end

# 360 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaRunAway:
# 361 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 362 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 363 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 364 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 365 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 366 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 367 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
	step_end

# 370 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherRight:
# 371 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 372 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 373 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 374 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_down
	step_end

# 377 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaEntrance:
# 378 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 379 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 380 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 381 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
	step_end

# 384 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachPlayerLeft:
# 385 "data/maps/PetalburgWoods/scripts.pory"
	walk_left
# 386 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
	step_end

# 389 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachPlayerRight:
# 390 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 391 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
	step_end

# 394 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_GiveGreatBallsLeft:
# 395 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_down
# 395 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_down
# 396 "data/maps/PetalburgWoods/scripts.pory"
	walk_left
# 397 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_down
# 397 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_down
	step_end

# 400 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_GiveGreatBallsRight:
# 401 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_down
# 401 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_down
# 402 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 403 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_down
# 403 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_down
	step_end

# 406 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_Rival2Exit:
# 407 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 407 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 407 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 407 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 407 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 407 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 408 "data/maps/PetalburgWoods/scripts.pory"
	set_invisible
	step_end

# 411 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_Rival2PrepareToFightRight:
# 412 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_right
# 412 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_right
	step_end

# 415 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_Rival2PrepareToFightLeft:
# 416 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_left
# 416 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_left
	step_end

# 419 "data/maps/PetalburgWoods/scripts.pory"

# 420 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy1::
# 421 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
# 422 "data/maps/PetalburgWoods/scripts.pory"
	end
# 423 "data/maps/PetalburgWoods/scripts.pory"

# 424 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy2::
# 425 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
# 426 "data/maps/PetalburgWoods/scripts.pory"
	end
# 427 "data/maps/PetalburgWoods/scripts.pory"

# 428 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Girl::
# 429 "data/maps/PetalburgWoods/scripts.pory"
	lock
# 430 "data/maps/PetalburgWoods/scripts.pory"
	faceplayer
# 431 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_ExplainMiracleSeed
# 432 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
# 433 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
# 434 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 435 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_RECEIVED_MIRACLE_SEED
# 436 "data/maps/PetalburgWoods/scripts.pory"
	release
# 437 "data/maps/PetalburgWoods/scripts.pory"
	end
# 438 "data/maps/PetalburgWoods/scripts.pory"

# 439 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_ExplainMiracleSeed::
# 440 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
# 441 "data/maps/PetalburgWoods/scripts.pory"
	release
# 442 "data/maps/PetalburgWoods/scripts.pory"
	end
# 443 "data/maps/PetalburgWoods/scripts.pory"

# 444 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign1::
# 445 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
# 446 "data/maps/PetalburgWoods/scripts.pory"
	end
# 447 "data/maps/PetalburgWoods/scripts.pory"

# 448 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign2::
# 449 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
# 450 "data/maps/PetalburgWoods/scripts.pory"
	end
# 451 "data/maps/PetalburgWoods/scripts.pory"

# 452 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Lyle::
# 453 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
# 454 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
# 455 "data/maps/PetalburgWoods/scripts.pory"
	end
# 456 "data/maps/PetalburgWoods/scripts.pory"

# 457 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_James::
# 458 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
# 459 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 460 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgWoods_EventScript_JamesRematch
# 461 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_0x8004, TRAINER_JAMES_1
# 462 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 463 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_TryRegisterJames2
# 464 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 465 "data/maps/PetalburgWoods/scripts.pory"
	release
# 466 "data/maps/PetalburgWoods/scripts.pory"
	end
# 467 "data/maps/PetalburgWoods/scripts.pory"

# 468 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames::
# 469 "data/maps/PetalburgWoods/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 470 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 471 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames
# 472 "data/maps/PetalburgWoods/scripts.pory"
	release
# 473 "data/maps/PetalburgWoods/scripts.pory"
	end
# 474 "data/maps/PetalburgWoods/scripts.pory"

# 475 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames::
# 476 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
# 477 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 478 "data/maps/PetalburgWoods/scripts.pory"
	release
# 479 "data/maps/PetalburgWoods/scripts.pory"
	end
# 480 "data/maps/PetalburgWoods/scripts.pory"

# 481 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames2::
# 482 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames2
# 483 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 484 "data/maps/PetalburgWoods/scripts.pory"
	release
# 485 "data/maps/PetalburgWoods/scripts.pory"
	end
# 486 "data/maps/PetalburgWoods/scripts.pory"

# 487 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames2::
# 488 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
# 489 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 490 "data/maps/PetalburgWoods/scripts.pory"
	release
# 491 "data/maps/PetalburgWoods/scripts.pory"
	end
# 492 "data/maps/PetalburgWoods/scripts.pory"

# 493 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_JamesRematch::
# 494 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
# 495 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
# 496 "data/maps/PetalburgWoods/scripts.pory"
	end
# 497 "data/maps/PetalburgWoods/scripts.pory"

# 498 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NotAOneToBeFound:
# 499 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hmmm…\n"
# 500 "data/maps/PetalburgWoods/scripts.pory"
	.string "Not a one to be found…$"
# 501 "data/maps/PetalburgWoods/scripts.pory"

# 502 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HaveYouSeenShroomish:
# 503 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hello, have you kids seen any POKéMON\n"
# 504 "data/maps/PetalburgWoods/scripts.pory"
	.string "called SHROOMISH around here?\p"
# 505 "data/maps/PetalburgWoods/scripts.pory"
	.string "I really love that POKéMON.$"
# 506 "data/maps/PetalburgWoods/scripts.pory"

# 507 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWasGoingToAmbushYou:
# 508 "data/maps/PetalburgWoods/scripts.pory"
	.string "I was going to ambush you, but you\n"
# 509 "data/maps/PetalburgWoods/scripts.pory"
	.string "had to dawdle in PETALBURG WOODS\l"
# 510 "data/maps/PetalburgWoods/scripts.pory"
	.string "forever, didn't you?\p"
# 511 "data/maps/PetalburgWoods/scripts.pory"
	.string "I got sick of waiting, so here I am!$"
# 512 "data/maps/PetalburgWoods/scripts.pory"

# 513 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HandOverThosePapers:
# 514 "data/maps/PetalburgWoods/scripts.pory"
	.string "You! DEVON RESEARCHER!\p"
# 515 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hand over those papers!$"
# 516 "data/maps/PetalburgWoods/scripts.pory"

# 517 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouHaveToHelpMe:
# 518 "data/maps/PetalburgWoods/scripts.pory"
	.string "Aiyeeeh!\p"
# 519 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're both POKéMON TRAINERS,\naren't you?\p"
# 520 "data/maps/PetalburgWoods/scripts.pory"
	.string "You've got to help me, please!$"
# 521 "data/maps/PetalburgWoods/scripts.pory"

# 522 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NoOneCrossesTeamAqua:
# 523 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hunh? What do you think you're doing?\n"
# 524 "data/maps/PetalburgWoods/scripts.pory"
	.string "What, you're going to protect him?\p"
# 525 "data/maps/PetalburgWoods/scripts.pory"
	.string "No one who crosses TEAM AQUA\n"
# 526 "data/maps/PetalburgWoods/scripts.pory"
	.string "gets any mercy, not even kids!\p"
# 527 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me!$"
# 528 "data/maps/PetalburgWoods/scripts.pory"

# 529 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureKiddingMe:
# 530 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're kidding me! You're tough!$"
# 531 "data/maps/PetalburgWoods/scripts.pory"

# 532 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouveGotSomeNerve:
# 533 "data/maps/PetalburgWoods/scripts.pory"
	.string "Grrr… You've got some nerve\n"
# 534 "data/maps/PetalburgWoods/scripts.pory"
	.string "meddling with TEAM AQUA!\l"
# 535 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me again!\p"
# 536 "data/maps/PetalburgWoods/scripts.pory"
	.string "I wish I could say that, but I'm out of\n"
# 537 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON…\p"
# 538 "data/maps/PetalburgWoods/scripts.pory"
	.string "And, hey, we of TEAM AQUA are also\n"
# 539 "data/maps/PetalburgWoods/scripts.pory"
	.string "after something in RUSTBORO.\p"
# 540 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll let you go today!$"
# 541 "data/maps/PetalburgWoods/scripts.pory"

# 542 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ThatWasAwfullyClose:
# 543 "data/maps/PetalburgWoods/scripts.pory"
	.string "Whew…\n"
# 544 "data/maps/PetalburgWoods/scripts.pory"
	.string "That was awfully close!\p"
# 545 "data/maps/PetalburgWoods/scripts.pory"
	.string "Thanks to you two, he didn't rob me\n"
# 546 "data/maps/PetalburgWoods/scripts.pory"
	.string "of these important papers.\p"
# 547 "data/maps/PetalburgWoods/scripts.pory"
	.string "I know, I'll give you a GREAT BALL as\n"
# 548 "data/maps/PetalburgWoods/scripts.pory"
	.string "my thanks!$"
# 549 "data/maps/PetalburgWoods/scripts.pory"

# 550 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro:
# 551 "data/maps/PetalburgWoods/scripts.pory"
	.string "Didn't that TEAM AQUA thug say\n"
# 552 "data/maps/PetalburgWoods/scripts.pory"
	.string "they were after something in\l"
# 553 "data/maps/PetalburgWoods/scripts.pory"
	.string "RUSTBORO, too?$"
# 554 "data/maps/PetalburgWoods/scripts.pory"

# 555 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICantBeWastingTime:
# 556 "data/maps/PetalburgWoods/scripts.pory"
	.string "Uh-oh! It's a crisis!\n"
# 557 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be wasting time!$"
# 558 "data/maps/PetalburgWoods/scripts.pory"

# 559 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureLoadedWithItems:
# 560 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're loaded with items.\n"
# 561 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't give you this GREAT BALL.$"
# 562 "data/maps/PetalburgWoods/scripts.pory"

# 563 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_GoBugPokemonTeam:
# 564 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a whole bunch of POKéMON!\p"
# 565 "data/maps/PetalburgWoods/scripts.pory"
	.string "Go, go, go!\n"
# 566 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG POKéMON team!$"
# 567 "data/maps/PetalburgWoods/scripts.pory"

# 568 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICouldntWin:
# 569 "data/maps/PetalburgWoods/scripts.pory"
	.string "I have all these POKéMON,\n"
# 570 "data/maps/PetalburgWoods/scripts.pory"
	.string "but I couldn't win…$"
# 571 "data/maps/PetalburgWoods/scripts.pory"

# 572 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ImOutOfPokeBalls:
# 573 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a bunch of POKéMON.\n"
# 574 "data/maps/PetalburgWoods/scripts.pory"
	.string "Now I'm out of POKé BALLS.$"
# 575 "data/maps/PetalburgWoods/scripts.pory"

# 576 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_InstantlyPopularWithBugPokemon:
# 577 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you take BUG POKéMON to school,\n"
# 578 "data/maps/PetalburgWoods/scripts.pory"
	.string "you get to be instantly popular!$"
# 579 "data/maps/PetalburgWoods/scripts.pory"

# 580 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfILose:
# 581 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 582 "data/maps/PetalburgWoods/scripts.pory"

# 583 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_PeopleRespectYou:
# 584 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you have a big BUG POKéMON,\n"
# 585 "data/maps/PetalburgWoods/scripts.pory"
	.string "people respect you for it.$"
# 586 "data/maps/PetalburgWoods/scripts.pory"

# 587 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch1:
# 588 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG\n"
# 589 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON grow up!\p"
# 590 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 591 "data/maps/PetalburgWoods/scripts.pory"

# 592 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch2:
# 593 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG \n"
# 594 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON grow up!\p"
# 595 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 596 "data/maps/PetalburgWoods/scripts.pory"

# 597 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MyPokemonHaveGrown:
# 598 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG POKéMON have grown.\n"
# 599 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll be popular again.$"
# 600 "data/maps/PetalburgWoods/scripts.pory"

# 601 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfLose:
# 602 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 603 "data/maps/PetalburgWoods/scripts.pory"

# 604 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IveBeenTrainingHard:
# 605 "data/maps/PetalburgWoods/scripts.pory"
	.string "You get to be popular if you have\n"
# 606 "data/maps/PetalburgWoods/scripts.pory"
	.string "strong POKéMON, right?\l"
# 607 "data/maps/PetalburgWoods/scripts.pory"
	.string "So, I've been training hard.$"
# 608 "data/maps/PetalburgWoods/scripts.pory"

# 609 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_StayOutOfTallGrass:
# 610 "data/maps/PetalburgWoods/scripts.pory"
	.string "Yo, there!\n"
# 611 "data/maps/PetalburgWoods/scripts.pory"
	.string "Your POKéMON doing okay?\p"
# 612 "data/maps/PetalburgWoods/scripts.pory"
	.string "If your POKéMON are weak and you want\n"
# 613 "data/maps/PetalburgWoods/scripts.pory"
	.string "to avoid battles, you should stay out\l"
# 614 "data/maps/PetalburgWoods/scripts.pory"
	.string "of tall grass.$"
# 615 "data/maps/PetalburgWoods/scripts.pory"

# 616 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HiddenItemsExplanation:
# 617 "data/maps/PetalburgWoods/scripts.pory"
	.string "Sometimes, there are things on the\n"
# 618 "data/maps/PetalburgWoods/scripts.pory"
	.string "ground even if you can't see them.\p"
# 619 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's why I always check where I'm\n"
# 620 "data/maps/PetalburgWoods/scripts.pory"
	.string "walking.$"
# 621 "data/maps/PetalburgWoods/scripts.pory"

# 622 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TryUsingThisItem:
# 623 "data/maps/PetalburgWoods/scripts.pory"
	.string "Oh, neat!\n"
# 624 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's the BADGE from RUSTBORO GYM!\p"
# 625 "data/maps/PetalburgWoods/scripts.pory"
	.string "You must be a TRAINER.\n"
# 626 "data/maps/PetalburgWoods/scripts.pory"
	.string "You should try using this item.$"
# 627 "data/maps/PetalburgWoods/scripts.pory"

# 628 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MiracleSeedExplanation:
# 629 "data/maps/PetalburgWoods/scripts.pory"
	.string "It's a MIRACLE SEED.\n"
# 630 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a POKéMON holds that item, its\l"
# 631 "data/maps/PetalburgWoods/scripts.pory"
	.string "GRASS-type moves become stronger.\p"
# 632 "data/maps/PetalburgWoods/scripts.pory"
	.string "Besides MIRACLE SEED, I think there are\n"
# 633 "data/maps/PetalburgWoods/scripts.pory"
	.string "other convenient items for POKéMON\l"
# 634 "data/maps/PetalburgWoods/scripts.pory"
	.string "to hold.$"
# 635 "data/maps/PetalburgWoods/scripts.pory"

# 636 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsExperience:
# 637 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 638 "data/maps/PetalburgWoods/scripts.pory"
	.string "Any POKéMON that appears even once\n"
# 639 "data/maps/PetalburgWoods/scripts.pory"
	.string "in a battle is awarded EXP Points.\p"
# 640 "data/maps/PetalburgWoods/scripts.pory"
	.string "To raise a weak POKéMON, put it at the\n"
# 641 "data/maps/PetalburgWoods/scripts.pory"
	.string "left of the team list.\p"
# 642 "data/maps/PetalburgWoods/scripts.pory"
	.string "As soon as a battle starts, switch it\n"
# 643 "data/maps/PetalburgWoods/scripts.pory"
	.string "out. It will earn EXP Points without\l"
# 644 "data/maps/PetalburgWoods/scripts.pory"
	.string "being exposed to any harm.$"
# 645 "data/maps/PetalburgWoods/scripts.pory"

# 646 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsPP:
# 647 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 648 "data/maps/PetalburgWoods/scripts.pory"
	.string "In addition to Hit Points (HP), POKéMON\n"
# 649 "data/maps/PetalburgWoods/scripts.pory"
	.string "have Power Points (PP) that are used to\l"
# 650 "data/maps/PetalburgWoods/scripts.pory"
	.string "make moves during battle.\p"
# 651 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a POKéMON runs out of PP, it must be\n"
# 652 "data/maps/PetalburgWoods/scripts.pory"
	.string "taken to a POKéMON CENTER.$"

PetalburgWoods_EventScript_BeginGruntBattle_Text_0:
# 152 "data/maps/PetalburgWoods/scripts.pory"
	.string "Bring it on!$"

PetalburgWoods_Text_HoldUpPlayer::
# 225 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hold up, {PLAYER}!$"

PetalburgWoods_Text_DidYouHearThat::
# 229 "data/maps/PetalburgWoods/scripts.pory"
	.string "It's much darker inside this forest.\n"
	.string "Things might be lurking in the shadows,\l"
	.string "waiting to ambush you.\p"
	.string "Wait!\n"
	.string "… … …\l"
	.string "Do you hear that?$"

PetalburgWoods_Text_BattleWasFun::
# 236 "data/maps/PetalburgWoods/scripts.pory"
	.string "It was so awesome to battle alongside\n"
	.string "you!\l"
	.string "We sure make a great team.\p"
	.string "I hope that guy will be okay.\n"
	.string "It sound like there might be some more\l"
	.string "trouble brewing.\p"
	.string "Regardless, you've definitely shown\n"
	.string "that you can handle yourself.\l"
	.string "The rest of this forest should be a\l"
	.string "cake walk.\p"
	.string "That guy said there were SHROOMISH in\n"
	.string "these woods? I'd sure like to get one\l"
	.string "for my POKéDEX.\p"
	.string "I'll see you later. I have a SHROOMISH\n"
	.string "to find!$"

PetalburgWoods_Text_TakeHimOnTogether::
# 248 "data/maps/PetalburgWoods/scripts.pory"
	.string "This guy looks pretty tough.\n"
	.string "Let's take him on together!\p"
	.string "Pick the POKéMON you want to use.$"

PetalburgWoods_Text_NotGetOutOfThisOne::
# 254 "data/maps/PetalburgWoods/scripts.pory"
	.string "I don't think we're getting out of this\n"
	.string "one.\l"
	.string "Go on, pick the POKéMON you'd like to\l"
	.string "battle with.$"
