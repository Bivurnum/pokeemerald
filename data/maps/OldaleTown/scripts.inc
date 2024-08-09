# 1 "data/maps/OldaleTown/scripts.pory"

# 2 "data/maps/OldaleTown/scripts.pory"
.set LOCALID_MART_EMPLOYEE, 2
# 3 "data/maps/OldaleTown/scripts.pory"
.set LOCALID_FOOTPRINTS_MAN, 3
# 4 "data/maps/OldaleTown/scripts.pory"
.set LOCALID_RIVAL, 4
# 5 "data/maps/OldaleTown/scripts.pory"

# 6 "data/maps/OldaleTown/scripts.pory"
OldaleTown_MapScripts::
# 7 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_OnTransition
# 8 "data/maps/OldaleTown/scripts.pory"
	.byte 0
# 9 "data/maps/OldaleTown/scripts.pory"

# 10 "data/maps/OldaleTown/scripts.pory"
OldaleTown_OnTransition:
# 11 "data/maps/OldaleTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 12 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_VISITED_OLDALE_TOWN
# 13 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_BlockWestEntrance
# 14 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_MoveMartEmployee
# 15 "data/maps/OldaleTown/scripts.pory"
	call_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_SetOldaleState
# 16 "data/maps/OldaleTown/scripts.pory"
	end
# 17 "data/maps/OldaleTown/scripts.pory"

# 18 "data/maps/OldaleTown/scripts.pory"
@ This script seems pointless because nothing uses VAR_OLDALE_TOWN_STATE
# 19 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_SetOldaleState::
# 20 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 21 "data/maps/OldaleTown/scripts.pory"
	return
# 22 "data/maps/OldaleTown/scripts.pory"

# 23 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockWestEntrance::
# 24 "data/maps/OldaleTown/scripts.pory"
	setobjectxyperm LOCALID_FOOTPRINTS_MAN, 1, 11
# 25 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_FOOTPRINTS_MAN, MOVEMENT_TYPE_FACE_LEFT
# 26 "data/maps/OldaleTown/scripts.pory"
	return
# 27 "data/maps/OldaleTown/scripts.pory"

# 28 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MoveMartEmployee::
# 29 "data/maps/OldaleTown/scripts.pory"
	setobjectxyperm LOCALID_MART_EMPLOYEE, 13, 14
# 30 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_MART_EMPLOYEE, MOVEMENT_TYPE_FACE_DOWN
# 31 "data/maps/OldaleTown/scripts.pory"
	return
# 32 "data/maps/OldaleTown/scripts.pory"

# 33 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_TownSign::
# 34 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_TownSign, MSGBOX_SIGN
# 35 "data/maps/OldaleTown/scripts.pory"
	end
# 36 "data/maps/OldaleTown/scripts.pory"

# 37 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Girl::
# 38 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_SavingMyProgress, MSGBOX_NPC
# 39 "data/maps/OldaleTown/scripts.pory"
	end
# 40 "data/maps/OldaleTown/scripts.pory"

# 41 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MartEmployee::
# 42 "data/maps/OldaleTown/scripts.pory"
	lock
# 43 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 44 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_ExplainPotion
# 45 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, OldaleTown_EventScript_ExplainPotion
# 46 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_TEMP_1
# 47 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 48 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_IWorkAtPokemonMart, MSGBOX_DEFAULT
# 49 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 50 "data/maps/OldaleTown/scripts.pory"
	switch VAR_FACING
# 51 "data/maps/OldaleTown/scripts.pory"
	ballfollowingmon
# 52 "data/maps/OldaleTown/scripts.pory"
	case DIR_SOUTH, OldaleTown_EventScript_GoToMartSouth
# 53 "data/maps/OldaleTown/scripts.pory"
	case DIR_NORTH, OldaleTown_EventScript_GoToMartNorth
# 54 "data/maps/OldaleTown/scripts.pory"
	case DIR_EAST, OldaleTown_EventScript_GoToMartEast
# 55 "data/maps/OldaleTown/scripts.pory"
	end
# 56 "data/maps/OldaleTown/scripts.pory"

# 57 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartSouth::
# 58 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_MART_EMPLOYEE, OldaleTown_Movement_EmployeeSouth
# 59 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerSouth
# 60 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 61 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 62 "data/maps/OldaleTown/scripts.pory"
	end
# 63 "data/maps/OldaleTown/scripts.pory"

# 64 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartNorth::
# 65 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_MART_EMPLOYEE, OldaleTown_Movement_EmployeeNorth
# 66 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerNorth
# 67 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 68 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 69 "data/maps/OldaleTown/scripts.pory"
	end
# 70 "data/maps/OldaleTown/scripts.pory"

# 71 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartEast::
# 72 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerEast
# 73 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_MART_EMPLOYEE, OldaleTown_Movement_EmployeeEast
# 74 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 75 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 76 "data/maps/OldaleTown/scripts.pory"
	end
# 77 "data/maps/OldaleTown/scripts.pory"

# 78 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPokemonMart::
# 79 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_ThisIsAPokemonMart, MSGBOX_DEFAULT
# 80 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_POTION
# 81 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, OldaleTown_EventScript_BagIsFull
# 82 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 83 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_RECEIVED_POTION_OLDALE
# 84 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 85 "data/maps/OldaleTown/scripts.pory"
	release
# 86 "data/maps/OldaleTown/scripts.pory"
	end
# 87 "data/maps/OldaleTown/scripts.pory"

# 88 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPotion::
# 89 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 90 "data/maps/OldaleTown/scripts.pory"
	release
# 91 "data/maps/OldaleTown/scripts.pory"
	end
# 92 "data/maps/OldaleTown/scripts.pory"

# 93 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BagIsFull::
# 94 "data/maps/OldaleTown/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 95 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 96 "data/maps/OldaleTown/scripts.pory"
	release
# 97 "data/maps/OldaleTown/scripts.pory"
	end
# 98 "data/maps/OldaleTown/scripts.pory"

# 99 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeEast:
# 100 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 101 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 102 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 103 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 104 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 105 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 106 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 107 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 108 "data/maps/OldaleTown/scripts.pory"
	step_end
# 109 "data/maps/OldaleTown/scripts.pory"

# 110 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeSouth:
# 111 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 112 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 113 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 114 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 115 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 116 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 117 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 118 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 119 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 120 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 121 "data/maps/OldaleTown/scripts.pory"
	step_end
# 122 "data/maps/OldaleTown/scripts.pory"

# 123 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeNorth:
# 124 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 125 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 126 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 127 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 128 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 129 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 130 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 131 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 132 "data/maps/OldaleTown/scripts.pory"
	step_end
# 133 "data/maps/OldaleTown/scripts.pory"

# 134 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown1:
# 135 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 136 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 137 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 138 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 139 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 140 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 141 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 142 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 143 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 144 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 145 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 146 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 147 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 148 "data/maps/OldaleTown/scripts.pory"
	step_end
# 149 "data/maps/OldaleTown/scripts.pory"

# 150 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerEast:
# 151 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 152 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 153 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 154 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 155 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 156 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 157 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 158 "data/maps/OldaleTown/scripts.pory"
	step_end
# 159 "data/maps/OldaleTown/scripts.pory"

# 160 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerSouth:
# 161 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 162 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 163 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 164 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 165 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 166 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 167 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 168 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 169 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 170 "data/maps/OldaleTown/scripts.pory"
	step_end
# 171 "data/maps/OldaleTown/scripts.pory"

# 172 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerNorth:
# 173 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 174 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 175 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 176 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 177 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 178 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 179 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 180 "data/maps/OldaleTown/scripts.pory"
	step_end
# 181 "data/maps/OldaleTown/scripts.pory"

# 182 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown2:
# 183 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 184 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 185 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 186 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 187 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 188 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 189 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 190 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 191 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 192 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 193 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 194 "data/maps/OldaleTown/scripts.pory"
	step_end
# 195 "data/maps/OldaleTown/scripts.pory"

# 196 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_FootprintsMan::
# 197 "data/maps/OldaleTown/scripts.pory"
	lock
# 198 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 199 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_NotBlockingPath
# 200 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_DiscoveredFootprints, MSGBOX_DEFAULT
# 201 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 202 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FaceOriginalDirection
# 203 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 204 "data/maps/OldaleTown/scripts.pory"
	release
# 205 "data/maps/OldaleTown/scripts.pory"
	end
# 206 "data/maps/OldaleTown/scripts.pory"

# 207 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockedPath::
# 208 "data/maps/OldaleTown/scripts.pory"
	lockall
# 209 "data/maps/OldaleTown/scripts.pory"
	ballfollowingmon
# 210 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerStepBack
# 211 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_BackUp
# 212 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 213 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_WaitDontComeInHere, MSGBOX_DEFAULT
# 214 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 215 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_ReturnToOriginalPosition
# 216 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 217 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 218 "data/maps/OldaleTown/scripts.pory"
	end
# 219 "data/maps/OldaleTown/scripts.pory"

# 220 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_NotBlockingPath::
# 221 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_FinishedSketchingFootprints, MSGBOX_DEFAULT
# 222 "data/maps/OldaleTown/scripts.pory"
	release
# 223 "data/maps/OldaleTown/scripts.pory"
	end

OldaleTown_EventScript_Rival::
# 227 "data/maps/OldaleTown/scripts.pory"
	lockall
# 228 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 229 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 230 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 0
# 231 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
	end


OldaleTown_EventScript_RivalTrigger1::
# 236 "data/maps/OldaleTown/scripts.pory"
	lockall
# 237 "data/maps/OldaleTown/scripts.pory"
	ballfollowingmon
# 238 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 239 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalApproachPlayer1
# 240 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 241 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 242 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 243 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 244 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
	end


OldaleTown_EventScript_RivalTrigger2::
# 249 "data/maps/OldaleTown/scripts.pory"
	lockall
# 250 "data/maps/OldaleTown/scripts.pory"
	ballfollowingmon
# 251 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 252 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalApproachPlayer2
# 253 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 254 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 255 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 256 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 2
# 257 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
	end


OldaleTown_EventScript_RivalTrigger3::
# 262 "data/maps/OldaleTown/scripts.pory"
	lockall
# 263 "data/maps/OldaleTown/scripts.pory"
	ballfollowingmon
# 264 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 265 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalApproachPlayer3
# 266 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 267 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 268 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 269 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 3
# 270 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
	end


OldaleTown_EventScript_ShowRivalMessage::
# 275 "data/maps/OldaleTown/scripts.pory"
	checkfriendchoice
# 276 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, SPENCER, OldaleTown_EventScript_ShowKyleMessage
# 277 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, BREN, OldaleTown_EventScript_ShowSpencerMessage
# 278 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, KYLE, OldaleTown_EventScript_ShowBrenMessage
	end


OldaleTown_EventScript_ShowBrenMessage::
# 283 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_BrenWantToBattle, MSGBOX_YESNO
# 284 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, OldaleTown_EventScript_DontBattle
# 285 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalDoBattle
	end


OldaleTown_EventScript_ShowKyleMessage::
# 290 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_KyleWantToBattle, MSGBOX_YESNO
# 291 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, OldaleTown_EventScript_DontBattle
# 292 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalDoBattle
	end


OldaleTown_EventScript_ShowSpencerMessage::
# 297 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_SpencerWantToBattle, MSGBOX_YESNO
# 298 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, OldaleTown_EventScript_DontBattle
# 299 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalDoBattle
	end


OldaleTown_EventScript_DontBattle::
# 304 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_GoPrepare
# 305 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 306 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8009, 0
	goto_if_ne OldaleTown_EventScript_DontBattle_2
OldaleTown_EventScript_DontBattle_1:
# 322 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FaceUp
# 323 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 324 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end

OldaleTown_EventScript_DontBattle_2:
# 307 "data/maps/OldaleTown/scripts.pory"
	playse SE_M_HEADBUTT
# 308 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalPush
# 309 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_GetPushedUp
# 310 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 311 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 312 "data/maps/OldaleTown/scripts.pory"
	switch VAR_0x8009
# 313 "data/maps/OldaleTown/scripts.pory"
	case 1, OldaleTown_EventScript_DontBattle_6
# 315 "data/maps/OldaleTown/scripts.pory"
	case 2, OldaleTown_EventScript_DontBattle_7
# 317 "data/maps/OldaleTown/scripts.pory"
	case 3, OldaleTown_EventScript_DontBattle_8
OldaleTown_EventScript_DontBattle_4:
# 320 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
	goto OldaleTown_EventScript_DontBattle_1

OldaleTown_EventScript_DontBattle_6:
# 314 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalReturn1
	goto OldaleTown_EventScript_DontBattle_4

OldaleTown_EventScript_DontBattle_7:
# 316 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalReturn2
	goto OldaleTown_EventScript_DontBattle_4

OldaleTown_EventScript_DontBattle_8:
# 318 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalReturn3
	goto OldaleTown_EventScript_DontBattle_4


OldaleTown_EventScript_RivalDoBattle::
# 329 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_LetsDoThis, MSGBOX_DEFAULT
# 330 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 331 "data/maps/OldaleTown/scripts.pory"
	checkfriendchoice
# 332 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, SPENCER, OldaleTown_EventScript_RivalBattleKyle
# 333 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, BREN, OldaleTown_EventScript_RivalBattleSpencer
# 334 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, KYLE, OldaleTown_EventScript_RivalBattleBren
	end


OldaleTown_EventScript_RivalBattleKyle::
# 339 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_no_intro TRAINER_KYLE_OLDALE, OldaleTown_Text_KyleDefeated
# 340 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
	return


OldaleTown_EventScript_RivalBattleSpencer::
# 344 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SPENCER_OLDALE, OldaleTown_Text_SpencerDefeated
# 345 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
	return


OldaleTown_EventScript_RivalBattleBren::
# 349 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_no_intro TRAINER_BREN_OLDALE, OldaleTown_Text_BrenDefeated
# 350 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
	return


OldaleTown_EventScript_RivalFinish::
# 354 "data/maps/OldaleTown/scripts.pory"
	rival2talk OldaleTown_Text_GoToLabSpencer, OldaleTown_Text_GoToLabBren, OldaleTown_Text_GoToLabKyle
# 357 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 358 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 0, OldaleTown_EventScript_DoExitMovement1
# 359 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 1, OldaleTown_EventScript_DoExitMovement2
# 360 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 361 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 362 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
# 363 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 364 "data/maps/OldaleTown/scripts.pory"
	removeobject LOCALID_RIVAL
# 365 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 366 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 367 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end


# 371 "data/maps/OldaleTown/scripts.pory"

# 372 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement1::
# 373 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_FACING, DIR_SOUTH, OldaleTown_EventScript_DoExitMovement2
# 374 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
# 375 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 376 "data/maps/OldaleTown/scripts.pory"
	return
# 377 "data/maps/OldaleTown/scripts.pory"

# 378 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement2::
# 379 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_WatchRivalExit
# 380 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
# 381 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 382 "data/maps/OldaleTown/scripts.pory"
	return

# 385 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalPush:
# 386 "data/maps/OldaleTown/scripts.pory"
	walk_fast_left
	step_end

# 389 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_GetPushedUp:
# 390 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 391 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 394 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalReturn1:
# 395 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 395 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 395 "data/maps/OldaleTown/scripts.pory"
	walk_right
	step_end

# 398 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalReturn2:
# 399 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 399 "data/maps/OldaleTown/scripts.pory"
	walk_right
	step_end

# 402 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalReturn3:
# 403 "data/maps/OldaleTown/scripts.pory"
	walk_right
	step_end

# 406 "data/maps/OldaleTown/scripts.pory"

# 407 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer1:
# 408 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 409 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 410 "data/maps/OldaleTown/scripts.pory"
	step_end
# 411 "data/maps/OldaleTown/scripts.pory"

# 412 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer2:
# 413 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 414 "data/maps/OldaleTown/scripts.pory"
	step_end
# 415 "data/maps/OldaleTown/scripts.pory"

# 416 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer3:
# 417 "data/maps/OldaleTown/scripts.pory"
	face_left
# 418 "data/maps/OldaleTown/scripts.pory"
	step_end
# 419 "data/maps/OldaleTown/scripts.pory"

# 420 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalExit:
# 421 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 422 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 423 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 424 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 425 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 426 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 427 "data/maps/OldaleTown/scripts.pory"
	step_end
# 428 "data/maps/OldaleTown/scripts.pory"

# 429 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_WatchRivalExit:
# 430 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 431 "data/maps/OldaleTown/scripts.pory"
	delay_4
# 432 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 433 "data/maps/OldaleTown/scripts.pory"
	step_end
# 434 "data/maps/OldaleTown/scripts.pory"

# 435 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerStepBack:
# 436 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 437 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 438 "data/maps/OldaleTown/scripts.pory"
	step_end
# 439 "data/maps/OldaleTown/scripts.pory"

# 440 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_BackUp:
# 441 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 442 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 443 "data/maps/OldaleTown/scripts.pory"
	lock_facing_direction
# 444 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 445 "data/maps/OldaleTown/scripts.pory"
	unlock_facing_direction
# 446 "data/maps/OldaleTown/scripts.pory"
	step_end
# 447 "data/maps/OldaleTown/scripts.pory"

# 448 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_ReturnToOriginalPosition:
# 449 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 450 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 451 "data/maps/OldaleTown/scripts.pory"
	step_end
# 452 "data/maps/OldaleTown/scripts.pory"

# 453 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_SavingMyProgress:
# 454 "data/maps/OldaleTown/scripts.pory"
	.string "I want to take a rest, so I'm saving my\n"
# 455 "data/maps/OldaleTown/scripts.pory"
	.string "progress.$"
# 456 "data/maps/OldaleTown/scripts.pory"

# 457 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_IWorkAtPokemonMart:
# 458 "data/maps/OldaleTown/scripts.pory"
	.string "Hi!\n"
# 459 "data/maps/OldaleTown/scripts.pory"
	.string "I work at a POKéMON MART.\p"
# 460 "data/maps/OldaleTown/scripts.pory"
	.string "Can I get you to come with me?$"
# 461 "data/maps/OldaleTown/scripts.pory"

# 462 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_ThisIsAPokemonMart:
# 463 "data/maps/OldaleTown/scripts.pory"
	.string "This is a POKéMON MART.\n"
# 464 "data/maps/OldaleTown/scripts.pory"
	.string "Just look for our blue roof.\p"
# 465 "data/maps/OldaleTown/scripts.pory"
	.string "We sell a variety of goods including\n"
# 466 "data/maps/OldaleTown/scripts.pory"
	.string "POKé BALLS for catching POKéMON.\p"
# 467 "data/maps/OldaleTown/scripts.pory"
	.string "Here, I'd like you to have this as\n"
# 468 "data/maps/OldaleTown/scripts.pory"
	.string "a promotional item.$"
# 469 "data/maps/OldaleTown/scripts.pory"

# 470 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_PotionExplanation:
# 471 "data/maps/OldaleTown/scripts.pory"
	.string "A POTION can be used anytime, so it's\n"
# 472 "data/maps/OldaleTown/scripts.pory"
	.string "even more useful than a POKéMON CENTER\l"
# 473 "data/maps/OldaleTown/scripts.pory"
	.string "in certain situations.$"
# 474 "data/maps/OldaleTown/scripts.pory"

# 475 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_WaitDontComeInHere:
# 476 "data/maps/OldaleTown/scripts.pory"
	.string "Aaaaah! Wait!\n"
# 477 "data/maps/OldaleTown/scripts.pory"
	.string "Please don't come in here.\p"
# 478 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 479 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON!\p"
# 480 "data/maps/OldaleTown/scripts.pory"
	.string "Wait until I finish sketching\n"
# 481 "data/maps/OldaleTown/scripts.pory"
	.string "them, okay?$"
# 482 "data/maps/OldaleTown/scripts.pory"

# 483 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_DiscoveredFootprints:
# 484 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 485 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON!\p"
# 486 "data/maps/OldaleTown/scripts.pory"
	.string "Wait until I finish sketching\n"
# 487 "data/maps/OldaleTown/scripts.pory"
	.string "them, okay?$"
# 488 "data/maps/OldaleTown/scripts.pory"

# 489 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_FinishedSketchingFootprints:
# 490 "data/maps/OldaleTown/scripts.pory"
	.string "I finished sketching the footprints of\n"
# 491 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON.\p"
# 492 "data/maps/OldaleTown/scripts.pory"
	.string "But it turns out they were only my\n"
# 493 "data/maps/OldaleTown/scripts.pory"
	.string "own footprints…$"
# 494 "data/maps/OldaleTown/scripts.pory"

# 495 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_MayLetsGoBack:
# 496 "data/maps/OldaleTown/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\n"
# 497 "data/maps/OldaleTown/scripts.pory"
	.string "Over here!\l"
# 498 "data/maps/OldaleTown/scripts.pory"
	.string "Let's hurry home!$"
# 499 "data/maps/OldaleTown/scripts.pory"

# 500 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_BrendanLetsGoBack:
# 501 "data/maps/OldaleTown/scripts.pory"
	.string "BRENDAN: I'm heading back to my dad's\n"
# 502 "data/maps/OldaleTown/scripts.pory"
	.string "LAB now.\l"
# 503 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, you should hustle back, too.$"
# 504 "data/maps/OldaleTown/scripts.pory"

# 505 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_TownSign:
# 506 "data/maps/OldaleTown/scripts.pory"
	.string "OLDALE TOWN\n"
# 507 "data/maps/OldaleTown/scripts.pory"
	.string "“Where things start off scarce.”$"

OldaleTown_Text_BrenWantToBattle::
# 510 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}! SPENCER told me that he had a\n"
	.string "POKéMON battle with you!\l"
	.string "No fair! I want a turn!\p"
	.string "Are you ready to have a battle with me\n"
	.string "right here and now?$"

OldaleTown_Text_KyleWantToBattle::
# 518 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}! BREN told me that he had a\n"
	.string "POKéMON battle with you!\l"
	.string "No fair! I want a turn!\p"
	.string "Are you ready to have a battle with me\n"
	.string "right here and now?$"

OldaleTown_Text_SpencerWantToBattle::
# 526 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}! KYLE told me that he had a\n"
	.string "POKéMON battle with you!\l"
	.string "No fair! I want a turn!\p"
	.string "Are you ready to have a battle with me\n"
	.string "right here and now?$"

OldaleTown_Text_GoPrepare::
# 534 "data/maps/OldaleTown/scripts.pory"
	.string "Oh… Okay…\p"
	.string "Well, if you need to heal your\n"
	.string "POKéMON, there's a POKéMON CENTER\l"
	.string "right over there.\p"
	.string "I'll wait here until you're prepared.$"

OldaleTown_Text_LetsDoThis::
# 542 "data/maps/OldaleTown/scripts.pory"
	.string "Alright! Let's do this!$"

OldaleTown_Text_KyleDefeated::
# 546 "data/maps/OldaleTown/scripts.pory"
	.string "BREN wasn't kidding!\n"
	.string "You're super strong!$"

OldaleTown_Text_SpencerDefeated::
# 551 "data/maps/OldaleTown/scripts.pory"
	.string "KYLE wasn't kidding!\n"
	.string "You're super strong!$"

OldaleTown_Text_BrenDefeated::
# 556 "data/maps/OldaleTown/scripts.pory"
	.string "SPENCER wasn't kidding!\n"
	.string "You're super strong!$"

OldaleTown_Text_GoToLabKyle::
# 561 "data/maps/OldaleTown/scripts.pory"
	.string "That was fun!\n"
	.string "Let's do it again!\p"
	.string "Oh, wait… BREN said we had to\n"
	.string "go to the lab, right?\p"
	.string "We'd better put our rematch\n"
	.string "on hold for now.\p"
	.string "Come on! Let's go see the PROF.$"

OldaleTown_Text_GoToLabSpencer::
# 571 "data/maps/OldaleTown/scripts.pory"
	.string "That was fun!\n"
	.string "Let's do it again!\p"
	.string "Oh, wait… KYLE said we had to\n"
	.string "go to the lab, right?\p"
	.string "We'd better put our rematch\n"
	.string "on hold for now.\p"
	.string "Come on! Let's go see the PROF.$"

OldaleTown_Text_GoToLabBren::
# 581 "data/maps/OldaleTown/scripts.pory"
	.string "That was fun!\n"
	.string "Let's do it again right now!\p"
	.string "Oh, wait… SPENCER said we had to\n"
	.string "go to the lab, right?\p"
	.string "We'd better put our rematch\n"
	.string "on hold for now.\p"
	.string "Come on! Let's go see the PROF.$"
