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
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 133 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 11
# 134 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setobjectxyperm 11, 22, 18
# 135 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject 11
# 136 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 137 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, MeteorFalls_1F_1R_Movement_Rival1WalkIn
# 138 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 139 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 140 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 141 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	rival1talk MeteorFalls_1F_1R_Text_SpencerWhatsGoingOn, MeteorFalls_1F_1R_Text_BrenWhatsGoingOn, MeteorFalls_1F_1R_Text_KyleWhatsGoingOn
# 144 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
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

# 267 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 268 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGruntApproachPlayer:
# 269 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 270 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 271 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 272 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 273 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 274 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGrunt1Exit:
# 275 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 276 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 277 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 278 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 279 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 280 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 281 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 282 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 283 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 284 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 285 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 286 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGrunt2Exit:
# 287 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 288 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 289 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 290 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 291 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 292 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 293 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 294 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 295 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 296 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 297 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 298 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 299 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieArrive:
# 300 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 301 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 302 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 303 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 304 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 305 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 306 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 307 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 308 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1Arrive:
# 309 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 310 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
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
MeteorFalls_1F_1R_Movement_AquaGrunt2Arrive:
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
MeteorFalls_1F_1R_Movement_ArchieExit:
# 329 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 330 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
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
MeteorFalls_1F_1R_Movement_ArchieApproachPlayer:
# 339 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 340 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 341 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 342 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 343 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_left
# 344 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 345 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 346 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1Exit:
# 347 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 348 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 349 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 350 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 351 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 352 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 353 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 354 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 355 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 356 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 357 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 358 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachArchie:
# 359 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 360 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 361 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 362 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 363 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 364 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 365 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2Exit:
# 366 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 367 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 368 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 369 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 370 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 371 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 372 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 373 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 374 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 375 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 376 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 377 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 378 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachArchie:
# 379 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 380 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 381 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 382 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 383 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 384 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 385 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay:
# 386 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_down
# 387 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_4
# 388 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_right
# 389 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock_facing_direction
# 390 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 391 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	unlock_facing_direction
# 392 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_right
# 393 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end

# 396 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_Rival1MoveFromUp:
# 397 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 398 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_down
	step_end

# 401 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_PushRival1OutOfWayRight:
# 402 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_down
# 403 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_8
# 403 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_8
# 404 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock_facing_direction
# 405 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 406 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	unlock_facing_direction
# 407 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_right
	step_end

# 410 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_Rival1GetInPlaceForArchieLeft:
# 411 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 412 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 412 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 413 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_down
	step_end

# 416 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_Rival1GetInPlaceForArchieRight:
# 417 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 418 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 419 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_down
	step_end

MeteorFalls_1F_1R_EventScript_Rival1AfterGrunts::
# 423 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 20
# 424 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, MeteorFalls_1F_1R_Movement_Rival1ApproachPlayer
# 425 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 426 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	rival1talk MeteorFalls_1F_1R_Text_SpencerShouldCheckOnCosmo, MeteorFalls_1F_1R_Text_BrenShouldCheckOnCosmo, MeteorFalls_1F_1R_Text_KyleShouldCheckOnCosmo
# 429 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 430 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, MeteorFalls_1F_1R_Movement_Rival1ApproachCosmo
# 431 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeteorFalls_1F_1R_Movement_PlayerApproachCosmo
# 432 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 433 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_BeginTalkDown
# 434 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 435 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	rival1talk MeteorFalls_1F_1R_Text_SpencerWhatHappened, MeteorFalls_1F_1R_Text_BrenWhatHappened, MeteorFalls_1F_1R_Text_KyleWhatHappened
# 438 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 439 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 16
# 440 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 10, Common_Movement_BeginTalkUp
# 441 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 442 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_MeetProfCozmo, MSGBOX_AUTOCLOSE
# 443 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 16
# 444 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 445 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_BeginTalkLeft
# 446 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 447 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	rival1talk MeteorFalls_1F_1R_Text_SpencerGoingToMtChimney, MeteorFalls_1F_1R_Text_BrenGoingToMtChimney, MeteorFalls_1F_1R_Text_KyleGoingToMtChimney
# 450 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 451 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 452 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, MeteorFalls_1F_1R_Movement_Rival1Leave
# 453 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 454 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 11
	return


# 458 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_Rival1ApproachPlayer:
# 459 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_down
# 460 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_left
	step_end

# 463 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_Rival1ApproachCosmo:
# 464 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_down
# 464 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_down
# 464 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_down
# 465 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 466 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_down
	step_end

# 469 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_PlayerApproachCosmo:
# 470 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_8
# 471 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 472 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_down
# 472 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_down
# 472 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_down
# 473 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 473 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 474 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_down
	step_end

# 477 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_Rival1Leave:
# 478 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 478 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 479 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 480 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 480 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 481 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 481 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 481 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 481 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 481 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 481 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 481 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
	step_end

# 544 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 545 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_ProfCozmo::
# 546 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 547 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	faceplayer
# 548 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney, MSGBOX_DEFAULT
# 549 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
# 550 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 551 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 552 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_WithThisMeteorite:
# 553 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe!\p"
# 554 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "With this METEORITE, that thing in\n"
# 555 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "MT. CHIMNEY will…$"
# 556 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 557 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_DontExpectMercyFromMagma:
# 558 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Heh?\p"
# 559 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I don't know who you are, but if you get\n"
# 560 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "in the way of TEAM MAGMA, don't\l"
# 561 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "expect any mercy!$"
# 562 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 563 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_HoldItRightThereMagma:
# 564 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hold it right there, TEAM MAGMA!\p"
# 565 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "You're badly mistaken if you think you\n"
# 566 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "can have your way with the world!$"
# 567 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 568 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_BeSeeingYouTeamAqua:
# 569 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe!\n"
# 570 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Even TEAM AQUA joins us!\p"
# 571 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But it's too much trouble to deal with\n"
# 572 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "you all…\p"
# 573 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Heh, it doesn't matter!\p"
# 574 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "We've got the METEORITE, so off to\n"
# 575 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "MT. CHIMNEY we go!\p"
# 576 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe! Be seeing you, you TEAM\n"
# 577 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "AQUA dingbats!$"
# 578 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 579 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieSeenYouBefore:
# 580 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ARCHIE: Didn't I see you two before?\n"
# 581 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "At SLATEPORT's MUSEUM?\p"
# 582 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Ah, so your names are {PLAYER}\nand {RIVAL}.\p"
# 583 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "At the time, I thought you were some\n"
# 584 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "of TEAM MAGMA's goons.\p"
# 585 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Humph…\n"
# 586 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "You're some odd kids.\p"
# 587 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM MAGMA is a dangerous group of\n"
# 588 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "total fanatics.\p"
# 589 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "They engage in destruction, claiming\n"
# 590 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "to expand the land mass.\p"
# 591 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "They are the rivals to us,\n"
# 592 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "the sea-loving TEAM AQUA!$"
# 593 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 594 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_BossWeShouldChaseMagma:
# 595 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "BOSS, we should give chase to\n"
# 596 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM MAGMA…$"
# 597 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 598 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieYesNoTellingWhatMagmaWillDo:
# 599 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ARCHIE: Yes, yes, we must!\n"
# 600 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "We've got to hurry.\p"
# 601 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "There's no telling what TEAM MAGMA\n"
# 602 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "will do at MT. CHIMNEY!$"
# 603 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 604 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieFarewell:
# 605 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ARCHIE: {PLAYER}, {RIVAL},\nyou should keep an eye out for\l"
# 606 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM MAGMA, too.\p"
# 607 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Farewell!$"
# 608 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 609 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_MeetProfCozmo:
# 610 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I… I'm COZMO…\n"
# 611 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I'm a PROFESSOR…\p"
# 612 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM MAGMA asked me to guide them\n"
# 613 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "to METEOR FALLS…\p"
# 614 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But they tricked me.\n"
# 615 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "They even took my METEORITE away…\p"
# 616 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "And then another similar bunch,\n"
# 617 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM AQUA showed up.\p"
# 618 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "After that…\n"
# 619 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I don't understand any of it.\p"
# 620 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But that TEAM MAGMA…\p"
# 621 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "What are they going to do with that\n"
# 622 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "METEORITE at MT. CHIMNEY?$"
# 623 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 624 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney:
# 625 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "PROF. COZMO: But that TEAM MAGMA…\p"
# 626 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "What are they going to do with that\n"
# 627 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "METEORITE at MT. CHIMNEY?$"

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
# 484 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "We should go check on that guy down\n"
	.string "there.\p"
	.string "Who knows what TEAM MAGMA did to him.$"

MeteorFalls_1F_1R_Text_BrenShouldCheckOnCosmo::
# 489 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "We should go check on that guy down\n"
	.string "there.\p"
	.string "Who knows what TEAM MAGMA did to him.$"

MeteorFalls_1F_1R_Text_KyleShouldCheckOnCosmo::
# 494 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "We should go check on that guy down\n"
	.string "there.\p"
	.string "Who knows what TEAM MAGMA did to him.$"

MeteorFalls_1F_1R_Text_SpencerWhatHappened::
# 499 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "SPENCER: Hey, man.\n"
	.string "Are you alright?\n"
	.string "What happened?$"

MeteorFalls_1F_1R_Text_BrenWhatHappened::
# 505 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "BREN: Hey, man.\n"
	.string "Are you alright?\n"
	.string "What happened?$"

MeteorFalls_1F_1R_Text_KyleWhatHappened::
# 511 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "KYLE: Hey, man.\n"
	.string "Are you alright?\n"
	.string "What happened?$"

MeteorFalls_1F_1R_Text_SpencerGoingToMtChimney::
# 517 "data/maps/MeteorFalls_1F_1R/scripts.pory"
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
# 526 "data/maps/MeteorFalls_1F_1R/scripts.pory"
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
# 535 "data/maps/MeteorFalls_1F_1R/scripts.pory"
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
