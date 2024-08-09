# 9 "data/maps/RustboroCity/scripts.pory"

# 10 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_LITTLE_BOY, 7
# 11 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_LITTLE_GIRL, 8
# 12 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 9
# 13 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_GRUNT, 10
# 14 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_RIVAL2, 14
# 15 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_SCIENTIST, 15
# 16 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_RIVAL1, 17

RustboroCity_MapScripts::
# 32 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 42 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

RustboroCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 33 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 34 "data/maps/RustboroCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 35 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RUSTBORO_CITY_STATE, 1, RustboroCity_EventScript_SetRivalForRetrieveGoods
# 36 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RUSTBORO_CITY_STATE, 2, RustboroCity_EventScript_SetRivalForRetrieveGoods
# 37 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RUSTBORO_CITY_STATE, 4, RustboroCity_EventScript_SetForReturnGoods
# 38 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_HideMapNamePopup
# 39 "data/maps/RustboroCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 40 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_PositionScientistForExit
	return

RustboroCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 43 "data/maps/RustboroCity/scripts.pory"
	map_script_2 VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_ScientistAddMatchCall
	.2byte 0


RustboroCity_EventScript_PositionScientistForExit::
# 48 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_TEMP_0, 11, RustboroCity_EventScript_PositionScientistLeftExit
# 49 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm 15, 11, 15
# 50 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm 17, 11, 15
# 51 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype 17, MOVEMENT_TYPE_FACE_DOWN
	end


RustboroCity_EventScript_PositionScientistLeftExit::
# 56 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm 15, 12, 15
# 57 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm 17, 12, 15
# 58 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype 17, MOVEMENT_TYPE_FACE_DOWN
	end


RustboroCity_EventScript_HideMapNamePopup::
# 63 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return


RustboroCity_EventScript_SetRivalForRetrieveGoods::
# 68 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm 17, 21, 10
	return


RustboroCity_EventScript_SetForReturnGoods::
# 72 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_LEFT
	return


RustboroCity_EventScript_ScientistAddMatchCall::
# 76 "data/maps/RustboroCity/scripts.pory"
	lockall
# 77 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 1
# 78 "data/maps/RustboroCity/scripts.pory"
	destroyfollower
# 79 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 80 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 81 "data/maps/RustboroCity/scripts.pory"
	addobject 17
# 82 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, Common_Movement_WalkDown
# 83 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 84 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_PlayerWalkDown
# 85 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, RustboroCity_Movement_PlayerWalkDown
# 86 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 87 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 88 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 89 "data/maps/RustboroCity/scripts.pory"
	addobject 15
# 90 "data/maps/RustboroCity/scripts.pory"
	applymovement 15, RustboroCity_Movement_ScientistApproachPlayer
# 91 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 92 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 93 "data/maps/RustboroCity/scripts.pory"
	applymovement 15, Common_Movement_ExclamationMark
# 94 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 95 "data/maps/RustboroCity/scripts.pory"
	applymovement 15, Common_Movement_Delay48
# 96 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 97 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 98 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, Common_Movement_WalkInPlaceFasterUp
# 99 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 100 "data/maps/RustboroCity/scripts.pory"
	applymovement 15, RustboroCity_Movement_ScientistWalkInPlaceDown
# 101 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 102 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevelopedNewPokenavFeature, MSGBOX_DEFAULT
# 103 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 104 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 105 "data/maps/RustboroCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 106 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_0, 11
	goto_if_eq RustboroCity_EventScript_ScientistAddMatchCall_2
# 114 "data/maps/RustboroCity/scripts.pory"
	applymovement 15, Common_Movement_WalkInPlaceFasterLeft
# 115 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 116 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_UpdatePokenav
# 117 "data/maps/RustboroCity/scripts.pory"
	applymovement 15, RustboroCity_Movement_GoToPlayerUpgradeRight
# 118 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
RustboroCity_EventScript_ScientistAddMatchCall_1:
# 120 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_UpdatePokenav
# 121 "data/maps/RustboroCity/scripts.pory"
	applymovement 15, Common_Movement_WalkInPlaceFasterDown
# 122 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 123 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_AddedMatchCallPleaseCallMrStone, MSGBOX_DEFAULT
# 124 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 125 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 126 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
	return

RustboroCity_EventScript_ScientistAddMatchCall_2:
# 107 "data/maps/RustboroCity/scripts.pory"
	applymovement 15, Common_Movement_WalkInPlaceFasterRight
# 108 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 109 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_UpdatePokenav
# 110 "data/maps/RustboroCity/scripts.pory"
	applymovement 15, RustboroCity_Movement_GoToPlayerUpgradeLeft
# 111 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
	goto RustboroCity_EventScript_ScientistAddMatchCall_1


RustboroCity_EventScript_UpdatePokenav::
# 130 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 131 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 132 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 133 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 134 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 135 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 136 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 137 "data/maps/RustboroCity/scripts.pory"
	delay 20
	return


RustboroCity_EventScript_PleaseSelectPokenav::
# 142 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseSelectPokenav, MSGBOX_DEFAULT
# 143 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 144 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 145 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
	return


RustboroCity_EventScript_MatchCallTutorial::
# 149 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 150 "data/maps/RustboroCity/scripts.pory"
	special ScriptMenu_CreateStartMenuForPokenavTutorial
# 151 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 152 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 153 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_MatchCallTutorial_3
# 155 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_MatchCallTutorial_4
# 157 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_MatchCallTutorial_5
# 159 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_MatchCallTutorial_6
# 161 "data/maps/RustboroCity/scripts.pory"
	case 5, RustboroCity_EventScript_MatchCallTutorial_7
# 163 "data/maps/RustboroCity/scripts.pory"
	case 6, RustboroCity_EventScript_MatchCallTutorial_8
# 165 "data/maps/RustboroCity/scripts.pory"
	case 7, RustboroCity_EventScript_MatchCallTutorial_9
# 167 "data/maps/RustboroCity/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_EventScript_MatchCallTutorial_10
RustboroCity_EventScript_MatchCallTutorial_1:
# 170 "data/maps/RustboroCity/scripts.pory"
	special OpenPokenavForTutorial
# 171 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 172 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 173 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_IdBetterGetBackToWork, MSGBOX_DEFAULT
# 174 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 175 "data/maps/RustboroCity/scripts.pory"
	applymovement 15, RustboroCity_Movement_ScientistLeave
# 176 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 177 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 178 "data/maps/RustboroCity/scripts.pory"
	removeobject 15
# 179 "data/maps/RustboroCity/scripts.pory"
	waitse
# 180 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 181 "data/maps/RustboroCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 182 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_0, 11
	goto_if_eq RustboroCity_EventScript_MatchCallTutorial_12
# 187 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, Common_Movement_WalkInPlaceRight
# 188 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
RustboroCity_EventScript_MatchCallTutorial_11:
# 190 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 191 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_Rival1LetsRegister, MSGBOX_DEFAULT
# 192 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 193 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 194 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 195 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredRival1, MSGBOX_DEFAULT
# 196 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 197 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 198 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 199 "data/maps/RustboroCity/scripts.pory"
	checkfriendchoice
# 200 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 201 "data/maps/RustboroCity/scripts.pory"
	case SPENCER, RustboroCity_EventScript_MatchCallTutorial_17
# 203 "data/maps/RustboroCity/scripts.pory"
	case BREN, RustboroCity_EventScript_MatchCallTutorial_18
# 205 "data/maps/RustboroCity/scripts.pory"
	case KYLE, RustboroCity_EventScript_MatchCallTutorial_19
RustboroCity_EventScript_MatchCallTutorial_15:
# 208 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_SeeYouSoon, MSGBOX_DEFAULT
# 209 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 210 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 211 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, RustboroCity_Movement_Rival1LeaveAfterPokenav
# 212 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 213 "data/maps/RustboroCity/scripts.pory"
	removeobject 17
# 214 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 215 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_DEVON_3F_RIVAL1
# 216 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 217 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 218 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_MatchCallTutorial_3:
# 154 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_PleaseSelectPokenav
	goto RustboroCity_EventScript_MatchCallTutorial_1

RustboroCity_EventScript_MatchCallTutorial_4:
# 156 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_PleaseSelectPokenav
	goto RustboroCity_EventScript_MatchCallTutorial_1

RustboroCity_EventScript_MatchCallTutorial_5:
# 158 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_PleaseSelectPokenav
	goto RustboroCity_EventScript_MatchCallTutorial_1

RustboroCity_EventScript_MatchCallTutorial_6:
# 160 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_PleaseSelectPokenav
	goto RustboroCity_EventScript_MatchCallTutorial_1

RustboroCity_EventScript_MatchCallTutorial_7:
# 162 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_PleaseSelectPokenav
	goto RustboroCity_EventScript_MatchCallTutorial_1

RustboroCity_EventScript_MatchCallTutorial_8:
# 164 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_PleaseSelectPokenav
	goto RustboroCity_EventScript_MatchCallTutorial_1

RustboroCity_EventScript_MatchCallTutorial_9:
# 166 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_PleaseSelectPokenav
	goto RustboroCity_EventScript_MatchCallTutorial_1

RustboroCity_EventScript_MatchCallTutorial_10:
# 168 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_PleaseSelectPokenav
	goto RustboroCity_EventScript_MatchCallTutorial_1

RustboroCity_EventScript_MatchCallTutorial_12:
# 183 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 184 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, Common_Movement_WalkInPlaceLeft
	goto RustboroCity_EventScript_MatchCallTutorial_11

RustboroCity_EventScript_MatchCallTutorial_17:
# 202 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_BREN_MATCH_CALL
	goto RustboroCity_EventScript_MatchCallTutorial_15

RustboroCity_EventScript_MatchCallTutorial_18:
# 204 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_KYLE_MATCH_CALL
	goto RustboroCity_EventScript_MatchCallTutorial_15

RustboroCity_EventScript_MatchCallTutorial_19:
# 206 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_SPENCER_MATCH_CALL
	goto RustboroCity_EventScript_MatchCallTutorial_15


# 222 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkInPlaceDown:
# 223 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_down
	step_end

# 226 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_PlayerWalkDown:
# 227 "data/maps/RustboroCity/scripts.pory"
	walk_down
	step_end

# 230 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistApproachPlayer:
# 231 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 232 "data/maps/RustboroCity/scripts.pory"
	delay_16
	step_end

# 236 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkAroundPlayer:
# 237 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 238 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 239 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 240 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 241 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 242 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 243 "data/maps/RustboroCity/scripts.pory"
	delay_16
	step_end

# 246 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistLeave:
# 247 "data/maps/RustboroCity/scripts.pory"
	walk_up
	step_end

# 250 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GoToPlayerUpgradeLeft:
# 251 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 252 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_down
# 253 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 254 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_left
	step_end

# 257 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GoToPlayerUpgradeRight:
# 258 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 259 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_down
# 260 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 261 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_right
	step_end

# 264 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_Rival1LeaveAfterPokenav:
# 265 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
# 265 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
# 265 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
# 265 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
# 266 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 266 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 266 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 266 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 266 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 266 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 266 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 266 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 266 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 267 "data/maps/RustboroCity/scripts.pory"
	set_invisible
	step_end

# 287 "data/maps/RustboroCity/scripts.pory"

# 288 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatMan::
# 289 "data/maps/RustboroCity/scripts.pory"
	lock
# 290 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 291 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatManSawGrunt
# 292 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
# 293 "data/maps/RustboroCity/scripts.pory"
	release
# 294 "data/maps/RustboroCity/scripts.pory"
	end
# 295 "data/maps/RustboroCity/scripts.pory"

# 296 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatManSawGrunt::
# 297 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
# 298 "data/maps/RustboroCity/scripts.pory"
	release
# 299 "data/maps/RustboroCity/scripts.pory"
	end
# 300 "data/maps/RustboroCity/scripts.pory"

# 301 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee2::
# 302 "data/maps/RustboroCity/scripts.pory"
	lock
# 303 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 304 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
# 305 "data/maps/RustboroCity/scripts.pory"
	release
# 306 "data/maps/RustboroCity/scripts.pory"
	end
# 307 "data/maps/RustboroCity/scripts.pory"

# 308 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Woman::
# 309 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
# 310 "data/maps/RustboroCity/scripts.pory"
	end
# 311 "data/maps/RustboroCity/scripts.pory"

# 312 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1::
# 313 "data/maps/RustboroCity/scripts.pory"
	lock
# 314 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 315 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1HaveBadge
# 316 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
# 317 "data/maps/RustboroCity/scripts.pory"
	release
# 318 "data/maps/RustboroCity/scripts.pory"
	end
# 319 "data/maps/RustboroCity/scripts.pory"

# 320 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1HaveBadge::
# 321 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
# 322 "data/maps/RustboroCity/scripts.pory"
	release
# 323 "data/maps/RustboroCity/scripts.pory"
	end
# 324 "data/maps/RustboroCity/scripts.pory"

# 325 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2::
# 326 "data/maps/RustboroCity/scripts.pory"
	lock
# 327 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 328 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2BrineyLeftTunnel
# 329 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
# 330 "data/maps/RustboroCity/scripts.pory"
	release
# 331 "data/maps/RustboroCity/scripts.pory"
	end
# 332 "data/maps/RustboroCity/scripts.pory"

# 333 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2BrineyLeftTunnel::
# 334 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
# 335 "data/maps/RustboroCity/scripts.pory"
	release
# 336 "data/maps/RustboroCity/scripts.pory"
	end
# 337 "data/maps/RustboroCity/scripts.pory"

# 338 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Twin::
# 339 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
# 340 "data/maps/RustboroCity/scripts.pory"
	end
# 341 "data/maps/RustboroCity/scripts.pory"

# 342 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_NinjaBoy::
# 343 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
# 344 "data/maps/RustboroCity/scripts.pory"
	end
# 345 "data/maps/RustboroCity/scripts.pory"

# 346 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TunnelSign::
# 347 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
# 348 "data/maps/RustboroCity/scripts.pory"
	end
# 349 "data/maps/RustboroCity/scripts.pory"

# 350 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpSign::
# 351 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
# 352 "data/maps/RustboroCity/scripts.pory"
	end
# 353 "data/maps/RustboroCity/scripts.pory"

# 354 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_GymSign::
# 355 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
# 356 "data/maps/RustboroCity/scripts.pory"
	end
# 357 "data/maps/RustboroCity/scripts.pory"

# 358 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 359 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpBranchOfficeSign::
# 360 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpBranchOfficeSign, MSGBOX_SIGN
# 361 "data/maps/RustboroCity/scripts.pory"
	end
# 362 "data/maps/RustboroCity/scripts.pory"

# 363 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CitySign::
# 364 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
# 365 "data/maps/RustboroCity/scripts.pory"
	end
# 366 "data/maps/RustboroCity/scripts.pory"

# 367 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TrainersSchoolSign::
# 368 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
# 369 "data/maps/RustboroCity/scripts.pory"
	end
# 370 "data/maps/RustboroCity/scripts.pory"

# 371 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CuttersHouseSign::
# 372 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
# 373 "data/maps/RustboroCity/scripts.pory"
	end
# 374 "data/maps/RustboroCity/scripts.pory"

# 375 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleBoy::
# 376 "data/maps/RustboroCity/scripts.pory"
	lock
# 377 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 378 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
# 379 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 380 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 381 "data/maps/RustboroCity/scripts.pory"
	release
# 382 "data/maps/RustboroCity/scripts.pory"
	end
# 383 "data/maps/RustboroCity/scripts.pory"

# 384 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleGirl::
# 385 "data/maps/RustboroCity/scripts.pory"
	lock
# 386 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 387 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
# 388 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 389 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 390 "data/maps/RustboroCity/scripts.pory"
	release
# 391 "data/maps/RustboroCity/scripts.pory"
	end
# 392 "data/maps/RustboroCity/scripts.pory"

# 393 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man2::
# 394 "data/maps/RustboroCity/scripts.pory"
	lock
# 395 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 396 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
# 397 "data/maps/RustboroCity/scripts.pory"
	release
# 398 "data/maps/RustboroCity/scripts.pory"
	end
# 399 "data/maps/RustboroCity/scripts.pory"

# 400 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger0::
# 401 "data/maps/RustboroCity/scripts.pory"
	lockall
# 402 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 403 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 404 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 0
# 405 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 406 "data/maps/RustboroCity/scripts.pory"
	end
# 407 "data/maps/RustboroCity/scripts.pory"

# 408 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger1::
# 409 "data/maps/RustboroCity/scripts.pory"
	lockall
# 410 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 411 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 412 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 1
# 413 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 414 "data/maps/RustboroCity/scripts.pory"
	end
# 415 "data/maps/RustboroCity/scripts.pory"

# 416 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger2::
# 417 "data/maps/RustboroCity/scripts.pory"
	lockall
# 418 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 419 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 420 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 2
# 421 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 422 "data/maps/RustboroCity/scripts.pory"
	end
# 423 "data/maps/RustboroCity/scripts.pory"

# 424 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger3::
# 425 "data/maps/RustboroCity/scripts.pory"
	lockall
# 426 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 427 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 428 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 3
# 429 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 430 "data/maps/RustboroCity/scripts.pory"
	end
# 431 "data/maps/RustboroCity/scripts.pory"

# 432 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger4::
# 433 "data/maps/RustboroCity/scripts.pory"
	lockall
# 434 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 435 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 436 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 4
# 437 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 438 "data/maps/RustboroCity/scripts.pory"
	end
# 439 "data/maps/RustboroCity/scripts.pory"

# 440 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene::
# 441 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
# 442 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 443 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 444 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_GRUNT
# 445 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_DEVON_EMPLOYEE
# 446 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_GRUNT, RustboroCity_Movement_GruntEscape
# 447 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 448 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_GRUNT
# 449 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt1
# 450 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 451 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WaitDontTakeMyGoods, MSGBOX_DEFAULT
# 452 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 453 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt2
# 454 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 455 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 456 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 457 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 30, 10
# 458 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 459 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEVON_GOODS_STOLEN
# 460 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 2
# 461 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
# 462 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE116_STATE, 1
# 463 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 464 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_RIVAL1
# 465 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 466 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 467 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 468 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 469 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 470 "data/maps/RustboroCity/scripts.pory"
	end
# 471 "data/maps/RustboroCity/scripts.pory"

# 472 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 473 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ShadyCharacterTookOff::
# 474 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 475 "data/maps/RustboroCity/scripts.pory"
	return
# 476 "data/maps/RustboroCity/scripts.pory"

# 477 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 478 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_YouGotItThankYou::
# 479 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 480 "data/maps/RustboroCity/scripts.pory"
	return
# 481 "data/maps/RustboroCity/scripts.pory"

# 482 "data/maps/RustboroCity/scripts.pory"
@ Unknown, unused employee movements. Based on the differences in movement theyre for approaching an object (probably the player) in different positions
# 483 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachUp::
# 484 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachUp
# 485 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 486 "data/maps/RustboroCity/scripts.pory"
	return
# 487 "data/maps/RustboroCity/scripts.pory"

# 488 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 489 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachLeft::
# 490 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachLeft
# 491 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 492 "data/maps/RustboroCity/scripts.pory"
	return
# 493 "data/maps/RustboroCity/scripts.pory"

# 494 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 495 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachRight::
# 496 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachRight
# 497 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 498 "data/maps/RustboroCity/scripts.pory"
	return
# 499 "data/maps/RustboroCity/scripts.pory"

# 500 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 501 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachDown::
# 502 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachDown
# 503 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 504 "data/maps/RustboroCity/scripts.pory"
	return
# 505 "data/maps/RustboroCity/scripts.pory"

# 506 "data/maps/RustboroCity/scripts.pory"
@ Unused, similar movement to the above scripts
# 507 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerFar::
# 508 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerFar
# 509 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 510 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 511 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 512 "data/maps/RustboroCity/scripts.pory"
	return
# 513 "data/maps/RustboroCity/scripts.pory"

# 514 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 515 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscapeExtended:
# 516 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 517 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 518 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 519 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 520 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 521 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 522 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 523 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 524 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 525 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 526 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 527 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 528 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 529 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 530 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 531 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 532 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 533 "data/maps/RustboroCity/scripts.pory"
	step_end
# 534 "data/maps/RustboroCity/scripts.pory"

# 535 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscape:
# 536 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 537 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 538 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 539 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 540 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 541 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 542 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 543 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 544 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 545 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 546 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 547 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 548 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 549 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 550 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 551 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 552 "data/maps/RustboroCity/scripts.pory"
	step_end
# 553 "data/maps/RustboroCity/scripts.pory"

# 554 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt1:
# 555 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 556 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 557 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 558 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 559 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 560 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 561 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 562 "data/maps/RustboroCity/scripts.pory"
	step_end
# 563 "data/maps/RustboroCity/scripts.pory"

# 564 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt2:
# 565 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 566 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 567 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 568 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 569 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 570 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 571 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 572 "data/maps/RustboroCity/scripts.pory"
	step_end
# 573 "data/maps/RustboroCity/scripts.pory"

# 574 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 575 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachUp:
# 576 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 577 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 578 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 579 "data/maps/RustboroCity/scripts.pory"
	step_end
# 580 "data/maps/RustboroCity/scripts.pory"

# 581 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 582 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachLeft:
# 583 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 584 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 585 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 586 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 587 "data/maps/RustboroCity/scripts.pory"
	step_end
# 588 "data/maps/RustboroCity/scripts.pory"

# 589 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 590 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachRight:
# 591 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 592 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 593 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 594 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 595 "data/maps/RustboroCity/scripts.pory"
	step_end
# 596 "data/maps/RustboroCity/scripts.pory"

# 597 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 598 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachDown:
# 599 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 600 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 601 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 602 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 603 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 604 "data/maps/RustboroCity/scripts.pory"
	step_end
# 605 "data/maps/RustboroCity/scripts.pory"

# 606 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 607 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerFar:
# 608 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 609 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 610 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 611 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 612 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 613 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 614 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_down
# 615 "data/maps/RustboroCity/scripts.pory"
	step_end

RustboroCity_EventScript_DevonEmployee1::
# 619 "data/maps/RustboroCity/scripts.pory"
	lock
# 620 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 621 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_ReturnGoodsSpokeToEmployee
# 622 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 623 "data/maps/RustboroCity/scripts.pory"
	release
	end


RustboroCity_EventScript_ReturnGoodsSpokeToEmployee::
# 628 "data/maps/RustboroCity/scripts.pory"
	waitse
# 629 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 630 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
	end


RustboroCity_EventScript_HelpGetGoodsTrigger0::
# 635 "data/maps/RustboroCity/scripts.pory"
	lockall
# 636 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 637 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
	end


RustboroCity_EventScript_HelpGetGoodsTrigger1::
# 642 "data/maps/RustboroCity/scripts.pory"
	lockall
# 643 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 644 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
	end


RustboroCity_EventScript_HelpGetGoodsTrigger2::
# 649 "data/maps/RustboroCity/scripts.pory"
	lockall
# 650 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 651 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
	end


RustboroCity_EventScript_HelpGetGoodsTrigger3::
# 656 "data/maps/RustboroCity/scripts.pory"
	lockall
# 657 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 658 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
	end


RustboroCity_EventScript_EmployeeAskToGetGoods::
# 663 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_RIVAL1
# 664 "data/maps/RustboroCity/scripts.pory"
	addobject 17
# 665 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp1
# 666 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft1
# 667 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown1
# 668 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown1
# 669 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 670 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 3
# 671 "data/maps/RustboroCity/scripts.pory"
	copyobjectxytoperm 9
# 672 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
# 673 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_Rival1AfterAskToGetGoods
# 674 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end


RustboroCity_EventScript_Rival1AfterAskToGetGoods::
# 679 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 680 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 681 "data/maps/RustboroCity/scripts.pory"
	ballfollowingmon
# 682 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 683 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_NoticeRival1
# 684 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 685 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoPlayer, MSGBOX_DEFAULT
# 686 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 687 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, RustboroCity_Movement_Rival1ApproachPlayer
# 688 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 689 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WhatsGoingOn, MSGBOX_DEFAULT
# 690 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 691 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_PlayerExplain
# 692 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 693 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GuyGotMugged, MSGBOX_DEFAULT
# 694 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 695 "data/maps/RustboroCity/scripts.pory"
	switch VAR_TEMP_1
# 696 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_Rival1AfterAskToGetGoods_3
# 700 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_Rival1AfterAskToGetGoods_4
# 704 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_Rival1AfterAskToGetGoods_5
# 705 "data/maps/RustboroCity/scripts.pory"
	case 3, RustboroCity_EventScript_Rival1AfterAskToGetGoods_5
RustboroCity_EventScript_Rival1AfterAskToGetGoods_1:
# 710 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 711 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DontWorrySir, MSGBOX_DEFAULT
# 712 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 713 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq RustboroCity_EventScript_Rival1AfterAskToGetGoods_7
# 717 "data/maps/RustboroCity/scripts.pory"
	applymovement 9, RustboroCity_Movement_SpeakLeft
RustboroCity_EventScript_Rival1AfterAskToGetGoods_6:
# 719 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 720 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ThankBothOfYou, MSGBOX_DEFAULT
# 721 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 722 "data/maps/RustboroCity/scripts.pory"
	switch VAR_TEMP_1
# 723 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_Rival1AfterAskToGetGoods_12
# 726 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_Rival1AfterAskToGetGoods_13
# 729 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_Rival1AfterAskToGetGoods_14
# 730 "data/maps/RustboroCity/scripts.pory"
	case 3, RustboroCity_EventScript_Rival1AfterAskToGetGoods_14
RustboroCity_EventScript_Rival1AfterAskToGetGoods_10:
# 734 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 735 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_LetsGoCatchMugger, MSGBOX_DEFAULT
# 736 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 737 "data/maps/RustboroCity/scripts.pory"
	applymovement 9, Common_Movement_FaceRight
# 738 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 739 "data/maps/RustboroCity/scripts.pory"
	switch VAR_TEMP_1
# 740 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_Rival1AfterAskToGetGoods_17
# 742 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_Rival1AfterAskToGetGoods_18
# 744 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_Rival1AfterAskToGetGoods_19
# 746 "data/maps/RustboroCity/scripts.pory"
	case 3, RustboroCity_EventScript_Rival1AfterAskToGetGoods_20
RustboroCity_EventScript_Rival1AfterAskToGetGoods_15:
# 749 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 750 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_RIVAL1
# 751 "data/maps/RustboroCity/scripts.pory"
	removeobject 17
# 752 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm 17, 29, 10
	return

RustboroCity_EventScript_Rival1AfterAskToGetGoods_3:
# 697 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 698 "data/maps/RustboroCity/scripts.pory"
	applymovement 9, Common_Movement_FaceLeft
# 699 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, RustboroCity_Movement_Rival1ApproachDevonEmployee0
	goto RustboroCity_EventScript_Rival1AfterAskToGetGoods_1

RustboroCity_EventScript_Rival1AfterAskToGetGoods_4:
# 701 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 702 "data/maps/RustboroCity/scripts.pory"
	applymovement 9, Common_Movement_FaceDown
# 703 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, RustboroCity_Movement_Rival1ApproachDevonEmployee1
	goto RustboroCity_EventScript_Rival1AfterAskToGetGoods_1

RustboroCity_EventScript_Rival1AfterAskToGetGoods_5:
# 706 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 707 "data/maps/RustboroCity/scripts.pory"
	applymovement 9, Common_Movement_FaceLeft
# 708 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, RustboroCity_Movement_Rival1ApproachDevonEmployee2and3
	goto RustboroCity_EventScript_Rival1AfterAskToGetGoods_1

RustboroCity_EventScript_Rival1AfterAskToGetGoods_7:
# 714 "data/maps/RustboroCity/scripts.pory"
	applymovement 9, RustboroCity_Movement_SpeakDown
	goto RustboroCity_EventScript_Rival1AfterAskToGetGoods_6

RustboroCity_EventScript_Rival1AfterAskToGetGoods_12:
# 724 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 725 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, RustboroCity_Movement_Rival1ApproachDevonEmployee2and3
	goto RustboroCity_EventScript_Rival1AfterAskToGetGoods_10

RustboroCity_EventScript_Rival1AfterAskToGetGoods_13:
# 727 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 728 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, RustboroCity_Movement_Rival1ReturnToPlayer1
	goto RustboroCity_EventScript_Rival1AfterAskToGetGoods_10

RustboroCity_EventScript_Rival1AfterAskToGetGoods_14:
# 731 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 732 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, RustboroCity_Movement_Rival1ApproachDevonEmployee0
	goto RustboroCity_EventScript_Rival1AfterAskToGetGoods_10

RustboroCity_EventScript_Rival1AfterAskToGetGoods_17:
# 741 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, RustboroCity_Movement_Rival1ChaseMugger0
	goto RustboroCity_EventScript_Rival1AfterAskToGetGoods_15

RustboroCity_EventScript_Rival1AfterAskToGetGoods_18:
# 743 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, RustboroCity_Movement_Rival1ChaseMugger1
	goto RustboroCity_EventScript_Rival1AfterAskToGetGoods_15

RustboroCity_EventScript_Rival1AfterAskToGetGoods_19:
# 745 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, RustboroCity_Movement_Rival1ChaseMugger2
	goto RustboroCity_EventScript_Rival1AfterAskToGetGoods_15

RustboroCity_EventScript_Rival1AfterAskToGetGoods_20:
# 747 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, RustboroCity_Movement_Rival1ChaseMugger3
	goto RustboroCity_EventScript_Rival1AfterAskToGetGoods_15


RustboroCity_EventScript_EmployeeFacePlayerUp1::
# 758 "data/maps/RustboroCity/scripts.pory"
	applymovement 9, Common_Movement_WalkInPlaceFasterUp
# 759 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 760 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 761 "data/maps/RustboroCity/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 762 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 763 "data/maps/RustboroCity/scripts.pory"
	applymovement 9, Common_Movement_Delay48
# 764 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 765 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 766 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 767 "data/maps/RustboroCity/scripts.pory"
	setobjectxy 17, 22, 9
	return


RustboroCity_EventScript_EmployeeFacePlayerLeft1::
# 772 "data/maps/RustboroCity/scripts.pory"
	applymovement 9, Common_Movement_WalkInPlaceFasterLeft
# 773 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 774 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 775 "data/maps/RustboroCity/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 776 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 777 "data/maps/RustboroCity/scripts.pory"
	applymovement 9, Common_Movement_Delay48
# 778 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 779 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 780 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
	return


RustboroCity_EventScript_EmployeeFacePlayerDown1::
# 785 "data/maps/RustboroCity/scripts.pory"
	applymovement 9, Common_Movement_WalkInPlaceFasterDown
# 786 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 787 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 788 "data/maps/RustboroCity/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 789 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 790 "data/maps/RustboroCity/scripts.pory"
	applymovement 9, Common_Movement_Delay48
# 791 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 792 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 793 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 794 "data/maps/RustboroCity/scripts.pory"
	setobjectxy 17, 22, 11
	return


RustboroCity_EventScript_EmployeeApproachPlayerDown1::
# 799 "data/maps/RustboroCity/scripts.pory"
	applymovement 9, Common_Movement_WalkInPlaceFasterDown
# 800 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 801 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 802 "data/maps/RustboroCity/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 803 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 804 "data/maps/RustboroCity/scripts.pory"
	applymovement 9, Common_Movement_Delay48
# 805 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 806 "data/maps/RustboroCity/scripts.pory"
	applymovement 9, RustboroCity_Movement_EmployeeApproachPlayerDown
# 807 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 808 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 809 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 810 "data/maps/RustboroCity/scripts.pory"
	setobjectxy 17, 22, 12
	return


# 814 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerDown:
# 815 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 816 "data/maps/RustboroCity/scripts.pory"
	step_end

# 819 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_NoticeRival1:
# 820 "data/maps/RustboroCity/scripts.pory"
	emote_exclamation_mark
# 821 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_left
	step_end

# 824 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_Rival1ApproachPlayer:
# 825 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 825 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 825 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 825 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 825 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 825 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 825 "data/maps/RustboroCity/scripts.pory"
	walk_right
	step_end

# 828 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_PlayerExplain:
# 829 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_left
# 829 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_left
# 829 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_left
# 830 "data/maps/RustboroCity/scripts.pory"
	delay_16
	step_end

# 833 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_Rival1ApproachDevonEmployee0:
# 834 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 835 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_right
# 835 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_right
	step_end

# 838 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_Rival1ApproachDevonEmployee1:
# 839 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 840 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 840 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 841 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_up
# 841 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_up
	step_end

# 844 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_Rival1ApproachDevonEmployee2and3:
# 845 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 846 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_right
# 846 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_right
	step_end

# 849 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_SpeakUp:
# 850 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_up
# 850 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_up
	step_end

# 853 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_SpeakDown:
# 854 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_down
# 854 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_down
	step_end

# 857 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_SpeakRight:
# 858 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_right
# 858 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_right
	step_end

# 861 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_SpeakLeft:
# 862 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_left
# 862 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_left
	step_end

# 865 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_Rival1ReturnToPlayer1:
# 866 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 867 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_up
# 867 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_up
	step_end

# 870 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_Rival1ChaseMugger0:
# 871 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
# 871 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
# 872 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 872 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 872 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 872 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 872 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 872 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 872 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 872 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 872 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 873 "data/maps/RustboroCity/scripts.pory"
	set_invisible
	step_end

# 876 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_Rival1ChaseMugger1:
# 877 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 877 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 877 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 877 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 877 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 877 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 877 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 877 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 878 "data/maps/RustboroCity/scripts.pory"
	set_invisible
	step_end

# 881 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_Rival1ChaseMugger2:
# 882 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
# 883 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 883 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 883 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 883 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 883 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 883 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 883 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 883 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 883 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 884 "data/maps/RustboroCity/scripts.pory"
	set_invisible
	step_end

# 887 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_Rival1ChaseMugger3:
# 888 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 888 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 889 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 889 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 889 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 889 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 889 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 889 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 889 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 889 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 889 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 890 "data/maps/RustboroCity/scripts.pory"
	set_invisible
	step_end

RustboroCity_EventScript_ReturnGoodsTrigger0::
# 921 "data/maps/RustboroCity/scripts.pory"
	lockall
# 922 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 923 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_EmployeeFacePlayerUp2
# 924 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
	end


RustboroCity_EventScript_ReturnGoodsTrigger1::
# 929 "data/maps/RustboroCity/scripts.pory"
	lockall
# 930 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 931 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_EmployeeFacePlayerLeft2
# 932 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
	end


RustboroCity_EventScript_ReturnGoodsTrigger2::
# 937 "data/maps/RustboroCity/scripts.pory"
	lockall
# 938 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 939 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_EmployeeFacePlayerDown2
# 940 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
	end


RustboroCity_EventScript_ReturnGoodsTrigger3::
# 945 "data/maps/RustboroCity/scripts.pory"
	lockall
# 946 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 947 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_EmployeeApproachPlayerDown2
# 948 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
	end


RustboroCity_EventScript_ReturnGoods::
# 953 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 954 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 955 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, RustboroCity_EventScript_BagFull
# 956 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq RustboroCity_EventScript_ReturnGoods_2
# 960 "data/maps/RustboroCity/scripts.pory"
	turnobject 17, DIR_EAST
RustboroCity_EventScript_ReturnGoods_1:
# 962 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 963 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 964 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 965 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 966 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_RIVAL1
# 967 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 5
# 968 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 969 "data/maps/RustboroCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 2, 2
# 970 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 971 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_ReturnGoods_2:
# 957 "data/maps/RustboroCity/scripts.pory"
	turnobject 17, DIR_NORTH
	goto RustboroCity_EventScript_ReturnGoods_1


RustboroCity_EventScript_BagFull::
# 976 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
	return


RustboroCity_EventScript_EmployeeFacePlayerUp2::
# 981 "data/maps/RustboroCity/scripts.pory"
	applymovement 9, Common_Movement_WalkInPlaceFasterUp
# 982 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, Common_Movement_WalkInPlaceFasterUp
# 983 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 984 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 985 "data/maps/RustboroCity/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 986 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, Common_Movement_ExclamationMark
# 987 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 988 "data/maps/RustboroCity/scripts.pory"
	applymovement 9, Common_Movement_Delay48
# 989 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 990 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 991 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
	return


RustboroCity_EventScript_EmployeeFacePlayerLeft2::
# 996 "data/maps/RustboroCity/scripts.pory"
	applymovement 9, Common_Movement_WalkInPlaceFasterRight
# 997 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, Common_Movement_WalkInPlaceFasterRight
# 998 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 999 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1000 "data/maps/RustboroCity/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 1001 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, Common_Movement_ExclamationMark
# 1002 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1003 "data/maps/RustboroCity/scripts.pory"
	applymovement 9, Common_Movement_Delay48
# 1004 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, RustboroCity_Movement_RivalMoveForReturnGoodsRight
# 1005 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1006 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 1007 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
	return


RustboroCity_EventScript_EmployeeFacePlayerDown2::
# 1012 "data/maps/RustboroCity/scripts.pory"
	applymovement 9, Common_Movement_WalkInPlaceFasterDown
# 1013 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, Common_Movement_WalkInPlaceFasterDown
# 1014 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1015 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1016 "data/maps/RustboroCity/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 1017 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, Common_Movement_ExclamationMark
# 1018 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1019 "data/maps/RustboroCity/scripts.pory"
	applymovement 9, Common_Movement_Delay48
# 1020 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1021 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1022 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
	return


RustboroCity_EventScript_EmployeeApproachPlayerDown2::
# 1027 "data/maps/RustboroCity/scripts.pory"
	applymovement 9, Common_Movement_WalkInPlaceFasterDown
# 1028 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, Common_Movement_WalkInPlaceFasterDown
# 1029 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1030 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1031 "data/maps/RustboroCity/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 1032 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, Common_Movement_ExclamationMark
# 1033 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1034 "data/maps/RustboroCity/scripts.pory"
	applymovement 9, Common_Movement_Delay48
# 1035 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1036 "data/maps/RustboroCity/scripts.pory"
	applymovement 9, RustboroCity_Movement_EmployeeApproachPlayerDown
# 1037 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, RustboroCity_Movement_EmployeeApproachPlayerDown
# 1038 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1039 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1040 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
	return


RustboroCity_EventScript_EmployeeFacePlayerRight::
# 1045 "data/maps/RustboroCity/scripts.pory"
	applymovement 9, Common_Movement_WalkInPlaceFasterLeft
# 1046 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1047 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1048 "data/maps/RustboroCity/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 1049 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1050 "data/maps/RustboroCity/scripts.pory"
	applymovement 9, Common_Movement_Delay48
# 1051 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
	return


RustboroCity_EventScript_Rival1::
# 1056 "data/maps/RustboroCity/scripts.pory"
	lock
# 1057 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 1058 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RUSTBORO_CITY_STATE, 4
	goto_if_eq RustboroCity_EventScript_Rival1_2
RustboroCity_EventScript_Rival1_1:
# 1062 "data/maps/RustboroCity/scripts.pory"
	release
	end

RustboroCity_EventScript_Rival1_2:
# 1059 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_Rival1_Text_0, MSGBOX_DEFAULT
# 1060 "data/maps/RustboroCity/scripts.pory"
	closemessage
	goto RustboroCity_EventScript_Rival1_1


# 1066 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalMoveForReturnGoodsRight:
# 1067 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 1067 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 1068 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1069 "data/maps/RustboroCity/scripts.pory"
	walk_right
	step_end

RustboroCity_EventScript_Rival2::
# 1073 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1074 "data/maps/RustboroCity/scripts.pory"
	ballfollowingmon
# 1075 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RUSTBORO_CITY_STATE, 7
	goto_if_eq RustboroCity_EventScript_Rival2_2
RustboroCity_EventScript_Rival2_1:
# 1078 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, Common_Movement_FacePlayer
# 1079 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1080 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_3, 2
# 1081 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
	return

RustboroCity_EventScript_Rival2_2:
# 1076 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	goto RustboroCity_EventScript_Rival2_1


RustboroCity_EventScript_RivalTrigger0::
# 1085 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1086 "data/maps/RustboroCity/scripts.pory"
	ballfollowingmon
# 1087 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_3, 0
# 1088 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 1089 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, Common_Movement_WalkInPlaceFasterDown
# 1090 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1091 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1092 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, Common_Movement_ExclamationMark
# 1093 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1094 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, Common_Movement_Delay48
# 1095 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1096 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, RustboroCity_Movement_RivalApproachPlayer0
# 1097 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1098 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1099 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1100 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
	return


RustboroCity_EventScript_RivalTrigger1::
# 1104 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1105 "data/maps/RustboroCity/scripts.pory"
	ballfollowingmon
# 1106 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_3, 0
# 1107 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 1108 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, Common_Movement_WalkInPlaceFasterDown
# 1109 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1110 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1111 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, Common_Movement_ExclamationMark
# 1112 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1113 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, Common_Movement_Delay48
# 1114 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1115 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, RustboroCity_Movement_RivalApproachPlayer1
# 1116 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1117 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1118 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1119 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
	return


RustboroCity_EventScript_RivalTrigger2::
# 1123 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1124 "data/maps/RustboroCity/scripts.pory"
	ballfollowingmon
# 1125 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_3, 0
# 1126 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 1127 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, Common_Movement_WalkInPlaceFasterDown
# 1128 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1129 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1130 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, Common_Movement_ExclamationMark
# 1131 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1132 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, Common_Movement_Delay48
# 1133 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1134 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, RustboroCity_Movement_RivalApproachPlayer2
# 1135 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1136 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1137 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1138 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
	return


RustboroCity_EventScript_RivalTrigger3::
# 1142 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1143 "data/maps/RustboroCity/scripts.pory"
	ballfollowingmon
# 1144 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_3, 0
# 1145 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 1146 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, Common_Movement_WalkInPlaceFasterDown
# 1147 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1148 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1149 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, Common_Movement_ExclamationMark
# 1150 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1151 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, Common_Movement_Delay48
# 1152 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1153 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, RustboroCity_Movement_RivalApproachPlayer3
# 1154 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1155 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1156 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1157 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
	return


RustboroCity_EventScript_RivalTrigger4::
# 1161 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1162 "data/maps/RustboroCity/scripts.pory"
	ballfollowingmon
# 1163 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_3, 0
# 1164 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 1165 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, Common_Movement_WalkInPlaceFasterDown
# 1166 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1167 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1168 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, Common_Movement_ExclamationMark
# 1169 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1170 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, Common_Movement_Delay48
# 1171 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1172 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, RustboroCity_Movement_RivalApproachPlayer4
# 1173 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1174 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1175 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1176 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
	return


RustboroCity_EventScript_RivalTrigger5::
# 1180 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1181 "data/maps/RustboroCity/scripts.pory"
	ballfollowingmon
# 1182 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_3, 0
# 1183 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 1184 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, Common_Movement_WalkInPlaceFasterDown
# 1185 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1186 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1187 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, Common_Movement_ExclamationMark
# 1188 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1189 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, Common_Movement_Delay48
# 1190 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1191 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, RustboroCity_Movement_RivalApproachPlayer5
# 1192 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1193 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1194 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1195 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
	return


RustboroCity_EventScript_RivalTrigger6::
# 1199 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1200 "data/maps/RustboroCity/scripts.pory"
	ballfollowingmon
# 1201 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_3, 0
# 1202 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 1203 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, Common_Movement_WalkInPlaceFasterDown
# 1204 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1205 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1206 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, Common_Movement_ExclamationMark
# 1207 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1208 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, Common_Movement_Delay48
# 1209 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1210 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, RustboroCity_Movement_RivalApproachPlayer6
# 1211 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1212 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1213 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1214 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
	return


RustboroCity_EventScript_RivalTrigger7::
# 1218 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1219 "data/maps/RustboroCity/scripts.pory"
	ballfollowingmon
# 1220 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_3, 7
# 1221 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 1222 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, Common_Movement_WalkInPlaceFasterDown
# 1223 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1224 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1225 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, Common_Movement_ExclamationMark
# 1226 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1227 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, Common_Movement_Delay48
# 1228 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1229 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, RustboroCity_Movement_RivalApproachPlayer7
# 1230 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1231 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1232 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1233 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
	return


RustboroCity_EventScript_RivalEncounter::
# 1237 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_3, 2
	goto_if_eq RustboroCity_EventScript_RivalEncounter_2
# 1241 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouThoughtYoudWalkBy, MSGBOX_DEFAULT
RustboroCity_EventScript_RivalEncounter_1:
# 1243 "data/maps/RustboroCity/scripts.pory"
	checkfriendchoice
# 1244 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 1245 "data/maps/RustboroCity/scripts.pory"
	case SPENCER, RustboroCity_EventScript_RivalEncounter_7
# 1247 "data/maps/RustboroCity/scripts.pory"
	case BREN, RustboroCity_EventScript_RivalEncounter_8
# 1249 "data/maps/RustboroCity/scripts.pory"
	case KYLE, RustboroCity_EventScript_RivalEncounter_9
RustboroCity_EventScript_RivalEncounter_5:
# 1252 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 1253 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_3, 2
	goto_if_eq RustboroCity_EventScript_RivalEncounter_11
# 1269 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_BeginTalkUp
RustboroCity_EventScript_RivalEncounter_10:
# 1271 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1272 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 1273 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GoingToAnIslandTown, MSGBOX_DEFAULT
# 1274 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 1275 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 1276 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_3, 2
	goto_if_eq RustboroCity_EventScript_RivalEncounter_15
# 1292 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_BeginTalkUp
RustboroCity_EventScript_RivalEncounter_14:
# 1294 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1295 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 1296 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonWantsToGiveReward, MSGBOX_DEFAULT
# 1297 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 1298 "data/maps/RustboroCity/scripts.pory"
	switch VAR_TEMP_3
# 1299 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_RivalEncounter_29
# 1301 "data/maps/RustboroCity/scripts.pory"
	case 7, RustboroCity_EventScript_RivalEncounter_30
# 1304 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, RustboroCity_Movement_Rival2WalkAwayComeBack
RustboroCity_EventScript_RivalEncounter_27:
# 1306 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1307 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DontLeaveWithoutMe
# 1308 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 1309 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_3, 2
	goto_if_eq RustboroCity_EventScript_RivalEncounter_42
# 1313 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, RustboroCity_Movement_RivalGoToDevonTriggered
RustboroCity_EventScript_RivalEncounter_41:
# 1315 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1316 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 1317 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 1318 "data/maps/RustboroCity/scripts.pory"
	removeobject 14
# 1319 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 1320 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RIVAL2_DEVON_2F
# 1321 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 1322 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_RivalEncounter_2:
# 1238 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_LongTimeNoSee, MSGBOX_DEFAULT
	goto RustboroCity_EventScript_RivalEncounter_1

RustboroCity_EventScript_RivalEncounter_7:
# 1246 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_KYLE_RUSTBORO, RustboroCity_Text_RivalEndBattleKyle
	goto RustboroCity_EventScript_RivalEncounter_5

RustboroCity_EventScript_RivalEncounter_8:
# 1248 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_SPENCER_RUSTBORO, RustboroCity_Text_RivalEndBattleSpencer
	goto RustboroCity_EventScript_RivalEncounter_5

RustboroCity_EventScript_RivalEncounter_9:
# 1250 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BREN_RUSTBORO, RustboroCity_Text_RivalEndBattleBren
	goto RustboroCity_EventScript_RivalEncounter_5

RustboroCity_EventScript_RivalEncounter_11:
# 1254 "data/maps/RustboroCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 1255 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_0, 15
	goto_if_eq RustboroCity_EventScript_RivalEncounter_18
# 1258 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_0, 16
	goto_if_eq RustboroCity_EventScript_RivalEncounter_23
RustboroCity_EventScript_RivalEncounter_22:
# 1261 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_0, 17
	goto_if_eq RustboroCity_EventScript_RivalEncounter_20
# 1265 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_BeginTalkUp
	goto RustboroCity_EventScript_RivalEncounter_10

RustboroCity_EventScript_RivalEncounter_15:
# 1277 "data/maps/RustboroCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 1278 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_0, 15
	goto_if_eq RustboroCity_EventScript_RivalEncounter_32
# 1281 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_0, 16
	goto_if_eq RustboroCity_EventScript_RivalEncounter_37
RustboroCity_EventScript_RivalEncounter_36:
# 1284 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_0, 17
	goto_if_eq RustboroCity_EventScript_RivalEncounter_34
# 1288 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_BeginTalkUp
	goto RustboroCity_EventScript_RivalEncounter_14

RustboroCity_EventScript_RivalEncounter_18:
# 1256 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_BeginTalkRight
	goto RustboroCity_EventScript_RivalEncounter_10

RustboroCity_EventScript_RivalEncounter_19:
# 1259 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_BeginTalkDown
	goto RustboroCity_EventScript_RivalEncounter_10

RustboroCity_EventScript_RivalEncounter_20:
# 1262 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_BeginTalkLeft
	goto RustboroCity_EventScript_RivalEncounter_10

RustboroCity_EventScript_RivalEncounter_23:
# 1258 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 49
	goto_if_eq RustboroCity_EventScript_RivalEncounter_19
	goto RustboroCity_EventScript_RivalEncounter_22

RustboroCity_EventScript_RivalEncounter_29:
# 1300 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_WalkAwayByFacing
	goto RustboroCity_EventScript_RivalEncounter_27

RustboroCity_EventScript_RivalEncounter_30:
# 1302 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, RustboroCity_Movement_Rival2WalkAwayComeBack7
	goto RustboroCity_EventScript_RivalEncounter_27

RustboroCity_EventScript_RivalEncounter_32:
# 1279 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_BeginTalkRight
	goto RustboroCity_EventScript_RivalEncounter_14

RustboroCity_EventScript_RivalEncounter_33:
# 1282 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_BeginTalkDown
	goto RustboroCity_EventScript_RivalEncounter_14

RustboroCity_EventScript_RivalEncounter_34:
# 1285 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_BeginTalkLeft
	goto RustboroCity_EventScript_RivalEncounter_14

RustboroCity_EventScript_RivalEncounter_37:
# 1281 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 49
	goto_if_eq RustboroCity_EventScript_RivalEncounter_33
	goto RustboroCity_EventScript_RivalEncounter_36

RustboroCity_EventScript_RivalEncounter_42:
# 1310 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, RustboroCity_Movement_RivalGoToDevonTalked
	goto RustboroCity_EventScript_RivalEncounter_41


RustboroCity_EventScript_WalkAwayByFacing::
# 1327 "data/maps/RustboroCity/scripts.pory"
	switch VAR_FACING
# 1328 "data/maps/RustboroCity/scripts.pory"
	case DIR_SOUTH, RustboroCity_EventScript_WalkAwayByFacing_3
# 1332 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1333 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, RustboroCity_Movement_Rival2WalkAwayComeBack2NWE
RustboroCity_EventScript_WalkAwayByFacing_1:
	return

RustboroCity_EventScript_WalkAwayByFacing_3:
# 1329 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_PlayerWatchRivalLeaveSouth
# 1330 "data/maps/RustboroCity/scripts.pory"
	applymovement 14, RustboroCity_Movement_Rival2WalkAwayComeBack2South
	goto RustboroCity_EventScript_WalkAwayByFacing_1


# 1338 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_Rival2WalkAwayComeBack:
# 1339 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1339 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1339 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1340 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_fast_up
# 1340 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_fast_up
# 1340 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_fast_up
# 1340 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_fast_up
# 1341 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
# 1341 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
	step_end

# 1344 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_Rival2WalkAwayComeBack2NWE:
# 1345 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1345 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1345 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1346 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 1346 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 1346 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 1347 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_fast_right
# 1347 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_fast_right
# 1347 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_fast_right
# 1347 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_fast_right
# 1348 "data/maps/RustboroCity/scripts.pory"
	walk_fast_left
# 1348 "data/maps/RustboroCity/scripts.pory"
	walk_fast_left
# 1349 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_fast_down
	step_end

# 1352 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_Rival2WalkAwayComeBack2South:
# 1353 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 1354 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1354 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1354 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1354 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1355 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 1355 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 1356 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_fast_right
# 1356 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_fast_right
# 1356 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_fast_right
# 1356 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_fast_right
# 1357 "data/maps/RustboroCity/scripts.pory"
	walk_fast_left
# 1357 "data/maps/RustboroCity/scripts.pory"
	walk_fast_left
# 1358 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_fast_down
	step_end

# 1361 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_Rival2WalkAwayComeBack7:
# 1362 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1363 "data/maps/RustboroCity/scripts.pory"
	walk_fast_left
# 1364 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1364 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1365 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_fast_up
# 1365 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_fast_up
# 1365 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_fast_up
# 1365 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_fast_up
# 1366 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
# 1366 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
	step_end

# 1369 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalGoToDevonTalked:
# 1370 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 1370 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 1370 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 1371 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1371 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1371 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1371 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1372 "data/maps/RustboroCity/scripts.pory"
	set_invisible
	step_end

# 1375 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalGoToDevonTriggered:
# 1376 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1376 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1376 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1376 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1377 "data/maps/RustboroCity/scripts.pory"
	set_invisible
	step_end

# 1380 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_PlayerWatchRivalLeaveSouth:
# 1381 "data/maps/RustboroCity/scripts.pory"
	delay_8
# 1382 "data/maps/RustboroCity/scripts.pory"
	face_right
# 1383 "data/maps/RustboroCity/scripts.pory"
	delay_8
# 1384 "data/maps/RustboroCity/scripts.pory"
	face_up
	step_end

# 1442 "data/maps/RustboroCity/scripts.pory"

# 1443 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer0:
# 1444 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1445 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1446 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1447 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1448 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1449 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1450 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1451 "data/maps/RustboroCity/scripts.pory"

# 1452 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer1:
# 1453 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1454 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1455 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1456 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1457 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1458 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1459 "data/maps/RustboroCity/scripts.pory"

# 1460 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer2:
# 1461 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1462 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1463 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1464 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1465 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1466 "data/maps/RustboroCity/scripts.pory"

# 1467 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer3:
# 1468 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1469 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1470 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1471 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1472 "data/maps/RustboroCity/scripts.pory"

# 1473 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer4:
# 1474 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1475 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1476 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1477 "data/maps/RustboroCity/scripts.pory"

# 1478 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer5:
# 1479 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1480 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1481 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1482 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1483 "data/maps/RustboroCity/scripts.pory"

# 1484 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer6:
# 1485 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1486 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1487 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1488 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1489 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1490 "data/maps/RustboroCity/scripts.pory"

# 1491 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer7:
# 1492 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1493 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1494 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1495 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1496 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1497 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1498 "data/maps/RustboroCity/scripts.pory"

# 1499 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy1::
# 1500 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
# 1501 "data/maps/RustboroCity/scripts.pory"
	end
# 1502 "data/maps/RustboroCity/scripts.pory"

# 1503 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WeShortenItToDevon:
# 1504 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON CORPORATION…\n"
# 1505 "data/maps/RustboroCity/scripts.pory"
	.string "We all just shorten it to DEVON.\p"
# 1506 "data/maps/RustboroCity/scripts.pory"
	.string "That company makes all sorts of\n"
# 1507 "data/maps/RustboroCity/scripts.pory"
	.string "convenient products.$"
# 1508 "data/maps/RustboroCity/scripts.pory"

# 1509 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_SneakyLookingManWentAroundCorner:
# 1510 "data/maps/RustboroCity/scripts.pory"
	.string "Hm? A sneaky-looking man?\p"
# 1511 "data/maps/RustboroCity/scripts.pory"
	.string "Come to think of it, yes, a shady-\n"
# 1512 "data/maps/RustboroCity/scripts.pory"
	.string "looking guy went around the corner.$"
# 1513 "data/maps/RustboroCity/scripts.pory"

# 1514 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HaveYouChallengedGym:
# 1515 "data/maps/RustboroCity/scripts.pory"
	.string "Have you taken the POKéMON GYM\n"
# 1516 "data/maps/RustboroCity/scripts.pory"
	.string "challenge?\p"
# 1517 "data/maps/RustboroCity/scripts.pory"
	.string "When you get that shiny GYM BADGE\n"
# 1518 "data/maps/RustboroCity/scripts.pory"
	.string "in hand, I guess TRAINERS begin to\l"
# 1519 "data/maps/RustboroCity/scripts.pory"
	.string "realize what is required of them.$"
# 1520 "data/maps/RustboroCity/scripts.pory"

# 1521 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HeyThatsRustborosGymBadge:
# 1522 "data/maps/RustboroCity/scripts.pory"
	.string "Hey, that's RUSTBORO's GYM BADGE!\p"
# 1523 "data/maps/RustboroCity/scripts.pory"
	.string "Out of all the POKéMON GYM BADGES,\n"
# 1524 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO's is the coolest, I'd say.$"
# 1525 "data/maps/RustboroCity/scripts.pory"

# 1526 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureNewAroundHere:
# 1527 "data/maps/RustboroCity/scripts.pory"
	.string "Oh? Who might you be?\n"
# 1528 "data/maps/RustboroCity/scripts.pory"
	.string "You're a new face around these parts.\p"
# 1529 "data/maps/RustboroCity/scripts.pory"
	.string "Have you just transferred into the\n"
# 1530 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL?$"
# 1531 "data/maps/RustboroCity/scripts.pory"

# 1532 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymLeaderIsntEasyWithFire:
# 1533 "data/maps/RustboroCity/scripts.pory"
	.string "I challenged the GYM LEADER, but…\p"
# 1534 "data/maps/RustboroCity/scripts.pory"
	.string "It's not going to be easy winning with\n"
# 1535 "data/maps/RustboroCity/scripts.pory"
	.string "my FIRE-type POKéMON…\p"
# 1536 "data/maps/RustboroCity/scripts.pory"
	.string "FIRE-type POKéMON don't match up\n"
# 1537 "data/maps/RustboroCity/scripts.pory"
	.string "well against ROCK-type POKéMON…$"
# 1538 "data/maps/RustboroCity/scripts.pory"

# 1539 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyWalksInTheTunnel:
# 1540 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 1541 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1542 "data/maps/RustboroCity/scripts.pory"
	.string "He goes for walks in the tunnel every\n"
# 1543 "data/maps/RustboroCity/scripts.pory"
	.string "so often.$"
# 1544 "data/maps/RustboroCity/scripts.pory"

# 1545 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyLovesPeeko:
# 1546 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 1547 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1548 "data/maps/RustboroCity/scripts.pory"
	.string "He said he was going shopping in\n"
# 1549 "data/maps/RustboroCity/scripts.pory"
	.string "SLATEPORT for his pet, PEEKO.\p"
# 1550 "data/maps/RustboroCity/scripts.pory"
	.string "That old sea dog, he must really love\n"
# 1551 "data/maps/RustboroCity/scripts.pory"
	.string "that PEEKO.$"
# 1552 "data/maps/RustboroCity/scripts.pory"

# 1553 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WowYouHavePokemon:
# 1554 "data/maps/RustboroCity/scripts.pory"
	.string "Wow, you have POKéMON with you, too.\p"
# 1555 "data/maps/RustboroCity/scripts.pory"
	.string "When I get bigger, I'm going to go\n"
# 1556 "data/maps/RustboroCity/scripts.pory"
	.string "places with POKéMON, too.$"
# 1557 "data/maps/RustboroCity/scripts.pory"

# 1558 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CatchRarePokemonIfIGoToSchool:
# 1559 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL!\p"
# 1560 "data/maps/RustboroCity/scripts.pory"
	.string "If I go to this school, will I be able\n"
# 1561 "data/maps/RustboroCity/scripts.pory"
	.string "to catch rare POKéMON easily?$"
# 1562 "data/maps/RustboroCity/scripts.pory"

# 1563 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonCanChangeLookFromExp:
# 1564 "data/maps/RustboroCity/scripts.pory"
	.string "If a POKéMON gains experience in\n"
# 1565 "data/maps/RustboroCity/scripts.pory"
	.string "battles, it can sometimes change in\l"
# 1566 "data/maps/RustboroCity/scripts.pory"
	.string "the way it looks.$"
# 1567 "data/maps/RustboroCity/scripts.pory"

# 1568 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonChangeShape:
# 1569 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON changes shape?\n"
# 1570 "data/maps/RustboroCity/scripts.pory"
	.string "If one did that, I would be shocked!$"
# 1571 "data/maps/RustboroCity/scripts.pory"

# 1572 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TradePokemonGrowFast:
# 1573 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON you get in a trade from\n"
# 1574 "data/maps/RustboroCity/scripts.pory"
	.string "someone grows fast.\p"
# 1575 "data/maps/RustboroCity/scripts.pory"
	.string "But if you don't have certain GYM\n"
# 1576 "data/maps/RustboroCity/scripts.pory"
	.string "BADGES, it may not obey you…$"
# 1577 "data/maps/RustboroCity/scripts.pory"

# 1578 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_OutOfTheWay:
# 1579 "data/maps/RustboroCity/scripts.pory"
	.string "Get out!\n"
# 1580 "data/maps/RustboroCity/scripts.pory"
	.string "Out of the way!$"
# 1581 "data/maps/RustboroCity/scripts.pory"

# 1582 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WaitDontTakeMyGoods:
# 1583 "data/maps/RustboroCity/scripts.pory"
	.string "Wait! Pleeeaaase!\p"
# 1584 "data/maps/RustboroCity/scripts.pory"
	.string "Don't take my GOODS!$"
# 1585 "data/maps/RustboroCity/scripts.pory"

# 1586 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HelpMeIWasRobbed:
# 1587 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, it's you!\p"
# 1588 "data/maps/RustboroCity/scripts.pory"
	.string "You're one of those fantastic\n"
# 1589 "data/maps/RustboroCity/scripts.pory"
	.string "TRAINERS who helped me in\l"
# 1590 "data/maps/RustboroCity/scripts.pory"
	.string "PETALBURG WOODS!\p"
# 1591 "data/maps/RustboroCity/scripts.pory"
	.string "Help me! I was robbed by TEAM AQUA!\n"
# 1592 "data/maps/RustboroCity/scripts.pory"
	.string "I have to get the DEVON GOODS back!\p"
# 1593 "data/maps/RustboroCity/scripts.pory"
	.string "If I don't…\n"
# 1594 "data/maps/RustboroCity/scripts.pory"
	.string "I'm going to be in serious trouble.$"
# 1595 "data/maps/RustboroCity/scripts.pory"

# 1596 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel:
# 1597 "data/maps/RustboroCity/scripts.pory"
	.string "That shady character, I think he took\n"
# 1598 "data/maps/RustboroCity/scripts.pory"
	.string "off towards the tunnel over there.$"

# 1622 "data/maps/RustboroCity/scripts.pory"

# 1623 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TunnelNearingCompletion:
# 1624 "data/maps/RustboroCity/scripts.pory"
	.string "“Timesaving tunnel nearing\n"
# 1625 "data/maps/RustboroCity/scripts.pory"
	.string "completion!”\p"
# 1626 "data/maps/RustboroCity/scripts.pory"
	.string "…Is what it says on the sign, but\n"
# 1627 "data/maps/RustboroCity/scripts.pory"
	.string "there's also a big “X” splashed\l"
# 1628 "data/maps/RustboroCity/scripts.pory"
	.string "across it in red paint…$"
# 1629 "data/maps/RustboroCity/scripts.pory"

# 1630 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpSign:
# 1631 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORPORATION\p"
# 1632 "data/maps/RustboroCity/scripts.pory"
	.string "“For all your living needs, we make\n"
# 1633 "data/maps/RustboroCity/scripts.pory"
	.string "it all.”$"
# 1634 "data/maps/RustboroCity/scripts.pory"

# 1635 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymSign:
# 1636 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\n"
# 1637 "data/maps/RustboroCity/scripts.pory"
	.string "LEADER: ROXANNE\p"
# 1638 "data/maps/RustboroCity/scripts.pory"
	.string "“The ROCK-loving honors student!”$"
# 1639 "data/maps/RustboroCity/scripts.pory"

# 1640 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpBranchOfficeSign:
# 1641 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORP. BRANCH OFFICE\p"
# 1642 "data/maps/RustboroCity/scripts.pory"
	.string "“Access limited to DEVON employees\n"
# 1643 "data/maps/RustboroCity/scripts.pory"
	.string "and authorized personnel.”$"
# 1644 "data/maps/RustboroCity/scripts.pory"

# 1645 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CitySign:
# 1646 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY\p"
# 1647 "data/maps/RustboroCity/scripts.pory"
	.string "“The city probing the integration of\n"
# 1648 "data/maps/RustboroCity/scripts.pory"
	.string "nature and science.”$"
# 1649 "data/maps/RustboroCity/scripts.pory"

# 1650 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TrainersSchoolSign:
# 1651 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL\p"
# 1652 "data/maps/RustboroCity/scripts.pory"
	.string "“We'll teach you anything about\n"
# 1653 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON!”$"
# 1654 "data/maps/RustboroCity/scripts.pory"

# 1655 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CuttersHouse:
# 1656 "data/maps/RustboroCity/scripts.pory"
	.string "CUTTER'S HOUSE$"
# 1657 "data/maps/RustboroCity/scripts.pory"

# 1658 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevelopedNewPokenavFeature:
# 1659 "data/maps/RustboroCity/scripts.pory"
	.string "I've been developing an added feature\n"
# 1660 "data/maps/RustboroCity/scripts.pory"
	.string "for the POKéNAV…\p"
# 1661 "data/maps/RustboroCity/scripts.pory"
	.string "And it turned out great!\p"
# 1662 "data/maps/RustboroCity/scripts.pory"
	.string "You two, may I see those POKéNAVS?\n"
# 1663 "data/maps/RustboroCity/scripts.pory"
	.string "The ones our PRESIDENT gave you?$"
# 1664 "data/maps/RustboroCity/scripts.pory"

# 1665 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_AddedMatchCallPleaseCallMrStone:
# 1666 "data/maps/RustboroCity/scripts.pory"
	.string "There you go!\p"
# 1667 "data/maps/RustboroCity/scripts.pory"
	.string "I added a new feature named\n"
# 1668 "data/maps/RustboroCity/scripts.pory"
	.string "MATCH CALL to your POKéNAV.\p"
# 1669 "data/maps/RustboroCity/scripts.pory"
	.string "Using the MATCH CALL feature,\n"
# 1670 "data/maps/RustboroCity/scripts.pory"
	.string "you can chat with people who have\l"
# 1671 "data/maps/RustboroCity/scripts.pory"
	.string "been registered in your POKéNAV.\p"
# 1672 "data/maps/RustboroCity/scripts.pory"
	.string "Our PRESIDENT STONE should\n"
# 1673 "data/maps/RustboroCity/scripts.pory"
	.string "be registered in your POKéNAV.\p"
# 1674 "data/maps/RustboroCity/scripts.pory"
	.string "Test it out.\n"
# 1675 "data/maps/RustboroCity/scripts.pory"
	.string "Please give our PRESIDENT a call.$"
# 1676 "data/maps/RustboroCity/scripts.pory"

# 1677 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseSelectPokenav:
# 1678 "data/maps/RustboroCity/scripts.pory"
	.string "Please select the POKéNAV.$"
# 1679 "data/maps/RustboroCity/scripts.pory"

# 1680 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_IdBetterGetBackToWork:
# 1681 "data/maps/RustboroCity/scripts.pory"
	.string "Okay, I'd better get back to work.\n"
# 1682 "data/maps/RustboroCity/scripts.pory"
	.string "Please take care, {PLAYER}, {RIVAL}!$"
# 1683 "data/maps/RustboroCity/scripts.pory"

# 1684 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouCanHave2On2Battle:
# 1685 "data/maps/RustboroCity/scripts.pory"
	.string "Did you know this?\p"
# 1686 "data/maps/RustboroCity/scripts.pory"
	.string "You can have a 2-on-2 battle even\n"
# 1687 "data/maps/RustboroCity/scripts.pory"
	.string "if you're not with another TRAINER.\p"
# 1688 "data/maps/RustboroCity/scripts.pory"
	.string "If you catch the eyes of two TRAINERS\n"
# 1689 "data/maps/RustboroCity/scripts.pory"
	.string "when you have two or more POKéMON,\l"
# 1690 "data/maps/RustboroCity/scripts.pory"
	.string "they'll both challenge you.\p"
# 1691 "data/maps/RustboroCity/scripts.pory"
	.string "Don't you think it'd be cool if you\n"
# 1692 "data/maps/RustboroCity/scripts.pory"
	.string "could beat two TRAINERS by yourself?$"

RustboroCity_EventScript_Rival1_Text_0:
# 1059 "data/maps/RustboroCity/scripts.pory"
	.string "Aren't you going to\nreturn the GOODS?$"

RustboroCity_Text_Rival1LetsRegister::
# 270 "data/maps/RustboroCity/scripts.pory"
	.string "This is great!\n"
	.string "Let's register each other right now!$"

RustboroCity_Text_RegisteredRival1::
# 275 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER} registered {RIVAL}\n"
	.string "in the POKéNAV.$"

RustboroCity_Text_SeeYouSoon::
# 280 "data/maps/RustboroCity/scripts.pory"
	.string "Now we can call each other whenever we\n"
	.string "want!\l"
	.string "I'm going to try to catch a last minute\l"
	.string "SLAKOTH in PETALBURG WOODS.\l"
	.string "You should find {RIVAL2} and meet me at\l"
	.string "MR. BRINEY'S cottage.\p"
	.string "See you soon!$"

RustboroCity_Text_YoPlayer::
# 893 "data/maps/RustboroCity/scripts.pory"
	.string "Yo! {PLAYER}!$"

RustboroCity_Text_WhatsGoingOn::
# 897 "data/maps/RustboroCity/scripts.pory"
	.string "I heard there was a commotion going on\n"
	.string "here. What's going on?$"

RustboroCity_Text_GuyGotMugged::
# 902 "data/maps/RustboroCity/scripts.pory"
	.string "So this guy got mugged? That's\n"
	.string "absolutely despicable!$"

RustboroCity_Text_DontWorrySir::
# 906 "data/maps/RustboroCity/scripts.pory"
	.string "Don't worry, sir. {PLAYER} and I will\n"
	.string "get your GOODS back.$"

RustboroCity_Text_ThankBothOfYou::
# 910 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, thank you! Both of you!\n"
	.string "I do hope you can get them back.$"

RustboroCity_Text_LetsGoCatchMugger::
# 915 "data/maps/RustboroCity/scripts.pory"
	.string "C'mon, {PLAYER}!\n"
	.string "Let's go catch that mugger!$"

RustboroCity_Text_LongTimeNoSee::
# 1387 "data/maps/RustboroCity/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "Long time no see.\p"
	.string "{RIVAL} told me that you stomped\n"
	.string "that AQUA thug yet again.\l"
	.string "And this time you did it solo!\l"
	.string "That's impressive!\p"
	.string "That settles it.\n"
	.string "I need to see you in action.\l"
	.string "Time for a battle!$"

RustboroCity_Text_YouThoughtYoudWalkBy::
# 1398 "data/maps/RustboroCity/scripts.pory"
	.string "You thought you'd just walk right by\n"
	.string "without so much as a 'hello'?\l"
	.string "I know it's been a little while,\l"
	.string "but c'mon!\p"
	.string "{RIVAL} told me that you stomped\n"
	.string "that AQUA thug yet again.\l"
	.string "And this time you did it solo!\l"
	.string "Very impressive!\p"
	.string "That settles it.\n"
	.string "I need to see you in action.\l"
	.string "Time for a battle!$"

RustboroCity_Text_RivalEndBattleSpencer::
# 1409 "data/maps/RustboroCity/scripts.pory"
	.string "Would you look at that!\n"
	.string "I lost!$"

RustboroCity_Text_RivalEndBattleBren::
# 1414 "data/maps/RustboroCity/scripts.pory"
	.string "You and your POKéMON have got some\n"
	.string "good teamwork!$"

RustboroCity_Text_RivalEndBattleKyle::
# 1418 "data/maps/RustboroCity/scripts.pory"
	.string "Huh.\n"
	.string "I lost again.$"

RustboroCity_Text_GoingToAnIslandTown::
# 1423 "data/maps/RustboroCity/scripts.pory"
	.string "What's that?\n"
	.string "You and {RIVAL} are going to ask an\l"
	.string "old sailor to take you to an island\l"
	.string "town?\p"
	.string "That sounds awesome!\n"
	.string "I want to come too!$"

RustboroCity_Text_DevonWantsToGiveReward::
# 1430 "data/maps/RustboroCity/scripts.pory"
	.string "What's that?\n"
	.string "The president of the DEVON corporation\l"
	.string "wants to give me a reward?\p"
	.string "Wow! I'd better go to the DEVON\n"
	.string "building!\l"
	.string "Thanks for letting me know.$"

RustboroCity_Text_DontLeaveWithoutMe::
# 1437 "data/maps/RustboroCity/scripts.pory"
	.string "I'll meet you at the old man's cottage\n"
	.string "when I'm done.\l"
	.string "Don't leave without me!$"

RustboroCity_Text_YouGotItThankYou::
# 1601 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! How did it go?\n"
	.string "Your friend was telling me how you gave\l"
	.string "that thug a thrashing!\p"
	.string "Did you really bring the GOODS back?\n"
	.string "You did?\p"
	.string "Wonderful! You really are a great\n"
	.string "TRAINER!\p"
	.string "I know! As my thanks, I'll give you\n"
	.string "another GREAT BALL!$"

RustboroCity_Text_YoureLoadedWithItems::
# 1612 "data/maps/RustboroCity/scripts.pory"
	.string "You're loaded with items.\n"
	.string "I can't give you this GREAT BALL.$"

RustboroCity_Text_PleaseComeWithMe::
# 1617 "data/maps/RustboroCity/scripts.pory"
	.string "Excuse me, please!\n"
	.string "Both of you please come with me!$"
