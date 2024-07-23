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
# 441 "data/maps/Route111/scripts.pory"
	addobject 4
# 442 "data/maps/Route111/scripts.pory"
	applymovement 4, Route111_Movement_WinstrateExitHouse
# 443 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 444 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 445 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyIntro, MSGBOX_DEFAULT
# 446 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICKY, Route111_Text_VickyDefeat
Route111_EventScript_BattleWinstrates_1:
# 448 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyPostBattle, MSGBOX_DEFAULT
# 449 "data/maps/Route111/scripts.pory"
	closemessage
# 450 "data/maps/Route111/scripts.pory"
	compare VAR_MAUVILLE_BIKE_SHOP_STATE, 3
	goto_if_eq Route111_EventScript_BattleWinstrates_6
# 454 "data/maps/Route111/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
Route111_EventScript_BattleWinstrates_5:
# 456 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 457 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 458 "data/maps/Route111/scripts.pory"
	applymovement 4, Route111_Movement_WinstrateEnterHouse
# 459 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 460 "data/maps/Route111/scripts.pory"
	removeobject 4
# 461 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 462 "data/maps/Route111/scripts.pory"
	compare VAR_MAUVILLE_BIKE_SHOP_STATE, 3
	goto_if_eq Route111_EventScript_BattleWinstrates_15
Route111_EventScript_BattleWinstrates_14:
# 476 "data/maps/Route111/scripts.pory"
	release
	end

Route111_EventScript_BattleWinstrates_2:
# 398 "data/maps/Route111/scripts.pory"
	addobject 47
# 399 "data/maps/Route111/scripts.pory"
	applymovement 47, Route111_Movement_WinstrateExitHouse
# 400 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 401 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 402 "data/maps/Route111/scripts.pory"
	rival1talk Route111_Text_SpencerAllTheCommotion, Route111_Text_BrenAllTheCommotion, Route111_Text_KyleAllTheCommotion
# 405 "data/maps/Route111/scripts.pory"
	applymovement 47, Common_Movement_WalkInPlaceFasterUp
# 406 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 407 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 408 "data/maps/Route111/scripts.pory"
	addobject 4
# 409 "data/maps/Route111/scripts.pory"
	applymovement 4, Route111_Movement_WinstrateExitHouse
# 410 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WinstrateWithRivalPlayerPushedDown
# 411 "data/maps/Route111/scripts.pory"
	applymovement 47, Route111_Movement_WinstrateExitHouse
# 412 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 413 "data/maps/Route111/scripts.pory"
	applymovement 47, Common_Movement_FaceUp
# 414 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 415 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 416 "data/maps/Route111/scripts.pory"
	applymovement 47, Common_Movement_Walk_Left
# 417 "data/maps/Route111/scripts.pory"
	applymovement 4, Route111_Movement_WinstrateExitHouse
# 418 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 419 "data/maps/Route111/scripts.pory"
	applymovement 47, Common_Movement_FaceRight
# 420 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 421 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyIntro, MSGBOX_DEFAULT
# 422 "data/maps/Route111/scripts.pory"
	delay 10
# 423 "data/maps/Route111/scripts.pory"
	applymovement 47, Common_Movement_BeginTalkDown
# 424 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 425 "data/maps/Route111/scripts.pory"
	rival1talk Route111_Text_SpencerDontWorryGranny, Route111_Text_BrenDontWorryGranny, Route111_Text_KyleDontWorryGranny
# 428 "data/maps/Route111/scripts.pory"
	checkfriendchoice
# 429 "data/maps/Route111/scripts.pory"
	switch VAR_RESULT
# 430 "data/maps/Route111/scripts.pory"
	case SPENCER, Route111_EventScript_BattleWinstrates_11
# 432 "data/maps/Route111/scripts.pory"
	case BREN, Route111_EventScript_BattleWinstrates_12
# 434 "data/maps/Route111/scripts.pory"
	case KYLE, Route111_EventScript_BattleWinstrates_13
Route111_EventScript_BattleWinstrates_9:
# 437 "data/maps/Route111/scripts.pory"
	applymovement 47, Common_Movement_FaceRight
# 438 "data/maps/Route111/scripts.pory"
	waitmovement 0
	goto Route111_EventScript_BattleWinstrates_1

Route111_EventScript_BattleWinstrates_6:
# 451 "data/maps/Route111/scripts.pory"
	applymovement 4, Route111_Movement_WinstrateEnterHouse
	goto Route111_EventScript_BattleWinstrates_5

Route111_EventScript_BattleWinstrates_11:
# 431 "data/maps/Route111/scripts.pory"
	doublebattle_vs_2 TRAINER_VICKY, Route111_Text_VickyDefeat, TRAINER_BREN_MAUVILLE, Route111_Text_BrenPostBattle
	goto Route111_EventScript_BattleWinstrates_9

Route111_EventScript_BattleWinstrates_12:
# 433 "data/maps/Route111/scripts.pory"
	doublebattle_vs_2 TRAINER_VICKY, Route111_Text_VickyDefeat, TRAINER_KYLE_MAUVILLE, Route111_Text_KylePostBattle
	goto Route111_EventScript_BattleWinstrates_9

Route111_EventScript_BattleWinstrates_13:
# 435 "data/maps/Route111/scripts.pory"
	doublebattle_vs_2 TRAINER_VICKY, Route111_Text_VickyDefeat, TRAINER_SPENCER_MAUVILLE, Route111_Text_SpencerPostBattle
	goto Route111_EventScript_BattleWinstrates_9

Route111_EventScript_BattleWinstrates_15:
# 463 "data/maps/Route111/scripts.pory"
	applymovement 47, Route111_Movement_WinstrateWithRivalRival1MoveBackToPlayer
# 464 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 465 "data/maps/Route111/scripts.pory"
	rival1talk Route111_Text_SpencerLoveToChatYouUp, Route111_Text_BrenLoveToChatYouUp, Route111_Text_KyleLoveToChatYouUp
# 468 "data/maps/Route111/scripts.pory"
	applymovement 47, Route111_Movement_WinstrateEnterHouse
# 469 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 470 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 471 "data/maps/Route111/scripts.pory"
	applymovement 47, Route111_Movement_WinstrateEnterHouse
# 472 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 473 "data/maps/Route111/scripts.pory"
	removeobject 47
# 474 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
	goto Route111_EventScript_BattleWinstrates_14


Route111_EventScript_OpenWinstrateDoor::
# 481 "data/maps/Route111/scripts.pory"
	opendoor 13, 113
# 482 "data/maps/Route111/scripts.pory"
	waitdooranim
	return


Route111_EventScript_CloseWinstrateDoor::
# 487 "data/maps/Route111/scripts.pory"
	closedoor 13, 113
# 488 "data/maps/Route111/scripts.pory"
	waitdooranim
	return


# 492 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateEnterHouse:
# 493 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_up
# 494 "data/maps/Route111/scripts.pory"
	walk_up
	step_end

# 497 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateExitHouse:
# 498 "data/maps/Route111/scripts.pory"
	walk_down
	step_end

# 501 "data/maps/Route111/scripts.pory"
Route111_Movement_WaitForNextWinstrate:
# 502 "data/maps/Route111/scripts.pory"
	delay_16
# 503 "data/maps/Route111/scripts.pory"
	delay_16
# 504 "data/maps/Route111/scripts.pory"
	delay_16
	step_end

# 507 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateWithRivalPlayerPushedDown:
# 508 "data/maps/Route111/scripts.pory"
	delay_2
# 509 "data/maps/Route111/scripts.pory"
	walk_down
# 510 "data/maps/Route111/scripts.pory"
	face_up
	step_end

# 513 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateWithRivalRival1MoveBackToPlayer:
# 514 "data/maps/Route111/scripts.pory"
	walk_right
# 515 "data/maps/Route111/scripts.pory"
	face_down
	step_end

# 518 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateWithRivalRival1EnterHouse:
# 519 "data/maps/Route111/scripts.pory"
	walk_up
# 519 "data/maps/Route111/scripts.pory"
	walk_up
	step_end

# 594 "data/maps/Route111/scripts.pory"

# 595 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSignMauville::
# 596 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSignMauville, MSGBOX_SIGN
# 597 "data/maps/Route111/scripts.pory"
	end
# 598 "data/maps/Route111/scripts.pory"

# 599 "data/maps/Route111/scripts.pory"
Route111_EventScript_WinstrateHouseSign::
# 600 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateHouseSign, MSGBOX_SIGN
# 601 "data/maps/Route111/scripts.pory"
	end
# 602 "data/maps/Route111/scripts.pory"

# 603 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign112::
# 604 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign112, MSGBOX_SIGN
# 605 "data/maps/Route111/scripts.pory"
	end
# 606 "data/maps/Route111/scripts.pory"

# 607 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign113::
# 608 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign113, MSGBOX_SIGN
# 609 "data/maps/Route111/scripts.pory"
	end
# 610 "data/maps/Route111/scripts.pory"

# 611 "data/maps/Route111/scripts.pory"
Route111_EventScript_OldLadysRestStopSign::
# 612 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_OldLadysRestStopSign, MSGBOX_SIGN
# 613 "data/maps/Route111/scripts.pory"
	end
# 614 "data/maps/Route111/scripts.pory"

# 615 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerTipsSpAtkSpDef::
# 616 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerTipsSpAtkSpDef, MSGBOX_SIGN
# 617 "data/maps/Route111/scripts.pory"
	end
# 618 "data/maps/Route111/scripts.pory"

# 619 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man1::
# 620 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ToughToKeepWinningUpTheRanks, MSGBOX_NPC
# 621 "data/maps/Route111/scripts.pory"
	end
# 622 "data/maps/Route111/scripts.pory"

# 623 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man2::
# 624 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateFamilyDestroyedMe, MSGBOX_NPC
# 625 "data/maps/Route111/scripts.pory"
	end
# 626 "data/maps/Route111/scripts.pory"

# 627 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hiker::
# 628 "data/maps/Route111/scripts.pory"
	lock
# 629 "data/maps/Route111/scripts.pory"
	faceplayer
# 630 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 3, Route111_EventScript_HikerMirageTowerGone
# 631 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_HikerMirageTowerDisintegrated
# 632 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_HikerMirageTowerVisible
# 633 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ShouldBeMirageTowerAroundHere, MSGBOX_DEFAULT
# 634 "data/maps/Route111/scripts.pory"
	release
# 635 "data/maps/Route111/scripts.pory"
	end
# 636 "data/maps/Route111/scripts.pory"

# 637 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerGone::
# 638 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerHasntBeenSeenSince, MSGBOX_DEFAULT
# 639 "data/maps/Route111/scripts.pory"
	release
# 640 "data/maps/Route111/scripts.pory"
	end
# 641 "data/maps/Route111/scripts.pory"

# 642 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerDisintegrated::
# 643 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ThatWasShockingSandRainedDown, MSGBOX_DEFAULT
# 644 "data/maps/Route111/scripts.pory"
	release
# 645 "data/maps/Route111/scripts.pory"
	end
# 646 "data/maps/Route111/scripts.pory"

# 647 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerVisible::
# 648 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerClearlyVisible, MSGBOX_DEFAULT
# 649 "data/maps/Route111/scripts.pory"
	release
# 650 "data/maps/Route111/scripts.pory"
	end
# 651 "data/maps/Route111/scripts.pory"

# 652 "data/maps/Route111/scripts.pory"
Route111_EventScript_RockSmashTipFatMan::
# 653 "data/maps/Route111/scripts.pory"
	lockall
# 654 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROCK_SMASH_MAN, Common_Movement_FacePlayer
# 655 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 656 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MauvilleUncleToldMeToTakeRockSmash, MSGBOX_DEFAULT
# 657 "data/maps/Route111/scripts.pory"
	closemessage
# 658 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROCK_SMASH_MAN, Common_Movement_FaceOriginalDirection
# 659 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 660 "data/maps/Route111/scripts.pory"
	releaseall
# 661 "data/maps/Route111/scripts.pory"
	end
# 662 "data/maps/Route111/scripts.pory"

# 663 "data/maps/Route111/scripts.pory"
Route111_EventScript_Drew::
# 664 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DREW, Route111_Text_DrewIntro, Route111_Text_DrewDefeat
# 665 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DrewPostBattle, MSGBOX_AUTOCLOSE
# 666 "data/maps/Route111/scripts.pory"
	end
# 667 "data/maps/Route111/scripts.pory"

# 668 "data/maps/Route111/scripts.pory"
Route111_EventScript_Heidi::
# 669 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HEIDI, Route111_Text_HeidiIntro, Route111_Text_HeidiDefeat
# 670 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HeidiPostBattle, MSGBOX_AUTOCLOSE
# 671 "data/maps/Route111/scripts.pory"
	end
# 672 "data/maps/Route111/scripts.pory"

# 673 "data/maps/Route111/scripts.pory"
Route111_EventScript_Beau::
# 674 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BEAU, Route111_Text_BeauIntro, Route111_Text_BeauDefeat
# 675 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
# 676 "data/maps/Route111/scripts.pory"
	end
# 677 "data/maps/Route111/scripts.pory"

# 678 "data/maps/Route111/scripts.pory"
Route111_EventScript_Becky::
# 679 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BECKY, Route111_Text_BeckyIntro, Route111_Text_BeckyDefeat
# 680 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeckyPostBattle, MSGBOX_AUTOCLOSE
# 681 "data/maps/Route111/scripts.pory"
	end
# 682 "data/maps/Route111/scripts.pory"

# 683 "data/maps/Route111/scripts.pory"
Route111_EventScript_Dusty::
# 684 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_1, Route111_Text_DustyIntro, Route111_Text_DustyDefeat, Route111_EventScript_RegisterDusty
# 685 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 686 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchDusty
# 687 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostBattle, MSGBOX_DEFAULT
# 688 "data/maps/Route111/scripts.pory"
	release
# 689 "data/maps/Route111/scripts.pory"
	end
# 690 "data/maps/Route111/scripts.pory"

# 691 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterDusty::
# 692 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 693 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 694 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyRegister, MSGBOX_DEFAULT
# 695 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_DUSTY_1
# 696 "data/maps/Route111/scripts.pory"
	release
# 697 "data/maps/Route111/scripts.pory"
	end
# 698 "data/maps/Route111/scripts.pory"

# 699 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchDusty::
# 700 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_DUSTY_1, Route111_Text_DustyRematchIntro, Route111_Text_DustyRematchDefeat
# 701 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostRematch, MSGBOX_AUTOCLOSE
# 702 "data/maps/Route111/scripts.pory"
	end
# 703 "data/maps/Route111/scripts.pory"

# 704 "data/maps/Route111/scripts.pory"
Route111_EventScript_Travis::
# 705 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TRAVIS, Route111_Text_TravisIntro, Route111_Text_TravisDefeat
# 706 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
# 707 "data/maps/Route111/scripts.pory"
	end
# 708 "data/maps/Route111/scripts.pory"

# 709 "data/maps/Route111/scripts.pory"
Route111_EventScript_Irene::
# 710 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_IRENE, Route111_Text_IreneIntro, Route111_Text_IreneDefeat
# 711 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IrenePostBattle, MSGBOX_AUTOCLOSE
# 712 "data/maps/Route111/scripts.pory"
	end
# 713 "data/maps/Route111/scripts.pory"

# 714 "data/maps/Route111/scripts.pory"
Route111_EventScript_Daisuke::
# 715 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DAISUKE, Route111_Text_DaisukeIntro, Route111_Text_DaisukeDefeat
# 716 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DaisukePostBattle, MSGBOX_AUTOCLOSE
# 717 "data/maps/Route111/scripts.pory"
	end
# 718 "data/maps/Route111/scripts.pory"

# 719 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wilton::
# 720 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_WILTON_1, Route111_Text_WiltonIntro, Route111_Text_WiltonDefeat, Route111_EventScript_RegisterWilton
# 721 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 722 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchWilton
# 723 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostBattle, MSGBOX_DEFAULT
# 724 "data/maps/Route111/scripts.pory"
	release
# 725 "data/maps/Route111/scripts.pory"
	end
# 726 "data/maps/Route111/scripts.pory"

# 727 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterWilton::
# 728 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 729 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 730 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonRegister, MSGBOX_DEFAULT
# 731 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_WILTON_1
# 732 "data/maps/Route111/scripts.pory"
	release
# 733 "data/maps/Route111/scripts.pory"
	end
# 734 "data/maps/Route111/scripts.pory"

# 735 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchWilton::
# 736 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_WILTON_1, Route111_Text_WiltonRematchIntro, Route111_Text_WiltonRematchDefeat
# 737 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostRematch, MSGBOX_AUTOCLOSE
# 738 "data/maps/Route111/scripts.pory"
	end
# 739 "data/maps/Route111/scripts.pory"

# 740 "data/maps/Route111/scripts.pory"
Route111_EventScript_Brooke::
# 741 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BROOKE_1, Route111_Text_BrookeIntro, Route111_Text_BrookeDefeat, Route111_EventScript_RegisterBrooke
# 742 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 743 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchBrooke
# 744 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostBattle, MSGBOX_DEFAULT
# 745 "data/maps/Route111/scripts.pory"
	release
# 746 "data/maps/Route111/scripts.pory"
	end
# 747 "data/maps/Route111/scripts.pory"

# 748 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterBrooke::
# 749 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 750 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 751 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookeRegister, MSGBOX_DEFAULT
# 752 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_BROOKE_1
# 753 "data/maps/Route111/scripts.pory"
	release
# 754 "data/maps/Route111/scripts.pory"
	end
# 755 "data/maps/Route111/scripts.pory"

# 756 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchBrooke::
# 757 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_BROOKE_1, Route111_Text_BrookeRematchIntro, Route111_Text_BrookeRematchDefeat
# 758 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostRematch, MSGBOX_AUTOCLOSE
# 759 "data/maps/Route111/scripts.pory"
	end
# 760 "data/maps/Route111/scripts.pory"

# 761 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hayden::
# 762 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HAYDEN, Route111_Text_HaydenIntro, Route111_Text_HaydenDefeat
# 763 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HaydenPostBattle, MSGBOX_AUTOCLOSE
# 764 "data/maps/Route111/scripts.pory"
	end
# 765 "data/maps/Route111/scripts.pory"

# 766 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bianca::
# 767 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BIANCA, Route111_Text_BiancaIntro, Route111_Text_BiancaDefeat
# 768 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BiancaPostBattle, MSGBOX_AUTOCLOSE
# 769 "data/maps/Route111/scripts.pory"
	end
# 770 "data/maps/Route111/scripts.pory"

# 771 "data/maps/Route111/scripts.pory"
Route111_EventScript_Tyron::
# 772 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TYRON, Route111_Text_TyronIntro, Route111_Text_TyronDefeat
# 773 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
# 774 "data/maps/Route111/scripts.pory"
	end
# 775 "data/maps/Route111/scripts.pory"

# 776 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celina::
# 777 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELINA, Route111_Text_CelinaIntro, Route111_Text_CelinaDefeat
# 778 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CelinaPostBattle, MSGBOX_AUTOCLOSE
# 779 "data/maps/Route111/scripts.pory"
	end
# 780 "data/maps/Route111/scripts.pory"

# 781 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celia::
# 782 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELIA, Route111_Text_CeliaIntro, Route111_Text_CeliaDefeat
# 783 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CeliaPostBattle, MSGBOX_AUTOCLOSE
# 784 "data/maps/Route111/scripts.pory"
	end
# 785 "data/maps/Route111/scripts.pory"

# 786 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bryan::
# 787 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRYAN, Route111_Text_BryanIntro, Route111_Text_BryanDefeat
# 788 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BryanPostBattle, MSGBOX_AUTOCLOSE
# 789 "data/maps/Route111/scripts.pory"
	end
# 790 "data/maps/Route111/scripts.pory"

# 791 "data/maps/Route111/scripts.pory"
Route111_EventScript_Branden::
# 792 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRANDEN, Route111_Text_BrandenIntro, Route111_Text_BrandenDefeat
# 793 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrandenPostBattle, MSGBOX_AUTOCLOSE
# 794 "data/maps/Route111/scripts.pory"
	end
# 795 "data/maps/Route111/scripts.pory"

# 796 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerHillSign::
# 797 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerHillSign, MSGBOX_SIGN
# 798 "data/maps/Route111/scripts.pory"
	end
# 799 "data/maps/Route111/scripts.pory"

# 800 "data/maps/Route111/scripts.pory"
Route111_Text_BattleOurFamily:
# 801 "data/maps/Route111/scripts.pory"
	.string "Hello! I take it you're a traveler.\p"
# 802 "data/maps/Route111/scripts.pory"
	.string "How's this? What do you say to taking\n"
# 803 "data/maps/Route111/scripts.pory"
	.string "on our family of four in a series of\l"
# 804 "data/maps/Route111/scripts.pory"
	.string "POKéMON battles?$"
# 805 "data/maps/Route111/scripts.pory"

# 806 "data/maps/Route111/scripts.pory"
Route111_Text_IsThatSo:
# 807 "data/maps/Route111/scripts.pory"
	.string "Is that so?\n"
# 808 "data/maps/Route111/scripts.pory"
	.string "Drop in, if you change your mind!$"
# 809 "data/maps/Route111/scripts.pory"

# 810 "data/maps/Route111/scripts.pory"
Route111_Text_VictorIntro:
# 811 "data/maps/Route111/scripts.pory"
	.string "That's the spirit! I like you!$"
# 812 "data/maps/Route111/scripts.pory"

# 813 "data/maps/Route111/scripts.pory"
Route111_Text_VictorDefeat:
# 814 "data/maps/Route111/scripts.pory"
	.string "Aiyah!\n"
# 815 "data/maps/Route111/scripts.pory"
	.string "You're a lot tougher than I expected!$"
# 816 "data/maps/Route111/scripts.pory"

# 817 "data/maps/Route111/scripts.pory"
Route111_Text_VictorPostBattle:
# 818 "data/maps/Route111/scripts.pory"
	.string "Hey, all!\n"
# 819 "data/maps/Route111/scripts.pory"
	.string "I've found a pretty strong TRAINER!$"
# 820 "data/maps/Route111/scripts.pory"

# 821 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaIntro:
# 822 "data/maps/Route111/scripts.pory"
	.string "Oh, my goodness! Aren't you young?\p"
# 823 "data/maps/Route111/scripts.pory"
	.string "You must be quite the TRAINER to beat\n"
# 824 "data/maps/Route111/scripts.pory"
	.string "my husband, though.\p"
# 825 "data/maps/Route111/scripts.pory"
	.string "It's my turn to battle now!$"
# 826 "data/maps/Route111/scripts.pory"

# 827 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaDefeat:
# 828 "data/maps/Route111/scripts.pory"
	.string "Oh, gosh!\n"
# 829 "data/maps/Route111/scripts.pory"
	.string "I can't get over how strong you are!$"
# 830 "data/maps/Route111/scripts.pory"

# 831 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaPostBattle:
# 832 "data/maps/Route111/scripts.pory"
	.string "There's a strong TRAINER here!\n"
# 833 "data/maps/Route111/scripts.pory"
	.string "This one's really strong!$"
# 834 "data/maps/Route111/scripts.pory"

# 835 "data/maps/Route111/scripts.pory"
Route111_Text_ViviIntro:
# 836 "data/maps/Route111/scripts.pory"
	.string "You're stronger than Mommy? Wow!\p"
# 837 "data/maps/Route111/scripts.pory"
	.string "But I'm strong, too!\n"
# 838 "data/maps/Route111/scripts.pory"
	.string "Really! Honestly!$"
# 839 "data/maps/Route111/scripts.pory"

# 840 "data/maps/Route111/scripts.pory"
Route111_Text_ViviDefeat:
# 841 "data/maps/Route111/scripts.pory"
	.string "Huh? Did I just lose?$"
# 842 "data/maps/Route111/scripts.pory"

# 843 "data/maps/Route111/scripts.pory"
Route111_Text_ViviPostBattle:
# 844 "data/maps/Route111/scripts.pory"
	.string "This stinks…\p"
# 845 "data/maps/Route111/scripts.pory"
	.string "…Snivel… Grandma!$"
# 846 "data/maps/Route111/scripts.pory"

# 847 "data/maps/Route111/scripts.pory"
Route111_Text_VickyIntro:
# 848 "data/maps/Route111/scripts.pory"
	.string "How dare you make my granddaughter\n"
# 849 "data/maps/Route111/scripts.pory"
	.string "cry!\p"
# 850 "data/maps/Route111/scripts.pory"
	.string "For that, I'm going to smack you!\n"
# 851 "data/maps/Route111/scripts.pory"
	.string "Prepare to lose!$"
# 852 "data/maps/Route111/scripts.pory"

# 853 "data/maps/Route111/scripts.pory"
Route111_Text_VickyDefeat:
# 854 "data/maps/Route111/scripts.pory"
	.string "Kwah! You are strong…\n"
# 855 "data/maps/Route111/scripts.pory"
	.string "My granddaughter was right…$"
# 856 "data/maps/Route111/scripts.pory"

# 857 "data/maps/Route111/scripts.pory"
Route111_Text_VickyPostBattle:
# 858 "data/maps/Route111/scripts.pory"
	.string "If you're not in any hurry,\n"
# 859 "data/maps/Route111/scripts.pory"
	.string "visit with us awhile.$"
# 860 "data/maps/Route111/scripts.pory"

# 861 "data/maps/Route111/scripts.pory"
Route111_Text_ToughToKeepWinningUpTheRanks:
# 862 "data/maps/Route111/scripts.pory"
	.string "If you don't raise your POKéMON some\n"
# 863 "data/maps/Route111/scripts.pory"
	.string "more, it could be tough to keep winning\l"
# 864 "data/maps/Route111/scripts.pory"
	.string "up through the ranks.\p"
# 865 "data/maps/Route111/scripts.pory"
	.string "I've heard the POKéMON LEAGUE's\n"
# 866 "data/maps/Route111/scripts.pory"
	.string "ELITE FOUR are far stronger than\l"
# 867 "data/maps/Route111/scripts.pory"
	.string "any GYM LEADER.$"
# 868 "data/maps/Route111/scripts.pory"

# 869 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateFamilyDestroyedMe:
# 870 "data/maps/Route111/scripts.pory"
	.string "I challenged the WINSTRATE family,\n"
# 871 "data/maps/Route111/scripts.pory"
	.string "but four matches in a row is tough\l"
# 872 "data/maps/Route111/scripts.pory"
	.string "going… They destroyed me.$"
# 873 "data/maps/Route111/scripts.pory"

# 874 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSignMauville:
# 875 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 876 "data/maps/Route111/scripts.pory"
	.string "{DOWN_ARROW} MAUVILLE CITY$"
# 877 "data/maps/Route111/scripts.pory"

# 878 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateHouseSign:
# 879 "data/maps/Route111/scripts.pory"
	.string "“Our family's hearts beat as one!”\n"
# 880 "data/maps/Route111/scripts.pory"
	.string "THE WINSTRATE'S HOUSE$"
# 881 "data/maps/Route111/scripts.pory"

# 882 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign112:
# 883 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 884 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 112$"
# 885 "data/maps/Route111/scripts.pory"

# 886 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign113:
# 887 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 888 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 113$"
# 889 "data/maps/Route111/scripts.pory"

# 890 "data/maps/Route111/scripts.pory"
Route111_Text_OldLadysRestStopSign:
# 891 "data/maps/Route111/scripts.pory"
	.string "OLD LADY'S REST STOP\n"
# 892 "data/maps/Route111/scripts.pory"
	.string "“Come in and rest your tired bones.”$"
# 893 "data/maps/Route111/scripts.pory"

# 894 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerTipsSpAtkSpDef:
# 895 "data/maps/Route111/scripts.pory"
	.string "TRAINER TIPS\p"
# 896 "data/maps/Route111/scripts.pory"
	.string "One of the indicators of a POKéMON's\n"
# 897 "data/maps/Route111/scripts.pory"
	.string "powerfulness is SP. ATK. It stands for\l"
# 898 "data/maps/Route111/scripts.pory"
	.string "“SPECIAL ATTACK.”\p"
# 899 "data/maps/Route111/scripts.pory"
	.string "Likewise, SP. DEF stands for “SPECIAL\n"
# 900 "data/maps/Route111/scripts.pory"
	.string "DEFENSE.”$"
# 901 "data/maps/Route111/scripts.pory"

# 902 "data/maps/Route111/scripts.pory"
Route111_Text_ShouldBeMirageTowerAroundHere:
# 903 "data/maps/Route111/scripts.pory"
	.string "There should be a tower made of sand\n"
# 904 "data/maps/Route111/scripts.pory"
	.string "around here somewhere.\p"
# 905 "data/maps/Route111/scripts.pory"
	.string "But for some reason, it can be seen\n"
# 906 "data/maps/Route111/scripts.pory"
	.string "sometimes, and sometimes not.\p"
# 907 "data/maps/Route111/scripts.pory"
	.string "That's why I call it the MIRAGE TOWER.$"
# 908 "data/maps/Route111/scripts.pory"

# 909 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerClearlyVisible:
# 910 "data/maps/Route111/scripts.pory"
	.string "I see it!\n"
# 911 "data/maps/Route111/scripts.pory"
	.string "The tower of sand!\p"
# 912 "data/maps/Route111/scripts.pory"
	.string "The sand tower they called a mirage\n"
# 913 "data/maps/Route111/scripts.pory"
	.string "is clearly visible!\p"
# 914 "data/maps/Route111/scripts.pory"
	.string "But it looks so fragile…\n"
# 915 "data/maps/Route111/scripts.pory"
	.string "It could crumble away anytime…\p"
# 916 "data/maps/Route111/scripts.pory"
	.string "I want to go inside it, but I can't\n"
# 917 "data/maps/Route111/scripts.pory"
	.string "get my courage up for it…$"
# 918 "data/maps/Route111/scripts.pory"

# 919 "data/maps/Route111/scripts.pory"
Route111_Text_ThatWasShockingSandRainedDown:
# 920 "data/maps/Route111/scripts.pory"
	.string "Whoa…\n"
# 921 "data/maps/Route111/scripts.pory"
	.string "That was shocking.\p"
# 922 "data/maps/Route111/scripts.pory"
	.string "Sand rained down in chunks all of\n"
# 923 "data/maps/Route111/scripts.pory"
	.string "a sudden.\p"
# 924 "data/maps/Route111/scripts.pory"
	.string "What was it like inside?\n"
# 925 "data/maps/Route111/scripts.pory"
	.string "Were there sandy ghosts and such?$"
# 926 "data/maps/Route111/scripts.pory"

# 927 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerHasntBeenSeenSince:
# 928 "data/maps/Route111/scripts.pory"
	.string "Since I spoke to you, the tower of sand\n"
# 929 "data/maps/Route111/scripts.pory"
	.string "hasn't been seen.\p"
# 930 "data/maps/Route111/scripts.pory"
	.string "Perhaps it really was\n"
# 931 "data/maps/Route111/scripts.pory"
	.string "the MIRAGE TOWER…$"
# 932 "data/maps/Route111/scripts.pory"

# 933 "data/maps/Route111/scripts.pory"
Route111_Text_ClawFossilDisappeared:
# 934 "data/maps/Route111/scripts.pory"
	.string "The CLAW FOSSIL disappeared into\n"
# 935 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 936 "data/maps/Route111/scripts.pory"

# 937 "data/maps/Route111/scripts.pory"
Route111_Text_RootFossilDisappeared:
# 938 "data/maps/Route111/scripts.pory"
	.string "The ROOT FOSSIL disappeared into\n"
# 939 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 940 "data/maps/Route111/scripts.pory"

# 941 "data/maps/Route111/scripts.pory"
Route111_Text_MauvilleUncleToldMeToTakeRockSmash:
# 942 "data/maps/Route111/scripts.pory"
	.string "Oh, no!\p"
# 943 "data/maps/Route111/scripts.pory"
	.string "My uncle in MAUVILLE told me to take\n"
# 944 "data/maps/Route111/scripts.pory"
	.string "ROCK SMASH with me if I was going to\l"
# 945 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111!\p"
# 946 "data/maps/Route111/scripts.pory"
	.string "My uncle? He lives across from\n"
# 947 "data/maps/Route111/scripts.pory"
	.string "the bike shop in MAUVILLE.$"
# 948 "data/maps/Route111/scripts.pory"

# 949 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerHillSign:
# 950 "data/maps/Route111/scripts.pory"
	.string "{RIGHT_ARROW} TRAINER HILL ENTRANCE\p"
# 951 "data/maps/Route111/scripts.pory"
	.string "“Scale the heights, you hot-blooded\n"
# 952 "data/maps/Route111/scripts.pory"
	.string "TRAINERS!”$"

Route111_EventScript_TriggerLeft_Text_0:
# 288 "data/maps/Route111/scripts.pory"
	.string "YAAAHOOOOOOOO!$"

Route111_Text_SpencerAllTheCommotion::
# 522 "data/maps/Route111/scripts.pory"
	.string "SPENCER: So that's what all the\n"
	.string "commotion is about!\p"
	.string "You sure don't hold back, do you?\p"
	.string "You'd better prepare yourself.\n"
	.string "She may be old, but that grandma sure\l"
	.string "has a lot of energy!$"

Route111_Text_BrenAllTheCommotion::
# 529 "data/maps/Route111/scripts.pory"
	.string "BREN: So that's what all the commotion\n"
	.string "is about!\p"
	.string "You sure don't hold back, do you?\p"
	.string "You'd better prepare yourself.\n"
	.string "She may be old, but that grandma sure\l"
	.string "has a lot of energy!$"

Route111_Text_KyleAllTheCommotion::
# 536 "data/maps/Route111/scripts.pory"
	.string "KYLE: So that's what all the commotion\n"
	.string "is about!\p"
	.string "You sure don't hold back, do you?\p"
	.string "You'd better prepare yourself.\n"
	.string "She may be old, but that grandma sure\l"
	.string "has a lot of energy!$"

Route111_Text_SpencerDontWorryGranny::
# 543 "data/maps/Route111/scripts.pory"
	.string "SPENCER: Don't worry, granny.\n"
	.string "I'm on your side!$"

Route111_Text_BrenDontWorryGranny::
# 548 "data/maps/Route111/scripts.pory"
	.string "BREN: Don't worry, granny.\n"
	.string "I'm on your side!$"

Route111_Text_KyleDontWorryGranny::
# 553 "data/maps/Route111/scripts.pory"
	.string "KYLE: Don't worry, granny.\n"
	.string "I'm on your side!$"

Route111_Text_SpencerPostBattle::
# 558 "data/maps/Route111/scripts.pory"
	.string "No way!\n"
	.string "I can't believe it!$"

Route111_Text_BrenPostBattle::
# 563 "data/maps/Route111/scripts.pory"
	.string "No way!\n"
	.string "I can't believe it!$"

Route111_Text_KylePostBattle::
# 568 "data/maps/Route111/scripts.pory"
	.string "No way!\n"
	.string "I can't believe it!$"

Route111_Text_SpencerLoveToChatYouUp::
# 573 "data/maps/Route111/scripts.pory"
	.string "SPENCER: You beat me and that whole\n"
	.string "family without even needing a single\l"
	.string "break!\p"
	.string "You must have one heck of a training\n"
	.string "regimen.\p"
	.string "I'm sure the WINSTRATES would love to\n"
	.string "chat you up if you have the time.\p"
	.string "They're a pretty cool bunch!$"

Route111_Text_BrenLoveToChatYouUp::
# 580 "data/maps/Route111/scripts.pory"
	.string "BREN: You beat me and that whole family\n"
	.string "without even needing a single break!\p"
	.string "You must have one heck of a training\n"
	.string "regimen.\p"
	.string "I'm sure the WINSTRATES would love to\n"
	.string "chat you up if you have the time.\p"
	.string "They're a pretty cool bunch!$"

Route111_Text_KyleLoveToChatYouUp::
# 587 "data/maps/Route111/scripts.pory"
	.string "KYLE: You beat me and that whole family\n"
	.string "without even needing a single break!\p"
	.string "You must have one heck of a training\n"
	.string "regimen.\p"
	.string "I'm sure the WINSTRATES would love to\n"
	.string "chat you up if you have the time.\p"
	.string "They're a pretty cool bunch!$"
