# 4 "data/maps/Route117/scripts.pory"

# 5 "data/maps/Route117/scripts.pory"
.set LOCALID_DAYCARE_MAN, 3
.set LOCALID_DAYCARE_MON_0, 25
.set LOCALID_DAYCARE_MON_1, 26

# 8 "data/maps/Route117/scripts.pory"
Route117_MapScripts::
# 9 "data/maps/Route117/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route117_OnTransition
# 10 "data/maps/Route117/scripts.pory"
	.byte 0
# 11 "data/maps/Route117/scripts.pory"

# 12 "data/maps/Route117/scripts.pory"
Route117_OnTransition:
# 13 "data/maps/Route117/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 14 "data/maps/Route117/scripts.pory"
	call Route117_EventScript_TryMoveDayCareMan
	@ set flags for OW daycare mons
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	getdaycaregfx VAR_OBJ_GFX_ID_0, VAR_OBJ_GFX_ID_1, VAR_TEMP_0, VAR_TEMP_1
	switch VAR_RESULT
	case 2, Route117_EventScript_ShowDaycareMon1
	case 1, Route117_EventScript_ShowDaycareMon0
	end

Route117_EventScript_ShowDaycareMon1:
	@ set pokemon movement type based on compatibility
	special SetDaycareCompatibilityString
	call_if_eq VAR_RESULT, PARENTS_INCOMPATIBLE, Route117_EventScript_DaycareMonIncompatible
	@ Don't do anything if PARENTS_LOW_COMPATIBILITY
	call_if_eq VAR_RESULT, PARENTS_MED_COMPATIBILITY, Route117_EventScript_DaycareMonMedCompatibility
	call_if_eq VAR_RESULT, PARENTS_MAX_COMPATIBILITY, Route117_EventScript_DaycareMonMaxCompatibility
	clearflag FLAG_TEMP_2
Route117_EventScript_ShowDaycareMon0:
	clearflag FLAG_TEMP_1
	end

Route117_EventScript_DaycareMonIncompatible: @ mons never face each other
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_FACE_DOWN_UP_AND_LEFT
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_FACE_DOWN_UP_AND_RIGHT
	return

Route117_EventScript_DaycareMonMedCompatibility: @ down and towards each other
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_FACE_DOWN_AND_LEFT
	return

Route117_EventScript_DaycareMonMaxCompatibility: @ facing; walk in place
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
	return

# 17 "data/maps/Route117/scripts.pory"
Route117_EventScript_TryMoveDayCareMan::
# 18 "data/maps/Route117/scripts.pory"
	goto_if_unset FLAG_PENDING_DAYCARE_EGG, Route117_EventScript_StopMoveDayCareMan
# 19 "data/maps/Route117/scripts.pory"
	setobjectxyperm LOCALID_DAYCARE_MAN, 47, 6
# 20 "data/maps/Route117/scripts.pory"
Route117_EventScript_StopMoveDayCareMan::
# 21 "data/maps/Route117/scripts.pory"
	return

Route117_EventScript_Rival2::
# 25 "data/maps/Route117/scripts.pory"
	lock
# 26 "data/maps/Route117/scripts.pory"
	compare VAR_TEMP_5, 5
	goto_if_ne Route117_EventScript_Rival2_2
# 36 "data/maps/Route117/scripts.pory"
	checkfriendchoice
# 37 "data/maps/Route117/scripts.pory"
	rival2talk Route117_Text_SpencerShowMeWhatYouGot, Route117_Text_BrenShowMeWhatYouGot, Route117_Text_KyleShowMeWhatYouGot
# 40 "data/maps/Route117/scripts.pory"
	waitmessage
# 41 "data/maps/Route117/scripts.pory"
	waitse
# 42 "data/maps/Route117/scripts.pory"
	switch VAR_RESULT
# 43 "data/maps/Route117/scripts.pory"
	case SPENCER, Route117_EventScript_Rival2_7
# 45 "data/maps/Route117/scripts.pory"
	case BREN, Route117_EventScript_Rival2_8
# 47 "data/maps/Route117/scripts.pory"
	case KYLE, Route117_EventScript_Rival2_9
Route117_EventScript_Rival2_5:
# 50 "data/maps/Route117/scripts.pory"
	waitmoncry
Route117_EventScript_Rival2_1:
# 52 "data/maps/Route117/scripts.pory"
	closemessage
# 53 "data/maps/Route117/scripts.pory"
	release
	end

Route117_EventScript_Rival2_2:
# 27 "data/maps/Route117/scripts.pory"
	applymovement 25, Common_Movement_FacePlayer
# 28 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 29 "data/maps/Route117/scripts.pory"
	rival2talk Route117_Text_SpencerCantLetYouShowMeUp, Route117_Text_BrenCantLetYouShowMeUp, Route117_Text_KyleCantLetYouShowMeUp
# 32 "data/maps/Route117/scripts.pory"
	closemessage
# 33 "data/maps/Route117/scripts.pory"
	setvar VAR_TEMP_5, 5
	goto Route117_EventScript_Rival2_1

Route117_EventScript_Rival2_7:
# 44 "data/maps/Route117/scripts.pory"
	playmoncry SPECIES_CHARMELEON, CRY_MODE_NORMAL
	goto Route117_EventScript_Rival2_5

Route117_EventScript_Rival2_8:
# 46 "data/maps/Route117/scripts.pory"
	playmoncry SPECIES_MACHOP, CRY_MODE_NORMAL
	goto Route117_EventScript_Rival2_5

Route117_EventScript_Rival2_9:
# 48 "data/maps/Route117/scripts.pory"
	playmoncry SPECIES_PRINPLUP, CRY_MODE_NORMAL
	goto Route117_EventScript_Rival2_5


# 87 "data/maps/Route117/scripts.pory"

# 88 "data/maps/Route117/scripts.pory"
Route117_EventScript_Woman::
# 89 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_ArentTheseFlowersPretty, MSGBOX_NPC
# 90 "data/maps/Route117/scripts.pory"
	end
# 91 "data/maps/Route117/scripts.pory"

# 92 "data/maps/Route117/scripts.pory"
Route117_EventScript_LittleBoy::
# 93 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AirIsTastyHere, MSGBOX_NPC
# 94 "data/maps/Route117/scripts.pory"
	end
# 95 "data/maps/Route117/scripts.pory"

# 96 "data/maps/Route117/scripts.pory"
Route117_EventScript_Girl::
# 97 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCarePokemonHadNewMove, MSGBOX_NPC
# 98 "data/maps/Route117/scripts.pory"
	end
# 99 "data/maps/Route117/scripts.pory"

# 100 "data/maps/Route117/scripts.pory"
Route117_EventScript_RouteSignVerdanturf::
# 101 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignVerdanturf, MSGBOX_SIGN
# 102 "data/maps/Route117/scripts.pory"
	end
# 103 "data/maps/Route117/scripts.pory"

# 104 "data/maps/Route117/scripts.pory"
Route117_EventScript_RouteSignMauville::
# 105 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignMauville, MSGBOX_SIGN
# 106 "data/maps/Route117/scripts.pory"
	end
# 107 "data/maps/Route117/scripts.pory"

# 108 "data/maps/Route117/scripts.pory"
Route117_EventScript_DayCareSign::
# 109 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCareSign, MSGBOX_SIGN
# 110 "data/maps/Route117/scripts.pory"
	end
# 111 "data/maps/Route117/scripts.pory"

# 112 "data/maps/Route117/scripts.pory"
Route117_EventScript_Isaac::
# 113 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_ISAAC_1, Route117_Text_IsaacIntro, Route117_Text_IsaacDefeat, Route117_EventScript_RegisterIsaac
# 114 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 115 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchIsaac
# 116 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacPostBattle, MSGBOX_DEFAULT
# 117 "data/maps/Route117/scripts.pory"
	release
# 118 "data/maps/Route117/scripts.pory"
	end
# 119 "data/maps/Route117/scripts.pory"

# 120 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterIsaac::
# 121 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 122 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 123 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacRegister, MSGBOX_DEFAULT
# 124 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ISAAC_1
# 125 "data/maps/Route117/scripts.pory"
	release
# 126 "data/maps/Route117/scripts.pory"
	end
# 127 "data/maps/Route117/scripts.pory"

# 128 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchIsaac::
# 129 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_ISAAC_1, Route117_Text_IsaacRematchIntro, Route117_Text_IsaacRematchDefeat
# 130 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacPostRematch, MSGBOX_AUTOCLOSE
# 131 "data/maps/Route117/scripts.pory"
	end
# 132 "data/maps/Route117/scripts.pory"

# 133 "data/maps/Route117/scripts.pory"
Route117_EventScript_Lydia::
# 134 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_LYDIA_1, Route117_Text_LydiaIntro, Route117_Text_LydiaDefeat, Route117_EventScript_RegisterLydia
# 135 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 136 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchLydia
# 137 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostBattle, MSGBOX_DEFAULT
# 138 "data/maps/Route117/scripts.pory"
	release
# 139 "data/maps/Route117/scripts.pory"
	end
# 140 "data/maps/Route117/scripts.pory"

# 141 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterLydia::
# 142 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 143 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 144 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaRegister, MSGBOX_DEFAULT
# 145 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_LYDIA_1
# 146 "data/maps/Route117/scripts.pory"
	release
# 147 "data/maps/Route117/scripts.pory"
	end
# 148 "data/maps/Route117/scripts.pory"

# 149 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchLydia::
# 150 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_LYDIA_1, Route117_Text_LydiaRematchIntro, Route117_Text_LydiaRematchDefeat
# 151 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostRematch, MSGBOX_AUTOCLOSE
# 152 "data/maps/Route117/scripts.pory"
	end
# 153 "data/maps/Route117/scripts.pory"

# 154 "data/maps/Route117/scripts.pory"
Route117_EventScript_Dylan::
# 155 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_DYLAN_1, Route117_Text_DylanIntro, Route117_Text_DylanDefeat, Route117_EventScript_RegisterDylan
# 156 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 157 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchDylan
# 158 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostBattle, MSGBOX_DEFAULT
# 159 "data/maps/Route117/scripts.pory"
	release
# 160 "data/maps/Route117/scripts.pory"
	end
# 161 "data/maps/Route117/scripts.pory"

# 162 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterDylan::
# 163 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 164 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 165 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanRegister, MSGBOX_DEFAULT
# 166 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_DYLAN_1
# 167 "data/maps/Route117/scripts.pory"
	release
# 168 "data/maps/Route117/scripts.pory"
	end
# 169 "data/maps/Route117/scripts.pory"

# 170 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchDylan::
# 171 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_DYLAN_1, Route117_Text_DylanRematchIntro, Route117_Text_DylanRematchDefeat
# 172 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostRematch, MSGBOX_AUTOCLOSE
# 173 "data/maps/Route117/scripts.pory"
	end
# 174 "data/maps/Route117/scripts.pory"

# 175 "data/maps/Route117/scripts.pory"
Route117_EventScript_Maria::
# 176 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_MARIA_1, Route117_Text_MariaIntro, Route117_Text_MariaDefeat, Route117_EventScript_RegisterMaria
# 177 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 178 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchMaria
# 179 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostBattle, MSGBOX_DEFAULT
# 180 "data/maps/Route117/scripts.pory"
	release
# 181 "data/maps/Route117/scripts.pory"
	end
# 182 "data/maps/Route117/scripts.pory"

# 183 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMaria::
# 184 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 185 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 186 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaRegister, MSGBOX_DEFAULT
# 187 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_MARIA_1
# 188 "data/maps/Route117/scripts.pory"
	release
# 189 "data/maps/Route117/scripts.pory"
	end
# 190 "data/maps/Route117/scripts.pory"

# 191 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMaria::
# 192 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_MARIA_1, Route117_Text_MariaRematchIntro, Route117_Text_MariaRematchDefeat
# 193 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostRematch, MSGBOX_AUTOCLOSE
# 194 "data/maps/Route117/scripts.pory"
	end
# 195 "data/maps/Route117/scripts.pory"

# 196 "data/maps/Route117/scripts.pory"
Route117_EventScript_Derek::
# 197 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_DEREK, Route117_Text_DerekIntro, Route117_Text_DerekDefeat
# 198 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
# 199 "data/maps/Route117/scripts.pory"
	end
# 200 "data/maps/Route117/scripts.pory"

# 201 "data/maps/Route117/scripts.pory"
Route117_EventScript_Anna::
# 202 "data/maps/Route117/scripts.pory"
	trainerbattle_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaIntro, Route117_Text_AnnaDefeat, Route117_Text_AnnaNotEnoughMons, Route117_EventScript_RegisterAnna
# 203 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 204 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchAnna
# 205 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostBattle, MSGBOX_DEFAULT
# 206 "data/maps/Route117/scripts.pory"
	release
# 207 "data/maps/Route117/scripts.pory"
	end
# 208 "data/maps/Route117/scripts.pory"

# 209 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterAnna::
# 210 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 211 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 212 "data/maps/Route117/scripts.pory"
	release
# 213 "data/maps/Route117/scripts.pory"
	end
# 214 "data/maps/Route117/scripts.pory"

# 215 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchAnna::
# 216 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaRematchIntro, Route117_Text_AnnaRematchDefeat, Route117_Text_AnnaRematchNotEnoughMons
# 217 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostRematch, MSGBOX_AUTOCLOSE
# 218 "data/maps/Route117/scripts.pory"
	end
# 219 "data/maps/Route117/scripts.pory"

# 220 "data/maps/Route117/scripts.pory"
Route117_EventScript_Meg::
# 221 "data/maps/Route117/scripts.pory"
	trainerbattle_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegIntro, Route117_Text_MegDefeat, Route117_Text_MegNotEnoughMons, Route117_EventScript_RegisterMeg
# 222 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 223 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchMeg
# 224 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostBattle, MSGBOX_DEFAULT
# 225 "data/maps/Route117/scripts.pory"
	release
# 226 "data/maps/Route117/scripts.pory"
	end
# 227 "data/maps/Route117/scripts.pory"

# 228 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMeg::
# 229 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 230 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 231 "data/maps/Route117/scripts.pory"
	release
# 232 "data/maps/Route117/scripts.pory"
	end
# 233 "data/maps/Route117/scripts.pory"

# 234 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMeg::
# 235 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegRematchIntro, Route117_Text_MegRematchDefeat, Route117_Text_MegRematchNotEnoughMons
# 236 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostRematch, MSGBOX_AUTOCLOSE
# 237 "data/maps/Route117/scripts.pory"
	end
# 238 "data/maps/Route117/scripts.pory"

# 239 "data/maps/Route117/scripts.pory"
Route117_EventScript_Melina::
# 240 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_MELINA, Route117_Text_MelinaIntro, Route117_Text_MelinaDefeat
# 241 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MelinaPostBattle, MSGBOX_AUTOCLOSE
# 242 "data/maps/Route117/scripts.pory"
	end
# 243 "data/maps/Route117/scripts.pory"

# 244 "data/maps/Route117/scripts.pory"
Route117_EventScript_Brandi::
# 245 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_BRANDI, Route117_Text_BrandiIntro, Route117_Text_BrandiDefeat
# 246 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_BrandiPostBattle, MSGBOX_AUTOCLOSE
# 247 "data/maps/Route117/scripts.pory"
	end
# 248 "data/maps/Route117/scripts.pory"

# 249 "data/maps/Route117/scripts.pory"
Route117_EventScript_Aisha::
# 250 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_AISHA, Route117_Text_AishaIntro, Route117_Text_AishaDefeat
# 251 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AishaPostBattle, MSGBOX_AUTOCLOSE
# 252 "data/maps/Route117/scripts.pory"
	end
# 253 "data/maps/Route117/scripts.pory"

# 254 "data/maps/Route117/scripts.pory"
Route117_Text_DayCarePokemonHadNewMove:
# 255 "data/maps/Route117/scripts.pory"
	.string "I left my POKéMON at the DAY CARE.\p"
# 256 "data/maps/Route117/scripts.pory"
	.string "When I got it back, it had a new move\n"
# 257 "data/maps/Route117/scripts.pory"
	.string "that I didn't teach it.\l"
# 258 "data/maps/Route117/scripts.pory"
	.string "I was really, really surprised.$"
# 259 "data/maps/Route117/scripts.pory"

# 260 "data/maps/Route117/scripts.pory"
Route117_Text_ArentTheseFlowersPretty:
# 261 "data/maps/Route117/scripts.pory"
	.string "What do you think?\n"
# 262 "data/maps/Route117/scripts.pory"
	.string "Aren't these flowers pretty?\p"
# 263 "data/maps/Route117/scripts.pory"
	.string "I planted them all!$"
# 264 "data/maps/Route117/scripts.pory"

# 265 "data/maps/Route117/scripts.pory"
Route117_Text_AirIsTastyHere:
# 266 "data/maps/Route117/scripts.pory"
	.string "The air is tasty here!$"
# 267 "data/maps/Route117/scripts.pory"

# 268 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignVerdanturf:
# 269 "data/maps/Route117/scripts.pory"
	.string "ROUTE 117\n"
# 270 "data/maps/Route117/scripts.pory"
	.string "{LEFT_ARROW} VERDANTURF TOWN$"
# 271 "data/maps/Route117/scripts.pory"

# 272 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignMauville:
# 273 "data/maps/Route117/scripts.pory"
	.string "ROUTE 117\n"
# 274 "data/maps/Route117/scripts.pory"
	.string "{RIGHT_ARROW} MAUVILLE CITY$"
# 275 "data/maps/Route117/scripts.pory"

# 276 "data/maps/Route117/scripts.pory"
Route117_Text_DayCareSign:
# 277 "data/maps/Route117/scripts.pory"
	.string "POKéMON DAY CARE\n"
# 278 "data/maps/Route117/scripts.pory"
	.string "“Let us raise your POKéMON.”$"

Route117_Text_SpencerCantLetYouShowMeUp::
# 57 "data/maps/Route117/scripts.pory"
	.string "I can't let you show me up like that\n"
	.string "again!\p"
	.string "We've got some serious training to do!$"

Route117_Text_BrenCantLetYouShowMeUp::
# 62 "data/maps/Route117/scripts.pory"
	.string "I can't let you show me up like that\n"
	.string "again!\p"
	.string "We've got some serious training to do!$"

Route117_Text_KyleCantLetYouShowMeUp::
# 67 "data/maps/Route117/scripts.pory"
	.string "I can't let you show me up like that\n"
	.string "again!\p"
	.string "We've got some serious training to do!$"

Route117_Text_SpencerShowMeWhatYouGot::
# 72 "data/maps/Route117/scripts.pory"
	.string "C'mon, MACHOP!\p"
	.string "Show me what you got!$"

Route117_Text_BrenShowMeWhatYouGot::
# 77 "data/maps/Route117/scripts.pory"
	.string "C'mon, PRINPLUP!\p"
	.string "Show me what you got!$"

Route117_Text_KyleShowMeWhatYouGot::
# 82 "data/maps/Route117/scripts.pory"
	.string "C'mon, CHARMELEON!\p"
	.string "Show me what you got!$"
