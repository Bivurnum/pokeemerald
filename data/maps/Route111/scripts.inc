# 9 "data/maps/Route111/scripts.pory"

# 10 "data/maps/Route111/scripts.pory"
.set LOCALID_VICTOR, 1
# 11 "data/maps/Route111/scripts.pory"
.set LOCALID_VICTORIA, 2
# 12 "data/maps/Route111/scripts.pory"
.set LOCALID_VIVI, 3
# 13 "data/maps/Route111/scripts.pory"
.set LOCALID_VICKY, 4
# 14 "data/maps/Route111/scripts.pory"
.set LOCALID_ROCK_SMASH_MAN, 46
# 15 "data/maps/Route111/scripts.pory"
.set LOCALID_RIVAL1, 47
# 16 "data/maps/Route111/scripts.pory"
.set LOCALID_RIVAL1ONBIKE, 48
# 17 "data/maps/Route111/scripts.pory"

# 18 "data/maps/Route111/scripts.pory"
@ Note: LOCALID_ROUTE111_PLAYER_FALLING is a local id for this map used elsewhere. It's defined in event_objects.h
# 19 "data/maps/Route111/scripts.pory"

# 20 "data/maps/Route111/scripts.pory"
Route111_MapScripts::
# 21 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route111_OnLoad
# 22 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route111_OnTransition
# 23 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route111_OnWarp
# 24 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route111_OnFrame
# 25 "data/maps/Route111/scripts.pory"
	.byte 0
# 26 "data/maps/Route111/scripts.pory"

# 27 "data/maps/Route111/scripts.pory"
Route111_OnLoad:
# 28 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, Route111_EventScript_CloseDesertRuins
# 29 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_ShowTemporaryMirageTower
# 30 "data/maps/Route111/scripts.pory"
	end
# 31 "data/maps/Route111/scripts.pory"

# 32 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseDesertRuins::
# 33 "data/maps/Route111/scripts.pory"
	setmetatile 29, 86, METATILE_General_RockWall_RockBase, TRUE
# 34 "data/maps/Route111/scripts.pory"
	setmetatile 29, 87, METATILE_General_RockWall_SandBase, TRUE
# 35 "data/maps/Route111/scripts.pory"
	return
# 36 "data/maps/Route111/scripts.pory"

# 37 "data/maps/Route111/scripts.pory"
@ Show Mirage Tower just prior to disintegration. Mirage Tower is otherwise handled by the map layout
# 38 "data/maps/Route111/scripts.pory"
Route111_EventScript_ShowTemporaryMirageTower::
# 39 "data/maps/Route111/scripts.pory"
	setmetatile 18, 53, METATILE_Mauville_MirageTower_Tile0, FALSE
# 40 "data/maps/Route111/scripts.pory"
	setmetatile 19, 53, METATILE_Mauville_MirageTower_Tile1, FALSE
# 41 "data/maps/Route111/scripts.pory"
	setmetatile 20, 53, METATILE_Mauville_MirageTower_Tile2, FALSE
# 42 "data/maps/Route111/scripts.pory"
	setmetatile 18, 54, METATILE_Mauville_MirageTower_Tile3, FALSE
# 43 "data/maps/Route111/scripts.pory"
	setmetatile 19, 54, METATILE_Mauville_MirageTower_Tile4, FALSE
# 44 "data/maps/Route111/scripts.pory"
	setmetatile 20, 54, METATILE_Mauville_MirageTower_Tile5, FALSE
# 45 "data/maps/Route111/scripts.pory"
	setmetatile 18, 55, METATILE_Mauville_MirageTower_Tile6, FALSE
# 46 "data/maps/Route111/scripts.pory"
	setmetatile 19, 55, METATILE_Mauville_MirageTower_Tile7, FALSE
# 47 "data/maps/Route111/scripts.pory"
	setmetatile 20, 55, METATILE_Mauville_MirageTower_Tile8, FALSE
# 48 "data/maps/Route111/scripts.pory"
	setmetatile 18, 56, METATILE_Mauville_MirageTower_Tile9, FALSE
# 49 "data/maps/Route111/scripts.pory"
	setmetatile 19, 56, METATILE_Mauville_MirageTower_TileA, FALSE
# 50 "data/maps/Route111/scripts.pory"
	setmetatile 20, 56, METATILE_Mauville_MirageTower_TileB, FALSE
# 51 "data/maps/Route111/scripts.pory"
	setmetatile 18, 57, METATILE_Mauville_MirageTower_TileC, FALSE
# 52 "data/maps/Route111/scripts.pory"
	setmetatile 19, 57, METATILE_Mauville_MirageTower_TileD, FALSE
# 53 "data/maps/Route111/scripts.pory"
	setmetatile 20, 57, METATILE_Mauville_MirageTower_TileE, FALSE
# 54 "data/maps/Route111/scripts.pory"
	setmetatile 18, 58, METATILE_Mauville_MirageTower_TileF, FALSE
# 55 "data/maps/Route111/scripts.pory"
	setmetatile 19, 58, METATILE_Mauville_MirageTower_Tile10, FALSE
# 56 "data/maps/Route111/scripts.pory"
	setmetatile 20, 58, METATILE_Mauville_MirageTower_Tile11, FALSE
# 57 "data/maps/Route111/scripts.pory"
	return
# 58 "data/maps/Route111/scripts.pory"

# 59 "data/maps/Route111/scripts.pory"
Route111_OnTransition:
# 60 "data/maps/Route111/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
# 61 "data/maps/Route111/scripts.pory"
	special SetMirageTowerVisibility
# 62 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_SetLayoutNoMirageTower
# 63 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_SetFallingPlayerGfx
# 64 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_SetMirageTowerGone
# 65 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CheckSetSandstorm
# 66 "data/maps/Route111/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 67 "data/maps/Route111/scripts.pory"
	goto_if_not_defeated TRAINER_VICKY, Route111_EventScript_SetWinstratesNotDefeated
# 68 "data/maps/Route111/scripts.pory"
	end
# 69 "data/maps/Route111/scripts.pory"

# 70 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfx::
# 71 "data/maps/Route111/scripts.pory"
	checkplayergender
# 72 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route111_EventScript_SetFallingPlayerGfxMale
# 73 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route111_EventScript_SetFallingPlayerGfxFemale
# 74 "data/maps/Route111/scripts.pory"
	return
# 75 "data/maps/Route111/scripts.pory"

# 76 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxMale::
# 77 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 78 "data/maps/Route111/scripts.pory"
	return
# 79 "data/maps/Route111/scripts.pory"

# 80 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxFemale::
# 81 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 82 "data/maps/Route111/scripts.pory"
	return
# 83 "data/maps/Route111/scripts.pory"

# 84 "data/maps/Route111/scripts.pory"
Route111_EventScript_CheckSetSandstorm::
# 85 "data/maps/Route111/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 86 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_1, 34, Route111_EventScript_EndCheckSetSandstorm
# 87 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 107, Route111_EventScript_EndCheckSetSandstorm
# 88 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 72, Route111_EventScript_SetSandstorm
# 89 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_0, 2000, Route111_EventScript_EndCheckSetSandstorm
# 90 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_0, 8, Route111_EventScript_EndCheckSetSandstorm
# 91 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetSandstorm::
# 92 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 93 "data/maps/Route111/scripts.pory"
Route111_EventScript_EndCheckSetSandstorm::
# 94 "data/maps/Route111/scripts.pory"
	return
# 95 "data/maps/Route111/scripts.pory"

# 96 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetWinstratesNotDefeated::
# 97 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE
# 98 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE
# 99 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE
# 100 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
# 101 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTOR
# 102 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTORIA
# 103 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VIVI
# 104 "data/maps/Route111/scripts.pory"
	end
# 105 "data/maps/Route111/scripts.pory"

# 106 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetLayoutNoMirageTower::
# 107 "data/maps/Route111/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE111_NO_MIRAGE_TOWER
# 108 "data/maps/Route111/scripts.pory"
	return
# 109 "data/maps/Route111/scripts.pory"

# 110 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetMirageTowerGone::
# 111 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 3
# 112 "data/maps/Route111/scripts.pory"
	return
# 113 "data/maps/Route111/scripts.pory"

# 114 "data/maps/Route111/scripts.pory"
Route111_OnWarp:
# 115 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_HidePlayerForMirageTower
# 116 "data/maps/Route111/scripts.pory"
	.2byte 0
# 117 "data/maps/Route111/scripts.pory"

# 118 "data/maps/Route111/scripts.pory"
Route111_EventScript_HidePlayerForMirageTower::
# 119 "data/maps/Route111/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_LITTLEROOT_TOWN
# 120 "data/maps/Route111/scripts.pory"
	end
# 121 "data/maps/Route111/scripts.pory"

# 122 "data/maps/Route111/scripts.pory"
Route111_OnFrame:
# 123 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_MirageTowerDisappear
# 124 "data/maps/Route111/scripts.pory"
	.2byte 0
# 125 "data/maps/Route111/scripts.pory"

# 126 "data/maps/Route111/scripts.pory"
Route111_EventScript_MirageTowerDisappear::
# 127 "data/maps/Route111/scripts.pory"
	lockall
# 128 "data/maps/Route111/scripts.pory"
	special StartMirageTowerShake
# 129 "data/maps/Route111/scripts.pory"
	waitstate
# 130 "data/maps/Route111/scripts.pory"
	delay 24
# 131 "data/maps/Route111/scripts.pory"
	playse SE_FALL
# 132 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_PLAYER_FALLING
# 133 "data/maps/Route111/scripts.pory"
	special StartPlayerDescendMirageTower
# 134 "data/maps/Route111/scripts.pory"
	waitstate
# 135 "data/maps/Route111/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_LITTLEROOT_TOWN
# 136 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_PLAYER_FALLING
# 137 "data/maps/Route111/scripts.pory"
	delay 16
# 138 "data/maps/Route111/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 139 "data/maps/Route111/scripts.pory"
	delay 16
# 140 "data/maps/Route111/scripts.pory"
	special StartMirageTowerDisintegration
# 141 "data/maps/Route111/scripts.pory"
	waitstate
# 142 "data/maps/Route111/scripts.pory"
	special StartMirageTowerFossilFallAndSink
# 143 "data/maps/Route111/scripts.pory"
	waitstate
# 144 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 2
# 145 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_DESERT_UNDERPASS_FOSSIL
# 146 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_CHOSE_CLAW_FOSSIL, Route111_EventScript_RootFossilDisappeared
# 147 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ClawFossilDisappeared, MSGBOX_DEFAULT
# 148 "data/maps/Route111/scripts.pory"
	releaseall
# 149 "data/maps/Route111/scripts.pory"
	end
# 150 "data/maps/Route111/scripts.pory"

# 151 "data/maps/Route111/scripts.pory"
Route111_EventScript_RootFossilDisappeared::
# 152 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RootFossilDisappeared, MSGBOX_DEFAULT
# 153 "data/maps/Route111/scripts.pory"
	releaseall
# 154 "data/maps/Route111/scripts.pory"
	end
# 155 "data/maps/Route111/scripts.pory"

# 156 "data/maps/Route111/scripts.pory"
@ Unused
# 157 "data/maps/Route111/scripts.pory"
Route111_Movement_PlayerFall::
# 158 "data/maps/Route111/scripts.pory"
	lock_anim
# 159 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 160 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 161 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 162 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 163 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 164 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 165 "data/maps/Route111/scripts.pory"
	step_end
# 166 "data/maps/Route111/scripts.pory"

# 167 "data/maps/Route111/scripts.pory"
Route111_EventScript_Girl::
# 168 "data/maps/Route111/scripts.pory"
	lock
# 169 "data/maps/Route111/scripts.pory"
	faceplayer
# 170 "data/maps/Route111/scripts.pory"
	dotimebasedevents
# 171 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_111_RECEIVED_BERRY, Route111_EventScript_ReceivedBerry
# 172 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WateredPlantsEveryDayTakeBerry, MSGBOX_DEFAULT
# 173 "data/maps/Route111/scripts.pory"
	giveitem ITEM_RAZZ_BERRY
# 174 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 175 "data/maps/Route111/scripts.pory"
	setflag FLAG_DAILY_ROUTE_111_RECEIVED_BERRY
# 176 "data/maps/Route111/scripts.pory"
	special GetPlayerBigGuyGirlString
# 177 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_GoingToTryToMakeDifferentColorBerries, MSGBOX_DEFAULT
# 178 "data/maps/Route111/scripts.pory"
	release
# 179 "data/maps/Route111/scripts.pory"
	end
# 180 "data/maps/Route111/scripts.pory"

# 181 "data/maps/Route111/scripts.pory"
Route111_EventScript_ReceivedBerry::
# 182 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WhatColorBerriesToLookForToday, MSGBOX_DEFAULT
# 183 "data/maps/Route111/scripts.pory"
	release
# 184 "data/maps/Route111/scripts.pory"
	end
# 185 "data/maps/Route111/scripts.pory"

# 186 "data/maps/Route111/scripts.pory"
@ Unused
# 187 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerUp::
# 188 "data/maps/Route111/scripts.pory"
	lockall
# 189 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 0
# 190 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 191 "data/maps/Route111/scripts.pory"
	end
# 192 "data/maps/Route111/scripts.pory"

# 193 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerDown::
# 194 "data/maps/Route111/scripts.pory"
	lockall
# 195 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 1
# 196 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 197 "data/maps/Route111/scripts.pory"
	end
# 198 "data/maps/Route111/scripts.pory"

# 199 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerLeft::
# 200 "data/maps/Route111/scripts.pory"
	lockall
# 201 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 2
# 202 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 203 "data/maps/Route111/scripts.pory"
	end
# 204 "data/maps/Route111/scripts.pory"

# 205 "data/maps/Route111/scripts.pory"
@ Unused
# 206 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerRight::
# 207 "data/maps/Route111/scripts.pory"
	lockall
# 208 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 3
# 209 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 210 "data/maps/Route111/scripts.pory"
	end
# 211 "data/maps/Route111/scripts.pory"

# 212 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTrigger::
# 213 "data/maps/Route111/scripts.pory"
	checkitem ITEM_GO_GOGGLES
# 214 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route111_EventScript_PreventRouteAccess
# 215 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 1
# 216 "data/maps/Route111/scripts.pory"
	releaseall
# 217 "data/maps/Route111/scripts.pory"
	end
# 218 "data/maps/Route111/scripts.pory"

# 219 "data/maps/Route111/scripts.pory"
Route111_EventScript_PreventRouteAccess::
# 220 "data/maps/Route111/scripts.pory"
	msgbox gText_SandstormIsVicious, MSGBOX_DEFAULT
# 221 "data/maps/Route111/scripts.pory"
	closemessage
# 222 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 0, Route111_EventScript_PushUpFromRoute
# 223 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 1, Route111_EventScript_PushDownFromRoute
# 224 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 2, Route111_EventScript_PushLeftFromRoute
# 225 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 3, Route111_EventScript_PushRightFromRoute
# 226 "data/maps/Route111/scripts.pory"
	releaseall
# 227 "data/maps/Route111/scripts.pory"
	end
# 228 "data/maps/Route111/scripts.pory"

# 229 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushUpFromRoute::
# 230 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushUpFromRoute
# 231 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 232 "data/maps/Route111/scripts.pory"
	return
# 233 "data/maps/Route111/scripts.pory"

# 234 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushDownFromRoute::
# 235 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushDownFromRoute
# 236 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 237 "data/maps/Route111/scripts.pory"
	return
# 238 "data/maps/Route111/scripts.pory"

# 239 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushLeftFromRoute::
# 240 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushLeftFromRoute
# 241 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 242 "data/maps/Route111/scripts.pory"
	return
# 243 "data/maps/Route111/scripts.pory"

# 244 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushRightFromRoute::
# 245 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushRightFromRoute
# 246 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 247 "data/maps/Route111/scripts.pory"
	return
# 248 "data/maps/Route111/scripts.pory"

# 249 "data/maps/Route111/scripts.pory"
Route111_Movement_PushUpFromRoute:
# 250 "data/maps/Route111/scripts.pory"
	walk_up
# 251 "data/maps/Route111/scripts.pory"
	step_end
# 252 "data/maps/Route111/scripts.pory"

# 253 "data/maps/Route111/scripts.pory"
Route111_Movement_PushDownFromRoute:
# 254 "data/maps/Route111/scripts.pory"
	walk_down
# 255 "data/maps/Route111/scripts.pory"
	step_end
# 256 "data/maps/Route111/scripts.pory"

# 257 "data/maps/Route111/scripts.pory"
Route111_Movement_PushLeftFromRoute:
# 258 "data/maps/Route111/scripts.pory"
	walk_left
# 259 "data/maps/Route111/scripts.pory"
	step_end
# 260 "data/maps/Route111/scripts.pory"

# 261 "data/maps/Route111/scripts.pory"
Route111_Movement_PushRightFromRoute:
# 262 "data/maps/Route111/scripts.pory"
	walk_right
# 263 "data/maps/Route111/scripts.pory"
	step_end
# 264 "data/maps/Route111/scripts.pory"

# 265 "data/maps/Route111/scripts.pory"
Route111_EventScript_SunTrigger::
# 266 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SUNNY
# 267 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_ROUTE110
# 268 "data/maps/Route111/scripts.pory"
	doweather
# 269 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 0
# 270 "data/maps/Route111/scripts.pory"
	end
# 271 "data/maps/Route111/scripts.pory"

# 272 "data/maps/Route111/scripts.pory"
Route111_EventScript_SandstormTrigger::
# 273 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 274 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_DESERT
# 275 "data/maps/Route111/scripts.pory"
	doweather
# 276 "data/maps/Route111/scripts.pory"
	end

Route111_EventScript_TriggerLeft::
# 280 "data/maps/Route111/scripts.pory"
	lock
# 281 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_BIKE_SHOP_RIVALS
# 282 "data/maps/Route111/scripts.pory"
	setobjectxyperm 48, 22, 133
# 283 "data/maps/Route111/scripts.pory"
	addobject 48
# 284 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 285 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 286 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PlayerWatchRidePastLeft
# 287 "data/maps/Route111/scripts.pory"
	applymovement 48, Route111_Movement_Rival1RidePast
# 288 "data/maps/Route111/scripts.pory"
	msgboxtimed Route111_EventScript_TriggerLeft_Text_0, 90
# 289 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 290 "data/maps/Route111/scripts.pory"
	removeobject 48
# 291 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_BIKE_SHOP_RIVALS
# 292 "data/maps/Route111/scripts.pory"
	setvar VAR_MAUVILLE_BIKE_SHOP_STATE, 3
# 293 "data/maps/Route111/scripts.pory"
	release
	end


Route111_EventScript_TriggerMiddleAndRight::
# 298 "data/maps/Route111/scripts.pory"
	lock
# 299 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_BIKE_SHOP_RIVALS
# 300 "data/maps/Route111/scripts.pory"
	addobject 48
# 301 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 302 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 303 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PlayerWatchRidePast
# 304 "data/maps/Route111/scripts.pory"
	applymovement 48, Route111_Movement_Rival1RidePast
# 305 "data/maps/Route111/scripts.pory"
	msgboxtimed Route111_EventScript_TriggerLeft_Text_0, 90
# 306 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 307 "data/maps/Route111/scripts.pory"
	removeobject 48
# 308 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_BIKE_SHOP_RIVALS
# 309 "data/maps/Route111/scripts.pory"
	setvar VAR_MAUVILLE_BIKE_SHOP_STATE, 3
# 310 "data/maps/Route111/scripts.pory"
	release
	end


# 314 "data/maps/Route111/scripts.pory"
Route111_Movement_PlayerWatchRidePast:
# 315 "data/maps/Route111/scripts.pory"
	delay_16
# 316 "data/maps/Route111/scripts.pory"
	delay_4
# 316 "data/maps/Route111/scripts.pory"
	delay_4
# 316 "data/maps/Route111/scripts.pory"
	delay_4
# 317 "data/maps/Route111/scripts.pory"
	face_left
# 318 "data/maps/Route111/scripts.pory"
	delay_4
# 319 "data/maps/Route111/scripts.pory"
	face_up
	step_end

# 322 "data/maps/Route111/scripts.pory"
Route111_Movement_PlayerWatchRidePastLeft:
# 323 "data/maps/Route111/scripts.pory"
	delay_16
# 324 "data/maps/Route111/scripts.pory"
	delay_4
# 324 "data/maps/Route111/scripts.pory"
	delay_4
# 324 "data/maps/Route111/scripts.pory"
	delay_4
# 325 "data/maps/Route111/scripts.pory"
	face_right
# 326 "data/maps/Route111/scripts.pory"
	delay_4
# 327 "data/maps/Route111/scripts.pory"
	face_up
	step_end

# 330 "data/maps/Route111/scripts.pory"
Route111_Movement_Rival1RidePast:
# 331 "data/maps/Route111/scripts.pory"
	delay_16
# 332 "data/maps/Route111/scripts.pory"
	walk_faster_up
# 332 "data/maps/Route111/scripts.pory"
	walk_faster_up
# 332 "data/maps/Route111/scripts.pory"
	walk_faster_up
# 332 "data/maps/Route111/scripts.pory"
	walk_faster_up
# 332 "data/maps/Route111/scripts.pory"
	walk_faster_up
# 332 "data/maps/Route111/scripts.pory"
	walk_faster_up
# 332 "data/maps/Route111/scripts.pory"
	walk_faster_up
# 332 "data/maps/Route111/scripts.pory"
	walk_faster_up
# 332 "data/maps/Route111/scripts.pory"
	walk_faster_up
# 332 "data/maps/Route111/scripts.pory"
	walk_faster_up
# 332 "data/maps/Route111/scripts.pory"
	walk_faster_up
# 332 "data/maps/Route111/scripts.pory"
	walk_faster_up
# 332 "data/maps/Route111/scripts.pory"
	walk_faster_up
	step_end

Route111_EventScript_Victor::
# 336 "data/maps/Route111/scripts.pory"
	lock
# 337 "data/maps/Route111/scripts.pory"
	faceplayer
# 338 "data/maps/Route111/scripts.pory"
	setflag FLAG_LANDMARK_WINSTRATE_FAMILY
# 339 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BattleOurFamily, MSGBOX_YESNO
# 340 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route111_EventScript_BattleWinstrates
# 341 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IsThatSo, MSGBOX_DEFAULT
# 342 "data/maps/Route111/scripts.pory"
	release
	end


Route111_EventScript_BattleWinstrates::
# 347 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorIntro, MSGBOX_DEFAULT
# 348 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTOR, Route111_Text_VictorDefeat
# 349 "data/maps/Route111/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
# 350 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 351 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 352 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorPostBattle, MSGBOX_DEFAULT
# 353 "data/maps/Route111/scripts.pory"
	closemessage
# 354 "data/maps/Route111/scripts.pory"
	applymovement 1, Route111_Movement_WinstrateEnterHouse
# 355 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 356 "data/maps/Route111/scripts.pory"
	removeobject 1
# 357 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 358 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 359 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 360 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 361 "data/maps/Route111/scripts.pory"
	addobject 2
# 362 "data/maps/Route111/scripts.pory"
	applymovement 2, Route111_Movement_WinstrateExitHouse
# 363 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 364 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 365 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaIntro, MSGBOX_DEFAULT
# 366 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTORIA, Route111_Text_VictoriaDefeat
# 367 "data/maps/Route111/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 368 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 369 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 370 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaPostBattle, MSGBOX_DEFAULT
# 371 "data/maps/Route111/scripts.pory"
	closemessage
# 372 "data/maps/Route111/scripts.pory"
	applymovement 2, Route111_Movement_WinstrateEnterHouse
# 373 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 374 "data/maps/Route111/scripts.pory"
	removeobject 2
# 375 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 376 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 377 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 378 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 379 "data/maps/Route111/scripts.pory"
	addobject 3
# 380 "data/maps/Route111/scripts.pory"
	applymovement 3, Route111_Movement_WinstrateExitHouse
# 381 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 382 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 383 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviIntro, MSGBOX_DEFAULT
# 384 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VIVI, Route111_Text_ViviDefeat
# 385 "data/maps/Route111/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterUp
# 386 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 387 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 388 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviPostBattle, MSGBOX_DEFAULT
# 389 "data/maps/Route111/scripts.pory"
	closemessage
# 390 "data/maps/Route111/scripts.pory"
	applymovement 3, Route111_Movement_WinstrateEnterHouse
# 391 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 392 "data/maps/Route111/scripts.pory"
	removeobject 3
# 393 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 394 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 395 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 396 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 397 "data/maps/Route111/scripts.pory"
	compare VAR_MAUVILLE_BIKE_SHOP_STATE, 3
	goto_if_eq Route111_EventScript_BattleWinstrates_2
# 402 "data/maps/Route111/scripts.pory"
	addobject 4
# 403 "data/maps/Route111/scripts.pory"
	applymovement 4, Route111_Movement_WinstrateExitHouse
# 404 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 405 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 406 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyIntro, MSGBOX_DEFAULT
# 407 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICKY, Route111_Text_VickyDefeat
# 408 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyPostBattle, MSGBOX_DEFAULT
# 409 "data/maps/Route111/scripts.pory"
	closemessage
# 410 "data/maps/Route111/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 411 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 412 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 413 "data/maps/Route111/scripts.pory"
	applymovement 4, Route111_Movement_WinstrateEnterHouse
# 414 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 415 "data/maps/Route111/scripts.pory"
	removeobject 4
# 416 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
Route111_EventScript_BattleWinstrates_1:
# 418 "data/maps/Route111/scripts.pory"
	release
	end

Route111_EventScript_BattleWinstrates_2:
# 398 "data/maps/Route111/scripts.pory"
	setvar VAR_MAUVILLE_BIKE_SHOP_STATE, 4
	goto Route111_EventScript_BattleWinstrates_1


Route111_EventScript_OpenWinstrateDoor::
# 423 "data/maps/Route111/scripts.pory"
	opendoor 13, 113
# 424 "data/maps/Route111/scripts.pory"
	waitdooranim
	return


Route111_EventScript_CloseWinstrateDoor::
# 429 "data/maps/Route111/scripts.pory"
	closedoor 13, 113
# 430 "data/maps/Route111/scripts.pory"
	waitdooranim
	return


# 434 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateEnterHouse:
# 435 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_up
# 436 "data/maps/Route111/scripts.pory"
	walk_up
	step_end

# 439 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateExitHouse:
# 440 "data/maps/Route111/scripts.pory"
	walk_down
	step_end

# 443 "data/maps/Route111/scripts.pory"
Route111_Movement_WaitForNextWinstrate:
# 444 "data/maps/Route111/scripts.pory"
	delay_16
# 445 "data/maps/Route111/scripts.pory"
	delay_16
# 446 "data/maps/Route111/scripts.pory"
	delay_16
	step_end

# 449 "data/maps/Route111/scripts.pory"

# 450 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSignMauville::
# 451 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSignMauville, MSGBOX_SIGN
# 452 "data/maps/Route111/scripts.pory"
	end
# 453 "data/maps/Route111/scripts.pory"

# 454 "data/maps/Route111/scripts.pory"
Route111_EventScript_WinstrateHouseSign::
# 455 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateHouseSign, MSGBOX_SIGN
# 456 "data/maps/Route111/scripts.pory"
	end
# 457 "data/maps/Route111/scripts.pory"

# 458 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign112::
# 459 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign112, MSGBOX_SIGN
# 460 "data/maps/Route111/scripts.pory"
	end
# 461 "data/maps/Route111/scripts.pory"

# 462 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign113::
# 463 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign113, MSGBOX_SIGN
# 464 "data/maps/Route111/scripts.pory"
	end
# 465 "data/maps/Route111/scripts.pory"

# 466 "data/maps/Route111/scripts.pory"
Route111_EventScript_OldLadysRestStopSign::
# 467 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_OldLadysRestStopSign, MSGBOX_SIGN
# 468 "data/maps/Route111/scripts.pory"
	end
# 469 "data/maps/Route111/scripts.pory"

# 470 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerTipsSpAtkSpDef::
# 471 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerTipsSpAtkSpDef, MSGBOX_SIGN
# 472 "data/maps/Route111/scripts.pory"
	end
# 473 "data/maps/Route111/scripts.pory"

# 474 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man1::
# 475 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ToughToKeepWinningUpTheRanks, MSGBOX_NPC
# 476 "data/maps/Route111/scripts.pory"
	end
# 477 "data/maps/Route111/scripts.pory"

# 478 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man2::
# 479 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateFamilyDestroyedMe, MSGBOX_NPC
# 480 "data/maps/Route111/scripts.pory"
	end
# 481 "data/maps/Route111/scripts.pory"

# 482 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hiker::
# 483 "data/maps/Route111/scripts.pory"
	lock
# 484 "data/maps/Route111/scripts.pory"
	faceplayer
# 485 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 3, Route111_EventScript_HikerMirageTowerGone
# 486 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_HikerMirageTowerDisintegrated
# 487 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_HikerMirageTowerVisible
# 488 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ShouldBeMirageTowerAroundHere, MSGBOX_DEFAULT
# 489 "data/maps/Route111/scripts.pory"
	release
# 490 "data/maps/Route111/scripts.pory"
	end
# 491 "data/maps/Route111/scripts.pory"

# 492 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerGone::
# 493 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerHasntBeenSeenSince, MSGBOX_DEFAULT
# 494 "data/maps/Route111/scripts.pory"
	release
# 495 "data/maps/Route111/scripts.pory"
	end
# 496 "data/maps/Route111/scripts.pory"

# 497 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerDisintegrated::
# 498 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ThatWasShockingSandRainedDown, MSGBOX_DEFAULT
# 499 "data/maps/Route111/scripts.pory"
	release
# 500 "data/maps/Route111/scripts.pory"
	end
# 501 "data/maps/Route111/scripts.pory"

# 502 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerVisible::
# 503 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerClearlyVisible, MSGBOX_DEFAULT
# 504 "data/maps/Route111/scripts.pory"
	release
# 505 "data/maps/Route111/scripts.pory"
	end
# 506 "data/maps/Route111/scripts.pory"

# 507 "data/maps/Route111/scripts.pory"
Route111_EventScript_RockSmashTipFatMan::
# 508 "data/maps/Route111/scripts.pory"
	lockall
# 509 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROCK_SMASH_MAN, Common_Movement_FacePlayer
# 510 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 511 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MauvilleUncleToldMeToTakeRockSmash, MSGBOX_DEFAULT
# 512 "data/maps/Route111/scripts.pory"
	closemessage
# 513 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROCK_SMASH_MAN, Common_Movement_FaceOriginalDirection
# 514 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 515 "data/maps/Route111/scripts.pory"
	releaseall
# 516 "data/maps/Route111/scripts.pory"
	end
# 517 "data/maps/Route111/scripts.pory"

# 518 "data/maps/Route111/scripts.pory"
Route111_EventScript_Drew::
# 519 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DREW, Route111_Text_DrewIntro, Route111_Text_DrewDefeat
# 520 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DrewPostBattle, MSGBOX_AUTOCLOSE
# 521 "data/maps/Route111/scripts.pory"
	end
# 522 "data/maps/Route111/scripts.pory"

# 523 "data/maps/Route111/scripts.pory"
Route111_EventScript_Heidi::
# 524 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HEIDI, Route111_Text_HeidiIntro, Route111_Text_HeidiDefeat
# 525 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HeidiPostBattle, MSGBOX_AUTOCLOSE
# 526 "data/maps/Route111/scripts.pory"
	end
# 527 "data/maps/Route111/scripts.pory"

# 528 "data/maps/Route111/scripts.pory"
Route111_EventScript_Beau::
# 529 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BEAU, Route111_Text_BeauIntro, Route111_Text_BeauDefeat
# 530 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
# 531 "data/maps/Route111/scripts.pory"
	end
# 532 "data/maps/Route111/scripts.pory"

# 533 "data/maps/Route111/scripts.pory"
Route111_EventScript_Becky::
# 534 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BECKY, Route111_Text_BeckyIntro, Route111_Text_BeckyDefeat
# 535 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeckyPostBattle, MSGBOX_AUTOCLOSE
# 536 "data/maps/Route111/scripts.pory"
	end
# 537 "data/maps/Route111/scripts.pory"

# 538 "data/maps/Route111/scripts.pory"
Route111_EventScript_Dusty::
# 539 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_1, Route111_Text_DustyIntro, Route111_Text_DustyDefeat, Route111_EventScript_RegisterDusty
# 540 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 541 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchDusty
# 542 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostBattle, MSGBOX_DEFAULT
# 543 "data/maps/Route111/scripts.pory"
	release
# 544 "data/maps/Route111/scripts.pory"
	end
# 545 "data/maps/Route111/scripts.pory"

# 546 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterDusty::
# 547 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 548 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 549 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyRegister, MSGBOX_DEFAULT
# 550 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_DUSTY_1
# 551 "data/maps/Route111/scripts.pory"
	release
# 552 "data/maps/Route111/scripts.pory"
	end
# 553 "data/maps/Route111/scripts.pory"

# 554 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchDusty::
# 555 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_DUSTY_1, Route111_Text_DustyRematchIntro, Route111_Text_DustyRematchDefeat
# 556 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostRematch, MSGBOX_AUTOCLOSE
# 557 "data/maps/Route111/scripts.pory"
	end
# 558 "data/maps/Route111/scripts.pory"

# 559 "data/maps/Route111/scripts.pory"
Route111_EventScript_Travis::
# 560 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TRAVIS, Route111_Text_TravisIntro, Route111_Text_TravisDefeat
# 561 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
# 562 "data/maps/Route111/scripts.pory"
	end
# 563 "data/maps/Route111/scripts.pory"

# 564 "data/maps/Route111/scripts.pory"
Route111_EventScript_Irene::
# 565 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_IRENE, Route111_Text_IreneIntro, Route111_Text_IreneDefeat
# 566 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IrenePostBattle, MSGBOX_AUTOCLOSE
# 567 "data/maps/Route111/scripts.pory"
	end
# 568 "data/maps/Route111/scripts.pory"

# 569 "data/maps/Route111/scripts.pory"
Route111_EventScript_Daisuke::
# 570 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DAISUKE, Route111_Text_DaisukeIntro, Route111_Text_DaisukeDefeat
# 571 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DaisukePostBattle, MSGBOX_AUTOCLOSE
# 572 "data/maps/Route111/scripts.pory"
	end
# 573 "data/maps/Route111/scripts.pory"

# 574 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wilton::
# 575 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_WILTON_1, Route111_Text_WiltonIntro, Route111_Text_WiltonDefeat, Route111_EventScript_RegisterWilton
# 576 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 577 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchWilton
# 578 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostBattle, MSGBOX_DEFAULT
# 579 "data/maps/Route111/scripts.pory"
	release
# 580 "data/maps/Route111/scripts.pory"
	end
# 581 "data/maps/Route111/scripts.pory"

# 582 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterWilton::
# 583 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 584 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 585 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonRegister, MSGBOX_DEFAULT
# 586 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_WILTON_1
# 587 "data/maps/Route111/scripts.pory"
	release
# 588 "data/maps/Route111/scripts.pory"
	end
# 589 "data/maps/Route111/scripts.pory"

# 590 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchWilton::
# 591 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_WILTON_1, Route111_Text_WiltonRematchIntro, Route111_Text_WiltonRematchDefeat
# 592 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostRematch, MSGBOX_AUTOCLOSE
# 593 "data/maps/Route111/scripts.pory"
	end
# 594 "data/maps/Route111/scripts.pory"

# 595 "data/maps/Route111/scripts.pory"
Route111_EventScript_Brooke::
# 596 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BROOKE_1, Route111_Text_BrookeIntro, Route111_Text_BrookeDefeat, Route111_EventScript_RegisterBrooke
# 597 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 598 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchBrooke
# 599 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostBattle, MSGBOX_DEFAULT
# 600 "data/maps/Route111/scripts.pory"
	release
# 601 "data/maps/Route111/scripts.pory"
	end
# 602 "data/maps/Route111/scripts.pory"

# 603 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterBrooke::
# 604 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 605 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 606 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookeRegister, MSGBOX_DEFAULT
# 607 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_BROOKE_1
# 608 "data/maps/Route111/scripts.pory"
	release
# 609 "data/maps/Route111/scripts.pory"
	end
# 610 "data/maps/Route111/scripts.pory"

# 611 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchBrooke::
# 612 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_BROOKE_1, Route111_Text_BrookeRematchIntro, Route111_Text_BrookeRematchDefeat
# 613 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostRematch, MSGBOX_AUTOCLOSE
# 614 "data/maps/Route111/scripts.pory"
	end
# 615 "data/maps/Route111/scripts.pory"

# 616 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hayden::
# 617 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HAYDEN, Route111_Text_HaydenIntro, Route111_Text_HaydenDefeat
# 618 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HaydenPostBattle, MSGBOX_AUTOCLOSE
# 619 "data/maps/Route111/scripts.pory"
	end
# 620 "data/maps/Route111/scripts.pory"

# 621 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bianca::
# 622 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BIANCA, Route111_Text_BiancaIntro, Route111_Text_BiancaDefeat
# 623 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BiancaPostBattle, MSGBOX_AUTOCLOSE
# 624 "data/maps/Route111/scripts.pory"
	end
# 625 "data/maps/Route111/scripts.pory"

# 626 "data/maps/Route111/scripts.pory"
Route111_EventScript_Tyron::
# 627 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TYRON, Route111_Text_TyronIntro, Route111_Text_TyronDefeat
# 628 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
# 629 "data/maps/Route111/scripts.pory"
	end
# 630 "data/maps/Route111/scripts.pory"

# 631 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celina::
# 632 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELINA, Route111_Text_CelinaIntro, Route111_Text_CelinaDefeat
# 633 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CelinaPostBattle, MSGBOX_AUTOCLOSE
# 634 "data/maps/Route111/scripts.pory"
	end
# 635 "data/maps/Route111/scripts.pory"

# 636 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celia::
# 637 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELIA, Route111_Text_CeliaIntro, Route111_Text_CeliaDefeat
# 638 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CeliaPostBattle, MSGBOX_AUTOCLOSE
# 639 "data/maps/Route111/scripts.pory"
	end
# 640 "data/maps/Route111/scripts.pory"

# 641 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bryan::
# 642 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRYAN, Route111_Text_BryanIntro, Route111_Text_BryanDefeat
# 643 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BryanPostBattle, MSGBOX_AUTOCLOSE
# 644 "data/maps/Route111/scripts.pory"
	end
# 645 "data/maps/Route111/scripts.pory"

# 646 "data/maps/Route111/scripts.pory"
Route111_EventScript_Branden::
# 647 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRANDEN, Route111_Text_BrandenIntro, Route111_Text_BrandenDefeat
# 648 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrandenPostBattle, MSGBOX_AUTOCLOSE
# 649 "data/maps/Route111/scripts.pory"
	end
# 650 "data/maps/Route111/scripts.pory"

# 651 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerHillSign::
# 652 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerHillSign, MSGBOX_SIGN
# 653 "data/maps/Route111/scripts.pory"
	end
# 654 "data/maps/Route111/scripts.pory"

# 655 "data/maps/Route111/scripts.pory"
Route111_Text_BattleOurFamily:
# 656 "data/maps/Route111/scripts.pory"
	.string "Hello! I take it you're a traveler.\p"
# 657 "data/maps/Route111/scripts.pory"
	.string "How's this? What do you say to taking\n"
# 658 "data/maps/Route111/scripts.pory"
	.string "on our family of four in a series of\l"
# 659 "data/maps/Route111/scripts.pory"
	.string "POKéMON battles?$"
# 660 "data/maps/Route111/scripts.pory"

# 661 "data/maps/Route111/scripts.pory"
Route111_Text_IsThatSo:
# 662 "data/maps/Route111/scripts.pory"
	.string "Is that so?\n"
# 663 "data/maps/Route111/scripts.pory"
	.string "Drop in, if you change your mind!$"
# 664 "data/maps/Route111/scripts.pory"

# 665 "data/maps/Route111/scripts.pory"
Route111_Text_VictorIntro:
# 666 "data/maps/Route111/scripts.pory"
	.string "That's the spirit! I like you!$"
# 667 "data/maps/Route111/scripts.pory"

# 668 "data/maps/Route111/scripts.pory"
Route111_Text_VictorDefeat:
# 669 "data/maps/Route111/scripts.pory"
	.string "Aiyah!\n"
# 670 "data/maps/Route111/scripts.pory"
	.string "You're a lot tougher than I expected!$"
# 671 "data/maps/Route111/scripts.pory"

# 672 "data/maps/Route111/scripts.pory"
Route111_Text_VictorPostBattle:
# 673 "data/maps/Route111/scripts.pory"
	.string "Hey, all!\n"
# 674 "data/maps/Route111/scripts.pory"
	.string "I've found a pretty strong TRAINER!$"
# 675 "data/maps/Route111/scripts.pory"

# 676 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaIntro:
# 677 "data/maps/Route111/scripts.pory"
	.string "Oh, my goodness! Aren't you young?\p"
# 678 "data/maps/Route111/scripts.pory"
	.string "You must be quite the TRAINER to beat\n"
# 679 "data/maps/Route111/scripts.pory"
	.string "my husband, though.\p"
# 680 "data/maps/Route111/scripts.pory"
	.string "It's my turn to battle now!$"
# 681 "data/maps/Route111/scripts.pory"

# 682 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaDefeat:
# 683 "data/maps/Route111/scripts.pory"
	.string "Oh, gosh!\n"
# 684 "data/maps/Route111/scripts.pory"
	.string "I can't get over how strong you are!$"
# 685 "data/maps/Route111/scripts.pory"

# 686 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaPostBattle:
# 687 "data/maps/Route111/scripts.pory"
	.string "There's a strong TRAINER here!\n"
# 688 "data/maps/Route111/scripts.pory"
	.string "This one's really strong!$"
# 689 "data/maps/Route111/scripts.pory"

# 690 "data/maps/Route111/scripts.pory"
Route111_Text_ViviIntro:
# 691 "data/maps/Route111/scripts.pory"
	.string "You're stronger than Mommy? Wow!\p"
# 692 "data/maps/Route111/scripts.pory"
	.string "But I'm strong, too!\n"
# 693 "data/maps/Route111/scripts.pory"
	.string "Really! Honestly!$"
# 694 "data/maps/Route111/scripts.pory"

# 695 "data/maps/Route111/scripts.pory"
Route111_Text_ViviDefeat:
# 696 "data/maps/Route111/scripts.pory"
	.string "Huh? Did I just lose?$"
# 697 "data/maps/Route111/scripts.pory"

# 698 "data/maps/Route111/scripts.pory"
Route111_Text_ViviPostBattle:
# 699 "data/maps/Route111/scripts.pory"
	.string "This stinks…\p"
# 700 "data/maps/Route111/scripts.pory"
	.string "…Snivel… Grandma!$"
# 701 "data/maps/Route111/scripts.pory"

# 702 "data/maps/Route111/scripts.pory"
Route111_Text_VickyIntro:
# 703 "data/maps/Route111/scripts.pory"
	.string "How dare you make my granddaughter\n"
# 704 "data/maps/Route111/scripts.pory"
	.string "cry!\p"
# 705 "data/maps/Route111/scripts.pory"
	.string "For that, I'm going to smack you!\n"
# 706 "data/maps/Route111/scripts.pory"
	.string "Prepare to lose!$"
# 707 "data/maps/Route111/scripts.pory"

# 708 "data/maps/Route111/scripts.pory"
Route111_Text_VickyDefeat:
# 709 "data/maps/Route111/scripts.pory"
	.string "Kwah! You are strong…\n"
# 710 "data/maps/Route111/scripts.pory"
	.string "My granddaughter was right…$"
# 711 "data/maps/Route111/scripts.pory"

# 712 "data/maps/Route111/scripts.pory"
Route111_Text_VickyPostBattle:
# 713 "data/maps/Route111/scripts.pory"
	.string "If you're not in any hurry,\n"
# 714 "data/maps/Route111/scripts.pory"
	.string "visit with us awhile.$"
# 715 "data/maps/Route111/scripts.pory"

# 716 "data/maps/Route111/scripts.pory"
Route111_Text_ToughToKeepWinningUpTheRanks:
# 717 "data/maps/Route111/scripts.pory"
	.string "If you don't raise your POKéMON some\n"
# 718 "data/maps/Route111/scripts.pory"
	.string "more, it could be tough to keep winning\l"
# 719 "data/maps/Route111/scripts.pory"
	.string "up through the ranks.\p"
# 720 "data/maps/Route111/scripts.pory"
	.string "I've heard the POKéMON LEAGUE's\n"
# 721 "data/maps/Route111/scripts.pory"
	.string "ELITE FOUR are far stronger than\l"
# 722 "data/maps/Route111/scripts.pory"
	.string "any GYM LEADER.$"
# 723 "data/maps/Route111/scripts.pory"

# 724 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateFamilyDestroyedMe:
# 725 "data/maps/Route111/scripts.pory"
	.string "I challenged the WINSTRATE family,\n"
# 726 "data/maps/Route111/scripts.pory"
	.string "but four matches in a row is tough\l"
# 727 "data/maps/Route111/scripts.pory"
	.string "going… They destroyed me.$"
# 728 "data/maps/Route111/scripts.pory"

# 729 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSignMauville:
# 730 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 731 "data/maps/Route111/scripts.pory"
	.string "{DOWN_ARROW} MAUVILLE CITY$"
# 732 "data/maps/Route111/scripts.pory"

# 733 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateHouseSign:
# 734 "data/maps/Route111/scripts.pory"
	.string "“Our family's hearts beat as one!”\n"
# 735 "data/maps/Route111/scripts.pory"
	.string "THE WINSTRATE'S HOUSE$"
# 736 "data/maps/Route111/scripts.pory"

# 737 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign112:
# 738 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 739 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 112$"
# 740 "data/maps/Route111/scripts.pory"

# 741 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign113:
# 742 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 743 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 113$"
# 744 "data/maps/Route111/scripts.pory"

# 745 "data/maps/Route111/scripts.pory"
Route111_Text_OldLadysRestStopSign:
# 746 "data/maps/Route111/scripts.pory"
	.string "OLD LADY'S REST STOP\n"
# 747 "data/maps/Route111/scripts.pory"
	.string "“Come in and rest your tired bones.”$"
# 748 "data/maps/Route111/scripts.pory"

# 749 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerTipsSpAtkSpDef:
# 750 "data/maps/Route111/scripts.pory"
	.string "TRAINER TIPS\p"
# 751 "data/maps/Route111/scripts.pory"
	.string "One of the indicators of a POKéMON's\n"
# 752 "data/maps/Route111/scripts.pory"
	.string "powerfulness is SP. ATK. It stands for\l"
# 753 "data/maps/Route111/scripts.pory"
	.string "“SPECIAL ATTACK.”\p"
# 754 "data/maps/Route111/scripts.pory"
	.string "Likewise, SP. DEF stands for “SPECIAL\n"
# 755 "data/maps/Route111/scripts.pory"
	.string "DEFENSE.”$"
# 756 "data/maps/Route111/scripts.pory"

# 757 "data/maps/Route111/scripts.pory"
Route111_Text_ShouldBeMirageTowerAroundHere:
# 758 "data/maps/Route111/scripts.pory"
	.string "There should be a tower made of sand\n"
# 759 "data/maps/Route111/scripts.pory"
	.string "around here somewhere.\p"
# 760 "data/maps/Route111/scripts.pory"
	.string "But for some reason, it can be seen\n"
# 761 "data/maps/Route111/scripts.pory"
	.string "sometimes, and sometimes not.\p"
# 762 "data/maps/Route111/scripts.pory"
	.string "That's why I call it the MIRAGE TOWER.$"
# 763 "data/maps/Route111/scripts.pory"

# 764 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerClearlyVisible:
# 765 "data/maps/Route111/scripts.pory"
	.string "I see it!\n"
# 766 "data/maps/Route111/scripts.pory"
	.string "The tower of sand!\p"
# 767 "data/maps/Route111/scripts.pory"
	.string "The sand tower they called a mirage\n"
# 768 "data/maps/Route111/scripts.pory"
	.string "is clearly visible!\p"
# 769 "data/maps/Route111/scripts.pory"
	.string "But it looks so fragile…\n"
# 770 "data/maps/Route111/scripts.pory"
	.string "It could crumble away anytime…\p"
# 771 "data/maps/Route111/scripts.pory"
	.string "I want to go inside it, but I can't\n"
# 772 "data/maps/Route111/scripts.pory"
	.string "get my courage up for it…$"
# 773 "data/maps/Route111/scripts.pory"

# 774 "data/maps/Route111/scripts.pory"
Route111_Text_ThatWasShockingSandRainedDown:
# 775 "data/maps/Route111/scripts.pory"
	.string "Whoa…\n"
# 776 "data/maps/Route111/scripts.pory"
	.string "That was shocking.\p"
# 777 "data/maps/Route111/scripts.pory"
	.string "Sand rained down in chunks all of\n"
# 778 "data/maps/Route111/scripts.pory"
	.string "a sudden.\p"
# 779 "data/maps/Route111/scripts.pory"
	.string "What was it like inside?\n"
# 780 "data/maps/Route111/scripts.pory"
	.string "Were there sandy ghosts and such?$"
# 781 "data/maps/Route111/scripts.pory"

# 782 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerHasntBeenSeenSince:
# 783 "data/maps/Route111/scripts.pory"
	.string "Since I spoke to you, the tower of sand\n"
# 784 "data/maps/Route111/scripts.pory"
	.string "hasn't been seen.\p"
# 785 "data/maps/Route111/scripts.pory"
	.string "Perhaps it really was\n"
# 786 "data/maps/Route111/scripts.pory"
	.string "the MIRAGE TOWER…$"
# 787 "data/maps/Route111/scripts.pory"

# 788 "data/maps/Route111/scripts.pory"
Route111_Text_ClawFossilDisappeared:
# 789 "data/maps/Route111/scripts.pory"
	.string "The CLAW FOSSIL disappeared into\n"
# 790 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 791 "data/maps/Route111/scripts.pory"

# 792 "data/maps/Route111/scripts.pory"
Route111_Text_RootFossilDisappeared:
# 793 "data/maps/Route111/scripts.pory"
	.string "The ROOT FOSSIL disappeared into\n"
# 794 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 795 "data/maps/Route111/scripts.pory"

# 796 "data/maps/Route111/scripts.pory"
Route111_Text_MauvilleUncleToldMeToTakeRockSmash:
# 797 "data/maps/Route111/scripts.pory"
	.string "Oh, no!\p"
# 798 "data/maps/Route111/scripts.pory"
	.string "My uncle in MAUVILLE told me to take\n"
# 799 "data/maps/Route111/scripts.pory"
	.string "ROCK SMASH with me if I was going to\l"
# 800 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111!\p"
# 801 "data/maps/Route111/scripts.pory"
	.string "My uncle? He lives across from\n"
# 802 "data/maps/Route111/scripts.pory"
	.string "the bike shop in MAUVILLE.$"
# 803 "data/maps/Route111/scripts.pory"

# 804 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerHillSign:
# 805 "data/maps/Route111/scripts.pory"
	.string "{RIGHT_ARROW} TRAINER HILL ENTRANCE\p"
# 806 "data/maps/Route111/scripts.pory"
	.string "“Scale the heights, you hot-blooded\n"
# 807 "data/maps/Route111/scripts.pory"
	.string "TRAINERS!”$"

Route111_EventScript_TriggerLeft_Text_0:
# 288 "data/maps/Route111/scripts.pory"
	.string "YAAAHOOOOOOOO!$"
