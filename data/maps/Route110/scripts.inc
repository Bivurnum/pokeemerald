# 7 "data/maps/Route110/scripts.pory"

# 8 "data/maps/Route110/scripts.pory"
.set LOCALID_CHALLENGE_BIKER, 21
# 9 "data/maps/Route110/scripts.pory"
.set LOCALID_RIVAL2, 28
# 10 "data/maps/Route110/scripts.pory"
.set LOCALID_BIRCH, 35
# 11 "data/maps/Route110/scripts.pory"
.set LOCALID_RIVAL1, 36
# 12 "data/maps/Route110/scripts.pory"
.set LOCALID_RIVAL1FINDER, 37

Route110_MapScripts::
# 16 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_MapScripts_MAP_SCRIPT_ON_RESUME
# 19 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 25 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route110_MapScripts_MAP_SCRIPT_ON_RESUME:
# 17 "data/maps/Route110/scripts.pory"
	special UpdateCyclingRoadState
	return

Route110_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 20 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 21 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_SaveCyclingMusic
# 22 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_ROUTE110_STATE, 0, Route110_EventScript_SetUpItemfinderScene
# 23 "data/maps/Route110/scripts.pory"
	call_if_ge VAR_ROUTE110_STATE, 1, Route110_EventScript_SetUpPostItemfinderRivals
	return

Route110_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 26 "data/maps/Route110/scripts.pory"
	map_script_2 VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_BeginCylcingRoadChallenge
	.2byte 0


Route110_EventScript_SaveCyclingMusic::
# 31 "data/maps/Route110/scripts.pory"
	savebgm MUS_CYCLING
	return


Route110_EventScript_SetUpItemfinderScene::
# 36 "data/maps/Route110/scripts.pory"
	setobjectxyperm 36, 33, 62
# 37 "data/maps/Route110/scripts.pory"
	setobjectxyperm 28, 34, 54
# 38 "data/maps/Route110/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT
	return


Route110_EventScript_SetUpPostItemfinderRivals::
# 42 "data/maps/Route110/scripts.pory"
	setobjectxyperm 28, 3, 32
# 43 "data/maps/Route110/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_LOOK_AROUND
	return


Route110_EventScript_BeginCylcingRoadChallenge::
# 47 "data/maps/Route110/scripts.pory"
	special Special_BeginCyclingRoadChallenge
# 48 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 2
	return


# 52 "data/maps/Route110/scripts.pory"

# 53 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt1::
# 54 "data/maps/Route110/scripts.pory"
	lock
# 55 "data/maps/Route110/scripts.pory"
	faceplayer
# 56 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WeCantTalkAboutAquaActivities, MSGBOX_DEFAULT
# 57 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 58 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route110/scripts.pory"
	release
# 60 "data/maps/Route110/scripts.pory"
	end
# 61 "data/maps/Route110/scripts.pory"

# 62 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt2::
# 63 "data/maps/Route110/scripts.pory"
	lock
# 64 "data/maps/Route110/scripts.pory"
	faceplayer
# 65 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KickUpARuckus, MSGBOX_DEFAULT
# 66 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 67 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route110/scripts.pory"
	release
# 69 "data/maps/Route110/scripts.pory"
	end
# 70 "data/maps/Route110/scripts.pory"

# 71 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt3::
# 72 "data/maps/Route110/scripts.pory"
	lock
# 73 "data/maps/Route110/scripts.pory"
	faceplayer
# 74 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MyFirstJobInAqua, MSGBOX_DEFAULT
# 75 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 76 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 77 "data/maps/Route110/scripts.pory"
	release
# 78 "data/maps/Route110/scripts.pory"
	end
# 79 "data/maps/Route110/scripts.pory"

# 80 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt4::
# 81 "data/maps/Route110/scripts.pory"
	lock
# 82 "data/maps/Route110/scripts.pory"
	faceplayer
# 83 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaActionsBringSmiles, MSGBOX_DEFAULT
# 84 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 85 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 86 "data/maps/Route110/scripts.pory"
	release
# 87 "data/maps/Route110/scripts.pory"
	end
# 88 "data/maps/Route110/scripts.pory"

# 89 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy1::
# 90 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RideBikeAtFullSpeed, MSGBOX_NPC
# 91 "data/maps/Route110/scripts.pory"
	end
# 92 "data/maps/Route110/scripts.pory"

# 93 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGirl1::
# 94 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HairStreamsBehindMe, MSGBOX_NPC
# 95 "data/maps/Route110/scripts.pory"
	end
# 96 "data/maps/Route110/scripts.pory"

# 97 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy1::
# 98 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_YouGotBikeFromRydel, MSGBOX_NPC
# 99 "data/maps/Route110/scripts.pory"
	end
# 100 "data/maps/Route110/scripts.pory"

# 101 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldMan::
# 102 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TwoRoads, MSGBOX_NPC
# 103 "data/maps/Route110/scripts.pory"
	end
# 104 "data/maps/Route110/scripts.pory"

# 105 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldWoman::
# 106 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WalkOnTheLowRoad, MSGBOX_NPC
# 107 "data/maps/Route110/scripts.pory"
	end
# 108 "data/maps/Route110/scripts.pory"

# 109 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy2::
# 110 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BikeTechniques, MSGBOX_NPC
# 111 "data/maps/Route110/scripts.pory"
	end
# 112 "data/maps/Route110/scripts.pory"

# 113 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy2::
# 114 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WhichShouldIChoose, MSGBOX_NPC
# 115 "data/maps/Route110/scripts.pory"
	end
# 116 "data/maps/Route110/scripts.pory"

# 117 "data/maps/Route110/scripts.pory"
Route110_EventScript_SlateportCitySign::
# 118 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SlateportCitySign, MSGBOX_SIGN
# 119 "data/maps/Route110/scripts.pory"
	end
# 120 "data/maps/Route110/scripts.pory"

# 121 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadSign::
# 122 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingRoadSign, MSGBOX_SIGN
# 123 "data/maps/Route110/scripts.pory"
	end
# 124 "data/maps/Route110/scripts.pory"

# 125 "data/maps/Route110/scripts.pory"
Route110_EventScript_VandalizedSign::
# 126 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaWasHere, MSGBOX_SIGN
# 127 "data/maps/Route110/scripts.pory"
	end
# 128 "data/maps/Route110/scripts.pory"

# 129 "data/maps/Route110/scripts.pory"
Route110_EventScript_Route103Sign::
# 130 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_Route103Sign, MSGBOX_SIGN
# 131 "data/maps/Route110/scripts.pory"
	end
# 132 "data/maps/Route110/scripts.pory"

# 133 "data/maps/Route110/scripts.pory"
Route110_EventScript_SeasideParkingSign::
# 134 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SeasideParkingSign, MSGBOX_SIGN
# 135 "data/maps/Route110/scripts.pory"
	end
# 136 "data/maps/Route110/scripts.pory"

# 137 "data/maps/Route110/scripts.pory"
Route110_EventScript_MauvilleCitySign::
# 138 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MauvilleCitySign, MSGBOX_SIGN
# 139 "data/maps/Route110/scripts.pory"
	end
# 140 "data/maps/Route110/scripts.pory"

# 141 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsPrlzSleep::
# 142 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsPrlzSleep, MSGBOX_SIGN
# 143 "data/maps/Route110/scripts.pory"
	end
# 144 "data/maps/Route110/scripts.pory"

# 145 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsRegisterItems::
# 146 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsRegisterItems, MSGBOX_SIGN
# 147 "data/maps/Route110/scripts.pory"
	end
# 148 "data/maps/Route110/scripts.pory"

# 149 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrickHouseSign::
# 150 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrickHouseSign, MSGBOX_SIGN
# 151 "data/maps/Route110/scripts.pory"
	end
# 152 "data/maps/Route110/scripts.pory"

# 153 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadResultsSign::
# 154 "data/maps/Route110/scripts.pory"
	lockall
# 155 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetRecordedCyclingRoadResults
# 156 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route110_EventScript_NoRecordSet
# 157 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BestRecord, MSGBOX_DEFAULT
# 158 "data/maps/Route110/scripts.pory"
	releaseall
# 159 "data/maps/Route110/scripts.pory"
	end
# 160 "data/maps/Route110/scripts.pory"

# 161 "data/maps/Route110/scripts.pory"
Route110_EventScript_NoRecordSet::
# 162 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ThereIsNoRecord, MSGBOX_DEFAULT
# 163 "data/maps/Route110/scripts.pory"
	releaseall
# 164 "data/maps/Route110/scripts.pory"
	end
# 165 "data/maps/Route110/scripts.pory"

# 166 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeGuy::
# 167 "data/maps/Route110/scripts.pory"
	lock
# 168 "data/maps/Route110/scripts.pory"
	faceplayer
# 169 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 170 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route110_EventScript_PlayerRidingAcroBike
# 171 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_CYCLING_CHALLENGE_STATE, 0, Route110_EventScript_PlayerNotRidingBike
# 172 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlwaysAimHigher, MSGBOX_DEFAULT
# 173 "data/maps/Route110/scripts.pory"
	release
# 174 "data/maps/Route110/scripts.pory"
	end
# 175 "data/maps/Route110/scripts.pory"

# 176 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerNotRidingBike::
# 177 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RatedForNumberOfCollisions, MSGBOX_DEFAULT
# 178 "data/maps/Route110/scripts.pory"
	release
# 179 "data/maps/Route110/scripts.pory"
	end
# 180 "data/maps/Route110/scripts.pory"

# 181 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerRidingAcroBike::
# 182 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AcroBikesDoNotQualify, MSGBOX_DEFAULT
# 183 "data/maps/Route110/scripts.pory"
	release
# 184 "data/maps/Route110/scripts.pory"
	end
# 185 "data/maps/Route110/scripts.pory"

# 186 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edward::
# 187 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWARD, Route110_Text_EdwardIntro, Route110_Text_EdwardDefeated
# 188 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwardPostBattle, MSGBOX_AUTOCLOSE
# 189 "data/maps/Route110/scripts.pory"
	end
# 190 "data/maps/Route110/scripts.pory"

# 191 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jaclyn::
# 192 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACLYN, Route110_Text_JaclynIntro, Route110_Text_JaclynDefeated
# 193 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JaclynPostBattle, MSGBOX_AUTOCLOSE
# 194 "data/maps/Route110/scripts.pory"
	end
# 195 "data/maps/Route110/scripts.pory"

# 196 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edwin::
# 197 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWIN_1, Route110_Text_EdwinIntro, Route110_Text_EdwinDefeated, Route110_EventScript_EdwinRegisterMatchCallAfterBattle
# 198 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 199 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_EdwinRematch
# 200 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinPostBattle, MSGBOX_DEFAULT
# 201 "data/maps/Route110/scripts.pory"
	release
# 202 "data/maps/Route110/scripts.pory"
	end
# 203 "data/maps/Route110/scripts.pory"

# 204 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRegisterMatchCallAfterBattle::
# 205 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 206 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 207 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRegister, MSGBOX_DEFAULT
# 208 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_EDWIN_1
# 209 "data/maps/Route110/scripts.pory"
	release
# 210 "data/maps/Route110/scripts.pory"
	end
# 211 "data/maps/Route110/scripts.pory"

# 212 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRematch::
# 213 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_EDWIN_1, Route110_Text_EdwinRematchIntro, Route110_Text_EdwinRematchDefeated
# 214 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRematchPostBattle, MSGBOX_AUTOCLOSE
# 215 "data/maps/Route110/scripts.pory"
	end
# 216 "data/maps/Route110/scripts.pory"

# 217 "data/maps/Route110/scripts.pory"
Route110_EventScript_Dale::
# 218 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_DALE, Route110_Text_DaleIntro, Route110_Text_DaleDefeated
# 219 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_DalePostBattle, MSGBOX_AUTOCLOSE
# 220 "data/maps/Route110/scripts.pory"
	end
# 221 "data/maps/Route110/scripts.pory"

# 222 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jacob::
# 223 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACOB, Route110_Text_JacobIntro, Route110_Text_JacobDefeated
# 224 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
# 225 "data/maps/Route110/scripts.pory"
	end
# 226 "data/maps/Route110/scripts.pory"

# 227 "data/maps/Route110/scripts.pory"
Route110_EventScript_Anthony::
# 228 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ANTHONY, Route110_Text_AnthonyIntro, Route110_Text_AnthonyDefeated
# 229 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 230 "data/maps/Route110/scripts.pory"
	end
# 231 "data/maps/Route110/scripts.pory"

# 232 "data/maps/Route110/scripts.pory"
Route110_EventScript_Benjamin::
# 233 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_BENJAMIN_1, Route110_Text_BenjaminIntro, Route110_Text_BenjaminDefeated, Route110_EventScript_BenjaminRegisterMatchCallAfterBattle
# 234 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 235 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_BenjaminRematch
# 236 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminPostBattle, MSGBOX_DEFAULT
# 237 "data/maps/Route110/scripts.pory"
	release
# 238 "data/maps/Route110/scripts.pory"
	end
# 239 "data/maps/Route110/scripts.pory"

# 240 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRegisterMatchCallAfterBattle::
# 241 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 242 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 243 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRegister, MSGBOX_DEFAULT
# 244 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_BENJAMIN_1
# 245 "data/maps/Route110/scripts.pory"
	release
# 246 "data/maps/Route110/scripts.pory"
	end
# 247 "data/maps/Route110/scripts.pory"

# 248 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRematch::
# 249 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_BENJAMIN_1, Route110_Text_BenjaminRematchIntro, Route110_Text_BenjaminRematchDefeated
# 250 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRematchPostBattle, MSGBOX_AUTOCLOSE
# 251 "data/maps/Route110/scripts.pory"
	end
# 252 "data/maps/Route110/scripts.pory"

# 253 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jasmine::
# 254 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JASMINE, Route110_Text_JasmineIntro, Route110_Text_JasmineDefeated
# 255 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
# 256 "data/maps/Route110/scripts.pory"
	end
# 257 "data/maps/Route110/scripts.pory"

# 258 "data/maps/Route110/scripts.pory"
Route110_EventScript_Abigail::
# 259 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ABIGAIL_1, Route110_Text_AbigailIntro, Route110_Text_AbigailDefeated, Route110_EventScript_AbigailRegisterMatchCallAfterBattle
# 260 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 261 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_AbigailRematch
# 262 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailPostBattle, MSGBOX_DEFAULT
# 263 "data/maps/Route110/scripts.pory"
	release
# 264 "data/maps/Route110/scripts.pory"
	end
# 265 "data/maps/Route110/scripts.pory"

# 266 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRegisterMatchCallAfterBattle::
# 267 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 268 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 269 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRegister, MSGBOX_DEFAULT
# 270 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ABIGAIL_1
# 271 "data/maps/Route110/scripts.pory"
	release
# 272 "data/maps/Route110/scripts.pory"
	end
# 273 "data/maps/Route110/scripts.pory"

# 274 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRematch::
# 275 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ABIGAIL_1, Route110_Text_AbigailRematchIntro, Route110_Text_AbigailRematchDefeated
# 276 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRematchPostBattle, MSGBOX_AUTOCLOSE
# 277 "data/maps/Route110/scripts.pory"
	end
# 278 "data/maps/Route110/scripts.pory"

# 279 "data/maps/Route110/scripts.pory"
Route110_EventScript_Isabel::
# 280 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ISABEL_1, Route110_Text_IsabelIntro, Route110_Text_IsabelDefeated, Route110_EventScript_IsabelRegisterMatchCallAfterBattle
# 281 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 282 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_IsabelRematch
# 283 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelPostBattle, MSGBOX_DEFAULT
# 284 "data/maps/Route110/scripts.pory"
	release
# 285 "data/maps/Route110/scripts.pory"
	end
# 286 "data/maps/Route110/scripts.pory"

# 287 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRegisterMatchCallAfterBattle::
# 288 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 289 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 290 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRegister, MSGBOX_DEFAULT
# 291 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ISABEL_1
# 292 "data/maps/Route110/scripts.pory"
	release
# 293 "data/maps/Route110/scripts.pory"
	end
# 294 "data/maps/Route110/scripts.pory"

# 295 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRematch::
# 296 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ISABEL_1, Route110_Text_IsabelRematchIntro, Route110_Text_IsabelRematchDefeated
# 297 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRematchPostBattle, MSGBOX_AUTOCLOSE
# 298 "data/maps/Route110/scripts.pory"
	end
# 299 "data/maps/Route110/scripts.pory"

# 300 "data/maps/Route110/scripts.pory"
Route110_EventScript_Timmy::
# 301 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_TIMMY, Route110_Text_TimmyIntro, Route110_Text_TimmyDefeated
# 302 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
# 303 "data/maps/Route110/scripts.pory"
	end
# 304 "data/maps/Route110/scripts.pory"

# 305 "data/maps/Route110/scripts.pory"
Route110_EventScript_Unused::
# 306 "data/maps/Route110/scripts.pory"
	end
# 307 "data/maps/Route110/scripts.pory"

# 308 "data/maps/Route110/scripts.pory"
Route110_EventScript_Kaleb::
# 309 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_KALEB, Route110_Text_KalebIntro, Route110_Text_KalebDefeated
# 310 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KalebPostBattle, MSGBOX_AUTOCLOSE
# 311 "data/maps/Route110/scripts.pory"
	end
# 312 "data/maps/Route110/scripts.pory"

# 313 "data/maps/Route110/scripts.pory"
Route110_EventScript_Joseph::
# 314 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JOSEPH, Route110_Text_JosephIntro, Route110_Text_JosephDefeated
# 315 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
# 316 "data/maps/Route110/scripts.pory"
	end
# 317 "data/maps/Route110/scripts.pory"

# 318 "data/maps/Route110/scripts.pory"
Route110_EventScript_Alyssa::
# 319 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ALYSSA, Route110_Text_AlyssaIntro, Route110_Text_AlyssaDefeated
# 320 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlyssaPostBattle, MSGBOX_AUTOCLOSE
# 321 "data/maps/Route110/scripts.pory"
	end
# 322 "data/maps/Route110/scripts.pory"

# 323 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeEnd::
# 324 "data/maps/Route110/scripts.pory"
	lockall
# 325 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_CHALLENGE_BIKER, Common_Movement_WalkInPlaceFasterRight
# 326 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 327 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_CyclingChallengeResults
# 328 "data/maps/Route110/scripts.pory"
	releaseall
# 329 "data/maps/Route110/scripts.pory"
	end
# 330 "data/maps/Route110/scripts.pory"

# 331 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults::
# 332 "data/maps/Route110/scripts.pory"
	special FinishCyclingRoadChallenge
# 333 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingChallengeResultSummary, MSGBOX_DEFAULT
# 334 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 335 "data/maps/Route110/scripts.pory"
	case 10, Route110_EventScript_ChallengeReactionBest
# 336 "data/maps/Route110/scripts.pory"
	case 9, Route110_EventScript_ChallengeReactionGood
# 337 "data/maps/Route110/scripts.pory"
	case 8, Route110_EventScript_ChallengeReactionGood
# 338 "data/maps/Route110/scripts.pory"
	case 7, Route110_EventScript_ChallengeReactionGood
# 339 "data/maps/Route110/scripts.pory"
	case 6, Route110_EventScript_ChallengeReactionOk
# 340 "data/maps/Route110/scripts.pory"
	case 5, Route110_EventScript_ChallengeReactionOk
# 341 "data/maps/Route110/scripts.pory"
	case 4, Route110_EventScript_ChallengeReactionOk
# 342 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_ChallengeReactionBad
# 343 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_ChallengeReactionBad
# 344 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_ChallengeReactionBad
# 345 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_ChallengeReactionWorst
# 346 "data/maps/Route110/scripts.pory"
	end
# 347 "data/maps/Route110/scripts.pory"

# 348 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBest::
# 349 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBest, MSGBOX_DEFAULT
# 350 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 351 "data/maps/Route110/scripts.pory"
	end
# 352 "data/maps/Route110/scripts.pory"

# 353 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionGood::
# 354 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionGood, MSGBOX_DEFAULT
# 355 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 356 "data/maps/Route110/scripts.pory"
	end
# 357 "data/maps/Route110/scripts.pory"

# 358 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionOk::
# 359 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionOk, MSGBOX_DEFAULT
# 360 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 361 "data/maps/Route110/scripts.pory"
	end
# 362 "data/maps/Route110/scripts.pory"

# 363 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBad::
# 364 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBad, MSGBOX_DEFAULT
# 365 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 366 "data/maps/Route110/scripts.pory"
	end
# 367 "data/maps/Route110/scripts.pory"

# 368 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionWorst::
# 369 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionWorst, MSGBOX_DEFAULT
# 370 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 371 "data/maps/Route110/scripts.pory"
	end
# 372 "data/maps/Route110/scripts.pory"

# 373 "data/maps/Route110/scripts.pory"
Route110_EventScript_EndChallenge::
# 374 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 3
# 375 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 376 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 377 "data/maps/Route110/scripts.pory"
	return

Route110_EventScript_RivalTrigger1::
# 381 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 382 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
	end


Route110_EventScript_RivalTrigger2::
# 387 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 388 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
	end


Route110_EventScript_RivalTrigger3::
# 393 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 394 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
	end


Route110_EventScript_RivalScene::
# 399 "data/maps/Route110/scripts.pory"
	lockall
# 400 "data/maps/Route110/scripts.pory"
	checkplayergender
# 401 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 402 "data/maps/Route110/scripts.pory"
	applymovement 28, Common_Movement_WalkInPlaceFasterDown
# 403 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 404 "data/maps/Route110/scripts.pory"
	applymovement 28, Common_Movement_ExclamationMark
# 405 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 406 "data/maps/Route110/scripts.pory"
	applymovement 28, Common_Movement_Delay48
# 407 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 408 "data/maps/Route110/scripts.pory"
	delay 30
# 409 "data/maps/Route110/scripts.pory"
	switch VAR_0x8008
# 410 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_RivalScene_3
# 412 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_RivalScene_4
# 414 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_RivalScene_5
Route110_EventScript_RivalScene_1:
# 417 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 418 "data/maps/Route110/scripts.pory"
	rival2talk Route110_Text_SpencerEvolved, Route110_Text_BrenEvolved, Route110_Text_KyleEvolved
# 421 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq Route110_EventScript_RivalScene_7
Route110_EventScript_RivalScene_6:
# 424 "data/maps/Route110/scripts.pory"
	addobject 36
# 425 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 426 "data/maps/Route110/scripts.pory"
	switch VAR_0x8008
# 427 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_RivalScene_11
# 432 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route110_Movement_PlayerWatchRival1RunIn2and3
# 433 "data/maps/Route110/scripts.pory"
	applymovement 28, Route110_Movement_Rival2WatchRival1RunIn2and3
# 434 "data/maps/Route110/scripts.pory"
	applymovement 36, Route110_Movement_Rival1RunsIn2and3
Route110_EventScript_RivalScene_9:
# 436 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 437 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 3
	goto_if_eq Route110_EventScript_RivalScene_14
Route110_EventScript_RivalScene_13:
# 441 "data/maps/Route110/scripts.pory"
	rival1talk Route110_Text_SpencerAlmostMissedYou, Route110_Text_BrenAlmostMissedYou, Route110_Text_KyleAlmostMissedYou
# 444 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq Route110_EventScript_RivalScene_17
# 448 "data/maps/Route110/scripts.pory"
	applymovement 28, Common_Movement_BeginTalkLeft
Route110_EventScript_RivalScene_16:
# 450 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 451 "data/maps/Route110/scripts.pory"
	rival2talk Route110_Text_SpencerBoughtItemfinders, Route110_Text_BrenBoughtItemfinders, Route110_Text_KyleBoughtItemfinders
# 454 "data/maps/Route110/scripts.pory"
	delay 16
# 455 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq Route110_EventScript_RivalScene_21
# 459 "data/maps/Route110/scripts.pory"
	applymovement 28, Common_Movement_BeginTalkLeft
Route110_EventScript_RivalScene_20:
# 461 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 462 "data/maps/Route110/scripts.pory"
	delay 30
# 463 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 464 "data/maps/Route110/scripts.pory"
	applymovement 28, Common_Movement_BeginTalkDown
# 465 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 466 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AndOneForYou, MSGBOX_DEFAULT
# 467 "data/maps/Route110/scripts.pory"
	closemessage
# 468 "data/maps/Route110/scripts.pory"
	delay 30
# 469 "data/maps/Route110/scripts.pory"
	giveitem ITEM_DOWSING_MACHINE
# 470 "data/maps/Route110/scripts.pory"
	rival2talk Route110_Text_SpencerLetsLookAround, Route110_Text_BrenLetsLookAround, Route110_Text_KyleLetsLookAround
# 473 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq Route110_EventScript_RivalScene_25
# 479 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 480 "data/maps/Route110/scripts.pory"
	applymovement 28, Common_Movement_WalkInPlaceFasterLeft
# 481 "data/maps/Route110/scripts.pory"
	applymovement 36, Common_Movement_BeginTalkRight
Route110_EventScript_RivalScene_24:
# 483 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 484 "data/maps/Route110/scripts.pory"
	rival1talk Route110_Text_SpencerLetsGo, Route110_Text_BrenLetsGo, Route110_Text_KyleLetsGo
# 487 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 488 "data/maps/Route110/scripts.pory"
	applymovement 36, Route110_Movement_Rival1Exit
# 489 "data/maps/Route110/scripts.pory"
	applymovement 28, Route110_Movement_Rival2Exit
# 490 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 491 "data/maps/Route110/scripts.pory"
	removeobject 36
# 492 "data/maps/Route110/scripts.pory"
	setobjectxy 28, 3, 30
# 493 "data/maps/Route110/scripts.pory"
	setobjectxyperm 28, 3, 30
# 494 "data/maps/Route110/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_LOOK_AROUND
# 495 "data/maps/Route110/scripts.pory"
	setvar VAR_ROUTE110_STATE, 1
# 496 "data/maps/Route110/scripts.pory"
	setflag FLAG_HIDE_ROUTE_103_RIVAL1_LATER
# 497 "data/maps/Route110/scripts.pory"
	setflag FLAG_HIDE_ROUTE_117_RIVAL2
# 498 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 499 "data/maps/Route110/scripts.pory"
	releaseall
	end

Route110_EventScript_RivalScene_3:
# 411 "data/maps/Route110/scripts.pory"
	applymovement 28, Route110_Movement_RivalApproachPlayer1
	goto Route110_EventScript_RivalScene_1

Route110_EventScript_RivalScene_4:
# 413 "data/maps/Route110/scripts.pory"
	applymovement 28, Route110_Movement_RivalApproachPlayer2
	goto Route110_EventScript_RivalScene_1

Route110_EventScript_RivalScene_5:
# 415 "data/maps/Route110/scripts.pory"
	applymovement 28, Route110_Movement_RivalApproachPlayer3
	goto Route110_EventScript_RivalScene_1

Route110_EventScript_RivalScene_7:
# 422 "data/maps/Route110/scripts.pory"
	setobjectxyperm 36, 35, 62
	goto Route110_EventScript_RivalScene_6

Route110_EventScript_RivalScene_11:
# 428 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route110_Movement_PlayerWatchRival1RunIn1
# 429 "data/maps/Route110/scripts.pory"
	applymovement 28, Route110_Movement_Rival2WatchRival1RunIn1
# 430 "data/maps/Route110/scripts.pory"
	applymovement 36, Route110_Movement_Rival1RunsIn1
	goto Route110_EventScript_RivalScene_9

Route110_EventScript_RivalScene_14:
# 438 "data/maps/Route110/scripts.pory"
	applymovement 36, Rival1ExtraStepRight
# 439 "data/maps/Route110/scripts.pory"
	waitmovement 0
	goto Route110_EventScript_RivalScene_13

Route110_EventScript_RivalScene_17:
# 445 "data/maps/Route110/scripts.pory"
	applymovement 28, Common_Movement_BeginTalkRight
	goto Route110_EventScript_RivalScene_16

Route110_EventScript_RivalScene_21:
# 456 "data/maps/Route110/scripts.pory"
	applymovement 28, Common_Movement_BeginTalkRight
	goto Route110_EventScript_RivalScene_20

Route110_EventScript_RivalScene_25:
# 474 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 475 "data/maps/Route110/scripts.pory"
	applymovement 28, Common_Movement_WalkInPlaceFasterRight
# 476 "data/maps/Route110/scripts.pory"
	applymovement 36, Common_Movement_BeginTalkLeft
	goto Route110_EventScript_RivalScene_24


Route110_EventScript_Rival1::
# 504 "data/maps/Route110/scripts.pory"
	lock
# 505 "data/maps/Route110/scripts.pory"
	checkflag FLAG_HIDDEN_ITEM_ROUTE_110_REVIVE
# 506 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route110_EventScript_Rival1_2
# 524 "data/maps/Route110/scripts.pory"
	applymovement 37, Common_Movement_FacePlayer
# 525 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 526 "data/maps/Route110/scripts.pory"
	rival1talk Route110_Text_SpencerStupidMachine, Route110_Text_BrenStupidMachine, Route110_Text_KyleStupidMachine
Route110_EventScript_Rival1_1:
# 530 "data/maps/Route110/scripts.pory"
	release
	end

Route110_EventScript_Rival1_2:
# 507 "data/maps/Route110/scripts.pory"
	playse SE_ITEMFINDER
# 508 "data/maps/Route110/scripts.pory"
	waitse
# 509 "data/maps/Route110/scripts.pory"
	playse SE_ITEMFINDER
# 510 "data/maps/Route110/scripts.pory"
	waitse
# 511 "data/maps/Route110/scripts.pory"
	playse SE_ITEMFINDER
# 512 "data/maps/Route110/scripts.pory"
	waitse
# 513 "data/maps/Route110/scripts.pory"
	applymovement 37, Route110_Movement_Rival1Itemfinder
# 514 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 515 "data/maps/Route110/scripts.pory"
	applymovement 37, Common_Movement_FacePlayer
# 516 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 517 "data/maps/Route110/scripts.pory"
	rival1talk Route110_Text_SpencerCantFindItem, Route110_Text_BrenCantFindItem, Route110_Text_KyleCantFindItem
# 520 "data/maps/Route110/scripts.pory"
	applymovement 37, Common_Movement_WalkInPlaceFasterRight
# 521 "data/maps/Route110/scripts.pory"
	waitmovement 0
	goto Route110_EventScript_Rival1_1


Route110_EventScript_Rival2::
# 535 "data/maps/Route110/scripts.pory"
	lock
# 536 "data/maps/Route110/scripts.pory"
	applymovement 28, Common_Movement_FacePlayer
# 537 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 538 "data/maps/Route110/scripts.pory"
	compare VAR_0x8009, 300
	goto_if_ne Route110_EventScript_Rival2_2
Route110_EventScript_Rival2_1:
# 548 "data/maps/Route110/scripts.pory"
	rival2talk Route110_Text_SpencerKeepLooking, Route110_Text_BrenKeepLooking, Route110_Text_KyleKeepLooking
# 551 "data/maps/Route110/scripts.pory"
	release
	end

Route110_EventScript_Rival2_2:
# 539 "data/maps/Route110/scripts.pory"
	rival2talk Route110_Text_SpencerFoundSuperPotion, Route110_Text_BrenFoundSuperPotion, Route110_Text_KyleFoundSuperPotion
# 542 "data/maps/Route110/scripts.pory"
	delay 20
# 543 "data/maps/Route110/scripts.pory"
	giveitem ITEM_SUPER_POTION
# 544 "data/maps/Route110/scripts.pory"
	closemessage
# 545 "data/maps/Route110/scripts.pory"
	delay 30
# 546 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8009, 300
	goto Route110_EventScript_Rival2_1


Route110_EventScript_EndRouteTrigger1::
# 556 "data/maps/Route110/scripts.pory"
	setobjectxyperm 28, 4, 25
# 557 "data/maps/Route110/scripts.pory"
	setobjectxyperm 37, 3, 25
# 558 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 559 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndRoute
	return


Route110_EventScript_EndRouteTrigger2::
# 563 "data/maps/Route110/scripts.pory"
	setobjectxyperm 28, 5, 25
# 564 "data/maps/Route110/scripts.pory"
	setobjectxyperm 37, 4, 25
# 565 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 566 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndRoute
	return


Route110_EventScript_EndRouteTrigger3::
# 570 "data/maps/Route110/scripts.pory"
	setobjectxyperm 28, 4, 25
# 571 "data/maps/Route110/scripts.pory"
	setobjectxyperm 37, 5, 25
# 572 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 573 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndRoute
	return


Route110_EventScript_EndRoute::
# 577 "data/maps/Route110/scripts.pory"
	lockall
# 578 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 579 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 580 "data/maps/Route110/scripts.pory"
	addobject 37
# 581 "data/maps/Route110/scripts.pory"
	applymovement 37, Route110_Movement_Rival1ApproachEndRoute
# 582 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 583 "data/maps/Route110/scripts.pory"
	rival1talk Route110_Text_SpencerDidntFindAnything, Route110_Text_BrenDidntFindAnything, Route110_Text_KyleDidntFindAnything
# 586 "data/maps/Route110/scripts.pory"
	addobject 28
# 587 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 588 "data/maps/Route110/scripts.pory"
	switch VAR_0x8008
# 589 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_EndRoute_3
# 590 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_EndRoute_3
# 595 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route110_Movement_PlayerWatchRival2RunIn3
# 596 "data/maps/Route110/scripts.pory"
	applymovement 37, Route110_Movement_Rival1WatchRival2RunIn3
# 597 "data/maps/Route110/scripts.pory"
	applymovement 28, Route110_Movement_Rival2RunsIn3
Route110_EventScript_EndRoute_1:
# 599 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 600 "data/maps/Route110/scripts.pory"
	rival2talk Route110_Text_SpencerAlmostMissedYouRevenge, Route110_Text_BrenAlmostMissedYouRevenge, Route110_Text_KyleAlmostMissedYouRevenge
# 603 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 604 "data/maps/Route110/scripts.pory"
	applymovement 37, Common_Movement_WalkInPlaceFasterUp
# 605 "data/maps/Route110/scripts.pory"
	applymovement 28, Route110_Movement_Rival2RunToMauville
# 606 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 607 "data/maps/Route110/scripts.pory"
	removeobject 28
# 608 "data/maps/Route110/scripts.pory"
	delay 10
# 609 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 610 "data/maps/Route110/scripts.pory"
	applymovement 37, Common_Movement_BeginTalkUp
# 611 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 612 "data/maps/Route110/scripts.pory"
	rival1talk Route110_Text_SpencerTasteMyOwnMedicine, Route110_Text_BrenTasteMyOwnMedicine, Route110_Text_KyleTasteMyOwnMedicine
# 615 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 3
	goto_if_eq Route110_EventScript_EndRoute_6
# 620 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route110_Movement_WatchRival1LeaveForMauvilleRight
# 621 "data/maps/Route110/scripts.pory"
	applymovement 37, Route110_Movement_Rival1LeaveForMauville1and2
Route110_EventScript_EndRoute_5:
# 623 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 624 "data/maps/Route110/scripts.pory"
	removeobject 37
# 625 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8009, 0
# 626 "data/maps/Route110/scripts.pory"
	setflag FLAG_HIDE_ROUTE_110_RIVAL
# 627 "data/maps/Route110/scripts.pory"
	setvar VAR_ROUTE110_STATE, 2
# 628 "data/maps/Route110/scripts.pory"
	releaseall
	end

Route110_EventScript_EndRoute_3:
# 591 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route110_Movement_PlayerWatchRival2RunIn1and2
# 592 "data/maps/Route110/scripts.pory"
	applymovement 37, Route110_Movement_Rival1WatchRival2RunIn1and2
# 593 "data/maps/Route110/scripts.pory"
	applymovement 28, Route110_Movement_Rival2RunsIn1and2
	goto Route110_EventScript_EndRoute_1

Route110_EventScript_EndRoute_6:
# 616 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route110_Movement_WatchRival1LeaveForMauvilleLeft
# 617 "data/maps/Route110/scripts.pory"
	applymovement 37, Route110_Movement_Rival1LeaveForMauville3
	goto Route110_EventScript_EndRoute_5


# 632 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer1:
# 633 "data/maps/Route110/scripts.pory"
	walk_down
# 634 "data/maps/Route110/scripts.pory"
	walk_left
# 635 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
	step_end

# 638 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer2:
# 639 "data/maps/Route110/scripts.pory"
	walk_down
	step_end

# 642 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer3:
# 643 "data/maps/Route110/scripts.pory"
	walk_down
# 644 "data/maps/Route110/scripts.pory"
	walk_right
# 645 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
	step_end

# 648 "data/maps/Route110/scripts.pory"
Route110_Movement_PlayerWatchRival1RunIn1:
# 649 "data/maps/Route110/scripts.pory"
	face_down
# 650 "data/maps/Route110/scripts.pory"
	delay_4
# 650 "data/maps/Route110/scripts.pory"
	delay_4
# 650 "data/maps/Route110/scripts.pory"
	delay_4
# 650 "data/maps/Route110/scripts.pory"
	delay_4
# 650 "data/maps/Route110/scripts.pory"
	delay_4
# 651 "data/maps/Route110/scripts.pory"
	walk_in_place_right
# 652 "data/maps/Route110/scripts.pory"
	delay_8
# 653 "data/maps/Route110/scripts.pory"
	walk_in_place_up
# 654 "data/maps/Route110/scripts.pory"
	delay_4
# 654 "data/maps/Route110/scripts.pory"
	delay_4
# 654 "data/maps/Route110/scripts.pory"
	delay_4
# 655 "data/maps/Route110/scripts.pory"
	delay_16
# 655 "data/maps/Route110/scripts.pory"
	delay_16
# 655 "data/maps/Route110/scripts.pory"
	delay_16
# 655 "data/maps/Route110/scripts.pory"
	delay_16
# 656 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_right
	step_end

# 659 "data/maps/Route110/scripts.pory"
Route110_Movement_Rival2WatchRival1RunIn1:
# 660 "data/maps/Route110/scripts.pory"
	emote_exclamation_mark
# 661 "data/maps/Route110/scripts.pory"
	face_down
# 662 "data/maps/Route110/scripts.pory"
	delay_4
# 662 "data/maps/Route110/scripts.pory"
	delay_4
# 662 "data/maps/Route110/scripts.pory"
	delay_4
# 662 "data/maps/Route110/scripts.pory"
	delay_4
# 662 "data/maps/Route110/scripts.pory"
	delay_4
# 662 "data/maps/Route110/scripts.pory"
	delay_4
# 663 "data/maps/Route110/scripts.pory"
	walk_in_place_right
# 664 "data/maps/Route110/scripts.pory"
	delay_8
# 665 "data/maps/Route110/scripts.pory"
	walk_in_place_up
# 666 "data/maps/Route110/scripts.pory"
	delay_4
# 666 "data/maps/Route110/scripts.pory"
	delay_4
# 667 "data/maps/Route110/scripts.pory"
	delay_16
# 667 "data/maps/Route110/scripts.pory"
	delay_16
# 667 "data/maps/Route110/scripts.pory"
	delay_16
# 667 "data/maps/Route110/scripts.pory"
	delay_16
# 668 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_right
	step_end

# 671 "data/maps/Route110/scripts.pory"
Route110_Movement_Rival1RunsIn1:
# 672 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 672 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 672 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 672 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 672 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 672 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 672 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 672 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 672 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 672 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 673 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 673 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 673 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 673 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 673 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 673 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 674 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 674 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 674 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 675 "data/maps/Route110/scripts.pory"
	walk_fast_left
	step_end

# 678 "data/maps/Route110/scripts.pory"
Route110_Movement_PlayerWatchRival1RunIn2and3:
# 679 "data/maps/Route110/scripts.pory"
	face_down
# 680 "data/maps/Route110/scripts.pory"
	delay_4
# 680 "data/maps/Route110/scripts.pory"
	delay_4
# 680 "data/maps/Route110/scripts.pory"
	delay_4
# 680 "data/maps/Route110/scripts.pory"
	delay_4
# 680 "data/maps/Route110/scripts.pory"
	delay_4
# 681 "data/maps/Route110/scripts.pory"
	walk_in_place_left
# 682 "data/maps/Route110/scripts.pory"
	delay_8
# 683 "data/maps/Route110/scripts.pory"
	walk_in_place_up
# 684 "data/maps/Route110/scripts.pory"
	delay_4
# 684 "data/maps/Route110/scripts.pory"
	delay_4
# 684 "data/maps/Route110/scripts.pory"
	delay_4
# 685 "data/maps/Route110/scripts.pory"
	delay_16
# 685 "data/maps/Route110/scripts.pory"
	delay_16
# 685 "data/maps/Route110/scripts.pory"
	delay_16
# 685 "data/maps/Route110/scripts.pory"
	delay_16
# 686 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_left
	step_end

# 689 "data/maps/Route110/scripts.pory"
Route110_Movement_Rival2WatchRival1RunIn2and3:
# 690 "data/maps/Route110/scripts.pory"
	emote_exclamation_mark
# 691 "data/maps/Route110/scripts.pory"
	face_down
# 692 "data/maps/Route110/scripts.pory"
	delay_4
# 692 "data/maps/Route110/scripts.pory"
	delay_4
# 692 "data/maps/Route110/scripts.pory"
	delay_4
# 692 "data/maps/Route110/scripts.pory"
	delay_4
# 692 "data/maps/Route110/scripts.pory"
	delay_4
# 692 "data/maps/Route110/scripts.pory"
	delay_4
# 693 "data/maps/Route110/scripts.pory"
	walk_in_place_left
# 694 "data/maps/Route110/scripts.pory"
	delay_8
# 695 "data/maps/Route110/scripts.pory"
	walk_in_place_up
# 696 "data/maps/Route110/scripts.pory"
	delay_4
# 696 "data/maps/Route110/scripts.pory"
	delay_4
# 697 "data/maps/Route110/scripts.pory"
	delay_16
# 697 "data/maps/Route110/scripts.pory"
	delay_16
# 697 "data/maps/Route110/scripts.pory"
	delay_16
# 697 "data/maps/Route110/scripts.pory"
	delay_16
# 698 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_left
	step_end

# 701 "data/maps/Route110/scripts.pory"
Route110_Movement_Rival1RunsIn2and3:
# 702 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 702 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 702 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 702 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 702 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 702 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 702 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 702 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 702 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 702 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 703 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 703 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 703 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 703 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 703 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 703 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 704 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 704 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 704 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 705 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_right
	step_end

# 708 "data/maps/Route110/scripts.pory"
Rival1ExtraStepRight:
# 709 "data/maps/Route110/scripts.pory"
	walk_fast_right
	step_end

# 712 "data/maps/Route110/scripts.pory"
Rival1ExtraStepLeft:
# 713 "data/maps/Route110/scripts.pory"
	walk_fast_left
	step_end

# 716 "data/maps/Route110/scripts.pory"
Route110_Movement_Rival1Exit:
# 717 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 718 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 719 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 720 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 721 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 722 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 723 "data/maps/Route110/scripts.pory"
	walk_fast_up
	step_end

# 726 "data/maps/Route110/scripts.pory"
Route110_Movement_Rival2Exit:
# 727 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_up
# 728 "data/maps/Route110/scripts.pory"
	delay_8
# 728 "data/maps/Route110/scripts.pory"
	delay_8
# 728 "data/maps/Route110/scripts.pory"
	delay_8
# 729 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 730 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 731 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 732 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 733 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 734 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 735 "data/maps/Route110/scripts.pory"
	walk_fast_up
	step_end

# 738 "data/maps/Route110/scripts.pory"
Route110_Movement_Rival1Itemfinder:
# 739 "data/maps/Route110/scripts.pory"
	walk_in_place_right
# 740 "data/maps/Route110/scripts.pory"
	delay_16
# 740 "data/maps/Route110/scripts.pory"
	delay_16
	step_end

# 743 "data/maps/Route110/scripts.pory"
Route110_Movement_Rival1ApproachEndRoute:
# 744 "data/maps/Route110/scripts.pory"
	walk_up
# 744 "data/maps/Route110/scripts.pory"
	walk_up
# 744 "data/maps/Route110/scripts.pory"
	walk_up
# 744 "data/maps/Route110/scripts.pory"
	walk_up
# 744 "data/maps/Route110/scripts.pory"
	walk_up
	step_end

# 747 "data/maps/Route110/scripts.pory"
Route110_Movement_PlayerWatchRival2RunIn1and2:
# 748 "data/maps/Route110/scripts.pory"
	face_down
# 749 "data/maps/Route110/scripts.pory"
	delay_4
# 749 "data/maps/Route110/scripts.pory"
	delay_4
# 749 "data/maps/Route110/scripts.pory"
	delay_4
# 749 "data/maps/Route110/scripts.pory"
	delay_4
# 749 "data/maps/Route110/scripts.pory"
	delay_4
# 749 "data/maps/Route110/scripts.pory"
	delay_4
# 750 "data/maps/Route110/scripts.pory"
	walk_in_place_right
# 751 "data/maps/Route110/scripts.pory"
	delay_8
# 752 "data/maps/Route110/scripts.pory"
	walk_in_place_up
# 753 "data/maps/Route110/scripts.pory"
	delay_4
# 753 "data/maps/Route110/scripts.pory"
	delay_4
# 754 "data/maps/Route110/scripts.pory"
	delay_16
# 754 "data/maps/Route110/scripts.pory"
	delay_16
# 754 "data/maps/Route110/scripts.pory"
	delay_16
# 754 "data/maps/Route110/scripts.pory"
	delay_16
# 755 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_right
	step_end

# 758 "data/maps/Route110/scripts.pory"
Route110_Movement_Rival1WatchRival2RunIn1and2:
# 759 "data/maps/Route110/scripts.pory"
	emote_exclamation_mark
# 760 "data/maps/Route110/scripts.pory"
	face_down
# 761 "data/maps/Route110/scripts.pory"
	delay_4
# 761 "data/maps/Route110/scripts.pory"
	delay_4
# 761 "data/maps/Route110/scripts.pory"
	delay_4
# 761 "data/maps/Route110/scripts.pory"
	delay_4
# 761 "data/maps/Route110/scripts.pory"
	delay_4
# 762 "data/maps/Route110/scripts.pory"
	walk_in_place_right
# 763 "data/maps/Route110/scripts.pory"
	delay_8
# 764 "data/maps/Route110/scripts.pory"
	walk_in_place_up
# 765 "data/maps/Route110/scripts.pory"
	delay_4
# 765 "data/maps/Route110/scripts.pory"
	delay_4
# 765 "data/maps/Route110/scripts.pory"
	delay_4
# 766 "data/maps/Route110/scripts.pory"
	delay_16
# 766 "data/maps/Route110/scripts.pory"
	delay_16
# 766 "data/maps/Route110/scripts.pory"
	delay_16
# 766 "data/maps/Route110/scripts.pory"
	delay_16
# 767 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_right
	step_end

# 770 "data/maps/Route110/scripts.pory"
Route110_Movement_Rival2RunsIn1and2:
# 771 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 771 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 771 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 771 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 771 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 771 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 771 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 771 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 771 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 772 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 772 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 772 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 772 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 772 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 772 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 773 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 773 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 773 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 774 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_left
	step_end

# 777 "data/maps/Route110/scripts.pory"
Route110_Movement_PlayerWatchRival2RunIn3:
# 778 "data/maps/Route110/scripts.pory"
	face_down
# 779 "data/maps/Route110/scripts.pory"
	delay_4
# 779 "data/maps/Route110/scripts.pory"
	delay_4
# 779 "data/maps/Route110/scripts.pory"
	delay_4
# 779 "data/maps/Route110/scripts.pory"
	delay_4
# 779 "data/maps/Route110/scripts.pory"
	delay_4
# 779 "data/maps/Route110/scripts.pory"
	delay_4
# 780 "data/maps/Route110/scripts.pory"
	walk_in_place_left
# 781 "data/maps/Route110/scripts.pory"
	delay_8
# 782 "data/maps/Route110/scripts.pory"
	walk_in_place_up
# 783 "data/maps/Route110/scripts.pory"
	delay_4
# 783 "data/maps/Route110/scripts.pory"
	delay_4
# 784 "data/maps/Route110/scripts.pory"
	delay_16
# 784 "data/maps/Route110/scripts.pory"
	delay_16
# 784 "data/maps/Route110/scripts.pory"
	delay_16
# 784 "data/maps/Route110/scripts.pory"
	delay_16
# 785 "data/maps/Route110/scripts.pory"
	delay_8
# 786 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_left
	step_end

# 789 "data/maps/Route110/scripts.pory"
Route110_Movement_Rival1WatchRival2RunIn3:
# 790 "data/maps/Route110/scripts.pory"
	emote_exclamation_mark
# 791 "data/maps/Route110/scripts.pory"
	face_down
# 792 "data/maps/Route110/scripts.pory"
	delay_4
# 792 "data/maps/Route110/scripts.pory"
	delay_4
# 792 "data/maps/Route110/scripts.pory"
	delay_4
# 792 "data/maps/Route110/scripts.pory"
	delay_4
# 792 "data/maps/Route110/scripts.pory"
	delay_4
# 793 "data/maps/Route110/scripts.pory"
	walk_in_place_left
# 794 "data/maps/Route110/scripts.pory"
	delay_8
# 795 "data/maps/Route110/scripts.pory"
	walk_in_place_up
# 796 "data/maps/Route110/scripts.pory"
	delay_4
# 796 "data/maps/Route110/scripts.pory"
	delay_4
# 796 "data/maps/Route110/scripts.pory"
	delay_4
# 797 "data/maps/Route110/scripts.pory"
	delay_16
# 797 "data/maps/Route110/scripts.pory"
	delay_16
# 797 "data/maps/Route110/scripts.pory"
	delay_16
# 797 "data/maps/Route110/scripts.pory"
	delay_16
# 798 "data/maps/Route110/scripts.pory"
	delay_8
# 799 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_left
	step_end

# 802 "data/maps/Route110/scripts.pory"
Route110_Movement_Rival2RunsIn3:
# 803 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 803 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 803 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 803 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 803 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 803 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 803 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 803 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 803 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 804 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 804 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 804 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 804 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 804 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 804 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 805 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 805 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 805 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 806 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_right
	step_end

# 809 "data/maps/Route110/scripts.pory"
Route110_Movement_Rival2RunToMauville:
# 810 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 810 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 810 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 811 "data/maps/Route110/scripts.pory"
	walk_fast_right
# 811 "data/maps/Route110/scripts.pory"
	walk_fast_right
# 811 "data/maps/Route110/scripts.pory"
	walk_fast_right
# 811 "data/maps/Route110/scripts.pory"
	walk_fast_right
# 811 "data/maps/Route110/scripts.pory"
	walk_fast_right
# 811 "data/maps/Route110/scripts.pory"
	walk_fast_right
# 812 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 812 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 812 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 812 "data/maps/Route110/scripts.pory"
	walk_fast_up
	step_end

# 815 "data/maps/Route110/scripts.pory"
Route110_Movement_Rival1LeaveForMauville1and2:
# 816 "data/maps/Route110/scripts.pory"
	walk_right
# 817 "data/maps/Route110/scripts.pory"
	walk_up
# 817 "data/maps/Route110/scripts.pory"
	walk_up
# 817 "data/maps/Route110/scripts.pory"
	walk_up
# 817 "data/maps/Route110/scripts.pory"
	walk_up
# 818 "data/maps/Route110/scripts.pory"
	walk_right
# 818 "data/maps/Route110/scripts.pory"
	walk_right
# 818 "data/maps/Route110/scripts.pory"
	walk_right
# 818 "data/maps/Route110/scripts.pory"
	walk_right
# 819 "data/maps/Route110/scripts.pory"
	walk_up
# 819 "data/maps/Route110/scripts.pory"
	walk_up
# 819 "data/maps/Route110/scripts.pory"
	walk_up
# 819 "data/maps/Route110/scripts.pory"
	walk_up
	step_end

# 822 "data/maps/Route110/scripts.pory"
Route110_Movement_Rival1LeaveForMauville3:
# 823 "data/maps/Route110/scripts.pory"
	walk_left
# 824 "data/maps/Route110/scripts.pory"
	walk_up
# 824 "data/maps/Route110/scripts.pory"
	walk_up
# 824 "data/maps/Route110/scripts.pory"
	walk_up
# 824 "data/maps/Route110/scripts.pory"
	walk_up
# 825 "data/maps/Route110/scripts.pory"
	walk_right
# 825 "data/maps/Route110/scripts.pory"
	walk_right
# 825 "data/maps/Route110/scripts.pory"
	walk_right
# 825 "data/maps/Route110/scripts.pory"
	walk_right
# 826 "data/maps/Route110/scripts.pory"
	walk_up
# 826 "data/maps/Route110/scripts.pory"
	walk_up
# 826 "data/maps/Route110/scripts.pory"
	walk_up
# 826 "data/maps/Route110/scripts.pory"
	walk_up
	step_end

# 829 "data/maps/Route110/scripts.pory"
Route110_Movement_WatchRival1LeaveForMauvilleLeft:
# 830 "data/maps/Route110/scripts.pory"
	delay_16
# 831 "data/maps/Route110/scripts.pory"
	face_left
# 832 "data/maps/Route110/scripts.pory"
	delay_16
# 832 "data/maps/Route110/scripts.pory"
	delay_16
# 833 "data/maps/Route110/scripts.pory"
	face_up
	step_end

# 836 "data/maps/Route110/scripts.pory"
Route110_Movement_WatchRival1LeaveForMauvilleRight:
# 837 "data/maps/Route110/scripts.pory"
	delay_16
# 838 "data/maps/Route110/scripts.pory"
	face_right
# 839 "data/maps/Route110/scripts.pory"
	delay_16
# 839 "data/maps/Route110/scripts.pory"
	delay_16
# 840 "data/maps/Route110/scripts.pory"
	face_up
	step_end

# 1111 "data/maps/Route110/scripts.pory"

# 1112 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene1::
# 1113 "data/maps/Route110/scripts.pory"
	lockall
# 1114 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 1115 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 1116 "data/maps/Route110/scripts.pory"

# 1117 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene2::
# 1118 "data/maps/Route110/scripts.pory"
	lockall
# 1119 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 1120 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 1121 "data/maps/Route110/scripts.pory"

# 1122 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene3::
# 1123 "data/maps/Route110/scripts.pory"
	lockall
# 1124 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 1125 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 1126 "data/maps/Route110/scripts.pory"

# 1127 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene4::
# 1128 "data/maps/Route110/scripts.pory"
	lockall
# 1129 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 4
# 1130 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 1131 "data/maps/Route110/scripts.pory"

# 1132 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene::
# 1133 "data/maps/Route110/scripts.pory"
	addobject LOCALID_BIRCH
# 1134 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchEntrance
# 1135 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1136 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 1137 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 1138 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1139 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_Delay48
# 1140 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1141 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchApproachPlayer1
# 1142 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchApproachPlayer2
# 1143 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchApproachPlayer3
# 1144 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchApproachPlayer4
# 1145 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ImagineSeeingYouHere, MSGBOX_DEFAULT
# 1146 "data/maps/Route110/scripts.pory"
	closemessage
# 1147 "data/maps/Route110/scripts.pory"
	delay 20
# 1148 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterUp
# 1149 "data/maps/Route110/scripts.pory"
	delay 40
# 1150 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterDown
# 1151 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1152 "data/maps/Route110/scripts.pory"
	delay 30
# 1153 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HeardYouInstallMatchCall, MSGBOX_DEFAULT
# 1154 "data/maps/Route110/scripts.pory"
	closemessage
# 1155 "data/maps/Route110/scripts.pory"
	delay 30
# 1156 "data/maps/Route110/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 1157 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RegisteredBirchInPokenav, MSGBOX_DEFAULT
# 1158 "data/maps/Route110/scripts.pory"
	waitfanfare
# 1159 "data/maps/Route110/scripts.pory"
	closemessage
# 1160 "data/maps/Route110/scripts.pory"
	delay 30
# 1161 "data/maps/Route110/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 1162 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KeepAnEyeOutForRival, MSGBOX_DEFAULT
# 1163 "data/maps/Route110/scripts.pory"
	closemessage
# 1164 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchExit1
# 1165 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchExit2
# 1166 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchExit3
# 1167 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchExit4
# 1168 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_BIRCH
# 1169 "data/maps/Route110/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 1170 "data/maps/Route110/scripts.pory"
	setflag FLAG_HIDE_SEASHORE_HOUSE_RIVAL2
# 1171 "data/maps/Route110/scripts.pory"
	setvar VAR_SEASHORE_HOUSE_RIVAL_STATE, 1
# 1172 "data/maps/Route110/scripts.pory"
	releaseall
# 1173 "data/maps/Route110/scripts.pory"
	end
# 1174 "data/maps/Route110/scripts.pory"

# 1175 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer1::
# 1176 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer1
# 1177 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1178 "data/maps/Route110/scripts.pory"
	return
# 1179 "data/maps/Route110/scripts.pory"

# 1180 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer2::
# 1181 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer2
# 1182 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1183 "data/maps/Route110/scripts.pory"
	return
# 1184 "data/maps/Route110/scripts.pory"

# 1185 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer3::
# 1186 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer3
# 1187 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1188 "data/maps/Route110/scripts.pory"
	return
# 1189 "data/maps/Route110/scripts.pory"

# 1190 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer4::
# 1191 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer4
# 1192 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1193 "data/maps/Route110/scripts.pory"
	return
# 1194 "data/maps/Route110/scripts.pory"

# 1195 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit1::
# 1196 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit1
# 1197 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1198 "data/maps/Route110/scripts.pory"
	return
# 1199 "data/maps/Route110/scripts.pory"

# 1200 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit2::
# 1201 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit2
# 1202 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1203 "data/maps/Route110/scripts.pory"
	return
# 1204 "data/maps/Route110/scripts.pory"

# 1205 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit3::
# 1206 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit3
# 1207 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1208 "data/maps/Route110/scripts.pory"
	return
# 1209 "data/maps/Route110/scripts.pory"

# 1210 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit4::
# 1211 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit4
# 1212 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 1213 "data/maps/Route110/scripts.pory"
	return
# 1214 "data/maps/Route110/scripts.pory"

# 1215 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchEntrance:
# 1216 "data/maps/Route110/scripts.pory"
	walk_down
# 1217 "data/maps/Route110/scripts.pory"
	walk_down
# 1218 "data/maps/Route110/scripts.pory"
	walk_down
# 1219 "data/maps/Route110/scripts.pory"
	step_end
# 1220 "data/maps/Route110/scripts.pory"

# 1221 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer1:
# 1222 "data/maps/Route110/scripts.pory"
	walk_down
# 1223 "data/maps/Route110/scripts.pory"
	walk_left
# 1224 "data/maps/Route110/scripts.pory"
	walk_left
# 1225 "data/maps/Route110/scripts.pory"
	walk_down
# 1226 "data/maps/Route110/scripts.pory"
	step_end
# 1227 "data/maps/Route110/scripts.pory"

# 1228 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer2:
# 1229 "data/maps/Route110/scripts.pory"
	walk_down
# 1230 "data/maps/Route110/scripts.pory"
	walk_left
# 1231 "data/maps/Route110/scripts.pory"
	walk_down
# 1232 "data/maps/Route110/scripts.pory"
	step_end
# 1233 "data/maps/Route110/scripts.pory"

# 1234 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer3:
# 1235 "data/maps/Route110/scripts.pory"
	walk_down
# 1236 "data/maps/Route110/scripts.pory"
	walk_down
# 1237 "data/maps/Route110/scripts.pory"
	step_end
# 1238 "data/maps/Route110/scripts.pory"

# 1239 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer4:
# 1240 "data/maps/Route110/scripts.pory"
	walk_down
# 1241 "data/maps/Route110/scripts.pory"
	walk_right
# 1242 "data/maps/Route110/scripts.pory"
	walk_down
# 1243 "data/maps/Route110/scripts.pory"
	step_end
# 1244 "data/maps/Route110/scripts.pory"

# 1245 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit1:
# 1246 "data/maps/Route110/scripts.pory"
	walk_up
# 1247 "data/maps/Route110/scripts.pory"
	walk_up
# 1248 "data/maps/Route110/scripts.pory"
	walk_right
# 1249 "data/maps/Route110/scripts.pory"
	walk_up
# 1250 "data/maps/Route110/scripts.pory"
	walk_up
# 1251 "data/maps/Route110/scripts.pory"
	walk_up
# 1252 "data/maps/Route110/scripts.pory"
	step_end
# 1253 "data/maps/Route110/scripts.pory"

# 1254 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit2:
# 1255 "data/maps/Route110/scripts.pory"
	walk_up
# 1256 "data/maps/Route110/scripts.pory"
	walk_up
# 1257 "data/maps/Route110/scripts.pory"
	walk_up
# 1258 "data/maps/Route110/scripts.pory"
	walk_up
# 1259 "data/maps/Route110/scripts.pory"
	walk_up
# 1260 "data/maps/Route110/scripts.pory"
	step_end
# 1261 "data/maps/Route110/scripts.pory"

# 1262 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit3:
# 1263 "data/maps/Route110/scripts.pory"
	walk_up
# 1264 "data/maps/Route110/scripts.pory"
	walk_up
# 1265 "data/maps/Route110/scripts.pory"
	walk_up
# 1266 "data/maps/Route110/scripts.pory"
	walk_up
# 1267 "data/maps/Route110/scripts.pory"
	walk_up
# 1268 "data/maps/Route110/scripts.pory"
	step_end
# 1269 "data/maps/Route110/scripts.pory"

# 1270 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit4:
# 1271 "data/maps/Route110/scripts.pory"
	walk_up
# 1272 "data/maps/Route110/scripts.pory"
	walk_up
# 1273 "data/maps/Route110/scripts.pory"
	walk_up
# 1274 "data/maps/Route110/scripts.pory"
	walk_up
# 1275 "data/maps/Route110/scripts.pory"
	walk_up
# 1276 "data/maps/Route110/scripts.pory"
	step_end
# 1277 "data/maps/Route110/scripts.pory"

# 1278 "data/maps/Route110/scripts.pory"
Route110_Text_WeCantTalkAboutAquaActivities:
# 1279 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's activities…\n"
# 1280 "data/maps/Route110/scripts.pory"
	.string "We can't talk about them yet.$"
# 1281 "data/maps/Route110/scripts.pory"

# 1282 "data/maps/Route110/scripts.pory"
Route110_Text_KickUpARuckus:
# 1283 "data/maps/Route110/scripts.pory"
	.string "I want to get going to SLATEPORT and\n"
# 1284 "data/maps/Route110/scripts.pory"
	.string "kick up a ruckus!$"
# 1285 "data/maps/Route110/scripts.pory"

# 1286 "data/maps/Route110/scripts.pory"
Route110_Text_MyFirstJobInAqua:
# 1287 "data/maps/Route110/scripts.pory"
	.string "This is my first job after joining\n"
# 1288 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA. It's a little scary.$"
# 1289 "data/maps/Route110/scripts.pory"

# 1290 "data/maps/Route110/scripts.pory"
Route110_Text_AquaActionsBringSmiles:
# 1291 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's actions should bring\n"
# 1292 "data/maps/Route110/scripts.pory"
	.string "smiles to people's faces!$"
# 1293 "data/maps/Route110/scripts.pory"

# 1294 "data/maps/Route110/scripts.pory"
Route110_Text_MayLetsBattle:
# 1295 "data/maps/Route110/scripts.pory"
	.string "MAY: Hi, {PLAYER}{KUN}, long time no see!\p"
# 1296 "data/maps/Route110/scripts.pory"
	.string "While I was searching for other\n"
# 1297 "data/maps/Route110/scripts.pory"
	.string "POKéMON, my POKéMON grew stronger.\p"
# 1298 "data/maps/Route110/scripts.pory"
	.string "So…\n"
# 1299 "data/maps/Route110/scripts.pory"
	.string "How about a little battle?$"
# 1300 "data/maps/Route110/scripts.pory"

# 1301 "data/maps/Route110/scripts.pory"
Route110_Text_MayDefeated:
# 1302 "data/maps/Route110/scripts.pory"
	.string "Yikes!\n"
# 1303 "data/maps/Route110/scripts.pory"
	.string "You're better than I expected!$"
# 1304 "data/maps/Route110/scripts.pory"

# 1305 "data/maps/Route110/scripts.pory"
Route110_Text_MayTakeThis:
# 1306 "data/maps/Route110/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, you've been busy\n"
# 1307 "data/maps/Route110/scripts.pory"
	.string "training, too, haven't you?\p"
# 1308 "data/maps/Route110/scripts.pory"
	.string "I think you deserve a reward!\n"
# 1309 "data/maps/Route110/scripts.pory"
	.string "This is from me!$"
# 1310 "data/maps/Route110/scripts.pory"

# 1311 "data/maps/Route110/scripts.pory"
Route110_Text_MayExplainItemfinder:
# 1312 "data/maps/Route110/scripts.pory"
	.string "MAY: That's an ITEMFINDER.\p"
# 1313 "data/maps/Route110/scripts.pory"
	.string "Try it out. If there is an item that's\n"
# 1314 "data/maps/Route110/scripts.pory"
	.string "not visible, it emits a sound.\p"
# 1315 "data/maps/Route110/scripts.pory"
	.string "Okay, {PLAYER}{KUN}, let's meet again!\p"
# 1316 "data/maps/Route110/scripts.pory"
	.string "I know it's a little silly coming from\n"
# 1317 "data/maps/Route110/scripts.pory"
	.string "me, but I think you should train a lot\l"
# 1318 "data/maps/Route110/scripts.pory"
	.string "harder for the next time.$"
# 1319 "data/maps/Route110/scripts.pory"

# 1320 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanLetsBattle:
# 1321 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}.\n"
# 1322 "data/maps/Route110/scripts.pory"
	.string "So this is where you were.\l"
# 1323 "data/maps/Route110/scripts.pory"
	.string "How's it going?\p"
# 1324 "data/maps/Route110/scripts.pory"
	.string "Have you been raising your POKéMON?\n"
# 1325 "data/maps/Route110/scripts.pory"
	.string "I'll check for you.$"
# 1326 "data/maps/Route110/scripts.pory"

# 1327 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanDefeated:
# 1328 "data/maps/Route110/scripts.pory"
	.string "Hmm…\n"
# 1329 "data/maps/Route110/scripts.pory"
	.string "You're pretty good.$"
# 1330 "data/maps/Route110/scripts.pory"

# 1331 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanTakeThis:
# 1332 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: {PLAYER}, you've trained\n"
# 1333 "data/maps/Route110/scripts.pory"
	.string "without me noticing…\p"
# 1334 "data/maps/Route110/scripts.pory"
	.string "Good enough!\n"
# 1335 "data/maps/Route110/scripts.pory"
	.string "Here, take this.$"
# 1336 "data/maps/Route110/scripts.pory"

# 1337 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanExplainItemfinder:
# 1338 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: That's an ITEMFINDER.\p"
# 1339 "data/maps/Route110/scripts.pory"
	.string "Use it to root around for items that\n"
# 1340 "data/maps/Route110/scripts.pory"
	.string "aren't visible.\p"
# 1341 "data/maps/Route110/scripts.pory"
	.string "If it senses something, it emits\n"
# 1342 "data/maps/Route110/scripts.pory"
	.string "a sound.\p"
# 1343 "data/maps/Route110/scripts.pory"
	.string "Anyway, I'm off to look for new\n"
# 1344 "data/maps/Route110/scripts.pory"
	.string "POKéMON.$"
# 1345 "data/maps/Route110/scripts.pory"

# 1346 "data/maps/Route110/scripts.pory"
Route110_Text_RideBikeAtFullSpeed:
# 1347 "data/maps/Route110/scripts.pory"
	.string "Wouldn't it be great to ride a BIKE\n"
# 1348 "data/maps/Route110/scripts.pory"
	.string "at full speed on CYCLING ROAD?$"
# 1349 "data/maps/Route110/scripts.pory"

# 1350 "data/maps/Route110/scripts.pory"
Route110_Text_HairStreamsBehindMe:
# 1351 "data/maps/Route110/scripts.pory"
	.string "How do you like the way my raven-\n"
# 1352 "data/maps/Route110/scripts.pory"
	.string "colored hair streams behind me?\p"
# 1353 "data/maps/Route110/scripts.pory"
	.string "I grew my hair out just for that.$"
# 1354 "data/maps/Route110/scripts.pory"

# 1355 "data/maps/Route110/scripts.pory"
Route110_Text_YouGotBikeFromRydel:
# 1356 "data/maps/Route110/scripts.pory"
	.string "Oh, hey, you got that BIKE from RYDEL!\p"
# 1357 "data/maps/Route110/scripts.pory"
	.string "Oh, it's glaringly obvious.\n"
# 1358 "data/maps/Route110/scripts.pory"
	.string "It says right on your bike…\p"
# 1359 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 1360 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 1361 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 1362 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 1363 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 1364 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 1365 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 1366 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 1367 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL…\n"
# 1368 "data/maps/Route110/scripts.pory"
	.string "That name's everywhere.\p"
# 1369 "data/maps/Route110/scripts.pory"
	.string "You should ride it around all over\n"
# 1370 "data/maps/Route110/scripts.pory"
	.string "the place--it's good advertising!$"
# 1371 "data/maps/Route110/scripts.pory"

# 1372 "data/maps/Route110/scripts.pory"
Route110_Text_TwoRoads:
# 1373 "data/maps/Route110/scripts.pory"
	.string "The two roads, one above, one below…\p"
# 1374 "data/maps/Route110/scripts.pory"
	.string "A road each for people and POKéMON.\n"
# 1375 "data/maps/Route110/scripts.pory"
	.string "Perhaps that is right and fair.$"
# 1376 "data/maps/Route110/scripts.pory"

# 1377 "data/maps/Route110/scripts.pory"
Route110_Text_WalkOnTheLowRoad:
# 1378 "data/maps/Route110/scripts.pory"
	.string "I don't have a BIKE, so I'll take\n"
# 1379 "data/maps/Route110/scripts.pory"
	.string "a leisurely walk on the low road.$"
# 1380 "data/maps/Route110/scripts.pory"

# 1381 "data/maps/Route110/scripts.pory"
Route110_Text_BikeTechniques:
# 1382 "data/maps/Route110/scripts.pory"
	.string "Learning techniques will make BIKE\n"
# 1383 "data/maps/Route110/scripts.pory"
	.string "riding even more fun.\p"
# 1384 "data/maps/Route110/scripts.pory"
	.string "There are some places that you can\n"
# 1385 "data/maps/Route110/scripts.pory"
	.string "reach only by using a BIKE technique.$"
# 1386 "data/maps/Route110/scripts.pory"

# 1387 "data/maps/Route110/scripts.pory"
Route110_Text_WhichShouldIChoose:
# 1388 "data/maps/Route110/scripts.pory"
	.string "Which should I choose?\p"
# 1389 "data/maps/Route110/scripts.pory"
	.string "Make a beeline for MAUVILLE on\n"
# 1390 "data/maps/Route110/scripts.pory"
	.string "CYCLING ROAD, or take the low road\l"
# 1391 "data/maps/Route110/scripts.pory"
	.string "and look for POKéMON?$"
# 1392 "data/maps/Route110/scripts.pory"

# 1393 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingChallengeResultSummary:
# 1394 "data/maps/Route110/scripts.pory"
	.string "Number of collisions:\n"
# 1395 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_1}!\p"
# 1396 "data/maps/Route110/scripts.pory"
	.string "Total time:\n"
# 1397 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_2}!$"
# 1398 "data/maps/Route110/scripts.pory"

# 1399 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBest:
# 1400 "data/maps/Route110/scripts.pory"
	.string "Bravo! Splendid showing!\p"
# 1401 "data/maps/Route110/scripts.pory"
	.string "Your love of cycling comes from deep\n"
# 1402 "data/maps/Route110/scripts.pory"
	.string "within your heart.\l"
# 1403 "data/maps/Route110/scripts.pory"
	.string "You've shaken me to my very soul!$"
# 1404 "data/maps/Route110/scripts.pory"

# 1405 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionGood:
# 1406 "data/maps/Route110/scripts.pory"
	.string "Your technique is remarkable.\p"
# 1407 "data/maps/Route110/scripts.pory"
	.string "I suggest you speed up a bit while\n"
# 1408 "data/maps/Route110/scripts.pory"
	.string "still avoiding collisions.$"
# 1409 "data/maps/Route110/scripts.pory"

# 1410 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionOk:
# 1411 "data/maps/Route110/scripts.pory"
	.string "I would consider you a work in\n"
# 1412 "data/maps/Route110/scripts.pory"
	.string "progress.\p"
# 1413 "data/maps/Route110/scripts.pory"
	.string "Still, I hope you don't forget the\n"
# 1414 "data/maps/Route110/scripts.pory"
	.string "sheer pleasure of cycling.$"
# 1415 "data/maps/Route110/scripts.pory"

# 1416 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBad:
# 1417 "data/maps/Route110/scripts.pory"
	.string "My word… Your cycling skills border\n"
# 1418 "data/maps/Route110/scripts.pory"
	.string "on terrifying.\p"
# 1419 "data/maps/Route110/scripts.pory"
	.string "Most certainly, you need much more\n"
# 1420 "data/maps/Route110/scripts.pory"
	.string "practice riding.$"
# 1421 "data/maps/Route110/scripts.pory"

# 1422 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionWorst:
# 1423 "data/maps/Route110/scripts.pory"
	.string "…I am aghast…\p"
# 1424 "data/maps/Route110/scripts.pory"
	.string "You're perhaps not cut out for this\n"
# 1425 "data/maps/Route110/scripts.pory"
	.string "unfortunate cycling business.\p"
# 1426 "data/maps/Route110/scripts.pory"
	.string "You ought to give serious thought to\n"
# 1427 "data/maps/Route110/scripts.pory"
	.string "returning that BIKE to RYDEL.$"
# 1428 "data/maps/Route110/scripts.pory"

# 1429 "data/maps/Route110/scripts.pory"
Route110_Text_RatedForNumberOfCollisions:
# 1430 "data/maps/Route110/scripts.pory"
	.string "This is CYCLING ROAD.\p"
# 1431 "data/maps/Route110/scripts.pory"
	.string "If you were to ride from MAUVILLE to\n"
# 1432 "data/maps/Route110/scripts.pory"
	.string "SLATEPORT on a MACH BIKE, you would\l"
# 1433 "data/maps/Route110/scripts.pory"
	.string "be rated for the number of collisions\l"
# 1434 "data/maps/Route110/scripts.pory"
	.string "and your total time.$"
# 1435 "data/maps/Route110/scripts.pory"

# 1436 "data/maps/Route110/scripts.pory"
Route110_Text_AlwaysAimHigher:
# 1437 "data/maps/Route110/scripts.pory"
	.string "Regardless of the results, I count on\n"
# 1438 "data/maps/Route110/scripts.pory"
	.string "seeing more challenges from you.\l"
# 1439 "data/maps/Route110/scripts.pory"
	.string "Always aim higher!$"
# 1440 "data/maps/Route110/scripts.pory"

# 1441 "data/maps/Route110/scripts.pory"
Route110_Text_AcroBikesDoNotQualify:
# 1442 "data/maps/Route110/scripts.pory"
	.string "On this CYCLING ROAD, those riding\n"
# 1443 "data/maps/Route110/scripts.pory"
	.string "MACH BIKES are rated for their number\l"
# 1444 "data/maps/Route110/scripts.pory"
	.string "of collisions and their total times.\p"
# 1445 "data/maps/Route110/scripts.pory"
	.string "ACRO BIKES do not qualify for rating.\n"
# 1446 "data/maps/Route110/scripts.pory"
	.string "They are easy to turn, so it's not fair.$"
# 1447 "data/maps/Route110/scripts.pory"

# 1448 "data/maps/Route110/scripts.pory"
Route110_Text_SlateportCitySign:
# 1449 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 1450 "data/maps/Route110/scripts.pory"
	.string "{DOWN_ARROW} SLATEPORT CITY$"
# 1451 "data/maps/Route110/scripts.pory"

# 1452 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingRoadSign:
# 1453 "data/maps/Route110/scripts.pory"
	.string "SEASIDE CYCLING ROAD$"
# 1454 "data/maps/Route110/scripts.pory"

# 1455 "data/maps/Route110/scripts.pory"
Route110_Text_AquaWasHere:
# 1456 "data/maps/Route110/scripts.pory"
	.string "“TEAM AQUA was here!”\p"
# 1457 "data/maps/Route110/scripts.pory"
	.string "Someone painted that onto this sign,\n"
# 1458 "data/maps/Route110/scripts.pory"
	.string "but then someone else painted over it.\p"
# 1459 "data/maps/Route110/scripts.pory"
	.string "“TEAM MAGMA rules!” is what it\n"
# 1460 "data/maps/Route110/scripts.pory"
	.string "says now.$"
# 1461 "data/maps/Route110/scripts.pory"

# 1462 "data/maps/Route110/scripts.pory"
Route110_Text_Route103Sign:
# 1463 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 1464 "data/maps/Route110/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 103$"
# 1465 "data/maps/Route110/scripts.pory"

# 1466 "data/maps/Route110/scripts.pory"
Route110_Text_SeasideParkingSign:
# 1467 "data/maps/Route110/scripts.pory"
	.string "SEASIDE PARKING$"
# 1468 "data/maps/Route110/scripts.pory"

# 1469 "data/maps/Route110/scripts.pory"
Route110_Text_MauvilleCitySign:
# 1470 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 1471 "data/maps/Route110/scripts.pory"
	.string "{UP_ARROW} MAUVILLE CITY$"
# 1472 "data/maps/Route110/scripts.pory"

# 1473 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsPrlzSleep:
# 1474 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 1475 "data/maps/Route110/scripts.pory"
	.string "The foe can be made helpless by\n"
# 1476 "data/maps/Route110/scripts.pory"
	.string "paralyzing it or causing it to sleep.\p"
# 1477 "data/maps/Route110/scripts.pory"
	.string "It is an important technique for\n"
# 1478 "data/maps/Route110/scripts.pory"
	.string "POKéMON battles.$"
# 1479 "data/maps/Route110/scripts.pory"

# 1480 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsRegisterItems:
# 1481 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 1482 "data/maps/Route110/scripts.pory"
	.string "The items in the BAG can be reorganized\n"
# 1483 "data/maps/Route110/scripts.pory"
	.string "by pressing SELECT.$"
# 1484 "data/maps/Route110/scripts.pory"

# 1485 "data/maps/Route110/scripts.pory"
Route110_Text_TrickHouseSign:
# 1486 "data/maps/Route110/scripts.pory"
	.string "“Three steps {RIGHT_ARROW} and two steps {UP_ARROW}\n"
# 1487 "data/maps/Route110/scripts.pory"
	.string "to reach the wondrous TRICK HOUSE.”$"
# 1488 "data/maps/Route110/scripts.pory"

# 1489 "data/maps/Route110/scripts.pory"
Route110_Text_BestRecord:
# 1490 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 1491 "data/maps/Route110/scripts.pory"
	.string "No. of collisions: {STR_VAR_1}\p"
# 1492 "data/maps/Route110/scripts.pory"
	.string "Elapsed time: {STR_VAR_2}$"
# 1493 "data/maps/Route110/scripts.pory"

# 1494 "data/maps/Route110/scripts.pory"
Route110_Text_ThereIsNoRecord:
# 1495 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 1496 "data/maps/Route110/scripts.pory"
	.string "No one seems to have taken the\n"
# 1497 "data/maps/Route110/scripts.pory"
	.string "challenge. There is no record…$"

Route110_Text_SpencerEvolved::
# 843 "data/maps/Route110/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "I have some exciting news to share!\l"
	.string "While I was training in the grass here,\l"
	.string "my TREECKO evolved!\l"
	.string "Isn't that amazing?\p"
	.string "Also, I have--$"

Route110_Text_BrenEvolved::
# 852 "data/maps/Route110/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "I have some exciting news to share!\l"
	.string "While I was training in the grass here,\l"
	.string "my PIPLUP evolved!\l"
	.string "Isn't that amazing?\p"
	.string "Also, I have--$"

Route110_Text_KyleEvolved::
# 861 "data/maps/Route110/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "I have some exciting news to share!\l"
	.string "While I was training in the grass here,\l"
	.string "my CHARMANDER evolved!\l"
	.string "Isn't that amazing?\p"
	.string "Also, I have--$"

Route110_Text_SpencerAlmostMissedYou::
# 870 "data/maps/Route110/scripts.pory"
	.string "SPENCER: Oh, hey!\n"
	.string "I almost missed you there!\l"
	.string "What's going on, you two?$"

Route110_Text_BrenAlmostMissedYou::
# 876 "data/maps/Route110/scripts.pory"
	.string "BREN: Oh, hey!\n"
	.string "I almost missed you there!\l"
	.string "What's going on, you two?$"

Route110_Text_KyleAlmostMissedYou::
# 882 "data/maps/Route110/scripts.pory"
	.string "KYLE: Oh, hey!\n"
	.string "I almost missed you there!\l"
	.string "What's going on, you two?$"

Route110_Text_SpencerBoughtItemfinders::
# 888 "data/maps/Route110/scripts.pory"
	.string "SPENCER: Yo, {RIVAL}!\n"
	.string "I was just telling {PLAYER} here that\l"
	.string "I spent my battle earnings on some\l"
	.string "Dowsing Machines for the three of us.\l"
	.string "Here. Take one!$"

Route110_Text_BrenBoughtItemfinders::
# 896 "data/maps/Route110/scripts.pory"
	.string "BREN: Yo, {RIVAL}!\n"
	.string "I was just telling {PLAYER} here that\l"
	.string "I spent my battle earnings on some\l"
	.string "Dowsing Machines for the three of us.\l"
	.string "Here. Take one!$"

Route110_Text_KyleBoughtItemfinders::
# 904 "data/maps/Route110/scripts.pory"
	.string "KYLE: Yo, {RIVAL}!\n"
	.string "I was just telling {PLAYER} here that\l"
	.string "I spent my battle earnings on some\l"
	.string "Dowsing Machines for the three of us.\l"
	.string "Here. Take one!$"

Route110_Text_AndOneForYou::
# 912 "data/maps/Route110/scripts.pory"
	.string "And one for you.$"

Route110_Text_SpencerLetsLookAround::
# 916 "data/maps/Route110/scripts.pory"
	.string "SPENCER: I thought we could use these\n"
	.string "to look for treasure together! I bet\l"
	.string "the people up on the bike path\l"
	.string "accidentally drop items over the side\l"
	.string "all the time!\p"
	.string "Let's look around and see\n"
	.string "what we can find!$"

Route110_Text_BrenLetsLookAround::
# 926 "data/maps/Route110/scripts.pory"
	.string "BREN: I thought we could use these\n"
	.string "to look for treasure together! I bet\l"
	.string "the people up on the bike path\l"
	.string "accidentally drop items over the side\l"
	.string "all the time!\p"
	.string "Let's look around and see\n"
	.string "what we can find!$"

Route110_Text_KyleLetsLookAround::
# 936 "data/maps/Route110/scripts.pory"
	.string "KYLE: I thought we could use these\n"
	.string "to look for treasure together! I bet\l"
	.string "the people up on the bike path\l"
	.string "accidentally drop items over the side\l"
	.string "all the time!\p"
	.string "Let's look around and see\n"
	.string "what we can find!$"

Route110_Text_SpencerLetsGo::
# 946 "data/maps/Route110/scripts.pory"
	.string "SPENCER: I'll bet I can find a\n"
	.string "huge NUGGET with this thing!\p"
	.string "Let's go!$"

Route110_Text_BrenLetsGo::
# 952 "data/maps/Route110/scripts.pory"
	.string "BREN: I'll bet I can find a\n"
	.string "huge NUGGET with this thing!\p"
	.string "Let's go!$"

Route110_Text_KyleLetsGo::
# 958 "data/maps/Route110/scripts.pory"
	.string "KYLE: I'll bet I can find a\n"
	.string "huge NUGGET with this thing!\p"
	.string "Let's go!$"

Route110_Text_SpencerCantFindItem::
# 964 "data/maps/Route110/scripts.pory"
	.string "The Dowsing Machine says I'm close,\n"
	.string "but I can't seem to find the item.\l"
	.string "Hmmm…$"

Route110_Text_BrenCantFindItem::
# 970 "data/maps/Route110/scripts.pory"
	.string "The Dowsing Machine says I'm close,\n"
	.string "but I can't seem to find the item.\l"
	.string "Hmmm…$"

Route110_Text_KyleCantFindItem::
# 976 "data/maps/Route110/scripts.pory"
	.string "The Dowsing Machine says I'm close,\n"
	.string "but I can't seem to find the item.\l"
	.string "Hmmm…$"

Route110_Text_SpencerStupidMachine::
# 982 "data/maps/Route110/scripts.pory"
	.string "Aw. Now it isn't locating the item at all.\n"
	.string "Stupid machine!$"

Route110_Text_BrenStupidMachine::
# 987 "data/maps/Route110/scripts.pory"
	.string "Aw. Now it isn't locating the item at all.\n"
	.string "Stupid machine!$"

Route110_Text_KyleStupidMachine::
# 992 "data/maps/Route110/scripts.pory"
	.string "Aw. Now it isn't locating the item at all.\n"
	.string "Stupid machine!$"

Route110_Text_SpencerFoundSuperPotion::
# 997 "data/maps/Route110/scripts.pory"
	.string "I found a SUPER POTION while dowsing.\n"
	.string "I already have plenty, so why don't you\l"
	.string "take it?\l"
	.string "Here!$"

Route110_Text_BrenFoundSuperPotion::
# 1003 "data/maps/Route110/scripts.pory"
	.string "I found a SUPER POTION while dowsing.\n"
	.string "I already have plenty, so why don't you\l"
	.string "take it?\l"
	.string "Here!$"

Route110_Text_KyleFoundSuperPotion::
# 1009 "data/maps/Route110/scripts.pory"
	.string "I found a SUPER POTION while dowsing.\n"
	.string "I already have plenty, so why don't you\l"
	.string "take it?\l"
	.string "Here!$"

Route110_Text_SpencerKeepLooking::
# 1015 "data/maps/Route110/scripts.pory"
	.string "The search continues!\n"
	.string "I'll let you know if I find anything else.$"

Route110_Text_BrenKeepLooking::
# 1020 "data/maps/Route110/scripts.pory"
	.string "The search continues!\n"
	.string "I'll let you know if I find anything else.$"

Route110_Text_KyleKeepLooking::
# 1025 "data/maps/Route110/scripts.pory"
	.string "The search continues!\n"
	.string "I'll let you know if I find anything else.$"

Route110_Text_SpencerDidntFindAnything::
# 1030 "data/maps/Route110/scripts.pory"
	.string "{PLAYER}!\n"
	.string "Did you get a good haul of treasure?\l"
	.string "I only found junk.\l"
	.string "Oh, well.\l"
	.string "At least I got some good battles in.\p"
	.string "I hope--$"

Route110_Text_BrenDidntFindAnything::
# 1039 "data/maps/Route110/scripts.pory"
	.string "{PLAYER}!\n"
	.string "Did you get a good haul of treasure?\l"
	.string "I only found junk.\l"
	.string "Oh, well.\l"
	.string "At least I got some good battles in.\p"
	.string "I hope--$"

Route110_Text_KyleDidntFindAnything::
# 1048 "data/maps/Route110/scripts.pory"
	.string "{PLAYER}!\n"
	.string "Did you get a good haul of treasure?\l"
	.string "I only found junk.\l"
	.string "Oh, well.\l"
	.string "At least I got some good battles in.\p"
	.string "I hope--$"

Route110_Text_SpencerAlmostMissedYouRevenge::
# 1057 "data/maps/Route110/scripts.pory"
	.string "SPENCER: Oh, hey!\n"
	.string "I almost missed you there!\l"
	.string "Are you guys done dowsing for items?\p"
	.string "I'm headed to the GYM in MAUVILLE.\n"
	.string "Catch up if you think you can!$"

Route110_Text_BrenAlmostMissedYouRevenge::
# 1065 "data/maps/Route110/scripts.pory"
	.string "BREN: Oh, hey!\n"
	.string "I almost missed you there!\l"
	.string "Are you guys done dowsing for items?\p"
	.string "I'm headed to the GYM in MAUVILLE.\n"
	.string "Catch up if you think you can!$"

Route110_Text_KyleAlmostMissedYouRevenge::
# 1073 "data/maps/Route110/scripts.pory"
	.string "KYLE: Oh, hey!\n"
	.string "I almost missed you there!\l"
	.string "Are you guys done dowsing for items?\p"
	.string "I'm headed to the GYM in MAUVILLE.\n"
	.string "Catch up if you think you can!$"

Route110_Text_SpencerTasteMyOwnMedicine::
# 1081 "data/maps/Route110/scripts.pory"
	.string "Did I just get a taste of\n"
	.string "my own medicine…?\p"
	.string "Anyway…\n"
	.string "I hear tell that there is a quaint\l"
	.string "little bike shop in MAUVILLE.\l"
	.string "I think I'll go check it out!\l"
	.string "Feel free to join me if you like.$"

Route110_Text_BrenTasteMyOwnMedicine::
# 1091 "data/maps/Route110/scripts.pory"
	.string "Did I just get a taste of\n"
	.string "my own medicine…?\p"
	.string "Anyway…\n"
	.string "I hear tell that there is a quaint\l"
	.string "little bike shop in MAUVILLE.\l"
	.string "I think I'll go check it out!\l"
	.string "Feel free to join me if you like.$"

Route110_Text_KyleTasteMyOwnMedicine::
# 1101 "data/maps/Route110/scripts.pory"
	.string "Did I just get a taste of\n"
	.string "my own medicine…?\p"
	.string "Anyway…\n"
	.string "I hear tell that there is a quaint\l"
	.string "little bike shop in MAUVILLE.\l"
	.string "I think I'll go check it out!\l"
	.string "Feel free to join me if you like.$"

Route110_Text_ImagineSeeingYouHere::
# 1500 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
	.string "Imagine seeing you here!$"

Route110_Text_HeardYouInstallMatchCall::
# 1505 "data/maps/Route110/scripts.pory"
	.string "I saw {RIVAL2} and {RIVAL}\n"
	.string "run by here not too long ago.\l"
	.string "You boys sure are full of energy,\l"
	.string "aren't you?\p"
	.string "Oh, yes, I heard that your POKéNAV\n"
	.string "had the MATCH CALL system installed.\p"
	.string "Well, then, I should register you in\n"
	.string "my POKéNAV as well.\p"
	.string "That way, even when we're apart,\n"
	.string "I can rate your POKéDEX anytime.\p"
	.string "… … … … … …$"

Route110_Text_RegisteredBirchInPokenav::
# 1519 "data/maps/Route110/scripts.pory"
	.string "Registered PROF. BIRCH\n"
	.string "in the POKéNAV.$"

Route110_Text_KeepAnEyeOutForRival::
# 1524 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: {PLAYER}{KUN}…\p"
	.string "Make sure you three keep an eye out for\n"
	.string "each other.\n"
	.string "… … … … … …\p"
	.string "Well, I had better get going.\n"
	.string "See you again, {PLAYER}{KUN}!$"
