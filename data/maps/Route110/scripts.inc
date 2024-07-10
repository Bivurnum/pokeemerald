# 6 "data/maps/Route110/scripts.pory"

# 7 "data/maps/Route110/scripts.pory"
.set LOCALID_CHALLENGE_BIKER, 21
# 8 "data/maps/Route110/scripts.pory"
.set LOCALID_RIVAL2, 28
# 9 "data/maps/Route110/scripts.pory"
.set LOCALID_BIRCH, 35
# 10 "data/maps/Route110/scripts.pory"
.set LOCALID_RIVAL1, 36
# 11 "data/maps/Route110/scripts.pory"

# 12 "data/maps/Route110/scripts.pory"
Route110_MapScripts::
# 13 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_OnResume
# 14 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_OnTransition
# 15 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_OnFrame
# 16 "data/maps/Route110/scripts.pory"
	.byte 0
# 17 "data/maps/Route110/scripts.pory"

# 18 "data/maps/Route110/scripts.pory"
Route110_OnResume:
# 19 "data/maps/Route110/scripts.pory"
	special UpdateCyclingRoadState
# 20 "data/maps/Route110/scripts.pory"
	end
# 21 "data/maps/Route110/scripts.pory"

# 22 "data/maps/Route110/scripts.pory"
Route110_OnTransition:
# 23 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 24 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 25 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_SaveCyclingMusic
# 26 "data/maps/Route110/scripts.pory"
	end
# 27 "data/maps/Route110/scripts.pory"

# 28 "data/maps/Route110/scripts.pory"
Route110_EventScript_SaveCyclingMusic::
# 29 "data/maps/Route110/scripts.pory"
	savebgm MUS_CYCLING
# 30 "data/maps/Route110/scripts.pory"
	return
# 31 "data/maps/Route110/scripts.pory"

# 32 "data/maps/Route110/scripts.pory"
Route110_OnFrame:
# 33 "data/maps/Route110/scripts.pory"
	map_script_2 VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_BeginCylcingRoadChallenge
# 34 "data/maps/Route110/scripts.pory"
	.2byte 0
# 35 "data/maps/Route110/scripts.pory"

# 36 "data/maps/Route110/scripts.pory"
Route110_EventScript_BeginCylcingRoadChallenge::
# 37 "data/maps/Route110/scripts.pory"
	special Special_BeginCyclingRoadChallenge
# 38 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 2
# 39 "data/maps/Route110/scripts.pory"
	return
# 40 "data/maps/Route110/scripts.pory"

# 41 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt1::
# 42 "data/maps/Route110/scripts.pory"
	lock
# 43 "data/maps/Route110/scripts.pory"
	faceplayer
# 44 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WeCantTalkAboutAquaActivities, MSGBOX_DEFAULT
# 45 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 46 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route110/scripts.pory"
	release
# 48 "data/maps/Route110/scripts.pory"
	end
# 49 "data/maps/Route110/scripts.pory"

# 50 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt2::
# 51 "data/maps/Route110/scripts.pory"
	lock
# 52 "data/maps/Route110/scripts.pory"
	faceplayer
# 53 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KickUpARuckus, MSGBOX_DEFAULT
# 54 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 55 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 56 "data/maps/Route110/scripts.pory"
	release
# 57 "data/maps/Route110/scripts.pory"
	end
# 58 "data/maps/Route110/scripts.pory"

# 59 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt3::
# 60 "data/maps/Route110/scripts.pory"
	lock
# 61 "data/maps/Route110/scripts.pory"
	faceplayer
# 62 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MyFirstJobInAqua, MSGBOX_DEFAULT
# 63 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 64 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 65 "data/maps/Route110/scripts.pory"
	release
# 66 "data/maps/Route110/scripts.pory"
	end
# 67 "data/maps/Route110/scripts.pory"

# 68 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt4::
# 69 "data/maps/Route110/scripts.pory"
	lock
# 70 "data/maps/Route110/scripts.pory"
	faceplayer
# 71 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaActionsBringSmiles, MSGBOX_DEFAULT
# 72 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 73 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 74 "data/maps/Route110/scripts.pory"
	release
# 75 "data/maps/Route110/scripts.pory"
	end
# 76 "data/maps/Route110/scripts.pory"

# 77 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy1::
# 78 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RideBikeAtFullSpeed, MSGBOX_NPC
# 79 "data/maps/Route110/scripts.pory"
	end
# 80 "data/maps/Route110/scripts.pory"

# 81 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGirl1::
# 82 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HairStreamsBehindMe, MSGBOX_NPC
# 83 "data/maps/Route110/scripts.pory"
	end
# 84 "data/maps/Route110/scripts.pory"

# 85 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy1::
# 86 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_YouGotBikeFromRydel, MSGBOX_NPC
# 87 "data/maps/Route110/scripts.pory"
	end
# 88 "data/maps/Route110/scripts.pory"

# 89 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldMan::
# 90 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TwoRoads, MSGBOX_NPC
# 91 "data/maps/Route110/scripts.pory"
	end
# 92 "data/maps/Route110/scripts.pory"

# 93 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldWoman::
# 94 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WalkOnTheLowRoad, MSGBOX_NPC
# 95 "data/maps/Route110/scripts.pory"
	end
# 96 "data/maps/Route110/scripts.pory"

# 97 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy2::
# 98 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BikeTechniques, MSGBOX_NPC
# 99 "data/maps/Route110/scripts.pory"
	end
# 100 "data/maps/Route110/scripts.pory"

# 101 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy2::
# 102 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WhichShouldIChoose, MSGBOX_NPC
# 103 "data/maps/Route110/scripts.pory"
	end
# 104 "data/maps/Route110/scripts.pory"

# 105 "data/maps/Route110/scripts.pory"
Route110_EventScript_SlateportCitySign::
# 106 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SlateportCitySign, MSGBOX_SIGN
# 107 "data/maps/Route110/scripts.pory"
	end
# 108 "data/maps/Route110/scripts.pory"

# 109 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadSign::
# 110 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingRoadSign, MSGBOX_SIGN
# 111 "data/maps/Route110/scripts.pory"
	end
# 112 "data/maps/Route110/scripts.pory"

# 113 "data/maps/Route110/scripts.pory"
Route110_EventScript_VandalizedSign::
# 114 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaWasHere, MSGBOX_SIGN
# 115 "data/maps/Route110/scripts.pory"
	end
# 116 "data/maps/Route110/scripts.pory"

# 117 "data/maps/Route110/scripts.pory"
Route110_EventScript_Route103Sign::
# 118 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_Route103Sign, MSGBOX_SIGN
# 119 "data/maps/Route110/scripts.pory"
	end
# 120 "data/maps/Route110/scripts.pory"

# 121 "data/maps/Route110/scripts.pory"
Route110_EventScript_SeasideParkingSign::
# 122 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SeasideParkingSign, MSGBOX_SIGN
# 123 "data/maps/Route110/scripts.pory"
	end
# 124 "data/maps/Route110/scripts.pory"

# 125 "data/maps/Route110/scripts.pory"
Route110_EventScript_MauvilleCitySign::
# 126 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MauvilleCitySign, MSGBOX_SIGN
# 127 "data/maps/Route110/scripts.pory"
	end
# 128 "data/maps/Route110/scripts.pory"

# 129 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsPrlzSleep::
# 130 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsPrlzSleep, MSGBOX_SIGN
# 131 "data/maps/Route110/scripts.pory"
	end
# 132 "data/maps/Route110/scripts.pory"

# 133 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsRegisterItems::
# 134 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsRegisterItems, MSGBOX_SIGN
# 135 "data/maps/Route110/scripts.pory"
	end
# 136 "data/maps/Route110/scripts.pory"

# 137 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrickHouseSign::
# 138 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrickHouseSign, MSGBOX_SIGN
# 139 "data/maps/Route110/scripts.pory"
	end
# 140 "data/maps/Route110/scripts.pory"

# 141 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadResultsSign::
# 142 "data/maps/Route110/scripts.pory"
	lockall
# 143 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetRecordedCyclingRoadResults
# 144 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route110_EventScript_NoRecordSet
# 145 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BestRecord, MSGBOX_DEFAULT
# 146 "data/maps/Route110/scripts.pory"
	releaseall
# 147 "data/maps/Route110/scripts.pory"
	end
# 148 "data/maps/Route110/scripts.pory"

# 149 "data/maps/Route110/scripts.pory"
Route110_EventScript_NoRecordSet::
# 150 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ThereIsNoRecord, MSGBOX_DEFAULT
# 151 "data/maps/Route110/scripts.pory"
	releaseall
# 152 "data/maps/Route110/scripts.pory"
	end
# 153 "data/maps/Route110/scripts.pory"

# 154 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeGuy::
# 155 "data/maps/Route110/scripts.pory"
	lock
# 156 "data/maps/Route110/scripts.pory"
	faceplayer
# 157 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 158 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route110_EventScript_PlayerRidingAcroBike
# 159 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_CYCLING_CHALLENGE_STATE, 0, Route110_EventScript_PlayerNotRidingBike
# 160 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlwaysAimHigher, MSGBOX_DEFAULT
# 161 "data/maps/Route110/scripts.pory"
	release
# 162 "data/maps/Route110/scripts.pory"
	end
# 163 "data/maps/Route110/scripts.pory"

# 164 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerNotRidingBike::
# 165 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RatedForNumberOfCollisions, MSGBOX_DEFAULT
# 166 "data/maps/Route110/scripts.pory"
	release
# 167 "data/maps/Route110/scripts.pory"
	end
# 168 "data/maps/Route110/scripts.pory"

# 169 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerRidingAcroBike::
# 170 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AcroBikesDoNotQualify, MSGBOX_DEFAULT
# 171 "data/maps/Route110/scripts.pory"
	release
# 172 "data/maps/Route110/scripts.pory"
	end
# 173 "data/maps/Route110/scripts.pory"

# 174 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edward::
# 175 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWARD, Route110_Text_EdwardIntro, Route110_Text_EdwardDefeated
# 176 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwardPostBattle, MSGBOX_AUTOCLOSE
# 177 "data/maps/Route110/scripts.pory"
	end
# 178 "data/maps/Route110/scripts.pory"

# 179 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jaclyn::
# 180 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACLYN, Route110_Text_JaclynIntro, Route110_Text_JaclynDefeated
# 181 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JaclynPostBattle, MSGBOX_AUTOCLOSE
# 182 "data/maps/Route110/scripts.pory"
	end
# 183 "data/maps/Route110/scripts.pory"

# 184 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edwin::
# 185 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWIN_1, Route110_Text_EdwinIntro, Route110_Text_EdwinDefeated, Route110_EventScript_EdwinRegisterMatchCallAfterBattle
# 186 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 187 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_EdwinRematch
# 188 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinPostBattle, MSGBOX_DEFAULT
# 189 "data/maps/Route110/scripts.pory"
	release
# 190 "data/maps/Route110/scripts.pory"
	end
# 191 "data/maps/Route110/scripts.pory"

# 192 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRegisterMatchCallAfterBattle::
# 193 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 194 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 195 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRegister, MSGBOX_DEFAULT
# 196 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_EDWIN_1
# 197 "data/maps/Route110/scripts.pory"
	release
# 198 "data/maps/Route110/scripts.pory"
	end
# 199 "data/maps/Route110/scripts.pory"

# 200 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRematch::
# 201 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_EDWIN_1, Route110_Text_EdwinRematchIntro, Route110_Text_EdwinRematchDefeated
# 202 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRematchPostBattle, MSGBOX_AUTOCLOSE
# 203 "data/maps/Route110/scripts.pory"
	end
# 204 "data/maps/Route110/scripts.pory"

# 205 "data/maps/Route110/scripts.pory"
Route110_EventScript_Dale::
# 206 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_DALE, Route110_Text_DaleIntro, Route110_Text_DaleDefeated
# 207 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_DalePostBattle, MSGBOX_AUTOCLOSE
# 208 "data/maps/Route110/scripts.pory"
	end
# 209 "data/maps/Route110/scripts.pory"

# 210 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jacob::
# 211 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACOB, Route110_Text_JacobIntro, Route110_Text_JacobDefeated
# 212 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
# 213 "data/maps/Route110/scripts.pory"
	end
# 214 "data/maps/Route110/scripts.pory"

# 215 "data/maps/Route110/scripts.pory"
Route110_EventScript_Anthony::
# 216 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ANTHONY, Route110_Text_AnthonyIntro, Route110_Text_AnthonyDefeated
# 217 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 218 "data/maps/Route110/scripts.pory"
	end
# 219 "data/maps/Route110/scripts.pory"

# 220 "data/maps/Route110/scripts.pory"
Route110_EventScript_Benjamin::
# 221 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_BENJAMIN_1, Route110_Text_BenjaminIntro, Route110_Text_BenjaminDefeated, Route110_EventScript_BenjaminRegisterMatchCallAfterBattle
# 222 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 223 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_BenjaminRematch
# 224 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminPostBattle, MSGBOX_DEFAULT
# 225 "data/maps/Route110/scripts.pory"
	release
# 226 "data/maps/Route110/scripts.pory"
	end
# 227 "data/maps/Route110/scripts.pory"

# 228 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRegisterMatchCallAfterBattle::
# 229 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 230 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 231 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRegister, MSGBOX_DEFAULT
# 232 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_BENJAMIN_1
# 233 "data/maps/Route110/scripts.pory"
	release
# 234 "data/maps/Route110/scripts.pory"
	end
# 235 "data/maps/Route110/scripts.pory"

# 236 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRematch::
# 237 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_BENJAMIN_1, Route110_Text_BenjaminRematchIntro, Route110_Text_BenjaminRematchDefeated
# 238 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRematchPostBattle, MSGBOX_AUTOCLOSE
# 239 "data/maps/Route110/scripts.pory"
	end
# 240 "data/maps/Route110/scripts.pory"

# 241 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jasmine::
# 242 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JASMINE, Route110_Text_JasmineIntro, Route110_Text_JasmineDefeated
# 243 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
# 244 "data/maps/Route110/scripts.pory"
	end
# 245 "data/maps/Route110/scripts.pory"

# 246 "data/maps/Route110/scripts.pory"
Route110_EventScript_Abigail::
# 247 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ABIGAIL_1, Route110_Text_AbigailIntro, Route110_Text_AbigailDefeated, Route110_EventScript_AbigailRegisterMatchCallAfterBattle
# 248 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 249 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_AbigailRematch
# 250 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailPostBattle, MSGBOX_DEFAULT
# 251 "data/maps/Route110/scripts.pory"
	release
# 252 "data/maps/Route110/scripts.pory"
	end
# 253 "data/maps/Route110/scripts.pory"

# 254 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRegisterMatchCallAfterBattle::
# 255 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 256 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 257 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRegister, MSGBOX_DEFAULT
# 258 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ABIGAIL_1
# 259 "data/maps/Route110/scripts.pory"
	release
# 260 "data/maps/Route110/scripts.pory"
	end
# 261 "data/maps/Route110/scripts.pory"

# 262 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRematch::
# 263 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ABIGAIL_1, Route110_Text_AbigailRematchIntro, Route110_Text_AbigailRematchDefeated
# 264 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRematchPostBattle, MSGBOX_AUTOCLOSE
# 265 "data/maps/Route110/scripts.pory"
	end
# 266 "data/maps/Route110/scripts.pory"

# 267 "data/maps/Route110/scripts.pory"
Route110_EventScript_Isabel::
# 268 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ISABEL_1, Route110_Text_IsabelIntro, Route110_Text_IsabelDefeated, Route110_EventScript_IsabelRegisterMatchCallAfterBattle
# 269 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 270 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_IsabelRematch
# 271 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelPostBattle, MSGBOX_DEFAULT
# 272 "data/maps/Route110/scripts.pory"
	release
# 273 "data/maps/Route110/scripts.pory"
	end
# 274 "data/maps/Route110/scripts.pory"

# 275 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRegisterMatchCallAfterBattle::
# 276 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 277 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 278 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRegister, MSGBOX_DEFAULT
# 279 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ISABEL_1
# 280 "data/maps/Route110/scripts.pory"
	release
# 281 "data/maps/Route110/scripts.pory"
	end
# 282 "data/maps/Route110/scripts.pory"

# 283 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRematch::
# 284 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ISABEL_1, Route110_Text_IsabelRematchIntro, Route110_Text_IsabelRematchDefeated
# 285 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRematchPostBattle, MSGBOX_AUTOCLOSE
# 286 "data/maps/Route110/scripts.pory"
	end
# 287 "data/maps/Route110/scripts.pory"

# 288 "data/maps/Route110/scripts.pory"
Route110_EventScript_Timmy::
# 289 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_TIMMY, Route110_Text_TimmyIntro, Route110_Text_TimmyDefeated
# 290 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
# 291 "data/maps/Route110/scripts.pory"
	end
# 292 "data/maps/Route110/scripts.pory"

# 293 "data/maps/Route110/scripts.pory"
Route110_EventScript_Unused::
# 294 "data/maps/Route110/scripts.pory"
	end
# 295 "data/maps/Route110/scripts.pory"

# 296 "data/maps/Route110/scripts.pory"
Route110_EventScript_Kaleb::
# 297 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_KALEB, Route110_Text_KalebIntro, Route110_Text_KalebDefeated
# 298 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KalebPostBattle, MSGBOX_AUTOCLOSE
# 299 "data/maps/Route110/scripts.pory"
	end
# 300 "data/maps/Route110/scripts.pory"

# 301 "data/maps/Route110/scripts.pory"
Route110_EventScript_Joseph::
# 302 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JOSEPH, Route110_Text_JosephIntro, Route110_Text_JosephDefeated
# 303 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
# 304 "data/maps/Route110/scripts.pory"
	end
# 305 "data/maps/Route110/scripts.pory"

# 306 "data/maps/Route110/scripts.pory"
Route110_EventScript_Alyssa::
# 307 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ALYSSA, Route110_Text_AlyssaIntro, Route110_Text_AlyssaDefeated
# 308 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlyssaPostBattle, MSGBOX_AUTOCLOSE
# 309 "data/maps/Route110/scripts.pory"
	end
# 310 "data/maps/Route110/scripts.pory"

# 311 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeEnd::
# 312 "data/maps/Route110/scripts.pory"
	lockall
# 313 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_CHALLENGE_BIKER, Common_Movement_WalkInPlaceFasterRight
# 314 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 315 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_CyclingChallengeResults
# 316 "data/maps/Route110/scripts.pory"
	releaseall
# 317 "data/maps/Route110/scripts.pory"
	end
# 318 "data/maps/Route110/scripts.pory"

# 319 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults::
# 320 "data/maps/Route110/scripts.pory"
	special FinishCyclingRoadChallenge
# 321 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingChallengeResultSummary, MSGBOX_DEFAULT
# 322 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 323 "data/maps/Route110/scripts.pory"
	case 10, Route110_EventScript_ChallengeReactionBest
# 324 "data/maps/Route110/scripts.pory"
	case 9, Route110_EventScript_ChallengeReactionGood
# 325 "data/maps/Route110/scripts.pory"
	case 8, Route110_EventScript_ChallengeReactionGood
# 326 "data/maps/Route110/scripts.pory"
	case 7, Route110_EventScript_ChallengeReactionGood
# 327 "data/maps/Route110/scripts.pory"
	case 6, Route110_EventScript_ChallengeReactionOk
# 328 "data/maps/Route110/scripts.pory"
	case 5, Route110_EventScript_ChallengeReactionOk
# 329 "data/maps/Route110/scripts.pory"
	case 4, Route110_EventScript_ChallengeReactionOk
# 330 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_ChallengeReactionBad
# 331 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_ChallengeReactionBad
# 332 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_ChallengeReactionBad
# 333 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_ChallengeReactionWorst
# 334 "data/maps/Route110/scripts.pory"
	end
# 335 "data/maps/Route110/scripts.pory"

# 336 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBest::
# 337 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBest, MSGBOX_DEFAULT
# 338 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 339 "data/maps/Route110/scripts.pory"
	end
# 340 "data/maps/Route110/scripts.pory"

# 341 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionGood::
# 342 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionGood, MSGBOX_DEFAULT
# 343 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 344 "data/maps/Route110/scripts.pory"
	end
# 345 "data/maps/Route110/scripts.pory"

# 346 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionOk::
# 347 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionOk, MSGBOX_DEFAULT
# 348 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 349 "data/maps/Route110/scripts.pory"
	end
# 350 "data/maps/Route110/scripts.pory"

# 351 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBad::
# 352 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBad, MSGBOX_DEFAULT
# 353 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 354 "data/maps/Route110/scripts.pory"
	end
# 355 "data/maps/Route110/scripts.pory"

# 356 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionWorst::
# 357 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionWorst, MSGBOX_DEFAULT
# 358 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 359 "data/maps/Route110/scripts.pory"
	end
# 360 "data/maps/Route110/scripts.pory"

# 361 "data/maps/Route110/scripts.pory"
Route110_EventScript_EndChallenge::
# 362 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 3
# 363 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 364 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 365 "data/maps/Route110/scripts.pory"
	return

Route110_EventScript_RivalTrigger1::
# 369 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 370 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
	end


Route110_EventScript_RivalTrigger2::
# 375 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 376 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
	end


Route110_EventScript_RivalTrigger3::
# 381 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 382 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
	end


Route110_EventScript_RivalScene::
# 387 "data/maps/Route110/scripts.pory"
	lockall
# 388 "data/maps/Route110/scripts.pory"
	checkplayergender
# 389 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 390 "data/maps/Route110/scripts.pory"
	applymovement 28, Common_Movement_WalkInPlaceFasterDown
# 391 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 392 "data/maps/Route110/scripts.pory"
	applymovement 28, Common_Movement_ExclamationMark
# 393 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 394 "data/maps/Route110/scripts.pory"
	applymovement 28, Common_Movement_Delay48
# 395 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 396 "data/maps/Route110/scripts.pory"
	delay 30
# 397 "data/maps/Route110/scripts.pory"
	switch VAR_0x8008
# 398 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_RivalScene_3
# 400 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_RivalScene_4
# 402 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_RivalScene_5
Route110_EventScript_RivalScene_1:
# 405 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 406 "data/maps/Route110/scripts.pory"
	checkfriendchoice
# 407 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 408 "data/maps/Route110/scripts.pory"
	case SPENCER, Route110_EventScript_RivalScene_8
# 410 "data/maps/Route110/scripts.pory"
	case BREN, Route110_EventScript_RivalScene_9
# 412 "data/maps/Route110/scripts.pory"
	case KYLE, Route110_EventScript_RivalScene_10
Route110_EventScript_RivalScene_6:
# 415 "data/maps/Route110/scripts.pory"
	closemessage
# 416 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq Route110_EventScript_RivalScene_12
Route110_EventScript_RivalScene_11:
# 419 "data/maps/Route110/scripts.pory"
	addobject 36
# 420 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 421 "data/maps/Route110/scripts.pory"
	switch VAR_0x8008
# 422 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_RivalScene_16
# 427 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route110_Movement_PlayerWatchRival1RunIn2and3
# 428 "data/maps/Route110/scripts.pory"
	applymovement 28, Route110_Movement_Rival2WatchRival1RunIn2and3
# 429 "data/maps/Route110/scripts.pory"
	applymovement 36, Route110_Movement_Rival1RunsIn2and3
Route110_EventScript_RivalScene_14:
# 431 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 432 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 3
	goto_if_eq Route110_EventScript_RivalScene_19
Route110_EventScript_RivalScene_18:
# 436 "data/maps/Route110/scripts.pory"
	checkfriendchoice
# 437 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 438 "data/maps/Route110/scripts.pory"
	case SPENCER, Route110_EventScript_RivalScene_23
# 440 "data/maps/Route110/scripts.pory"
	case BREN, Route110_EventScript_RivalScene_24
# 442 "data/maps/Route110/scripts.pory"
	case KYLE, Route110_EventScript_RivalScene_25
Route110_EventScript_RivalScene_21:
# 445 "data/maps/Route110/scripts.pory"
	closemessage
# 446 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq Route110_EventScript_RivalScene_27
# 450 "data/maps/Route110/scripts.pory"
	applymovement 28, Common_Movement_BeginTalkLeft
Route110_EventScript_RivalScene_26:
# 452 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 453 "data/maps/Route110/scripts.pory"
	checkfriendchoice
# 454 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 455 "data/maps/Route110/scripts.pory"
	case SPENCER, Route110_EventScript_RivalScene_32
# 457 "data/maps/Route110/scripts.pory"
	case BREN, Route110_EventScript_RivalScene_33
# 459 "data/maps/Route110/scripts.pory"
	case KYLE, Route110_EventScript_RivalScene_34
Route110_EventScript_RivalScene_30:
# 462 "data/maps/Route110/scripts.pory"
	closemessage
# 463 "data/maps/Route110/scripts.pory"
	delay 16
# 464 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq Route110_EventScript_RivalScene_36
# 468 "data/maps/Route110/scripts.pory"
	applymovement 28, Common_Movement_BeginTalkLeft
Route110_EventScript_RivalScene_35:
# 470 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 471 "data/maps/Route110/scripts.pory"
	delay 30
# 472 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 473 "data/maps/Route110/scripts.pory"
	applymovement 28, Common_Movement_BeginTalkDown
# 474 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 475 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AndOneForYou, MSGBOX_DEFAULT
# 476 "data/maps/Route110/scripts.pory"
	closemessage
# 477 "data/maps/Route110/scripts.pory"
	delay 30
# 478 "data/maps/Route110/scripts.pory"
	giveitem ITEM_DOWSING_MACHINE
# 479 "data/maps/Route110/scripts.pory"
	checkfriendchoice
# 480 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 481 "data/maps/Route110/scripts.pory"
	case SPENCER, Route110_EventScript_RivalScene_41
# 483 "data/maps/Route110/scripts.pory"
	case BREN, Route110_EventScript_RivalScene_42
# 485 "data/maps/Route110/scripts.pory"
	case KYLE, Route110_EventScript_RivalScene_43
Route110_EventScript_RivalScene_39:
# 488 "data/maps/Route110/scripts.pory"
	closemessage
# 489 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq Route110_EventScript_RivalScene_45
# 495 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 496 "data/maps/Route110/scripts.pory"
	applymovement 28, Common_Movement_WalkInPlaceFasterLeft
# 497 "data/maps/Route110/scripts.pory"
	applymovement 36, Common_Movement_BeginTalkRight
Route110_EventScript_RivalScene_44:
# 499 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 500 "data/maps/Route110/scripts.pory"
	checkfriendchoice
# 501 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 502 "data/maps/Route110/scripts.pory"
	case SPENCER, Route110_EventScript_RivalScene_50
# 504 "data/maps/Route110/scripts.pory"
	case BREN, Route110_EventScript_RivalScene_51
# 506 "data/maps/Route110/scripts.pory"
	case KYLE, Route110_EventScript_RivalScene_52
Route110_EventScript_RivalScene_48:
# 509 "data/maps/Route110/scripts.pory"
	closemessage
# 510 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 511 "data/maps/Route110/scripts.pory"
	applymovement 36, Route110_Movement_Rival1Exit
# 512 "data/maps/Route110/scripts.pory"
	applymovement 28, Route110_Movement_Rival2Exit
# 513 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 514 "data/maps/Route110/scripts.pory"
	removeobject 36
# 515 "data/maps/Route110/scripts.pory"
	removeobject 28
# 516 "data/maps/Route110/scripts.pory"
	setobjectxyperm 36, 32, 39
# 517 "data/maps/Route110/scripts.pory"
	setobjectmovementtype 36, MOVEMENT_TYPE_FACE_RIGHT
# 518 "data/maps/Route110/scripts.pory"
	setobjectxyperm 28, 3, 30
# 519 "data/maps/Route110/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_LOOK_AROUND
# 520 "data/maps/Route110/scripts.pory"
	setvar VAR_ROUTE110_STATE, 1
# 521 "data/maps/Route110/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_110_RIVAL1
# 522 "data/maps/Route110/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_110_RIVAL
# 523 "data/maps/Route110/scripts.pory"
	releaseall
	end

Route110_EventScript_RivalScene_3:
# 399 "data/maps/Route110/scripts.pory"
	applymovement 28, Route110_Movement_RivalApproachPlayer1
	goto Route110_EventScript_RivalScene_1

Route110_EventScript_RivalScene_4:
# 401 "data/maps/Route110/scripts.pory"
	applymovement 28, Route110_Movement_RivalApproachPlayer2
	goto Route110_EventScript_RivalScene_1

Route110_EventScript_RivalScene_5:
# 403 "data/maps/Route110/scripts.pory"
	applymovement 28, Route110_Movement_RivalApproachPlayer3
	goto Route110_EventScript_RivalScene_1

Route110_EventScript_RivalScene_8:
# 409 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KyleEvolved, MSGBOX_DEFAULT
	goto Route110_EventScript_RivalScene_6

Route110_EventScript_RivalScene_9:
# 411 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SpencerEvolved, MSGBOX_DEFAULT
	goto Route110_EventScript_RivalScene_6

Route110_EventScript_RivalScene_10:
# 413 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrenEvolved, MSGBOX_DEFAULT
	goto Route110_EventScript_RivalScene_6

Route110_EventScript_RivalScene_12:
# 417 "data/maps/Route110/scripts.pory"
	setobjectxyperm 36, 35, 62
	goto Route110_EventScript_RivalScene_11

Route110_EventScript_RivalScene_16:
# 423 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route110_Movement_PlayerWatchRival1RunIn1
# 424 "data/maps/Route110/scripts.pory"
	applymovement 28, Route110_Movement_Rival2WatchRival1RunIn1
# 425 "data/maps/Route110/scripts.pory"
	applymovement 36, Route110_Movement_Rival1RunsIn1
	goto Route110_EventScript_RivalScene_14

Route110_EventScript_RivalScene_19:
# 433 "data/maps/Route110/scripts.pory"
	applymovement 36, Rival1ExtraStep
# 434 "data/maps/Route110/scripts.pory"
	waitmovement 0
	goto Route110_EventScript_RivalScene_18

Route110_EventScript_RivalScene_23:
# 439 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrenAlmostMissedYou, MSGBOX_DEFAULT
	goto Route110_EventScript_RivalScene_21

Route110_EventScript_RivalScene_24:
# 441 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KyleAlmostMissedYou, MSGBOX_DEFAULT
	goto Route110_EventScript_RivalScene_21

Route110_EventScript_RivalScene_25:
# 443 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SpencerAlmostMissedYou, MSGBOX_DEFAULT
	goto Route110_EventScript_RivalScene_21

Route110_EventScript_RivalScene_27:
# 447 "data/maps/Route110/scripts.pory"
	applymovement 28, Common_Movement_BeginTalkRight
	goto Route110_EventScript_RivalScene_26

Route110_EventScript_RivalScene_32:
# 456 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KyleBoughtItemfinders, MSGBOX_DEFAULT
	goto Route110_EventScript_RivalScene_30

Route110_EventScript_RivalScene_33:
# 458 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SpencerBoughtItemfinders, MSGBOX_DEFAULT
	goto Route110_EventScript_RivalScene_30

Route110_EventScript_RivalScene_34:
# 460 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrenBoughtItemfinders, MSGBOX_DEFAULT
	goto Route110_EventScript_RivalScene_30

Route110_EventScript_RivalScene_36:
# 465 "data/maps/Route110/scripts.pory"
	applymovement 28, Common_Movement_BeginTalkRight
	goto Route110_EventScript_RivalScene_35

Route110_EventScript_RivalScene_41:
# 482 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KyleLetsLookAround, MSGBOX_DEFAULT
	goto Route110_EventScript_RivalScene_39

Route110_EventScript_RivalScene_42:
# 484 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SpencerLetsLookAround, MSGBOX_DEFAULT
	goto Route110_EventScript_RivalScene_39

Route110_EventScript_RivalScene_43:
# 486 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrenLetsLookAround, MSGBOX_DEFAULT
	goto Route110_EventScript_RivalScene_39

Route110_EventScript_RivalScene_45:
# 490 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 491 "data/maps/Route110/scripts.pory"
	applymovement 28, Common_Movement_WalkInPlaceFasterRight
# 492 "data/maps/Route110/scripts.pory"
	applymovement 36, Common_Movement_BeginTalkLeft
	goto Route110_EventScript_RivalScene_44

Route110_EventScript_RivalScene_50:
# 503 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrenLetsGo, MSGBOX_DEFAULT
	goto Route110_EventScript_RivalScene_48

Route110_EventScript_RivalScene_51:
# 505 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KyleLetsGo, MSGBOX_DEFAULT
	goto Route110_EventScript_RivalScene_48

Route110_EventScript_RivalScene_52:
# 507 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SpencerLetsGo, MSGBOX_DEFAULT
	goto Route110_EventScript_RivalScene_48


Route110_EventScript_Rival1::
# 528 "data/maps/Route110/scripts.pory"
	lock
# 529 "data/maps/Route110/scripts.pory"
	checkflag FLAG_HIDDEN_ITEM_ROUTE_110_REVIVE
# 530 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route110_EventScript_Rival1_2
# 555 "data/maps/Route110/scripts.pory"
	applymovement 36, Common_Movement_FacePlayer
# 556 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 557 "data/maps/Route110/scripts.pory"
	checkfriendchoice
# 558 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 559 "data/maps/Route110/scripts.pory"
	case SPENCER, Route110_EventScript_Rival1_12
# 561 "data/maps/Route110/scripts.pory"
	case BREN, Route110_EventScript_Rival1_13
# 563 "data/maps/Route110/scripts.pory"
	case KYLE, Route110_EventScript_Rival1_14
Route110_EventScript_Rival1_10:
# 566 "data/maps/Route110/scripts.pory"
	closemessage
Route110_EventScript_Rival1_1:
# 568 "data/maps/Route110/scripts.pory"
	release
	end

Route110_EventScript_Rival1_2:
# 531 "data/maps/Route110/scripts.pory"
	playse SE_ITEMFINDER
# 532 "data/maps/Route110/scripts.pory"
	waitse
# 533 "data/maps/Route110/scripts.pory"
	playse SE_ITEMFINDER
# 534 "data/maps/Route110/scripts.pory"
	waitse
# 535 "data/maps/Route110/scripts.pory"
	playse SE_ITEMFINDER
# 536 "data/maps/Route110/scripts.pory"
	waitse
# 537 "data/maps/Route110/scripts.pory"
	applymovement 36, Route110_Movement_Rival1Itemfinder
# 538 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 539 "data/maps/Route110/scripts.pory"
	applymovement 36, Common_Movement_FacePlayer
# 540 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 541 "data/maps/Route110/scripts.pory"
	checkfriendchoice
# 542 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 543 "data/maps/Route110/scripts.pory"
	case SPENCER, Route110_EventScript_Rival1_7
# 545 "data/maps/Route110/scripts.pory"
	case BREN, Route110_EventScript_Rival1_8
# 547 "data/maps/Route110/scripts.pory"
	case KYLE, Route110_EventScript_Rival1_9
Route110_EventScript_Rival1_5:
# 550 "data/maps/Route110/scripts.pory"
	closemessage
# 551 "data/maps/Route110/scripts.pory"
	applymovement 36, Common_Movement_WalkInPlaceFasterRight
# 552 "data/maps/Route110/scripts.pory"
	waitmovement 0
	goto Route110_EventScript_Rival1_1

Route110_EventScript_Rival1_7:
# 544 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrenCantFindItem, MSGBOX_DEFAULT
	goto Route110_EventScript_Rival1_5

Route110_EventScript_Rival1_8:
# 546 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KyleCantFindItem, MSGBOX_DEFAULT
	goto Route110_EventScript_Rival1_5

Route110_EventScript_Rival1_9:
# 548 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SpencerCantFindItem, MSGBOX_DEFAULT
	goto Route110_EventScript_Rival1_5

Route110_EventScript_Rival1_12:
# 560 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrenStupidMachine, MSGBOX_DEFAULT
	goto Route110_EventScript_Rival1_10

Route110_EventScript_Rival1_13:
# 562 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KyleStupidMachine, MSGBOX_DEFAULT
	goto Route110_EventScript_Rival1_10

Route110_EventScript_Rival1_14:
# 564 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SpencerStupidMachine, MSGBOX_DEFAULT
	goto Route110_EventScript_Rival1_10


# 572 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer1:
# 573 "data/maps/Route110/scripts.pory"
	walk_down
# 574 "data/maps/Route110/scripts.pory"
	walk_left
# 575 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
	step_end

# 578 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer2:
# 579 "data/maps/Route110/scripts.pory"
	walk_down
	step_end

# 582 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer3:
# 583 "data/maps/Route110/scripts.pory"
	walk_down
# 584 "data/maps/Route110/scripts.pory"
	walk_right
# 585 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
	step_end

# 588 "data/maps/Route110/scripts.pory"
Route110_Movement_PlayerWatchRival1RunIn1:
# 589 "data/maps/Route110/scripts.pory"
	face_down
# 590 "data/maps/Route110/scripts.pory"
	delay_4
# 590 "data/maps/Route110/scripts.pory"
	delay_4
# 590 "data/maps/Route110/scripts.pory"
	delay_4
# 590 "data/maps/Route110/scripts.pory"
	delay_4
# 590 "data/maps/Route110/scripts.pory"
	delay_4
# 591 "data/maps/Route110/scripts.pory"
	walk_in_place_right
# 592 "data/maps/Route110/scripts.pory"
	delay_8
# 593 "data/maps/Route110/scripts.pory"
	walk_in_place_up
# 594 "data/maps/Route110/scripts.pory"
	delay_4
# 594 "data/maps/Route110/scripts.pory"
	delay_4
# 594 "data/maps/Route110/scripts.pory"
	delay_4
# 595 "data/maps/Route110/scripts.pory"
	delay_8
# 595 "data/maps/Route110/scripts.pory"
	delay_8
# 595 "data/maps/Route110/scripts.pory"
	delay_8
# 595 "data/maps/Route110/scripts.pory"
	delay_8
# 596 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_right
	step_end

# 599 "data/maps/Route110/scripts.pory"
Route110_Movement_Rival2WatchRival1RunIn1:
# 600 "data/maps/Route110/scripts.pory"
	emote_exclamation_mark
# 601 "data/maps/Route110/scripts.pory"
	face_down
# 602 "data/maps/Route110/scripts.pory"
	delay_4
# 602 "data/maps/Route110/scripts.pory"
	delay_4
# 602 "data/maps/Route110/scripts.pory"
	delay_4
# 602 "data/maps/Route110/scripts.pory"
	delay_4
# 602 "data/maps/Route110/scripts.pory"
	delay_4
# 602 "data/maps/Route110/scripts.pory"
	delay_4
# 603 "data/maps/Route110/scripts.pory"
	walk_in_place_right
# 604 "data/maps/Route110/scripts.pory"
	delay_8
# 605 "data/maps/Route110/scripts.pory"
	walk_in_place_up
# 606 "data/maps/Route110/scripts.pory"
	delay_4
# 606 "data/maps/Route110/scripts.pory"
	delay_4
# 607 "data/maps/Route110/scripts.pory"
	delay_8
# 607 "data/maps/Route110/scripts.pory"
	delay_8
# 607 "data/maps/Route110/scripts.pory"
	delay_8
# 607 "data/maps/Route110/scripts.pory"
	delay_8
# 608 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_right
	step_end

# 611 "data/maps/Route110/scripts.pory"
Route110_Movement_Rival1RunsIn1:
# 612 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 612 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 612 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 612 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 612 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 612 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 612 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 612 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 612 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 612 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 613 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 613 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 613 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 613 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 613 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 613 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 614 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 614 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 614 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 615 "data/maps/Route110/scripts.pory"
	walk_fast_left
	step_end

# 618 "data/maps/Route110/scripts.pory"
Route110_Movement_PlayerWatchRival1RunIn2and3:
# 619 "data/maps/Route110/scripts.pory"
	face_down
# 620 "data/maps/Route110/scripts.pory"
	delay_4
# 620 "data/maps/Route110/scripts.pory"
	delay_4
# 620 "data/maps/Route110/scripts.pory"
	delay_4
# 620 "data/maps/Route110/scripts.pory"
	delay_4
# 620 "data/maps/Route110/scripts.pory"
	delay_4
# 621 "data/maps/Route110/scripts.pory"
	walk_in_place_left
# 622 "data/maps/Route110/scripts.pory"
	delay_8
# 623 "data/maps/Route110/scripts.pory"
	walk_in_place_up
# 624 "data/maps/Route110/scripts.pory"
	delay_4
# 624 "data/maps/Route110/scripts.pory"
	delay_4
# 624 "data/maps/Route110/scripts.pory"
	delay_4
# 625 "data/maps/Route110/scripts.pory"
	delay_8
# 625 "data/maps/Route110/scripts.pory"
	delay_8
# 625 "data/maps/Route110/scripts.pory"
	delay_8
# 625 "data/maps/Route110/scripts.pory"
	delay_8
# 626 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_left
	step_end

# 629 "data/maps/Route110/scripts.pory"
Route110_Movement_Rival2WatchRival1RunIn2and3:
# 630 "data/maps/Route110/scripts.pory"
	emote_exclamation_mark
# 631 "data/maps/Route110/scripts.pory"
	face_down
# 632 "data/maps/Route110/scripts.pory"
	delay_4
# 632 "data/maps/Route110/scripts.pory"
	delay_4
# 632 "data/maps/Route110/scripts.pory"
	delay_4
# 632 "data/maps/Route110/scripts.pory"
	delay_4
# 632 "data/maps/Route110/scripts.pory"
	delay_4
# 632 "data/maps/Route110/scripts.pory"
	delay_4
# 633 "data/maps/Route110/scripts.pory"
	walk_in_place_left
# 634 "data/maps/Route110/scripts.pory"
	delay_8
# 635 "data/maps/Route110/scripts.pory"
	walk_in_place_up
# 636 "data/maps/Route110/scripts.pory"
	delay_4
# 636 "data/maps/Route110/scripts.pory"
	delay_4
# 637 "data/maps/Route110/scripts.pory"
	delay_8
# 637 "data/maps/Route110/scripts.pory"
	delay_8
# 637 "data/maps/Route110/scripts.pory"
	delay_8
# 637 "data/maps/Route110/scripts.pory"
	delay_8
# 638 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_left
	step_end

# 641 "data/maps/Route110/scripts.pory"
Route110_Movement_Rival1RunsIn2and3:
# 642 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 642 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 642 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 642 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 642 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 642 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 642 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 642 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 642 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 642 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 643 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 643 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 643 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 643 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 643 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 643 "data/maps/Route110/scripts.pory"
	walk_in_place_fast_up
# 644 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 644 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 644 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 645 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_right
	step_end

# 648 "data/maps/Route110/scripts.pory"
Rival1ExtraStep:
# 649 "data/maps/Route110/scripts.pory"
	walk_fast_right
	step_end

# 652 "data/maps/Route110/scripts.pory"
Route110_Movement_Rival1Exit:
# 653 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 654 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 655 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 656 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 657 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 658 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 659 "data/maps/Route110/scripts.pory"
	walk_fast_up
	step_end

# 662 "data/maps/Route110/scripts.pory"
Route110_Movement_Rival2Exit:
# 663 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_up
# 664 "data/maps/Route110/scripts.pory"
	delay_8
# 664 "data/maps/Route110/scripts.pory"
	delay_8
# 664 "data/maps/Route110/scripts.pory"
	delay_8
# 665 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 666 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 667 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 668 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 669 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 670 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 671 "data/maps/Route110/scripts.pory"
	walk_fast_up
	step_end

# 674 "data/maps/Route110/scripts.pory"
Route110_Movement_Rival1Itemfinder:
# 675 "data/maps/Route110/scripts.pory"
	walk_in_place_right
# 676 "data/maps/Route110/scripts.pory"
	delay_16
# 676 "data/maps/Route110/scripts.pory"
	delay_16
	step_end

# 830 "data/maps/Route110/scripts.pory"

# 831 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene1::
# 832 "data/maps/Route110/scripts.pory"
	lockall
# 833 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 834 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 835 "data/maps/Route110/scripts.pory"

# 836 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene2::
# 837 "data/maps/Route110/scripts.pory"
	lockall
# 838 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 839 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 840 "data/maps/Route110/scripts.pory"

# 841 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene3::
# 842 "data/maps/Route110/scripts.pory"
	lockall
# 843 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 844 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 845 "data/maps/Route110/scripts.pory"

# 846 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene4::
# 847 "data/maps/Route110/scripts.pory"
	lockall
# 848 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 4
# 849 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 850 "data/maps/Route110/scripts.pory"

# 851 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene::
# 852 "data/maps/Route110/scripts.pory"
	addobject LOCALID_BIRCH
# 853 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchEntrance
# 854 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 855 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 856 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 857 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 858 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_Delay48
# 859 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 860 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchApproachPlayer1
# 861 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchApproachPlayer2
# 862 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchApproachPlayer3
# 863 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchApproachPlayer4
# 864 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ImagineSeeingYouHere, MSGBOX_DEFAULT
# 865 "data/maps/Route110/scripts.pory"
	closemessage
# 866 "data/maps/Route110/scripts.pory"
	delay 20
# 867 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterUp
# 868 "data/maps/Route110/scripts.pory"
	delay 40
# 869 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterDown
# 870 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 871 "data/maps/Route110/scripts.pory"
	delay 30
# 872 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HeardYouInstallMatchCall, MSGBOX_DEFAULT
# 873 "data/maps/Route110/scripts.pory"
	closemessage
# 874 "data/maps/Route110/scripts.pory"
	delay 30
# 875 "data/maps/Route110/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 876 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RegisteredBirchInPokenav, MSGBOX_DEFAULT
# 877 "data/maps/Route110/scripts.pory"
	waitfanfare
# 878 "data/maps/Route110/scripts.pory"
	closemessage
# 879 "data/maps/Route110/scripts.pory"
	delay 30
# 880 "data/maps/Route110/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 881 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KeepAnEyeOutForRival, MSGBOX_DEFAULT
# 882 "data/maps/Route110/scripts.pory"
	closemessage
# 883 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchExit1
# 884 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchExit2
# 885 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchExit3
# 886 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchExit4
# 887 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_BIRCH
# 888 "data/maps/Route110/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 889 "data/maps/Route110/scripts.pory"
	setflag FLAG_HIDE_ROUTE_110_RIVAL1
# 890 "data/maps/Route110/scripts.pory"
	setflag FLAG_HIDE_SEASHORE_HOUSE_RIVAL2
# 891 "data/maps/Route110/scripts.pory"
	setvar VAR_SEASHORE_HOUSE_RIVAL_STATE, 1
# 892 "data/maps/Route110/scripts.pory"
	releaseall
# 893 "data/maps/Route110/scripts.pory"
	end
# 894 "data/maps/Route110/scripts.pory"

# 895 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer1::
# 896 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer1
# 897 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 898 "data/maps/Route110/scripts.pory"
	return
# 899 "data/maps/Route110/scripts.pory"

# 900 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer2::
# 901 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer2
# 902 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 903 "data/maps/Route110/scripts.pory"
	return
# 904 "data/maps/Route110/scripts.pory"

# 905 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer3::
# 906 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer3
# 907 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 908 "data/maps/Route110/scripts.pory"
	return
# 909 "data/maps/Route110/scripts.pory"

# 910 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer4::
# 911 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer4
# 912 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 913 "data/maps/Route110/scripts.pory"
	return
# 914 "data/maps/Route110/scripts.pory"

# 915 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit1::
# 916 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit1
# 917 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 918 "data/maps/Route110/scripts.pory"
	return
# 919 "data/maps/Route110/scripts.pory"

# 920 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit2::
# 921 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit2
# 922 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 923 "data/maps/Route110/scripts.pory"
	return
# 924 "data/maps/Route110/scripts.pory"

# 925 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit3::
# 926 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit3
# 927 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 928 "data/maps/Route110/scripts.pory"
	return
# 929 "data/maps/Route110/scripts.pory"

# 930 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit4::
# 931 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit4
# 932 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 933 "data/maps/Route110/scripts.pory"
	return
# 934 "data/maps/Route110/scripts.pory"

# 935 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchEntrance:
# 936 "data/maps/Route110/scripts.pory"
	walk_down
# 937 "data/maps/Route110/scripts.pory"
	walk_down
# 938 "data/maps/Route110/scripts.pory"
	walk_down
# 939 "data/maps/Route110/scripts.pory"
	step_end
# 940 "data/maps/Route110/scripts.pory"

# 941 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer1:
# 942 "data/maps/Route110/scripts.pory"
	walk_down
# 943 "data/maps/Route110/scripts.pory"
	walk_left
# 944 "data/maps/Route110/scripts.pory"
	walk_left
# 945 "data/maps/Route110/scripts.pory"
	walk_down
# 946 "data/maps/Route110/scripts.pory"
	step_end
# 947 "data/maps/Route110/scripts.pory"

# 948 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer2:
# 949 "data/maps/Route110/scripts.pory"
	walk_down
# 950 "data/maps/Route110/scripts.pory"
	walk_left
# 951 "data/maps/Route110/scripts.pory"
	walk_down
# 952 "data/maps/Route110/scripts.pory"
	step_end
# 953 "data/maps/Route110/scripts.pory"

# 954 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer3:
# 955 "data/maps/Route110/scripts.pory"
	walk_down
# 956 "data/maps/Route110/scripts.pory"
	walk_down
# 957 "data/maps/Route110/scripts.pory"
	step_end
# 958 "data/maps/Route110/scripts.pory"

# 959 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer4:
# 960 "data/maps/Route110/scripts.pory"
	walk_down
# 961 "data/maps/Route110/scripts.pory"
	walk_right
# 962 "data/maps/Route110/scripts.pory"
	walk_down
# 963 "data/maps/Route110/scripts.pory"
	step_end
# 964 "data/maps/Route110/scripts.pory"

# 965 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit1:
# 966 "data/maps/Route110/scripts.pory"
	walk_up
# 967 "data/maps/Route110/scripts.pory"
	walk_up
# 968 "data/maps/Route110/scripts.pory"
	walk_right
# 969 "data/maps/Route110/scripts.pory"
	walk_up
# 970 "data/maps/Route110/scripts.pory"
	walk_up
# 971 "data/maps/Route110/scripts.pory"
	walk_up
# 972 "data/maps/Route110/scripts.pory"
	step_end
# 973 "data/maps/Route110/scripts.pory"

# 974 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit2:
# 975 "data/maps/Route110/scripts.pory"
	walk_up
# 976 "data/maps/Route110/scripts.pory"
	walk_up
# 977 "data/maps/Route110/scripts.pory"
	walk_up
# 978 "data/maps/Route110/scripts.pory"
	walk_up
# 979 "data/maps/Route110/scripts.pory"
	walk_up
# 980 "data/maps/Route110/scripts.pory"
	step_end
# 981 "data/maps/Route110/scripts.pory"

# 982 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit3:
# 983 "data/maps/Route110/scripts.pory"
	walk_up
# 984 "data/maps/Route110/scripts.pory"
	walk_up
# 985 "data/maps/Route110/scripts.pory"
	walk_up
# 986 "data/maps/Route110/scripts.pory"
	walk_up
# 987 "data/maps/Route110/scripts.pory"
	walk_up
# 988 "data/maps/Route110/scripts.pory"
	step_end
# 989 "data/maps/Route110/scripts.pory"

# 990 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit4:
# 991 "data/maps/Route110/scripts.pory"
	walk_up
# 992 "data/maps/Route110/scripts.pory"
	walk_up
# 993 "data/maps/Route110/scripts.pory"
	walk_up
# 994 "data/maps/Route110/scripts.pory"
	walk_up
# 995 "data/maps/Route110/scripts.pory"
	walk_up
# 996 "data/maps/Route110/scripts.pory"
	step_end
# 997 "data/maps/Route110/scripts.pory"

# 998 "data/maps/Route110/scripts.pory"
Route110_Text_WeCantTalkAboutAquaActivities:
# 999 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's activities…\n"
# 1000 "data/maps/Route110/scripts.pory"
	.string "We can't talk about them yet.$"
# 1001 "data/maps/Route110/scripts.pory"

# 1002 "data/maps/Route110/scripts.pory"
Route110_Text_KickUpARuckus:
# 1003 "data/maps/Route110/scripts.pory"
	.string "I want to get going to SLATEPORT and\n"
# 1004 "data/maps/Route110/scripts.pory"
	.string "kick up a ruckus!$"
# 1005 "data/maps/Route110/scripts.pory"

# 1006 "data/maps/Route110/scripts.pory"
Route110_Text_MyFirstJobInAqua:
# 1007 "data/maps/Route110/scripts.pory"
	.string "This is my first job after joining\n"
# 1008 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA. It's a little scary.$"
# 1009 "data/maps/Route110/scripts.pory"

# 1010 "data/maps/Route110/scripts.pory"
Route110_Text_AquaActionsBringSmiles:
# 1011 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's actions should bring\n"
# 1012 "data/maps/Route110/scripts.pory"
	.string "smiles to people's faces!$"
# 1013 "data/maps/Route110/scripts.pory"

# 1014 "data/maps/Route110/scripts.pory"
Route110_Text_MayLetsBattle:
# 1015 "data/maps/Route110/scripts.pory"
	.string "MAY: Hi, {PLAYER}{KUN}, long time no see!\p"
# 1016 "data/maps/Route110/scripts.pory"
	.string "While I was searching for other\n"
# 1017 "data/maps/Route110/scripts.pory"
	.string "POKéMON, my POKéMON grew stronger.\p"
# 1018 "data/maps/Route110/scripts.pory"
	.string "So…\n"
# 1019 "data/maps/Route110/scripts.pory"
	.string "How about a little battle?$"
# 1020 "data/maps/Route110/scripts.pory"

# 1021 "data/maps/Route110/scripts.pory"
Route110_Text_MayDefeated:
# 1022 "data/maps/Route110/scripts.pory"
	.string "Yikes!\n"
# 1023 "data/maps/Route110/scripts.pory"
	.string "You're better than I expected!$"
# 1024 "data/maps/Route110/scripts.pory"

# 1025 "data/maps/Route110/scripts.pory"
Route110_Text_MayTakeThis:
# 1026 "data/maps/Route110/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, you've been busy\n"
# 1027 "data/maps/Route110/scripts.pory"
	.string "training, too, haven't you?\p"
# 1028 "data/maps/Route110/scripts.pory"
	.string "I think you deserve a reward!\n"
# 1029 "data/maps/Route110/scripts.pory"
	.string "This is from me!$"
# 1030 "data/maps/Route110/scripts.pory"

# 1031 "data/maps/Route110/scripts.pory"
Route110_Text_MayExplainItemfinder:
# 1032 "data/maps/Route110/scripts.pory"
	.string "MAY: That's an ITEMFINDER.\p"
# 1033 "data/maps/Route110/scripts.pory"
	.string "Try it out. If there is an item that's\n"
# 1034 "data/maps/Route110/scripts.pory"
	.string "not visible, it emits a sound.\p"
# 1035 "data/maps/Route110/scripts.pory"
	.string "Okay, {PLAYER}{KUN}, let's meet again!\p"
# 1036 "data/maps/Route110/scripts.pory"
	.string "I know it's a little silly coming from\n"
# 1037 "data/maps/Route110/scripts.pory"
	.string "me, but I think you should train a lot\l"
# 1038 "data/maps/Route110/scripts.pory"
	.string "harder for the next time.$"
# 1039 "data/maps/Route110/scripts.pory"

# 1040 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanLetsBattle:
# 1041 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}.\n"
# 1042 "data/maps/Route110/scripts.pory"
	.string "So this is where you were.\l"
# 1043 "data/maps/Route110/scripts.pory"
	.string "How's it going?\p"
# 1044 "data/maps/Route110/scripts.pory"
	.string "Have you been raising your POKéMON?\n"
# 1045 "data/maps/Route110/scripts.pory"
	.string "I'll check for you.$"
# 1046 "data/maps/Route110/scripts.pory"

# 1047 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanDefeated:
# 1048 "data/maps/Route110/scripts.pory"
	.string "Hmm…\n"
# 1049 "data/maps/Route110/scripts.pory"
	.string "You're pretty good.$"
# 1050 "data/maps/Route110/scripts.pory"

# 1051 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanTakeThis:
# 1052 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: {PLAYER}, you've trained\n"
# 1053 "data/maps/Route110/scripts.pory"
	.string "without me noticing…\p"
# 1054 "data/maps/Route110/scripts.pory"
	.string "Good enough!\n"
# 1055 "data/maps/Route110/scripts.pory"
	.string "Here, take this.$"
# 1056 "data/maps/Route110/scripts.pory"

# 1057 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanExplainItemfinder:
# 1058 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: That's an ITEMFINDER.\p"
# 1059 "data/maps/Route110/scripts.pory"
	.string "Use it to root around for items that\n"
# 1060 "data/maps/Route110/scripts.pory"
	.string "aren't visible.\p"
# 1061 "data/maps/Route110/scripts.pory"
	.string "If it senses something, it emits\n"
# 1062 "data/maps/Route110/scripts.pory"
	.string "a sound.\p"
# 1063 "data/maps/Route110/scripts.pory"
	.string "Anyway, I'm off to look for new\n"
# 1064 "data/maps/Route110/scripts.pory"
	.string "POKéMON.$"
# 1065 "data/maps/Route110/scripts.pory"

# 1066 "data/maps/Route110/scripts.pory"
Route110_Text_RideBikeAtFullSpeed:
# 1067 "data/maps/Route110/scripts.pory"
	.string "Wouldn't it be great to ride a BIKE\n"
# 1068 "data/maps/Route110/scripts.pory"
	.string "at full speed on CYCLING ROAD?$"
# 1069 "data/maps/Route110/scripts.pory"

# 1070 "data/maps/Route110/scripts.pory"
Route110_Text_HairStreamsBehindMe:
# 1071 "data/maps/Route110/scripts.pory"
	.string "How do you like the way my raven-\n"
# 1072 "data/maps/Route110/scripts.pory"
	.string "colored hair streams behind me?\p"
# 1073 "data/maps/Route110/scripts.pory"
	.string "I grew my hair out just for that.$"
# 1074 "data/maps/Route110/scripts.pory"

# 1075 "data/maps/Route110/scripts.pory"
Route110_Text_YouGotBikeFromRydel:
# 1076 "data/maps/Route110/scripts.pory"
	.string "Oh, hey, you got that BIKE from RYDEL!\p"
# 1077 "data/maps/Route110/scripts.pory"
	.string "Oh, it's glaringly obvious.\n"
# 1078 "data/maps/Route110/scripts.pory"
	.string "It says right on your bike…\p"
# 1079 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 1080 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 1081 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 1082 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 1083 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 1084 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 1085 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 1086 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 1087 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL…\n"
# 1088 "data/maps/Route110/scripts.pory"
	.string "That name's everywhere.\p"
# 1089 "data/maps/Route110/scripts.pory"
	.string "You should ride it around all over\n"
# 1090 "data/maps/Route110/scripts.pory"
	.string "the place--it's good advertising!$"
# 1091 "data/maps/Route110/scripts.pory"

# 1092 "data/maps/Route110/scripts.pory"
Route110_Text_TwoRoads:
# 1093 "data/maps/Route110/scripts.pory"
	.string "The two roads, one above, one below…\p"
# 1094 "data/maps/Route110/scripts.pory"
	.string "A road each for people and POKéMON.\n"
# 1095 "data/maps/Route110/scripts.pory"
	.string "Perhaps that is right and fair.$"
# 1096 "data/maps/Route110/scripts.pory"

# 1097 "data/maps/Route110/scripts.pory"
Route110_Text_WalkOnTheLowRoad:
# 1098 "data/maps/Route110/scripts.pory"
	.string "I don't have a BIKE, so I'll take\n"
# 1099 "data/maps/Route110/scripts.pory"
	.string "a leisurely walk on the low road.$"
# 1100 "data/maps/Route110/scripts.pory"

# 1101 "data/maps/Route110/scripts.pory"
Route110_Text_BikeTechniques:
# 1102 "data/maps/Route110/scripts.pory"
	.string "Learning techniques will make BIKE\n"
# 1103 "data/maps/Route110/scripts.pory"
	.string "riding even more fun.\p"
# 1104 "data/maps/Route110/scripts.pory"
	.string "There are some places that you can\n"
# 1105 "data/maps/Route110/scripts.pory"
	.string "reach only by using a BIKE technique.$"
# 1106 "data/maps/Route110/scripts.pory"

# 1107 "data/maps/Route110/scripts.pory"
Route110_Text_WhichShouldIChoose:
# 1108 "data/maps/Route110/scripts.pory"
	.string "Which should I choose?\p"
# 1109 "data/maps/Route110/scripts.pory"
	.string "Make a beeline for MAUVILLE on\n"
# 1110 "data/maps/Route110/scripts.pory"
	.string "CYCLING ROAD, or take the low road\l"
# 1111 "data/maps/Route110/scripts.pory"
	.string "and look for POKéMON?$"
# 1112 "data/maps/Route110/scripts.pory"

# 1113 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingChallengeResultSummary:
# 1114 "data/maps/Route110/scripts.pory"
	.string "Number of collisions:\n"
# 1115 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_1}!\p"
# 1116 "data/maps/Route110/scripts.pory"
	.string "Total time:\n"
# 1117 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_2}!$"
# 1118 "data/maps/Route110/scripts.pory"

# 1119 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBest:
# 1120 "data/maps/Route110/scripts.pory"
	.string "Bravo! Splendid showing!\p"
# 1121 "data/maps/Route110/scripts.pory"
	.string "Your love of cycling comes from deep\n"
# 1122 "data/maps/Route110/scripts.pory"
	.string "within your heart.\l"
# 1123 "data/maps/Route110/scripts.pory"
	.string "You've shaken me to my very soul!$"
# 1124 "data/maps/Route110/scripts.pory"

# 1125 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionGood:
# 1126 "data/maps/Route110/scripts.pory"
	.string "Your technique is remarkable.\p"
# 1127 "data/maps/Route110/scripts.pory"
	.string "I suggest you speed up a bit while\n"
# 1128 "data/maps/Route110/scripts.pory"
	.string "still avoiding collisions.$"
# 1129 "data/maps/Route110/scripts.pory"

# 1130 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionOk:
# 1131 "data/maps/Route110/scripts.pory"
	.string "I would consider you a work in\n"
# 1132 "data/maps/Route110/scripts.pory"
	.string "progress.\p"
# 1133 "data/maps/Route110/scripts.pory"
	.string "Still, I hope you don't forget the\n"
# 1134 "data/maps/Route110/scripts.pory"
	.string "sheer pleasure of cycling.$"
# 1135 "data/maps/Route110/scripts.pory"

# 1136 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBad:
# 1137 "data/maps/Route110/scripts.pory"
	.string "My word… Your cycling skills border\n"
# 1138 "data/maps/Route110/scripts.pory"
	.string "on terrifying.\p"
# 1139 "data/maps/Route110/scripts.pory"
	.string "Most certainly, you need much more\n"
# 1140 "data/maps/Route110/scripts.pory"
	.string "practice riding.$"
# 1141 "data/maps/Route110/scripts.pory"

# 1142 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionWorst:
# 1143 "data/maps/Route110/scripts.pory"
	.string "…I am aghast…\p"
# 1144 "data/maps/Route110/scripts.pory"
	.string "You're perhaps not cut out for this\n"
# 1145 "data/maps/Route110/scripts.pory"
	.string "unfortunate cycling business.\p"
# 1146 "data/maps/Route110/scripts.pory"
	.string "You ought to give serious thought to\n"
# 1147 "data/maps/Route110/scripts.pory"
	.string "returning that BIKE to RYDEL.$"
# 1148 "data/maps/Route110/scripts.pory"

# 1149 "data/maps/Route110/scripts.pory"
Route110_Text_RatedForNumberOfCollisions:
# 1150 "data/maps/Route110/scripts.pory"
	.string "This is CYCLING ROAD.\p"
# 1151 "data/maps/Route110/scripts.pory"
	.string "If you were to ride from MAUVILLE to\n"
# 1152 "data/maps/Route110/scripts.pory"
	.string "SLATEPORT on a MACH BIKE, you would\l"
# 1153 "data/maps/Route110/scripts.pory"
	.string "be rated for the number of collisions\l"
# 1154 "data/maps/Route110/scripts.pory"
	.string "and your total time.$"
# 1155 "data/maps/Route110/scripts.pory"

# 1156 "data/maps/Route110/scripts.pory"
Route110_Text_AlwaysAimHigher:
# 1157 "data/maps/Route110/scripts.pory"
	.string "Regardless of the results, I count on\n"
# 1158 "data/maps/Route110/scripts.pory"
	.string "seeing more challenges from you.\l"
# 1159 "data/maps/Route110/scripts.pory"
	.string "Always aim higher!$"
# 1160 "data/maps/Route110/scripts.pory"

# 1161 "data/maps/Route110/scripts.pory"
Route110_Text_AcroBikesDoNotQualify:
# 1162 "data/maps/Route110/scripts.pory"
	.string "On this CYCLING ROAD, those riding\n"
# 1163 "data/maps/Route110/scripts.pory"
	.string "MACH BIKES are rated for their number\l"
# 1164 "data/maps/Route110/scripts.pory"
	.string "of collisions and their total times.\p"
# 1165 "data/maps/Route110/scripts.pory"
	.string "ACRO BIKES do not qualify for rating.\n"
# 1166 "data/maps/Route110/scripts.pory"
	.string "They are easy to turn, so it's not fair.$"
# 1167 "data/maps/Route110/scripts.pory"

# 1168 "data/maps/Route110/scripts.pory"
Route110_Text_SlateportCitySign:
# 1169 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 1170 "data/maps/Route110/scripts.pory"
	.string "{DOWN_ARROW} SLATEPORT CITY$"
# 1171 "data/maps/Route110/scripts.pory"

# 1172 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingRoadSign:
# 1173 "data/maps/Route110/scripts.pory"
	.string "SEASIDE CYCLING ROAD$"
# 1174 "data/maps/Route110/scripts.pory"

# 1175 "data/maps/Route110/scripts.pory"
Route110_Text_AquaWasHere:
# 1176 "data/maps/Route110/scripts.pory"
	.string "“TEAM AQUA was here!”\p"
# 1177 "data/maps/Route110/scripts.pory"
	.string "Someone painted that onto this sign,\n"
# 1178 "data/maps/Route110/scripts.pory"
	.string "but then someone else painted over it.\p"
# 1179 "data/maps/Route110/scripts.pory"
	.string "“TEAM MAGMA rules!” is what it\n"
# 1180 "data/maps/Route110/scripts.pory"
	.string "says now.$"
# 1181 "data/maps/Route110/scripts.pory"

# 1182 "data/maps/Route110/scripts.pory"
Route110_Text_Route103Sign:
# 1183 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 1184 "data/maps/Route110/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 103$"
# 1185 "data/maps/Route110/scripts.pory"

# 1186 "data/maps/Route110/scripts.pory"
Route110_Text_SeasideParkingSign:
# 1187 "data/maps/Route110/scripts.pory"
	.string "SEASIDE PARKING$"
# 1188 "data/maps/Route110/scripts.pory"

# 1189 "data/maps/Route110/scripts.pory"
Route110_Text_MauvilleCitySign:
# 1190 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 1191 "data/maps/Route110/scripts.pory"
	.string "{UP_ARROW} MAUVILLE CITY$"
# 1192 "data/maps/Route110/scripts.pory"

# 1193 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsPrlzSleep:
# 1194 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 1195 "data/maps/Route110/scripts.pory"
	.string "The foe can be made helpless by\n"
# 1196 "data/maps/Route110/scripts.pory"
	.string "paralyzing it or causing it to sleep.\p"
# 1197 "data/maps/Route110/scripts.pory"
	.string "It is an important technique for\n"
# 1198 "data/maps/Route110/scripts.pory"
	.string "POKéMON battles.$"
# 1199 "data/maps/Route110/scripts.pory"

# 1200 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsRegisterItems:
# 1201 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 1202 "data/maps/Route110/scripts.pory"
	.string "The items in the BAG can be reorganized\n"
# 1203 "data/maps/Route110/scripts.pory"
	.string "by pressing SELECT.$"
# 1204 "data/maps/Route110/scripts.pory"

# 1205 "data/maps/Route110/scripts.pory"
Route110_Text_TrickHouseSign:
# 1206 "data/maps/Route110/scripts.pory"
	.string "“Three steps {RIGHT_ARROW} and two steps {UP_ARROW}\n"
# 1207 "data/maps/Route110/scripts.pory"
	.string "to reach the wondrous TRICK HOUSE.”$"
# 1208 "data/maps/Route110/scripts.pory"

# 1209 "data/maps/Route110/scripts.pory"
Route110_Text_BestRecord:
# 1210 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 1211 "data/maps/Route110/scripts.pory"
	.string "No. of collisions: {STR_VAR_1}\p"
# 1212 "data/maps/Route110/scripts.pory"
	.string "Elapsed time: {STR_VAR_2}$"
# 1213 "data/maps/Route110/scripts.pory"

# 1214 "data/maps/Route110/scripts.pory"
Route110_Text_ThereIsNoRecord:
# 1215 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 1216 "data/maps/Route110/scripts.pory"
	.string "No one seems to have taken the\n"
# 1217 "data/maps/Route110/scripts.pory"
	.string "challenge. There is no record…$"

Route110_Text_SpencerEvolved::
# 679 "data/maps/Route110/scripts.pory"
	.string "I have some exciting news to share!\n"
	.string "While I was training in the grass here,\l"
	.string "my TREECKO evolved!\l"
	.string "Isn't that amazing?\p"
	.string "Also, I have-$"

Route110_Text_BrenEvolved::
# 687 "data/maps/Route110/scripts.pory"
	.string "I have some exciting news to share!\n"
	.string "While I was training in the grass here,\l"
	.string "my PIPLUP evolved!\l"
	.string "Isn't that amazing?\p"
	.string "Also, I have-$"

Route110_Text_KyleEvolved::
# 695 "data/maps/Route110/scripts.pory"
	.string "I have some exciting news to share!\n"
	.string "While I was training in the grass here,\l"
	.string "my CHARMANDER evolved!\l"
	.string "Isn't that amazing?\p"
	.string "Also, I have-$"

Route110_Text_SpencerAlmostMissedYou::
# 703 "data/maps/Route110/scripts.pory"
	.string "SPENCER: Oh, hey!\n"
	.string "I almost missed you there!\l"
	.string "What's going on, you two?$"

Route110_Text_BrenAlmostMissedYou::
# 709 "data/maps/Route110/scripts.pory"
	.string "BREN: Oh, hey!\n"
	.string "I almost missed you there!\l"
	.string "What's going on, you two?$"

Route110_Text_KyleAlmostMissedYou::
# 715 "data/maps/Route110/scripts.pory"
	.string "KYLE: Oh, hey!\n"
	.string "I almost missed you there!\l"
	.string "What's going on, you two?$"

Route110_Text_SpencerBoughtItemfinders::
# 721 "data/maps/Route110/scripts.pory"
	.string "SPENCER: Yo, {RIVAL}!\n"
	.string "I was just telling {PLAYER} here that\l"
	.string "I spent my trainer battle earnings on\l"
	.string "some Dowsing Machines for the three of\l"
	.string "us.\l"
	.string "Here. Take one!$"

Route110_Text_BrenBoughtItemfinders::
# 729 "data/maps/Route110/scripts.pory"
	.string "BREN: Yo, {RIVAL}!\n"
	.string "I was just telling {PLAYER} here that\l"
	.string "I spent my trainer battle earnings on\l"
	.string "some Dowsing Machines for the three of\l"
	.string "us.\l"
	.string "Here. Take one!$"

Route110_Text_KyleBoughtItemfinders::
# 737 "data/maps/Route110/scripts.pory"
	.string "KYLE: Yo, {RIVAL}!\n"
	.string "I was just telling {PLAYER} here that\l"
	.string "I spent my trainer battle earnings on\l"
	.string "some Dowsing Machines for the three of\l"
	.string "us.\l"
	.string "Here. Take one!$"

Route110_Text_AndOneForYou::
# 745 "data/maps/Route110/scripts.pory"
	.string "And one for you.$"

Route110_Text_SpencerLetsLookAround::
# 749 "data/maps/Route110/scripts.pory"
	.string "SPENCER: I thought we could use these\n"
	.string "to look for treasure together! I bet\l"
	.string "the people up on the bike path\l"
	.string "accidentally drop items over the side\l"
	.string "all the time!\p"
	.string "Let's look around and\n"
	.string "see what we can find!$"

Route110_Text_BrenLetsLookAround::
# 759 "data/maps/Route110/scripts.pory"
	.string "BREN: I thought we could use these\n"
	.string "to look for treasure together! I bet\l"
	.string "the people up on the bike path\l"
	.string "accidentally drop items over the side\l"
	.string "all the time!\p"
	.string "Let's look around and\n"
	.string "see what we can find!$"

Route110_Text_KyleLetsLookAround::
# 769 "data/maps/Route110/scripts.pory"
	.string "KYLE: I thought we could use these\n"
	.string "to look for treasure together! I bet\l"
	.string "the people up on the bike path\l"
	.string "accidentally drop items over the side\l"
	.string "all the time!\p"
	.string "Let's look around and\n"
	.string "see what we can find!$"

Route110_Text_SpencerLetsGo::
# 779 "data/maps/Route110/scripts.pory"
	.string "SPENCER: I'll bet I can find a\n"
	.string "huge NUGGET with this thing!\p"
	.string "Let's go!$"

Route110_Text_BrenLetsGo::
# 785 "data/maps/Route110/scripts.pory"
	.string "BREN: I'll bet I can find a\n"
	.string "huge NUGGET with this thing!\p"
	.string "Let's go!$"

Route110_Text_KyleLetsGo::
# 791 "data/maps/Route110/scripts.pory"
	.string "KYLE: I'll bet I can find a\n"
	.string "huge NUGGET with this thing!\p"
	.string "Let's go!$"

Route110_Text_SpencerCantFindItem::
# 797 "data/maps/Route110/scripts.pory"
	.string "The Dowsing Machine says I'm close,\n"
	.string "but I can't seem to find the item.\l"
	.string "Hmmm…$"

Route110_Text_BrenCantFindItem::
# 803 "data/maps/Route110/scripts.pory"
	.string "The Dowsing Machine says I'm close,\n"
	.string "but I can't seem to find the item.\l"
	.string "Hmmm…$"

Route110_Text_KyleCantFindItem::
# 809 "data/maps/Route110/scripts.pory"
	.string "The Dowsing Machine says I'm close,\n"
	.string "but I can't seem to find the item.\l"
	.string "Hmmm…$"

Route110_Text_SpencerStupidMachine::
# 815 "data/maps/Route110/scripts.pory"
	.string "Aw. Now it isn't locating the item at all.\n"
	.string "Stupid machine!\l"
	.string "$"

Route110_Text_BrenStupidMachine::
# 820 "data/maps/Route110/scripts.pory"
	.string "Aw. Now it isn't locating the item at all.\n"
	.string "Stupid machine!\l"
	.string "$"

Route110_Text_KyleStupidMachine::
# 825 "data/maps/Route110/scripts.pory"
	.string "Aw. Now it isn't locating the item at all.\n"
	.string "Stupid machine!\l"
	.string "$"

Route110_Text_ImagineSeeingYouHere::
# 1220 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
	.string "Imagine seeing you here!$"

Route110_Text_HeardYouInstallMatchCall::
# 1225 "data/maps/Route110/scripts.pory"
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
# 1239 "data/maps/Route110/scripts.pory"
	.string "Registered PROF. BIRCH\n"
	.string "in the POKéNAV.$"

Route110_Text_KeepAnEyeOutForRival::
# 1244 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: {PLAYER}{KUN}…\p"
	.string "Make sure you three keep an eye out for\n"
	.string "each other.\n"
	.string "… … … … … …\p"
	.string "Well, I had better get going.\n"
	.string "See you again, {PLAYER}{KUN}!$"
