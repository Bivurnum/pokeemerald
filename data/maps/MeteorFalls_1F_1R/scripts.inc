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
# 31 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MeteorFalls_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD
# 34 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MeteorFalls_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MeteorFalls_1F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 29 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return

MeteorFalls_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD:
# 32 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, MeteorFalls_1F_1R_EventScript_OpenStevensCave
	return

MeteorFalls_1F_1R_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 35 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	map_script_2 VAR_METEOR_FALLS_STATE, 1, MeteorFalls_1F_1R_EventScript_InitRival1
	.2byte 0


MeteorFalls_1F_1R_EventScript_OpenStevensCave::
# 40 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 1, METATILE_MeteorFalls_CaveEntrance_Top, TRUE
# 41 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 3, 2, METATILE_MeteorFalls_CaveEntrance_Left, TRUE
# 42 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 2, METATILE_MeteorFalls_CaveEntrance_Bottom, FALSE
# 43 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 5, 2, METATILE_MeteorFalls_CaveEntrance_Right, TRUE
	return


MeteorFalls_1F_1R_EventScript_InitRival1::
# 48 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 49 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 50 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_BeginTalkRight
# 51 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 52 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	rival1talk MeteorFalls_1F_1R_Text_SpencerOverHere, MeteorFalls_1F_1R_Text_BrenOverHere, MeteorFalls_1F_1R_Text_KyleOverHere
# 55 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 56 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Walk_Left
# 57 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 58 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	rival1talk MeteorFalls_1F_1R_Text_SpencerStrangeVoices, MeteorFalls_1F_1R_Text_BrenStrangeVoices, MeteorFalls_1F_1R_Text_KyleStrangeVoices
# 61 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 62 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_METEOR_FALLS_STATE, 3
# 63 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
	end


MeteorFalls_1F_1R_EventScript_Rival1::
# 107 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 108 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_FacePlayer
# 109 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 110 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	rival1talk MeteorFalls_1F_1R_Text_SpencerYouCanClearGhosts, MeteorFalls_1F_1R_Text_BrenYouCanClearGhosts, MeteorFalls_1F_1R_Text_KyleYouCanClearGhosts
# 113 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 114 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
	end


MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene::
# 131 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lockall
# 132 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 11
# 133 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setobjectxyperm 11, 22, 18
# 134 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject 11
# 135 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 136 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, MeteorFalls_1F_1R_Movement_Rival1WalkIn
# 137 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 138 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 139 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 140 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	rival1talk MeteorFalls_1F_1R_Text_SpencerWhatsGoingOn, MeteorFalls_1F_1R_Text_BrenWhatsGoingOn, MeteorFalls_1F_1R_Text_KyleWhatsGoingOn
# 143 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 144 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 145 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	special SpawnCameraObject
# 146 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playse SE_PIN
# 147 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 148 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, MeteorFalls_1F_1R_Movement_NoticeMagma
# 149 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MeteorFalls_1F_1R_Movement_CameraPanToMagma
# 150 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 151 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 152 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 153 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_WithThisMeteorite, MSGBOX_DEFAULT
# 154 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 155 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterUp
# 156 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterUp
# 157 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 158 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playse SE_PIN
# 159 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 160 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 161 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_Delay48
# 162 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 163 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_DontExpectMercyFromMagma, MSGBOX_DEFAULT
# 164 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 165 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, MeteorFalls_1F_1R_Movement_MagmaGruntApproachPlayer
# 166 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 167 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_HoldItRightThereMagma, MSGBOX_DEFAULT
# 168 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 169 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 170 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceFasterLeft
# 171 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterLeft
# 172 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterLeft
# 173 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 174 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject 7
# 175 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject 8
# 176 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject 9
# 177 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 178 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 7, MeteorFalls_1F_1R_Movement_ArchieArrive
# 179 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 8, MeteorFalls_1F_1R_Movement_AquaGrunt1Arrive
# 180 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 9, MeteorFalls_1F_1R_Movement_AquaGrunt2Arrive
# 181 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 182 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterLeft
# 183 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterLeft
# 184 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 185 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_BeSeeingYouTeamAqua, MSGBOX_DEFAULT
# 186 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 187 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, MeteorFalls_1F_1R_Movement_PushRival1OutOfWayRight
# 188 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay
# 189 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, MeteorFalls_1F_1R_Movement_MagmaGrunt1Exit
# 190 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 6, MeteorFalls_1F_1R_Movement_MagmaGrunt2Exit
# 191 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 192 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 5
# 193 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 6
# 194 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, MeteorFalls_1F_1R_Movement_Rival1GetInPlaceForArchieRight
# 195 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MeteorFalls_1F_1R_Movement_CameraPanBack
# 196 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 7, MeteorFalls_1F_1R_Movement_ArchieApproachPlayer
# 197 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 198 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	special RemoveCameraObject
# 199 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieSeenYouBefore, MSGBOX_DEFAULT
# 200 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 201 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 8, MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachArchie
# 202 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 9, MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachArchie
# 203 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 204 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_BossWeShouldChaseMagma, MSGBOX_DEFAULT
# 205 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterDown
# 206 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 207 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieYesNoTellingWhatMagmaWillDo, MSGBOX_DEFAULT
# 208 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterLeft
# 209 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 210 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieFarewell, MSGBOX_DEFAULT
# 211 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 212 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_FaceRight
# 213 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 7, MeteorFalls_1F_1R_Movement_ArchieExit
# 214 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 8, MeteorFalls_1F_1R_Movement_AquaGrunt1Exit
# 215 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 9, MeteorFalls_1F_1R_Movement_AquaGrunt2Exit
# 216 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 217 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	fadedefaultbgm
# 218 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 7
# 219 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 8
# 220 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 9
# 221 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call MeteorFalls_1F_1R_EventScript_Rival1AfterGrunts
# 222 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_RIVAL1
# 223 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA
# 224 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_ARCHIE_METEOR_FALLS
# 225 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_DIG_HOUSE_RIVAL2
# 226 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
# 227 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_PROF_COZMO
# 228 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_METEOR_FALLS_STATE, 4
# 229 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	releaseall
	end


# 233 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_Rival1WalkIn:
# 234 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 234 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 234 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 234 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 234 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 234 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 234 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
	step_end

# 237 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_NoticeMagma:
# 238 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	emote_exclamation_mark
# 239 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_down
	step_end

# 242 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_CameraPanToMagma:
# 243 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 243 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 244 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_slow_down
# 244 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_slow_down
	step_end

# 247 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_CameraPanBack:
# 248 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_slow_up
# 249 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_slow_diag_northwest
	step_end

EndOfDemo::
# 268 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox EndOfDemo_Text_0, MSGBOX_SIGN
# 269 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
	return


# 273 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 274 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGruntApproachPlayer:
# 275 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 276 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 277 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 278 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 279 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 280 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGrunt1Exit:
# 281 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 282 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 283 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 284 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 285 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 286 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 287 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 288 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 289 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 290 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 291 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 292 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGrunt2Exit:
# 293 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 294 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 295 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 296 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 297 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 298 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 299 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 300 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 301 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 302 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 303 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 304 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 305 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieArrive:
# 306 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 307 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 308 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 309 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 310 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 311 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 312 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 313 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 314 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1Arrive:
# 315 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 316 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 317 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 318 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 319 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 320 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 321 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 322 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 323 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 324 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2Arrive:
# 325 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 326 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 327 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 328 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 329 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 330 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 331 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 332 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 333 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 334 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieExit:
# 335 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 336 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 337 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 338 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 339 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 340 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 341 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 342 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 343 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 344 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieApproachPlayer:
# 345 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 346 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 347 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 348 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 349 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_left
# 350 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 351 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 352 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1Exit:
# 353 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 354 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 355 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 356 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 357 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 358 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 359 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 360 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 361 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 362 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 363 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 364 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachArchie:
# 365 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 366 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 367 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 368 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 369 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 370 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 371 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2Exit:
# 372 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 373 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 374 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 375 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 376 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 377 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 378 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 379 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 380 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 381 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 382 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 383 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 384 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachArchie:
# 385 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 386 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 387 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 388 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 389 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 390 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 391 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay:
# 392 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_down
# 393 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_4
# 394 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_right
# 395 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock_facing_direction
# 396 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 397 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	unlock_facing_direction
# 398 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_right
# 399 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end

# 402 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_Rival1MoveFromUp:
# 403 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 404 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_down
	step_end

# 407 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_PushRival1OutOfWayRight:
# 408 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_down
# 409 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_8
# 409 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_8
# 410 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock_facing_direction
# 411 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 412 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	unlock_facing_direction
# 413 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_right
	step_end

# 416 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_Rival1GetInPlaceForArchieLeft:
# 417 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 418 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 418 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 419 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_down
	step_end

# 422 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_Rival1GetInPlaceForArchieRight:
# 423 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 424 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 425 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_down
	step_end

MeteorFalls_1F_1R_EventScript_Rival1AfterGrunts::
# 429 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 20
# 430 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, MeteorFalls_1F_1R_Movement_Rival1ApproachPlayer
# 431 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 432 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	rival1talk MeteorFalls_1F_1R_Text_SpencerShouldCheckOnCosmo, MeteorFalls_1F_1R_Text_BrenShouldCheckOnCosmo, MeteorFalls_1F_1R_Text_KyleShouldCheckOnCosmo
# 435 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 436 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, MeteorFalls_1F_1R_Movement_Rival1ApproachCosmo
# 437 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeteorFalls_1F_1R_Movement_PlayerApproachCosmo
# 438 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 439 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_BeginTalkDown
# 440 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 441 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	rival1talk MeteorFalls_1F_1R_Text_SpencerWhatHappened, MeteorFalls_1F_1R_Text_BrenWhatHappened, MeteorFalls_1F_1R_Text_KyleWhatHappened
# 444 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 445 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 16
# 446 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 10, Common_Movement_BeginTalkUp
# 447 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 448 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_MeetProfCozmo, MSGBOX_AUTOCLOSE
# 449 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 16
# 450 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 451 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_BeginTalkLeft
# 452 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 453 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	rival1talk MeteorFalls_1F_1R_Text_SpencerGoingToMtChimney, MeteorFalls_1F_1R_Text_BrenGoingToMtChimney, MeteorFalls_1F_1R_Text_KyleGoingToMtChimney
# 456 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 457 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 458 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, MeteorFalls_1F_1R_Movement_Rival1Leave
# 459 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 460 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 11
	return


# 464 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_Rival1ApproachPlayer:
# 465 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_down
# 466 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_left
	step_end

# 469 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_Rival1ApproachCosmo:
# 470 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_down
# 470 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_down
# 470 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_down
# 471 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 472 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_down
	step_end

# 475 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_PlayerApproachCosmo:
# 476 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_8
# 477 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 478 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_down
# 478 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_down
# 478 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_down
# 479 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 479 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 480 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_down
	step_end

# 483 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_Rival1Leave:
# 484 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 484 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 485 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 486 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 486 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 487 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 487 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 487 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 487 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 487 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 487 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 487 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
	step_end

# 550 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 551 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_ProfCozmo::
# 552 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 553 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	faceplayer
# 554 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney, MSGBOX_DEFAULT
# 555 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
# 556 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 557 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 558 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_WithThisMeteorite:
# 559 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe!\p"
# 560 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "With this METEORITE, that thing in\n"
# 561 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "MT. CHIMNEY will…$"
# 562 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 563 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_DontExpectMercyFromMagma:
# 564 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Heh?\p"
# 565 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I don't know who you are, but if you get\n"
# 566 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "in the way of TEAM MAGMA, don't\l"
# 567 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "expect any mercy!$"
# 568 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 569 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_HoldItRightThereMagma:
# 570 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hold it right there, TEAM MAGMA!\p"
# 571 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "You're badly mistaken if you think you\n"
# 572 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "can have your way with the world!$"
# 573 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 574 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_BeSeeingYouTeamAqua:
# 575 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe!\n"
# 576 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Even TEAM AQUA joins us!\p"
# 577 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But it's too much trouble to deal with\n"
# 578 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "you all…\p"
# 579 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Heh, it doesn't matter!\p"
# 580 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "We've got the METEORITE, so off to\n"
# 581 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "MT. CHIMNEY we go!\p"
# 582 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe! Be seeing you, you TEAM\n"
# 583 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "AQUA dingbats!$"
# 584 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 585 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieSeenYouBefore:
# 586 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ARCHIE: Didn't I see you two before?\n"
# 587 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "At SLATEPORT's MUSEUM?\p"
# 588 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Ah, so your names are {PLAYER}\nand {RIVAL}.\p"
# 589 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "At the time, I thought you were some\n"
# 590 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "of TEAM MAGMA's goons.\p"
# 591 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Humph…\n"
# 592 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "You're some odd kids.\p"
# 593 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM MAGMA is a dangerous group of\n"
# 594 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "total fanatics.\p"
# 595 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "They engage in destruction, claiming\n"
# 596 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "to expand the land mass.\p"
# 597 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "They are the rivals to us,\n"
# 598 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "the sea-loving TEAM AQUA!$"
# 599 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 600 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_BossWeShouldChaseMagma:
# 601 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "BOSS, we should give chase to\n"
# 602 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM MAGMA…$"
# 603 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 604 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieYesNoTellingWhatMagmaWillDo:
# 605 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ARCHIE: Yes, yes, we must!\n"
# 606 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "We've got to hurry.\p"
# 607 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "There's no telling what TEAM MAGMA\n"
# 608 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "will do at MT. CHIMNEY!$"
# 609 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 610 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieFarewell:
# 611 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ARCHIE: {PLAYER}, {RIVAL},\nyou should keep an eye out for\l"
# 612 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM MAGMA, too.\p"
# 613 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Farewell!$"
# 614 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 615 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_MeetProfCozmo:
# 616 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I… I'm COZMO…\n"
# 617 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I'm a PROFESSOR…\p"
# 618 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM MAGMA asked me to guide them\n"
# 619 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "to METEOR FALLS…\p"
# 620 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But they tricked me.\n"
# 621 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "They even took my METEORITE away…\p"
# 622 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "And then another similar bunch,\n"
# 623 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM AQUA showed up.\p"
# 624 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "After that…\n"
# 625 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I don't understand any of it.\p"
# 626 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But that TEAM MAGMA…\p"
# 627 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "What are they going to do with that\n"
# 628 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "METEORITE at MT. CHIMNEY?$"
# 629 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 630 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney:
# 631 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "PROF. COZMO: But that TEAM MAGMA…\p"
# 632 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "What are they going to do with that\n"
# 633 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "METEORITE at MT. CHIMNEY?$"

EndOfDemo_Text_0:
# 268 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "// END OF DEMO //\n"
	.string "You may play past this point, but the\l"
	.string "game may not function correctly.$"

MeteorFalls_1F_1R_Text_SpencerOverHere::
# 67 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Psssst…\n"
	.string "Over here…$"

MeteorFalls_1F_1R_Text_BrenOverHere::
# 72 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Psssst…\n"
	.string "Over here…$"

MeteorFalls_1F_1R_Text_KyleOverHere::
# 77 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Psssst…\n"
	.string "Over here…$"

MeteorFalls_1F_1R_Text_SpencerStrangeVoices::
# 82 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I keep hearing strange echoes in here.\n"
	.string "Almost like the walls are whispering.\l"
	.string "Do you think there are ghosts in here?\p"
	.string "Hey! You're super strong.\n"
	.string "Will you go check it out, just in case?$"

MeteorFalls_1F_1R_Text_BrenStrangeVoices::
# 90 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I keep hearing strange echoes in here.\n"
	.string "Almost like the walls are whispering.\l"
	.string "Do you think there are ghosts in here?\p"
	.string "Hey! You're super strong.\n"
	.string "Will you go check it out, just in case?$"

MeteorFalls_1F_1R_Text_KyleStrangeVoices::
# 98 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I keep hearing strange echoes in here.\n"
	.string "Almost like the walls are whispering.\l"
	.string "Do you think there are ghosts in here?\p"
	.string "Hey! You're super strong.\n"
	.string "Will you go check it out, just in case?$"

MeteorFalls_1F_1R_Text_SpencerYouCanClearGhosts::
# 118 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I'm sure you're strong enough to clear\n"
	.string "the area of ghosts, right?$"

MeteorFalls_1F_1R_Text_BrenYouCanClearGhosts::
# 122 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I'm sure you're strong enough to clear\n"
	.string "the area of ghosts, right?$"

MeteorFalls_1F_1R_Text_KyleYouCanClearGhosts::
# 126 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I'm sure you're strong enough to clear\n"
	.string "the area of ghosts, right?$"

MeteorFalls_1F_1R_Text_SpencerWhatsGoingOn::
# 252 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "SPENCER: What's going on?\n"
	.string "Did you find the ghosts?$"

MeteorFalls_1F_1R_Text_BrenWhatsGoingOn::
# 257 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "BREN: What's going on?\n"
	.string "Did you find the ghosts?$"

MeteorFalls_1F_1R_Text_KyleWhatsGoingOn::
# 262 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "KYLE: What's going on?\n"
	.string "Did you find the ghosts?$"

MeteorFalls_1F_1R_Text_SpencerShouldCheckOnCosmo::
# 490 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "We should go check on that guy down\n"
	.string "there.\p"
	.string "Who knows what TEAM MAGMA did to him.$"

MeteorFalls_1F_1R_Text_BrenShouldCheckOnCosmo::
# 495 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "We should go check on that guy down\n"
	.string "there.\p"
	.string "Who knows what TEAM MAGMA did to him.$"

MeteorFalls_1F_1R_Text_KyleShouldCheckOnCosmo::
# 500 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "We should go check on that guy down\n"
	.string "there.\p"
	.string "Who knows what TEAM MAGMA did to him.$"

MeteorFalls_1F_1R_Text_SpencerWhatHappened::
# 505 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "SPENCER: Hey, man.\n"
	.string "Are you alright?\n"
	.string "What happened?$"

MeteorFalls_1F_1R_Text_BrenWhatHappened::
# 511 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "BREN: Hey, man.\n"
	.string "Are you alright?\n"
	.string "What happened?$"

MeteorFalls_1F_1R_Text_KyleWhatHappened::
# 517 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "KYLE: Hey, man.\n"
	.string "Are you alright?\n"
	.string "What happened?$"

MeteorFalls_1F_1R_Text_SpencerGoingToMtChimney::
# 523 "data/maps/MeteorFalls_1F_1R/scripts.pory"
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
# 532 "data/maps/MeteorFalls_1F_1R/scripts.pory"
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
# 541 "data/maps/MeteorFalls_1F_1R/scripts.pory"
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
