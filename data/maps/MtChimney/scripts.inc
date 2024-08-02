# 9 "data/maps/MtChimney/scripts.pory"

# 10 "data/maps/MtChimney/scripts.pory"
.set LOCALID_ARCHIE, 1
# 11 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAXIE, 2
# 12 "data/maps/MtChimney/scripts.pory"
.set LOCALID_TABITHA, 3
# 13 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAGMA_GRUNT_2, 22
# 14 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAGMA_GRUNT_1, 29
# 15 "data/maps/MtChimney/scripts.pory"
.set LOCALID_RIVAL1, 31
# 16 "data/maps/MtChimney/scripts.pory"
.set LOCALID_RIVAL2, 32

MtChimney_MapScripts::
# 20 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtChimney_MapScripts_MAP_SCRIPT_ON_RESUME
# 23 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 29 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MtChimney_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MtChimney_MapScripts_MAP_SCRIPT_ON_RESUME:
# 21 "data/maps/MtChimney/scripts.pory"
	setstepcallback STEP_CB_ASH
	return

MtChimney_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 24 "data/maps/MtChimney/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 1
# 25 "data/maps/MtChimney/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 21
	goto_if_eq MtChimney_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

MtChimney_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 26 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 32, 18, 37
	return

MtChimney_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 30 "data/maps/MtChimney/scripts.pory"
	map_script_2 VAR_METEOR_FALLS_STATE, 5, MtChimney_EventScript_Rival2AfterCableCar
	.2byte 0


MtChimney_EventScript_Rival2AfterCableCar::
# 35 "data/maps/MtChimney/scripts.pory"
	lockall
# 36 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 37 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 38 "data/maps/MtChimney/scripts.pory"
	applymovement 32, Common_Movement_ExclamationMark
# 39 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 40 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 41 "data/maps/MtChimney/scripts.pory"
	applymovement 32, Common_Movement_FaceRight
# 42 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 43 "data/maps/MtChimney/scripts.pory"
	special SpawnCameraObject
# 44 "data/maps/MtChimney/scripts.pory"
	delay 10
# 45 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_CameraPanBackAndForth
# 46 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 47 "data/maps/MtChimney/scripts.pory"
	special RemoveCameraObject
# 48 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 21, MtChimney_EventScript_LeftRival2Talk
# 49 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 22, MtChimney_EventScript_RightRival2Talk
# 50 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 51 "data/maps/MtChimney/scripts.pory"
	rival2talk MtChimney_Text_SpencerFigureOutWhatsGoingOn, MtChimney_Text_BrenFigureOutWhatsGoingOn, MtChimney_Text_KyleFigureOutWhatsGoingOn
# 54 "data/maps/MtChimney/scripts.pory"
	closemessage
# 55 "data/maps/MtChimney/scripts.pory"
	loadword 0, MtChimney_EventScript_Rival2Following
# 56 "data/maps/MtChimney/scripts.pory"
	setfollower 32, FOLLOWER_ALL_AND_CUSTOM
# 57 "data/maps/MtChimney/scripts.pory"
	setvar VAR_METEOR_FALLS_STATE, 6
# 58 "data/maps/MtChimney/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 23
# 59 "data/maps/MtChimney/scripts.pory"
	releaseall
	end


MtChimney_EventScript_LeftRival2Talk::
# 64 "data/maps/MtChimney/scripts.pory"
	applymovement 32, Common_Movement_WalkInPlaceFasterLeft
	return


MtChimney_EventScript_RightRival2Talk::
# 68 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 69 "data/maps/MtChimney/scripts.pory"
	applymovement 32, Common_Movement_WalkInPlaceFasterRight
	return


MtChimney_EventScript_Rival2Following::
# 73 "data/maps/MtChimney/scripts.pory"
	lock
# 74 "data/maps/MtChimney/scripts.pory"
	facefollower
# 75 "data/maps/MtChimney/scripts.pory"
	compare VAR_METEOR_FALLS_STATE, 6
	goto_if_eq MtChimney_EventScript_Rival2Following_2
# 81 "data/maps/MtChimney/scripts.pory"
	rival2talk MtChimney_Text_SpencerFollowing2, MtChimney_Text_BrenFollowing2, MtChimney_Text_KyleFollowing2
MtChimney_EventScript_Rival2Following_1:
# 85 "data/maps/MtChimney/scripts.pory"
	closemessage
# 86 "data/maps/MtChimney/scripts.pory"
	release
	end

MtChimney_EventScript_Rival2Following_2:
# 76 "data/maps/MtChimney/scripts.pory"
	rival2talk MtChimney_Text_SpencerFollowing1, MtChimney_Text_BrenFollowing1, MtChimney_Text_KyleFollowing1
	goto MtChimney_EventScript_Rival2Following_1


# 90 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_CameraPanBackAndForth:
# 91 "data/maps/MtChimney/scripts.pory"
	walk_slow_right
# 91 "data/maps/MtChimney/scripts.pory"
	walk_slow_right
# 91 "data/maps/MtChimney/scripts.pory"
	walk_slow_right
# 92 "data/maps/MtChimney/scripts.pory"
	delay_16
# 92 "data/maps/MtChimney/scripts.pory"
	delay_16
# 92 "data/maps/MtChimney/scripts.pory"
	delay_16
# 92 "data/maps/MtChimney/scripts.pory"
	delay_16
# 92 "data/maps/MtChimney/scripts.pory"
	delay_16
# 92 "data/maps/MtChimney/scripts.pory"
	delay_16
# 93 "data/maps/MtChimney/scripts.pory"
	walk_slow_left
# 93 "data/maps/MtChimney/scripts.pory"
	walk_slow_left
# 93 "data/maps/MtChimney/scripts.pory"
	walk_slow_left
	step_end

# 141 "data/maps/MtChimney/scripts.pory"

# 142 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Archie::
# 143 "data/maps/MtChimney/scripts.pory"
	lock
# 144 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 145 "data/maps/MtChimney/scripts.pory"
	call_if_unset FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieGoStopTeamMagma
# 146 "data/maps/MtChimney/scripts.pory"
	call_if_set FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieBusyFighting
# 147 "data/maps/MtChimney/scripts.pory"
	closemessage
# 148 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceOriginalDirection
# 149 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 150 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_EVIL_LEADER_PLEASE_STOP
# 151 "data/maps/MtChimney/scripts.pory"
	release
# 152 "data/maps/MtChimney/scripts.pory"
	end
# 153 "data/maps/MtChimney/scripts.pory"

# 154 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieGoStopTeamMagma::
# 155 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieGoStopTeamMagma, MSGBOX_DEFAULT
# 156 "data/maps/MtChimney/scripts.pory"
	return
# 157 "data/maps/MtChimney/scripts.pory"

# 158 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieBusyFighting::
# 159 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieIHaveMyHandsFull, MSGBOX_DEFAULT
# 160 "data/maps/MtChimney/scripts.pory"
	return
# 161 "data/maps/MtChimney/scripts.pory"

# 162 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie::
# 163 "data/maps/MtChimney/scripts.pory"
	lockall
# 164 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 165 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoriteWillActivateVolcano, MSGBOX_DEFAULT
# 166 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FacePlayer
# 167 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 168 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 169 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 170 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 171 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
# 172 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 173 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieIntro, MSGBOX_DEFAULT
# 174 "data/maps/MtChimney/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat
# 175 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma, MSGBOX_DEFAULT
# 176 "data/maps/MtChimney/scripts.pory"
	closemessage
# 177 "data/maps/MtChimney/scripts.pory"
	delay 30
# 178 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 179 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAXIE
# 180 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_1
# 181 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_TABITHA
# 182 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_2
# 183 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 184 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 185 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 10, 12
# 186 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_ARCHIE
# 187 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieApproachPlayerEast
# 188 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieApproachPlayerNorth
# 189 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 190 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 191 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
# 192 "data/maps/MtChimney/scripts.pory"
	closemessage
# 193 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieExitEast
# 194 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieExitNorth
# 195 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_ARCHIE
# 196 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 197 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 198 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 199 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 200 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 201 "data/maps/MtChimney/scripts.pory"
	releaseall
# 202 "data/maps/MtChimney/scripts.pory"
	end
# 203 "data/maps/MtChimney/scripts.pory"

# 204 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerEast::
# 205 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerEast
# 206 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 207 "data/maps/MtChimney/scripts.pory"
	return
# 208 "data/maps/MtChimney/scripts.pory"

# 209 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerNorth::
# 210 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerNorth
# 211 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 212 "data/maps/MtChimney/scripts.pory"
	return
# 213 "data/maps/MtChimney/scripts.pory"

# 214 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitEast::
# 215 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitEast
# 216 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 217 "data/maps/MtChimney/scripts.pory"
	return
# 218 "data/maps/MtChimney/scripts.pory"

# 219 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitNorth::
# 220 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitNorth
# 221 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 222 "data/maps/MtChimney/scripts.pory"
	return
# 223 "data/maps/MtChimney/scripts.pory"

# 224 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady::
# 225 "data/maps/MtChimney/scripts.pory"
	lock
# 226 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 227 "data/maps/MtChimney/scripts.pory"
	showmoneybox 0, 0
# 228 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
# 229 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_DeclineLavaCookie
# 230 "data/maps/MtChimney/scripts.pory"
	checkmoney 200
# 231 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_NotEnoughMoney
# 232 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
# 233 "data/maps/MtChimney/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 234 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RemoveMoney
# 235 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 236 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 237 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 238 "data/maps/MtChimney/scripts.pory"
	release
# 239 "data/maps/MtChimney/scripts.pory"
	end
# 240 "data/maps/MtChimney/scripts.pory"

# 241 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 242 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 243 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 244 "data/maps/MtChimney/scripts.pory"
	release
# 245 "data/maps/MtChimney/scripts.pory"
	end
# 246 "data/maps/MtChimney/scripts.pory"

# 247 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RemoveMoney::
# 248 "data/maps/MtChimney/scripts.pory"
	removemoney 200
# 249 "data/maps/MtChimney/scripts.pory"
	updatemoneybox
# 250 "data/maps/MtChimney/scripts.pory"
	return
# 251 "data/maps/MtChimney/scripts.pory"

# 252 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DeclineLavaCookie::
# 253 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
# 254 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 255 "data/maps/MtChimney/scripts.pory"
	release
# 256 "data/maps/MtChimney/scripts.pory"
	end
# 257 "data/maps/MtChimney/scripts.pory"

# 258 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_NotEnoughMoney::
# 259 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
# 260 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 261 "data/maps/MtChimney/scripts.pory"
	release
# 262 "data/maps/MtChimney/scripts.pory"
	end
# 263 "data/maps/MtChimney/scripts.pory"

# 264 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerEast:
# 265 "data/maps/MtChimney/scripts.pory"
	walk_up
# 266 "data/maps/MtChimney/scripts.pory"
	walk_up
# 267 "data/maps/MtChimney/scripts.pory"
	walk_up
# 268 "data/maps/MtChimney/scripts.pory"
	walk_up
# 269 "data/maps/MtChimney/scripts.pory"
	walk_up
# 270 "data/maps/MtChimney/scripts.pory"
	walk_up
# 271 "data/maps/MtChimney/scripts.pory"
	walk_right
# 272 "data/maps/MtChimney/scripts.pory"
	step_end
# 273 "data/maps/MtChimney/scripts.pory"

# 274 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitEast:
# 275 "data/maps/MtChimney/scripts.pory"
	walk_left
# 276 "data/maps/MtChimney/scripts.pory"
	walk_down
# 277 "data/maps/MtChimney/scripts.pory"
	walk_down
# 278 "data/maps/MtChimney/scripts.pory"
	walk_down
# 279 "data/maps/MtChimney/scripts.pory"
	walk_down
# 280 "data/maps/MtChimney/scripts.pory"
	walk_down
# 281 "data/maps/MtChimney/scripts.pory"
	walk_down
# 282 "data/maps/MtChimney/scripts.pory"
	walk_down
# 283 "data/maps/MtChimney/scripts.pory"
	step_end
# 284 "data/maps/MtChimney/scripts.pory"

# 285 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerNorth:
# 286 "data/maps/MtChimney/scripts.pory"
	walk_up
# 287 "data/maps/MtChimney/scripts.pory"
	walk_up
# 288 "data/maps/MtChimney/scripts.pory"
	walk_up
# 289 "data/maps/MtChimney/scripts.pory"
	walk_up
# 290 "data/maps/MtChimney/scripts.pory"
	walk_up
# 291 "data/maps/MtChimney/scripts.pory"
	walk_right
# 292 "data/maps/MtChimney/scripts.pory"
	walk_right
# 293 "data/maps/MtChimney/scripts.pory"
	step_end
# 294 "data/maps/MtChimney/scripts.pory"

# 295 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitNorth:
# 296 "data/maps/MtChimney/scripts.pory"
	walk_left
# 297 "data/maps/MtChimney/scripts.pory"
	walk_left
# 298 "data/maps/MtChimney/scripts.pory"
	walk_down
# 299 "data/maps/MtChimney/scripts.pory"
	walk_down
# 300 "data/maps/MtChimney/scripts.pory"
	walk_down
# 301 "data/maps/MtChimney/scripts.pory"
	walk_down
# 302 "data/maps/MtChimney/scripts.pory"
	walk_down
# 303 "data/maps/MtChimney/scripts.pory"
	walk_down
# 304 "data/maps/MtChimney/scripts.pory"
	walk_down
# 305 "data/maps/MtChimney/scripts.pory"
	step_end
# 306 "data/maps/MtChimney/scripts.pory"

# 307 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused1:
# 308 "data/maps/MtChimney/scripts.pory"
	walk_down
# 309 "data/maps/MtChimney/scripts.pory"
	walk_down
# 310 "data/maps/MtChimney/scripts.pory"
	walk_down
# 311 "data/maps/MtChimney/scripts.pory"
	walk_down
# 312 "data/maps/MtChimney/scripts.pory"
	walk_down
# 313 "data/maps/MtChimney/scripts.pory"
	walk_left
# 314 "data/maps/MtChimney/scripts.pory"
	walk_left
# 315 "data/maps/MtChimney/scripts.pory"
	walk_down
# 316 "data/maps/MtChimney/scripts.pory"
	walk_down
# 317 "data/maps/MtChimney/scripts.pory"
	walk_down
# 318 "data/maps/MtChimney/scripts.pory"
	walk_down
# 319 "data/maps/MtChimney/scripts.pory"
	walk_left
# 320 "data/maps/MtChimney/scripts.pory"
	walk_left
# 321 "data/maps/MtChimney/scripts.pory"
	walk_left
# 322 "data/maps/MtChimney/scripts.pory"
	walk_left
# 323 "data/maps/MtChimney/scripts.pory"
	walk_left
# 324 "data/maps/MtChimney/scripts.pory"
	walk_down
# 325 "data/maps/MtChimney/scripts.pory"
	step_end
# 326 "data/maps/MtChimney/scripts.pory"

# 327 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused2:
# 328 "data/maps/MtChimney/scripts.pory"
	walk_down
# 329 "data/maps/MtChimney/scripts.pory"
	walk_down
# 330 "data/maps/MtChimney/scripts.pory"
	walk_down
# 331 "data/maps/MtChimney/scripts.pory"
	walk_down
# 332 "data/maps/MtChimney/scripts.pory"
	walk_left
# 333 "data/maps/MtChimney/scripts.pory"
	walk_left
# 334 "data/maps/MtChimney/scripts.pory"
	walk_left
# 335 "data/maps/MtChimney/scripts.pory"
	walk_down
# 336 "data/maps/MtChimney/scripts.pory"
	step_end
# 337 "data/maps/MtChimney/scripts.pory"

# 338 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused3:
# 339 "data/maps/MtChimney/scripts.pory"
	walk_right
# 340 "data/maps/MtChimney/scripts.pory"
	walk_down
# 341 "data/maps/MtChimney/scripts.pory"
	walk_down
# 342 "data/maps/MtChimney/scripts.pory"
	walk_down
# 343 "data/maps/MtChimney/scripts.pory"
	walk_down
# 344 "data/maps/MtChimney/scripts.pory"
	walk_left
# 345 "data/maps/MtChimney/scripts.pory"
	walk_left
# 346 "data/maps/MtChimney/scripts.pory"
	walk_left
# 347 "data/maps/MtChimney/scripts.pory"
	walk_left
# 348 "data/maps/MtChimney/scripts.pory"
	walk_left
# 349 "data/maps/MtChimney/scripts.pory"
	walk_down
# 350 "data/maps/MtChimney/scripts.pory"
	walk_down
# 351 "data/maps/MtChimney/scripts.pory"
	walk_down
# 352 "data/maps/MtChimney/scripts.pory"
	walk_down
# 353 "data/maps/MtChimney/scripts.pory"
	step_end
# 354 "data/maps/MtChimney/scripts.pory"

# 355 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused4:
# 356 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 357 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 358 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 359 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 360 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 361 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 362 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 363 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 364 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 365 "data/maps/MtChimney/scripts.pory"
	walk_left
# 366 "data/maps/MtChimney/scripts.pory"
	walk_left
# 367 "data/maps/MtChimney/scripts.pory"
	walk_down
# 368 "data/maps/MtChimney/scripts.pory"
	walk_down
# 369 "data/maps/MtChimney/scripts.pory"
	walk_down
# 370 "data/maps/MtChimney/scripts.pory"
	walk_left
# 371 "data/maps/MtChimney/scripts.pory"
	walk_left
# 372 "data/maps/MtChimney/scripts.pory"
	walk_down
# 373 "data/maps/MtChimney/scripts.pory"
	walk_down
# 374 "data/maps/MtChimney/scripts.pory"
	walk_left
# 375 "data/maps/MtChimney/scripts.pory"
	walk_left
# 376 "data/maps/MtChimney/scripts.pory"
	walk_left
# 377 "data/maps/MtChimney/scripts.pory"
	walk_left
# 378 "data/maps/MtChimney/scripts.pory"
	walk_left
# 379 "data/maps/MtChimney/scripts.pory"
	walk_down
# 380 "data/maps/MtChimney/scripts.pory"
	step_end
# 381 "data/maps/MtChimney/scripts.pory"

# 382 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused5:
# 383 "data/maps/MtChimney/scripts.pory"
	delay_16
# 384 "data/maps/MtChimney/scripts.pory"
	delay_16
# 385 "data/maps/MtChimney/scripts.pory"
	delay_16
# 386 "data/maps/MtChimney/scripts.pory"
	walk_down
# 387 "data/maps/MtChimney/scripts.pory"
	walk_down
# 388 "data/maps/MtChimney/scripts.pory"
	walk_down
# 389 "data/maps/MtChimney/scripts.pory"
	walk_left
# 390 "data/maps/MtChimney/scripts.pory"
	walk_left
# 391 "data/maps/MtChimney/scripts.pory"
	walk_left
# 392 "data/maps/MtChimney/scripts.pory"
	walk_down
# 393 "data/maps/MtChimney/scripts.pory"
	step_end
# 394 "data/maps/MtChimney/scripts.pory"

# 395 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused6:
# 396 "data/maps/MtChimney/scripts.pory"
	delay_16
# 397 "data/maps/MtChimney/scripts.pory"
	walk_left
# 398 "data/maps/MtChimney/scripts.pory"
	walk_down
# 399 "data/maps/MtChimney/scripts.pory"
	walk_down
# 400 "data/maps/MtChimney/scripts.pory"
	walk_down
# 401 "data/maps/MtChimney/scripts.pory"
	walk_down
# 402 "data/maps/MtChimney/scripts.pory"
	walk_left
# 403 "data/maps/MtChimney/scripts.pory"
	walk_left
# 404 "data/maps/MtChimney/scripts.pory"
	walk_left
# 405 "data/maps/MtChimney/scripts.pory"
	walk_left
# 406 "data/maps/MtChimney/scripts.pory"
	walk_left
# 407 "data/maps/MtChimney/scripts.pory"
	walk_down
# 408 "data/maps/MtChimney/scripts.pory"
	walk_down
# 409 "data/maps/MtChimney/scripts.pory"
	walk_down
# 410 "data/maps/MtChimney/scripts.pory"
	walk_down
# 411 "data/maps/MtChimney/scripts.pory"
	step_end
# 412 "data/maps/MtChimney/scripts.pory"

# 413 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused7:
# 414 "data/maps/MtChimney/scripts.pory"
	delay_16
# 415 "data/maps/MtChimney/scripts.pory"
	walk_left
# 416 "data/maps/MtChimney/scripts.pory"
	walk_left
# 417 "data/maps/MtChimney/scripts.pory"
	walk_down
# 418 "data/maps/MtChimney/scripts.pory"
	walk_down
# 419 "data/maps/MtChimney/scripts.pory"
	walk_down
# 420 "data/maps/MtChimney/scripts.pory"
	walk_left
# 421 "data/maps/MtChimney/scripts.pory"
	walk_left
# 422 "data/maps/MtChimney/scripts.pory"
	walk_down
# 423 "data/maps/MtChimney/scripts.pory"
	walk_down
# 424 "data/maps/MtChimney/scripts.pory"
	walk_left
# 425 "data/maps/MtChimney/scripts.pory"
	walk_left
# 426 "data/maps/MtChimney/scripts.pory"
	walk_left
# 427 "data/maps/MtChimney/scripts.pory"
	walk_left
# 428 "data/maps/MtChimney/scripts.pory"
	walk_left
# 429 "data/maps/MtChimney/scripts.pory"
	walk_down
# 430 "data/maps/MtChimney/scripts.pory"
	step_end
# 431 "data/maps/MtChimney/scripts.pory"

# 432 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused8:
# 433 "data/maps/MtChimney/scripts.pory"
	delay_16
# 434 "data/maps/MtChimney/scripts.pory"
	walk_down
# 435 "data/maps/MtChimney/scripts.pory"
	walk_left
# 436 "data/maps/MtChimney/scripts.pory"
	walk_left
# 437 "data/maps/MtChimney/scripts.pory"
	walk_left
# 438 "data/maps/MtChimney/scripts.pory"
	walk_left
# 439 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_down
# 440 "data/maps/MtChimney/scripts.pory"
	step_end
# 441 "data/maps/MtChimney/scripts.pory"

# 442 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused9:
# 443 "data/maps/MtChimney/scripts.pory"
	walk_down
# 444 "data/maps/MtChimney/scripts.pory"
	walk_down
# 445 "data/maps/MtChimney/scripts.pory"
	walk_down
# 446 "data/maps/MtChimney/scripts.pory"
	walk_down
# 447 "data/maps/MtChimney/scripts.pory"
	walk_left
# 448 "data/maps/MtChimney/scripts.pory"
	walk_left
# 449 "data/maps/MtChimney/scripts.pory"
	walk_left
# 450 "data/maps/MtChimney/scripts.pory"
	walk_left
# 451 "data/maps/MtChimney/scripts.pory"
	walk_left
# 452 "data/maps/MtChimney/scripts.pory"
	walk_down
# 453 "data/maps/MtChimney/scripts.pory"
	walk_down
# 454 "data/maps/MtChimney/scripts.pory"
	walk_down
# 455 "data/maps/MtChimney/scripts.pory"
	walk_down
# 456 "data/maps/MtChimney/scripts.pory"
	step_end
# 457 "data/maps/MtChimney/scripts.pory"

# 458 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused10:
# 459 "data/maps/MtChimney/scripts.pory"
	walk_down
# 460 "data/maps/MtChimney/scripts.pory"
	step_end
# 461 "data/maps/MtChimney/scripts.pory"

# 462 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused11:
# 463 "data/maps/MtChimney/scripts.pory"
	walk_down
# 464 "data/maps/MtChimney/scripts.pory"
	walk_down
# 465 "data/maps/MtChimney/scripts.pory"
	walk_down
# 466 "data/maps/MtChimney/scripts.pory"
	walk_down
# 467 "data/maps/MtChimney/scripts.pory"
	walk_down
# 468 "data/maps/MtChimney/scripts.pory"
	walk_down
# 469 "data/maps/MtChimney/scripts.pory"
	walk_down
# 470 "data/maps/MtChimney/scripts.pory"
	step_end
# 471 "data/maps/MtChimney/scripts.pory"

# 472 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused12:
# 473 "data/maps/MtChimney/scripts.pory"
	delay_16
# 474 "data/maps/MtChimney/scripts.pory"
	delay_16
# 475 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 476 "data/maps/MtChimney/scripts.pory"
	delay_16
# 477 "data/maps/MtChimney/scripts.pory"
	walk_down
# 478 "data/maps/MtChimney/scripts.pory"
	walk_down
# 479 "data/maps/MtChimney/scripts.pory"
	walk_down
# 480 "data/maps/MtChimney/scripts.pory"
	walk_down
# 481 "data/maps/MtChimney/scripts.pory"
	walk_down
# 482 "data/maps/MtChimney/scripts.pory"
	step_end
# 483 "data/maps/MtChimney/scripts.pory"

# 484 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused13:
# 485 "data/maps/MtChimney/scripts.pory"
	delay_16
# 486 "data/maps/MtChimney/scripts.pory"
	delay_16
# 487 "data/maps/MtChimney/scripts.pory"
	delay_16
# 488 "data/maps/MtChimney/scripts.pory"
	delay_16
# 489 "data/maps/MtChimney/scripts.pory"
	delay_16
# 490 "data/maps/MtChimney/scripts.pory"
	delay_16
# 491 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 492 "data/maps/MtChimney/scripts.pory"
	delay_16
# 493 "data/maps/MtChimney/scripts.pory"
	walk_down
# 494 "data/maps/MtChimney/scripts.pory"
	walk_down
# 495 "data/maps/MtChimney/scripts.pory"
	step_end
# 496 "data/maps/MtChimney/scripts.pory"

# 497 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused14:
# 498 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 499 "data/maps/MtChimney/scripts.pory"
	walk_fast_left
# 500 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 501 "data/maps/MtChimney/scripts.pory"
	face_right
# 502 "data/maps/MtChimney/scripts.pory"
	step_end
# 503 "data/maps/MtChimney/scripts.pory"

# 504 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused15:
# 505 "data/maps/MtChimney/scripts.pory"
	walk_left
# 506 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_right
# 507 "data/maps/MtChimney/scripts.pory"
	delay_16
# 508 "data/maps/MtChimney/scripts.pory"
	step_end
# 509 "data/maps/MtChimney/scripts.pory"

# 510 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt1::
# 511 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
# 512 "data/maps/MtChimney/scripts.pory"
	end
# 513 "data/maps/MtChimney/scripts.pory"

# 514 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt2::
# 515 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
# 516 "data/maps/MtChimney/scripts.pory"
	end
# 517 "data/maps/MtChimney/scripts.pory"

# 518 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt3::
# 519 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN
# 520 "data/maps/MtChimney/scripts.pory"
	end
# 521 "data/maps/MtChimney/scripts.pory"

# 522 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha::
# 523 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaIntro, MtChimney_Text_TabithaDefeat
# 524 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 525 "data/maps/MtChimney/scripts.pory"
	end
# 526 "data/maps/MtChimney/scripts.pory"

# 527 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt2::
# 528 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_2, MtChimney_Text_Grunt2Intro, MtChimney_Text_Grunt2Defeat
# 529 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 530 "data/maps/MtChimney/scripts.pory"
	end
# 531 "data/maps/MtChimney/scripts.pory"

# 532 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt1::
# 533 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
# 534 "data/maps/MtChimney/scripts.pory"
	end
# 535 "data/maps/MtChimney/scripts.pory"

# 536 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt2::
# 537 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
# 538 "data/maps/MtChimney/scripts.pory"
	end
# 539 "data/maps/MtChimney/scripts.pory"

# 540 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt3::
# 541 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN
# 542 "data/maps/MtChimney/scripts.pory"
	end
# 543 "data/maps/MtChimney/scripts.pory"

# 544 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt4::
# 545 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN
# 546 "data/maps/MtChimney/scripts.pory"
	end
# 547 "data/maps/MtChimney/scripts.pory"

# 548 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt5::
# 549 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
# 550 "data/maps/MtChimney/scripts.pory"
	end
# 551 "data/maps/MtChimney/scripts.pory"

# 552 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt6::
# 553 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
# 554 "data/maps/MtChimney/scripts.pory"
	end

MtChimney_EventScript_BusyMagmaGrunt7::
# 558 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DidntExpectKid, MSGBOX_SIGN
	end


# 562 "data/maps/MtChimney/scripts.pory"

# 563 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MagmaPoochyena::
# 564 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bufoh, MSGBOX_SIGN
# 565 "data/maps/MtChimney/scripts.pory"
	end
# 566 "data/maps/MtChimney/scripts.pory"

# 567 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_AquaPoochyena::
# 568 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bushaa, MSGBOX_SIGN
# 569 "data/maps/MtChimney/scripts.pory"
	end
# 570 "data/maps/MtChimney/scripts.pory"

# 571 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine::
# 572 "data/maps/MtChimney/scripts.pory"
	lockall
# 573 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MachineOn
# 574 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_MachineOff
# 575 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
# 576 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_LeaveMeteoriteAlone
# 577 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
# 578 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_METEORITE
# 579 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 580 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECEIVED_METEORITE
# 581 "data/maps/MtChimney/scripts.pory"
	releaseall
# 582 "data/maps/MtChimney/scripts.pory"
	end
# 583 "data/maps/MtChimney/scripts.pory"

# 584 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LeaveMeteoriteAlone::
# 585 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
# 586 "data/maps/MtChimney/scripts.pory"
	releaseall
# 587 "data/maps/MtChimney/scripts.pory"
	end
# 588 "data/maps/MtChimney/scripts.pory"

# 589 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOff::
# 590 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
# 591 "data/maps/MtChimney/scripts.pory"
	releaseall
# 592 "data/maps/MtChimney/scripts.pory"
	end
# 593 "data/maps/MtChimney/scripts.pory"

# 594 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOn::
# 595 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MetoriteFittedOnMachine, MSGBOX_DEFAULT
# 596 "data/maps/MtChimney/scripts.pory"
	releaseall
# 597 "data/maps/MtChimney/scripts.pory"
	end
# 598 "data/maps/MtChimney/scripts.pory"

# 599 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RouteSign::
# 600 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
# 601 "data/maps/MtChimney/scripts.pory"
	end
# 602 "data/maps/MtChimney/scripts.pory"

# 603 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shelby::
# 604 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat, MtChimney_EventScript_DefeatedShelby
# 605 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 606 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RematchShelby
# 607 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
# 608 "data/maps/MtChimney/scripts.pory"
	release
# 609 "data/maps/MtChimney/scripts.pory"
	end
# 610 "data/maps/MtChimney/scripts.pory"

# 611 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DefeatedShelby::
# 612 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 613 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 614 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
# 615 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SHELBY_1
# 616 "data/maps/MtChimney/scripts.pory"
	release
# 617 "data/maps/MtChimney/scripts.pory"
	end
# 618 "data/maps/MtChimney/scripts.pory"

# 619 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RematchShelby::
# 620 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
# 621 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
# 622 "data/maps/MtChimney/scripts.pory"
	end
# 623 "data/maps/MtChimney/scripts.pory"

# 624 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Melissa::
# 625 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
# 626 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
# 627 "data/maps/MtChimney/scripts.pory"
	end
# 628 "data/maps/MtChimney/scripts.pory"

# 629 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sheila::
# 630 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
# 631 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
# 632 "data/maps/MtChimney/scripts.pory"
	end
# 633 "data/maps/MtChimney/scripts.pory"

# 634 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shirley::
# 635 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 636 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
# 637 "data/maps/MtChimney/scripts.pory"
	end
# 638 "data/maps/MtChimney/scripts.pory"

# 639 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1::
# 640 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_1, MtChimney_Text_Grunt1Intro, MtChimney_Text_Grunt1Defeat
# 641 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 642 "data/maps/MtChimney/scripts.pory"
	end
# 643 "data/maps/MtChimney/scripts.pory"

# 644 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sawyer::
# 645 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
# 646 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 647 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_SawyerRematch
# 648 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
# 649 "data/maps/MtChimney/scripts.pory"
	release
# 650 "data/maps/MtChimney/scripts.pory"
	end
# 651 "data/maps/MtChimney/scripts.pory"

# 652 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerDefeated::
# 653 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 654 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 655 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
# 656 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SAWYER_1
# 657 "data/maps/MtChimney/scripts.pory"
	release
# 658 "data/maps/MtChimney/scripts.pory"
	end
# 659 "data/maps/MtChimney/scripts.pory"

# 660 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerRematch::
# 661 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
# 662 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
# 663 "data/maps/MtChimney/scripts.pory"
	end
# 664 "data/maps/MtChimney/scripts.pory"

# 665 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoriteWillActivateVolcano:
# 666 "data/maps/MtChimney/scripts.pory"
	.string "The power contained in the METEORITE…\p"
# 667 "data/maps/MtChimney/scripts.pory"
	.string "By amplifying its power with this\n"
# 668 "data/maps/MtChimney/scripts.pory"
	.string "machine, MT. CHIMNEY's volcanic\l"
# 669 "data/maps/MtChimney/scripts.pory"
	.string "activity will instantly intensify…\p"
# 670 "data/maps/MtChimney/scripts.pory"
	.string "Its energy will grow deep inside\n"
# 671 "data/maps/MtChimney/scripts.pory"
	.string "the crater and…\l"
# 672 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…$"
# 673 "data/maps/MtChimney/scripts.pory"

# 674 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieIntro:
# 675 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: Hm?\n"
# 676 "data/maps/MtChimney/scripts.pory"
	.string "Who are you?\p"
# 677 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\n"
# 678 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\p"
# 679 "data/maps/MtChimney/scripts.pory"
	.string "I'd heard ARCHIE bemoaning a child\n"
# 680 "data/maps/MtChimney/scripts.pory"
	.string "who's been meddling in TEAM AQUA's\l"
# 681 "data/maps/MtChimney/scripts.pory"
	.string "affairs.\p"
# 682 "data/maps/MtChimney/scripts.pory"
	.string "It must be you he meant.\p"
# 683 "data/maps/MtChimney/scripts.pory"
	.string "Humph! So you're thinking of\n"
# 684 "data/maps/MtChimney/scripts.pory"
	.string "interfering with us, TEAM MAGMA?\p"
# 685 "data/maps/MtChimney/scripts.pory"
	.string "Now you listen.\n"
# 686 "data/maps/MtChimney/scripts.pory"
	.string "Long ago, living things used the\l"
# 687 "data/maps/MtChimney/scripts.pory"
	.string "land to live and grow.\p"
# 688 "data/maps/MtChimney/scripts.pory"
	.string "That is why land is all important!\n"
# 689 "data/maps/MtChimney/scripts.pory"
	.string "It is the cradle of all!\p"
# 690 "data/maps/MtChimney/scripts.pory"
	.string "That is why TEAM MAGMA is dedicated\n"
# 691 "data/maps/MtChimney/scripts.pory"
	.string "to the expansion of the land mass.\p"
# 692 "data/maps/MtChimney/scripts.pory"
	.string "It is for further advancement of\n"
# 693 "data/maps/MtChimney/scripts.pory"
	.string "humankind and POKéMON!\p"
# 694 "data/maps/MtChimney/scripts.pory"
	.string "And for that, we need the power of\n"
# 695 "data/maps/MtChimney/scripts.pory"
	.string "what sleeps within this mountain…\p"
# 696 "data/maps/MtChimney/scripts.pory"
	.string "Oh! There was no need for you to\n"
# 697 "data/maps/MtChimney/scripts.pory"
	.string "learn that much.\p"
# 698 "data/maps/MtChimney/scripts.pory"
	.string "But, no matter!\n"
# 699 "data/maps/MtChimney/scripts.pory"
	.string "I'll teach you the consequences of\l"
# 700 "data/maps/MtChimney/scripts.pory"
	.string "meddling in our grand design!$"
# 701 "data/maps/MtChimney/scripts.pory"

# 702 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieDefeat:
# 703 "data/maps/MtChimney/scripts.pory"
	.string "What?!\p"
# 704 "data/maps/MtChimney/scripts.pory"
	.string "I, MAXIE, was caught off guard?!$"
# 705 "data/maps/MtChimney/scripts.pory"

# 706 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieYouHaventSeenLastOfMagma:
# 707 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: But, enough.\n"
# 708 "data/maps/MtChimney/scripts.pory"
	.string "I will back off this time.\p"
# 709 "data/maps/MtChimney/scripts.pory"
	.string "But don't think that this is the last\n"
# 710 "data/maps/MtChimney/scripts.pory"
	.string "you've seen of TEAM MAGMA.\p"
# 711 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…\p"
# 712 "data/maps/MtChimney/scripts.pory"
	.string "Even without the METEORITE, if we\n"
# 713 "data/maps/MtChimney/scripts.pory"
	.string "obtain that ORB… Fufufu…$"
# 714 "data/maps/MtChimney/scripts.pory"

# 715 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaIntro:
# 716 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe!\p"
# 717 "data/maps/MtChimney/scripts.pory"
	.string "So you've come all the way here!\p"
# 718 "data/maps/MtChimney/scripts.pory"
	.string "But you're too late!\n"
# 719 "data/maps/MtChimney/scripts.pory"
	.string "I've already delivered the METEORITE\l"
# 720 "data/maps/MtChimney/scripts.pory"
	.string "from METEOR FALLS to the BOSS!$"
# 721 "data/maps/MtChimney/scripts.pory"

# 722 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaDefeat:
# 723 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…\p"
# 724 "data/maps/MtChimney/scripts.pory"
	.string "Even though I've lost, if our leader\n"
# 725 "data/maps/MtChimney/scripts.pory"
	.string "awakens that thing…$"
# 726 "data/maps/MtChimney/scripts.pory"

# 727 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaPostBattle:
# 728 "data/maps/MtChimney/scripts.pory"
	.string "BOSS, hurry!\n"
# 729 "data/maps/MtChimney/scripts.pory"
	.string "Give it the METEORITE's energy!\p"
# 730 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…$"
# 731 "data/maps/MtChimney/scripts.pory"

# 732 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Intro:
# 733 "data/maps/MtChimney/scripts.pory"
	.string "We of TEAM MAGMA are working hard for\n"
# 734 "data/maps/MtChimney/scripts.pory"
	.string "everyone's sake.\p"
# 735 "data/maps/MtChimney/scripts.pory"
	.string "Like, if that thing's power made more\n"
# 736 "data/maps/MtChimney/scripts.pory"
	.string "land, there'd be more places to live.\p"
# 737 "data/maps/MtChimney/scripts.pory"
	.string "Everyone'd be happy!$"
# 738 "data/maps/MtChimney/scripts.pory"

# 739 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Defeat:
# 740 "data/maps/MtChimney/scripts.pory"
	.string "Hunh?\n"
# 741 "data/maps/MtChimney/scripts.pory"
	.string "What do you mean I lost?$"
# 742 "data/maps/MtChimney/scripts.pory"

# 743 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2PostBattle:
# 744 "data/maps/MtChimney/scripts.pory"
	.string "Our BOSS says, “It will make everyone\n"
# 745 "data/maps/MtChimney/scripts.pory"
	.string "happy.”\p"
# 746 "data/maps/MtChimney/scripts.pory"
	.string "But why does everyone keep getting\n"
# 747 "data/maps/MtChimney/scripts.pory"
	.string "in our way?$"
# 748 "data/maps/MtChimney/scripts.pory"

# 749 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Intro:
# 750 "data/maps/MtChimney/scripts.pory"
	.string "If there were more land, I'd be able\n"
# 751 "data/maps/MtChimney/scripts.pory"
	.string "to get a big house of my own!\p"
# 752 "data/maps/MtChimney/scripts.pory"
	.string "I'm going to build it on hardened lava!$"
# 753 "data/maps/MtChimney/scripts.pory"

# 754 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Defeat:
# 755 "data/maps/MtChimney/scripts.pory"
	.string "My dream of a big house…$"
# 756 "data/maps/MtChimney/scripts.pory"

# 757 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1PostBattle:
# 758 "data/maps/MtChimney/scripts.pory"
	.string "A kid like you, you ought to be\n"
# 759 "data/maps/MtChimney/scripts.pory"
	.string "splashing about in the waves!$"
# 760 "data/maps/MtChimney/scripts.pory"

# 761 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TeamAquaAlwaysMessingWithPlans:
# 762 "data/maps/MtChimney/scripts.pory"
	.string "That annoying TEAM AQUA…\n"
# 763 "data/maps/MtChimney/scripts.pory"
	.string "They always mess with our plans!$"
# 764 "data/maps/MtChimney/scripts.pory"

# 765 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoritesPackAmazingPower:
# 766 "data/maps/MtChimney/scripts.pory"
	.string "METEORITES pack amazing power!$"
# 767 "data/maps/MtChimney/scripts.pory"

# 768 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouBetterNotMessWithUs:
# 769 "data/maps/MtChimney/scripts.pory"
	.string "You'd better not mess with us!\p"
# 770 "data/maps/MtChimney/scripts.pory"
	.string "We're trying to awaken that thing\n"
# 771 "data/maps/MtChimney/scripts.pory"
	.string "for the benefit of everyone!$"
# 772 "data/maps/MtChimney/scripts.pory"

# 773 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_AquasNameSimilar:
# 774 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM MAGMA!\p"
# 775 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM AQUA!\p"
# 776 "data/maps/MtChimney/scripts.pory"
	.string "It totally annoys me that they'd\n"
# 777 "data/maps/MtChimney/scripts.pory"
	.string "use a name like ours!$"
# 778 "data/maps/MtChimney/scripts.pory"

# 779 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_DouseThemInFire:
# 780 "data/maps/MtChimney/scripts.pory"
	.string "Yeah!\n"
# 781 "data/maps/MtChimney/scripts.pory"
	.string "Douse them in fire!$"
# 782 "data/maps/MtChimney/scripts.pory"

# 783 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_KeepMakingMoreLand:
# 784 "data/maps/MtChimney/scripts.pory"
	.string "We're going to keep making more land!$"
# 785 "data/maps/MtChimney/scripts.pory"

# 786 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bufoh:
# 787 "data/maps/MtChimney/scripts.pory"
	.string "Bufoh!$"
# 788 "data/maps/MtChimney/scripts.pory"

# 789 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieGoStopTeamMagma:
# 790 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grr, {PLAYER}!\n"
# 791 "data/maps/MtChimney/scripts.pory"
	.string "I should've guessed you'd show up!\p"
# 792 "data/maps/MtChimney/scripts.pory"
	.string "See for yourself what the fanatics\n"
# 793 "data/maps/MtChimney/scripts.pory"
	.string "of TEAM MAGMA are up to!\p"
# 794 "data/maps/MtChimney/scripts.pory"
	.string "They're trying to inject the stolen\n"
# 795 "data/maps/MtChimney/scripts.pory"
	.string "METEORITE's power into the volcano!\p"
# 796 "data/maps/MtChimney/scripts.pory"
	.string "Doing something like that will cause\n"
# 797 "data/maps/MtChimney/scripts.pory"
	.string "the volcano's eruption!$"
# 798 "data/maps/MtChimney/scripts.pory"

# 799 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieIHaveMyHandsFull:
# 800 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grrr…\p"
# 801 "data/maps/MtChimney/scripts.pory"
	.string "I want to stop that MAXIE,\n"
# 802 "data/maps/MtChimney/scripts.pory"
	.string "but I can't!\p"
# 803 "data/maps/MtChimney/scripts.pory"
	.string "Not when I have my hands full battling\n"
# 804 "data/maps/MtChimney/scripts.pory"
	.string "three opponents at once!$"
# 805 "data/maps/MtChimney/scripts.pory"

# 806 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieThankYou:
# 807 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: {PLAYER}!\n"
# 808 "data/maps/MtChimney/scripts.pory"
	.string "Thank you!\p"
# 809 "data/maps/MtChimney/scripts.pory"
	.string "With your help, we thwarted TEAM\n"
# 810 "data/maps/MtChimney/scripts.pory"
	.string "MAGMA's destructive plan!\p"
# 811 "data/maps/MtChimney/scripts.pory"
	.string "But… You…\n"
# 812 "data/maps/MtChimney/scripts.pory"
	.string "Whose side are you on?\p"
# 813 "data/maps/MtChimney/scripts.pory"
	.string "Ah, it doesn't matter.\p"
# 814 "data/maps/MtChimney/scripts.pory"
	.string "We will remain vigilant and keep up\n"
# 815 "data/maps/MtChimney/scripts.pory"
	.string "our pursuit of TEAM MAGMA.\p"
# 816 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER}, we shall meet again!$"
# 817 "data/maps/MtChimney/scripts.pory"

# 818 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmaOutnumbersUs:
# 819 "data/maps/MtChimney/scripts.pory"
	.string "Darn… TEAM MAGMA outnumbers us!\n"
# 820 "data/maps/MtChimney/scripts.pory"
	.string "We can't keep up with them!$"
# 821 "data/maps/MtChimney/scripts.pory"

# 822 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LessHabitatForWaterPokemon:
# 823 "data/maps/MtChimney/scripts.pory"
	.string "If they expand the land, there'll be\n"
# 824 "data/maps/MtChimney/scripts.pory"
	.string "less habitats for WATER POKéMON!$"
# 825 "data/maps/MtChimney/scripts.pory"

# 826 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmasNameSimilar:
# 827 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM AQUA!\p"
# 828 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM MAGMA!\p"
# 829 "data/maps/MtChimney/scripts.pory"
	.string "It burns me up that they'd use such\n"
# 830 "data/maps/MtChimney/scripts.pory"
	.string "a confusing name!$"
# 831 "data/maps/MtChimney/scripts.pory"

# 832 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bushaa:
# 833 "data/maps/MtChimney/scripts.pory"
	.string "Bushaa!$"
# 834 "data/maps/MtChimney/scripts.pory"

# 835 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LavaCookiesJust200:
# 836 "data/maps/MtChimney/scripts.pory"
	.string "LAVA COOKIES are MT. CHIMNEY's local\n"
# 837 "data/maps/MtChimney/scripts.pory"
	.string "specialty.\p"
# 838 "data/maps/MtChimney/scripts.pory"
	.string "Try one. It's just ¥200.$"
# 839 "data/maps/MtChimney/scripts.pory"

# 840 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ThankYouDear:
# 841 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, dear!$"
# 842 "data/maps/MtChimney/scripts.pory"

# 843 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouveNotGotTheMoney:
# 844 "data/maps/MtChimney/scripts.pory"
	.string "Oh, dear. You can't buy a thing if\n"
# 845 "data/maps/MtChimney/scripts.pory"
	.string "you've not got the money.$"
# 846 "data/maps/MtChimney/scripts.pory"

# 847 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_OhFineThen:
# 848 "data/maps/MtChimney/scripts.pory"
	.string "Oh, fine then.$"
# 849 "data/maps/MtChimney/scripts.pory"

# 850 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MetoriteFittedOnMachine:
# 851 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 852 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 853 "data/maps/MtChimney/scripts.pory"
	.string "The machine seems to be storing\n"
# 854 "data/maps/MtChimney/scripts.pory"
	.string "energy in the METEORITE.$"
# 855 "data/maps/MtChimney/scripts.pory"

# 856 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RemoveTheMeteorite:
# 857 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 858 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 859 "data/maps/MtChimney/scripts.pory"
	.string "Do you want to remove the METEORITE?$"
# 860 "data/maps/MtChimney/scripts.pory"

# 861 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerRemovedMeteorite:
# 862 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} removed the METEORITE from\n"
# 863 "data/maps/MtChimney/scripts.pory"
	.string "the mysterious machine.$"
# 864 "data/maps/MtChimney/scripts.pory"

# 865 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerLeftMeteorite:
# 866 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} left the METEORITE where\n"
# 867 "data/maps/MtChimney/scripts.pory"
	.string "it was.$"
# 868 "data/maps/MtChimney/scripts.pory"

# 869 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MachineMakesNoResponse:
# 870 "data/maps/MtChimney/scripts.pory"
	.string "This mysterious machine…\n"
# 871 "data/maps/MtChimney/scripts.pory"
	.string "It makes no response whatsoever.$"
# 872 "data/maps/MtChimney/scripts.pory"

# 873 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RouteSign:
# 874 "data/maps/MtChimney/scripts.pory"
	.string "{DOWN_ARROW} JAGGED PATH\n"
# 875 "data/maps/MtChimney/scripts.pory"
	.string "LAVARIDGE TOWN AHEAD$"
# 876 "data/maps/MtChimney/scripts.pory"

# 877 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyIntro:
# 878 "data/maps/MtChimney/scripts.pory"
	.string "I've been to the hot springs and\n"
# 879 "data/maps/MtChimney/scripts.pory"
	.string "refreshed my tired bones.\l"
# 880 "data/maps/MtChimney/scripts.pory"
	.string "Right now I'm feeling strong!$"
# 881 "data/maps/MtChimney/scripts.pory"

# 882 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyDefeat:
# 883 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 884 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 885 "data/maps/MtChimney/scripts.pory"

# 886 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostBattle:
# 887 "data/maps/MtChimney/scripts.pory"
	.string "Well, well, I've lost. I can't call\n"
# 888 "data/maps/MtChimney/scripts.pory"
	.string "myself an EXPERT now, can I?$"
# 889 "data/maps/MtChimney/scripts.pory"

# 890 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRegister:
# 891 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, child. It was fun, as if\n"
# 892 "data/maps/MtChimney/scripts.pory"
	.string "I were battling my own grandchild.\p"
# 893 "data/maps/MtChimney/scripts.pory"
	.string "Please, come see me again for\n"
# 894 "data/maps/MtChimney/scripts.pory"
	.string "a rematch.$"
# 895 "data/maps/MtChimney/scripts.pory"

# 896 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchIntro:
# 897 "data/maps/MtChimney/scripts.pory"
	.string "If you can mesh your heart with those\n"
# 898 "data/maps/MtChimney/scripts.pory"
	.string "of your POKéMON, why, you should be\l"
# 899 "data/maps/MtChimney/scripts.pory"
	.string "able to achieve great things.$"
# 900 "data/maps/MtChimney/scripts.pory"

# 901 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchDefeat:
# 902 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 903 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 904 "data/maps/MtChimney/scripts.pory"

# 905 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostRematch:
# 906 "data/maps/MtChimney/scripts.pory"
	.string "Perhaps your heart has become one\n"
# 907 "data/maps/MtChimney/scripts.pory"
	.string "with the hearts of your POKéMON.$"
# 908 "data/maps/MtChimney/scripts.pory"

# 909 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaIntro:
# 910 "data/maps/MtChimney/scripts.pory"
	.string "I've got the fire in me, baby.\n"
# 911 "data/maps/MtChimney/scripts.pory"
	.string "I can't stand it! I have to battle!$"
# 912 "data/maps/MtChimney/scripts.pory"

# 913 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaDefeat:
# 914 "data/maps/MtChimney/scripts.pory"
	.string "Ooh, that was a scorching-hot match!$"
# 915 "data/maps/MtChimney/scripts.pory"

# 916 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaPostBattle:
# 917 "data/maps/MtChimney/scripts.pory"
	.string "The heat of MT. CHIMNEY warms\n"
# 918 "data/maps/MtChimney/scripts.pory"
	.string "me up, baby!$"
# 919 "data/maps/MtChimney/scripts.pory"

# 920 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaIntro:
# 921 "data/maps/MtChimney/scripts.pory"
	.string "I've finally made it to MT. CHIMNEY.\n"
# 922 "data/maps/MtChimney/scripts.pory"
	.string "I want to make my POKéMON battle!$"
# 923 "data/maps/MtChimney/scripts.pory"

# 924 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaDefeat:
# 925 "data/maps/MtChimney/scripts.pory"
	.string "The way you battle…\n"
# 926 "data/maps/MtChimney/scripts.pory"
	.string "It's like a MT. CHIMNEY eruption!$"
# 927 "data/maps/MtChimney/scripts.pory"

# 928 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaPostBattle:
# 929 "data/maps/MtChimney/scripts.pory"
	.string "Like I said, I've finally made it to\n"
# 930 "data/maps/MtChimney/scripts.pory"
	.string "MT. CHIMNEY. It would be a shame if\l"
# 931 "data/maps/MtChimney/scripts.pory"
	.string "I only do a little sightseeing…\p"
# 932 "data/maps/MtChimney/scripts.pory"
	.string "I want to get in some battles and buy\n"
# 933 "data/maps/MtChimney/scripts.pory"
	.string "COOKIES as souvenirs.$"
# 934 "data/maps/MtChimney/scripts.pory"

# 935 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyIntro:
# 936 "data/maps/MtChimney/scripts.pory"
	.string "Since I bathed in the hot springs,\n"
# 937 "data/maps/MtChimney/scripts.pory"
	.string "I've been feeling great!\l"
# 938 "data/maps/MtChimney/scripts.pory"
	.string "I'm sure I'm going to win!$"
# 939 "data/maps/MtChimney/scripts.pory"

# 940 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyDefeat:
# 941 "data/maps/MtChimney/scripts.pory"
	.string "Yowch!\n"
# 942 "data/maps/MtChimney/scripts.pory"
	.string "I'm getting a chill out of the water.$"
# 943 "data/maps/MtChimney/scripts.pory"

# 944 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyPostBattle:
# 945 "data/maps/MtChimney/scripts.pory"
	.string "I'll have to take another dip in the\n"
# 946 "data/maps/MtChimney/scripts.pory"
	.string "hot springs. Want to join me?\p"
# 947 "data/maps/MtChimney/scripts.pory"
	.string "Just joking!$"
# 948 "data/maps/MtChimney/scripts.pory"

# 949 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerIntro:
# 950 "data/maps/MtChimney/scripts.pory"
	.string "This is one fine mountain! Plenty of\n"
# 951 "data/maps/MtChimney/scripts.pory"
	.string "hot people around for company!$"
# 952 "data/maps/MtChimney/scripts.pory"

# 953 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerDefeat:
# 954 "data/maps/MtChimney/scripts.pory"
	.string "Oh, you're a real firebrand, too!$"
# 955 "data/maps/MtChimney/scripts.pory"

# 956 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostBattle:
# 957 "data/maps/MtChimney/scripts.pory"
	.string "I think I need a dip in LAVARIDGE\n"
# 958 "data/maps/MtChimney/scripts.pory"
	.string "HOT SPRING with the locals!$"
# 959 "data/maps/MtChimney/scripts.pory"

# 960 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRegister:
# 961 "data/maps/MtChimney/scripts.pory"
	.string "I like little fireballs like you.\n"
# 962 "data/maps/MtChimney/scripts.pory"
	.string "Let me register you in my POKéNAV.$"
# 963 "data/maps/MtChimney/scripts.pory"

# 964 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchIntro:
# 965 "data/maps/MtChimney/scripts.pory"
	.string "I'm happily surrounded by hot people\n"
# 966 "data/maps/MtChimney/scripts.pory"
	.string "around these parts. I won't lose!$"
# 967 "data/maps/MtChimney/scripts.pory"

# 968 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchDefeat:
# 969 "data/maps/MtChimney/scripts.pory"
	.string "Gosh, you're still the same\n"
# 970 "data/maps/MtChimney/scripts.pory"
	.string "firebrand as before!$"
# 971 "data/maps/MtChimney/scripts.pory"

# 972 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostRematch:
# 973 "data/maps/MtChimney/scripts.pory"
	.string "Actually, it really is hot here.\n"
# 974 "data/maps/MtChimney/scripts.pory"
	.string "I'm overdressed for these parts.$"

MtChimney_Text_SpencerFigureOutWhatsGoingOn::
# 96 "data/maps/MtChimney/scripts.pory"
	.string "Whoa!\n"
	.string "Things are pretty serious here.\p"
	.string "Let's go figure out what's going on!$"

MtChimney_Text_BrenFigureOutWhatsGoingOn::
# 102 "data/maps/MtChimney/scripts.pory"
	.string "Whoa!\n"
	.string "Things are pretty serious here.\p"
	.string "Let's go figure out what's going on!$"

MtChimney_Text_KyleFigureOutWhatsGoingOn::
# 108 "data/maps/MtChimney/scripts.pory"
	.string "Whoa!\n"
	.string "Things are pretty serious here.\p"
	.string "Let's go figure out what's going on!$"

MtChimney_Text_SpencerFollowing1::
# 114 "data/maps/MtChimney/scripts.pory"
	.string "Let's go figure out what's going on!$"

MtChimney_Text_BrenFollowing1::
# 118 "data/maps/MtChimney/scripts.pory"
	.string "Let's go figure out what's going on!$"

MtChimney_Text_KyleFollowing1::
# 122 "data/maps/MtChimney/scripts.pory"
	.string "Let's go figure out what's going on!$"

MtChimney_Text_SpencerFollowing2::
# 126 "data/maps/MtChimney/scripts.pory"
	.string "Quick!\n"
	.string "We need to stop TEAM MAGMA!$"

MtChimney_Text_BrenFollowing2::
# 131 "data/maps/MtChimney/scripts.pory"
	.string "Quick!\n"
	.string "We need to stop TEAM MAGMA!$"

MtChimney_Text_KyleFollowing2::
# 136 "data/maps/MtChimney/scripts.pory"
	.string "Quick!\n"
	.string "We need to stop TEAM MAGMA!$"

MtChimney_Text_DidntExpectKid::
# 978 "data/maps/MtChimney/scripts.pory"
	.string "I didn't expect to battle a kid.\n"
	.string "How is he so strong?!$"
