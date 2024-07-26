# 13 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 14 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_MAGMA_GRUNT_1, 5
# 15 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_MAGMA_GRUNT_2, 6
# 16 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_ARCHIE, 7
# 17 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_AQUA_GRUNT_1, 8
# 18 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_AQUA_GRUNT_2, 9
# 19 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_COSMO, 10
# 20 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_RIVAL1, 11
# 21 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 22 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set RIGHT, 1
# 23 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set UP, 2
# 24 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LEFT, 3

MeteorFalls_1F_1R_MapScripts::
# 28 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MeteorFalls_1F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 34 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MeteorFalls_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD
# 37 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MeteorFalls_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MeteorFalls_1F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 29 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 30 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_METEOR_FALLS_STATE, 2
	goto_if_eq MeteorFalls_1F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

MeteorFalls_1F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 31 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	clearflag FLAG_HIDE_METEOR_FALLS_RIVAL1
	return

MeteorFalls_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD:
# 35 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, MeteorFalls_1F_1R_EventScript_OpenStevensCave
	return

MeteorFalls_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 38 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	map_script_2 VAR_METEOR_FALLS_STATE, 1, MeteorFalls_1F_1R_EventScript_InitRival1Follower
# 39 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	map_script_2 VAR_METEOR_FALLS_STATE, 2, MeteorFalls_1F_1R_EventScript_ReturnToRival1Follower
	.2byte 0


MeteorFalls_1F_1R_EventScript_OpenStevensCave::
# 44 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 1, METATILE_MeteorFalls_CaveEntrance_Top, TRUE
# 45 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 3, 2, METATILE_MeteorFalls_CaveEntrance_Left, TRUE
# 46 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 2, METATILE_MeteorFalls_CaveEntrance_Bottom, FALSE
# 47 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 5, 2, METATILE_MeteorFalls_CaveEntrance_Right, TRUE
	return


MeteorFalls_1F_1R_EventScript_InitRival1Follower::
# 52 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 53 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 54 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_BeginTalkRight
# 55 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 56 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	rival1talk MeteorFalls_1F_1R_Text_SpencerOverHere, MeteorFalls_1F_1R_Text_BrenOverHere, MeteorFalls_1F_1R_Text_KyleOverHere
# 59 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 60 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Walk_Left
# 61 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 62 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	rival1talk MeteorFalls_1F_1R_Text_SpencerIllFollow, MeteorFalls_1F_1R_Text_BrenIllFollow, MeteorFalls_1F_1R_Text_KyleIllFollow
# 65 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 66 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	loadword 0, MeteorFalls_1F_1R_EventScript_Rival1Following
# 67 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setfollower 11, FOLLOWER_ALL_AND_CUSTOM
# 68 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_METEOR_FALLS_STATE, 3
# 69 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
	end


MeteorFalls_1F_1R_EventScript_ReturnToRival1Follower::
# 110 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 111 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 112 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_Walk_Right
# 113 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 114 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	rival1talk MeteorFalls_1F_1R_Text_SpencerWhereDidYouGo, MeteorFalls_1F_1R_Text_BrenWhereDidYouGo, MeteorFalls_1F_1R_Text_KyleWhereDidYouGo
# 117 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 118 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	loadword 0, MeteorFalls_1F_1R_EventScript_Rival1Following
# 119 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setfollower 11, FOLLOWER_ALL_AND_CUSTOM
# 120 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_METEOR_FALLS_STATE, 3
# 121 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
	end


MeteorFalls_1F_1R_EventScript_Rival1Following::
# 141 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 142 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	facefollower
# 143 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_Rival1Following, MSGBOX_DEFAULT
# 144 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 145 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
	end


MeteorFalls_1F_1R_EventScript_SetFollowerLeft::
# 154 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 155 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_0x8002, 3
# 156 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
	end


MeteorFalls_1F_1R_EventScript_SetFollowerUp::
# 161 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 162 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_0x8002, 2
# 163 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
	end


MeteorFalls_1F_1R_EventScript_SetFollowerRight::
# 168 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 169 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_0x8002, 1
# 170 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
	end


MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene::
# 175 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lockall
# 176 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 177 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_0x8002, 2
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_2
# 182 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_FaceDown
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_1:
# 184 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 185 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement OBJ_EVENT_ID_FOLLOWER
# 186 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 30
# 187 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 188 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 189 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_WithThisMeteorite, MSGBOX_DEFAULT
# 190 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 191 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterUp
# 192 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterUp
# 193 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 194 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playse SE_PIN
# 195 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 196 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 197 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_Delay48
# 198 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 199 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_DontExpectMercyFromMagma, MSGBOX_DEFAULT
# 200 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 201 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, MeteorFalls_1F_1R_Movement_MagmaGruntApproachPlayer
# 202 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 203 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_HoldItRightThereMagma, MSGBOX_DEFAULT
# 204 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 205 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 206 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_WalkInPlaceFasterLeft
# 207 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterLeft
# 208 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterLeft
# 209 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 210 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject 7
# 211 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject 8
# 212 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject 9
# 213 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 214 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 7, MeteorFalls_1F_1R_Movement_ArchieArrive
# 215 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 8, MeteorFalls_1F_1R_Movement_AquaGrunt1Arrive
# 216 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 9, MeteorFalls_1F_1R_Movement_AquaGrunt2Arrive
# 217 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 218 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterLeft
# 219 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterLeft
# 220 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 221 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_BeSeeingYouTeamAqua, MSGBOX_DEFAULT
# 222 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 223 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_0x8002, 3
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_6
# 227 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, MeteorFalls_1F_1R_Movement_PushRival1OutOfWayRight
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_5:
# 229 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay
# 230 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, MeteorFalls_1F_1R_Movement_MagmaGrunt1Exit
# 231 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 6, MeteorFalls_1F_1R_Movement_MagmaGrunt2Exit
# 232 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 233 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 5
# 234 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 6
# 235 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_0x8002, 3
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_10
# 239 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, MeteorFalls_1F_1R_Movement_Rival1GetInPlaceForArchieRight
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_9:
# 241 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 7, MeteorFalls_1F_1R_Movement_ArchieApproachPlayer
# 242 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 243 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieSeenYouBefore, MSGBOX_DEFAULT
# 244 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 245 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 8, MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachArchie
# 246 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 9, MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachArchie
# 247 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 248 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_BossWeShouldChaseMagma, MSGBOX_DEFAULT
# 249 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterDown
# 250 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 251 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieYesNoTellingWhatMagmaWillDo, MSGBOX_DEFAULT
# 252 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterLeft
# 253 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 254 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieFarewell, MSGBOX_DEFAULT
# 255 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 256 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_FaceRight
# 257 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 7, MeteorFalls_1F_1R_Movement_ArchieExit
# 258 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 8, MeteorFalls_1F_1R_Movement_AquaGrunt1Exit
# 259 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 9, MeteorFalls_1F_1R_Movement_AquaGrunt2Exit
# 260 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 261 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	fadedefaultbgm
# 262 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 7
# 263 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 8
# 264 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 9
# 265 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call MeteorFalls_1F_1R_EventScript_Rival1AfterGrunts
# 266 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_RIVAL1
# 267 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA
# 268 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_ARCHIE_METEOR_FALLS
# 269 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_DIG_HOUSE_RIVAL2
# 270 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
# 271 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_PROF_COZMO
# 272 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_METEOR_FALLS_STATE, 4
# 273 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	releaseall
	end

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_2:
# 178 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_0x8002, 3
# 179 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, MeteorFalls_1F_1R_Movement_Rival1MoveFromUp
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_1

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_6:
# 224 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_5

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_10:
# 236 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, MeteorFalls_1F_1R_Movement_Rival1GetInPlaceForArchieLeft
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_9


# 277 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 278 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGruntApproachPlayer:
# 279 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 280 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 281 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 282 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 283 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 284 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGrunt1Exit:
# 285 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 286 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 287 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 288 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 289 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 290 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 291 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 292 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 293 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 294 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 295 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 296 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGrunt2Exit:
# 297 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 298 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 299 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 300 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 301 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 302 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 303 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 304 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 305 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 306 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 307 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 308 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 309 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieArrive:
# 310 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 311 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 312 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 313 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 314 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 315 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 316 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 317 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 318 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1Arrive:
# 319 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 320 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 321 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 322 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 323 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 324 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 325 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 326 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 327 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 328 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2Arrive:
# 329 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 330 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 331 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 332 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 333 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 334 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 335 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 336 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 337 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 338 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieExit:
# 339 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 340 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 341 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 342 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 343 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 344 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 345 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 346 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 347 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 348 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieApproachPlayer:
# 349 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 350 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 351 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 352 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 353 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_left
# 354 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 355 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 356 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1Exit:
# 357 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 358 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 359 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 360 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 361 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 362 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 363 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 364 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 365 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 366 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 367 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 368 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachArchie:
# 369 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 370 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 371 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 372 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 373 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 374 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 375 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2Exit:
# 376 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 377 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 378 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 379 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 380 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 381 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 382 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 383 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 384 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 385 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 386 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 387 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 388 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachArchie:
# 389 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 390 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 391 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 392 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 393 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 394 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 395 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay:
# 396 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_down
# 397 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_4
# 398 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_right
# 399 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock_facing_direction
# 400 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 401 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	unlock_facing_direction
# 402 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_right
# 403 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end

# 406 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_Rival1MoveFromUp:
# 407 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 408 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_down
	step_end

# 411 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_PushRival1OutOfWayRight:
# 412 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_down
# 413 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_8
# 413 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_8
# 414 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock_facing_direction
# 415 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 416 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	unlock_facing_direction
# 417 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_right
	step_end

# 420 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_Rival1GetInPlaceForArchieLeft:
# 421 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 422 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 422 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 423 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_down
	step_end

# 426 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_Rival1GetInPlaceForArchieRight:
# 427 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 428 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 429 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_down
	step_end

MeteorFalls_1F_1R_EventScript_Rival1AfterGrunts::
# 433 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	destroyfollower
# 434 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setobjectxyperm 11, 14, 17
# 435 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject 11
# 436 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 20
# 437 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, MeteorFalls_1F_1R_Movement_Rival1ApproachPlayer
# 438 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 439 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	rival1talk MeteorFalls_1F_1R_Text_SpencerShouldCheckOnCosmo, MeteorFalls_1F_1R_Text_BrenShouldCheckOnCosmo, MeteorFalls_1F_1R_Text_KyleShouldCheckOnCosmo
# 442 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 443 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, MeteorFalls_1F_1R_Movement_Rival1ApproachCosmo
# 444 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeteorFalls_1F_1R_Movement_PlayerApproachCosmo
# 445 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 446 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_BeginTalkDown
# 447 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 448 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	rival1talk MeteorFalls_1F_1R_Text_SpencerWhatHappened, MeteorFalls_1F_1R_Text_BrenWhatHappened, MeteorFalls_1F_1R_Text_KyleWhatHappened
# 451 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 452 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 16
# 453 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 10, Common_Movement_BeginTalkUp
# 454 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 455 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_MeetProfCozmo, MSGBOX_AUTOCLOSE
# 456 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 16
# 457 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 458 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_BeginTalkLeft
# 459 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 460 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	rival1talk MeteorFalls_1F_1R_Text_SpencerGoingToMtChimney, MeteorFalls_1F_1R_Text_BrenGoingToMtChimney, MeteorFalls_1F_1R_Text_KyleGoingToMtChimney
# 463 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 464 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 465 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, MeteorFalls_1F_1R_Movement_Rival1Leave
# 466 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 467 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 11
	return


# 471 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_Rival1ApproachPlayer:
# 472 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_down
# 473 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_left
	step_end

# 476 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_Rival1ApproachCosmo:
# 477 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_down
# 477 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_down
# 477 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_down
# 478 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 479 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_down
	step_end

# 482 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_PlayerApproachCosmo:
# 483 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_8
# 484 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 485 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_down
# 485 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_down
# 485 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_down
# 486 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 486 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 487 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_down
	step_end

# 490 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_Rival1Leave:
# 491 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 491 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 492 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 493 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 493 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 494 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 494 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 494 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 494 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 494 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 494 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 494 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

# 557 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 558 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_ProfCozmo::
# 559 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 560 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	faceplayer
# 561 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney, MSGBOX_DEFAULT
# 562 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
# 563 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 564 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 565 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_WithThisMeteorite:
# 566 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe!\p"
# 567 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "With this METEORITE, that thing in\n"
# 568 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "MT. CHIMNEY will…$"
# 569 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 570 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_DontExpectMercyFromMagma:
# 571 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Heh?\p"
# 572 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I don't know who you are, but if you get\n"
# 573 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "in the way of TEAM MAGMA, don't\l"
# 574 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "expect any mercy!$"
# 575 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 576 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_HoldItRightThereMagma:
# 577 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hold it right there, TEAM MAGMA!\p"
# 578 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "You're badly mistaken if you think you\n"
# 579 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "can have your way with the world!$"
# 580 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 581 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_BeSeeingYouTeamAqua:
# 582 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe!\n"
# 583 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Even TEAM AQUA joins us!\p"
# 584 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But it's too much trouble to deal with\n"
# 585 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "you all…\p"
# 586 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Heh, it doesn't matter!\p"
# 587 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "We've got the METEORITE, so off to\n"
# 588 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "MT. CHIMNEY we go!\p"
# 589 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe! Be seeing you, you TEAM\n"
# 590 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "AQUA dingbats!$"
# 591 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 592 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieSeenYouBefore:
# 593 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ARCHIE: Didn't I see you two before?\n"
# 594 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "At SLATEPORT's MUSEUM?\p"
# 595 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Ah, so your names are {PLAYER}\nand {RIVAL}.\p"
# 596 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "At the time, I thought you were some\n"
# 597 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "of TEAM MAGMA's goons.\p"
# 598 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Humph…\n"
# 599 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "You're some odd kids.\p"
# 600 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM MAGMA is a dangerous group of\n"
# 601 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "total fanatics.\p"
# 602 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "They engage in destruction, claiming\n"
# 603 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "to expand the land mass.\p"
# 604 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "They are the rivals to us,\n"
# 605 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "the sea-loving TEAM AQUA!$"
# 606 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 607 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_BossWeShouldChaseMagma:
# 608 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "BOSS, we should give chase to\n"
# 609 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM MAGMA…$"
# 610 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 611 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieYesNoTellingWhatMagmaWillDo:
# 612 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ARCHIE: Yes, yes, we must!\n"
# 613 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "We've got to hurry.\p"
# 614 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "There's no telling what TEAM MAGMA\n"
# 615 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "will do at MT. CHIMNEY!$"
# 616 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 617 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieFarewell:
# 618 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ARCHIE: {PLAYER}, {RIVAL},\nyou should keep an eye out for\l"
# 619 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM MAGMA, too.\p"
# 620 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Farewell!$"
# 621 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 622 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_MeetProfCozmo:
# 623 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I… I'm COZMO…\n"
# 624 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I'm a PROFESSOR…\p"
# 625 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM MAGMA asked me to guide them\n"
# 626 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "to METEOR FALLS…\p"
# 627 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But they tricked me.\n"
# 628 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "They even took my METEORITE away…\p"
# 629 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "And then another similar bunch,\n"
# 630 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM AQUA showed up.\p"
# 631 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "After that…\n"
# 632 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I don't understand any of it.\p"
# 633 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But that TEAM MAGMA…\p"
# 634 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "What are they going to do with that\n"
# 635 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "METEORITE at MT. CHIMNEY?$"
# 636 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 637 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney:
# 638 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "PROF. COZMO: But that TEAM MAGMA…\p"
# 639 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "What are they going to do with that\n"
# 640 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "METEORITE at MT. CHIMNEY?$"

MeteorFalls_1F_1R_Text_SpencerOverHere::
# 73 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Psssst…\n"
	.string "Over here…$"

MeteorFalls_1F_1R_Text_BrenOverHere::
# 78 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Psssst…\n"
	.string "Over here…$"

MeteorFalls_1F_1R_Text_KyleOverHere::
# 83 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Psssst…\n"
	.string "Over here…$"

MeteorFalls_1F_1R_Text_SpencerIllFollow::
# 88 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I keep hearing strange echoes in here.\n"
	.string "Almost like the walls are whispering.\p"
	.string "Do you think there are ghosts in here?\n"
	.string "I'll follow behind you, just in case…$"

MeteorFalls_1F_1R_Text_BrenIllFollow::
# 95 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I keep hearing strange echoes in here.\n"
	.string "Almost like the walls are whispering.\p"
	.string "Do you think there are ghosts in here?\n"
	.string "I'll follow behind you, just in case…$"

MeteorFalls_1F_1R_Text_KyleIllFollow::
# 102 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I keep hearing strange echoes in here.\n"
	.string "Almost like the walls are whispering.\p"
	.string "Do you think there are ghosts in here?\n"
	.string "I'll follow behind you, just in case…$"

MeteorFalls_1F_1R_Text_SpencerWhereDidYouGo::
# 125 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Where did you go?\n"
	.string "I don't want to explore this creepy\l"
	.string "place by myself!$"

MeteorFalls_1F_1R_Text_BrenWhereDidYouGo::
# 130 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Where did you go?\n"
	.string "I don't want to explore this creepy\l"
	.string "place by myself!$"

MeteorFalls_1F_1R_Text_KyleWhereDidYouGo::
# 135 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Where did you go?\n"
	.string "I don't want to explore this creepy\l"
	.string "place by myself!$"

MeteorFalls_1F_1R_Text_Rival1Following::
# 149 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "This place sure is breathtaking despite\n"
	.string "the eeriness.$"

MeteorFalls_1F_1R_Text_SpencerShouldCheckOnCosmo::
# 497 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "We should go check on that guy down\n"
	.string "there.\p"
	.string "Who knows what TEAM MAGMA did to him.$"

MeteorFalls_1F_1R_Text_BrenShouldCheckOnCosmo::
# 502 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "We should go check on that guy down\n"
	.string "there.\p"
	.string "Who knows what TEAM MAGMA did to him.$"

MeteorFalls_1F_1R_Text_KyleShouldCheckOnCosmo::
# 507 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "We should go check on that guy down\n"
	.string "there.\p"
	.string "Who knows what TEAM MAGMA did to him.$"

MeteorFalls_1F_1R_Text_SpencerWhatHappened::
# 512 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "SPENCER: Hey, man.\n"
	.string "Are you alright?\n"
	.string "What happened?$"

MeteorFalls_1F_1R_Text_BrenWhatHappened::
# 518 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "BREN: Hey, man.\n"
	.string "Are you alright?\n"
	.string "What happened?$"

MeteorFalls_1F_1R_Text_KyleWhatHappened::
# 524 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "KYLE: Hey, man.\n"
	.string "Are you alright?\n"
	.string "What happened?$"

MeteorFalls_1F_1R_Text_SpencerGoingToMtChimney::
# 530 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "SPENCER: Great…\n"
	.string "Now there are two weird TEAMS up to no\l"
	.string "good.\p"
	.string "They all seem to be headed to MT.\n"
	.string "CHIMNEY.\l"
	.string "I've got a bad feeling about this.\p"
	.string "I'm going to go to MT. CHIMNEY and make\n"
	.string "sure nothing bad happens.\p"
	.string "You should come join me whenever you\n"
	.string "can!$"

MeteorFalls_1F_1R_Text_BrenGoingToMtChimney::
# 539 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "BREN: Great…\n"
	.string "Now there are two weird TEAMS up to no\l"
	.string "good.\p"
	.string "They all seem to be headed to MT.\n"
	.string "CHIMNEY.\l"
	.string "I've got a bad feeling about this.\p"
	.string "I'm going to go to MT. CHIMNEY and make\n"
	.string "sure nothing bad happens.\p"
	.string "You should come join me whenever you\n"
	.string "can!$"

MeteorFalls_1F_1R_Text_KyleGoingToMtChimney::
# 548 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "KYLE: Great…\n"
	.string "Now there are two weird TEAMS up to no\l"
	.string "good.\p"
	.string "They all seem to be headed to MT.\n"
	.string "CHIMNEY.\l"
	.string "I've got a bad feeling about this.\p"
	.string "I'm going to go to MT. CHIMNEY and make\n"
	.string "sure nothing bad happens.\p"
	.string "You should come join me whenever you\n"
	.string "can!$"
