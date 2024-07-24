MauvilleCity_BikeShop_MapScripts::
# 6 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_BikeShop_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MauvilleCity_BikeShop_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 8 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	call_if_eq VAR_MAUVILLE_BIKE_SHOP_STATE, 0, MauvilleCity_BikeShop_EventScript_SetUpBikeIntro
	return


MauvilleCity_BikeShop_EventScript_SetUpBikeIntro::
# 13 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setobjectxyperm 1, 9, 7
# 14 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
# 15 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setobjectxyperm 2, 2, 5
# 16 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_LEFT
	return


MauvilleCity_BikeShop_EventScript_Rival1::
# 20 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	lockall
# 21 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 22 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmovement 0
# 23 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_MAUVILLE_BIKE_SHOP_STATE, 0, MauvilleCity_BikeShop_EventScript_BikeIntro
# 24 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	compare VAR_TEMP_3, 5
	goto_if_ne MauvilleCity_BikeShop_EventScript_Rival1_2
# 47 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	rival1talk MauvilleCity_BikeShop_Text_SpencerUsefulInfo, MauvilleCity_BikeShop_Text_BrenUsefulInfo, MauvilleCity_BikeShop_Text_KyleUsefulInfo
# 50 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	closemessage
MauvilleCity_BikeShop_EventScript_Rival1_1:
# 52 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	releaseall
	end

MauvilleCity_BikeShop_EventScript_Rival1_2:
# 25 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_YouWantToRead, MSGBOX_YESNO
# 26 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 27 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case NO, MauvilleCity_BikeShop_EventScript_Rival1_6
# 32 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case YES, MauvilleCity_BikeShop_EventScript_Rival1_7
	goto MauvilleCity_BikeShop_EventScript_Rival1_1

MauvilleCity_BikeShop_EventScript_Rival1_6:
# 28 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_EventScript_Rival1_Text_0
# 29 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	closemessage
# 30 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement 2, Common_Movement_FaceUp
# 31 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmovement 0
	goto MauvilleCity_BikeShop_EventScript_Rival1_1

MauvilleCity_BikeShop_EventScript_Rival1_7:
# 33 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_EventScript_Rival1_Text_1
# 34 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	closemessage
# 35 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	getplayerxy VAR_0x8001, VAR_0x8002
# 36 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	compare VAR_0x8001, 7
	goto_if_eq MauvilleCity_BikeShop_EventScript_Rival1_9
# 40 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement 2, MauvilleCity_BikeShop_Movement_LetPlayerReadLeft
MauvilleCity_BikeShop_EventScript_Rival1_8:
# 42 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmovement 0
# 43 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setvar VAR_TEMP_3, 5
	goto MauvilleCity_BikeShop_EventScript_Rival1_1

MauvilleCity_BikeShop_EventScript_Rival1_9:
# 37 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement 2, MauvilleCity_BikeShop_Movement_LetPlayerReadRight
	goto MauvilleCity_BikeShop_EventScript_Rival1_8


# 56 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Movement_LetPlayerReadLeft:
# 57 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_left
# 58 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_in_place_fast_right
	step_end

# 61 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Movement_LetPlayerReadRight:
# 62 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_right
# 63 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_in_place_fast_left
	step_end

MauvilleCity_BikeShop_EventScript_BikeIntro::
# 84 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	rival1talk MauvilleCity_BikeShop_Text_SpencerBikesLookCool, MauvilleCity_BikeShop_Text_BrenBikesLookCool, MauvilleCity_BikeShop_Text_KyleBikesLookCool
# 87 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	closemessage
# 88 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	delay 30
# 89 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	playse SE_EXIT
# 90 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	addobject 3
# 91 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitse
# 92 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	playse SE_PIN
# 93 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_BikeShop_Movement_Surprise
# 94 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement 2, MauvilleCity_BikeShop_Movement_Surprise
# 95 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmovement 0
# 96 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	delay 40
# 97 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitse
# 98 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	getplayerxy VAR_0x8001, VAR_0x8002
# 99 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_0x8002
# 100 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 4, MauvilleCity_BikeShop_EventScript_BikeIntro_3
# 102 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 6, MauvilleCity_BikeShop_EventScript_BikeIntro_4
MauvilleCity_BikeShop_EventScript_BikeIntro_1:
# 105 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmovement 0
# 106 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_BikeShop_Movement_GreetRival2
# 107 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement 2, MauvilleCity_BikeShop_Movement_GreetRival2
# 108 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement 3, MauvilleCity_BikeShop_Movement_Rival2Enter
# 109 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmovement 0
# 110 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement 3, Common_Movement_BeginTalkUp
# 111 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmovement 0
# 112 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	rival2talk MauvilleCity_BikeShop_Text_SpencerWhyDidntYouTellMe, MauvilleCity_BikeShop_Text_BrenWhyDidntYouTellMe, MauvilleCity_BikeShop_Text_KyleWhyDidntYouTellMe
# 115 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	closemessage
# 116 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement 2, Common_Movement_BeginTalkDown
# 117 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmovement 0
# 118 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	rival1talk MauvilleCity_BikeShop_Text_SpencerTriedTo, MauvilleCity_BikeShop_Text_BrenTriedTo, MauvilleCity_BikeShop_Text_KyleTriedTo
# 121 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	closemessage
# 122 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement 3, Common_Movement_BeginTalkUp
# 123 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmovement 0
# 124 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	rival2talk MauvilleCity_BikeShop_Text_SpencerMyBad, MauvilleCity_BikeShop_Text_BrenMyBad, MauvilleCity_BikeShop_Text_KyleMyBad
# 127 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	closemessage
# 128 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement 2, Common_Movement_BeginTalkDown
# 129 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmovement 0
# 130 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	rival1talk MauvilleCity_BikeShop_Text_SpencerWouldBeNiceToHaveBikes, MauvilleCity_BikeShop_Text_BrenWouldBeNiceToHaveBikes, MauvilleCity_BikeShop_Text_KyleWouldBeNiceToHaveBikes
# 133 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	closemessage
# 134 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	playse SE_PIN
# 135 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 136 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 137 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 138 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 139 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmovement 0
# 140 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	delay 60
# 141 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitse
# 142 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement 2, MauvilleCity_BikeShop_Movement_Rival1GetInPlace
# 143 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement 1, MauvilleCity_BikeShop_Movement_RydellApproaches
# 144 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmovement 0
# 145 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement 1, Common_Movement_BeginTalkLeft
# 146 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmovement 0
# 147 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_RydellFilthyShoes, MSGBOX_YESNO
# 148 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	call_if_eq VAR_RESULT, NO, MauvilleCity_BikeShop_EventScript_ChoseNo
# 149 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	closemessage
# 150 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_BeginTalkRight
# 151 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmovement 0
# 152 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	delay 20
# 153 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement 1, Common_Movement_BeginTalkLeft
# 154 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmovement 0
# 155 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_RydellCameAllThisWay
# 156 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	closemessage
# 157 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement 3, Common_Movement_BeginTalkRight
# 158 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmovement 0
# 159 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	rival2talk MauvilleCity_BikeShop_Text_SpencerTakingGymChallenge, MauvilleCity_BikeShop_Text_BrenTakingGymChallenge, MauvilleCity_BikeShop_Text_KyleTakingGymChallenge
# 162 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	closemessage
# 163 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	delay 10
# 164 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement 2, Common_Movement_BeginTalkRight
# 165 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmovement 0
# 166 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	rival1talk MauvilleCity_BikeShop_Text_SpencerPokedexJourney, MauvilleCity_BikeShop_Text_BrenPokedexJourney, MauvilleCity_BikeShop_Text_KylePokedexJourney
# 169 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	closemessage
# 170 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement 1, Common_Movement_BeginTalkLeft
# 171 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmovement 0
# 172 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ThatSettlesIt
# 173 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 174 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	multichoice 21, 8, MULTI_BIKE, TRUE
# 175 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 176 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 0, MauvilleCity_BikeShop_EventScript_BikeIntro_7
# 178 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 1, MauvilleCity_BikeShop_EventScript_BikeIntro_8
MauvilleCity_BikeShop_EventScript_BikeIntro_5:
	end

MauvilleCity_BikeShop_EventScript_BikeIntro_3:
# 101 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_BikeShop_Movement_PlayerMoveIntoPlaceTop
	goto MauvilleCity_BikeShop_EventScript_BikeIntro_1

MauvilleCity_BikeShop_EventScript_BikeIntro_4:
# 103 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_BikeShop_Movement_PlayerMoveIntoPlaceBottom
	goto MauvilleCity_BikeShop_EventScript_BikeIntro_1

MauvilleCity_BikeShop_EventScript_BikeIntro_7:
# 177 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_GetMachBike
	goto MauvilleCity_BikeShop_EventScript_BikeIntro_5

MauvilleCity_BikeShop_EventScript_BikeIntro_8:
# 179 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_GetAcroBike
	goto MauvilleCity_BikeShop_EventScript_BikeIntro_5


MauvilleCity_BikeShop_EventScript_ChoseNo::
# 185 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_RydellDontBeModest
	return


MauvilleCity_BikeShop_EventScript_IntroPostBikeChoice::
# 190 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ExcellentChoice
# 191 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	closemessage
# 192 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement 1, MauvilleCity_BikeShop_Movement_RydellToRival2
# 193 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmovement 0
# 194 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	delay 20
# 195 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement 3, Common_Movement_BeginTalkRight
# 196 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmovement 0
# 197 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	rival2talk MauvilleCity_BikeShop_Text_SpencerChooseAcro, MauvilleCity_BikeShop_Text_BrenChooseAcro, MauvilleCity_BikeShop_Text_KyleChooseAcro
# 200 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	closemessage
# 201 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	delay 60
# 202 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement 1, MauvilleCity_BikeShop_Movement_RydellToRival1
# 203 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmovement 0
# 204 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement 2, Common_Movement_BeginTalkRight
# 205 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmovement 0
# 206 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	rival1talk MauvilleCity_BikeShop_Text_SpencerChooseMach, MauvilleCity_BikeShop_Text_BrenChooseMach, MauvilleCity_BikeShop_Text_KyleChooseMach
# 209 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	closemessage
# 210 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	delay 60
# 211 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement 1, Common_Movement_Walk_Down
# 212 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmovement 0
# 213 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement 1, Common_Movement_BeginTalkLeft
# 214 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmovement 0
# 215 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ComeBackToSwitchBikes
# 216 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	closemessage
# 217 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement 1, MauvilleCity_BikeShop_Movement_RydellReturnToWork
# 218 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmovement 0
# 219 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 220 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 221 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement 2, MauvilleCity_BikeShop_Movement_Rival1AfterRydell
# 222 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmovement 0
# 223 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement 3, Common_Movement_BeginTalkUp
# 224 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmovement 0
# 225 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	rival2talk MauvilleCity_BikeShop_Text_SpencerGoTryBike, MauvilleCity_BikeShop_Text_BrenGoTryBike, MauvilleCity_BikeShop_Text_KyleGoTryBike
# 228 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	closemessage
# 229 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement 3, MauvilleCity_BikeShop_Movement_Rival2Leaves
# 230 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmovement 0
# 231 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	delay 20
# 232 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	playse SE_EXIT
# 233 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	removeobject 3
# 234 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitse
# 235 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 236 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement 2, Common_Movement_BeginTalkLeft
# 237 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmovement 0
# 238 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	rival1talk MauvilleCity_BikeShop_Text_SpencerLookUpManual, MauvilleCity_BikeShop_Text_BrenLookUpManual, MauvilleCity_BikeShop_Text_KyleLookUpManual
# 241 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	closemessage
# 242 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement 2, MauvilleCity_BikeShop_Movement_Rival1GoToManual
# 243 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmovement 0
# 244 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setobjectxyperm 2, 8, 2
# 245 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setvar VAR_MAUVILLE_BIKE_SHOP_STATE, 1
# 246 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_110_RIVAL
# 247 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setflag FLAG_RECEIVED_BIKE
# 248 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 249 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	releaseall
	end


# 253 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Movement_Surprise:
# 254 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	emote_exclamation_mark
# 255 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_in_place_faster_down
	step_end

# 258 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Movement_PlayerMoveIntoPlaceTop:
# 259 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_right
# 260 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_down
	step_end

# 263 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Movement_PlayerMoveIntoPlaceBottom:
# 264 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_right
# 265 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_up
	step_end

# 268 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Movement_GreetRival2:
# 269 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_right
# 270 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_in_place_faster_down
	step_end

# 273 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Movement_Rival2Enter:
# 274 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_up
# 274 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_up
	step_end

# 277 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Movement_RydellApproaches:
# 278 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_left
# 278 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_left
# 279 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_up
# 279 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_up
# 280 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_left
# 280 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_left
	step_end

# 283 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Movement_Rival1GetInPlace:
# 284 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_up
# 285 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_right
	step_end

# 288 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Movement_RydellToRival2:
# 289 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_down
# 290 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_in_place_faster_left
	step_end

# 293 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Movement_RydellToRival1:
# 294 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_up
# 294 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_up
# 295 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_in_place_faster_left
	step_end

# 298 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Movement_RydellReturnToWork:
# 299 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_right
# 299 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_right
# 300 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_down
# 300 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_down
# 301 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_right
# 301 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_right
	step_end

# 304 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Movement_Rival1AfterRydell:
# 305 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_right
# 306 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_down
	step_end

# 309 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Movement_Rival2Leaves:
# 310 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_down
# 310 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_down
	step_end

# 313 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Movement_Rival1GoToManual:
# 314 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_right
# 314 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_right
# 314 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_right
# 315 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_up
# 315 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_up
# 315 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_up
	step_end

MauvilleCity_BikeShop_EventScript_Rydel::
# 548 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	lock
# 549 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	faceplayer
# 550 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_MAUVILLE_BIKE_SHOP_STATE, 0, MauvilleCity_BikeShop_EventScript_PleaseLookAround
# 551 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_set FLAG_RECEIVED_BIKE, MauvilleCity_BikeShop_EventScript_AskSwitchBikes
# 552 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_set FLAG_DECLINED_BIKE, MauvilleCity_BikeShop_EventScript_SkipGreeting
# 553 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_RydelGreeting, MSGBOX_DEFAULT
# 554 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_DidYouComeFromFarAway, MSGBOX_YESNO
# 555 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MauvilleCity_BikeShop_EventScript_YesFar
# 556 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_BikeShop_EventScript_NotFar
	end


MauvilleCity_BikeShop_EventScript_PleaseLookAround::
# 561 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_PleaseLookAround
# 562 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	closemessage
# 563 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 564 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmovement 0
# 565 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
	end


# 574 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 575 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SkipGreeting::
# 576 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_DidYouComeFromFarAway, MSGBOX_YESNO
# 577 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MauvilleCity_BikeShop_EventScript_YesFar
# 578 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_BikeShop_EventScript_NotFar
# 579 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 580 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 581 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseBike::
# 582 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_ExplainBikesChooseWhichOne
# 583 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 584 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	multichoice 21, 8, MULTI_BIKE, TRUE
# 585 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 586 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 0, MauvilleCity_BikeShop_EventScript_GetMachBike
# 587 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 1, MauvilleCity_BikeShop_EventScript_GetAcroBike
# 588 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 589 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 590 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_NotFar::
# 591 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setflag FLAG_DECLINED_BIKE
# 592 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_GuessYouDontNeedBike, MSGBOX_DEFAULT
# 593 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 594 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 595 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 596 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_YesFar::
# 597 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setflag FLAG_RECEIVED_BIKE
# 598 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseBike
# 599 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 600 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 601 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_GetMachBike::
# 602 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ChoseMachBike, MSGBOX_DEFAULT
# 603 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 604 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 605 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_MAUVILLE_BIKE_SHOP_STATE, 0, MauvilleCity_BikeShop_EventScript_IntroPostBikeChoice
# 606 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 607 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 608 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 609 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_GetAcroBike::
# 610 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ChoseAcroBike, MSGBOX_DEFAULT
# 611 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 612 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 613 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_MAUVILLE_BIKE_SHOP_STATE, 0, MauvilleCity_BikeShop_EventScript_IntroPostBikeChoice
# 614 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 615 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 616 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 617 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes::
# 618 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ComeBackToSwitchBikes, MSGBOX_DEFAULT
# 619 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	special SwapRegisteredBike
# 620 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 621 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 622 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 623 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_AskSwitchBikes::
# 624 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_WantToSwitchBikes, MSGBOX_YESNO
# 625 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MauvilleCity_BikeShop_EventScript_SwitchBikes
# 626 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_BikeShop_EventScript_KeepBike
# 627 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 628 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 629 "data/maps/MauvilleCity_BikeShop/scripts.pory"
@ If the player does not have a bike on them Rydel assumes its stored in the PC
# 630 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SwitchBikes::
# 631 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_IllSwitchBikes, MSGBOX_DEFAULT
# 632 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	checkitem ITEM_ACRO_BIKE
# 633 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_BikeShop_EventScript_SwitchAcroForMach
# 634 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	checkitem ITEM_MACH_BIKE
# 635 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_BikeShop_EventScript_SwitchMachForAcro
# 636 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_OhYourBikeIsInPC, MSGBOX_DEFAULT
# 637 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 638 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 639 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 640 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_KeepBike::
# 641 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_HappyYouLikeIt, MSGBOX_DEFAULT
# 642 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 643 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 644 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 645 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SwitchAcroForMach::
# 646 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	incrementgamestat GAME_STAT_TRADED_BIKES
# 647 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ExchangedAcroForMach, MSGBOX_DEFAULT
# 648 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	removeitem ITEM_ACRO_BIKE
# 649 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 650 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 651 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 652 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 653 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SwitchMachForAcro::
# 654 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	incrementgamestat GAME_STAT_TRADED_BIKES
# 655 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ExchangedMachForAcro, MSGBOX_DEFAULT
# 656 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	removeitem ITEM_MACH_BIKE
# 657 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 658 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 659 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 660 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 661 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Assistant::
# 662 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_HandbooksAreInBack, MSGBOX_NPC
# 663 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 664 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 665 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_MachBikeHandbook::
# 666 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_MachHandbookWhichPage
# 667 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 668 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 669 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 670 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 671 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage::
# 672 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	multichoice 0, 0, MULTI_MACH_BIKE_INFO, FALSE
# 673 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 674 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 0, MauvilleCity_BikeShop_EventScript_HowToRide
# 675 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 1, MauvilleCity_BikeShop_EventScript_HowToTurn
# 676 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 2, MauvilleCity_BikeShop_EventScript_SandySlopes
# 677 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 3, MauvilleCity_BikeShop_EventScript_ExitMachHandbook
# 678 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case MULTI_B_PRESSED, MauvilleCity_BikeShop_EventScript_ExitMachHandbook
# 679 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 680 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 681 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_HowToRide::
# 682 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_HowToRideMachBike
# 683 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 684 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 685 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 686 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 687 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_HowToTurn::
# 688 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_HowToTurnMachBike
# 689 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 690 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 691 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 692 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 693 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SandySlopes::
# 694 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_SandySlopes
# 695 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 696 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 697 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 698 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 699 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ExitMachHandbook::
# 700 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 701 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 702 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 703 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_AcroBikeHandbook::
# 704 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_AcroHandbookWhichPage
# 705 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 706 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 707 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 708 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 709 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage::
# 710 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	multichoice 0, 0, MULTI_ACRO_BIKE_INFO, FALSE
# 711 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 712 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 0, MauvilleCity_BikeShop_EventScript_Wheelies
# 713 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 1, MauvilleCity_BikeShop_EventScript_BunnyHops
# 714 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 2, MauvilleCity_BikeShop_EventScript_Jumps
# 715 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 3, MauvilleCity_BikeShop_EventScript_ExitAcroHandbook
# 716 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case MULTI_B_PRESSED, MauvilleCity_BikeShop_EventScript_ExitAcroHandbook
# 717 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 718 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 719 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Wheelies::
# 720 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_Wheelies
# 721 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 722 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 723 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 724 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 725 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_BunnyHops::
# 726 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_BunnyHops
# 727 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 728 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 729 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 730 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 731 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Jumps::
# 732 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_Jumps
# 733 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 734 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 735 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 736 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 737 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ExitAcroHandbook::
# 738 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 739 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 740 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 741 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_RydelGreeting:
# 742 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Well, well, what have we here?\n"
# 743 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "A most energetic customer!\p"
# 744 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Me? You may call me RYDEL.\n"
# 745 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm the owner of this cycle shop.$"
# 746 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 747 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_DidYouComeFromFarAway:
# 748 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Your RUNNING SHOES…\n"
# 749 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "They're awfully filthy.\p"
# 750 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Did you come from far away?$"
# 751 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 752 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_GuessYouDontNeedBike:
# 753 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Is that right?\p"
# 754 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Then, I guess you have no need for\n"
# 755 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "any of my BIKES.$"
# 756 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 757 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ExplainBikesChooseWhichOne:
# 758 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Hm, hm… … … … …\p"
# 759 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "You're saying that you came all this\n"
# 760 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "way from LITTLEROOT?\p"
# 761 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "My goodness!\n"
# 762 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "That's ridiculously far!\p"
# 763 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "If you had one of my BIKES, you could\n"
# 764 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "go anywhere easily while feeling the\l"
# 765 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "gentle caress of the wind!\p"
# 766 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'll tell you what!\n"
# 767 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'll give you a BIKE!\p"
# 768 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Oh, wait a second!\p"
# 769 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I forgot to tell you that there are\n"
# 770 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "two kinds of BIKES!\p"
# 771 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "They are the MACH BIKE and\n"
# 772 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "the ACRO BIKE!\p"
# 773 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "The MACH BIKE is for cyclists who want\n"
# 774 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "to feel the wind with their bodies!\p"
# 775 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "And an ACRO BIKE is for those who\n"
# 776 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "prefer technical rides!\p"
# 777 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm a real sweetheart, so you can\n"
# 778 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "have whichever one you like!\p"
# 779 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Which one will you choose?$"
# 780 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 781 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ChoseMachBike:
# 782 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} chose the MACH BIKE.$"
# 783 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 784 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ChoseAcroBike:
# 785 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} chose the ACRO BIKE.$"
# 786 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 787 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ComeBackToSwitchBikes:
# 788 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: If you get the urge to switch\n"
# 789 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "BIKES, just come see me!$"
# 790 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 791 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_WantToSwitchBikes:
# 792 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Oh? Were you thinking about\n"
# 793 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "switching BIKES?$"
# 794 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 795 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_IllSwitchBikes:
# 796 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Okay, no problem!\n"
# 797 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'll switch BIKES for you!$"
# 798 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 799 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ExchangedMachForAcro:
# 800 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} got the MACH BIKE exchanged\n"
# 801 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "for an ACRO BIKE.$"
# 802 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 803 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ExchangedAcroForMach:
# 804 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} got the ACRO BIKE exchanged\n"
# 805 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "for a MACH BIKE.$"
# 806 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 807 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HappyYouLikeIt:
# 808 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Good, good!\n"
# 809 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm happy that you like it!$"
# 810 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 811 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_OhYourBikeIsInPC:
# 812 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Oh? What happened to that BIKE\n"
# 813 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I gave you?\p"
# 814 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Oh, I get it, you stored it using your PC.\p"
# 815 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Well, take it out of PC storage,\n"
# 816 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "and I'll be happy to exchange it!\p"
# 817 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "May the wind always be at your back\n"
# 818 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "on your adventure!$"
# 819 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 820 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HandbooksAreInBack:
# 821 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm learning about BIKES while\n"
# 822 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I work here.\p"
# 823 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "If you need advice on how to ride your\n"
# 824 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "BIKE, there're a couple handbooks in\l"
# 825 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "the back.$"
# 826 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 827 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_MachHandbookWhichPage:
# 828 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It's a handbook on the MACH BIKE.\p"
# 829 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Which page do you want to read?$"
# 830 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 831 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HowToRideMachBike:
# 832 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "A BIKE moves in the direction that\n"
# 833 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "the + Control Pad is pressed.\p"
# 834 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It will speed up once it gets rolling.\p"
# 835 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "To stop, release the + Control Pad.\n"
# 836 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "The BIKE will slow to a stop.\p"
# 837 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 838 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 839 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HowToTurnMachBike:
# 840 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "A MACH BIKE is speedy, but it can't\n"
# 841 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "stop very quickly.\p"
# 842 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It gets a little tricky to get around\n"
# 843 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "a corner.\p"
# 844 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Release the + Control Pad a little\n"
# 845 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "before the corner and slow down.\p"
# 846 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 847 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 848 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_SandySlopes:
# 849 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "There are small sandy slopes\n"
# 850 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "throughout the HOENN region.\p"
# 851 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "The loose, crumbly sand makes it\n"
# 852 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "impossible to climb normally.\p"
# 853 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "But if you have a MACH BIKE, you can\n"
# 854 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "zip up a sandy slope.\p"
# 855 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 856 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 857 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_AcroHandbookWhichPage:
# 858 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It's a handbook on the ACRO BIKE.\p"
# 859 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Which page do you want to read?$"
# 860 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 861 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_Wheelies:
# 862 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press the B Button while riding,\n"
# 863 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "and the front wheel lifts up.\p"
# 864 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "You can zip around with the front\n"
# 865 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "wheel up using the + Control Pad.\p"
# 866 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "This technique is called a wheelie.\p"
# 867 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 868 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 869 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_BunnyHops:
# 870 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Keeping the B Button pressed,\n"
# 871 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "your BIKE can hop on the spot.\p"
# 872 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "This technique is called a bunny hop.\p"
# 873 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "You can ride while hopping, too.\p"
# 874 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 875 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 876 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_Jumps:
# 877 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press the B Button and the + Control\n"
# 878 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Pad at the same time to jump.\p"
# 879 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press the + Control Pad to the side\n"
# 880 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "to jump sideways.\p"
# 881 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press it backwards to make the BIKE\n"
# 882 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "change directions while jumping.\p"
# 883 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"

MauvilleCity_BikeShop_EventScript_Rival1_Text_0:
# 28 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Suit yourself.$"

MauvilleCity_BikeShop_EventScript_Rival1_Text_1:
# 33 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Go right ahead.$"

MauvilleCity_BikeShop_Text_YouWantToRead::
# 66 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Oh! Did you want to read\n"
	.string "this manual?$"

MauvilleCity_BikeShop_Text_SpencerUsefulInfo::
# 71 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It's useful information, right?$"

MauvilleCity_BikeShop_Text_BrenUsefulInfo::
# 75 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It's useful information, right?$"

MauvilleCity_BikeShop_Text_KyleUsefulInfo::
# 79 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It's useful information, right?$"

MauvilleCity_BikeShop_Text_SpencerBikesLookCool::
# 318 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm glad you could make it, {PLAYER}.\n"
	.string "Don't these bikes look cool?$"

MauvilleCity_BikeShop_Text_BrenBikesLookCool::
# 323 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm glad you could make it, {PLAYER}.\n"
	.string "Don't these bikes look cool?$"

MauvilleCity_BikeShop_Text_KyleBikesLookCool::
# 328 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm glad you could make it, {PLAYER}.\n"
	.string "Don't these bikes look cool?$"

MauvilleCity_BikeShop_Text_SpencerWhyDidntYouTellMe::
# 333 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "SPENCER: Hey, guys!\n"
	.string "Cool bike shop.\l"
	.string "Why didn't you tell me this was here?$"

MauvilleCity_BikeShop_Text_BrenWhyDidntYouTellMe::
# 339 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "BREN: Hey, guys!\n"
	.string "Cool bike shop.\l"
	.string "Why didn't you tell me this was here?$"

MauvilleCity_BikeShop_Text_KyleWhyDidntYouTellMe::
# 345 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "KYLE: Hey, guys!\n"
	.string "Cool bike shop.\l"
	.string "Why didn't you tell me this was here?$"

MauvilleCity_BikeShop_Text_SpencerTriedTo::
# 351 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "SPENCER: I tried to, but you were in too\n"
	.string "much of a hurry to get to the GYM.$"

MauvilleCity_BikeShop_Text_BrenTriedTo::
# 355 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "BREN: I tried to, but you were in too\n"
	.string "much of a hurry to get to the GYM.$"

MauvilleCity_BikeShop_Text_KyleTriedTo::
# 359 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "KYLE: I tried to, but you were in too\n"
	.string "much of a hurry to get to the GYM.$"

MauvilleCity_BikeShop_Text_SpencerMyBad::
# 363 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "SPENCER: Whoops!\n"
	.string "Heh heh…\p"
	.string "My bad.$"

MauvilleCity_BikeShop_Text_BrenMyBad::
# 369 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "BREN: Whoops!\n"
	.string "Heh heh…\p"
	.string "My bad.$"

MauvilleCity_BikeShop_Text_KyleMyBad::
# 375 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "KYLE: Whoops!\n"
	.string "Heh heh…\p"
	.string "My bad.$"

MauvilleCity_BikeShop_Text_SpencerWouldBeNiceToHaveBikes::
# 381 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "SPENCER: Anyway… I was thinking. It\n"
	.string "would be nice if the three of us had\l"
	.string "bikes. We've traveled so far already,\l"
	.string "but we still have a long way to go.\l"
	.string "Having some bikes would help us cover\l"
	.string "distances that much quicker.\l"
	.string "Plus, we'd look super rad riding these\l"
	.string "around everywhere!\l"
	.string "I'm not sure we can afford them,\l"
	.string "though…$"

MauvilleCity_BikeShop_Text_BrenWouldBeNiceToHaveBikes::
# 390 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "BREN: Anyway… I was thinking. It would\n"
	.string "be nice if the three of us had bikes.\l"
	.string "We've traveled so far already, but we\l"
	.string "still have a long way to go. Having some\l"
	.string "bikes would help us cover distances\l"
	.string "that much quicker.\l"
	.string "Plus, we'd look super rad riding these\l"
	.string "around everywhere!\l"
	.string "I'm not sure we can afford them,\l"
	.string "though…$"

MauvilleCity_BikeShop_Text_KyleWouldBeNiceToHaveBikes::
# 399 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "KYLE: Anyway… I was thinking. It would\n"
	.string "be nice if the three of us had bikes.\l"
	.string "We've traveled so far already, but we\l"
	.string "still have a long way to go. Having some\l"
	.string "bikes would help us cover distances\l"
	.string "that much quicker.\l"
	.string "Plus, we'd look super rad riding these\l"
	.string "around everywhere!\l"
	.string "I'm not sure we can afford them,\l"
	.string "though…$"

MauvilleCity_BikeShop_Text_RydellFilthyShoes::
# 408 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Did you boys say you're on a long\n"
	.string "journey?\p"
	.string "Where are my manners?\n"
	.string "My name is RYDELL.\l"
	.string "I'm the owner of this shop.\p"
	.string "Your RUNNING SHOES…\n"
	.string "They're awfully filthy.\l"
	.string "Did you come from far away?$"

MauvilleCity_BikeShop_Text_RydellDontBeModest::
# 418 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDELL: Now, now…\n"
	.string "Don't be modest.\p"
	.string "I overheard you talking before.\n"
	.string "You must've come a long way!$"

MauvilleCity_BikeShop_Text_RydellCameAllThisWay::
# 425 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Hm, hm… … … … …\p"
	.string "You're saying that you came all this\n"
	.string "way from LITTLEROOT?\p"
	.string "My goodness!\n"
	.string "That's ridiculously far!\p"
	.string "And you say you have even further\n"
	.string "to go still?$"

MauvilleCity_BikeShop_Text_SpencerTakingGymChallenge::
# 435 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "SPENCER: Yeah.\n"
	.string "We're taking the GYM challenge, so we'll\l"
	.string "be travelling to all the GYMS around the\l"
	.string "region!$"

MauvilleCity_BikeShop_Text_BrenTakingGymChallenge::
# 440 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "BREN: Yeah.\n"
	.string "We're taking the GYM challenge, so we'll\l"
	.string "be travelling to all the GYMS around the\l"
	.string "region!$"

MauvilleCity_BikeShop_Text_KyleTakingGymChallenge::
# 445 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "KYLE: Yeah.\n"
	.string "We're taking the GYM challenge, so we'll\l"
	.string "be travelling to all the GYMS around the\l"
	.string "region!$"

MauvilleCity_BikeShop_Text_SpencerPokedexJourney::
# 450 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "SPENCER: Not to mention that the PROF.\n"
	.string "tasked us with filling out the POKéDEX.\l"
	.string "We will be searching far and wide to find\l"
	.string "as many species of POKéMON as we can!$"

MauvilleCity_BikeShop_Text_BrenPokedexJourney::
# 455 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "BREN: Not to mention that the PROF.\n"
	.string "tasked us with filling out the POKéDEX.\l"
	.string "We will be searching far and wide to find\l"
	.string "as many species of POKéMON as we can!$"

MauvilleCity_BikeShop_Text_KylePokedexJourney::
# 460 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "KYLE: Not to mention that the PROF.\n"
	.string "tasked us with filling out the POKéDEX.\l"
	.string "We will be searching far and wide to find\l"
	.string "as many species of POKéMON as we can!$"

MauvilleCity_BikeShop_Text_ThatSettlesIt::
# 465 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDELL: Well, that settles it.\n"
	.string "I have a proposal for you young\l"
	.string "adventurers. I only just opened up this\l"
	.string "bike shop and not a whole lot of people\l"
	.string "know about it yet.\l"
	.string "It would do wonders for marketing if\l"
	.string "people all over HOENN see you riding my\l"
	.string "bikes.\p"
	.string "I'll give you some bikes for free!\n"
	.string "Just be sure to ride them a whole lot so\l"
	.string "you spread the name RYDELL!\p"
	.string "Oh, wait a second!\p"
	.string "I forgot to tell you that there are\n"
	.string "two kinds of BIKES!\p"
	.string "They are the MACH BIKE and\n"
	.string "the ACRO BIKE!\p"
	.string "The MACH BIKE is for cyclists who want\n"
	.string "to feel the wind with their bodies!\p"
	.string "And an ACRO BIKE is for those who\n"
	.string "prefer technical rides!\p"
	.string "I'm a real sweetheart, so you can\n"
	.string "have whichever one you like!\p"
	.string "Which one will you choose?$"

MauvilleCity_BikeShop_Text_ExcellentChoice::
# 486 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDELL: Excellent choice!$"

MauvilleCity_BikeShop_Text_SpencerChooseAcro::
# 490 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "SPENCER: Doing bike tricks sounds\n"
	.string "awesome!\l"
	.string "I'll take the ACRO BIKE.$"

MauvilleCity_BikeShop_Text_BrenChooseAcro::
# 495 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "BREN: Doing bike tricks sounds\n"
	.string "awesome!\l"
	.string "I'll take the ACRO BIKE.$"

MauvilleCity_BikeShop_Text_KyleChooseAcro::
# 500 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "KYLE: Doing bike tricks sounds\n"
	.string "awesome!\l"
	.string "I'll take the ACRO BIKE.$"

MauvilleCity_BikeShop_Text_SpencerChooseMach::
# 505 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "SPENCER: I want to go super fast!\n"
	.string "I choose the MACH BIKE!$"

MauvilleCity_BikeShop_Text_BrenChooseMach::
# 510 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "BREN: I want to go super fast!\n"
	.string "I choose the MACH BIKE!$"

MauvilleCity_BikeShop_Text_KyleChooseMach::
# 515 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "KYLE: I want to go super fast!\n"
	.string "I choose the MACH BIKE!$"

MauvilleCity_BikeShop_Text_SpencerGoTryBike::
# 520 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "SPENCER: I'm going to go try out my new\n"
	.string "bike right now!$"

MauvilleCity_BikeShop_Text_BrenGoTryBike::
# 524 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "BREN: I'm going to go try out my new\n"
	.string "bike right now!$"

MauvilleCity_BikeShop_Text_KyleGoTryBike::
# 528 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "KYLE: I'm going to go try out my new\n"
	.string "bike right now!$"

MauvilleCity_BikeShop_Text_SpencerLookUpManual::
# 532 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I saw some bike manuals in the back\n"
	.string "earlier. I'm going to look up how to make\l"
	.string "my new bike go as fast as possible!$"

MauvilleCity_BikeShop_Text_BrenLookUpManual::
# 537 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I saw some bike manuals in the back\n"
	.string "earlier. I'm going to look up how to make\l"
	.string "my new bike go as fast as possible!$"

MauvilleCity_BikeShop_Text_KyleLookUpManual::
# 542 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I saw some bike manuals in the back\n"
	.string "earlier. I'm going to look up how to make\l"
	.string "my new bike go as fast as possible!$"

MauvilleCity_BikeShop_Text_PleaseLookAround::
# 569 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm still setting up.\n"
	.string "Please feel free to look around.$"
