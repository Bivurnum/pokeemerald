# 4 "data/maps/Route117/scripts.pory"

# 5 "data/maps/Route117/scripts.pory"
.set LOCALID_DAYCARE_MAN, 3
# 6 "data/maps/Route117/scripts.pory"
.set LOCALID_RIVAL2, 25
# 7 "data/maps/Route117/scripts.pory"

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
	call Route117_EventScript_TryMoveDayCareMan
# 14 "data/maps/Route117/scripts.pory"
	end
# 15 "data/maps/Route117/scripts.pory"

# 16 "data/maps/Route117/scripts.pory"
Route117_EventScript_TryMoveDayCareMan::
# 17 "data/maps/Route117/scripts.pory"
	goto_if_unset FLAG_PENDING_DAYCARE_EGG, Route117_EventScript_StopMoveDayCareMan
# 18 "data/maps/Route117/scripts.pory"
	setobjectxyperm LOCALID_DAYCARE_MAN, 47, 6
# 19 "data/maps/Route117/scripts.pory"
Route117_EventScript_StopMoveDayCareMan::
# 20 "data/maps/Route117/scripts.pory"
	return

Route117_EventScript_Rival2::
# 24 "data/maps/Route117/scripts.pory"
	lock
# 25 "data/maps/Route117/scripts.pory"
	compare VAR_TEMP_5, 5
	goto_if_ne Route117_EventScript_Rival2_2
# 35 "data/maps/Route117/scripts.pory"
	checkfriendchoice
# 36 "data/maps/Route117/scripts.pory"
	rival2talk Route117_Text_SpencerShowMeWhatYouGot, Route117_Text_BrenShowMeWhatYouGot, Route117_Text_KyleShowMeWhatYouGot
# 39 "data/maps/Route117/scripts.pory"
	waitmessage
# 40 "data/maps/Route117/scripts.pory"
	waitse
# 41 "data/maps/Route117/scripts.pory"
	switch VAR_RESULT
# 42 "data/maps/Route117/scripts.pory"
	case SPENCER, Route117_EventScript_Rival2_7
# 44 "data/maps/Route117/scripts.pory"
	case BREN, Route117_EventScript_Rival2_8
# 46 "data/maps/Route117/scripts.pory"
	case KYLE, Route117_EventScript_Rival2_9
Route117_EventScript_Rival2_5:
# 49 "data/maps/Route117/scripts.pory"
	waitmoncry
Route117_EventScript_Rival2_1:
# 51 "data/maps/Route117/scripts.pory"
	closemessage
# 52 "data/maps/Route117/scripts.pory"
	release
	end

Route117_EventScript_Rival2_2:
# 26 "data/maps/Route117/scripts.pory"
	applymovement 25, Common_Movement_FacePlayer
# 27 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 28 "data/maps/Route117/scripts.pory"
	rival2talk Route117_Text_SpencerCantLetYouShowMeUp, Route117_Text_BrenCantLetYouShowMeUp, Route117_Text_KyleCantLetYouShowMeUp
# 31 "data/maps/Route117/scripts.pory"
	closemessage
# 32 "data/maps/Route117/scripts.pory"
	setvar VAR_TEMP_5, 5
	goto Route117_EventScript_Rival2_1

Route117_EventScript_Rival2_7:
# 43 "data/maps/Route117/scripts.pory"
	playmoncry SPECIES_CHARMELEON, CRY_MODE_NORMAL
	goto Route117_EventScript_Rival2_5

Route117_EventScript_Rival2_8:
# 45 "data/maps/Route117/scripts.pory"
	playmoncry SPECIES_GROVYLE, CRY_MODE_NORMAL
	goto Route117_EventScript_Rival2_5

Route117_EventScript_Rival2_9:
# 47 "data/maps/Route117/scripts.pory"
	playmoncry SPECIES_PRINPLUP, CRY_MODE_NORMAL
	goto Route117_EventScript_Rival2_5


# 86 "data/maps/Route117/scripts.pory"

# 87 "data/maps/Route117/scripts.pory"
Route117_EventScript_Woman::
# 88 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_ArentTheseFlowersPretty, MSGBOX_NPC
# 89 "data/maps/Route117/scripts.pory"
	end
# 90 "data/maps/Route117/scripts.pory"

# 91 "data/maps/Route117/scripts.pory"
Route117_EventScript_LittleBoy::
# 92 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AirIsTastyHere, MSGBOX_NPC
# 93 "data/maps/Route117/scripts.pory"
	end
# 94 "data/maps/Route117/scripts.pory"

# 95 "data/maps/Route117/scripts.pory"
Route117_EventScript_Girl::
# 96 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCarePokemonHadNewMove, MSGBOX_NPC
# 97 "data/maps/Route117/scripts.pory"
	end
# 98 "data/maps/Route117/scripts.pory"

# 99 "data/maps/Route117/scripts.pory"
Route117_EventScript_RouteSignVerdanturf::
# 100 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignVerdanturf, MSGBOX_SIGN
# 101 "data/maps/Route117/scripts.pory"
	end
# 102 "data/maps/Route117/scripts.pory"

# 103 "data/maps/Route117/scripts.pory"
Route117_EventScript_RouteSignMauville::
# 104 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignMauville, MSGBOX_SIGN
# 105 "data/maps/Route117/scripts.pory"
	end
# 106 "data/maps/Route117/scripts.pory"

# 107 "data/maps/Route117/scripts.pory"
Route117_EventScript_DayCareSign::
# 108 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCareSign, MSGBOX_SIGN
# 109 "data/maps/Route117/scripts.pory"
	end
# 110 "data/maps/Route117/scripts.pory"

# 111 "data/maps/Route117/scripts.pory"
Route117_EventScript_Isaac::
# 112 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_ISAAC_1, Route117_Text_IsaacIntro, Route117_Text_IsaacDefeat, Route117_EventScript_RegisterIsaac
# 113 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 114 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchIsaac
# 115 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacPostBattle, MSGBOX_DEFAULT
# 116 "data/maps/Route117/scripts.pory"
	release
# 117 "data/maps/Route117/scripts.pory"
	end
# 118 "data/maps/Route117/scripts.pory"

# 119 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterIsaac::
# 120 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 121 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 122 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacRegister, MSGBOX_DEFAULT
# 123 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ISAAC_1
# 124 "data/maps/Route117/scripts.pory"
	release
# 125 "data/maps/Route117/scripts.pory"
	end
# 126 "data/maps/Route117/scripts.pory"

# 127 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchIsaac::
# 128 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_ISAAC_1, Route117_Text_IsaacRematchIntro, Route117_Text_IsaacRematchDefeat
# 129 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacPostRematch, MSGBOX_AUTOCLOSE
# 130 "data/maps/Route117/scripts.pory"
	end
# 131 "data/maps/Route117/scripts.pory"

# 132 "data/maps/Route117/scripts.pory"
Route117_EventScript_Lydia::
# 133 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_LYDIA_1, Route117_Text_LydiaIntro, Route117_Text_LydiaDefeat, Route117_EventScript_RegisterLydia
# 134 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 135 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchLydia
# 136 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostBattle, MSGBOX_DEFAULT
# 137 "data/maps/Route117/scripts.pory"
	release
# 138 "data/maps/Route117/scripts.pory"
	end
# 139 "data/maps/Route117/scripts.pory"

# 140 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterLydia::
# 141 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 142 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 143 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaRegister, MSGBOX_DEFAULT
# 144 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_LYDIA_1
# 145 "data/maps/Route117/scripts.pory"
	release
# 146 "data/maps/Route117/scripts.pory"
	end
# 147 "data/maps/Route117/scripts.pory"

# 148 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchLydia::
# 149 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_LYDIA_1, Route117_Text_LydiaRematchIntro, Route117_Text_LydiaRematchDefeat
# 150 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostRematch, MSGBOX_AUTOCLOSE
# 151 "data/maps/Route117/scripts.pory"
	end
# 152 "data/maps/Route117/scripts.pory"

# 153 "data/maps/Route117/scripts.pory"
Route117_EventScript_Dylan::
# 154 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_DYLAN_1, Route117_Text_DylanIntro, Route117_Text_DylanDefeat, Route117_EventScript_RegisterDylan
# 155 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 156 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchDylan
# 157 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostBattle, MSGBOX_DEFAULT
# 158 "data/maps/Route117/scripts.pory"
	release
# 159 "data/maps/Route117/scripts.pory"
	end
# 160 "data/maps/Route117/scripts.pory"

# 161 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterDylan::
# 162 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 163 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 164 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanRegister, MSGBOX_DEFAULT
# 165 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_DYLAN_1
# 166 "data/maps/Route117/scripts.pory"
	release
# 167 "data/maps/Route117/scripts.pory"
	end
# 168 "data/maps/Route117/scripts.pory"

# 169 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchDylan::
# 170 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_DYLAN_1, Route117_Text_DylanRematchIntro, Route117_Text_DylanRematchDefeat
# 171 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostRematch, MSGBOX_AUTOCLOSE
# 172 "data/maps/Route117/scripts.pory"
	end
# 173 "data/maps/Route117/scripts.pory"

# 174 "data/maps/Route117/scripts.pory"
Route117_EventScript_Maria::
# 175 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_MARIA_1, Route117_Text_MariaIntro, Route117_Text_MariaDefeat, Route117_EventScript_RegisterMaria
# 176 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 177 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchMaria
# 178 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostBattle, MSGBOX_DEFAULT
# 179 "data/maps/Route117/scripts.pory"
	release
# 180 "data/maps/Route117/scripts.pory"
	end
# 181 "data/maps/Route117/scripts.pory"

# 182 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMaria::
# 183 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 184 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 185 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaRegister, MSGBOX_DEFAULT
# 186 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_MARIA_1
# 187 "data/maps/Route117/scripts.pory"
	release
# 188 "data/maps/Route117/scripts.pory"
	end
# 189 "data/maps/Route117/scripts.pory"

# 190 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMaria::
# 191 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_MARIA_1, Route117_Text_MariaRematchIntro, Route117_Text_MariaRematchDefeat
# 192 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostRematch, MSGBOX_AUTOCLOSE
# 193 "data/maps/Route117/scripts.pory"
	end
# 194 "data/maps/Route117/scripts.pory"

# 195 "data/maps/Route117/scripts.pory"
Route117_EventScript_Derek::
# 196 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_DEREK, Route117_Text_DerekIntro, Route117_Text_DerekDefeat
# 197 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
# 198 "data/maps/Route117/scripts.pory"
	end
# 199 "data/maps/Route117/scripts.pory"

# 200 "data/maps/Route117/scripts.pory"
Route117_EventScript_Anna::
# 201 "data/maps/Route117/scripts.pory"
	trainerbattle_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaIntro, Route117_Text_AnnaDefeat, Route117_Text_AnnaNotEnoughMons, Route117_EventScript_RegisterAnna
# 202 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 203 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchAnna
# 204 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostBattle, MSGBOX_DEFAULT
# 205 "data/maps/Route117/scripts.pory"
	release
# 206 "data/maps/Route117/scripts.pory"
	end
# 207 "data/maps/Route117/scripts.pory"

# 208 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterAnna::
# 209 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 210 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 211 "data/maps/Route117/scripts.pory"
	release
# 212 "data/maps/Route117/scripts.pory"
	end
# 213 "data/maps/Route117/scripts.pory"

# 214 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchAnna::
# 215 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaRematchIntro, Route117_Text_AnnaRematchDefeat, Route117_Text_AnnaRematchNotEnoughMons
# 216 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostRematch, MSGBOX_AUTOCLOSE
# 217 "data/maps/Route117/scripts.pory"
	end
# 218 "data/maps/Route117/scripts.pory"

# 219 "data/maps/Route117/scripts.pory"
Route117_EventScript_Meg::
# 220 "data/maps/Route117/scripts.pory"
	trainerbattle_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegIntro, Route117_Text_MegDefeat, Route117_Text_MegNotEnoughMons, Route117_EventScript_RegisterMeg
# 221 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 222 "data/maps/Route117/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchMeg
# 223 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostBattle, MSGBOX_DEFAULT
# 224 "data/maps/Route117/scripts.pory"
	release
# 225 "data/maps/Route117/scripts.pory"
	end
# 226 "data/maps/Route117/scripts.pory"

# 227 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMeg::
# 228 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 229 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 230 "data/maps/Route117/scripts.pory"
	release
# 231 "data/maps/Route117/scripts.pory"
	end
# 232 "data/maps/Route117/scripts.pory"

# 233 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMeg::
# 234 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegRematchIntro, Route117_Text_MegRematchDefeat, Route117_Text_MegRematchNotEnoughMons
# 235 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostRematch, MSGBOX_AUTOCLOSE
# 236 "data/maps/Route117/scripts.pory"
	end
# 237 "data/maps/Route117/scripts.pory"

# 238 "data/maps/Route117/scripts.pory"
Route117_EventScript_Melina::
# 239 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_MELINA, Route117_Text_MelinaIntro, Route117_Text_MelinaDefeat
# 240 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MelinaPostBattle, MSGBOX_AUTOCLOSE
# 241 "data/maps/Route117/scripts.pory"
	end
# 242 "data/maps/Route117/scripts.pory"

# 243 "data/maps/Route117/scripts.pory"
Route117_EventScript_Brandi::
# 244 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_BRANDI, Route117_Text_BrandiIntro, Route117_Text_BrandiDefeat
# 245 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_BrandiPostBattle, MSGBOX_AUTOCLOSE
# 246 "data/maps/Route117/scripts.pory"
	end
# 247 "data/maps/Route117/scripts.pory"

# 248 "data/maps/Route117/scripts.pory"
Route117_EventScript_Aisha::
# 249 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_AISHA, Route117_Text_AishaIntro, Route117_Text_AishaDefeat
# 250 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AishaPostBattle, MSGBOX_AUTOCLOSE
# 251 "data/maps/Route117/scripts.pory"
	end
# 252 "data/maps/Route117/scripts.pory"

# 253 "data/maps/Route117/scripts.pory"
Route117_Text_DayCarePokemonHadNewMove:
# 254 "data/maps/Route117/scripts.pory"
	.string "I left my POKéMON at the DAY CARE.\p"
# 255 "data/maps/Route117/scripts.pory"
	.string "When I got it back, it had a new move\n"
# 256 "data/maps/Route117/scripts.pory"
	.string "that I didn't teach it.\l"
# 257 "data/maps/Route117/scripts.pory"
	.string "I was really, really surprised.$"
# 258 "data/maps/Route117/scripts.pory"

# 259 "data/maps/Route117/scripts.pory"
Route117_Text_ArentTheseFlowersPretty:
# 260 "data/maps/Route117/scripts.pory"
	.string "What do you think?\n"
# 261 "data/maps/Route117/scripts.pory"
	.string "Aren't these flowers pretty?\p"
# 262 "data/maps/Route117/scripts.pory"
	.string "I planted them all!$"
# 263 "data/maps/Route117/scripts.pory"

# 264 "data/maps/Route117/scripts.pory"
Route117_Text_AirIsTastyHere:
# 265 "data/maps/Route117/scripts.pory"
	.string "The air is tasty here!$"
# 266 "data/maps/Route117/scripts.pory"

# 267 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignVerdanturf:
# 268 "data/maps/Route117/scripts.pory"
	.string "ROUTE 117\n"
# 269 "data/maps/Route117/scripts.pory"
	.string "{LEFT_ARROW} VERDANTURF TOWN$"
# 270 "data/maps/Route117/scripts.pory"

# 271 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignMauville:
# 272 "data/maps/Route117/scripts.pory"
	.string "ROUTE 117\n"
# 273 "data/maps/Route117/scripts.pory"
	.string "{RIGHT_ARROW} MAUVILLE CITY$"
# 274 "data/maps/Route117/scripts.pory"

# 275 "data/maps/Route117/scripts.pory"
Route117_Text_DayCareSign:
# 276 "data/maps/Route117/scripts.pory"
	.string "POKéMON DAY CARE\n"
# 277 "data/maps/Route117/scripts.pory"
	.string "“Let us raise your POKéMON.”$"

Route117_Text_SpencerCantLetYouShowMeUp::
# 56 "data/maps/Route117/scripts.pory"
	.string "I can't let you show me up like that\n"
	.string "again!\p"
	.string "We've got some serious training to do!$"

Route117_Text_BrenCantLetYouShowMeUp::
# 61 "data/maps/Route117/scripts.pory"
	.string "I can't let you show me up like that\n"
	.string "again!\p"
	.string "We've got some serious training to do!$"

Route117_Text_KyleCantLetYouShowMeUp::
# 66 "data/maps/Route117/scripts.pory"
	.string "I can't let you show me up like that\n"
	.string "again!\p"
	.string "We've got some serious training to do!$"

Route117_Text_SpencerShowMeWhatYouGot::
# 71 "data/maps/Route117/scripts.pory"
	.string "C'mon, GROVYLE!\p"
	.string "Show me what you got!$"

Route117_Text_BrenShowMeWhatYouGot::
# 76 "data/maps/Route117/scripts.pory"
	.string "C'mon, PRINPLUP!\p"
	.string "Show me what you got!$"

Route117_Text_KyleShowMeWhatYouGot::
# 81 "data/maps/Route117/scripts.pory"
	.string "C'mon, CHARMELEON!\p"
	.string "Show me what you got!$"
