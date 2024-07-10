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
	fadedefaultbgm
# 497 "data/maps/Route110/scripts.pory"
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
	applymovement 36, Rival1ExtraStep
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
# 502 "data/maps/Route110/scripts.pory"
	lock
# 503 "data/maps/Route110/scripts.pory"
	checkflag FLAG_HIDDEN_ITEM_ROUTE_110_REVIVE
# 504 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route110_EventScript_Rival1_2
# 522 "data/maps/Route110/scripts.pory"
	applymovement 37, Common_Movement_FacePlayer
# 523 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 524 "data/maps/Route110/scripts.pory"
	rival1talk Route110_Text_SpencerStupidMachine, Route110_Text_BrenStupidMachine, Route110_Text_KyleStupidMachine
Route110_EventScript_Rival1_1:
# 528 "data/maps/Route110/scripts.pory"
	release
	end

Route110_EventScript_Rival1_2:
# 505 "data/maps/Route110/scripts.pory"
	playse SE_ITEMFINDER
# 506 "data/maps/Route110/scripts.pory"
	waitse
# 507 "data/maps/Route110/scripts.pory"
	playse SE_ITEMFINDER
# 508 "data/maps/Route110/scripts.pory"
	waitse
# 509 "data/maps/Route110/scripts.pory"
	playse SE_ITEMFINDER
# 510 "data/maps/Route110/scripts.pory"
	waitse
# 511 "data/maps/Route110/scripts.pory"
	applymovement 37, Route110_Movement_Rival1Itemfinder
# 512 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 513 "data/maps/Route110/scripts.pory"
	applymovement 37, Common_Movement_FacePlayer
# 514 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 515 "data/maps/Route110/scripts.pory"
	rival1talk Route110_Text_SpencerCantFindItem, Route110_Text_BrenCantFindItem, Route110_Text_KyleCantFindItem
# 518 "data/maps/Route110/scripts.pory"
	applymovement 37, Common_Movement_WalkInPlaceFasterRight
# 519 "data/maps/Route110/scripts.pory"
	waitmovement 0
	goto Route110_EventScript_Rival1_1


# 532 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer1:
# 533 "data/maps/Route110/scripts.pory"
	walk_down
# 534 "data/maps/Route110/scripts.pory"
	walk_left
# 535 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
	step_end

# 538 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer2:
# 539 "data/maps/Route110/scripts.pory"
	walk_down
	step_end

# 542 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer3:
# 543 "data/maps/Route110/scripts.pory"
	walk_down
# 544 "data/maps/Route110/scripts.pory"
	walk_right
# 545 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
	step_end

# 548 "data/maps/Route110/scripts.pory"
Route110_Movement_PlayerWatchRival1RunIn1:
# 549 "data/maps/Route110/scripts.pory"
	face_down
# 550 "data/maps/Route110/scripts.pory"
	delay_4
# 550 "data/maps/Route110/scripts.pory"
	delay_4
# 550 "data/maps/Route110/scripts.pory"
	delay_4
# 550 "data/maps/Route110/scripts.pory"
	delay_4
# 550 "data/maps/Route110/scripts.pory"
	delay_4
# 551 "data/maps/Route110/scripts.pory"
	walk_in_place_right
# 552 "data/maps/Route110/scripts.pory"
	delay_8
# 553 "data/maps/Route110/scripts.pory"
	walk_in_place_up
# 554 "data/maps/Route110/scripts.pory"
	delay_4
# 554 "data/maps/Route110/scripts.pory"
	delay_4
# 554 "data/maps/Route110/scripts.pory"
	delay_4
# 555 "data/maps/Route110/scripts.pory"
	delay_16
# 555 "data/maps/Route110/scripts.pory"
	delay_16
# 555 "data/maps/Route110/scripts.pory"
	delay_16
# 555 "data/maps/Route110/scripts.pory"
	delay_16
# 556 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_right
	step_end

# 559 "data/maps/Route110/scripts.pory"
Route110_Movement_Rival2WatchRival1RunIn1:
# 560 "data/maps/Route110/scripts.pory"
	emote_exclamation_mark
# 561 "data/maps/Route110/scripts.pory"
	face_down
# 562 "data/maps/Route110/scripts.pory"
	delay_4
# 562 "data/maps/Route110/scripts.pory"
	delay_4
# 562 "data/maps/Route110/scripts.pory"
	delay_4
# 562 "data/maps/Route110/scripts.pory"
	delay_4
# 562 "data/maps/Route110/scripts.pory"
	delay_4
# 562 "data/maps/Route110/scripts.pory"
	delay_4
# 563 "data/maps/Route110/scripts.pory"
	walk_in_place_right
# 564 "data/maps/Route110/scripts.pory"
	delay_8
# 565 "data/maps/Route110/scripts.pory"
	walk_in_place_up
# 566 "data/maps/Route110/scripts.pory"
	delay_4
# 566 "data/maps/Route110/scripts.pory"
	delay_4
# 567 "data/maps/Route110/scripts.pory"
	delay_16
# 567 "data/maps/Route110/scripts.pory"
	delay_16
# 567 "data/maps/Route110/scripts.pory"
	delay_16
# 567 "data/maps/Route110/scripts.pory"
	delay_16
# 568 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_right
	step_end

# 571 "data/maps/Route110/scripts.pory"
Route110_Movement_Rival1RunsIn1:
# 572 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 572 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 572 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 572 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 572 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 572 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 572 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 572 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 572 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 572 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 573 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 573 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 573 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 573 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 573 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 573 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 574 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 574 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 574 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 575 "data/maps/Route110/scripts.pory"
	walk_fast_left
	step_end

# 578 "data/maps/Route110/scripts.pory"
Route110_Movement_PlayerWatchRival1RunIn2and3:
# 579 "data/maps/Route110/scripts.pory"
	face_down
# 580 "data/maps/Route110/scripts.pory"
	delay_4
# 580 "data/maps/Route110/scripts.pory"
	delay_4
# 580 "data/maps/Route110/scripts.pory"
	delay_4
# 580 "data/maps/Route110/scripts.pory"
	delay_4
# 580 "data/maps/Route110/scripts.pory"
	delay_4
# 581 "data/maps/Route110/scripts.pory"
	walk_in_place_left
# 582 "data/maps/Route110/scripts.pory"
	delay_8
# 583 "data/maps/Route110/scripts.pory"
	walk_in_place_up
# 584 "data/maps/Route110/scripts.pory"
	delay_4
# 584 "data/maps/Route110/scripts.pory"
	delay_4
# 584 "data/maps/Route110/scripts.pory"
	delay_4
# 585 "data/maps/Route110/scripts.pory"
	delay_16
# 585 "data/maps/Route110/scripts.pory"
	delay_16
# 585 "data/maps/Route110/scripts.pory"
	delay_16
# 585 "data/maps/Route110/scripts.pory"
	delay_16
# 586 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_left
	step_end

# 589 "data/maps/Route110/scripts.pory"
Route110_Movement_Rival2WatchRival1RunIn2and3:
# 590 "data/maps/Route110/scripts.pory"
	emote_exclamation_mark
# 591 "data/maps/Route110/scripts.pory"
	face_down
# 592 "data/maps/Route110/scripts.pory"
	delay_4
# 592 "data/maps/Route110/scripts.pory"
	delay_4
# 592 "data/maps/Route110/scripts.pory"
	delay_4
# 592 "data/maps/Route110/scripts.pory"
	delay_4
# 592 "data/maps/Route110/scripts.pory"
	delay_4
# 592 "data/maps/Route110/scripts.pory"
	delay_4
# 593 "data/maps/Route110/scripts.pory"
	walk_in_place_left
# 594 "data/maps/Route110/scripts.pory"
	delay_8
# 595 "data/maps/Route110/scripts.pory"
	walk_in_place_up
# 596 "data/maps/Route110/scripts.pory"
	delay_4
# 596 "data/maps/Route110/scripts.pory"
	delay_4
# 597 "data/maps/Route110/scripts.pory"
	delay_16
# 597 "data/maps/Route110/scripts.pory"
	delay_16
# 597 "data/maps/Route110/scripts.pory"
	delay_16
# 597 "data/maps/Route110/scripts.pory"
	delay_16
# 598 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_left
	step_end

# 601 "data/maps/Route110/scripts.pory"
Route110_Movement_Rival1RunsIn2and3:
# 602 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 602 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 602 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 602 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 602 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 602 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 602 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 602 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 602 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 602 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 603 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 603 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 603 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 603 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 603 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 603 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 604 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 604 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 604 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 605 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_right
	step_end

# 608 "data/maps/Route110/scripts.pory"
Rival1ExtraStep:
# 609 "data/maps/Route110/scripts.pory"
	walk_fast_right
	step_end

# 612 "data/maps/Route110/scripts.pory"
Route110_Movement_Rival1Exit:
# 613 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 614 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 615 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 616 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 617 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 618 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 619 "data/maps/Route110/scripts.pory"
	walk_fast_up
	step_end

# 622 "data/maps/Route110/scripts.pory"
Route110_Movement_Rival2Exit:
# 623 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_up
# 624 "data/maps/Route110/scripts.pory"
	delay_8
# 624 "data/maps/Route110/scripts.pory"
	delay_8
# 624 "data/maps/Route110/scripts.pory"
	delay_8
# 625 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 626 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 627 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 628 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 629 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 630 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 631 "data/maps/Route110/scripts.pory"
	walk_fast_up
	step_end

# 634 "data/maps/Route110/scripts.pory"
Route110_Movement_Rival1Itemfinder:
# 635 "data/maps/Route110/scripts.pory"
	walk_in_place_right
# 636 "data/maps/Route110/scripts.pory"
	delay_16
# 636 "data/maps/Route110/scripts.pory"
	delay_16
	step_end

# 790 "data/maps/Route110/scripts.pory"

# 791 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene1::
# 792 "data/maps/Route110/scripts.pory"
	lockall
# 793 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 794 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 795 "data/maps/Route110/scripts.pory"

# 796 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene2::
# 797 "data/maps/Route110/scripts.pory"
	lockall
# 798 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 799 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 800 "data/maps/Route110/scripts.pory"

# 801 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene3::
# 802 "data/maps/Route110/scripts.pory"
	lockall
# 803 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 804 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 805 "data/maps/Route110/scripts.pory"

# 806 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene4::
# 807 "data/maps/Route110/scripts.pory"
	lockall
# 808 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 4
# 809 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 810 "data/maps/Route110/scripts.pory"

# 811 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene::
# 812 "data/maps/Route110/scripts.pory"
	addobject LOCALID_BIRCH
# 813 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchEntrance
# 814 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 815 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 816 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 817 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 818 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_Delay48
# 819 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 820 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchApproachPlayer1
# 821 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchApproachPlayer2
# 822 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchApproachPlayer3
# 823 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchApproachPlayer4
# 824 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ImagineSeeingYouHere, MSGBOX_DEFAULT
# 825 "data/maps/Route110/scripts.pory"
	closemessage
# 826 "data/maps/Route110/scripts.pory"
	delay 20
# 827 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterUp
# 828 "data/maps/Route110/scripts.pory"
	delay 40
# 829 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterDown
# 830 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 831 "data/maps/Route110/scripts.pory"
	delay 30
# 832 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HeardYouInstallMatchCall, MSGBOX_DEFAULT
# 833 "data/maps/Route110/scripts.pory"
	closemessage
# 834 "data/maps/Route110/scripts.pory"
	delay 30
# 835 "data/maps/Route110/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 836 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RegisteredBirchInPokenav, MSGBOX_DEFAULT
# 837 "data/maps/Route110/scripts.pory"
	waitfanfare
# 838 "data/maps/Route110/scripts.pory"
	closemessage
# 839 "data/maps/Route110/scripts.pory"
	delay 30
# 840 "data/maps/Route110/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 841 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KeepAnEyeOutForRival, MSGBOX_DEFAULT
# 842 "data/maps/Route110/scripts.pory"
	closemessage
# 843 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchExit1
# 844 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchExit2
# 845 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchExit3
# 846 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchExit4
# 847 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_BIRCH
# 848 "data/maps/Route110/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 849 "data/maps/Route110/scripts.pory"
	setflag FLAG_HIDE_ROUTE_110_RIVAL1
# 850 "data/maps/Route110/scripts.pory"
	setflag FLAG_HIDE_SEASHORE_HOUSE_RIVAL2
# 851 "data/maps/Route110/scripts.pory"
	setvar VAR_SEASHORE_HOUSE_RIVAL_STATE, 1
# 852 "data/maps/Route110/scripts.pory"
	releaseall
# 853 "data/maps/Route110/scripts.pory"
	end
# 854 "data/maps/Route110/scripts.pory"

# 855 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer1::
# 856 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer1
# 857 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 858 "data/maps/Route110/scripts.pory"
	return
# 859 "data/maps/Route110/scripts.pory"

# 860 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer2::
# 861 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer2
# 862 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 863 "data/maps/Route110/scripts.pory"
	return
# 864 "data/maps/Route110/scripts.pory"

# 865 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer3::
# 866 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer3
# 867 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 868 "data/maps/Route110/scripts.pory"
	return
# 869 "data/maps/Route110/scripts.pory"

# 870 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer4::
# 871 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer4
# 872 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 873 "data/maps/Route110/scripts.pory"
	return
# 874 "data/maps/Route110/scripts.pory"

# 875 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit1::
# 876 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit1
# 877 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 878 "data/maps/Route110/scripts.pory"
	return
# 879 "data/maps/Route110/scripts.pory"

# 880 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit2::
# 881 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit2
# 882 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 883 "data/maps/Route110/scripts.pory"
	return
# 884 "data/maps/Route110/scripts.pory"

# 885 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit3::
# 886 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit3
# 887 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 888 "data/maps/Route110/scripts.pory"
	return
# 889 "data/maps/Route110/scripts.pory"

# 890 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit4::
# 891 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit4
# 892 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 893 "data/maps/Route110/scripts.pory"
	return
# 894 "data/maps/Route110/scripts.pory"

# 895 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchEntrance:
# 896 "data/maps/Route110/scripts.pory"
	walk_down
# 897 "data/maps/Route110/scripts.pory"
	walk_down
# 898 "data/maps/Route110/scripts.pory"
	walk_down
# 899 "data/maps/Route110/scripts.pory"
	step_end
# 900 "data/maps/Route110/scripts.pory"

# 901 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer1:
# 902 "data/maps/Route110/scripts.pory"
	walk_down
# 903 "data/maps/Route110/scripts.pory"
	walk_left
# 904 "data/maps/Route110/scripts.pory"
	walk_left
# 905 "data/maps/Route110/scripts.pory"
	walk_down
# 906 "data/maps/Route110/scripts.pory"
	step_end
# 907 "data/maps/Route110/scripts.pory"

# 908 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer2:
# 909 "data/maps/Route110/scripts.pory"
	walk_down
# 910 "data/maps/Route110/scripts.pory"
	walk_left
# 911 "data/maps/Route110/scripts.pory"
	walk_down
# 912 "data/maps/Route110/scripts.pory"
	step_end
# 913 "data/maps/Route110/scripts.pory"

# 914 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer3:
# 915 "data/maps/Route110/scripts.pory"
	walk_down
# 916 "data/maps/Route110/scripts.pory"
	walk_down
# 917 "data/maps/Route110/scripts.pory"
	step_end
# 918 "data/maps/Route110/scripts.pory"

# 919 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer4:
# 920 "data/maps/Route110/scripts.pory"
	walk_down
# 921 "data/maps/Route110/scripts.pory"
	walk_right
# 922 "data/maps/Route110/scripts.pory"
	walk_down
# 923 "data/maps/Route110/scripts.pory"
	step_end
# 924 "data/maps/Route110/scripts.pory"

# 925 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit1:
# 926 "data/maps/Route110/scripts.pory"
	walk_up
# 927 "data/maps/Route110/scripts.pory"
	walk_up
# 928 "data/maps/Route110/scripts.pory"
	walk_right
# 929 "data/maps/Route110/scripts.pory"
	walk_up
# 930 "data/maps/Route110/scripts.pory"
	walk_up
# 931 "data/maps/Route110/scripts.pory"
	walk_up
# 932 "data/maps/Route110/scripts.pory"
	step_end
# 933 "data/maps/Route110/scripts.pory"

# 934 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit2:
# 935 "data/maps/Route110/scripts.pory"
	walk_up
# 936 "data/maps/Route110/scripts.pory"
	walk_up
# 937 "data/maps/Route110/scripts.pory"
	walk_up
# 938 "data/maps/Route110/scripts.pory"
	walk_up
# 939 "data/maps/Route110/scripts.pory"
	walk_up
# 940 "data/maps/Route110/scripts.pory"
	step_end
# 941 "data/maps/Route110/scripts.pory"

# 942 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit3:
# 943 "data/maps/Route110/scripts.pory"
	walk_up
# 944 "data/maps/Route110/scripts.pory"
	walk_up
# 945 "data/maps/Route110/scripts.pory"
	walk_up
# 946 "data/maps/Route110/scripts.pory"
	walk_up
# 947 "data/maps/Route110/scripts.pory"
	walk_up
# 948 "data/maps/Route110/scripts.pory"
	step_end
# 949 "data/maps/Route110/scripts.pory"

# 950 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit4:
# 951 "data/maps/Route110/scripts.pory"
	walk_up
# 952 "data/maps/Route110/scripts.pory"
	walk_up
# 953 "data/maps/Route110/scripts.pory"
	walk_up
# 954 "data/maps/Route110/scripts.pory"
	walk_up
# 955 "data/maps/Route110/scripts.pory"
	walk_up
# 956 "data/maps/Route110/scripts.pory"
	step_end
# 957 "data/maps/Route110/scripts.pory"

# 958 "data/maps/Route110/scripts.pory"
Route110_Text_WeCantTalkAboutAquaActivities:
# 959 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's activities…\n"
# 960 "data/maps/Route110/scripts.pory"
	.string "We can't talk about them yet.$"
# 961 "data/maps/Route110/scripts.pory"

# 962 "data/maps/Route110/scripts.pory"
Route110_Text_KickUpARuckus:
# 963 "data/maps/Route110/scripts.pory"
	.string "I want to get going to SLATEPORT and\n"
# 964 "data/maps/Route110/scripts.pory"
	.string "kick up a ruckus!$"
# 965 "data/maps/Route110/scripts.pory"

# 966 "data/maps/Route110/scripts.pory"
Route110_Text_MyFirstJobInAqua:
# 967 "data/maps/Route110/scripts.pory"
	.string "This is my first job after joining\n"
# 968 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA. It's a little scary.$"
# 969 "data/maps/Route110/scripts.pory"

# 970 "data/maps/Route110/scripts.pory"
Route110_Text_AquaActionsBringSmiles:
# 971 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's actions should bring\n"
# 972 "data/maps/Route110/scripts.pory"
	.string "smiles to people's faces!$"
# 973 "data/maps/Route110/scripts.pory"

# 974 "data/maps/Route110/scripts.pory"
Route110_Text_MayLetsBattle:
# 975 "data/maps/Route110/scripts.pory"
	.string "MAY: Hi, {PLAYER}{KUN}, long time no see!\p"
# 976 "data/maps/Route110/scripts.pory"
	.string "While I was searching for other\n"
# 977 "data/maps/Route110/scripts.pory"
	.string "POKéMON, my POKéMON grew stronger.\p"
# 978 "data/maps/Route110/scripts.pory"
	.string "So…\n"
# 979 "data/maps/Route110/scripts.pory"
	.string "How about a little battle?$"
# 980 "data/maps/Route110/scripts.pory"

# 981 "data/maps/Route110/scripts.pory"
Route110_Text_MayDefeated:
# 982 "data/maps/Route110/scripts.pory"
	.string "Yikes!\n"
# 983 "data/maps/Route110/scripts.pory"
	.string "You're better than I expected!$"
# 984 "data/maps/Route110/scripts.pory"

# 985 "data/maps/Route110/scripts.pory"
Route110_Text_MayTakeThis:
# 986 "data/maps/Route110/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, you've been busy\n"
# 987 "data/maps/Route110/scripts.pory"
	.string "training, too, haven't you?\p"
# 988 "data/maps/Route110/scripts.pory"
	.string "I think you deserve a reward!\n"
# 989 "data/maps/Route110/scripts.pory"
	.string "This is from me!$"
# 990 "data/maps/Route110/scripts.pory"

# 991 "data/maps/Route110/scripts.pory"
Route110_Text_MayExplainItemfinder:
# 992 "data/maps/Route110/scripts.pory"
	.string "MAY: That's an ITEMFINDER.\p"
# 993 "data/maps/Route110/scripts.pory"
	.string "Try it out. If there is an item that's\n"
# 994 "data/maps/Route110/scripts.pory"
	.string "not visible, it emits a sound.\p"
# 995 "data/maps/Route110/scripts.pory"
	.string "Okay, {PLAYER}{KUN}, let's meet again!\p"
# 996 "data/maps/Route110/scripts.pory"
	.string "I know it's a little silly coming from\n"
# 997 "data/maps/Route110/scripts.pory"
	.string "me, but I think you should train a lot\l"
# 998 "data/maps/Route110/scripts.pory"
	.string "harder for the next time.$"
# 999 "data/maps/Route110/scripts.pory"

# 1000 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanLetsBattle:
# 1001 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}.\n"
# 1002 "data/maps/Route110/scripts.pory"
	.string "So this is where you were.\l"
# 1003 "data/maps/Route110/scripts.pory"
	.string "How's it going?\p"
# 1004 "data/maps/Route110/scripts.pory"
	.string "Have you been raising your POKéMON?\n"
# 1005 "data/maps/Route110/scripts.pory"
	.string "I'll check for you.$"
# 1006 "data/maps/Route110/scripts.pory"

# 1007 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanDefeated:
# 1008 "data/maps/Route110/scripts.pory"
	.string "Hmm…\n"
# 1009 "data/maps/Route110/scripts.pory"
	.string "You're pretty good.$"
# 1010 "data/maps/Route110/scripts.pory"

# 1011 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanTakeThis:
# 1012 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: {PLAYER}, you've trained\n"
# 1013 "data/maps/Route110/scripts.pory"
	.string "without me noticing…\p"
# 1014 "data/maps/Route110/scripts.pory"
	.string "Good enough!\n"
# 1015 "data/maps/Route110/scripts.pory"
	.string "Here, take this.$"
# 1016 "data/maps/Route110/scripts.pory"

# 1017 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanExplainItemfinder:
# 1018 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: That's an ITEMFINDER.\p"
# 1019 "data/maps/Route110/scripts.pory"
	.string "Use it to root around for items that\n"
# 1020 "data/maps/Route110/scripts.pory"
	.string "aren't visible.\p"
# 1021 "data/maps/Route110/scripts.pory"
	.string "If it senses something, it emits\n"
# 1022 "data/maps/Route110/scripts.pory"
	.string "a sound.\p"
# 1023 "data/maps/Route110/scripts.pory"
	.string "Anyway, I'm off to look for new\n"
# 1024 "data/maps/Route110/scripts.pory"
	.string "POKéMON.$"
# 1025 "data/maps/Route110/scripts.pory"

# 1026 "data/maps/Route110/scripts.pory"
Route110_Text_RideBikeAtFullSpeed:
# 1027 "data/maps/Route110/scripts.pory"
	.string "Wouldn't it be great to ride a BIKE\n"
# 1028 "data/maps/Route110/scripts.pory"
	.string "at full speed on CYCLING ROAD?$"
# 1029 "data/maps/Route110/scripts.pory"

# 1030 "data/maps/Route110/scripts.pory"
Route110_Text_HairStreamsBehindMe:
# 1031 "data/maps/Route110/scripts.pory"
	.string "How do you like the way my raven-\n"
# 1032 "data/maps/Route110/scripts.pory"
	.string "colored hair streams behind me?\p"
# 1033 "data/maps/Route110/scripts.pory"
	.string "I grew my hair out just for that.$"
# 1034 "data/maps/Route110/scripts.pory"

# 1035 "data/maps/Route110/scripts.pory"
Route110_Text_YouGotBikeFromRydel:
# 1036 "data/maps/Route110/scripts.pory"
	.string "Oh, hey, you got that BIKE from RYDEL!\p"
# 1037 "data/maps/Route110/scripts.pory"
	.string "Oh, it's glaringly obvious.\n"
# 1038 "data/maps/Route110/scripts.pory"
	.string "It says right on your bike…\p"
# 1039 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 1040 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 1041 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 1042 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 1043 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 1044 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 1045 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 1046 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 1047 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL…\n"
# 1048 "data/maps/Route110/scripts.pory"
	.string "That name's everywhere.\p"
# 1049 "data/maps/Route110/scripts.pory"
	.string "You should ride it around all over\n"
# 1050 "data/maps/Route110/scripts.pory"
	.string "the place--it's good advertising!$"
# 1051 "data/maps/Route110/scripts.pory"

# 1052 "data/maps/Route110/scripts.pory"
Route110_Text_TwoRoads:
# 1053 "data/maps/Route110/scripts.pory"
	.string "The two roads, one above, one below…\p"
# 1054 "data/maps/Route110/scripts.pory"
	.string "A road each for people and POKéMON.\n"
# 1055 "data/maps/Route110/scripts.pory"
	.string "Perhaps that is right and fair.$"
# 1056 "data/maps/Route110/scripts.pory"

# 1057 "data/maps/Route110/scripts.pory"
Route110_Text_WalkOnTheLowRoad:
# 1058 "data/maps/Route110/scripts.pory"
	.string "I don't have a BIKE, so I'll take\n"
# 1059 "data/maps/Route110/scripts.pory"
	.string "a leisurely walk on the low road.$"
# 1060 "data/maps/Route110/scripts.pory"

# 1061 "data/maps/Route110/scripts.pory"
Route110_Text_BikeTechniques:
# 1062 "data/maps/Route110/scripts.pory"
	.string "Learning techniques will make BIKE\n"
# 1063 "data/maps/Route110/scripts.pory"
	.string "riding even more fun.\p"
# 1064 "data/maps/Route110/scripts.pory"
	.string "There are some places that you can\n"
# 1065 "data/maps/Route110/scripts.pory"
	.string "reach only by using a BIKE technique.$"
# 1066 "data/maps/Route110/scripts.pory"

# 1067 "data/maps/Route110/scripts.pory"
Route110_Text_WhichShouldIChoose:
# 1068 "data/maps/Route110/scripts.pory"
	.string "Which should I choose?\p"
# 1069 "data/maps/Route110/scripts.pory"
	.string "Make a beeline for MAUVILLE on\n"
# 1070 "data/maps/Route110/scripts.pory"
	.string "CYCLING ROAD, or take the low road\l"
# 1071 "data/maps/Route110/scripts.pory"
	.string "and look for POKéMON?$"
# 1072 "data/maps/Route110/scripts.pory"

# 1073 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingChallengeResultSummary:
# 1074 "data/maps/Route110/scripts.pory"
	.string "Number of collisions:\n"
# 1075 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_1}!\p"
# 1076 "data/maps/Route110/scripts.pory"
	.string "Total time:\n"
# 1077 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_2}!$"
# 1078 "data/maps/Route110/scripts.pory"

# 1079 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBest:
# 1080 "data/maps/Route110/scripts.pory"
	.string "Bravo! Splendid showing!\p"
# 1081 "data/maps/Route110/scripts.pory"
	.string "Your love of cycling comes from deep\n"
# 1082 "data/maps/Route110/scripts.pory"
	.string "within your heart.\l"
# 1083 "data/maps/Route110/scripts.pory"
	.string "You've shaken me to my very soul!$"
# 1084 "data/maps/Route110/scripts.pory"

# 1085 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionGood:
# 1086 "data/maps/Route110/scripts.pory"
	.string "Your technique is remarkable.\p"
# 1087 "data/maps/Route110/scripts.pory"
	.string "I suggest you speed up a bit while\n"
# 1088 "data/maps/Route110/scripts.pory"
	.string "still avoiding collisions.$"
# 1089 "data/maps/Route110/scripts.pory"

# 1090 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionOk:
# 1091 "data/maps/Route110/scripts.pory"
	.string "I would consider you a work in\n"
# 1092 "data/maps/Route110/scripts.pory"
	.string "progress.\p"
# 1093 "data/maps/Route110/scripts.pory"
	.string "Still, I hope you don't forget the\n"
# 1094 "data/maps/Route110/scripts.pory"
	.string "sheer pleasure of cycling.$"
# 1095 "data/maps/Route110/scripts.pory"

# 1096 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBad:
# 1097 "data/maps/Route110/scripts.pory"
	.string "My word… Your cycling skills border\n"
# 1098 "data/maps/Route110/scripts.pory"
	.string "on terrifying.\p"
# 1099 "data/maps/Route110/scripts.pory"
	.string "Most certainly, you need much more\n"
# 1100 "data/maps/Route110/scripts.pory"
	.string "practice riding.$"
# 1101 "data/maps/Route110/scripts.pory"

# 1102 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionWorst:
# 1103 "data/maps/Route110/scripts.pory"
	.string "…I am aghast…\p"
# 1104 "data/maps/Route110/scripts.pory"
	.string "You're perhaps not cut out for this\n"
# 1105 "data/maps/Route110/scripts.pory"
	.string "unfortunate cycling business.\p"
# 1106 "data/maps/Route110/scripts.pory"
	.string "You ought to give serious thought to\n"
# 1107 "data/maps/Route110/scripts.pory"
	.string "returning that BIKE to RYDEL.$"
# 1108 "data/maps/Route110/scripts.pory"

# 1109 "data/maps/Route110/scripts.pory"
Route110_Text_RatedForNumberOfCollisions:
# 1110 "data/maps/Route110/scripts.pory"
	.string "This is CYCLING ROAD.\p"
# 1111 "data/maps/Route110/scripts.pory"
	.string "If you were to ride from MAUVILLE to\n"
# 1112 "data/maps/Route110/scripts.pory"
	.string "SLATEPORT on a MACH BIKE, you would\l"
# 1113 "data/maps/Route110/scripts.pory"
	.string "be rated for the number of collisions\l"
# 1114 "data/maps/Route110/scripts.pory"
	.string "and your total time.$"
# 1115 "data/maps/Route110/scripts.pory"

# 1116 "data/maps/Route110/scripts.pory"
Route110_Text_AlwaysAimHigher:
# 1117 "data/maps/Route110/scripts.pory"
	.string "Regardless of the results, I count on\n"
# 1118 "data/maps/Route110/scripts.pory"
	.string "seeing more challenges from you.\l"
# 1119 "data/maps/Route110/scripts.pory"
	.string "Always aim higher!$"
# 1120 "data/maps/Route110/scripts.pory"

# 1121 "data/maps/Route110/scripts.pory"
Route110_Text_AcroBikesDoNotQualify:
# 1122 "data/maps/Route110/scripts.pory"
	.string "On this CYCLING ROAD, those riding\n"
# 1123 "data/maps/Route110/scripts.pory"
	.string "MACH BIKES are rated for their number\l"
# 1124 "data/maps/Route110/scripts.pory"
	.string "of collisions and their total times.\p"
# 1125 "data/maps/Route110/scripts.pory"
	.string "ACRO BIKES do not qualify for rating.\n"
# 1126 "data/maps/Route110/scripts.pory"
	.string "They are easy to turn, so it's not fair.$"
# 1127 "data/maps/Route110/scripts.pory"

# 1128 "data/maps/Route110/scripts.pory"
Route110_Text_SlateportCitySign:
# 1129 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 1130 "data/maps/Route110/scripts.pory"
	.string "{DOWN_ARROW} SLATEPORT CITY$"
# 1131 "data/maps/Route110/scripts.pory"

# 1132 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingRoadSign:
# 1133 "data/maps/Route110/scripts.pory"
	.string "SEASIDE CYCLING ROAD$"
# 1134 "data/maps/Route110/scripts.pory"

# 1135 "data/maps/Route110/scripts.pory"
Route110_Text_AquaWasHere:
# 1136 "data/maps/Route110/scripts.pory"
	.string "“TEAM AQUA was here!”\p"
# 1137 "data/maps/Route110/scripts.pory"
	.string "Someone painted that onto this sign,\n"
# 1138 "data/maps/Route110/scripts.pory"
	.string "but then someone else painted over it.\p"
# 1139 "data/maps/Route110/scripts.pory"
	.string "“TEAM MAGMA rules!” is what it\n"
# 1140 "data/maps/Route110/scripts.pory"
	.string "says now.$"
# 1141 "data/maps/Route110/scripts.pory"

# 1142 "data/maps/Route110/scripts.pory"
Route110_Text_Route103Sign:
# 1143 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 1144 "data/maps/Route110/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 103$"
# 1145 "data/maps/Route110/scripts.pory"

# 1146 "data/maps/Route110/scripts.pory"
Route110_Text_SeasideParkingSign:
# 1147 "data/maps/Route110/scripts.pory"
	.string "SEASIDE PARKING$"
# 1148 "data/maps/Route110/scripts.pory"

# 1149 "data/maps/Route110/scripts.pory"
Route110_Text_MauvilleCitySign:
# 1150 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 1151 "data/maps/Route110/scripts.pory"
	.string "{UP_ARROW} MAUVILLE CITY$"
# 1152 "data/maps/Route110/scripts.pory"

# 1153 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsPrlzSleep:
# 1154 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 1155 "data/maps/Route110/scripts.pory"
	.string "The foe can be made helpless by\n"
# 1156 "data/maps/Route110/scripts.pory"
	.string "paralyzing it or causing it to sleep.\p"
# 1157 "data/maps/Route110/scripts.pory"
	.string "It is an important technique for\n"
# 1158 "data/maps/Route110/scripts.pory"
	.string "POKéMON battles.$"
# 1159 "data/maps/Route110/scripts.pory"

# 1160 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsRegisterItems:
# 1161 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 1162 "data/maps/Route110/scripts.pory"
	.string "The items in the BAG can be reorganized\n"
# 1163 "data/maps/Route110/scripts.pory"
	.string "by pressing SELECT.$"
# 1164 "data/maps/Route110/scripts.pory"

# 1165 "data/maps/Route110/scripts.pory"
Route110_Text_TrickHouseSign:
# 1166 "data/maps/Route110/scripts.pory"
	.string "“Three steps {RIGHT_ARROW} and two steps {UP_ARROW}\n"
# 1167 "data/maps/Route110/scripts.pory"
	.string "to reach the wondrous TRICK HOUSE.”$"
# 1168 "data/maps/Route110/scripts.pory"

# 1169 "data/maps/Route110/scripts.pory"
Route110_Text_BestRecord:
# 1170 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 1171 "data/maps/Route110/scripts.pory"
	.string "No. of collisions: {STR_VAR_1}\p"
# 1172 "data/maps/Route110/scripts.pory"
	.string "Elapsed time: {STR_VAR_2}$"
# 1173 "data/maps/Route110/scripts.pory"

# 1174 "data/maps/Route110/scripts.pory"
Route110_Text_ThereIsNoRecord:
# 1175 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 1176 "data/maps/Route110/scripts.pory"
	.string "No one seems to have taken the\n"
# 1177 "data/maps/Route110/scripts.pory"
	.string "challenge. There is no record…$"

Route110_Text_SpencerEvolved::
# 639 "data/maps/Route110/scripts.pory"
	.string "I have some exciting news to share!\n"
	.string "While I was training in the grass here,\l"
	.string "my TREECKO evolved!\l"
	.string "Isn't that amazing?\p"
	.string "Also, I have-$"

Route110_Text_BrenEvolved::
# 647 "data/maps/Route110/scripts.pory"
	.string "I have some exciting news to share!\n"
	.string "While I was training in the grass here,\l"
	.string "my PIPLUP evolved!\l"
	.string "Isn't that amazing?\p"
	.string "Also, I have-$"

Route110_Text_KyleEvolved::
# 655 "data/maps/Route110/scripts.pory"
	.string "I have some exciting news to share!\n"
	.string "While I was training in the grass here,\l"
	.string "my CHARMANDER evolved!\l"
	.string "Isn't that amazing?\p"
	.string "Also, I have-$"

Route110_Text_SpencerAlmostMissedYou::
# 663 "data/maps/Route110/scripts.pory"
	.string "SPENCER: Oh, hey!\n"
	.string "I almost missed you there!\l"
	.string "What's going on, you two?$"

Route110_Text_BrenAlmostMissedYou::
# 669 "data/maps/Route110/scripts.pory"
	.string "BREN: Oh, hey!\n"
	.string "I almost missed you there!\l"
	.string "What's going on, you two?$"

Route110_Text_KyleAlmostMissedYou::
# 675 "data/maps/Route110/scripts.pory"
	.string "KYLE: Oh, hey!\n"
	.string "I almost missed you there!\l"
	.string "What's going on, you two?$"

Route110_Text_SpencerBoughtItemfinders::
# 681 "data/maps/Route110/scripts.pory"
	.string "SPENCER: Yo, {RIVAL}!\n"
	.string "I was just telling {PLAYER} here that\l"
	.string "I spent my battle earnings on some\l"
	.string "Dowsing Machines for the three of us.\l"
	.string "Here. Take one!$"

Route110_Text_BrenBoughtItemfinders::
# 689 "data/maps/Route110/scripts.pory"
	.string "BREN: Yo, {RIVAL}!\n"
	.string "I was just telling {PLAYER} here that\l"
	.string "I spent my battle earnings on some\l"
	.string "Dowsing Machines for the three of us.\l"
	.string "Here. Take one!$"

Route110_Text_KyleBoughtItemfinders::
# 697 "data/maps/Route110/scripts.pory"
	.string "KYLE: Yo, {RIVAL}!\n"
	.string "I was just telling {PLAYER} here that\l"
	.string "I spent my battle earnings on some\l"
	.string "Dowsing Machines for the three of us.\l"
	.string "Here. Take one!$"

Route110_Text_AndOneForYou::
# 705 "data/maps/Route110/scripts.pory"
	.string "And one for you.$"

Route110_Text_SpencerLetsLookAround::
# 709 "data/maps/Route110/scripts.pory"
	.string "SPENCER: I thought we could use these\n"
	.string "to look for treasure together! I bet\l"
	.string "the people up on the bike path\l"
	.string "accidentally drop items over the side\l"
	.string "all the time!\p"
	.string "Let's look around and see\n"
	.string "what we can find!$"

Route110_Text_BrenLetsLookAround::
# 719 "data/maps/Route110/scripts.pory"
	.string "BREN: I thought we could use these\n"
	.string "to look for treasure together! I bet\l"
	.string "the people up on the bike path\l"
	.string "accidentally drop items over the side\l"
	.string "all the time!\p"
	.string "Let's look around and see\n"
	.string "what we can find!$"

Route110_Text_KyleLetsLookAround::
# 729 "data/maps/Route110/scripts.pory"
	.string "KYLE: I thought we could use these\n"
	.string "to look for treasure together! I bet\l"
	.string "the people up on the bike path\l"
	.string "accidentally drop items over the side\l"
	.string "all the time!\p"
	.string "Let's look around and see\n"
	.string "what we can find!$"

Route110_Text_SpencerLetsGo::
# 739 "data/maps/Route110/scripts.pory"
	.string "SPENCER: I'll bet I can find a\n"
	.string "huge NUGGET with this thing!\p"
	.string "Let's go!$"

Route110_Text_BrenLetsGo::
# 745 "data/maps/Route110/scripts.pory"
	.string "BREN: I'll bet I can find a\n"
	.string "huge NUGGET with this thing!\p"
	.string "Let's go!$"

Route110_Text_KyleLetsGo::
# 751 "data/maps/Route110/scripts.pory"
	.string "KYLE: I'll bet I can find a\n"
	.string "huge NUGGET with this thing!\p"
	.string "Let's go!$"

Route110_Text_SpencerCantFindItem::
# 757 "data/maps/Route110/scripts.pory"
	.string "The Dowsing Machine says I'm close,\n"
	.string "but I can't seem to find the item.\l"
	.string "Hmmm…$"

Route110_Text_BrenCantFindItem::
# 763 "data/maps/Route110/scripts.pory"
	.string "The Dowsing Machine says I'm close,\n"
	.string "but I can't seem to find the item.\l"
	.string "Hmmm…$"

Route110_Text_KyleCantFindItem::
# 769 "data/maps/Route110/scripts.pory"
	.string "The Dowsing Machine says I'm close,\n"
	.string "but I can't seem to find the item.\l"
	.string "Hmmm…$"

Route110_Text_SpencerStupidMachine::
# 775 "data/maps/Route110/scripts.pory"
	.string "Aw. Now it isn't locating the item at all.\n"
	.string "Stupid machine!\l"
	.string "$"

Route110_Text_BrenStupidMachine::
# 780 "data/maps/Route110/scripts.pory"
	.string "Aw. Now it isn't locating the item at all.\n"
	.string "Stupid machine!\l"
	.string "$"

Route110_Text_KyleStupidMachine::
# 785 "data/maps/Route110/scripts.pory"
	.string "Aw. Now it isn't locating the item at all.\n"
	.string "Stupid machine!\l"
	.string "$"

Route110_Text_ImagineSeeingYouHere::
# 1180 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
	.string "Imagine seeing you here!$"

Route110_Text_HeardYouInstallMatchCall::
# 1185 "data/maps/Route110/scripts.pory"
	.string "I saw {RIVAL2} and {RIVAL}\n"
	.string "run by here not too long ago.\l"
	.string "You boys sure are full of energy,\n"
	.string "aren't you?\p"
	.string "Oh, yes, I heard that your POKéNAV\n"
	.string "had the MATCH CALL system installed.\p"
	.string "Well, then, I should register you in\n"
	.string "my POKéNAV as well.\p"
	.string "That way, even when we're apart,\n"
	.string "I can rate your POKéDEX anytime.\p"
	.string "… … … … … …$"

Route110_Text_RegisteredBirchInPokenav::
# 1199 "data/maps/Route110/scripts.pory"
	.string "Registered PROF. BIRCH\n"
	.string "in the POKéNAV.$"

Route110_Text_KeepAnEyeOutForRival::
# 1204 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: {PLAYER}{KUN}…\p"
	.string "Make sure you three keep an eye out for\n"
	.string "each other.\n"
	.string "… … … … … …\p"
	.string "Well, I had better get going.\n"
	.string "See you again, {PLAYER}{KUN}!$"
