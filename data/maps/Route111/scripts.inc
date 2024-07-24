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
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
# 71 "data/maps/Route111/scripts.pory"
	special SetMirageTowerVisibility
# 72 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_SetLayoutNoMirageTower
# 73 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_SetFallingPlayerGfx
# 74 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_SetMirageTowerGone
# 75 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CheckSetSandstorm
# 76 "data/maps/Route111/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 77 "data/maps/Route111/scripts.pory"
	goto_if_not_defeated TRAINER_VICKY, Route111_EventScript_SetWinstratesNotDefeated
# 78 "data/maps/Route111/scripts.pory"
	end
# 79 "data/maps/Route111/scripts.pory"

# 80 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfx::
# 81 "data/maps/Route111/scripts.pory"
	checkplayergender
# 82 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route111_EventScript_SetFallingPlayerGfxMale
# 83 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route111_EventScript_SetFallingPlayerGfxFemale
# 84 "data/maps/Route111/scripts.pory"
	return
# 85 "data/maps/Route111/scripts.pory"

# 86 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxMale::
# 87 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 88 "data/maps/Route111/scripts.pory"
	return
# 89 "data/maps/Route111/scripts.pory"

# 90 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxFemale::
# 91 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 92 "data/maps/Route111/scripts.pory"
	return
# 93 "data/maps/Route111/scripts.pory"

# 94 "data/maps/Route111/scripts.pory"
Route111_EventScript_CheckSetSandstorm::
# 95 "data/maps/Route111/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 96 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_1, 34, Route111_EventScript_EndCheckSetSandstorm
# 97 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 107, Route111_EventScript_EndCheckSetSandstorm
# 98 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 72, Route111_EventScript_SetSandstorm
# 99 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_0, 2000, Route111_EventScript_EndCheckSetSandstorm
# 100 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_0, 8, Route111_EventScript_EndCheckSetSandstorm
# 101 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetSandstorm::
# 102 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 103 "data/maps/Route111/scripts.pory"
Route111_EventScript_EndCheckSetSandstorm::
# 104 "data/maps/Route111/scripts.pory"
	return
# 105 "data/maps/Route111/scripts.pory"

# 106 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetWinstratesNotDefeated::
# 107 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE
# 108 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE
# 109 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE
# 110 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
# 111 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTOR
# 112 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTORIA
# 113 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VIVI
# 114 "data/maps/Route111/scripts.pory"
	end
# 115 "data/maps/Route111/scripts.pory"

# 116 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetLayoutNoMirageTower::
# 117 "data/maps/Route111/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE111_NO_MIRAGE_TOWER
# 118 "data/maps/Route111/scripts.pory"
	return
# 119 "data/maps/Route111/scripts.pory"

# 120 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetMirageTowerGone::
# 121 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 3
# 122 "data/maps/Route111/scripts.pory"
	return
# 123 "data/maps/Route111/scripts.pory"

# 124 "data/maps/Route111/scripts.pory"
Route111_OnWarp:
# 125 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_HidePlayerForMirageTower
# 126 "data/maps/Route111/scripts.pory"
	.2byte 0
# 127 "data/maps/Route111/scripts.pory"

# 128 "data/maps/Route111/scripts.pory"
Route111_EventScript_HidePlayerForMirageTower::
# 129 "data/maps/Route111/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_LITTLEROOT_TOWN
# 130 "data/maps/Route111/scripts.pory"
	end
# 131 "data/maps/Route111/scripts.pory"

# 132 "data/maps/Route111/scripts.pory"
Route111_OnFrame:
# 133 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_MirageTowerDisappear
# 134 "data/maps/Route111/scripts.pory"
	.2byte 0
# 135 "data/maps/Route111/scripts.pory"

# 136 "data/maps/Route111/scripts.pory"
Route111_EventScript_MirageTowerDisappear::
# 137 "data/maps/Route111/scripts.pory"
	lockall
# 138 "data/maps/Route111/scripts.pory"
	special StartMirageTowerShake
# 139 "data/maps/Route111/scripts.pory"
	waitstate
# 140 "data/maps/Route111/scripts.pory"
	delay 24
# 141 "data/maps/Route111/scripts.pory"
	playse SE_FALL
# 142 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_PLAYER_FALLING
# 143 "data/maps/Route111/scripts.pory"
	special StartPlayerDescendMirageTower
# 144 "data/maps/Route111/scripts.pory"
	waitstate
# 145 "data/maps/Route111/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_LITTLEROOT_TOWN
# 146 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_PLAYER_FALLING
# 147 "data/maps/Route111/scripts.pory"
	delay 16
# 148 "data/maps/Route111/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 149 "data/maps/Route111/scripts.pory"
	delay 16
# 150 "data/maps/Route111/scripts.pory"
	special StartMirageTowerDisintegration
# 151 "data/maps/Route111/scripts.pory"
	waitstate
# 152 "data/maps/Route111/scripts.pory"
	special StartMirageTowerFossilFallAndSink
# 153 "data/maps/Route111/scripts.pory"
	waitstate
# 154 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 2
# 155 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_DESERT_UNDERPASS_FOSSIL
# 156 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_CHOSE_CLAW_FOSSIL, Route111_EventScript_RootFossilDisappeared
# 157 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ClawFossilDisappeared, MSGBOX_DEFAULT
# 158 "data/maps/Route111/scripts.pory"
	releaseall
# 159 "data/maps/Route111/scripts.pory"
	end
# 160 "data/maps/Route111/scripts.pory"

# 161 "data/maps/Route111/scripts.pory"
Route111_EventScript_RootFossilDisappeared::
# 162 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RootFossilDisappeared, MSGBOX_DEFAULT
# 163 "data/maps/Route111/scripts.pory"
	releaseall
# 164 "data/maps/Route111/scripts.pory"
	end
# 165 "data/maps/Route111/scripts.pory"

# 166 "data/maps/Route111/scripts.pory"
@ Unused
# 167 "data/maps/Route111/scripts.pory"
Route111_Movement_PlayerFall::
# 168 "data/maps/Route111/scripts.pory"
	lock_anim
# 169 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 170 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 171 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 172 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 173 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 174 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 175 "data/maps/Route111/scripts.pory"
	step_end
# 176 "data/maps/Route111/scripts.pory"

# 177 "data/maps/Route111/scripts.pory"
Route111_EventScript_Girl::
# 178 "data/maps/Route111/scripts.pory"
	lock
# 179 "data/maps/Route111/scripts.pory"
	faceplayer
# 180 "data/maps/Route111/scripts.pory"
	dotimebasedevents
# 181 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_111_RECEIVED_BERRY, Route111_EventScript_ReceivedBerry
# 182 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WateredPlantsEveryDayTakeBerry, MSGBOX_DEFAULT
# 183 "data/maps/Route111/scripts.pory"
	giveitem ITEM_RAZZ_BERRY
# 184 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 185 "data/maps/Route111/scripts.pory"
	setflag FLAG_DAILY_ROUTE_111_RECEIVED_BERRY
# 186 "data/maps/Route111/scripts.pory"
	special GetPlayerBigGuyGirlString
# 187 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_GoingToTryToMakeDifferentColorBerries, MSGBOX_DEFAULT
# 188 "data/maps/Route111/scripts.pory"
	release
# 189 "data/maps/Route111/scripts.pory"
	end
# 190 "data/maps/Route111/scripts.pory"

# 191 "data/maps/Route111/scripts.pory"
Route111_EventScript_ReceivedBerry::
# 192 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WhatColorBerriesToLookForToday, MSGBOX_DEFAULT
# 193 "data/maps/Route111/scripts.pory"
	release
# 194 "data/maps/Route111/scripts.pory"
	end
# 195 "data/maps/Route111/scripts.pory"

# 196 "data/maps/Route111/scripts.pory"
@ Unused
# 197 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerUp::
# 198 "data/maps/Route111/scripts.pory"
	lockall
# 199 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 0
# 200 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 201 "data/maps/Route111/scripts.pory"
	end
# 202 "data/maps/Route111/scripts.pory"

# 203 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerDown::
# 204 "data/maps/Route111/scripts.pory"
	lockall
# 205 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 1
# 206 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 207 "data/maps/Route111/scripts.pory"
	end
# 208 "data/maps/Route111/scripts.pory"

# 209 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerLeft::
# 210 "data/maps/Route111/scripts.pory"
	lockall
# 211 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 2
# 212 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 213 "data/maps/Route111/scripts.pory"
	end
# 214 "data/maps/Route111/scripts.pory"

# 215 "data/maps/Route111/scripts.pory"
@ Unused
# 216 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerRight::
# 217 "data/maps/Route111/scripts.pory"
	lockall
# 218 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 3
# 219 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 220 "data/maps/Route111/scripts.pory"
	end
# 221 "data/maps/Route111/scripts.pory"

# 222 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTrigger::
# 223 "data/maps/Route111/scripts.pory"
	checkitem ITEM_GO_GOGGLES
# 224 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route111_EventScript_PreventRouteAccess
# 225 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 1
# 226 "data/maps/Route111/scripts.pory"
	releaseall
# 227 "data/maps/Route111/scripts.pory"
	end
# 228 "data/maps/Route111/scripts.pory"

# 229 "data/maps/Route111/scripts.pory"
Route111_EventScript_PreventRouteAccess::
# 230 "data/maps/Route111/scripts.pory"
	msgbox gText_SandstormIsVicious, MSGBOX_DEFAULT
# 231 "data/maps/Route111/scripts.pory"
	closemessage
# 232 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 0, Route111_EventScript_PushUpFromRoute
# 233 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 1, Route111_EventScript_PushDownFromRoute
# 234 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 2, Route111_EventScript_PushLeftFromRoute
# 235 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 3, Route111_EventScript_PushRightFromRoute
# 236 "data/maps/Route111/scripts.pory"
	releaseall
# 237 "data/maps/Route111/scripts.pory"
	end
# 238 "data/maps/Route111/scripts.pory"

# 239 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushUpFromRoute::
# 240 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushUpFromRoute
# 241 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 242 "data/maps/Route111/scripts.pory"
	return
# 243 "data/maps/Route111/scripts.pory"

# 244 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushDownFromRoute::
# 245 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushDownFromRoute
# 246 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 247 "data/maps/Route111/scripts.pory"
	return
# 248 "data/maps/Route111/scripts.pory"

# 249 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushLeftFromRoute::
# 250 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushLeftFromRoute
# 251 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 252 "data/maps/Route111/scripts.pory"
	return
# 253 "data/maps/Route111/scripts.pory"

# 254 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushRightFromRoute::
# 255 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushRightFromRoute
# 256 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 257 "data/maps/Route111/scripts.pory"
	return
# 258 "data/maps/Route111/scripts.pory"

# 259 "data/maps/Route111/scripts.pory"
Route111_Movement_PushUpFromRoute:
# 260 "data/maps/Route111/scripts.pory"
	walk_up
# 261 "data/maps/Route111/scripts.pory"
	step_end
# 262 "data/maps/Route111/scripts.pory"

# 263 "data/maps/Route111/scripts.pory"
Route111_Movement_PushDownFromRoute:
# 264 "data/maps/Route111/scripts.pory"
	walk_down
# 265 "data/maps/Route111/scripts.pory"
	step_end
# 266 "data/maps/Route111/scripts.pory"

# 267 "data/maps/Route111/scripts.pory"
Route111_Movement_PushLeftFromRoute:
# 268 "data/maps/Route111/scripts.pory"
	walk_left
# 269 "data/maps/Route111/scripts.pory"
	step_end
# 270 "data/maps/Route111/scripts.pory"

# 271 "data/maps/Route111/scripts.pory"
Route111_Movement_PushRightFromRoute:
# 272 "data/maps/Route111/scripts.pory"
	walk_right
# 273 "data/maps/Route111/scripts.pory"
	step_end
# 274 "data/maps/Route111/scripts.pory"

# 275 "data/maps/Route111/scripts.pory"
Route111_EventScript_SunTrigger::
# 276 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SUNNY
# 277 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_ROUTE110
# 278 "data/maps/Route111/scripts.pory"
	doweather
# 279 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 0
# 280 "data/maps/Route111/scripts.pory"
	end
# 281 "data/maps/Route111/scripts.pory"

# 282 "data/maps/Route111/scripts.pory"
Route111_EventScript_SandstormTrigger::
# 283 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 284 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_DESERT
# 285 "data/maps/Route111/scripts.pory"
	doweather
# 286 "data/maps/Route111/scripts.pory"
	end

Route111_EventScript_TriggerLeft::
# 290 "data/maps/Route111/scripts.pory"
	lock
# 291 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_BIKE_SHOP_RIVALS
# 292 "data/maps/Route111/scripts.pory"
	setobjectxyperm 48, 22, 133
# 293 "data/maps/Route111/scripts.pory"
	addobject 48
# 294 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 295 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 296 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PlayerWatchRidePastLeft
# 297 "data/maps/Route111/scripts.pory"
	applymovement 48, Route111_Movement_Rival1RidePast
# 298 "data/maps/Route111/scripts.pory"
	msgboxtimed Route111_EventScript_TriggerLeft_Text_0, 90
# 299 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 300 "data/maps/Route111/scripts.pory"
	removeobject 48
# 301 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_BIKE_SHOP_RIVALS
# 302 "data/maps/Route111/scripts.pory"
	setvar VAR_MAUVILLE_BIKE_SHOP_STATE, 3
# 303 "data/maps/Route111/scripts.pory"
	release
	end


Route111_EventScript_TriggerMiddleAndRight::
# 308 "data/maps/Route111/scripts.pory"
	lock
# 309 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_BIKE_SHOP_RIVALS
# 310 "data/maps/Route111/scripts.pory"
	addobject 48
# 311 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 312 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 313 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PlayerWatchRidePast
# 314 "data/maps/Route111/scripts.pory"
	applymovement 48, Route111_Movement_Rival1RidePast
# 315 "data/maps/Route111/scripts.pory"
	msgboxtimed Route111_EventScript_TriggerLeft_Text_0, 80
# 316 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 317 "data/maps/Route111/scripts.pory"
	removeobject 48
# 318 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_BIKE_SHOP_RIVALS
# 319 "data/maps/Route111/scripts.pory"
	setvar VAR_MAUVILLE_BIKE_SHOP_STATE, 3
# 320 "data/maps/Route111/scripts.pory"
	release
	end


# 324 "data/maps/Route111/scripts.pory"
Route111_Movement_PlayerWatchRidePast:
# 325 "data/maps/Route111/scripts.pory"
	delay_16
# 326 "data/maps/Route111/scripts.pory"
	delay_4
# 326 "data/maps/Route111/scripts.pory"
	delay_4
# 326 "data/maps/Route111/scripts.pory"
	delay_4
# 327 "data/maps/Route111/scripts.pory"
	face_left
# 328 "data/maps/Route111/scripts.pory"
	delay_4
# 329 "data/maps/Route111/scripts.pory"
	face_up
	step_end

# 332 "data/maps/Route111/scripts.pory"
Route111_Movement_PlayerWatchRidePastLeft:
# 333 "data/maps/Route111/scripts.pory"
	delay_16
# 334 "data/maps/Route111/scripts.pory"
	delay_4
# 334 "data/maps/Route111/scripts.pory"
	delay_4
# 334 "data/maps/Route111/scripts.pory"
	delay_4
# 335 "data/maps/Route111/scripts.pory"
	face_right
# 336 "data/maps/Route111/scripts.pory"
	delay_4
# 337 "data/maps/Route111/scripts.pory"
	face_up
	step_end

# 340 "data/maps/Route111/scripts.pory"
Route111_Movement_Rival1RidePast:
# 341 "data/maps/Route111/scripts.pory"
	delay_16
# 342 "data/maps/Route111/scripts.pory"
	walk_faster_up
# 342 "data/maps/Route111/scripts.pory"
	walk_faster_up
# 342 "data/maps/Route111/scripts.pory"
	walk_faster_up
# 342 "data/maps/Route111/scripts.pory"
	walk_faster_up
# 342 "data/maps/Route111/scripts.pory"
	walk_faster_up
# 342 "data/maps/Route111/scripts.pory"
	walk_faster_up
# 342 "data/maps/Route111/scripts.pory"
	walk_faster_up
# 342 "data/maps/Route111/scripts.pory"
	walk_faster_up
# 342 "data/maps/Route111/scripts.pory"
	walk_faster_up
# 342 "data/maps/Route111/scripts.pory"
	walk_faster_up
# 342 "data/maps/Route111/scripts.pory"
	walk_faster_up
# 342 "data/maps/Route111/scripts.pory"
	walk_faster_up
# 342 "data/maps/Route111/scripts.pory"
	walk_faster_up
	step_end

Route111_EventScript_Victor::
# 346 "data/maps/Route111/scripts.pory"
	lock
# 347 "data/maps/Route111/scripts.pory"
	faceplayer
# 348 "data/maps/Route111/scripts.pory"
	setflag FLAG_LANDMARK_WINSTRATE_FAMILY
# 349 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BattleOurFamily, MSGBOX_YESNO
# 350 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route111_EventScript_BattleWinstrates
# 351 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IsThatSo, MSGBOX_DEFAULT
# 352 "data/maps/Route111/scripts.pory"
	release
	end


Route111_EventScript_BattleWinstrates::
# 357 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorIntro, MSGBOX_DEFAULT
# 358 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTOR, Route111_Text_VictorDefeat
# 359 "data/maps/Route111/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
# 360 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 361 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 362 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorPostBattle, MSGBOX_DEFAULT
# 363 "data/maps/Route111/scripts.pory"
	closemessage
# 364 "data/maps/Route111/scripts.pory"
	applymovement 1, Route111_Movement_WinstrateEnterHouse
# 365 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 366 "data/maps/Route111/scripts.pory"
	removeobject 1
# 367 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 368 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 369 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 370 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 371 "data/maps/Route111/scripts.pory"
	addobject 2
# 372 "data/maps/Route111/scripts.pory"
	applymovement 2, Route111_Movement_WinstrateExitHouse
# 373 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 374 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 375 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaIntro, MSGBOX_DEFAULT
# 376 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTORIA, Route111_Text_VictoriaDefeat
# 377 "data/maps/Route111/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 378 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 379 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 380 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaPostBattle, MSGBOX_DEFAULT
# 381 "data/maps/Route111/scripts.pory"
	closemessage
# 382 "data/maps/Route111/scripts.pory"
	applymovement 2, Route111_Movement_WinstrateEnterHouse
# 383 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 384 "data/maps/Route111/scripts.pory"
	removeobject 2
# 385 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 386 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 387 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 388 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 389 "data/maps/Route111/scripts.pory"
	addobject 3
# 390 "data/maps/Route111/scripts.pory"
	applymovement 3, Route111_Movement_WinstrateExitHouse
# 391 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 392 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 393 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviIntro, MSGBOX_DEFAULT
# 394 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VIVI, Route111_Text_ViviDefeat
# 395 "data/maps/Route111/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterUp
# 396 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 397 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 398 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviPostBattle, MSGBOX_DEFAULT
# 399 "data/maps/Route111/scripts.pory"
	closemessage
# 400 "data/maps/Route111/scripts.pory"
	applymovement 3, Route111_Movement_WinstrateEnterHouse
# 401 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 402 "data/maps/Route111/scripts.pory"
	removeobject 3
# 403 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 404 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 405 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 406 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 407 "data/maps/Route111/scripts.pory"
	compare VAR_MAUVILLE_BIKE_SHOP_STATE, 3
	goto_if_eq Route111_EventScript_BattleWinstrates_2
# 453 "data/maps/Route111/scripts.pory"
	addobject 4
# 454 "data/maps/Route111/scripts.pory"
	applymovement 4, Route111_Movement_WinstrateExitHouse
# 455 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 456 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 457 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyIntro, MSGBOX_DEFAULT
# 458 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICKY, Route111_Text_VickyDefeat
Route111_EventScript_BattleWinstrates_1:
# 460 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyPostBattle, MSGBOX_DEFAULT
# 461 "data/maps/Route111/scripts.pory"
	closemessage
# 462 "data/maps/Route111/scripts.pory"
	compare VAR_MAUVILLE_BIKE_SHOP_STATE, 3
	goto_if_eq Route111_EventScript_BattleWinstrates_6
# 466 "data/maps/Route111/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
Route111_EventScript_BattleWinstrates_5:
# 468 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 469 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 470 "data/maps/Route111/scripts.pory"
	applymovement 4, Route111_Movement_WinstrateEnterHouse
# 471 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 472 "data/maps/Route111/scripts.pory"
	removeobject 4
# 473 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 474 "data/maps/Route111/scripts.pory"
	compare VAR_MAUVILLE_BIKE_SHOP_STATE, 3
	goto_if_eq Route111_EventScript_BattleWinstrates_15
Route111_EventScript_BattleWinstrates_14:
# 490 "data/maps/Route111/scripts.pory"
	release
	end

Route111_EventScript_BattleWinstrates_2:
# 408 "data/maps/Route111/scripts.pory"
	addobject 47
# 409 "data/maps/Route111/scripts.pory"
	applymovement 47, Route111_Movement_WinstrateExitHouse
# 410 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 411 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 412 "data/maps/Route111/scripts.pory"
	rival1talk Route111_Text_SpencerAllTheCommotion, Route111_Text_BrenAllTheCommotion, Route111_Text_KyleAllTheCommotion
# 415 "data/maps/Route111/scripts.pory"
	closemessage
# 416 "data/maps/Route111/scripts.pory"
	applymovement 47, Common_Movement_WalkInPlaceFasterUp
# 417 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 418 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 419 "data/maps/Route111/scripts.pory"
	addobject 4
# 420 "data/maps/Route111/scripts.pory"
	applymovement 4, Route111_Movement_WinstrateExitHouse
# 421 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WinstrateWithRivalPlayerPushedDown
# 422 "data/maps/Route111/scripts.pory"
	applymovement 47, Route111_Movement_WinstrateExitHouse
# 423 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 424 "data/maps/Route111/scripts.pory"
	applymovement 47, Common_Movement_FaceUp
# 425 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 426 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 427 "data/maps/Route111/scripts.pory"
	applymovement 47, Common_Movement_Walk_Left
# 428 "data/maps/Route111/scripts.pory"
	applymovement 4, Route111_Movement_WinstrateExitHouse
# 429 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 430 "data/maps/Route111/scripts.pory"
	applymovement 47, Common_Movement_FaceRight
# 431 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 432 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyIntro, MSGBOX_DEFAULT
# 433 "data/maps/Route111/scripts.pory"
	delay 10
# 434 "data/maps/Route111/scripts.pory"
	applymovement 47, Common_Movement_BeginTalkDown
# 435 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 436 "data/maps/Route111/scripts.pory"
	rival1talk Route111_Text_SpencerDontWorryGranny, Route111_Text_BrenDontWorryGranny, Route111_Text_KyleDontWorryGranny
# 439 "data/maps/Route111/scripts.pory"
	closemessage
# 440 "data/maps/Route111/scripts.pory"
	checkfriendchoice
# 441 "data/maps/Route111/scripts.pory"
	switch VAR_RESULT
# 442 "data/maps/Route111/scripts.pory"
	case SPENCER, Route111_EventScript_BattleWinstrates_11
# 444 "data/maps/Route111/scripts.pory"
	case BREN, Route111_EventScript_BattleWinstrates_12
# 446 "data/maps/Route111/scripts.pory"
	case KYLE, Route111_EventScript_BattleWinstrates_13
Route111_EventScript_BattleWinstrates_9:
# 449 "data/maps/Route111/scripts.pory"
	applymovement 47, Common_Movement_FaceRight
# 450 "data/maps/Route111/scripts.pory"
	waitmovement 0
	goto Route111_EventScript_BattleWinstrates_1

Route111_EventScript_BattleWinstrates_6:
# 463 "data/maps/Route111/scripts.pory"
	applymovement 4, Route111_Movement_WinstrateEnterHouse
	goto Route111_EventScript_BattleWinstrates_5

Route111_EventScript_BattleWinstrates_11:
# 443 "data/maps/Route111/scripts.pory"
	doublebattle_vs_2 TRAINER_VICKY, Route111_Text_VickyDefeat, TRAINER_BREN_MAUVILLE, Route111_Text_BrenPostBattle
	goto Route111_EventScript_BattleWinstrates_9

Route111_EventScript_BattleWinstrates_12:
# 445 "data/maps/Route111/scripts.pory"
	doublebattle_vs_2 TRAINER_VICKY, Route111_Text_VickyDefeat, TRAINER_KYLE_MAUVILLE, Route111_Text_KylePostBattle
	goto Route111_EventScript_BattleWinstrates_9

Route111_EventScript_BattleWinstrates_13:
# 447 "data/maps/Route111/scripts.pory"
	doublebattle_vs_2 TRAINER_VICKY, Route111_Text_VickyDefeat, TRAINER_SPENCER_MAUVILLE, Route111_Text_SpencerPostBattle
	goto Route111_EventScript_BattleWinstrates_9

Route111_EventScript_BattleWinstrates_15:
# 475 "data/maps/Route111/scripts.pory"
	applymovement 47, Route111_Movement_WinstrateWithRivalRival1MoveBackToPlayer
# 476 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 477 "data/maps/Route111/scripts.pory"
	rival1talk Route111_Text_SpencerLoveToChatYouUp, Route111_Text_BrenLoveToChatYouUp, Route111_Text_KyleLoveToChatYouUp
# 480 "data/maps/Route111/scripts.pory"
	closemessage
# 481 "data/maps/Route111/scripts.pory"
	applymovement 47, Route111_Movement_WinstrateEnterHouse
# 482 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 483 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 484 "data/maps/Route111/scripts.pory"
	applymovement 47, Route111_Movement_WinstrateEnterHouse
# 485 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 486 "data/maps/Route111/scripts.pory"
	removeobject 47
# 487 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 488 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_WINSTRATE_RIVAL1
	goto Route111_EventScript_BattleWinstrates_14


Route111_EventScript_OpenWinstrateDoor::
# 495 "data/maps/Route111/scripts.pory"
	opendoor 13, 113
# 496 "data/maps/Route111/scripts.pory"
	waitdooranim
	return


Route111_EventScript_CloseWinstrateDoor::
# 501 "data/maps/Route111/scripts.pory"
	closedoor 13, 113
# 502 "data/maps/Route111/scripts.pory"
	waitdooranim
	return


# 506 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateEnterHouse:
# 507 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_up
# 508 "data/maps/Route111/scripts.pory"
	walk_up
	step_end

# 511 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateExitHouse:
# 512 "data/maps/Route111/scripts.pory"
	walk_down
	step_end

# 515 "data/maps/Route111/scripts.pory"
Route111_Movement_WaitForNextWinstrate:
# 516 "data/maps/Route111/scripts.pory"
	delay_16
# 517 "data/maps/Route111/scripts.pory"
	delay_16
# 518 "data/maps/Route111/scripts.pory"
	delay_16
	step_end

# 521 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateWithRivalPlayerPushedDown:
# 522 "data/maps/Route111/scripts.pory"
	delay_8
# 523 "data/maps/Route111/scripts.pory"
	walk_down
# 524 "data/maps/Route111/scripts.pory"
	face_up
	step_end

# 527 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateWithRivalRival1MoveBackToPlayer:
# 528 "data/maps/Route111/scripts.pory"
	walk_right
# 529 "data/maps/Route111/scripts.pory"
	face_down
	step_end

# 532 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateWithRivalRival1EnterHouse:
# 533 "data/maps/Route111/scripts.pory"
	walk_up
# 533 "data/maps/Route111/scripts.pory"
	walk_up
	step_end

Route111_EventScript_SecretBaseTriggerLeft::
# 609 "data/maps/Route111/scripts.pory"
	lock
# 610 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_SecretBaseTriggerLeft_Text_0, MSGBOX_AUTOCLOSE
# 611 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_GetIntoPLaceForSecretBaseLeft
# 612 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 613 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_SecretBaseEvent
	return


Route111_EventScript_SecretBaseTriggerMiddle::
# 618 "data/maps/Route111/scripts.pory"
	lock
# 619 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_SecretBaseTriggerLeft_Text_0, MSGBOX_AUTOCLOSE
# 620 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 621 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 622 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_SecretBaseEvent
	return


Route111_EventScript_SecretBaseTriggerRight::
# 626 "data/maps/Route111/scripts.pory"
	lock
# 627 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_SecretBaseTriggerLeft_Text_0, MSGBOX_AUTOCLOSE
# 628 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_GetIntoPLaceForSecretBaseRight
# 629 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 630 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_SecretBaseEvent
	return


# 633 "data/maps/Route111/scripts.pory"
Route111_Movement_GetIntoPLaceForSecretBaseLeft:
# 634 "data/maps/Route111/scripts.pory"
	walk_right
# 635 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_down
	step_end

# 638 "data/maps/Route111/scripts.pory"
Route111_Movement_GetIntoPLaceForSecretBaseRight:
# 639 "data/maps/Route111/scripts.pory"
	walk_left
# 640 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_down
	step_end

Route111_EventScript_SecretBaseEvent::
# 644 "data/maps/Route111/scripts.pory"
	addobject 49
# 645 "data/maps/Route111/scripts.pory"
	addobject 50
# 646 "data/maps/Route111/scripts.pory"
	applymovement 49, Route111_Movement_Rival1EntersForSecretBase
# 647 "data/maps/Route111/scripts.pory"
	applymovement 50, Route111_Movement_Rival2EntersForSecretBase
# 648 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 649 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 650 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 651 "data/maps/Route111/scripts.pory"
	delay 10
# 652 "data/maps/Route111/scripts.pory"
	removeobject 49
# 653 "data/maps/Route111/scripts.pory"
	addobject 51
# 654 "data/maps/Route111/scripts.pory"
	delay 20
# 655 "data/maps/Route111/scripts.pory"
	removeobject 50
# 656 "data/maps/Route111/scripts.pory"
	addobject 52
# 657 "data/maps/Route111/scripts.pory"
	setobjectxyperm 49, 11, 22
# 658 "data/maps/Route111/scripts.pory"
	setobjectxyperm 50, 13, 22
# 659 "data/maps/Route111/scripts.pory"
	applymovement 51, Common_Movement_BeginTalkRight
# 660 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 661 "data/maps/Route111/scripts.pory"
	rival1talk Route111_Text_SpencerTryingToCatchUp, Route111_Text_BrenTryingToCatchUp, Route111_Text_KyleTryingToCatchUp
# 664 "data/maps/Route111/scripts.pory"
	checkflag FLAG_RECEIVED_BIKE
# 665 "data/maps/Route111/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route111_EventScript_SecretBaseEvent_2
Route111_EventScript_SecretBaseEvent_1:
# 668 "data/maps/Route111/scripts.pory"
	closemessage
# 669 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 670 "data/maps/Route111/scripts.pory"
	applymovement 52, Common_Movement_BeginTalkLeft
# 671 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 672 "data/maps/Route111/scripts.pory"
	rival2talk Route111_Text_SpencerSpiritOfAdventure, Route111_Text_BrenSpiritOfAdventure, Route111_Text_KyleSpiritOfAdventure
# 675 "data/maps/Route111/scripts.pory"
	closemessage
# 676 "data/maps/Route111/scripts.pory"
	delay 10
# 677 "data/maps/Route111/scripts.pory"
	playse SE_PIN
# 678 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 679 "data/maps/Route111/scripts.pory"
	applymovement 51, Common_Movement_WalkInPlaceFasterUp
# 680 "data/maps/Route111/scripts.pory"
	applymovement 52, Common_Movement_WalkInPlaceFasterUp
# 681 "data/maps/Route111/scripts.pory"
	applymovement 33, Route111_Movement_NoticeFriends
# 682 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 683 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MoreThanTheySeem
# 684 "data/maps/Route111/scripts.pory"
	closemessage
# 685 "data/maps/Route111/scripts.pory"
	delay 10
# 686 "data/maps/Route111/scripts.pory"
	applymovement 33, Common_Movement_WalkInPlaceFasterUp
# 687 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 688 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_AtFirstGlance
# 689 "data/maps/Route111/scripts.pory"
	applymovement 33, Common_Movement_WalkInPlaceFasterDown
# 690 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 691 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TakeALookForYourself
# 692 "data/maps/Route111/scripts.pory"
	closemessage
# 693 "data/maps/Route111/scripts.pory"
	giveitem ITEM_TM_SECRET_POWER
# 694 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Route111_EventScript_NoRoomForSecretPower
# 695 "data/maps/Route111/scripts.pory"
	applymovement 33, Route111_Movement_GuyWalkToRival2
# 696 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 697 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_AndOneForYou
# 698 "data/maps/Route111/scripts.pory"
	closemessage
# 699 "data/maps/Route111/scripts.pory"
	delay 10
# 700 "data/maps/Route111/scripts.pory"
	applymovement 33, Route111_Movement_GuyWalkToRival1
# 701 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 702 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_AndYouAsWell
# 703 "data/maps/Route111/scripts.pory"
	closemessage
# 704 "data/maps/Route111/scripts.pory"
	delay 10
# 705 "data/maps/Route111/scripts.pory"
	applymovement 33, Route111_Movement_GuyWalkToRival2
# 706 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 707 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_YoureSpeechless
# 708 "data/maps/Route111/scripts.pory"
	closemessage
# 709 "data/maps/Route111/scripts.pory"
	applymovement 52, Common_Movement_FaceLeft
# 710 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PlayerWatchToLedge
# 711 "data/maps/Route111/scripts.pory"
	applymovement 51, Route111_Movement_Rival1WatchToLedge
# 712 "data/maps/Route111/scripts.pory"
	applymovement 33, Route111_Movement_GuyRunsToLedge
# 713 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 714 "data/maps/Route111/scripts.pory"
	playse SE_LEDGE
# 715 "data/maps/Route111/scripts.pory"
	applymovement 33, Route111_Movement_GuyJumpsLedge
# 716 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 717 "data/maps/Route111/scripts.pory"
	waitse
# 718 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 719 "data/maps/Route111/scripts.pory"
	applymovement 51, Common_Movement_FaceDown
# 720 "data/maps/Route111/scripts.pory"
	applymovement 52, Common_Movement_FaceDown
# 721 "data/maps/Route111/scripts.pory"
	applymovement 33, Route111_Movement_GuyLeaves
# 722 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 723 "data/maps/Route111/scripts.pory"
	removeobject 33
# 724 "data/maps/Route111/scripts.pory"
	delay 20
# 725 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 726 "data/maps/Route111/scripts.pory"
	applymovement 52, Common_Movement_FaceLeft
# 727 "data/maps/Route111/scripts.pory"
	applymovement 51, Common_Movement_BeginTalkRight
# 728 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 729 "data/maps/Route111/scripts.pory"
	rival1talk Route111_Text_SpencerWhatAWeirdGuy, Route111_Text_BrenWhatAWeirdGuy, Route111_Text_KyleWhatAWeirdGuy
# 732 "data/maps/Route111/scripts.pory"
	closemessage
# 733 "data/maps/Route111/scripts.pory"
	delay 10
# 734 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WatchRival1Leave
# 735 "data/maps/Route111/scripts.pory"
	applymovement 52, Route111_Movement_WatchRival1Leave
# 736 "data/maps/Route111/scripts.pory"
	applymovement 51, Route111_Movement_Rival1Leave
# 737 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 738 "data/maps/Route111/scripts.pory"
	removeobject 51
# 739 "data/maps/Route111/scripts.pory"
	delay 10
# 740 "data/maps/Route111/scripts.pory"
	applymovement 52, Common_Movement_BeginTalkLeft
# 741 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 742 "data/maps/Route111/scripts.pory"
	rival2talk Route111_Text_SpencerSeeYouLater, Route111_Text_BrenSeeYouLater, Route111_Text_KyleSeeYouLater
# 745 "data/maps/Route111/scripts.pory"
	closemessage
# 746 "data/maps/Route111/scripts.pory"
	delay 20
# 747 "data/maps/Route111/scripts.pory"
	playse SE_BIKE_BELL
# 748 "data/maps/Route111/scripts.pory"
	removeobject 52
# 749 "data/maps/Route111/scripts.pory"
	addobject 50
# 750 "data/maps/Route111/scripts.pory"
	delay 30
# 751 "data/maps/Route111/scripts.pory"
	applymovement 50, Route111_Movement_Rival2Leave
# 752 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 753 "data/maps/Route111/scripts.pory"
	removeobject 50
# 754 "data/maps/Route111/scripts.pory"
	setvar VAR_MAUVILLE_BIKE_SHOP_STATE, 4
# 755 "data/maps/Route111/scripts.pory"
	setvar VAR_SECRET_BASE_EVENT_STATE, 1
# 756 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_WINSTRATE_RIVAL1
# 757 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_117_RIVAL2
# 758 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_BIKE_SHOP_RIVALS
# 759 "data/maps/Route111/scripts.pory"
	release
	end

Route111_EventScript_SecretBaseEvent_2:
# 666 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_NoBike, MSGBOX_DEFAULT
	goto Route111_EventScript_SecretBaseEvent_1


# 763 "data/maps/Route111/scripts.pory"
Route111_Movement_Rival1EntersForSecretBase:
# 764 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 764 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 764 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 765 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 765 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 765 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 766 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 766 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 766 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 767 "data/maps/Route111/scripts.pory"
	face_right
	step_end

# 770 "data/maps/Route111/scripts.pory"
Route111_Movement_Rival2EntersForSecretBase:
# 771 "data/maps/Route111/scripts.pory"
	delay_16
# 771 "data/maps/Route111/scripts.pory"
	delay_16
# 772 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 772 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 772 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 773 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 773 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 773 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 773 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 773 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 774 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 774 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 774 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 775 "data/maps/Route111/scripts.pory"
	face_left
	step_end

# 778 "data/maps/Route111/scripts.pory"
Route111_Movement_NoticeFriends:
# 779 "data/maps/Route111/scripts.pory"
	emote_exclamation_mark
# 780 "data/maps/Route111/scripts.pory"
	face_down
# 781 "data/maps/Route111/scripts.pory"
	delay_16
# 781 "data/maps/Route111/scripts.pory"
	delay_16
# 781 "data/maps/Route111/scripts.pory"
	delay_16
# 782 "data/maps/Route111/scripts.pory"
	walk_left
# 783 "data/maps/Route111/scripts.pory"
	walk_down
	step_end

# 786 "data/maps/Route111/scripts.pory"
Route111_Movement_GuyWalkToRival2:
# 787 "data/maps/Route111/scripts.pory"
	walk_right
# 788 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_down
	step_end

# 791 "data/maps/Route111/scripts.pory"
Route111_Movement_GuyWalkToRival1:
# 792 "data/maps/Route111/scripts.pory"
	walk_left
# 792 "data/maps/Route111/scripts.pory"
	walk_left
# 793 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_down
	step_end

# 796 "data/maps/Route111/scripts.pory"
Route111_Movement_GuyRunsToLedge:
# 797 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 797 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 798 "data/maps/Route111/scripts.pory"
	walk_fast_down
	step_end

# 801 "data/maps/Route111/scripts.pory"
Route111_Movement_GuyJumpsLedge:
# 802 "data/maps/Route111/scripts.pory"
	jump_2_down
	step_end

# 805 "data/maps/Route111/scripts.pory"
Route111_Movement_GuyLeaves:
# 806 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 807 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 807 "data/maps/Route111/scripts.pory"
	walk_fast_left
# 808 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 808 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 808 "data/maps/Route111/scripts.pory"
	walk_fast_down
	step_end

# 811 "data/maps/Route111/scripts.pory"
Route111_Movement_PlayerWatchToLedge:
# 812 "data/maps/Route111/scripts.pory"
	delay_8
# 813 "data/maps/Route111/scripts.pory"
	face_left
	step_end

# 816 "data/maps/Route111/scripts.pory"
Route111_Movement_Rival1WatchToLedge:
# 817 "data/maps/Route111/scripts.pory"
	delay_16
# 818 "data/maps/Route111/scripts.pory"
	face_left
	step_end

# 821 "data/maps/Route111/scripts.pory"
Route111_Movement_WatchRival1Leave:
# 822 "data/maps/Route111/scripts.pory"
	delay_8
# 823 "data/maps/Route111/scripts.pory"
	face_up
# 824 "data/maps/Route111/scripts.pory"
	delay_16
# 825 "data/maps/Route111/scripts.pory"
	face_right
	step_end

# 828 "data/maps/Route111/scripts.pory"
Route111_Movement_Rival1Leave:
# 829 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 830 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 830 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 830 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 830 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 830 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 830 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 831 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 831 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 831 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 832 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 832 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 832 "data/maps/Route111/scripts.pory"
	walk_fast_right
	step_end

# 835 "data/maps/Route111/scripts.pory"
Route111_Movement_Rival2Leave:
# 836 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 836 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 836 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 836 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 837 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 837 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 837 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 837 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 838 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 838 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 838 "data/maps/Route111/scripts.pory"
	walk_fast_right
# 838 "data/maps/Route111/scripts.pory"
	walk_fast_right
	step_end

# 967 "data/maps/Route111/scripts.pory"

# 968 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSignMauville::
# 969 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSignMauville, MSGBOX_SIGN
# 970 "data/maps/Route111/scripts.pory"
	end
# 971 "data/maps/Route111/scripts.pory"

# 972 "data/maps/Route111/scripts.pory"
Route111_EventScript_WinstrateHouseSign::
# 973 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateHouseSign, MSGBOX_SIGN
# 974 "data/maps/Route111/scripts.pory"
	end
# 975 "data/maps/Route111/scripts.pory"

# 976 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign112::
# 977 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign112, MSGBOX_SIGN
# 978 "data/maps/Route111/scripts.pory"
	end
# 979 "data/maps/Route111/scripts.pory"

# 980 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign113::
# 981 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign113, MSGBOX_SIGN
# 982 "data/maps/Route111/scripts.pory"
	end
# 983 "data/maps/Route111/scripts.pory"

# 984 "data/maps/Route111/scripts.pory"
Route111_EventScript_OldLadysRestStopSign::
# 985 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_OldLadysRestStopSign, MSGBOX_SIGN
# 986 "data/maps/Route111/scripts.pory"
	end
# 987 "data/maps/Route111/scripts.pory"

# 988 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerTipsSpAtkSpDef::
# 989 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerTipsSpAtkSpDef, MSGBOX_SIGN
# 990 "data/maps/Route111/scripts.pory"
	end
# 991 "data/maps/Route111/scripts.pory"

# 992 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man1::
# 993 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ToughToKeepWinningUpTheRanks, MSGBOX_NPC
# 994 "data/maps/Route111/scripts.pory"
	end
# 995 "data/maps/Route111/scripts.pory"

# 996 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man2::
# 997 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateFamilyDestroyedMe, MSGBOX_NPC
# 998 "data/maps/Route111/scripts.pory"
	end
# 999 "data/maps/Route111/scripts.pory"

# 1000 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hiker::
# 1001 "data/maps/Route111/scripts.pory"
	lock
# 1002 "data/maps/Route111/scripts.pory"
	faceplayer
# 1003 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 3, Route111_EventScript_HikerMirageTowerGone
# 1004 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_HikerMirageTowerDisintegrated
# 1005 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_HikerMirageTowerVisible
# 1006 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ShouldBeMirageTowerAroundHere, MSGBOX_DEFAULT
# 1007 "data/maps/Route111/scripts.pory"
	release
# 1008 "data/maps/Route111/scripts.pory"
	end
# 1009 "data/maps/Route111/scripts.pory"

# 1010 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerGone::
# 1011 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerHasntBeenSeenSince, MSGBOX_DEFAULT
# 1012 "data/maps/Route111/scripts.pory"
	release
# 1013 "data/maps/Route111/scripts.pory"
	end
# 1014 "data/maps/Route111/scripts.pory"

# 1015 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerDisintegrated::
# 1016 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ThatWasShockingSandRainedDown, MSGBOX_DEFAULT
# 1017 "data/maps/Route111/scripts.pory"
	release
# 1018 "data/maps/Route111/scripts.pory"
	end
# 1019 "data/maps/Route111/scripts.pory"

# 1020 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerVisible::
# 1021 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerClearlyVisible, MSGBOX_DEFAULT
# 1022 "data/maps/Route111/scripts.pory"
	release
# 1023 "data/maps/Route111/scripts.pory"
	end
# 1024 "data/maps/Route111/scripts.pory"

# 1025 "data/maps/Route111/scripts.pory"
Route111_EventScript_RockSmashTipFatMan::
# 1026 "data/maps/Route111/scripts.pory"
	lockall
# 1027 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROCK_SMASH_MAN, Common_Movement_FacePlayer
# 1028 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 1029 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MauvilleUncleToldMeToTakeRockSmash, MSGBOX_DEFAULT
# 1030 "data/maps/Route111/scripts.pory"
	closemessage
# 1031 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROCK_SMASH_MAN, Common_Movement_FaceOriginalDirection
# 1032 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 1033 "data/maps/Route111/scripts.pory"
	releaseall
# 1034 "data/maps/Route111/scripts.pory"
	end
# 1035 "data/maps/Route111/scripts.pory"

# 1036 "data/maps/Route111/scripts.pory"
Route111_EventScript_Drew::
# 1037 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DREW, Route111_Text_DrewIntro, Route111_Text_DrewDefeat
# 1038 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DrewPostBattle, MSGBOX_AUTOCLOSE
# 1039 "data/maps/Route111/scripts.pory"
	end
# 1040 "data/maps/Route111/scripts.pory"

# 1041 "data/maps/Route111/scripts.pory"
Route111_EventScript_Heidi::
# 1042 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HEIDI, Route111_Text_HeidiIntro, Route111_Text_HeidiDefeat
# 1043 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HeidiPostBattle, MSGBOX_AUTOCLOSE
# 1044 "data/maps/Route111/scripts.pory"
	end
# 1045 "data/maps/Route111/scripts.pory"

# 1046 "data/maps/Route111/scripts.pory"
Route111_EventScript_Beau::
# 1047 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BEAU, Route111_Text_BeauIntro, Route111_Text_BeauDefeat
# 1048 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
# 1049 "data/maps/Route111/scripts.pory"
	end
# 1050 "data/maps/Route111/scripts.pory"

# 1051 "data/maps/Route111/scripts.pory"
Route111_EventScript_Becky::
# 1052 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BECKY, Route111_Text_BeckyIntro, Route111_Text_BeckyDefeat
# 1053 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeckyPostBattle, MSGBOX_AUTOCLOSE
# 1054 "data/maps/Route111/scripts.pory"
	end
# 1055 "data/maps/Route111/scripts.pory"

# 1056 "data/maps/Route111/scripts.pory"
Route111_EventScript_Dusty::
# 1057 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_1, Route111_Text_DustyIntro, Route111_Text_DustyDefeat, Route111_EventScript_RegisterDusty
# 1058 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1059 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchDusty
# 1060 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostBattle, MSGBOX_DEFAULT
# 1061 "data/maps/Route111/scripts.pory"
	release
# 1062 "data/maps/Route111/scripts.pory"
	end
# 1063 "data/maps/Route111/scripts.pory"

# 1064 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterDusty::
# 1065 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 1066 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 1067 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyRegister, MSGBOX_DEFAULT
# 1068 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_DUSTY_1
# 1069 "data/maps/Route111/scripts.pory"
	release
# 1070 "data/maps/Route111/scripts.pory"
	end
# 1071 "data/maps/Route111/scripts.pory"

# 1072 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchDusty::
# 1073 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_DUSTY_1, Route111_Text_DustyRematchIntro, Route111_Text_DustyRematchDefeat
# 1074 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostRematch, MSGBOX_AUTOCLOSE
# 1075 "data/maps/Route111/scripts.pory"
	end
# 1076 "data/maps/Route111/scripts.pory"

# 1077 "data/maps/Route111/scripts.pory"
Route111_EventScript_Travis::
# 1078 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TRAVIS, Route111_Text_TravisIntro, Route111_Text_TravisDefeat
# 1079 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
# 1080 "data/maps/Route111/scripts.pory"
	end
# 1081 "data/maps/Route111/scripts.pory"

# 1082 "data/maps/Route111/scripts.pory"
Route111_EventScript_Irene::
# 1083 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_IRENE, Route111_Text_IreneIntro, Route111_Text_IreneDefeat
# 1084 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IrenePostBattle, MSGBOX_AUTOCLOSE
# 1085 "data/maps/Route111/scripts.pory"
	end
# 1086 "data/maps/Route111/scripts.pory"

# 1087 "data/maps/Route111/scripts.pory"
Route111_EventScript_Daisuke::
# 1088 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DAISUKE, Route111_Text_DaisukeIntro, Route111_Text_DaisukeDefeat
# 1089 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DaisukePostBattle, MSGBOX_AUTOCLOSE
# 1090 "data/maps/Route111/scripts.pory"
	end
# 1091 "data/maps/Route111/scripts.pory"

# 1092 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wilton::
# 1093 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_WILTON_1, Route111_Text_WiltonIntro, Route111_Text_WiltonDefeat, Route111_EventScript_RegisterWilton
# 1094 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1095 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchWilton
# 1096 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostBattle, MSGBOX_DEFAULT
# 1097 "data/maps/Route111/scripts.pory"
	release
# 1098 "data/maps/Route111/scripts.pory"
	end
# 1099 "data/maps/Route111/scripts.pory"

# 1100 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterWilton::
# 1101 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 1102 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 1103 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonRegister, MSGBOX_DEFAULT
# 1104 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_WILTON_1
# 1105 "data/maps/Route111/scripts.pory"
	release
# 1106 "data/maps/Route111/scripts.pory"
	end
# 1107 "data/maps/Route111/scripts.pory"

# 1108 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchWilton::
# 1109 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_WILTON_1, Route111_Text_WiltonRematchIntro, Route111_Text_WiltonRematchDefeat
# 1110 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostRematch, MSGBOX_AUTOCLOSE
# 1111 "data/maps/Route111/scripts.pory"
	end
# 1112 "data/maps/Route111/scripts.pory"

# 1113 "data/maps/Route111/scripts.pory"
Route111_EventScript_Brooke::
# 1114 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BROOKE_1, Route111_Text_BrookeIntro, Route111_Text_BrookeDefeat, Route111_EventScript_RegisterBrooke
# 1115 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1116 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchBrooke
# 1117 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostBattle, MSGBOX_DEFAULT
# 1118 "data/maps/Route111/scripts.pory"
	release
# 1119 "data/maps/Route111/scripts.pory"
	end
# 1120 "data/maps/Route111/scripts.pory"

# 1121 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterBrooke::
# 1122 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 1123 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 1124 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookeRegister, MSGBOX_DEFAULT
# 1125 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_BROOKE_1
# 1126 "data/maps/Route111/scripts.pory"
	release
# 1127 "data/maps/Route111/scripts.pory"
	end
# 1128 "data/maps/Route111/scripts.pory"

# 1129 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchBrooke::
# 1130 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_BROOKE_1, Route111_Text_BrookeRematchIntro, Route111_Text_BrookeRematchDefeat
# 1131 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostRematch, MSGBOX_AUTOCLOSE
# 1132 "data/maps/Route111/scripts.pory"
	end
# 1133 "data/maps/Route111/scripts.pory"

# 1134 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hayden::
# 1135 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HAYDEN, Route111_Text_HaydenIntro, Route111_Text_HaydenDefeat
# 1136 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HaydenPostBattle, MSGBOX_AUTOCLOSE
# 1137 "data/maps/Route111/scripts.pory"
	end
# 1138 "data/maps/Route111/scripts.pory"

# 1139 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bianca::
# 1140 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BIANCA, Route111_Text_BiancaIntro, Route111_Text_BiancaDefeat
# 1141 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BiancaPostBattle, MSGBOX_AUTOCLOSE
# 1142 "data/maps/Route111/scripts.pory"
	end
# 1143 "data/maps/Route111/scripts.pory"

# 1144 "data/maps/Route111/scripts.pory"
Route111_EventScript_Tyron::
# 1145 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TYRON, Route111_Text_TyronIntro, Route111_Text_TyronDefeat
# 1146 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
# 1147 "data/maps/Route111/scripts.pory"
	end
# 1148 "data/maps/Route111/scripts.pory"

# 1149 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celina::
# 1150 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELINA, Route111_Text_CelinaIntro, Route111_Text_CelinaDefeat
# 1151 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CelinaPostBattle, MSGBOX_AUTOCLOSE
# 1152 "data/maps/Route111/scripts.pory"
	end
# 1153 "data/maps/Route111/scripts.pory"

# 1154 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celia::
# 1155 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELIA, Route111_Text_CeliaIntro, Route111_Text_CeliaDefeat
# 1156 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CeliaPostBattle, MSGBOX_AUTOCLOSE
# 1157 "data/maps/Route111/scripts.pory"
	end
# 1158 "data/maps/Route111/scripts.pory"

# 1159 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bryan::
# 1160 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRYAN, Route111_Text_BryanIntro, Route111_Text_BryanDefeat
# 1161 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BryanPostBattle, MSGBOX_AUTOCLOSE
# 1162 "data/maps/Route111/scripts.pory"
	end
# 1163 "data/maps/Route111/scripts.pory"

# 1164 "data/maps/Route111/scripts.pory"
Route111_EventScript_Branden::
# 1165 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRANDEN, Route111_Text_BrandenIntro, Route111_Text_BrandenDefeat
# 1166 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrandenPostBattle, MSGBOX_AUTOCLOSE
# 1167 "data/maps/Route111/scripts.pory"
	end
# 1168 "data/maps/Route111/scripts.pory"

# 1169 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerHillSign::
# 1170 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerHillSign, MSGBOX_SIGN
# 1171 "data/maps/Route111/scripts.pory"
	end
# 1172 "data/maps/Route111/scripts.pory"

# 1173 "data/maps/Route111/scripts.pory"
Route111_Text_BattleOurFamily:
# 1174 "data/maps/Route111/scripts.pory"
	.string "Hello! I take it you're a traveler.\p"
# 1175 "data/maps/Route111/scripts.pory"
	.string "How's this? What do you say to taking\n"
# 1176 "data/maps/Route111/scripts.pory"
	.string "on our family of four in a series of\l"
# 1177 "data/maps/Route111/scripts.pory"
	.string "POKéMON battles?$"
# 1178 "data/maps/Route111/scripts.pory"

# 1179 "data/maps/Route111/scripts.pory"
Route111_Text_IsThatSo:
# 1180 "data/maps/Route111/scripts.pory"
	.string "Is that so?\n"
# 1181 "data/maps/Route111/scripts.pory"
	.string "Drop in, if you change your mind!$"
# 1182 "data/maps/Route111/scripts.pory"

# 1183 "data/maps/Route111/scripts.pory"
Route111_Text_VictorIntro:
# 1184 "data/maps/Route111/scripts.pory"
	.string "That's the spirit! I like you!$"
# 1185 "data/maps/Route111/scripts.pory"

# 1186 "data/maps/Route111/scripts.pory"
Route111_Text_VictorDefeat:
# 1187 "data/maps/Route111/scripts.pory"
	.string "Aiyah!\n"
# 1188 "data/maps/Route111/scripts.pory"
	.string "You're a lot tougher than I expected!$"
# 1189 "data/maps/Route111/scripts.pory"

# 1190 "data/maps/Route111/scripts.pory"
Route111_Text_VictorPostBattle:
# 1191 "data/maps/Route111/scripts.pory"
	.string "Hey, all!\n"
# 1192 "data/maps/Route111/scripts.pory"
	.string "I've found a pretty strong TRAINER!$"
# 1193 "data/maps/Route111/scripts.pory"

# 1194 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaIntro:
# 1195 "data/maps/Route111/scripts.pory"
	.string "Oh, my goodness! Aren't you young?\p"
# 1196 "data/maps/Route111/scripts.pory"
	.string "You must be quite the TRAINER to beat\n"
# 1197 "data/maps/Route111/scripts.pory"
	.string "my husband, though.\p"
# 1198 "data/maps/Route111/scripts.pory"
	.string "It's my turn to battle now!$"
# 1199 "data/maps/Route111/scripts.pory"

# 1200 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaDefeat:
# 1201 "data/maps/Route111/scripts.pory"
	.string "Oh, gosh!\n"
# 1202 "data/maps/Route111/scripts.pory"
	.string "I can't get over how strong you are!$"
# 1203 "data/maps/Route111/scripts.pory"

# 1204 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaPostBattle:
# 1205 "data/maps/Route111/scripts.pory"
	.string "There's a strong TRAINER here!\n"
# 1206 "data/maps/Route111/scripts.pory"
	.string "This one's really strong!$"
# 1207 "data/maps/Route111/scripts.pory"

# 1208 "data/maps/Route111/scripts.pory"
Route111_Text_ViviIntro:
# 1209 "data/maps/Route111/scripts.pory"
	.string "You're stronger than Mommy? Wow!\p"
# 1210 "data/maps/Route111/scripts.pory"
	.string "But I'm strong, too!\n"
# 1211 "data/maps/Route111/scripts.pory"
	.string "Really! Honestly!$"
# 1212 "data/maps/Route111/scripts.pory"

# 1213 "data/maps/Route111/scripts.pory"
Route111_Text_ViviDefeat:
# 1214 "data/maps/Route111/scripts.pory"
	.string "Huh? Did I just lose?$"
# 1215 "data/maps/Route111/scripts.pory"

# 1216 "data/maps/Route111/scripts.pory"
Route111_Text_ViviPostBattle:
# 1217 "data/maps/Route111/scripts.pory"
	.string "This stinks…\p"
# 1218 "data/maps/Route111/scripts.pory"
	.string "…Snivel… Grandma!$"
# 1219 "data/maps/Route111/scripts.pory"

# 1220 "data/maps/Route111/scripts.pory"
Route111_Text_VickyIntro:
# 1221 "data/maps/Route111/scripts.pory"
	.string "How dare you make my granddaughter\n"
# 1222 "data/maps/Route111/scripts.pory"
	.string "cry!\p"
# 1223 "data/maps/Route111/scripts.pory"
	.string "For that, I'm going to smack you!\n"
# 1224 "data/maps/Route111/scripts.pory"
	.string "Prepare to lose!$"
# 1225 "data/maps/Route111/scripts.pory"

# 1226 "data/maps/Route111/scripts.pory"
Route111_Text_VickyDefeat:
# 1227 "data/maps/Route111/scripts.pory"
	.string "Kwah! You are strong…\n"
# 1228 "data/maps/Route111/scripts.pory"
	.string "My granddaughter was right…$"
# 1229 "data/maps/Route111/scripts.pory"

# 1230 "data/maps/Route111/scripts.pory"
Route111_Text_VickyPostBattle:
# 1231 "data/maps/Route111/scripts.pory"
	.string "If you're not in any hurry,\n"
# 1232 "data/maps/Route111/scripts.pory"
	.string "visit with us awhile.$"
# 1233 "data/maps/Route111/scripts.pory"

# 1234 "data/maps/Route111/scripts.pory"
Route111_Text_ToughToKeepWinningUpTheRanks:
# 1235 "data/maps/Route111/scripts.pory"
	.string "If you don't raise your POKéMON some\n"
# 1236 "data/maps/Route111/scripts.pory"
	.string "more, it could be tough to keep winning\l"
# 1237 "data/maps/Route111/scripts.pory"
	.string "up through the ranks.\p"
# 1238 "data/maps/Route111/scripts.pory"
	.string "I've heard the POKéMON LEAGUE's\n"
# 1239 "data/maps/Route111/scripts.pory"
	.string "ELITE FOUR are far stronger than\l"
# 1240 "data/maps/Route111/scripts.pory"
	.string "any GYM LEADER.$"
# 1241 "data/maps/Route111/scripts.pory"

# 1242 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateFamilyDestroyedMe:
# 1243 "data/maps/Route111/scripts.pory"
	.string "I challenged the WINSTRATE family,\n"
# 1244 "data/maps/Route111/scripts.pory"
	.string "but four matches in a row is tough\l"
# 1245 "data/maps/Route111/scripts.pory"
	.string "going… They destroyed me.$"
# 1246 "data/maps/Route111/scripts.pory"

# 1247 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSignMauville:
# 1248 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 1249 "data/maps/Route111/scripts.pory"
	.string "{DOWN_ARROW} MAUVILLE CITY$"
# 1250 "data/maps/Route111/scripts.pory"

# 1251 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateHouseSign:
# 1252 "data/maps/Route111/scripts.pory"
	.string "“Our family's hearts beat as one!”\n"
# 1253 "data/maps/Route111/scripts.pory"
	.string "THE WINSTRATE'S HOUSE$"
# 1254 "data/maps/Route111/scripts.pory"

# 1255 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign112:
# 1256 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 1257 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 112$"
# 1258 "data/maps/Route111/scripts.pory"

# 1259 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign113:
# 1260 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 1261 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 113$"
# 1262 "data/maps/Route111/scripts.pory"

# 1263 "data/maps/Route111/scripts.pory"
Route111_Text_OldLadysRestStopSign:
# 1264 "data/maps/Route111/scripts.pory"
	.string "OLD LADY'S REST STOP\n"
# 1265 "data/maps/Route111/scripts.pory"
	.string "“Come in and rest your tired bones.”$"
# 1266 "data/maps/Route111/scripts.pory"

# 1267 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerTipsSpAtkSpDef:
# 1268 "data/maps/Route111/scripts.pory"
	.string "TRAINER TIPS\p"
# 1269 "data/maps/Route111/scripts.pory"
	.string "One of the indicators of a POKéMON's\n"
# 1270 "data/maps/Route111/scripts.pory"
	.string "powerfulness is SP. ATK. It stands for\l"
# 1271 "data/maps/Route111/scripts.pory"
	.string "“SPECIAL ATTACK.”\p"
# 1272 "data/maps/Route111/scripts.pory"
	.string "Likewise, SP. DEF stands for “SPECIAL\n"
# 1273 "data/maps/Route111/scripts.pory"
	.string "DEFENSE.”$"
# 1274 "data/maps/Route111/scripts.pory"

# 1275 "data/maps/Route111/scripts.pory"
Route111_Text_ShouldBeMirageTowerAroundHere:
# 1276 "data/maps/Route111/scripts.pory"
	.string "There should be a tower made of sand\n"
# 1277 "data/maps/Route111/scripts.pory"
	.string "around here somewhere.\p"
# 1278 "data/maps/Route111/scripts.pory"
	.string "But for some reason, it can be seen\n"
# 1279 "data/maps/Route111/scripts.pory"
	.string "sometimes, and sometimes not.\p"
# 1280 "data/maps/Route111/scripts.pory"
	.string "That's why I call it the MIRAGE TOWER.$"
# 1281 "data/maps/Route111/scripts.pory"

# 1282 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerClearlyVisible:
# 1283 "data/maps/Route111/scripts.pory"
	.string "I see it!\n"
# 1284 "data/maps/Route111/scripts.pory"
	.string "The tower of sand!\p"
# 1285 "data/maps/Route111/scripts.pory"
	.string "The sand tower they called a mirage\n"
# 1286 "data/maps/Route111/scripts.pory"
	.string "is clearly visible!\p"
# 1287 "data/maps/Route111/scripts.pory"
	.string "But it looks so fragile…\n"
# 1288 "data/maps/Route111/scripts.pory"
	.string "It could crumble away anytime…\p"
# 1289 "data/maps/Route111/scripts.pory"
	.string "I want to go inside it, but I can't\n"
# 1290 "data/maps/Route111/scripts.pory"
	.string "get my courage up for it…$"
# 1291 "data/maps/Route111/scripts.pory"

# 1292 "data/maps/Route111/scripts.pory"
Route111_Text_ThatWasShockingSandRainedDown:
# 1293 "data/maps/Route111/scripts.pory"
	.string "Whoa…\n"
# 1294 "data/maps/Route111/scripts.pory"
	.string "That was shocking.\p"
# 1295 "data/maps/Route111/scripts.pory"
	.string "Sand rained down in chunks all of\n"
# 1296 "data/maps/Route111/scripts.pory"
	.string "a sudden.\p"
# 1297 "data/maps/Route111/scripts.pory"
	.string "What was it like inside?\n"
# 1298 "data/maps/Route111/scripts.pory"
	.string "Were there sandy ghosts and such?$"
# 1299 "data/maps/Route111/scripts.pory"

# 1300 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerHasntBeenSeenSince:
# 1301 "data/maps/Route111/scripts.pory"
	.string "Since I spoke to you, the tower of sand\n"
# 1302 "data/maps/Route111/scripts.pory"
	.string "hasn't been seen.\p"
# 1303 "data/maps/Route111/scripts.pory"
	.string "Perhaps it really was\n"
# 1304 "data/maps/Route111/scripts.pory"
	.string "the MIRAGE TOWER…$"
# 1305 "data/maps/Route111/scripts.pory"

# 1306 "data/maps/Route111/scripts.pory"
Route111_Text_ClawFossilDisappeared:
# 1307 "data/maps/Route111/scripts.pory"
	.string "The CLAW FOSSIL disappeared into\n"
# 1308 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 1309 "data/maps/Route111/scripts.pory"

# 1310 "data/maps/Route111/scripts.pory"
Route111_Text_RootFossilDisappeared:
# 1311 "data/maps/Route111/scripts.pory"
	.string "The ROOT FOSSIL disappeared into\n"
# 1312 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 1313 "data/maps/Route111/scripts.pory"

# 1314 "data/maps/Route111/scripts.pory"
Route111_Text_MauvilleUncleToldMeToTakeRockSmash:
# 1315 "data/maps/Route111/scripts.pory"
	.string "Oh, no!\p"
# 1316 "data/maps/Route111/scripts.pory"
	.string "My uncle in MAUVILLE told me to take\n"
# 1317 "data/maps/Route111/scripts.pory"
	.string "ROCK SMASH with me if I was going to\l"
# 1318 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111!\p"
# 1319 "data/maps/Route111/scripts.pory"
	.string "My uncle? He lives across from\n"
# 1320 "data/maps/Route111/scripts.pory"
	.string "the bike shop in MAUVILLE.$"
# 1321 "data/maps/Route111/scripts.pory"

# 1322 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerHillSign:
# 1323 "data/maps/Route111/scripts.pory"
	.string "{RIGHT_ARROW} TRAINER HILL ENTRANCE\p"
# 1324 "data/maps/Route111/scripts.pory"
	.string "“Scale the heights, you hot-blooded\n"
# 1325 "data/maps/Route111/scripts.pory"
	.string "TRAINERS!”$"

Route111_EventScript_TriggerLeft_Text_0:
# 298 "data/maps/Route111/scripts.pory"
	.string "YAAAHOOOOOOOO!$"

Route111_EventScript_SecretBaseTriggerLeft_Text_0:
# 610 "data/maps/Route111/scripts.pory"
	.string "Wait up, {PLAYER}!$"

Route111_Text_SpencerAllTheCommotion::
# 536 "data/maps/Route111/scripts.pory"
	.string "SPENCER: So that's what all the\n"
	.string "commotion is about!\p"
	.string "You sure don't hold back, do you?\p"
	.string "You'd better prepare yourself.\n"
	.string "She may be old, but that grandma sure\l"
	.string "has a lot of energy!$"

Route111_Text_BrenAllTheCommotion::
# 543 "data/maps/Route111/scripts.pory"
	.string "BREN: So that's what all the commotion\n"
	.string "is about!\p"
	.string "You sure don't hold back, do you?\p"
	.string "You'd better prepare yourself.\n"
	.string "She may be old, but that grandma sure\l"
	.string "has a lot of energy!$"

Route111_Text_KyleAllTheCommotion::
# 550 "data/maps/Route111/scripts.pory"
	.string "KYLE: So that's what all the commotion\n"
	.string "is about!\p"
	.string "You sure don't hold back, do you?\p"
	.string "You'd better prepare yourself.\n"
	.string "She may be old, but that grandma sure\l"
	.string "has a lot of energy!$"

Route111_Text_SpencerDontWorryGranny::
# 557 "data/maps/Route111/scripts.pory"
	.string "SPENCER: Don't worry, granny.\n"
	.string "I'm on your side!$"

Route111_Text_BrenDontWorryGranny::
# 562 "data/maps/Route111/scripts.pory"
	.string "BREN: Don't worry, granny.\n"
	.string "I'm on your side!$"

Route111_Text_KyleDontWorryGranny::
# 567 "data/maps/Route111/scripts.pory"
	.string "KYLE: Don't worry, granny.\n"
	.string "I'm on your side!$"

Route111_Text_SpencerPostBattle::
# 572 "data/maps/Route111/scripts.pory"
	.string "No way!\n"
	.string "I can't believe it!$"

Route111_Text_BrenPostBattle::
# 577 "data/maps/Route111/scripts.pory"
	.string "No way!\n"
	.string "I can't believe it!$"

Route111_Text_KylePostBattle::
# 582 "data/maps/Route111/scripts.pory"
	.string "No way!\n"
	.string "I can't believe it!$"

Route111_Text_SpencerLoveToChatYouUp::
# 587 "data/maps/Route111/scripts.pory"
	.string "SPENCER: You beat me and that whole\n"
	.string "family without even needing a single\l"
	.string "break!\p"
	.string "You must have one heck of a training\n"
	.string "regimen.\p"
	.string "I'm sure the WINSTRATES would love to\n"
	.string "chat you up if you have the time.\p"
	.string "They're a pretty cool bunch!$"

Route111_Text_BrenLoveToChatYouUp::
# 594 "data/maps/Route111/scripts.pory"
	.string "BREN: You beat me and that whole family\n"
	.string "without even needing a single break!\p"
	.string "You must have one heck of a training\n"
	.string "regimen.\p"
	.string "I'm sure the WINSTRATES would love to\n"
	.string "chat you up if you have the time.\p"
	.string "They're a pretty cool bunch!$"

Route111_Text_KyleLoveToChatYouUp::
# 601 "data/maps/Route111/scripts.pory"
	.string "KYLE: You beat me and that whole family\n"
	.string "without even needing a single break!\p"
	.string "You must have one heck of a training\n"
	.string "regimen.\p"
	.string "I'm sure the WINSTRATES would love to\n"
	.string "chat you up if you have the time.\p"
	.string "They're a pretty cool bunch!$"

Route111_Text_SpencerTryingToCatchUp::
# 841 "data/maps/Route111/scripts.pory"
	.string "SPENCER: You sure know how to travel\n"
	.string "fast.\p"
	.string "We've been trying to catch up with you\n"
	.string "for a while.$"

Route111_Text_BrenTryingToCatchUp::
# 846 "data/maps/Route111/scripts.pory"
	.string "BREN: You sure know how to travel fast.\p"
	.string "We've been trying to catch up with you\n"
	.string "for a while.$"

Route111_Text_KyleTryingToCatchUp::
# 851 "data/maps/Route111/scripts.pory"
	.string "KYLE: You sure know how to travel fast.\p"
	.string "We've been trying to catch up with you\n"
	.string "for a while.$"

Route111_Text_NoBike::
# 856 "data/maps/Route111/scripts.pory"
	.string "How did you get so far ahead of us\n"
	.string "without a bike? Who knows how fast you\l"
	.string "could go if you got a bike from the shop\l"
	.string "in MAUVILLE!$"

Route111_Text_SpencerSpiritOfAdventure::
# 861 "data/maps/Route111/scripts.pory"
	.string "SPENCER: Don't worry about it!\n"
	.string "We know you have the spirit of\l"
	.string "adventure in you, {PLAYER}.\l"
	.string "Half the fun is in exploring new areas,\l"
	.string "am I right?\p"
	.string "We still have a lot of ground left to\n"
	.string "cover on our journey, so why not enjoy\l"
	.string "it?$"

Route111_Text_BrenSpiritOfAdventure::
# 868 "data/maps/Route111/scripts.pory"
	.string "BREN: Don't worry about it!\n"
	.string "We know you have the spirit of\l"
	.string "adventure in you, {PLAYER}.\l"
	.string "Half the fun is in exploring new areas,\l"
	.string "am I right?\p"
	.string "We still have a lot of ground left to\n"
	.string "cover on our journey, so why not enjoy\l"
	.string "it?$"

Route111_Text_KyleSpiritOfAdventure::
# 875 "data/maps/Route111/scripts.pory"
	.string "KYLE: Don't worry about it!\n"
	.string "We know you have the spirit of\l"
	.string "adventure in you, {PLAYER}.\l"
	.string "Half the fun is in exploring new areas,\l"
	.string "am I right?\p"
	.string "We still have a lot of ground left to\n"
	.string "cover on our journey, so why not enjoy\l"
	.string "it?$"

Route111_Text_MoreThanTheySeem::
# 882 "data/maps/Route111/scripts.pory"
	.string "Did I hear that right?\n"
	.string "Sounds to me like I've encountered a\l"
	.string "group of young vagabonds!\p"
	.string "You might be interested to know that\n"
	.string "there are certain places all over the\l"
	.string "region that are more than they seem.$"

Route111_Text_AtFirstGlance::
# 888 "data/maps/Route111/scripts.pory"
	.string "Take, for instance, that tree I was\n"
	.string "looking at earlier.\p"
	.string "At first glance, it may seem ordinary.$"

Route111_Text_TakeALookForYourself::
# 893 "data/maps/Route111/scripts.pory"
	.string "But with the right technique, you can\n"
	.string "reveal your own SECRET BASE inside!\p"
	.string "What's the technique, you ask?\p"
	.string "Here! Take a look for yourself!$"

Route111_Text_AndOneForYou::
# 899 "data/maps/Route111/scripts.pory"
	.string "And one for you!$"

Route111_Text_AndYouAsWell::
# 903 "data/maps/Route111/scripts.pory"
	.string "And you as well!$"

Route111_Text_YoureSpeechless::
# 907 "data/maps/Route111/scripts.pory"
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
# 922 "data/maps/Route111/scripts.pory"
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
# 932 "data/maps/Route111/scripts.pory"
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
# 942 "data/maps/Route111/scripts.pory"
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
# 952 "data/maps/Route111/scripts.pory"
	.string "SPENCER: Now it's your turn to catch up\n"
	.string "to us.\l"
	.string "See you later!$"

Route111_Text_BrenSeeYouLater::
# 957 "data/maps/Route111/scripts.pory"
	.string "BREN: Now it's your turn to catch up to\n"
	.string "us.\l"
	.string "See you later!$"

Route111_Text_KyleSeeYouLater::
# 962 "data/maps/Route111/scripts.pory"
	.string "KYLE: Now it's your turn to catch up to\n"
	.string "us.\l"
	.string "See you later!$"
