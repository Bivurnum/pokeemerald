# 14 "data/maps/Route111/scripts.pory"

# 15 "data/maps/Route111/scripts.pory"
.set LOCALID_VICTOR, 1
# 16 "data/maps/Route111/scripts.pory"
.set LOCALID_VICTORIA, 2
# 17 "data/maps/Route111/scripts.pory"
.set LOCALID_VIVI, 3
# 18 "data/maps/Route111/scripts.pory"
.set LOCALID_VICKY, 4
# 19 "data/maps/Route111/scripts.pory"
.set LOCALID_SECRETBASEGUY, 33
# 20 "data/maps/Route111/scripts.pory"
.set LOCALID_ROCK_SMASH_MAN, 46
# 21 "data/maps/Route111/scripts.pory"
.set LOCALID_RIVAL1, 47
# 22 "data/maps/Route111/scripts.pory"
.set LOCALID_RIVAL1ONBIKE, 48
# 23 "data/maps/Route111/scripts.pory"
.set LOCALID_RIVAL1BIKESECRET, 49
# 24 "data/maps/Route111/scripts.pory"
.set LOCALID_RIVAL2BIKESECRET, 50
# 25 "data/maps/Route111/scripts.pory"
.set LOCALID_RIVAL1SECRET, 51
# 26 "data/maps/Route111/scripts.pory"
.set LOCALID_RIVAL2SECRET, 52
# 27 "data/maps/Route111/scripts.pory"

# 28 "data/maps/Route111/scripts.pory"
@ Note: LOCALID_ROUTE111_PLAYER_FALLING is a local id for this map used elsewhere. It's defined in event_objects.h
# 29 "data/maps/Route111/scripts.pory"

# 30 "data/maps/Route111/scripts.pory"
Route111_MapScripts::
# 31 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route111_OnLoad
# 32 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route111_OnTransition
# 33 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route111_OnWarp
# 34 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route111_OnFrame
# 35 "data/maps/Route111/scripts.pory"
	.byte 0
# 36 "data/maps/Route111/scripts.pory"

# 37 "data/maps/Route111/scripts.pory"
Route111_OnLoad:
# 38 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, Route111_EventScript_CloseDesertRuins
# 39 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_ShowTemporaryMirageTower
# 40 "data/maps/Route111/scripts.pory"
	end
# 41 "data/maps/Route111/scripts.pory"

# 42 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseDesertRuins::
# 43 "data/maps/Route111/scripts.pory"
	setmetatile 29, 86, METATILE_General_RockWall_RockBase, TRUE
# 44 "data/maps/Route111/scripts.pory"
	setmetatile 29, 87, METATILE_General_RockWall_SandBase, TRUE
# 45 "data/maps/Route111/scripts.pory"
	return
# 46 "data/maps/Route111/scripts.pory"

# 47 "data/maps/Route111/scripts.pory"
@ Show Mirage Tower just prior to disintegration. Mirage Tower is otherwise handled by the map layout
# 48 "data/maps/Route111/scripts.pory"
Route111_EventScript_ShowTemporaryMirageTower::
# 49 "data/maps/Route111/scripts.pory"
	setmetatile 18, 53, METATILE_Mauville_MirageTower_Tile0, FALSE
# 50 "data/maps/Route111/scripts.pory"
	setmetatile 19, 53, METATILE_Mauville_MirageTower_Tile1, FALSE
# 51 "data/maps/Route111/scripts.pory"
	setmetatile 20, 53, METATILE_Mauville_MirageTower_Tile2, FALSE
# 52 "data/maps/Route111/scripts.pory"
	setmetatile 18, 54, METATILE_Mauville_MirageTower_Tile3, FALSE
# 53 "data/maps/Route111/scripts.pory"
	setmetatile 19, 54, METATILE_Mauville_MirageTower_Tile4, FALSE
# 54 "data/maps/Route111/scripts.pory"
	setmetatile 20, 54, METATILE_Mauville_MirageTower_Tile5, FALSE
# 55 "data/maps/Route111/scripts.pory"
	setmetatile 18, 55, METATILE_Mauville_MirageTower_Tile6, FALSE
# 56 "data/maps/Route111/scripts.pory"
	setmetatile 19, 55, METATILE_Mauville_MirageTower_Tile7, FALSE
# 57 "data/maps/Route111/scripts.pory"
	setmetatile 20, 55, METATILE_Mauville_MirageTower_Tile8, FALSE
# 58 "data/maps/Route111/scripts.pory"
	setmetatile 18, 56, METATILE_Mauville_MirageTower_Tile9, FALSE
# 59 "data/maps/Route111/scripts.pory"
	setmetatile 19, 56, METATILE_Mauville_MirageTower_TileA, FALSE
# 60 "data/maps/Route111/scripts.pory"
	setmetatile 20, 56, METATILE_Mauville_MirageTower_TileB, FALSE
# 61 "data/maps/Route111/scripts.pory"
	setmetatile 18, 57, METATILE_Mauville_MirageTower_TileC, FALSE
# 62 "data/maps/Route111/scripts.pory"
	setmetatile 19, 57, METATILE_Mauville_MirageTower_TileD, FALSE
# 63 "data/maps/Route111/scripts.pory"
	setmetatile 20, 57, METATILE_Mauville_MirageTower_TileE, FALSE
# 64 "data/maps/Route111/scripts.pory"
	setmetatile 18, 58, METATILE_Mauville_MirageTower_TileF, FALSE
# 65 "data/maps/Route111/scripts.pory"
	setmetatile 19, 58, METATILE_Mauville_MirageTower_Tile10, FALSE
# 66 "data/maps/Route111/scripts.pory"
	setmetatile 20, 58, METATILE_Mauville_MirageTower_Tile11, FALSE
# 67 "data/maps/Route111/scripts.pory"
	return
# 68 "data/maps/Route111/scripts.pory"

# 69 "data/maps/Route111/scripts.pory"
Route111_OnTransition:
# 70 "data/maps/Route111/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 71 "data/maps/Route111/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 72 "data/maps/Route111/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
# 73 "data/maps/Route111/scripts.pory"
	special SetMirageTowerVisibility
# 74 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_SetLayoutNoMirageTower
# 75 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_SetFallingPlayerGfx
# 76 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_SetMirageTowerGone
# 77 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CheckSetSandstorm
# 78 "data/maps/Route111/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 79 "data/maps/Route111/scripts.pory"
	goto_if_not_defeated TRAINER_VICKY, Route111_EventScript_SetWinstratesNotDefeated
# 80 "data/maps/Route111/scripts.pory"
	end
# 81 "data/maps/Route111/scripts.pory"

# 82 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfx::
# 83 "data/maps/Route111/scripts.pory"
	checkplayergender
# 84 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route111_EventScript_SetFallingPlayerGfxMale
# 85 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route111_EventScript_SetFallingPlayerGfxFemale
# 86 "data/maps/Route111/scripts.pory"
	return
# 87 "data/maps/Route111/scripts.pory"

# 88 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxMale::
# 89 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 90 "data/maps/Route111/scripts.pory"
	return
# 91 "data/maps/Route111/scripts.pory"

# 92 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxFemale::
# 93 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 94 "data/maps/Route111/scripts.pory"
	return
# 95 "data/maps/Route111/scripts.pory"

# 96 "data/maps/Route111/scripts.pory"
Route111_EventScript_CheckSetSandstorm::
# 97 "data/maps/Route111/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 98 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_1, 34, Route111_EventScript_EndCheckSetSandstorm
# 99 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 107, Route111_EventScript_EndCheckSetSandstorm
# 100 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 72, Route111_EventScript_SetSandstorm
# 101 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_0, 2000, Route111_EventScript_EndCheckSetSandstorm
# 102 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_0, 8, Route111_EventScript_EndCheckSetSandstorm
# 103 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetSandstorm::
# 104 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 105 "data/maps/Route111/scripts.pory"
Route111_EventScript_EndCheckSetSandstorm::
# 106 "data/maps/Route111/scripts.pory"
	return
# 107 "data/maps/Route111/scripts.pory"

# 108 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetWinstratesNotDefeated::
# 109 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE
# 110 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE
# 111 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE
# 112 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
# 113 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTOR
# 114 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTORIA
# 115 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VIVI
# 116 "data/maps/Route111/scripts.pory"
	end
# 117 "data/maps/Route111/scripts.pory"

# 118 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetLayoutNoMirageTower::
# 119 "data/maps/Route111/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE111_NO_MIRAGE_TOWER
# 120 "data/maps/Route111/scripts.pory"
	return
# 121 "data/maps/Route111/scripts.pory"

# 122 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetMirageTowerGone::
# 123 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 3
# 124 "data/maps/Route111/scripts.pory"
	return
# 125 "data/maps/Route111/scripts.pory"

# 126 "data/maps/Route111/scripts.pory"
Route111_OnWarp:
# 127 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_HidePlayerForMirageTower
# 128 "data/maps/Route111/scripts.pory"
	.2byte 0
# 129 "data/maps/Route111/scripts.pory"

# 130 "data/maps/Route111/scripts.pory"
Route111_EventScript_HidePlayerForMirageTower::
# 131 "data/maps/Route111/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_LITTLEROOT_TOWN
# 132 "data/maps/Route111/scripts.pory"
	end
# 133 "data/maps/Route111/scripts.pory"

# 134 "data/maps/Route111/scripts.pory"
Route111_OnFrame:
# 135 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_MirageTowerDisappear
# 136 "data/maps/Route111/scripts.pory"
	.2byte 0
# 137 "data/maps/Route111/scripts.pory"

# 138 "data/maps/Route111/scripts.pory"
Route111_EventScript_MirageTowerDisappear::
# 139 "data/maps/Route111/scripts.pory"
	lockall
# 140 "data/maps/Route111/scripts.pory"
	special StartMirageTowerShake
# 141 "data/maps/Route111/scripts.pory"
	waitstate
# 142 "data/maps/Route111/scripts.pory"
	delay 24
# 143 "data/maps/Route111/scripts.pory"
	playse SE_FALL
# 144 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_PLAYER_FALLING
# 145 "data/maps/Route111/scripts.pory"
	special StartPlayerDescendMirageTower
# 146 "data/maps/Route111/scripts.pory"
	waitstate
# 147 "data/maps/Route111/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_LITTLEROOT_TOWN
# 148 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_PLAYER_FALLING
# 149 "data/maps/Route111/scripts.pory"
	delay 16
# 150 "data/maps/Route111/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 151 "data/maps/Route111/scripts.pory"
	delay 16
# 152 "data/maps/Route111/scripts.pory"
	special StartMirageTowerDisintegration
# 153 "data/maps/Route111/scripts.pory"
	waitstate
# 154 "data/maps/Route111/scripts.pory"
	special StartMirageTowerFossilFallAndSink
# 155 "data/maps/Route111/scripts.pory"
	waitstate
# 156 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 2
# 157 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_DESERT_UNDERPASS_FOSSIL
# 158 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_CHOSE_CLAW_FOSSIL, Route111_EventScript_RootFossilDisappeared
# 159 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ClawFossilDisappeared, MSGBOX_DEFAULT
# 160 "data/maps/Route111/scripts.pory"
	releaseall
# 161 "data/maps/Route111/scripts.pory"
	end
# 162 "data/maps/Route111/scripts.pory"

# 163 "data/maps/Route111/scripts.pory"
Route111_EventScript_RootFossilDisappeared::
# 164 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RootFossilDisappeared, MSGBOX_DEFAULT
# 165 "data/maps/Route111/scripts.pory"
	releaseall
# 166 "data/maps/Route111/scripts.pory"
	end
# 167 "data/maps/Route111/scripts.pory"

# 168 "data/maps/Route111/scripts.pory"
@ Unused
# 169 "data/maps/Route111/scripts.pory"
Route111_Movement_PlayerFall::
# 170 "data/maps/Route111/scripts.pory"
	lock_anim
# 171 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 172 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 173 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 174 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 175 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 176 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 177 "data/maps/Route111/scripts.pory"
	step_end
# 178 "data/maps/Route111/scripts.pory"

# 179 "data/maps/Route111/scripts.pory"
Route111_EventScript_Girl::
# 180 "data/maps/Route111/scripts.pory"
	lock
# 181 "data/maps/Route111/scripts.pory"
	faceplayer
# 182 "data/maps/Route111/scripts.pory"
	dotimebasedevents
# 183 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_111_RECEIVED_BERRY, Route111_EventScript_ReceivedBerry
# 184 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WateredPlantsEveryDayTakeBerry, MSGBOX_DEFAULT
# 185 "data/maps/Route111/scripts.pory"
	giveitem ITEM_RAZZ_BERRY
# 186 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 187 "data/maps/Route111/scripts.pory"
	setflag FLAG_DAILY_ROUTE_111_RECEIVED_BERRY
# 188 "data/maps/Route111/scripts.pory"
	special GetPlayerBigGuyGirlString
# 189 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_GoingToTryToMakeDifferentColorBerries, MSGBOX_DEFAULT
# 190 "data/maps/Route111/scripts.pory"
	release
# 191 "data/maps/Route111/scripts.pory"
	end
# 192 "data/maps/Route111/scripts.pory"

# 193 "data/maps/Route111/scripts.pory"
Route111_EventScript_ReceivedBerry::
# 194 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WhatColorBerriesToLookForToday, MSGBOX_DEFAULT
# 195 "data/maps/Route111/scripts.pory"
	release
# 196 "data/maps/Route111/scripts.pory"
	end
# 197 "data/maps/Route111/scripts.pory"

# 198 "data/maps/Route111/scripts.pory"
@ Unused
# 199 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerUp::
# 200 "data/maps/Route111/scripts.pory"
	lockall
# 201 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 0
# 202 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 203 "data/maps/Route111/scripts.pory"
	end
# 204 "data/maps/Route111/scripts.pory"

# 205 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerDown::
# 206 "data/maps/Route111/scripts.pory"
	lockall
# 207 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 1
# 208 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 209 "data/maps/Route111/scripts.pory"
	end
# 210 "data/maps/Route111/scripts.pory"

# 211 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerLeft::
# 212 "data/maps/Route111/scripts.pory"
	lockall
# 213 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 2
# 214 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 215 "data/maps/Route111/scripts.pory"
	end
# 216 "data/maps/Route111/scripts.pory"

# 217 "data/maps/Route111/scripts.pory"
@ Unused
# 218 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerRight::
# 219 "data/maps/Route111/scripts.pory"
	lockall
# 220 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 3
# 221 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 222 "data/maps/Route111/scripts.pory"
	end
# 223 "data/maps/Route111/scripts.pory"

# 224 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTrigger::
# 225 "data/maps/Route111/scripts.pory"
	checkitem ITEM_GO_GOGGLES
# 226 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route111_EventScript_PreventRouteAccess
# 227 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 1
# 228 "data/maps/Route111/scripts.pory"
	releaseall
# 229 "data/maps/Route111/scripts.pory"
	end
# 230 "data/maps/Route111/scripts.pory"

# 231 "data/maps/Route111/scripts.pory"
Route111_EventScript_PreventRouteAccess::
# 232 "data/maps/Route111/scripts.pory"
	msgbox gText_SandstormIsVicious, MSGBOX_DEFAULT
# 233 "data/maps/Route111/scripts.pory"
	closemessage
# 234 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 0, Route111_EventScript_PushUpFromRoute
# 235 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 1, Route111_EventScript_PushDownFromRoute
# 236 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 2, Route111_EventScript_PushLeftFromRoute
# 237 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 3, Route111_EventScript_PushRightFromRoute
# 238 "data/maps/Route111/scripts.pory"
	releaseall
# 239 "data/maps/Route111/scripts.pory"
	end
# 240 "data/maps/Route111/scripts.pory"

# 241 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushUpFromRoute::
# 242 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushUpFromRoute
# 243 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 244 "data/maps/Route111/scripts.pory"
	return
# 245 "data/maps/Route111/scripts.pory"

# 246 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushDownFromRoute::
# 247 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushDownFromRoute
# 248 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 249 "data/maps/Route111/scripts.pory"
	return
# 250 "data/maps/Route111/scripts.pory"

# 251 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushLeftFromRoute::
# 252 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushLeftFromRoute
# 253 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 254 "data/maps/Route111/scripts.pory"
	return
# 255 "data/maps/Route111/scripts.pory"

# 256 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushRightFromRoute::
# 257 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushRightFromRoute
# 258 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 259 "data/maps/Route111/scripts.pory"
	return
# 260 "data/maps/Route111/scripts.pory"

# 261 "data/maps/Route111/scripts.pory"
Route111_Movement_PushUpFromRoute:
# 262 "data/maps/Route111/scripts.pory"
	walk_up
# 263 "data/maps/Route111/scripts.pory"
	step_end
# 264 "data/maps/Route111/scripts.pory"

# 265 "data/maps/Route111/scripts.pory"
Route111_Movement_PushDownFromRoute:
# 266 "data/maps/Route111/scripts.pory"
	walk_down
# 267 "data/maps/Route111/scripts.pory"
	step_end
# 268 "data/maps/Route111/scripts.pory"

# 269 "data/maps/Route111/scripts.pory"
Route111_Movement_PushLeftFromRoute:
# 270 "data/maps/Route111/scripts.pory"
	walk_left
# 271 "data/maps/Route111/scripts.pory"
	step_end
# 272 "data/maps/Route111/scripts.pory"

# 273 "data/maps/Route111/scripts.pory"
Route111_Movement_PushRightFromRoute:
# 274 "data/maps/Route111/scripts.pory"
	walk_right
# 275 "data/maps/Route111/scripts.pory"
	step_end
# 276 "data/maps/Route111/scripts.pory"

# 277 "data/maps/Route111/scripts.pory"
Route111_EventScript_SunTrigger::
# 278 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SUNNY
# 279 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_ROUTE110
# 280 "data/maps/Route111/scripts.pory"
	doweather
# 281 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 0
# 282 "data/maps/Route111/scripts.pory"
	end
# 283 "data/maps/Route111/scripts.pory"

# 284 "data/maps/Route111/scripts.pory"
Route111_EventScript_SandstormTrigger::
# 285 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 286 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_DESERT
# 287 "data/maps/Route111/scripts.pory"
	doweather
# 288 "data/maps/Route111/scripts.pory"
	end

Route111_EventScript_TriggerLeft::
# 292 "data/maps/Route111/scripts.pory"
	lock
# 293 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_BIKE_SHOP_RIVALS
# 294 "data/maps/Route111/scripts.pory"
	setobjectxyperm 48, 22, 133
# 295 "data/maps/Route111/scripts.pory"
	addobject 48
# 296 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 297 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 298 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PlayerWatchRidePastLeft
# 299 "data/maps/Route111/scripts.pory"
	applymovement 48, Route111_Movement_Rival1RidePast
# 300 "data/maps/Route111/scripts.pory"
	msgboxtimed Route111_EventScript_TriggerLeft_Text_0, 90
# 301 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 302 "data/maps/Route111/scripts.pory"
	removeobject 48
# 303 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_BIKE_SHOP_RIVALS
# 304 "data/maps/Route111/scripts.pory"
	setvar VAR_MAUVILLE_BIKE_SHOP_STATE, 3
# 305 "data/maps/Route111/scripts.pory"
	release
	end


Route111_EventScript_TriggerMiddleAndRight::
# 310 "data/maps/Route111/scripts.pory"
	lock
# 311 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_BIKE_SHOP_RIVALS
# 312 "data/maps/Route111/scripts.pory"
	addobject 48
# 313 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 314 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 315 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PlayerWatchRidePast
# 316 "data/maps/Route111/scripts.pory"
	applymovement 48, Route111_Movement_Rival1RidePast
# 317 "data/maps/Route111/scripts.pory"
	msgboxtimed Route111_EventScript_TriggerLeft_Text_0, 80
# 318 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 319 "data/maps/Route111/scripts.pory"
	removeobject 48
# 320 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_BIKE_SHOP_RIVALS
# 321 "data/maps/Route111/scripts.pory"
	setvar VAR_MAUVILLE_BIKE_SHOP_STATE, 3
# 322 "data/maps/Route111/scripts.pory"
	release
	end


# 326 "data/maps/Route111/scripts.pory"
Route111_Movement_PlayerWatchRidePast:
# 327 "data/maps/Route111/scripts.pory"
	delay_16
# 328 "data/maps/Route111/scripts.pory"
	delay_4
# 328 "data/maps/Route111/scripts.pory"
	delay_4
# 328 "data/maps/Route111/scripts.pory"
	delay_4
# 329 "data/maps/Route111/scripts.pory"
	face_left
# 330 "data/maps/Route111/scripts.pory"
	delay_4
# 331 "data/maps/Route111/scripts.pory"
	face_up
	step_end

# 334 "data/maps/Route111/scripts.pory"
Route111_Movement_PlayerWatchRidePastLeft:
# 335 "data/maps/Route111/scripts.pory"
	delay_16
# 336 "data/maps/Route111/scripts.pory"
	delay_4
# 336 "data/maps/Route111/scripts.pory"
	delay_4
# 336 "data/maps/Route111/scripts.pory"
	delay_4
# 337 "data/maps/Route111/scripts.pory"
	face_right
# 338 "data/maps/Route111/scripts.pory"
	delay_4
# 339 "data/maps/Route111/scripts.pory"
	face_up
	step_end

# 342 "data/maps/Route111/scripts.pory"
Route111_Movement_Rival1RidePast:
# 343 "data/maps/Route111/scripts.pory"
	delay_16
# 344 "data/maps/Route111/scripts.pory"
	walk_faster_up
# 344 "data/maps/Route111/scripts.pory"
	walk_faster_up
# 344 "data/maps/Route111/scripts.pory"
	walk_faster_up
# 344 "data/maps/Route111/scripts.pory"
	walk_faster_up
# 344 "data/maps/Route111/scripts.pory"
	walk_faster_up
# 344 "data/maps/Route111/scripts.pory"
	walk_faster_up
# 344 "data/maps/Route111/scripts.pory"
	walk_faster_up
# 344 "data/maps/Route111/scripts.pory"
	walk_faster_up
# 344 "data/maps/Route111/scripts.pory"
	walk_faster_up
# 344 "data/maps/Route111/scripts.pory"
	walk_faster_up
# 344 "data/maps/Route111/scripts.pory"
	walk_faster_up
# 344 "data/maps/Route111/scripts.pory"
	walk_faster_up
# 344 "data/maps/Route111/scripts.pory"
	walk_faster_up
	step_end

Route111_EventScript_Victor::
# 348 "data/maps/Route111/scripts.pory"
	lock
# 349 "data/maps/Route111/scripts.pory"
	faceplayer
# 350 "data/maps/Route111/scripts.pory"
	setflag FLAG_LANDMARK_WINSTRATE_FAMILY
# 351 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BattleOurFamily, MSGBOX_YESNO
# 352 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route111_EventScript_BattleWinstrates
# 353 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IsThatSo, MSGBOX_DEFAULT
# 354 "data/maps/Route111/scripts.pory"
	release
	end


Route111_EventScript_BattleWinstrates::
# 359 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorIntro, MSGBOX_DEFAULT
# 360 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTOR, Route111_Text_VictorDefeat
# 361 "data/maps/Route111/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
# 362 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 363 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 364 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorPostBattle, MSGBOX_DEFAULT
# 365 "data/maps/Route111/scripts.pory"
	closemessage
# 366 "data/maps/Route111/scripts.pory"
	applymovement 1, Route111_Movement_WinstrateEnterHouse
# 367 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 368 "data/maps/Route111/scripts.pory"
	removeobject 1
# 369 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 370 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 371 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 372 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 373 "data/maps/Route111/scripts.pory"
	addobject 2
# 374 "data/maps/Route111/scripts.pory"
	applymovement 2, Route111_Movement_WinstrateExitHouse
# 375 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 376 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 377 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaIntro, MSGBOX_DEFAULT
# 378 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTORIA, Route111_Text_VictoriaDefeat
# 379 "data/maps/Route111/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 380 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 381 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 382 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaPostBattle, MSGBOX_DEFAULT
# 383 "data/maps/Route111/scripts.pory"
	closemessage
# 384 "data/maps/Route111/scripts.pory"
	applymovement 2, Route111_Movement_WinstrateEnterHouse
# 385 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 386 "data/maps/Route111/scripts.pory"
	removeobject 2
# 387 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 388 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 389 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 390 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 391 "data/maps/Route111/scripts.pory"
	addobject 3
# 392 "data/maps/Route111/scripts.pory"
	applymovement 3, Route111_Movement_WinstrateExitHouse
# 393 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 394 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 395 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviIntro, MSGBOX_DEFAULT
# 396 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VIVI, Route111_Text_ViviDefeat
# 397 "data/maps/Route111/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterUp
# 398 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 399 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 400 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviPostBattle, MSGBOX_DEFAULT
# 401 "data/maps/Route111/scripts.pory"
	closemessage
# 402 "data/maps/Route111/scripts.pory"
	applymovement 3, Route111_Movement_WinstrateEnterHouse
# 403 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 404 "data/maps/Route111/scripts.pory"
	removeobject 3
# 405 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 406 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 407 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 408 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 409 "data/maps/Route111/scripts.pory"
	compare VAR_MAUVILLE_BIKE_SHOP_STATE, 3
	goto_if_eq Route111_EventScript_BattleWinstrates_2
# 455 "data/maps/Route111/scripts.pory"
	addobject 4
# 456 "data/maps/Route111/scripts.pory"
	applymovement 4, Route111_Movement_WinstrateExitHouse
# 457 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 458 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 459 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyIntro, MSGBOX_DEFAULT
# 460 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICKY, Route111_Text_VickyDefeat
Route111_EventScript_BattleWinstrates_1:
# 462 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyPostBattle, MSGBOX_DEFAULT
# 463 "data/maps/Route111/scripts.pory"
	closemessage
# 464 "data/maps/Route111/scripts.pory"
	compare VAR_MAUVILLE_BIKE_SHOP_STATE, 3
	goto_if_eq Route111_EventScript_BattleWinstrates_6
# 468 "data/maps/Route111/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
Route111_EventScript_BattleWinstrates_5:
# 470 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 471 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 472 "data/maps/Route111/scripts.pory"
	applymovement 4, Route111_Movement_WinstrateEnterHouse
# 473 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 474 "data/maps/Route111/scripts.pory"
	removeobject 4
# 475 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 476 "data/maps/Route111/scripts.pory"
	compare VAR_MAUVILLE_BIKE_SHOP_STATE, 3
	goto_if_eq Route111_EventScript_BattleWinstrates_15
Route111_EventScript_BattleWinstrates_14:
# 492 "data/maps/Route111/scripts.pory"
	release
	end

Route111_EventScript_BattleWinstrates_2:
# 410 "data/maps/Route111/scripts.pory"
	addobject 47
# 411 "data/maps/Route111/scripts.pory"
	applymovement 47, Route111_Movement_WinstrateExitHouse
# 412 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 413 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 414 "data/maps/Route111/scripts.pory"
	rival1talk Route111_Text_SpencerAllTheCommotion, Route111_Text_BrenAllTheCommotion, Route111_Text_KyleAllTheCommotion
# 417 "data/maps/Route111/scripts.pory"
	closemessage
# 418 "data/maps/Route111/scripts.pory"
	applymovement 47, Common_Movement_WalkInPlaceFasterUp
# 419 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 420 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 421 "data/maps/Route111/scripts.pory"
	addobject 4
# 422 "data/maps/Route111/scripts.pory"
	applymovement 4, Route111_Movement_WinstrateExitHouse
# 423 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WinstrateWithRivalPlayerPushedDown
# 424 "data/maps/Route111/scripts.pory"
	applymovement 47, Route111_Movement_WinstrateExitHouse
# 425 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 426 "data/maps/Route111/scripts.pory"
	applymovement 47, Common_Movement_FaceUp
# 427 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 428 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 429 "data/maps/Route111/scripts.pory"
	applymovement 47, Common_Movement_Walk_Left
# 430 "data/maps/Route111/scripts.pory"
	applymovement 4, Route111_Movement_WinstrateExitHouse
# 431 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 432 "data/maps/Route111/scripts.pory"
	applymovement 47, Common_Movement_FaceRight
# 433 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 434 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyIntro, MSGBOX_DEFAULT
# 435 "data/maps/Route111/scripts.pory"
	delay 10
# 436 "data/maps/Route111/scripts.pory"
	applymovement 47, Common_Movement_BeginTalkDown
# 437 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 438 "data/maps/Route111/scripts.pory"
	rival1talk Route111_Text_SpencerDontWorryGranny, Route111_Text_BrenDontWorryGranny, Route111_Text_KyleDontWorryGranny
# 441 "data/maps/Route111/scripts.pory"
	closemessage
# 442 "data/maps/Route111/scripts.pory"
	checkfriendchoice
# 443 "data/maps/Route111/scripts.pory"
	switch VAR_RESULT
# 444 "data/maps/Route111/scripts.pory"
	case SPENCER, Route111_EventScript_BattleWinstrates_11
# 446 "data/maps/Route111/scripts.pory"
	case BREN, Route111_EventScript_BattleWinstrates_12
# 448 "data/maps/Route111/scripts.pory"
	case KYLE, Route111_EventScript_BattleWinstrates_13
Route111_EventScript_BattleWinstrates_9:
# 451 "data/maps/Route111/scripts.pory"
	applymovement 47, Common_Movement_FaceRight
# 452 "data/maps/Route111/scripts.pory"
	waitmovement 0
	goto Route111_EventScript_BattleWinstrates_1

Route111_EventScript_BattleWinstrates_6:
# 465 "data/maps/Route111/scripts.pory"
	applymovement 4, Route111_Movement_WinstrateEnterHouse
	goto Route111_EventScript_BattleWinstrates_5

Route111_EventScript_BattleWinstrates_11:
# 445 "data/maps/Route111/scripts.pory"
	doublebattle_vs_2 TRAINER_VICKY, Route111_Text_VickyDefeat, TRAINER_BREN_MAUVILLE, Route111_Text_BrenPostBattle
	goto Route111_EventScript_BattleWinstrates_9

Route111_EventScript_BattleWinstrates_12:
# 447 "data/maps/Route111/scripts.pory"
	doublebattle_vs_2 TRAINER_VICKY, Route111_Text_VickyDefeat, TRAINER_KYLE_MAUVILLE, Route111_Text_KylePostBattle
	goto Route111_EventScript_BattleWinstrates_9

Route111_EventScript_BattleWinstrates_13:
# 449 "data/maps/Route111/scripts.pory"
	doublebattle_vs_2 TRAINER_VICKY, Route111_Text_VickyDefeat, TRAINER_SPENCER_MAUVILLE, Route111_Text_SpencerPostBattle
	goto Route111_EventScript_BattleWinstrates_9

Route111_EventScript_BattleWinstrates_15:
# 477 "data/maps/Route111/scripts.pory"
	applymovement 47, Route111_Movement_WinstrateWithRivalRival1MoveBackToPlayer
# 478 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 479 "data/maps/Route111/scripts.pory"
	rival1talk Route111_Text_SpencerLoveToChatYouUp, Route111_Text_BrenLoveToChatYouUp, Route111_Text_KyleLoveToChatYouUp
# 482 "data/maps/Route111/scripts.pory"
	closemessage
# 483 "data/maps/Route111/scripts.pory"
	applymovement 47, Route111_Movement_WinstrateEnterHouse
# 484 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 485 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 486 "data/maps/Route111/scripts.pory"
	applymovement 47, Route111_Movement_WinstrateEnterHouse
# 487 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 488 "data/maps/Route111/scripts.pory"
	removeobject 47
# 489 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 490 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_WINSTRATE_RIVAL1
	goto Route111_EventScript_BattleWinstrates_14


Route111_EventScript_OpenWinstrateDoor::
# 497 "data/maps/Route111/scripts.pory"
	opendoor 13, 113
# 498 "data/maps/Route111/scripts.pory"
	waitdooranim
	return


Route111_EventScript_CloseWinstrateDoor::
# 503 "data/maps/Route111/scripts.pory"
	closedoor 13, 113
# 504 "data/maps/Route111/scripts.pory"
	waitdooranim
	return


# 508 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateEnterHouse:
# 509 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_up
# 510 "data/maps/Route111/scripts.pory"
	walk_up
	step_end

# 513 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateExitHouse:
# 514 "data/maps/Route111/scripts.pory"
	walk_down
	step_end

# 517 "data/maps/Route111/scripts.pory"
Route111_Movement_WaitForNextWinstrate:
# 518 "data/maps/Route111/scripts.pory"
	delay_16
# 519 "data/maps/Route111/scripts.pory"
	delay_16
# 520 "data/maps/Route111/scripts.pory"
	delay_16
	step_end

# 523 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateWithRivalPlayerPushedDown:
# 524 "data/maps/Route111/scripts.pory"
	delay_8
# 525 "data/maps/Route111/scripts.pory"
	walk_down
# 526 "data/maps/Route111/scripts.pory"
	face_up
	step_end

# 529 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateWithRivalRival1MoveBackToPlayer:
# 530 "data/maps/Route111/scripts.pory"
	walk_right
# 531 "data/maps/Route111/scripts.pory"
	face_down
	step_end

# 534 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateWithRivalRival1EnterHouse:
# 535 "data/maps/Route111/scripts.pory"
	walk_up
# 535 "data/maps/Route111/scripts.pory"
	walk_up
	step_end

Route111_EventScript_SecretBaseTriggerLeft::
# 611 "data/maps/Route111/scripts.pory"
	lock
# 612 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_SecretBaseTriggerLeft_Text_0, MSGBOX_AUTOCLOSE
# 613 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_GetIntoPLaceForSecretBaseLeft
# 614 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 615 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_SecretBaseEvent
	return


Route111_EventScript_SecretBaseTriggerMiddle::
# 620 "data/maps/Route111/scripts.pory"
	lock
# 621 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_SecretBaseTriggerLeft_Text_0, MSGBOX_AUTOCLOSE
# 622 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 623 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 624 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_SecretBaseEvent
	return


Route111_EventScript_SecretBaseTriggerRight::
# 628 "data/maps/Route111/scripts.pory"
	lock
# 629 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_SecretBaseTriggerLeft_Text_0, MSGBOX_AUTOCLOSE
# 630 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_GetIntoPLaceForSecretBaseRight
# 631 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 632 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_SecretBaseEvent
	return


# 635 "data/maps/Route111/scripts.pory"
Route111_Movement_GetIntoPLaceForSecretBaseLeft:
# 636 "data/maps/Route111/scripts.pory"
	walk_right
# 637 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_down
	step_end

# 640 "data/maps/Route111/scripts.pory"
Route111_Movement_GetIntoPLaceForSecretBaseRight:
# 641 "data/maps/Route111/scripts.pory"
	walk_left
# 642 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_down
	step_end

Route111_EventScript_SecretBaseEvent::
# 646 "data/maps/Route111/scripts.pory"
	addobject 49
# 647 "data/maps/Route111/scripts.pory"
	addobject 50
# 648 "data/maps/Route111/scripts.pory"
	applymovement 49, Route111_Movement_Rival1EntersForSecretBase
# 649 "data/maps/Route111/scripts.pory"
	applymovement 50, Route111_Movement_Rival2EntersForSecretBase
# 650 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 651 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 652 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 653 "data/maps/Route111/scripts.pory"
	delay 10
# 654 "data/maps/Route111/scripts.pory"
	removeobject 49
# 655 "data/maps/Route111/scripts.pory"
	addobject 51
# 656 "data/maps/Route111/scripts.pory"
	delay 20
# 657 "data/maps/Route111/scripts.pory"
	removeobject 50
# 658 "data/maps/Route111/scripts.pory"
	addobject 52
# 659 "data/maps/Route111/scripts.pory"
	setobjectxyperm 49, 11, 22
# 660 "data/maps/Route111/scripts.pory"
	setobjectxyperm 50, 13, 22
# 661 "data/maps/Route111/scripts.pory"
	applymovement 51, Common_Movement_BeginTalkRight
# 662 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 663 "data/maps/Route111/scripts.pory"
	rival1talk Route111_Text_SpencerTryingToCatchUp, Route111_Text_BrenTryingToCatchUp, Route111_Text_KyleTryingToCatchUp
# 666 "data/maps/Route111/scripts.pory"
	goto_if_unset FLAG_RECEIVED_BIKE, Route111_EventScript_SecretBaseEvent_2
Route111_EventScript_SecretBaseEvent_1:
# 669 "data/maps/Route111/scripts.pory"
	closemessage
# 670 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 671 "data/maps/Route111/scripts.pory"
	applymovement 52, Common_Movement_BeginTalkLeft
# 672 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 673 "data/maps/Route111/scripts.pory"
	rival2talk Route111_Text_SpencerSpiritOfAdventure, Route111_Text_BrenSpiritOfAdventure, Route111_Text_KyleSpiritOfAdventure
# 676 "data/maps/Route111/scripts.pory"
	closemessage
# 677 "data/maps/Route111/scripts.pory"
	delay 10
# 678 "data/maps/Route111/scripts.pory"
	playse SE_PIN
# 679 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 680 "data/maps/Route111/scripts.pory"
	applymovement 51, Common_Movement_WalkInPlaceFasterUp
# 681 "data/maps/Route111/scripts.pory"
	applymovement 52, Common_Movement_WalkInPlaceFasterUp
# 682 "data/maps/Route111/scripts.pory"
	applymovement 33, Route111_Movement_NoticeFriends
# 683 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 684 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MoreThanTheySeem
# 685 "data/maps/Route111/scripts.pory"
	closemessage
# 686 "data/maps/Route111/scripts.pory"
	delay 10
# 687 "data/maps/Route111/scripts.pory"
	applymovement 33, Common_Movement_WalkInPlaceFasterUp
# 688 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 689 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_AtFirstGlance
# 690 "data/maps/Route111/scripts.pory"
	applymovement 33, Common_Movement_WalkInPlaceFasterDown
# 691 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 692 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TakeALookForYourself
# 693 "data/maps/Route111/scripts.pory"
	closemessage
# 694 "data/maps/Route111/scripts.pory"
	giveitem ITEM_TM_SECRET_POWER
# 695 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Route111_EventScript_NoRoomForSecretPower
# 696 "data/maps/Route111/scripts.pory"
	applymovement 33, Route111_Movement_GuyWalkToRival2
# 697 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 698 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_AndOneForYou
# 699 "data/maps/Route111/scripts.pory"
	closemessage
# 700 "data/maps/Route111/scripts.pory"
	delay 10
# 701 "data/maps/Route111/scripts.pory"
	applymovement 33, Route111_Movement_GuyWalkToRival1
# 702 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 703 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_AndYouAsWell
# 704 "data/maps/Route111/scripts.pory"
	closemessage
# 705 "data/maps/Route111/scripts.pory"
	delay 10
# 706 "data/maps/Route111/scripts.pory"
	applymovement 33, Route111_Movement_GuyWalkToRival2
# 707 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 708 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_YoureSpeechless
# 709 "data/maps/Route111/scripts.pory"
	closemessage
# 710 "data/maps/Route111/scripts.pory"
	applymovement 52, Common_Movement_FaceLeft
# 711 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PlayerWatchToLedge
# 712 "data/maps/Route111/scripts.pory"
	applymovement 51, Route111_Movement_Rival1WatchToLedge
# 713 "data/maps/Route111/scripts.pory"
	applymovement 33, Route111_Movement_GuyRunsToLedge
# 714 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 715 "data/maps/Route111/scripts.pory"
	playse SE_LEDGE
# 716 "data/maps/Route111/scripts.pory"
	applymovement 33, Route111_Movement_GuyJumpsLedge
# 717 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 718 "data/maps/Route111/scripts.pory"
	waitse
# 719 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 720 "data/maps/Route111/scripts.pory"
	applymovement 51, Common_Movement_FaceDown
# 721 "data/maps/Route111/scripts.pory"
	applymovement 52, Common_Movement_FaceDown
# 722 "data/maps/Route111/scripts.pory"
	applymovement 33, Route111_Movement_GuyLeaves
# 723 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 724 "data/maps/Route111/scripts.pory"
	removeobject 33
# 725 "data/maps/Route111/scripts.pory"
	delay 20
# 726 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 727 "data/maps/Route111/scripts.pory"
	applymovement 52, Common_Movement_FaceLeft
# 728 "data/maps/Route111/scripts.pory"
	applymovement 51, Common_Movement_BeginTalkRight
# 729 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 730 "data/maps/Route111/scripts.pory"
	rival1talk Route111_Text_SpencerWhatAWeirdGuy, Route111_Text_BrenWhatAWeirdGuy, Route111_Text_KyleWhatAWeirdGuy
# 733 "data/maps/Route111/scripts.pory"
	closemessage
# 734 "data/maps/Route111/scripts.pory"
	delay 10
# 735 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WatchRival1Leave
# 736 "data/maps/Route111/scripts.pory"
	applymovement 52, Route111_Movement_WatchRival1Leave
# 737 "data/maps/Route111/scripts.pory"
	applymovement 51, Route111_Movement_Rival1Leave
# 738 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 739 "data/maps/Route111/scripts.pory"
	removeobject 51
# 740 "data/maps/Route111/scripts.pory"
	delay 10
# 741 "data/maps/Route111/scripts.pory"
	applymovement 52, Common_Movement_BeginTalkLeft
# 742 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 743 "data/maps/Route111/scripts.pory"
	rival2talk Route111_Text_SpencerSeeYouLater, Route111_Text_BrenSeeYouLater, Route111_Text_KyleSeeYouLater
# 746 "data/maps/Route111/scripts.pory"
	closemessage
# 747 "data/maps/Route111/scripts.pory"
	delay 20
# 748 "data/maps/Route111/scripts.pory"
	playse SE_BIKE_BELL
# 749 "data/maps/Route111/scripts.pory"
	removeobject 52
# 750 "data/maps/Route111/scripts.pory"
	addobject 50
# 751 "data/maps/Route111/scripts.pory"
	delay 30
# 752 "data/maps/Route111/scripts.pory"
	applymovement 50, Route111_Movement_Rival2Leave
# 753 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 754 "data/maps/Route111/scripts.pory"
	removeobject 50
# 755 "data/maps/Route111/scripts.pory"
	setvar VAR_MAUVILLE_BIKE_SHOP_STATE, 4
# 756 "data/maps/Route111/scripts.pory"
	setvar VAR_SECRET_BASE_EVENT_STATE, 1
# 757 "data/maps/Route111/scripts.pory"
	setflag FLAG_RECEIVED_SECRET_POWER
# 758 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 759 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_WINSTRATE_RIVAL1
# 760 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_117_RIVAL2
# 761 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_BIKE_SHOP_RIVALS
# 762 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_113_LAO
# 763 "data/maps/Route111/scripts.pory"
	release
	end

Route111_EventScript_SecretBaseEvent_2:
# 667 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_NoBike, MSGBOX_DEFAULT
	goto Route111_EventScript_SecretBaseEvent_1


# 767 "data/maps/Route111/scripts.pory"
Route111_Movement_Rival1EntersForSecretBase:
# 768 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 768 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 768 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 769 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 769 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 769 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 770 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 770 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 770 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 771 "data/maps/Route111/scripts.pory"
	face_right
	step_end

# 774 "data/maps/Route111/scripts.pory"
Route111_Movement_Rival2EntersForSecretBase:
# 775 "data/maps/Route111/scripts.pory"
	delay_16
# 775 "data/maps/Route111/scripts.pory"
	delay_16
# 776 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 776 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 776 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 777 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 777 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 777 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 777 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 777 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 778 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 778 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 778 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 779 "data/maps/Route111/scripts.pory"
	face_left
	step_end

# 782 "data/maps/Route111/scripts.pory"
Route111_Movement_NoticeFriends:
# 783 "data/maps/Route111/scripts.pory"
	emote_exclamation_mark
# 784 "data/maps/Route111/scripts.pory"
	face_down
# 785 "data/maps/Route111/scripts.pory"
	delay_16
# 785 "data/maps/Route111/scripts.pory"
	delay_16
# 785 "data/maps/Route111/scripts.pory"
	delay_16
# 786 "data/maps/Route111/scripts.pory"
	walk_left
# 787 "data/maps/Route111/scripts.pory"
	walk_down
	step_end

# 790 "data/maps/Route111/scripts.pory"
Route111_Movement_GuyWalkToRival2:
# 791 "data/maps/Route111/scripts.pory"
	walk_right
# 792 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_down
	step_end

# 795 "data/maps/Route111/scripts.pory"
Route111_Movement_GuyWalkToRival1:
# 796 "data/maps/Route111/scripts.pory"
	walk_left
# 796 "data/maps/Route111/scripts.pory"
	walk_left
# 797 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_down
	step_end

# 800 "data/maps/Route111/scripts.pory"
Route111_Movement_GuyRunsToLedge:
# 801 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 801 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 802 "data/maps/Route111/scripts.pory"
	walk_fast_down
	step_end

# 805 "data/maps/Route111/scripts.pory"
Route111_Movement_GuyJumpsLedge:
# 806 "data/maps/Route111/scripts.pory"
	jump_2_down
	step_end

# 809 "data/maps/Route111/scripts.pory"
Route111_Movement_GuyLeaves:
# 810 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 811 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 811 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 812 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 812 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 812 "data/maps/Route111/scripts.pory"
	walk_fast_down
	step_end

# 815 "data/maps/Route111/scripts.pory"
Route111_Movement_PlayerWatchToLedge:
# 816 "data/maps/Route111/scripts.pory"
	delay_8
# 817 "data/maps/Route111/scripts.pory"
	face_left
	step_end

# 820 "data/maps/Route111/scripts.pory"
Route111_Movement_Rival1WatchToLedge:
# 821 "data/maps/Route111/scripts.pory"
	delay_16
# 822 "data/maps/Route111/scripts.pory"
	face_left
	step_end

# 825 "data/maps/Route111/scripts.pory"
Route111_Movement_WatchRival1Leave:
# 826 "data/maps/Route111/scripts.pory"
	delay_8
# 827 "data/maps/Route111/scripts.pory"
	face_up
# 828 "data/maps/Route111/scripts.pory"
	delay_16
# 829 "data/maps/Route111/scripts.pory"
	face_right
	step_end

# 832 "data/maps/Route111/scripts.pory"
Route111_Movement_Rival1Leave:
# 833 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 834 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 834 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 834 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 834 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 834 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 834 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 835 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 835 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 835 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 836 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 836 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 836 "data/maps/Route111/scripts.pory"
	walk_fast_right
	step_end

# 839 "data/maps/Route111/scripts.pory"
Route111_Movement_Rival2Leave:
# 840 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 840 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 840 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 840 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 841 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 841 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 841 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 841 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 842 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 842 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 842 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 842 "data/maps/Route111/scripts.pory"
	walk_fast_right
	step_end

# 971 "data/maps/Route111/scripts.pory"

# 972 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSignMauville::
# 973 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSignMauville, MSGBOX_SIGN
# 974 "data/maps/Route111/scripts.pory"
	end
# 975 "data/maps/Route111/scripts.pory"

# 976 "data/maps/Route111/scripts.pory"
Route111_EventScript_WinstrateHouseSign::
# 977 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateHouseSign, MSGBOX_SIGN
# 978 "data/maps/Route111/scripts.pory"
	end
# 979 "data/maps/Route111/scripts.pory"

# 980 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign112::
# 981 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign112, MSGBOX_SIGN
# 982 "data/maps/Route111/scripts.pory"
	end
# 983 "data/maps/Route111/scripts.pory"

# 984 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign113::
# 985 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign113, MSGBOX_SIGN
# 986 "data/maps/Route111/scripts.pory"
	end
# 987 "data/maps/Route111/scripts.pory"

# 988 "data/maps/Route111/scripts.pory"
Route111_EventScript_OldLadysRestStopSign::
# 989 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_OldLadysRestStopSign, MSGBOX_SIGN
# 990 "data/maps/Route111/scripts.pory"
	end
# 991 "data/maps/Route111/scripts.pory"

# 992 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerTipsSpAtkSpDef::
# 993 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerTipsSpAtkSpDef, MSGBOX_SIGN
# 994 "data/maps/Route111/scripts.pory"
	end
# 995 "data/maps/Route111/scripts.pory"

# 996 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man1::
# 997 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ToughToKeepWinningUpTheRanks, MSGBOX_NPC
# 998 "data/maps/Route111/scripts.pory"
	end
# 999 "data/maps/Route111/scripts.pory"

# 1000 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man2::
# 1001 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateFamilyDestroyedMe, MSGBOX_NPC
# 1002 "data/maps/Route111/scripts.pory"
	end
# 1003 "data/maps/Route111/scripts.pory"

# 1004 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hiker::
# 1005 "data/maps/Route111/scripts.pory"
	lock
# 1006 "data/maps/Route111/scripts.pory"
	faceplayer
# 1007 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 3, Route111_EventScript_HikerMirageTowerGone
# 1008 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_HikerMirageTowerDisintegrated
# 1009 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_HikerMirageTowerVisible
# 1010 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ShouldBeMirageTowerAroundHere, MSGBOX_DEFAULT
# 1011 "data/maps/Route111/scripts.pory"
	release
# 1012 "data/maps/Route111/scripts.pory"
	end
# 1013 "data/maps/Route111/scripts.pory"

# 1014 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerGone::
# 1015 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerHasntBeenSeenSince, MSGBOX_DEFAULT
# 1016 "data/maps/Route111/scripts.pory"
	release
# 1017 "data/maps/Route111/scripts.pory"
	end
# 1018 "data/maps/Route111/scripts.pory"

# 1019 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerDisintegrated::
# 1020 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ThatWasShockingSandRainedDown, MSGBOX_DEFAULT
# 1021 "data/maps/Route111/scripts.pory"
	release
# 1022 "data/maps/Route111/scripts.pory"
	end
# 1023 "data/maps/Route111/scripts.pory"

# 1024 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerVisible::
# 1025 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerClearlyVisible, MSGBOX_DEFAULT
# 1026 "data/maps/Route111/scripts.pory"
	release
# 1027 "data/maps/Route111/scripts.pory"
	end
# 1028 "data/maps/Route111/scripts.pory"

# 1029 "data/maps/Route111/scripts.pory"
Route111_EventScript_RockSmashTipFatMan::
# 1030 "data/maps/Route111/scripts.pory"
	lockall
# 1031 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROCK_SMASH_MAN, Common_Movement_FacePlayer
# 1032 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 1033 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MauvilleUncleToldMeToTakeRockSmash, MSGBOX_DEFAULT
# 1034 "data/maps/Route111/scripts.pory"
	closemessage
# 1035 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROCK_SMASH_MAN, Common_Movement_FaceOriginalDirection
# 1036 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 1037 "data/maps/Route111/scripts.pory"
	releaseall
# 1038 "data/maps/Route111/scripts.pory"
	end
# 1039 "data/maps/Route111/scripts.pory"

# 1040 "data/maps/Route111/scripts.pory"
Route111_EventScript_Drew::
# 1041 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DREW, Route111_Text_DrewIntro, Route111_Text_DrewDefeat
# 1042 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DrewPostBattle, MSGBOX_AUTOCLOSE
# 1043 "data/maps/Route111/scripts.pory"
	end
# 1044 "data/maps/Route111/scripts.pory"

# 1045 "data/maps/Route111/scripts.pory"
Route111_EventScript_Heidi::
# 1046 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HEIDI, Route111_Text_HeidiIntro, Route111_Text_HeidiDefeat
# 1047 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HeidiPostBattle, MSGBOX_AUTOCLOSE
# 1048 "data/maps/Route111/scripts.pory"
	end
# 1049 "data/maps/Route111/scripts.pory"

# 1050 "data/maps/Route111/scripts.pory"
Route111_EventScript_Beau::
# 1051 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BEAU, Route111_Text_BeauIntro, Route111_Text_BeauDefeat
# 1052 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
# 1053 "data/maps/Route111/scripts.pory"
	end
# 1054 "data/maps/Route111/scripts.pory"

# 1055 "data/maps/Route111/scripts.pory"
Route111_EventScript_Becky::
# 1056 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BECKY, Route111_Text_BeckyIntro, Route111_Text_BeckyDefeat
# 1057 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeckyPostBattle, MSGBOX_AUTOCLOSE
# 1058 "data/maps/Route111/scripts.pory"
	end
# 1059 "data/maps/Route111/scripts.pory"

# 1060 "data/maps/Route111/scripts.pory"
Route111_EventScript_Dusty::
# 1061 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_1, Route111_Text_DustyIntro, Route111_Text_DustyDefeat, Route111_EventScript_RegisterDusty
# 1062 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1063 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchDusty
# 1064 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostBattle, MSGBOX_DEFAULT
# 1065 "data/maps/Route111/scripts.pory"
	release
# 1066 "data/maps/Route111/scripts.pory"
	end
# 1067 "data/maps/Route111/scripts.pory"

# 1068 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterDusty::
# 1069 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 1070 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 1071 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyRegister, MSGBOX_DEFAULT
# 1072 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_DUSTY_1
# 1073 "data/maps/Route111/scripts.pory"
	release
# 1074 "data/maps/Route111/scripts.pory"
	end
# 1075 "data/maps/Route111/scripts.pory"

# 1076 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchDusty::
# 1077 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_DUSTY_1, Route111_Text_DustyRematchIntro, Route111_Text_DustyRematchDefeat
# 1078 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostRematch, MSGBOX_AUTOCLOSE
# 1079 "data/maps/Route111/scripts.pory"
	end
# 1080 "data/maps/Route111/scripts.pory"

# 1081 "data/maps/Route111/scripts.pory"
Route111_EventScript_Travis::
# 1082 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TRAVIS, Route111_Text_TravisIntro, Route111_Text_TravisDefeat
# 1083 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
# 1084 "data/maps/Route111/scripts.pory"
	end
# 1085 "data/maps/Route111/scripts.pory"

# 1086 "data/maps/Route111/scripts.pory"
Route111_EventScript_Irene::
# 1087 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_IRENE, Route111_Text_IreneIntro, Route111_Text_IreneDefeat
# 1088 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IrenePostBattle, MSGBOX_AUTOCLOSE
# 1089 "data/maps/Route111/scripts.pory"
	end
# 1090 "data/maps/Route111/scripts.pory"

# 1091 "data/maps/Route111/scripts.pory"
Route111_EventScript_Daisuke::
# 1092 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DAISUKE, Route111_Text_DaisukeIntro, Route111_Text_DaisukeDefeat
# 1093 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DaisukePostBattle, MSGBOX_AUTOCLOSE
# 1094 "data/maps/Route111/scripts.pory"
	end
# 1095 "data/maps/Route111/scripts.pory"

# 1096 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wilton::
# 1097 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_WILTON_1, Route111_Text_WiltonIntro, Route111_Text_WiltonDefeat, Route111_EventScript_RegisterWilton
# 1098 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1099 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchWilton
# 1100 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostBattle, MSGBOX_DEFAULT
# 1101 "data/maps/Route111/scripts.pory"
	release
# 1102 "data/maps/Route111/scripts.pory"
	end
# 1103 "data/maps/Route111/scripts.pory"

# 1104 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterWilton::
# 1105 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 1106 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 1107 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonRegister, MSGBOX_DEFAULT
# 1108 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_WILTON_1
# 1109 "data/maps/Route111/scripts.pory"
	release
# 1110 "data/maps/Route111/scripts.pory"
	end
# 1111 "data/maps/Route111/scripts.pory"

# 1112 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchWilton::
# 1113 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_WILTON_1, Route111_Text_WiltonRematchIntro, Route111_Text_WiltonRematchDefeat
# 1114 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostRematch, MSGBOX_AUTOCLOSE
# 1115 "data/maps/Route111/scripts.pory"
	end
# 1116 "data/maps/Route111/scripts.pory"

# 1117 "data/maps/Route111/scripts.pory"
Route111_EventScript_Brooke::
# 1118 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BROOKE_1, Route111_Text_BrookeIntro, Route111_Text_BrookeDefeat, Route111_EventScript_RegisterBrooke
# 1119 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1120 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchBrooke
# 1121 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostBattle, MSGBOX_DEFAULT
# 1122 "data/maps/Route111/scripts.pory"
	release
# 1123 "data/maps/Route111/scripts.pory"
	end
# 1124 "data/maps/Route111/scripts.pory"

# 1125 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterBrooke::
# 1126 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 1127 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 1128 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookeRegister, MSGBOX_DEFAULT
# 1129 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_BROOKE_1
# 1130 "data/maps/Route111/scripts.pory"
	release
# 1131 "data/maps/Route111/scripts.pory"
	end
# 1132 "data/maps/Route111/scripts.pory"

# 1133 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchBrooke::
# 1134 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_BROOKE_1, Route111_Text_BrookeRematchIntro, Route111_Text_BrookeRematchDefeat
# 1135 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostRematch, MSGBOX_AUTOCLOSE
# 1136 "data/maps/Route111/scripts.pory"
	end
# 1137 "data/maps/Route111/scripts.pory"

# 1138 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hayden::
# 1139 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HAYDEN, Route111_Text_HaydenIntro, Route111_Text_HaydenDefeat
# 1140 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HaydenPostBattle, MSGBOX_AUTOCLOSE
# 1141 "data/maps/Route111/scripts.pory"
	end
# 1142 "data/maps/Route111/scripts.pory"

# 1143 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bianca::
# 1144 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BIANCA, Route111_Text_BiancaIntro, Route111_Text_BiancaDefeat
# 1145 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BiancaPostBattle, MSGBOX_AUTOCLOSE
# 1146 "data/maps/Route111/scripts.pory"
	end
# 1147 "data/maps/Route111/scripts.pory"

# 1148 "data/maps/Route111/scripts.pory"
Route111_EventScript_Tyron::
# 1149 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TYRON, Route111_Text_TyronIntro, Route111_Text_TyronDefeat
# 1150 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
# 1151 "data/maps/Route111/scripts.pory"
	end
# 1152 "data/maps/Route111/scripts.pory"

# 1153 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celina::
# 1154 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELINA, Route111_Text_CelinaIntro, Route111_Text_CelinaDefeat
# 1155 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CelinaPostBattle, MSGBOX_AUTOCLOSE
# 1156 "data/maps/Route111/scripts.pory"
	end
# 1157 "data/maps/Route111/scripts.pory"

# 1158 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celia::
# 1159 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELIA, Route111_Text_CeliaIntro, Route111_Text_CeliaDefeat
# 1160 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CeliaPostBattle, MSGBOX_AUTOCLOSE
# 1161 "data/maps/Route111/scripts.pory"
	end
# 1162 "data/maps/Route111/scripts.pory"

# 1163 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bryan::
# 1164 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRYAN, Route111_Text_BryanIntro, Route111_Text_BryanDefeat
# 1165 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BryanPostBattle, MSGBOX_AUTOCLOSE
# 1166 "data/maps/Route111/scripts.pory"
	end
# 1167 "data/maps/Route111/scripts.pory"

# 1168 "data/maps/Route111/scripts.pory"
Route111_EventScript_Branden::
# 1169 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRANDEN, Route111_Text_BrandenIntro, Route111_Text_BrandenDefeat
# 1170 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrandenPostBattle, MSGBOX_AUTOCLOSE
# 1171 "data/maps/Route111/scripts.pory"
	end
# 1172 "data/maps/Route111/scripts.pory"

# 1173 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerHillSign::
# 1174 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerHillSign, MSGBOX_SIGN
# 1175 "data/maps/Route111/scripts.pory"
	end
# 1176 "data/maps/Route111/scripts.pory"

# 1177 "data/maps/Route111/scripts.pory"
Route111_Text_BattleOurFamily:
# 1178 "data/maps/Route111/scripts.pory"
	.string "Hello! I take it you're a traveler.\p"
# 1179 "data/maps/Route111/scripts.pory"
	.string "How's this? What do you say to taking\n"
# 1180 "data/maps/Route111/scripts.pory"
	.string "on our family of four in a series of\l"
# 1181 "data/maps/Route111/scripts.pory"
	.string "POKéMON battles?$"
# 1182 "data/maps/Route111/scripts.pory"

# 1183 "data/maps/Route111/scripts.pory"
Route111_Text_IsThatSo:
# 1184 "data/maps/Route111/scripts.pory"
	.string "Is that so?\n"
# 1185 "data/maps/Route111/scripts.pory"
	.string "Drop in, if you change your mind!$"
# 1186 "data/maps/Route111/scripts.pory"

# 1187 "data/maps/Route111/scripts.pory"
Route111_Text_VictorIntro:
# 1188 "data/maps/Route111/scripts.pory"
	.string "That's the spirit! I like you!$"
# 1189 "data/maps/Route111/scripts.pory"

# 1190 "data/maps/Route111/scripts.pory"
Route111_Text_VictorDefeat:
# 1191 "data/maps/Route111/scripts.pory"
	.string "Aiyah!\n"
# 1192 "data/maps/Route111/scripts.pory"
	.string "You're a lot tougher than I expected!$"
# 1193 "data/maps/Route111/scripts.pory"

# 1194 "data/maps/Route111/scripts.pory"
Route111_Text_VictorPostBattle:
# 1195 "data/maps/Route111/scripts.pory"
	.string "Hey, all!\n"
# 1196 "data/maps/Route111/scripts.pory"
	.string "I've found a pretty strong TRAINER!$"
# 1197 "data/maps/Route111/scripts.pory"

# 1198 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaIntro:
# 1199 "data/maps/Route111/scripts.pory"
	.string "Oh, my goodness! Aren't you young?\p"
# 1200 "data/maps/Route111/scripts.pory"
	.string "You must be quite the TRAINER to beat\n"
# 1201 "data/maps/Route111/scripts.pory"
	.string "my husband, though.\p"
# 1202 "data/maps/Route111/scripts.pory"
	.string "It's my turn to battle now!$"
# 1203 "data/maps/Route111/scripts.pory"

# 1204 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaDefeat:
# 1205 "data/maps/Route111/scripts.pory"
	.string "Oh, gosh!\n"
# 1206 "data/maps/Route111/scripts.pory"
	.string "I can't get over how strong you are!$"
# 1207 "data/maps/Route111/scripts.pory"

# 1208 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaPostBattle:
# 1209 "data/maps/Route111/scripts.pory"
	.string "There's a strong TRAINER here!\n"
# 1210 "data/maps/Route111/scripts.pory"
	.string "This one's really strong!$"
# 1211 "data/maps/Route111/scripts.pory"

# 1212 "data/maps/Route111/scripts.pory"
Route111_Text_ViviIntro:
# 1213 "data/maps/Route111/scripts.pory"
	.string "You're stronger than Mommy? Wow!\p"
# 1214 "data/maps/Route111/scripts.pory"
	.string "But I'm strong, too!\n"
# 1215 "data/maps/Route111/scripts.pory"
	.string "Really! Honestly!$"
# 1216 "data/maps/Route111/scripts.pory"

# 1217 "data/maps/Route111/scripts.pory"
Route111_Text_ViviDefeat:
# 1218 "data/maps/Route111/scripts.pory"
	.string "Huh? Did I just lose?$"
# 1219 "data/maps/Route111/scripts.pory"

# 1220 "data/maps/Route111/scripts.pory"
Route111_Text_ViviPostBattle:
# 1221 "data/maps/Route111/scripts.pory"
	.string "This stinks…\p"
# 1222 "data/maps/Route111/scripts.pory"
	.string "…Snivel… Grandma!$"
# 1223 "data/maps/Route111/scripts.pory"

# 1224 "data/maps/Route111/scripts.pory"
Route111_Text_VickyIntro:
# 1225 "data/maps/Route111/scripts.pory"
	.string "How dare you make my granddaughter\n"
# 1226 "data/maps/Route111/scripts.pory"
	.string "cry!\p"
# 1227 "data/maps/Route111/scripts.pory"
	.string "For that, I'm going to smack you!\n"
# 1228 "data/maps/Route111/scripts.pory"
	.string "Prepare to lose!$"
# 1229 "data/maps/Route111/scripts.pory"

# 1230 "data/maps/Route111/scripts.pory"
Route111_Text_VickyDefeat:
# 1231 "data/maps/Route111/scripts.pory"
	.string "Kwah! You are strong…\n"
# 1232 "data/maps/Route111/scripts.pory"
	.string "My granddaughter was right…$"
# 1233 "data/maps/Route111/scripts.pory"

# 1234 "data/maps/Route111/scripts.pory"
Route111_Text_VickyPostBattle:
# 1235 "data/maps/Route111/scripts.pory"
	.string "If you're not in any hurry,\n"
# 1236 "data/maps/Route111/scripts.pory"
	.string "visit with us awhile.$"
# 1237 "data/maps/Route111/scripts.pory"

# 1238 "data/maps/Route111/scripts.pory"
Route111_Text_ToughToKeepWinningUpTheRanks:
# 1239 "data/maps/Route111/scripts.pory"
	.string "If you don't raise your POKéMON some\n"
# 1240 "data/maps/Route111/scripts.pory"
	.string "more, it could be tough to keep winning\l"
# 1241 "data/maps/Route111/scripts.pory"
	.string "up through the ranks.\p"
# 1242 "data/maps/Route111/scripts.pory"
	.string "I've heard the POKéMON LEAGUE's\n"
# 1243 "data/maps/Route111/scripts.pory"
	.string "ELITE FOUR are far stronger than\l"
# 1244 "data/maps/Route111/scripts.pory"
	.string "any GYM LEADER.$"
# 1245 "data/maps/Route111/scripts.pory"

# 1246 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateFamilyDestroyedMe:
# 1247 "data/maps/Route111/scripts.pory"
	.string "I challenged the WINSTRATE family,\n"
# 1248 "data/maps/Route111/scripts.pory"
	.string "but four matches in a row is tough\l"
# 1249 "data/maps/Route111/scripts.pory"
	.string "going… They destroyed me.$"
# 1250 "data/maps/Route111/scripts.pory"

# 1251 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSignMauville:
# 1252 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 1253 "data/maps/Route111/scripts.pory"
	.string "{DOWN_ARROW} MAUVILLE CITY$"
# 1254 "data/maps/Route111/scripts.pory"

# 1255 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateHouseSign:
# 1256 "data/maps/Route111/scripts.pory"
	.string "“Our family's hearts beat as one!”\n"
# 1257 "data/maps/Route111/scripts.pory"
	.string "THE WINSTRATE'S HOUSE$"
# 1258 "data/maps/Route111/scripts.pory"

# 1259 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign112:
# 1260 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 1261 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 112$"
# 1262 "data/maps/Route111/scripts.pory"

# 1263 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign113:
# 1264 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 1265 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 113$"
# 1266 "data/maps/Route111/scripts.pory"

# 1267 "data/maps/Route111/scripts.pory"
Route111_Text_OldLadysRestStopSign:
# 1268 "data/maps/Route111/scripts.pory"
	.string "OLD LADY'S REST STOP\n"
# 1269 "data/maps/Route111/scripts.pory"
	.string "“Come in and rest your tired bones.”$"
# 1270 "data/maps/Route111/scripts.pory"

# 1271 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerTipsSpAtkSpDef:
# 1272 "data/maps/Route111/scripts.pory"
	.string "TRAINER TIPS\p"
# 1273 "data/maps/Route111/scripts.pory"
	.string "One of the indicators of a POKéMON's\n"
# 1274 "data/maps/Route111/scripts.pory"
	.string "powerfulness is SP. ATK. It stands for\l"
# 1275 "data/maps/Route111/scripts.pory"
	.string "“SPECIAL ATTACK.”\p"
# 1276 "data/maps/Route111/scripts.pory"
	.string "Likewise, SP. DEF stands for “SPECIAL\n"
# 1277 "data/maps/Route111/scripts.pory"
	.string "DEFENSE.”$"
# 1278 "data/maps/Route111/scripts.pory"

# 1279 "data/maps/Route111/scripts.pory"
Route111_Text_ShouldBeMirageTowerAroundHere:
# 1280 "data/maps/Route111/scripts.pory"
	.string "There should be a tower made of sand\n"
# 1281 "data/maps/Route111/scripts.pory"
	.string "around here somewhere.\p"
# 1282 "data/maps/Route111/scripts.pory"
	.string "But for some reason, it can be seen\n"
# 1283 "data/maps/Route111/scripts.pory"
	.string "sometimes, and sometimes not.\p"
# 1284 "data/maps/Route111/scripts.pory"
	.string "That's why I call it the MIRAGE TOWER.$"
# 1285 "data/maps/Route111/scripts.pory"

# 1286 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerClearlyVisible:
# 1287 "data/maps/Route111/scripts.pory"
	.string "I see it!\n"
# 1288 "data/maps/Route111/scripts.pory"
	.string "The tower of sand!\p"
# 1289 "data/maps/Route111/scripts.pory"
	.string "The sand tower they called a mirage\n"
# 1290 "data/maps/Route111/scripts.pory"
	.string "is clearly visible!\p"
# 1291 "data/maps/Route111/scripts.pory"
	.string "But it looks so fragile…\n"
# 1292 "data/maps/Route111/scripts.pory"
	.string "It could crumble away anytime…\p"
# 1293 "data/maps/Route111/scripts.pory"
	.string "I want to go inside it, but I can't\n"
# 1294 "data/maps/Route111/scripts.pory"
	.string "get my courage up for it…$"
# 1295 "data/maps/Route111/scripts.pory"

# 1296 "data/maps/Route111/scripts.pory"
Route111_Text_ThatWasShockingSandRainedDown:
# 1297 "data/maps/Route111/scripts.pory"
	.string "Whoa…\n"
# 1298 "data/maps/Route111/scripts.pory"
	.string "That was shocking.\p"
# 1299 "data/maps/Route111/scripts.pory"
	.string "Sand rained down in chunks all of\n"
# 1300 "data/maps/Route111/scripts.pory"
	.string "a sudden.\p"
# 1301 "data/maps/Route111/scripts.pory"
	.string "What was it like inside?\n"
# 1302 "data/maps/Route111/scripts.pory"
	.string "Were there sandy ghosts and such?$"
# 1303 "data/maps/Route111/scripts.pory"

# 1304 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerHasntBeenSeenSince:
# 1305 "data/maps/Route111/scripts.pory"
	.string "Since I spoke to you, the tower of sand\n"
# 1306 "data/maps/Route111/scripts.pory"
	.string "hasn't been seen.\p"
# 1307 "data/maps/Route111/scripts.pory"
	.string "Perhaps it really was\n"
# 1308 "data/maps/Route111/scripts.pory"
	.string "the MIRAGE TOWER…$"
# 1309 "data/maps/Route111/scripts.pory"

# 1310 "data/maps/Route111/scripts.pory"
Route111_Text_ClawFossilDisappeared:
# 1311 "data/maps/Route111/scripts.pory"
	.string "The CLAW FOSSIL disappeared into\n"
# 1312 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 1313 "data/maps/Route111/scripts.pory"

# 1314 "data/maps/Route111/scripts.pory"
Route111_Text_RootFossilDisappeared:
# 1315 "data/maps/Route111/scripts.pory"
	.string "The ROOT FOSSIL disappeared into\n"
# 1316 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 1317 "data/maps/Route111/scripts.pory"

# 1318 "data/maps/Route111/scripts.pory"
Route111_Text_MauvilleUncleToldMeToTakeRockSmash:
# 1319 "data/maps/Route111/scripts.pory"
	.string "Oh, no!\p"
# 1320 "data/maps/Route111/scripts.pory"
	.string "My uncle in MAUVILLE told me to take\n"
# 1321 "data/maps/Route111/scripts.pory"
	.string "ROCK SMASH with me if I was going to\l"
# 1322 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111!\p"
# 1323 "data/maps/Route111/scripts.pory"
	.string "My uncle? He lives across from\n"
# 1324 "data/maps/Route111/scripts.pory"
	.string "the bike shop in MAUVILLE.$"
# 1325 "data/maps/Route111/scripts.pory"

# 1326 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerHillSign:
# 1327 "data/maps/Route111/scripts.pory"
	.string "{RIGHT_ARROW} TRAINER HILL ENTRANCE\p"
# 1328 "data/maps/Route111/scripts.pory"
	.string "“Scale the heights, you hot-blooded\n"
# 1329 "data/maps/Route111/scripts.pory"
	.string "TRAINERS!”$"

Route111_EventScript_TriggerLeft_Text_0:
# 300 "data/maps/Route111/scripts.pory"
	.string "YAAAHOOOOOOOO!$"

Route111_EventScript_SecretBaseTriggerLeft_Text_0:
# 612 "data/maps/Route111/scripts.pory"
	.string "Wait up, {PLAYER}!$"

Route111_Text_SpencerAllTheCommotion::
# 538 "data/maps/Route111/scripts.pory"
	.string "SPENCER: So that's what all the\n"
	.string "commotion is about!\p"
	.string "You sure don't hold back, do you?\p"
	.string "You'd better prepare yourself.\n"
	.string "She may be old, but that grandma sure\l"
	.string "has a lot of energy!$"

Route111_Text_BrenAllTheCommotion::
# 545 "data/maps/Route111/scripts.pory"
	.string "BREN: So that's what all the commotion\n"
	.string "is about!\p"
	.string "You sure don't hold back, do you?\p"
	.string "You'd better prepare yourself.\n"
	.string "She may be old, but that grandma sure\l"
	.string "has a lot of energy!$"

Route111_Text_KyleAllTheCommotion::
# 552 "data/maps/Route111/scripts.pory"
	.string "KYLE: So that's what all the commotion\n"
	.string "is about!\p"
	.string "You sure don't hold back, do you?\p"
	.string "You'd better prepare yourself.\n"
	.string "She may be old, but that grandma sure\l"
	.string "has a lot of energy!$"

Route111_Text_SpencerDontWorryGranny::
# 559 "data/maps/Route111/scripts.pory"
	.string "SPENCER: Don't worry, granny.\n"
	.string "I'm on your side!$"

Route111_Text_BrenDontWorryGranny::
# 564 "data/maps/Route111/scripts.pory"
	.string "BREN: Don't worry, granny.\n"
	.string "I'm on your side!$"

Route111_Text_KyleDontWorryGranny::
# 569 "data/maps/Route111/scripts.pory"
	.string "KYLE: Don't worry, granny.\n"
	.string "I'm on your side!$"

Route111_Text_SpencerPostBattle::
# 574 "data/maps/Route111/scripts.pory"
	.string "No way!\n"
	.string "I can't believe it!$"

Route111_Text_BrenPostBattle::
# 579 "data/maps/Route111/scripts.pory"
	.string "No way!\n"
	.string "I can't believe it!$"

Route111_Text_KylePostBattle::
# 584 "data/maps/Route111/scripts.pory"
	.string "No way!\n"
	.string "I can't believe it!$"

Route111_Text_SpencerLoveToChatYouUp::
# 589 "data/maps/Route111/scripts.pory"
	.string "SPENCER: You beat me and that whole\n"
	.string "family without even needing a single\l"
	.string "break!\p"
	.string "You must have one heck of a training\n"
	.string "regimen.\p"
	.string "I'm sure the WINSTRATES would love to\n"
	.string "chat you up if you have the time.\p"
	.string "They're a pretty cool bunch!$"

Route111_Text_BrenLoveToChatYouUp::
# 596 "data/maps/Route111/scripts.pory"
	.string "BREN: You beat me and that whole family\n"
	.string "without even needing a single break!\p"
	.string "You must have one heck of a training\n"
	.string "regimen.\p"
	.string "I'm sure the WINSTRATES would love to\n"
	.string "chat you up if you have the time.\p"
	.string "They're a pretty cool bunch!$"

Route111_Text_KyleLoveToChatYouUp::
# 603 "data/maps/Route111/scripts.pory"
	.string "KYLE: You beat me and that whole family\n"
	.string "without even needing a single break!\p"
	.string "You must have one heck of a training\n"
	.string "regimen.\p"
	.string "I'm sure the WINSTRATES would love to\n"
	.string "chat you up if you have the time.\p"
	.string "They're a pretty cool bunch!$"

Route111_Text_SpencerTryingToCatchUp::
# 845 "data/maps/Route111/scripts.pory"
	.string "SPENCER: You sure know how to travel\n"
	.string "fast.\p"
	.string "We've been trying to catch up with you\n"
	.string "for a while.$"

Route111_Text_BrenTryingToCatchUp::
# 850 "data/maps/Route111/scripts.pory"
	.string "BREN: You sure know how to travel fast.\p"
	.string "We've been trying to catch up with you\n"
	.string "for a while.$"

Route111_Text_KyleTryingToCatchUp::
# 855 "data/maps/Route111/scripts.pory"
	.string "KYLE: You sure know how to travel fast.\p"
	.string "We've been trying to catch up with you\n"
	.string "for a while.$"

Route111_Text_NoBike::
# 860 "data/maps/Route111/scripts.pory"
	.string "How did you get so far ahead of us\n"
	.string "without a bike? Who knows how fast you\l"
	.string "could go if you got a bike from the shop\l"
	.string "in MAUVILLE!$"

Route111_Text_SpencerSpiritOfAdventure::
# 865 "data/maps/Route111/scripts.pory"
	.string "SPENCER: Don't worry about it!\n"
	.string "We know you have the spirit of\l"
	.string "adventure in you, {PLAYER}.\l"
	.string "Half the fun is in exploring new areas,\l"
	.string "am I right?\p"
	.string "We still have a lot of ground left to\n"
	.string "cover on our journey, so why not enjoy\l"
	.string "it?$"

Route111_Text_BrenSpiritOfAdventure::
# 872 "data/maps/Route111/scripts.pory"
	.string "BREN: Don't worry about it!\n"
	.string "We know you have the spirit of\l"
	.string "adventure in you, {PLAYER}.\l"
	.string "Half the fun is in exploring new areas,\l"
	.string "am I right?\p"
	.string "We still have a lot of ground left to\n"
	.string "cover on our journey, so why not enjoy\l"
	.string "it?$"

Route111_Text_KyleSpiritOfAdventure::
# 879 "data/maps/Route111/scripts.pory"
	.string "KYLE: Don't worry about it!\n"
	.string "We know you have the spirit of\l"
	.string "adventure in you, {PLAYER}.\l"
	.string "Half the fun is in exploring new areas,\l"
	.string "am I right?\p"
	.string "We still have a lot of ground left to\n"
	.string "cover on our journey, so why not enjoy\l"
	.string "it?$"

Route111_Text_MoreThanTheySeem::
# 886 "data/maps/Route111/scripts.pory"
	.string "Did I hear that right?\n"
	.string "Sounds to me like I've encountered a\l"
	.string "group of young vagabonds!\p"
	.string "You might be interested to know that\n"
	.string "there are certain places all over the\l"
	.string "region that are more than they seem.$"

Route111_Text_AtFirstGlance::
# 892 "data/maps/Route111/scripts.pory"
	.string "Take, for instance, that tree I was\n"
	.string "looking at earlier.\p"
	.string "At first glance, it may seem ordinary.$"

Route111_Text_TakeALookForYourself::
# 897 "data/maps/Route111/scripts.pory"
	.string "But with the right technique, you can\n"
	.string "reveal your own SECRET BASE inside!\p"
	.string "What's the technique, you ask?\p"
	.string "Here! Take a look for yourself!$"

Route111_Text_AndOneForYou::
# 903 "data/maps/Route111/scripts.pory"
	.string "And one for you!$"

Route111_Text_AndYouAsWell::
# 907 "data/maps/Route111/scripts.pory"
	.string "And you as well!$"

Route111_Text_YoureSpeechless::
# 911 "data/maps/Route111/scripts.pory"
	.string "Oh, my.\n"
	.string "You're speechless!\p"
	.string "Don't worry.\n"
	.string "I was the same way when I first\l"
	.string "discovered SECRET BASES.\p"
	.string "If you have a POKéMON use SECRET POWER\n"
	.string "on a tree like that, some vines will drop\l"
	.string "down and reveal the SECRET BASE within.\p"
	.string "It's not just trees, either.\n"
	.string "You can find hidden spaces behind\l"
	.string "cracks in rock walls.\p"
	.string "Who knows where else you can find them!\p"
	.string "Claim one for yourself and decorate it\n"
	.string "with your favorite items.\l"
	.string "Make the space your own!\p"
	.string "And with that…\n"
	.string "BAM! I'm off!$"

Route111_Text_SpencerWhatAWeirdGuy::
# 926 "data/maps/Route111/scripts.pory"
	.string "SPENCER: What a weird guy.\n"
	.string "The SECRET BASES sound interesting,\l"
	.string "though!\p"
	.string "I'm going to look for a good place to\n"
	.string "make my own.\p"
	.string "Of course, I'll keep it a secret.\n"
	.string "Perhaps you'll find it if you're skilled\l"
	.string "enough.\p"
	.string "As a strange man once said,\n"
	.string "“BAM! I'm off!”$"

Route111_Text_BrenWhatAWeirdGuy::
# 936 "data/maps/Route111/scripts.pory"
	.string "BREN: What a weird guy.\n"
	.string "The SECRET BASES sound interesting,\l"
	.string "though!\p"
	.string "I'm going to look for a good place to\n"
	.string "make my own.\p"
	.string "Of course, I'll keep it a secret.\n"
	.string "Perhaps you'll find it if you're skilled\l"
	.string "enough.\p"
	.string "As a strange man once said,\n"
	.string "“BAM! I'm off!”$"

Route111_Text_KyleWhatAWeirdGuy::
# 946 "data/maps/Route111/scripts.pory"
	.string "KYLE: What a weird guy.\n"
	.string "The SECRET BASES sound interesting,\l"
	.string "though!\p"
	.string "I'm going to look for a good place to\n"
	.string "make my own.\p"
	.string "Of course, I'll keep it a secret.\n"
	.string "Perhaps you'll find it if you're skilled\l"
	.string "enough.\p"
	.string "As a strange man once said,\n"
	.string "“BAM! I'm off!”$"

Route111_Text_SpencerSeeYouLater::
# 956 "data/maps/Route111/scripts.pory"
	.string "SPENCER: Now it's your turn to catch\n"
	.string "up to us.\p"
	.string "See you later!$"

Route111_Text_BrenSeeYouLater::
# 961 "data/maps/Route111/scripts.pory"
	.string "BREN: Now it's your turn to catch\n"
	.string "up to us.\p"
	.string "See you later!$"

Route111_Text_KyleSeeYouLater::
# 966 "data/maps/Route111/scripts.pory"
	.string "KYLE: Now it's your turn to catch\n"
	.string "up to us.\p"
	.string "See you later!$"
