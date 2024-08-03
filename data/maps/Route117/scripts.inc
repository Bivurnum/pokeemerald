# 6 "data/maps/Route117/scripts.pory"

# 7 "data/maps/Route117/scripts.pory"
.set LOCALID_DAYCARE_MAN, 3
# 8 "data/maps/Route117/scripts.pory"
.set LOCALID_RIVAL2, 25
# 9 "data/maps/Route117/scripts.pory"
.set LOCALID_DAYCARE_MON_0, 26
# 10 "data/maps/Route117/scripts.pory"
.set LOCALID_DAYCARE_MON_1, 27
# 11 "data/maps/Route117/scripts.pory"

# 12 "data/maps/Route117/scripts.pory"
Route117_MapScripts::
# 13 "data/maps/Route117/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route117_OnTransition
# 14 "data/maps/Route117/scripts.pory"
	.byte 0
# 15 "data/maps/Route117/scripts.pory"

# 16 "data/maps/Route117/scripts.pory"
Route117_OnTransition:
# 17 "data/maps/Route117/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 18 "data/maps/Route117/scripts.pory"
	call Route117_EventScript_TryMoveDayCareMan
# 19 "data/maps/Route117/scripts.pory"
	@ set flags for OW daycare mons
# 20 "data/maps/Route117/scripts.pory"
	setflag FLAG_TEMP_1
# 21 "data/maps/Route117/scripts.pory"
	setflag FLAG_TEMP_2
# 22 "data/maps/Route117/scripts.pory"
	getdaycaregfx VAR_OBJ_GFX_ID_0, VAR_OBJ_GFX_ID_1, VAR_TEMP_0, VAR_TEMP_1
# 23 "data/maps/Route117/scripts.pory"
	switch VAR_RESULT
# 24 "data/maps/Route117/scripts.pory"
	case 2, Route117_EventScript_ShowDaycareMon1
# 25 "data/maps/Route117/scripts.pory"
	case 1, Route117_EventScript_ShowDaycareMon0
# 26 "data/maps/Route117/scripts.pory"
	end
# 27 "data/maps/Route117/scripts.pory"

# 28 "data/maps/Route117/scripts.pory"
Route117_EventScript_ShowDaycareMon1:
# 29 "data/maps/Route117/scripts.pory"
	@ set pokemon movement type based on compatibility
# 30 "data/maps/Route117/scripts.pory"
	special SetDaycareCompatibilityString
# 31 "data/maps/Route117/scripts.pory"
	call_if_eq VAR_RESULT, PARENTS_INCOMPATIBLE, Route117_EventScript_DaycareMonIncompatible
# 32 "data/maps/Route117/scripts.pory"
	@ Don't do anything if PARENTS_LOW_COMPATIBILITY
# 33 "data/maps/Route117/scripts.pory"
	call_if_eq VAR_RESULT, PARENTS_MED_COMPATIBILITY, Route117_EventScript_DaycareMonMedCompatibility
# 34 "data/maps/Route117/scripts.pory"
	call_if_eq VAR_RESULT, PARENTS_MAX_COMPATIBILITY, Route117_EventScript_DaycareMonMaxCompatibility
# 35 "data/maps/Route117/scripts.pory"
	clearflag FLAG_TEMP_2
# 36 "data/maps/Route117/scripts.pory"
Route117_EventScript_ShowDaycareMon0:
# 37 "data/maps/Route117/scripts.pory"
	clearflag FLAG_TEMP_1
# 38 "data/maps/Route117/scripts.pory"
	end
# 39 "data/maps/Route117/scripts.pory"

# 40 "data/maps/Route117/scripts.pory"
Route117_EventScript_DaycareMonIncompatible: @ mons never face each other
# 41 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_FACE_DOWN_UP_AND_LEFT
# 42 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_FACE_DOWN_UP_AND_RIGHT
# 43 "data/maps/Route117/scripts.pory"
	return
# 44 "data/maps/Route117/scripts.pory"

# 45 "data/maps/Route117/scripts.pory"
Route117_EventScript_DaycareMonMedCompatibility: @ down and towards each other
# 46 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 47 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_FACE_DOWN_AND_LEFT
# 48 "data/maps/Route117/scripts.pory"
	return
# 49 "data/maps/Route117/scripts.pory"

# 50 "data/maps/Route117/scripts.pory"
Route117_EventScript_DaycareMonMaxCompatibility: @ facing; walk in place
# 51 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_0, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 52 "data/maps/Route117/scripts.pory"
	setobjectmovementtype LOCALID_DAYCARE_MON_1, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 53 "data/maps/Route117/scripts.pory"
	return
# 54 "data/maps/Route117/scripts.pory"
	end
# 55 "data/maps/Route117/scripts.pory"

# 56 "data/maps/Route117/scripts.pory"
Route117_EventScript_TryMoveDayCareMan::
# 57 "data/maps/Route117/scripts.pory"
	
# 58 "data/maps/Route117/scripts.pory"
	goto_if_unset FLAG_PENDING_DAYCARE_EGG, Route117_EventScript_StopMoveDayCareMan
# 59 "data/maps/Route117/scripts.pory"
	setobjectxyperm LOCALID_DAYCARE_MAN, 47, 6
# 60 "data/maps/Route117/scripts.pory"
Route117_EventScript_StopMoveDayCareMan::
# 61 "data/maps/Route117/scripts.pory"
	return

Route117_EventScript_Rival2::
# 65 "data/maps/Route117/scripts.pory"
	lock
# 66 "data/maps/Route117/scripts.pory"
	compare VAR_TEMP_5, 5
	goto_if_ne Route117_EventScript_Rival2_2
# 76 "data/maps/Route117/scripts.pory"
	checkfriendchoice
# 77 "data/maps/Route117/scripts.pory"
	rival2talk Route117_Text_SpencerShowMeWhatYouGot, Route117_Text_BrenShowMeWhatYouGot, Route117_Text_KyleShowMeWhatYouGot
# 80 "data/maps/Route117/scripts.pory"
	waitmessage
# 81 "data/maps/Route117/scripts.pory"
	waitse
# 82 "data/maps/Route117/scripts.pory"
	switch VAR_RESULT
# 83 "data/maps/Route117/scripts.pory"
	case SPENCER, Route117_EventScript_Rival2_7
# 85 "data/maps/Route117/scripts.pory"
	case BREN, Route117_EventScript_Rival2_8
# 87 "data/maps/Route117/scripts.pory"
	case KYLE, Route117_EventScript_Rival2_9
Route117_EventScript_Rival2_5:
# 90 "data/maps/Route117/scripts.pory"
	waitmoncry
Route117_EventScript_Rival2_1:
# 92 "data/maps/Route117/scripts.pory"
	closemessage
# 93 "data/maps/Route117/scripts.pory"
	release
	end

Route117_EventScript_Rival2_2:
# 67 "data/maps/Route117/scripts.pory"
	applymovement 25, Common_Movement_FacePlayer
# 68 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 69 "data/maps/Route117/scripts.pory"
	rival2talk Route117_Text_SpencerCantLetYouShowMeUp, Route117_Text_BrenCantLetYouShowMeUp, Route117_Text_KyleCantLetYouShowMeUp
# 72 "data/maps/Route117/scripts.pory"
	closemessage
# 73 "data/maps/Route117/scripts.pory"
	setvar VAR_TEMP_5, 5
	goto Route117_EventScript_Rival2_1

Route117_EventScript_Rival2_7:
# 84 "data/maps/Route117/scripts.pory"
	playmoncry SPECIES_CHARMELEON, CRY_MODE_NORMAL
	goto Route117_EventScript_Rival2_5

Route117_EventScript_Rival2_8:
# 86 "data/maps/Route117/scripts.pory"
	playmoncry SPECIES_MACHOP, CRY_MODE_NORMAL
	goto Route117_EventScript_Rival2_5

Route117_EventScript_Rival2_9:
# 88 "data/maps/Route117/scripts.pory"
	playmoncry SPECIES_PRINPLUP, CRY_MODE_NORMAL
	goto Route117_EventScript_Rival2_5


# 127 "data/maps/Route117/scripts.pory"

# 128 "data/maps/Route117/scripts.pory"
Route117_EventScript_Woman::
# 129 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_ArentTheseFlowersPretty, MSGBOX_NPC
# 130 "data/maps/Route117/scripts.pory"
	end
# 131 "data/maps/Route117/scripts.pory"

# 132 "data/maps/Route117/scripts.pory"
Route117_EventScript_LittleBoy::
# 133 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AirIsTastyHere, MSGBOX_NPC
# 134 "data/maps/Route117/scripts.pory"
	end
# 135 "data/maps/Route117/scripts.pory"

# 136 "data/maps/Route117/scripts.pory"
Route117_EventScript_Girl::
# 137 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCarePokemonHadNewMove, MSGBOX_NPC
# 138 "data/maps/Route117/scripts.pory"
	end
# 139 "data/maps/Route117/scripts.pory"

# 140 "data/maps/Route117/scripts.pory"
Route117_EventScript_RouteSignVerdanturf::
# 141 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignVerdanturf, MSGBOX_SIGN
# 142 "data/maps/Route117/scripts.pory"
	end
# 143 "data/maps/Route117/scripts.pory"

# 144 "data/maps/Route117/scripts.pory"
Route117_EventScript_RouteSignMauville::
# 145 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignMauville, MSGBOX_SIGN
# 146 "data/maps/Route117/scripts.pory"
	end
# 147 "data/maps/Route117/scripts.pory"

# 148 "data/maps/Route117/scripts.pory"
Route117_EventScript_DayCareSign::
# 149 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCareSign, MSGBOX_SIGN
# 150 "data/maps/Route117/scripts.pory"
	end
# 151 "data/maps/Route117/scripts.pory"

# 152 "data/maps/Route117/scripts.pory"
Route117_EventScript_Isaac::
# 153 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_ISAAC_1, Route117_Text_IsaacIntro, Route117_Text_IsaacDefeat, Route117_EventScript_RegisterIsaac
# 154 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 155 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchIsaac
# 156 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacPostBattle, MSGBOX_DEFAULT
# 157 "data/maps/Route117/scripts.pory"
	release
# 158 "data/maps/Route117/scripts.pory"
	end
# 159 "data/maps/Route117/scripts.pory"

# 160 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterIsaac::
# 161 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 162 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 163 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacRegister, MSGBOX_DEFAULT
# 164 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ISAAC_1
# 165 "data/maps/Route117/scripts.pory"
	release
# 166 "data/maps/Route117/scripts.pory"
	end
# 167 "data/maps/Route117/scripts.pory"

# 168 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchIsaac::
# 169 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_ISAAC_1, Route117_Text_IsaacRematchIntro, Route117_Text_IsaacRematchDefeat
# 170 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacPostRematch, MSGBOX_AUTOCLOSE
# 171 "data/maps/Route117/scripts.pory"
	end
# 172 "data/maps/Route117/scripts.pory"

# 173 "data/maps/Route117/scripts.pory"
Route117_EventScript_Lydia::
# 174 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_LYDIA_1, Route117_Text_LydiaIntro, Route117_Text_LydiaDefeat, Route117_EventScript_RegisterLydia
# 175 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 176 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchLydia
# 177 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostBattle, MSGBOX_DEFAULT
# 178 "data/maps/Route117/scripts.pory"
	release
# 179 "data/maps/Route117/scripts.pory"
	end
# 180 "data/maps/Route117/scripts.pory"

# 181 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterLydia::
# 182 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 183 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 184 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaRegister, MSGBOX_DEFAULT
# 185 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_LYDIA_1
# 186 "data/maps/Route117/scripts.pory"
	release
# 187 "data/maps/Route117/scripts.pory"
	end
# 188 "data/maps/Route117/scripts.pory"

# 189 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchLydia::
# 190 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_LYDIA_1, Route117_Text_LydiaRematchIntro, Route117_Text_LydiaRematchDefeat
# 191 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostRematch, MSGBOX_AUTOCLOSE
# 192 "data/maps/Route117/scripts.pory"
	end
# 193 "data/maps/Route117/scripts.pory"

# 194 "data/maps/Route117/scripts.pory"
Route117_EventScript_Dylan::
# 195 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_DYLAN_1, Route117_Text_DylanIntro, Route117_Text_DylanDefeat, Route117_EventScript_RegisterDylan
# 196 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 197 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchDylan
# 198 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostBattle, MSGBOX_DEFAULT
# 199 "data/maps/Route117/scripts.pory"
	release
# 200 "data/maps/Route117/scripts.pory"
	end
# 201 "data/maps/Route117/scripts.pory"

# 202 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterDylan::
# 203 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 204 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 205 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanRegister, MSGBOX_DEFAULT
# 206 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_DYLAN_1
# 207 "data/maps/Route117/scripts.pory"
	release
# 208 "data/maps/Route117/scripts.pory"
	end
# 209 "data/maps/Route117/scripts.pory"

# 210 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchDylan::
# 211 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_DYLAN_1, Route117_Text_DylanRematchIntro, Route117_Text_DylanRematchDefeat
# 212 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostRematch, MSGBOX_AUTOCLOSE
# 213 "data/maps/Route117/scripts.pory"
	end
# 214 "data/maps/Route117/scripts.pory"

# 215 "data/maps/Route117/scripts.pory"
Route117_EventScript_Maria::
# 216 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_MARIA_1, Route117_Text_MariaIntro, Route117_Text_MariaDefeat, Route117_EventScript_RegisterMaria
# 217 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 218 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchMaria
# 219 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostBattle, MSGBOX_DEFAULT
# 220 "data/maps/Route117/scripts.pory"
	release
# 221 "data/maps/Route117/scripts.pory"
	end
# 222 "data/maps/Route117/scripts.pory"

# 223 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMaria::
# 224 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 225 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 226 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaRegister, MSGBOX_DEFAULT
# 227 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_MARIA_1
# 228 "data/maps/Route117/scripts.pory"
	release
# 229 "data/maps/Route117/scripts.pory"
	end
# 230 "data/maps/Route117/scripts.pory"

# 231 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMaria::
# 232 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_MARIA_1, Route117_Text_MariaRematchIntro, Route117_Text_MariaRematchDefeat
# 233 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostRematch, MSGBOX_AUTOCLOSE
# 234 "data/maps/Route117/scripts.pory"
	end
# 235 "data/maps/Route117/scripts.pory"

# 236 "data/maps/Route117/scripts.pory"
Route117_EventScript_Derek::
# 237 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_DEREK, Route117_Text_DerekIntro, Route117_Text_DerekDefeat
# 238 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
# 239 "data/maps/Route117/scripts.pory"
	end
# 240 "data/maps/Route117/scripts.pory"

# 241 "data/maps/Route117/scripts.pory"
Route117_EventScript_Anna::
# 242 "data/maps/Route117/scripts.pory"
	trainerbattle_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaIntro, Route117_Text_AnnaDefeat, Route117_Text_AnnaNotEnoughMons, Route117_EventScript_RegisterAnna
# 243 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 244 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchAnna
# 245 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostBattle, MSGBOX_DEFAULT
# 246 "data/maps/Route117/scripts.pory"
	release
# 247 "data/maps/Route117/scripts.pory"
	end
# 248 "data/maps/Route117/scripts.pory"

# 249 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterAnna::
# 250 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 251 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 252 "data/maps/Route117/scripts.pory"
	release
# 253 "data/maps/Route117/scripts.pory"
	end
# 254 "data/maps/Route117/scripts.pory"

# 255 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchAnna::
# 256 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaRematchIntro, Route117_Text_AnnaRematchDefeat, Route117_Text_AnnaRematchNotEnoughMons
# 257 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostRematch, MSGBOX_AUTOCLOSE
# 258 "data/maps/Route117/scripts.pory"
	end
# 259 "data/maps/Route117/scripts.pory"

# 260 "data/maps/Route117/scripts.pory"
Route117_EventScript_Meg::
# 261 "data/maps/Route117/scripts.pory"
	trainerbattle_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegIntro, Route117_Text_MegDefeat, Route117_Text_MegNotEnoughMons, Route117_EventScript_RegisterMeg
# 262 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 263 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchMeg
# 264 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostBattle, MSGBOX_DEFAULT
# 265 "data/maps/Route117/scripts.pory"
	release
# 266 "data/maps/Route117/scripts.pory"
	end
# 267 "data/maps/Route117/scripts.pory"

# 268 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMeg::
# 269 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 270 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 271 "data/maps/Route117/scripts.pory"
	release
# 272 "data/maps/Route117/scripts.pory"
	end
# 273 "data/maps/Route117/scripts.pory"

# 274 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMeg::
# 275 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegRematchIntro, Route117_Text_MegRematchDefeat, Route117_Text_MegRematchNotEnoughMons
# 276 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostRematch, MSGBOX_AUTOCLOSE
# 277 "data/maps/Route117/scripts.pory"
	end
# 278 "data/maps/Route117/scripts.pory"

# 279 "data/maps/Route117/scripts.pory"
Route117_EventScript_Melina::
# 280 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_MELINA, Route117_Text_MelinaIntro, Route117_Text_MelinaDefeat
# 281 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MelinaPostBattle, MSGBOX_AUTOCLOSE
# 282 "data/maps/Route117/scripts.pory"
	end
# 283 "data/maps/Route117/scripts.pory"

# 284 "data/maps/Route117/scripts.pory"
Route117_EventScript_Brandi::
# 285 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_BRANDI, Route117_Text_BrandiIntro, Route117_Text_BrandiDefeat
# 286 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_BrandiPostBattle, MSGBOX_AUTOCLOSE
# 287 "data/maps/Route117/scripts.pory"
	end
# 288 "data/maps/Route117/scripts.pory"

# 289 "data/maps/Route117/scripts.pory"
Route117_EventScript_Aisha::
# 290 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_AISHA, Route117_Text_AishaIntro, Route117_Text_AishaDefeat
# 291 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AishaPostBattle, MSGBOX_AUTOCLOSE
# 292 "data/maps/Route117/scripts.pory"
	end
# 293 "data/maps/Route117/scripts.pory"

# 294 "data/maps/Route117/scripts.pory"
Route117_Text_DayCarePokemonHadNewMove:
# 295 "data/maps/Route117/scripts.pory"
	.string "I left my POKéMON at the DAY CARE.\p"
# 296 "data/maps/Route117/scripts.pory"
	.string "When I got it back, it had a new move\n"
# 297 "data/maps/Route117/scripts.pory"
	.string "that I didn't teach it.\l"
# 298 "data/maps/Route117/scripts.pory"
	.string "I was really, really surprised.$"
# 299 "data/maps/Route117/scripts.pory"

# 300 "data/maps/Route117/scripts.pory"
Route117_Text_ArentTheseFlowersPretty:
# 301 "data/maps/Route117/scripts.pory"
	.string "What do you think?\n"
# 302 "data/maps/Route117/scripts.pory"
	.string "Aren't these flowers pretty?\p"
# 303 "data/maps/Route117/scripts.pory"
	.string "I planted them all!$"
# 304 "data/maps/Route117/scripts.pory"

# 305 "data/maps/Route117/scripts.pory"
Route117_Text_AirIsTastyHere:
# 306 "data/maps/Route117/scripts.pory"
	.string "The air is tasty here!$"
# 307 "data/maps/Route117/scripts.pory"

# 308 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignVerdanturf:
# 309 "data/maps/Route117/scripts.pory"
	.string "ROUTE 117\n"
# 310 "data/maps/Route117/scripts.pory"
	.string "{LEFT_ARROW} VERDANTURF TOWN$"
# 311 "data/maps/Route117/scripts.pory"

# 312 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignMauville:
# 313 "data/maps/Route117/scripts.pory"
	.string "ROUTE 117\n"
# 314 "data/maps/Route117/scripts.pory"
	.string "{RIGHT_ARROW} MAUVILLE CITY$"
# 315 "data/maps/Route117/scripts.pory"

# 316 "data/maps/Route117/scripts.pory"
Route117_Text_DayCareSign:
# 317 "data/maps/Route117/scripts.pory"
	.string "POKéMON DAY CARE\n"
# 318 "data/maps/Route117/scripts.pory"
	.string "“Let us raise your POKéMON.”$"

Route117_Text_SpencerCantLetYouShowMeUp::
# 97 "data/maps/Route117/scripts.pory"
	.string "I can't let you show me up like that\n"
	.string "again!\p"
	.string "We've got some serious training to do!$"

Route117_Text_BrenCantLetYouShowMeUp::
# 102 "data/maps/Route117/scripts.pory"
	.string "I can't let you show me up like that\n"
	.string "again!\p"
	.string "We've got some serious training to do!$"

Route117_Text_KyleCantLetYouShowMeUp::
# 107 "data/maps/Route117/scripts.pory"
	.string "I can't let you show me up like that\n"
	.string "again!\p"
	.string "We've got some serious training to do!$"

Route117_Text_SpencerShowMeWhatYouGot::
# 112 "data/maps/Route117/scripts.pory"
	.string "C'mon, MACHOP!\p"
	.string "Show me what you got!$"

Route117_Text_BrenShowMeWhatYouGot::
# 117 "data/maps/Route117/scripts.pory"
	.string "C'mon, PRINPLUP!\p"
	.string "Show me what you got!$"

Route117_Text_KyleShowMeWhatYouGot::
# 122 "data/maps/Route117/scripts.pory"
	.string "C'mon, CHARMELEON!\p"
	.string "Show me what you got!$"
