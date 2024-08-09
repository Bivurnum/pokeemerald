# 1 "data/maps/PetalburgCity/scripts.pory"

# 2 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_WALLY, 2
# 3 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_BOY, 3
# 4 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_WALLYS_DAD, 5
# 5 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_GYM_BOY, 8
# 6 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_SCOTT, 9
# 7 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_RIVAL2, 10

PetalburgCity_MapScripts::
# 11 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 31 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 13 "data/maps/PetalburgCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 14 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_PETALBURG_CITY_STATE
# 15 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 17 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 20 "data/maps/PetalburgCity/scripts.pory"
	case 4, PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 24 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 8
	goto_if_eq PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 27 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8005, 69
	goto_if_eq PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
	return

PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 16 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_GYM_BOY, 5, 11
	goto PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 18 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 19 "data/maps/PetalburgCity/scripts.pory"
	savebgm MUS_FOLLOW_ME
	goto PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 21 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 22 "data/maps/PetalburgCity/scripts.pory"
	savebgm MUS_FOLLOW_ME
	goto PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 25 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
	goto PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 28 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return

PetalburgCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 32 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
# 33 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
# 34 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_0x8005, 69, PetalburgCity_EventScript_RivalJealousOfWally
	.2byte 0


# 38 "data/maps/PetalburgCity/scripts.pory"

# 39 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorial::
# 40 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 41 "data/maps/PetalburgCity/scripts.pory"
	special SavePlayerParty
# 42 "data/maps/PetalburgCity/scripts.pory"
	special LoadWallyZigzagoon
# 43 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 44 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
# 45 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 46 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 47 "data/maps/PetalburgCity/scripts.pory"
	special StartWallyTutorialBattle
# 48 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 49 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 50 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
# 51 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY, MAP_PETALBURG_CITY
# 52 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 53 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 54 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 55 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 56 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 57 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 58 "data/maps/PetalburgCity/scripts.pory"
	special LoadPlayerParty
# 59 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 60 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 61 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 62 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 63 "data/maps/PetalburgCity/scripts.pory"
	end
# 64 "data/maps/PetalburgCity/scripts.pory"

# 65 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse::
# 66 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 67 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 68 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 69 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 70 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 71 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 7
# 72 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 5
# 73 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 74 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 75 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkInsideHouseWallysDad
# 76 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
# 77 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 78 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 79 "data/maps/PetalburgCity/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_CITY
# 80 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 81 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 82 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 83 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 84 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 85 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 86 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 87 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 88 "data/maps/PetalburgCity/scripts.pory"
	end

PetalburgCity_EventScript_RivalJealousOfWally::
# 92 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 93 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 94 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_RIVAL2, PetalburgCity_Movement_Rival2NoticeLeavingGym
# 95 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 96 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 97 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_RivalJealousOfWally_Text_0, MSGBOX_DEFAULT
# 98 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 99 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_RIVAL2, PetalburgCity_Movement_Rival2ApproachAfterLeavingGym
# 100 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 101 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhatDoingWithWally, MSGBOX_DEFAULT
# 102 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 103 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_ExplainDown
# 104 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 105 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_HeCaughtARalts, MSGBOX_DEFAULT
# 106 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 107 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_RIVAL2, PetalburgCity_Movement_Rival2LeaveToCatchRalts
# 108 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 110 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_RIVAL2
# 111 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_RIVAL2
# 112 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_102_RIVAL2
# 113 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 0
# 114 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	end


# 118 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Rival2NoticeLeavingGym:
# 119 "data/maps/PetalburgCity/scripts.pory"
	emote_exclamation_mark
# 120 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
	step_end

# 123 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Rival2ApproachAfterLeavingGym:
# 124 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 124 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 125 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
	step_end

# 128 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ExplainDown:
# 129 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_down
# 129 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_down
# 129 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_down
# 129 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_down
# 130 "data/maps/PetalburgCity/scripts.pory"
	delay_8
	step_end

# 133 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Rival2LeaveToCatchRalts:
# 134 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_down
# 134 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_down
# 134 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_down
# 134 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_down
# 134 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_down
# 134 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_down
# 135 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
	step_end

# 149 "data/maps/PetalburgCity/scripts.pory"

# 150 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 151 "data/maps/PetalburgCity/scripts.pory"
	lock
# 152 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 153 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 154 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 155 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_BOY, Common_Movement_FaceOriginalDirection
# 156 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 157 "data/maps/PetalburgCity/scripts.pory"
	release
# 158 "data/maps/PetalburgCity/scripts.pory"
	end
# 159 "data/maps/PetalburgCity/scripts.pory"

# 160 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 161 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 162 "data/maps/PetalburgCity/scripts.pory"
	end
# 163 "data/maps/PetalburgCity/scripts.pory"

# 164 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 165 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 166 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 167 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 168 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 169 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 170 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 171 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 172 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 173 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 174 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 175 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 176 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 177 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 178 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 179 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 180 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 182 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 183 "data/maps/PetalburgCity/scripts.pory"

# 184 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHousePlayer:
# 185 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 187 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 188 "data/maps/PetalburgCity/scripts.pory"

# 189 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 190 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 191 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 194 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 197 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 198 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 200 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 201 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 202 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 203 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 204 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 205 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 206 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 207 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 208 "data/maps/PetalburgCity/scripts.pory"

# 209 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 210 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 211 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 212 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 213 "data/maps/PetalburgCity/scripts.pory"

# 214 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 215 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 216 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 217 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 218 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 219 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 220 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 221 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 222 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 223 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 224 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 225 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 226 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 227 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 228 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 229 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 230 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 231 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 232 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 233 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 234 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 235 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 236 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 237 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 238 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 239 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 240 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 241 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 242 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 243 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 244 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 245 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 246 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 247 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 248 "data/maps/PetalburgCity/scripts.pory"

# 249 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 250 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 251 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 252 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 253 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 254 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 255 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 256 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 257 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 258 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 259 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 260 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 261 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 262 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 263 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 264 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 265 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 266 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 267 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 268 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 269 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 270 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 271 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 272 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 273 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 274 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 275 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 276 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 277 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 278 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 279 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 280 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 281 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 282 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 283 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 284 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 285 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 286 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 287 "data/maps/PetalburgCity/scripts.pory"

# 288 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 289 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 290 "data/maps/PetalburgCity/scripts.pory"
	end
# 291 "data/maps/PetalburgCity/scripts.pory"

# 292 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 293 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 294 "data/maps/PetalburgCity/scripts.pory"
	end
# 295 "data/maps/PetalburgCity/scripts.pory"

# 296 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 297 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 298 "data/maps/PetalburgCity/scripts.pory"
	end
# 299 "data/maps/PetalburgCity/scripts.pory"

# 300 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 301 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 302 "data/maps/PetalburgCity/scripts.pory"
	end
# 303 "data/maps/PetalburgCity/scripts.pory"

# 304 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 305 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 306 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 307 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 308 "data/maps/PetalburgCity/scripts.pory"
	end
# 309 "data/maps/PetalburgCity/scripts.pory"

# 310 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 311 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 312 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 313 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 314 "data/maps/PetalburgCity/scripts.pory"
	end
# 315 "data/maps/PetalburgCity/scripts.pory"

# 316 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 317 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 318 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 319 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 320 "data/maps/PetalburgCity/scripts.pory"
	end
# 321 "data/maps/PetalburgCity/scripts.pory"

# 322 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 323 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 324 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 325 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 326 "data/maps/PetalburgCity/scripts.pory"
	end
# 327 "data/maps/PetalburgCity/scripts.pory"

# 328 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 329 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 330 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 331 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 332 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 333 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 334 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 335 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 336 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 337 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 338 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 339 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 340 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 341 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 342 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 343 "data/maps/PetalburgCity/scripts.pory"
	ballfollowingmon
# 344 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 345 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 346 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 347 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 348 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 349 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 350 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 351 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 352 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 353 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 354 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 355 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 356 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 357 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 358 "data/maps/PetalburgCity/scripts.pory"
	end
# 359 "data/maps/PetalburgCity/scripts.pory"

# 360 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 361 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 362 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 363 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 364 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 365 "data/maps/PetalburgCity/scripts.pory"
	return
# 366 "data/maps/PetalburgCity/scripts.pory"

# 367 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 368 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
# 369 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 370 "data/maps/PetalburgCity/scripts.pory"
	return
# 371 "data/maps/PetalburgCity/scripts.pory"

# 372 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 373 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 374 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 375 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 376 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 377 "data/maps/PetalburgCity/scripts.pory"
	return
# 378 "data/maps/PetalburgCity/scripts.pory"

# 379 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 380 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 381 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 382 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 383 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 384 "data/maps/PetalburgCity/scripts.pory"
	return
# 385 "data/maps/PetalburgCity/scripts.pory"

# 386 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 387 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 388 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 389 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 390 "data/maps/PetalburgCity/scripts.pory"
	return
# 391 "data/maps/PetalburgCity/scripts.pory"

# 392 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 393 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 394 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 395 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 396 "data/maps/PetalburgCity/scripts.pory"
	return
# 397 "data/maps/PetalburgCity/scripts.pory"

# 398 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 399 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 400 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 401 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 402 "data/maps/PetalburgCity/scripts.pory"
	return
# 403 "data/maps/PetalburgCity/scripts.pory"

# 404 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 405 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 406 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 407 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 408 "data/maps/PetalburgCity/scripts.pory"
	return
# 409 "data/maps/PetalburgCity/scripts.pory"

# 410 "data/maps/PetalburgCity/scripts.pory"
@ Unused
# 411 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48::
# 412 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 413 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 414 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 415 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 416 "data/maps/PetalburgCity/scripts.pory"

# 417 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 418 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 419 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 420 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 421 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 422 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 423 "data/maps/PetalburgCity/scripts.pory"

# 424 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 425 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 426 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 427 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 428 "data/maps/PetalburgCity/scripts.pory"

# 429 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 430 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 431 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 432 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 433 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 434 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 435 "data/maps/PetalburgCity/scripts.pory"

# 436 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 437 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 438 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 439 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 440 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 441 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 442 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 443 "data/maps/PetalburgCity/scripts.pory"

# 444 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 445 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 446 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 447 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 448 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 449 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 450 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 451 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 452 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 453 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 454 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 455 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 456 "data/maps/PetalburgCity/scripts.pory"

# 457 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 458 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 459 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 460 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 461 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 462 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 463 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 464 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 465 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 466 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 467 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 468 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 469 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 470 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 471 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 472 "data/maps/PetalburgCity/scripts.pory"

# 473 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
# 474 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 475 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 476 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 477 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 478 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 479 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 480 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 481 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 482 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 483 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 484 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 485 "data/maps/PetalburgCity/scripts.pory"

# 486 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
# 487 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 488 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 489 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 490 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 491 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 492 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 493 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 494 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 495 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 496 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 497 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 498 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 499 "data/maps/PetalburgCity/scripts.pory"

# 500 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 501 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 502 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 503 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 504 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 505 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 506 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 507 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 508 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 509 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 510 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 511 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 512 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 513 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 514 "data/maps/PetalburgCity/scripts.pory"

# 515 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 516 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 517 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 518 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 519 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 520 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 521 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 522 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 523 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 524 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 525 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 526 "data/maps/PetalburgCity/scripts.pory"

# 527 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 528 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 529 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 530 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 531 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 532 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 533 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 534 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 535 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 536 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 537 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 538 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 539 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 540 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 541 "data/maps/PetalburgCity/scripts.pory"

# 542 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 543 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 544 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 545 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 546 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 547 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 548 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 549 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 550 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 551 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 552 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 553 "data/maps/PetalburgCity/scripts.pory"

# 554 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 555 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 556 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 557 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 558 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 559 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 560 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 561 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 562 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 563 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 564 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 565 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 566 "data/maps/PetalburgCity/scripts.pory"

# 567 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 568 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 569 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 570 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 571 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 10
# 572 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 573 "data/maps/PetalburgCity/scripts.pory"
	end
# 574 "data/maps/PetalburgCity/scripts.pory"

# 575 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 576 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 577 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 578 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 579 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 11
# 580 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 581 "data/maps/PetalburgCity/scripts.pory"
	end
# 582 "data/maps/PetalburgCity/scripts.pory"

# 583 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 584 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 585 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 586 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 587 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 12
# 588 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 589 "data/maps/PetalburgCity/scripts.pory"
	end
# 590 "data/maps/PetalburgCity/scripts.pory"

# 591 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 592 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 593 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 594 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 595 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 13
# 596 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 597 "data/maps/PetalburgCity/scripts.pory"
	end
# 598 "data/maps/PetalburgCity/scripts.pory"

# 599 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 600 "data/maps/PetalburgCity/scripts.pory"
	ballfollowingmon
# 601 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 602 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 603 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 604 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_ExclamationMark
# 605 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 606 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_Delay48
# 607 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 608 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 609 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 610 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 611 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 612 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 613 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 614 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 615 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 616 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 617 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 618 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 619 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 620 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 621 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 622 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 623 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 624 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 625 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 626 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 627 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 628 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 629 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 630 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 631 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 632 "data/maps/PetalburgCity/scripts.pory"
	end
# 633 "data/maps/PetalburgCity/scripts.pory"

# 634 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 635 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 636 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit0
# 637 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 638 "data/maps/PetalburgCity/scripts.pory"
	return
# 639 "data/maps/PetalburgCity/scripts.pory"

# 640 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 641 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 642 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit1
# 643 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 644 "data/maps/PetalburgCity/scripts.pory"
	return
# 645 "data/maps/PetalburgCity/scripts.pory"

# 646 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 647 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 648 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit2
# 649 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 650 "data/maps/PetalburgCity/scripts.pory"
	return
# 651 "data/maps/PetalburgCity/scripts.pory"

# 652 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 653 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 654 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit3
# 655 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 656 "data/maps/PetalburgCity/scripts.pory"
	return
# 657 "data/maps/PetalburgCity/scripts.pory"

# 658 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 659 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 660 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 661 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 662 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 663 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 664 "data/maps/PetalburgCity/scripts.pory"

# 665 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 666 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 667 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 668 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 669 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 670 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 671 "data/maps/PetalburgCity/scripts.pory"

# 672 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 673 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 674 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 675 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 676 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 677 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 678 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 679 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 680 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 681 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 682 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 683 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 684 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 685 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 686 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 687 "data/maps/PetalburgCity/scripts.pory"

# 688 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 689 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 690 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 691 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 692 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 693 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 694 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 695 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 696 "data/maps/PetalburgCity/scripts.pory"

# 697 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 698 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 699 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 700 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 701 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 702 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 703 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 704 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 705 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 706 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 707 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 708 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 709 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 710 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 711 "data/maps/PetalburgCity/scripts.pory"

# 712 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 713 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 714 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 715 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 716 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 717 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 718 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 719 "data/maps/PetalburgCity/scripts.pory"

# 720 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 721 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 722 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 723 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 724 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 725 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 726 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 727 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 728 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 729 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 730 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 731 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 732 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 733 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 734 "data/maps/PetalburgCity/scripts.pory"

# 735 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 736 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 737 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 738 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 739 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 740 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 741 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 742 "data/maps/PetalburgCity/scripts.pory"

# 743 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 744 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 745 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 746 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 747 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 748 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 749 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 750 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 751 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 752 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 753 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 754 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 755 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 756 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 757 "data/maps/PetalburgCity/scripts.pory"

# 758 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 759 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 760 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 761 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 762 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 763 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 764 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 765 "data/maps/PetalburgCity/scripts.pory"

# 766 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 767 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 768 "data/maps/PetalburgCity/scripts.pory"
	end
# 769 "data/maps/PetalburgCity/scripts.pory"

# 770 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 771 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our WALLY gone?\p"
# 772 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for VERDANTURF TOWN\n"
# 773 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 774 "data/maps/PetalburgCity/scripts.pory"

# 775 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 776 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 777 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie TRAINER?\p"
# 778 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what POKéMON TRAINERS\n"
# 779 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 780 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of GYM\n"
# 781 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 782 "data/maps/PetalburgCity/scripts.pory"

# 783 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 784 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is PETALBURG CITY's GYM.$"
# 785 "data/maps/PetalburgCity/scripts.pory"

# 786 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 787 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the GYM's sign. Look for it\n"
# 788 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a GYM.$"
# 789 "data/maps/PetalburgCity/scripts.pory"

# 790 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 791 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 792 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 793 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 794 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 795 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 796 "data/maps/PetalburgCity/scripts.pory"

# 797 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 798 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six POKéMON.\n"
# 799 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 800 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a STORAGE\n"
# 801 "data/maps/PetalburgCity/scripts.pory"
	.string "BOX over a PC connection.$"
# 802 "data/maps/PetalburgCity/scripts.pory"

# 803 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 804 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
# 805 "data/maps/PetalburgCity/scripts.pory"
	.string "LEADER: NORMAN\l"
# 806 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 807 "data/maps/PetalburgCity/scripts.pory"

# 808 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 809 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY\n"
# 810 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 811 "data/maps/PetalburgCity/scripts.pory"

# 812 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 813 "data/maps/PetalburgCity/scripts.pory"
	.string "WALLY'S HOUSE$"
# 814 "data/maps/PetalburgCity/scripts.pory"

# 815 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 816 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 817 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 818 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a POKéMON TRAINER?$"
# 819 "data/maps/PetalburgCity/scripts.pory"

# 820 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 821 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 822 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 823 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 824 "data/maps/PetalburgCity/scripts.pory"
	.string "You're either a rookie TRAINER,\n"
# 825 "data/maps/PetalburgCity/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 826 "data/maps/PetalburgCity/scripts.pory"

# 827 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 828 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 829 "data/maps/PetalburgCity/scripts.pory"
	.string "talented TRAINERS.\p"
# 830 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm sorry to have taken your time.$"

PetalburgCity_EventScript_RivalJealousOfWally_Text_0:
# 97 "data/maps/PetalburgCity/scripts.pory"
	.string "Oh, hey {PLAYER}!$"

PetalburgCity_Text_WhatDoingWithWally::
# 138 "data/maps/PetalburgCity/scripts.pory"
	.string "What were you doing with that other kid\n"
	.string "just now?\l"
	.string "He seemed really pleased with himself\l"
	.string "when he came out.$"

PetalburgCity_Text_HeCaughtARalts::
# 143 "data/maps/PetalburgCity/scripts.pory"
	.string "WHAAAAT?! He caught a RALTS\n"
	.string "on ROUTE 102?\l"
	.string "That's no fair! I didn't even know you\l"
	.string "could find those there.\l"
	.string "I'm going to go catch one for myself\l"
	.string "right now!$"
