# 3 "data/maps/SlateportCity/scripts.pory"

# 4 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_FAT_MAN, 1
# 5 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_MAN_1, 2
# 6 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_RICH_BOY, 3
# 7 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_1, 5
# 8 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_COOK, 6
# 9 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_OLD_WOMAN, 7
# 10 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GIRL, 8
# 11 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_TY, 9
# 12 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GABBY, 10
# 13 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_CAPT_STERN, 11
# 14 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_2, 18
# 15 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_3, 19
# 16 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_4, 26
# 17 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_5, 27
# 18 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_6, 28
# 19 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_7, 29
# 20 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_8, 30
# 21 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_9, 31
# 22 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_11, 33
# 23 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_SCOTT, 35
# 24 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_RIVAL1, 36
# 25 "data/maps/SlateportCity/scripts.pory"

# 26 "data/maps/SlateportCity/scripts.pory"
@ Note: LOCALID_SLATEPORT_ENERGY_GURU is a local id for this map used elsewhere. It's defined in event_objects.h
# 27 "data/maps/SlateportCity/scripts.pory"

# 28 "data/maps/SlateportCity/scripts.pory"
SlateportCity_MapScripts::
# 29 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_OnTransition
# 30 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_OnFrame
# 31 "data/maps/SlateportCity/scripts.pory"
	.byte 0
# 32 "data/maps/SlateportCity/scripts.pory"

# 33 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnTransition:
# 34 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 0
# 35 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_EnterSlateport
# 36 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_MovePeopleForSternInterview
# 37 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_SetReadyForScottScene
# 38 "data/maps/SlateportCity/scripts.pory"
	end
# 39 "data/maps/SlateportCity/scripts.pory"

# 40 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnterSlateport::
# 41 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 42 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 43 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
# 44 "data/maps/SlateportCity/scripts.pory"
	return
# 45 "data/maps/SlateportCity/scripts.pory"

# 46 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MovePeopleForSternInterview::
# 47 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_CAPT_STERN, 28, 13
# 48 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_OLD_WOMAN, 25, 13
# 49 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_RICH_BOY, 25, 14
# 50 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_COOK, 27, 16
# 51 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_GIRL, 28, 16
# 52 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_FAT_MAN, 29, 16
# 53 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_MAN_1, 31, 14
# 54 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_CAPT_STERN, MOVEMENT_TYPE_FACE_DOWN
# 55 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 56 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_RICH_BOY, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
# 57 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_COOK, MOVEMENT_TYPE_FACE_UP
# 58 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_GIRL, MOVEMENT_TYPE_FACE_UP
# 59 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_FAT_MAN, MOVEMENT_TYPE_FACE_UP
# 60 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_MAN_1, MOVEMENT_TYPE_FACE_LEFT
# 61 "data/maps/SlateportCity/scripts.pory"
	return
# 62 "data/maps/SlateportCity/scripts.pory"

# 63 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SetReadyForScottScene::
# 64 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 65 "data/maps/SlateportCity/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 66 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_0x8004, 30, SlateportCity_EventScript_MoveScottLeft
# 67 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 23, 27
# 68 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 69 "data/maps/SlateportCity/scripts.pory"
	return
# 70 "data/maps/SlateportCity/scripts.pory"

# 71 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MoveScottLeft::
# 72 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 22, 27
# 73 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 74 "data/maps/SlateportCity/scripts.pory"
	return
# 75 "data/maps/SlateportCity/scripts.pory"

# 76 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnFrame:
# 77 "data/maps/SlateportCity/scripts.pory"
	map_script_2 VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_ScottScene
# 78 "data/maps/SlateportCity/scripts.pory"
	.2byte 0
# 79 "data/maps/SlateportCity/scripts.pory"

# 80 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottScene::
# 81 "data/maps/SlateportCity/scripts.pory"
	lockall
# 82 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 83 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceScott
# 84 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottApproachPlayer
# 85 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 86 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDroveTeamAquaAway, MSGBOX_DEFAULT
# 87 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 88 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 89 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 90 "data/maps/SlateportCity/scripts.pory"
	delay 60
# 91 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MaybeThisTrainer, MSGBOX_DEFAULT
# 92 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 93 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 94 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_LetsRegisterEachOther, MSGBOX_DEFAULT
# 95 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 96 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 97 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 98 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RegisteredScott, MSGBOX_DEFAULT
# 99 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 100 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 101 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 102 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
# 103 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou, MSGBOX_DEFAULT
# 104 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 105 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExit
# 106 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 107 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 108 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 10, 12
# 109 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_DOWN
# 110 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 111 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 2
# 112 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 113 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 114 "data/maps/SlateportCity/scripts.pory"
	end
# 115 "data/maps/SlateportCity/scripts.pory"

# 116 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceScott:
# 117 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 118 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 119 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 120 "data/maps/SlateportCity/scripts.pory"
	step_end
# 121 "data/maps/SlateportCity/scripts.pory"

# 122 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottApproachPlayer:
# 123 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 124 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 125 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 126 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 127 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 128 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 129 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 130 "data/maps/SlateportCity/scripts.pory"
	step_end
# 131 "data/maps/SlateportCity/scripts.pory"

# 132 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExit:
# 133 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 134 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 135 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 136 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 137 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 138 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 139 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 140 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 141 "data/maps/SlateportCity/scripts.pory"
	step_end
# 142 "data/maps/SlateportCity/scripts.pory"

# 143 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyGuru::
# 144 "data/maps/SlateportCity/scripts.pory"
	lock
# 145 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 146 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_EnergyGuruSellWhatYouNeed
# 147 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 148 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_EnergyGuru
# 149 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 150 "data/maps/SlateportCity/scripts.pory"
	release
# 151 "data/maps/SlateportCity/scripts.pory"
	end
# 152 "data/maps/SlateportCity/scripts.pory"

# 153 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 154 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_EnergyGuru:
# 155 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PROTEIN
# 156 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_IRON
# 157 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CARBOS
# 158 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ZINC
# 159 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CALCIUM
# 160 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HP_UP
# 161 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 162 "data/maps/SlateportCity/scripts.pory"
	release
# 163 "data/maps/SlateportCity/scripts.pory"
	end
# 164 "data/maps/SlateportCity/scripts.pory"

# 165 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EffortRibbonWoman::
# 166 "data/maps/SlateportCity/scripts.pory"
	lock
# 167 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 168 "data/maps/SlateportCity/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 169 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhYourPokemon, MSGBOX_DEFAULT
# 170 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
# 171 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_EventScript_MonHasEffortRibbon
# 172 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
# 173 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_MonEVsNotMaxed
# 174 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
# 175 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 176 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ReceivedEffortRibbon
# 177 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 178 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
# 179 "data/maps/SlateportCity/scripts.pory"
	special GiveLeadMonEffortRibbon
# 180 "data/maps/SlateportCity/scripts.pory"
	release
# 181 "data/maps/SlateportCity/scripts.pory"
	end
# 182 "data/maps/SlateportCity/scripts.pory"

# 183 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonEVsNotMaxed::
# 184 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoForItLittleHarder, MSGBOX_DEFAULT
# 185 "data/maps/SlateportCity/scripts.pory"
	release
# 186 "data/maps/SlateportCity/scripts.pory"
	end
# 187 "data/maps/SlateportCity/scripts.pory"

# 188 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonHasEffortRibbon::
# 189 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
# 190 "data/maps/SlateportCity/scripts.pory"
	release
# 191 "data/maps/SlateportCity/scripts.pory"
	end
# 192 "data/maps/SlateportCity/scripts.pory"

# 193 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Cook::
# 194 "data/maps/SlateportCity/scripts.pory"
	lock
# 195 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 196 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_CookSternInterview
# 197 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaweedFullOfLife, MSGBOX_DEFAULT
# 198 "data/maps/SlateportCity/scripts.pory"
	release
# 199 "data/maps/SlateportCity/scripts.pory"
	end
# 200 "data/maps/SlateportCity/scripts.pory"

# 201 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CookSternInterview::
# 202 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainComeBackWithBigFish, MSGBOX_DEFAULT
# 203 "data/maps/SlateportCity/scripts.pory"
	release
# 204 "data/maps/SlateportCity/scripts.pory"
	end
# 205 "data/maps/SlateportCity/scripts.pory"

# 206 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWoman::
# 207 "data/maps/SlateportCity/scripts.pory"
	lock
# 208 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 209 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_OldWomanSternInterview
# 210 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HowTownIsBornAndGrows, MSGBOX_DEFAULT
# 211 "data/maps/SlateportCity/scripts.pory"
	release
# 212 "data/maps/SlateportCity/scripts.pory"
	end
# 213 "data/maps/SlateportCity/scripts.pory"

# 214 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWomanSternInterview::
# 215 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptSternBeingInterviewed, MSGBOX_DEFAULT
# 216 "data/maps/SlateportCity/scripts.pory"
	release
# 217 "data/maps/SlateportCity/scripts.pory"
	end
# 218 "data/maps/SlateportCity/scripts.pory"

# 219 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Girl::
# 220 "data/maps/SlateportCity/scripts.pory"
	lock
# 221 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 222 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_GirlSternInterview
# 223 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_GirlSecretBase
# 224 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SlateportWonderfulPlace, MSGBOX_DEFAULT
# 225 "data/maps/SlateportCity/scripts.pory"
	release
# 226 "data/maps/SlateportCity/scripts.pory"
	end
# 227 "data/maps/SlateportCity/scripts.pory"

# 228 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSternInterview::
# 229 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_InterviewerSoCool, MSGBOX_DEFAULT
# 230 "data/maps/SlateportCity/scripts.pory"
	release
# 231 "data/maps/SlateportCity/scripts.pory"
	end
# 232 "data/maps/SlateportCity/scripts.pory"

# 233 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSecretBase::
# 234 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyBricksSoDecorWontGetDirty, MSGBOX_DEFAULT
# 235 "data/maps/SlateportCity/scripts.pory"
	release
# 236 "data/maps/SlateportCity/scripts.pory"
	end
# 237 "data/maps/SlateportCity/scripts.pory"

# 238 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoy::
# 239 "data/maps/SlateportCity/scripts.pory"
	lock
# 240 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 241 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_RichBoySternInterview
# 242 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoingToCompeteInBattleTent, MSGBOX_DEFAULT
# 243 "data/maps/SlateportCity/scripts.pory"
	release
# 244 "data/maps/SlateportCity/scripts.pory"
	end
# 245 "data/maps/SlateportCity/scripts.pory"

# 246 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoySternInterview::
# 247 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternSaysDiscoveredSomething, MSGBOX_DEFAULT
# 248 "data/maps/SlateportCity/scripts.pory"
	release
# 249 "data/maps/SlateportCity/scripts.pory"
	end
# 250 "data/maps/SlateportCity/scripts.pory"

# 251 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatMan::
# 252 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_FatManSternInterview
# 253 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BushedHikingFromMauville, MSGBOX_NPC
# 254 "data/maps/SlateportCity/scripts.pory"
	end
# 255 "data/maps/SlateportCity/scripts.pory"

# 256 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatManSternInterview::
# 257 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AmIOnTV, MSGBOX_SIGN
# 258 "data/maps/SlateportCity/scripts.pory"
	end
# 259 "data/maps/SlateportCity/scripts.pory"

# 260 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1::
# 261 "data/maps/SlateportCity/scripts.pory"
	lock
# 262 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 263 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_Man1SternInterview
# 264 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
# 265 "data/maps/SlateportCity/scripts.pory"
	release
# 266 "data/maps/SlateportCity/scripts.pory"
	end
# 267 "data/maps/SlateportCity/scripts.pory"

# 268 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1SternInterview::
# 269 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainsACelebrity, MSGBOX_DEFAULT
# 270 "data/maps/SlateportCity/scripts.pory"
	release
# 271 "data/maps/SlateportCity/scripts.pory"
	end
# 272 "data/maps/SlateportCity/scripts.pory"

# 273 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1::
# 274 "data/maps/SlateportCity/scripts.pory"
	lock
# 275 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 276 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_EventScript_Woman1AquaGone
# 277 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsLongLineOverThere, MSGBOX_DEFAULT
# 278 "data/maps/SlateportCity/scripts.pory"
	release
# 279 "data/maps/SlateportCity/scripts.pory"
	end
# 280 "data/maps/SlateportCity/scripts.pory"

# 281 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1AquaGone::
# 282 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_VisitedMuseumOften, MSGBOX_DEFAULT
# 283 "data/maps/SlateportCity/scripts.pory"
	release
# 284 "data/maps/SlateportCity/scripts.pory"
	end
# 285 "data/maps/SlateportCity/scripts.pory"

# 286 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BattleTentSign::
# 287 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
# 288 "data/maps/SlateportCity/scripts.pory"
	end
# 289 "data/maps/SlateportCity/scripts.pory"

# 290 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardSign::
# 291 "data/maps/SlateportCity/scripts.pory"
	lockall
# 292 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_SternsShipyardFerryComplete
# 293 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_EventScript_SternsShipyardNearsCompletion
# 294 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardWantedSign, MSGBOX_DEFAULT
# 295 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 296 "data/maps/SlateportCity/scripts.pory"
	end
# 297 "data/maps/SlateportCity/scripts.pory"

# 298 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardNearsCompletion::
# 299 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardNearsCompletion, MSGBOX_DEFAULT
# 300 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 301 "data/maps/SlateportCity/scripts.pory"
	end
# 302 "data/maps/SlateportCity/scripts.pory"

# 303 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardFerryComplete::
# 304 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardFerryComplete, MSGBOX_DEFAULT
# 305 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 306 "data/maps/SlateportCity/scripts.pory"
	end
# 307 "data/maps/SlateportCity/scripts.pory"

# 308 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokemonFanClubSign::
# 309 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PokemonFanClubSign, MSGBOX_SIGN
# 310 "data/maps/SlateportCity/scripts.pory"
	end
# 311 "data/maps/SlateportCity/scripts.pory"

# 312 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OceanicMuseumSign::
# 313 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
# 314 "data/maps/SlateportCity/scripts.pory"
	end
# 315 "data/maps/SlateportCity/scripts.pory"

# 316 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CitySign::
# 317 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
# 318 "data/maps/SlateportCity/scripts.pory"
	end
# 319 "data/maps/SlateportCity/scripts.pory"

# 320 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MarketSign::
# 321 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
# 322 "data/maps/SlateportCity/scripts.pory"
	end
# 323 "data/maps/SlateportCity/scripts.pory"

# 324 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSign::
# 325 "data/maps/SlateportCity/scripts.pory"
	lockall
# 326 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_HarborSignFerryComplete
# 327 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborFerryUnderConstruction, MSGBOX_DEFAULT
# 328 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 329 "data/maps/SlateportCity/scripts.pory"
	end
# 330 "data/maps/SlateportCity/scripts.pory"

# 331 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSignFerryComplete::
# 332 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborSign, MSGBOX_DEFAULT
# 333 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 334 "data/maps/SlateportCity/scripts.pory"
	end
# 335 "data/maps/SlateportCity/scripts.pory"

# 336 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NameRatersHouseSign::
# 337 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_NameRatersHouseSign, MSGBOX_SIGN
# 338 "data/maps/SlateportCity/scripts.pory"
	end
# 339 "data/maps/SlateportCity/scripts.pory"

# 340 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Maniac::
# 341 "data/maps/SlateportCity/scripts.pory"
	lock
# 342 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 343 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_ManiacSternInterview
# 344 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 345 "data/maps/SlateportCity/scripts.pory"
	release
# 346 "data/maps/SlateportCity/scripts.pory"
	end
# 347 "data/maps/SlateportCity/scripts.pory"

# 348 "data/maps/SlateportCity/scripts.pory"
@ Unclear if the text here was meant to be different, but its not
# 349 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ManiacSternInterview::
# 350 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 351 "data/maps/SlateportCity/scripts.pory"
	release
# 352 "data/maps/SlateportCity/scripts.pory"
	end
# 353 "data/maps/SlateportCity/scripts.pory"

# 354 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman2::
# 355 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CantChangeTradeMonName, MSGBOX_NPC
# 356 "data/maps/SlateportCity/scripts.pory"
	end
# 357 "data/maps/SlateportCity/scripts.pory"

# 358 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor1::
# 359 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
# 360 "data/maps/SlateportCity/scripts.pory"
	end
# 361 "data/maps/SlateportCity/scripts.pory"

# 362 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor2::
# 363 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SinkOldBoats, MSGBOX_NPC
# 364 "data/maps/SlateportCity/scripts.pory"
	end
# 365 "data/maps/SlateportCity/scripts.pory"

# 366 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokefanF::
# 367 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyTooMuch, MSGBOX_NPC
# 368 "data/maps/SlateportCity/scripts.pory"
	end
# 369 "data/maps/SlateportCity/scripts.pory"

# 370 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man2::
# 371 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentBuiltRecently, MSGBOX_NPC
# 372 "data/maps/SlateportCity/scripts.pory"
	end

SlateportCity_EventScript_Rival1::
# 376 "data/maps/SlateportCity/scripts.pory"
	lock
# 377 "data/maps/SlateportCity/scripts.pory"
	applymovement 36, Common_Movement_FacePlayer
# 378 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 379 "data/maps/SlateportCity/scripts.pory"
	compare VAR_TEMP_5, 5
	goto_if_ne SlateportCity_EventScript_Rival1_2
# 387 "data/maps/SlateportCity/scripts.pory"
	rival1talk SlateportCity_Text_SpencerTalked, SlateportCity_Text_BrenTalked, SlateportCity_Text_KyleTalked
# 390 "data/maps/SlateportCity/scripts.pory"
	closemessage
SlateportCity_EventScript_Rival1_1:
# 392 "data/maps/SlateportCity/scripts.pory"
	release
	end

SlateportCity_EventScript_Rival1_2:
# 380 "data/maps/SlateportCity/scripts.pory"
	rival1talk SlateportCity_Text_Spencer, SlateportCity_Text_Bren, SlateportCity_Text_Kyle
# 383 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 384 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_TEMP_5, 5
	goto SlateportCity_EventScript_Rival1_1


# 432 "data/maps/SlateportCity/scripts.pory"

# 433 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt1::
# 434 "data/maps/SlateportCity/scripts.pory"
	lock
# 435 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 436 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_QuitPushing, MSGBOX_DEFAULT
# 437 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 438 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_FaceOriginalDirection
# 439 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 440 "data/maps/SlateportCity/scripts.pory"
	release
# 441 "data/maps/SlateportCity/scripts.pory"
	end
# 442 "data/maps/SlateportCity/scripts.pory"

# 443 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt2::
# 444 "data/maps/SlateportCity/scripts.pory"
	lock
# 445 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 446 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaHasPolicy, MSGBOX_DEFAULT
# 447 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 448 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_FaceOriginalDirection
# 449 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 450 "data/maps/SlateportCity/scripts.pory"
	release
# 451 "data/maps/SlateportCity/scripts.pory"
	end
# 452 "data/maps/SlateportCity/scripts.pory"

# 453 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt3::
# 454 "data/maps/SlateportCity/scripts.pory"
	lock
# 455 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 456 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BossIsBrilliant, MSGBOX_DEFAULT
# 457 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 458 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, Common_Movement_FaceOriginalDirection
# 459 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 460 "data/maps/SlateportCity/scripts.pory"
	release
# 461 "data/maps/SlateportCity/scripts.pory"
	end
# 462 "data/maps/SlateportCity/scripts.pory"

# 463 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt4::
# 464 "data/maps/SlateportCity/scripts.pory"
	lock
# 465 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 466 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsNewSchemeIWonder, MSGBOX_DEFAULT
# 467 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 468 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_4, Common_Movement_FaceOriginalDirection
# 469 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 470 "data/maps/SlateportCity/scripts.pory"
	release
# 471 "data/maps/SlateportCity/scripts.pory"
	end
# 472 "data/maps/SlateportCity/scripts.pory"

# 473 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt5::
# 474 "data/maps/SlateportCity/scripts.pory"
	lock
# 475 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 476 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldTakeItAll, MSGBOX_DEFAULT
# 477 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 478 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, Common_Movement_FaceOriginalDirection
# 479 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 480 "data/maps/SlateportCity/scripts.pory"
	release
# 481 "data/maps/SlateportCity/scripts.pory"
	end
# 482 "data/maps/SlateportCity/scripts.pory"

# 483 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt6::
# 484 "data/maps/SlateportCity/scripts.pory"
	lock
# 485 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 486 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontButtIn, MSGBOX_DEFAULT
# 487 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 488 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_6, Common_Movement_FaceOriginalDirection
# 489 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 490 "data/maps/SlateportCity/scripts.pory"
	release
# 491 "data/maps/SlateportCity/scripts.pory"
	end
# 492 "data/maps/SlateportCity/scripts.pory"

# 493 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt7::
# 494 "data/maps/SlateportCity/scripts.pory"
	lock
# 495 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 496 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RemindsMeOfLongLineForGames, MSGBOX_DEFAULT
# 497 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 498 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_7, Common_Movement_FaceOriginalDirection
# 499 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 500 "data/maps/SlateportCity/scripts.pory"
	release
# 501 "data/maps/SlateportCity/scripts.pory"
	end
# 502 "data/maps/SlateportCity/scripts.pory"

# 503 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt8::
# 504 "data/maps/SlateportCity/scripts.pory"
	lock
# 505 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 506 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhyAreWeLiningUp, MSGBOX_DEFAULT
# 507 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 508 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_8, Common_Movement_FaceOriginalDirection
# 509 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 510 "data/maps/SlateportCity/scripts.pory"
	release
# 511 "data/maps/SlateportCity/scripts.pory"
	end
# 512 "data/maps/SlateportCity/scripts.pory"

# 513 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt9::
# 514 "data/maps/SlateportCity/scripts.pory"
	lock
# 515 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 516 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 517 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_ExclamationMark
# 518 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 519 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_Delay48
# 520 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 521 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatDoYouWant, MSGBOX_DEFAULT
# 522 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 523 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 524 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 525 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 526 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 527 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 528 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 529 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_IllReadSignForYou, MSGBOX_DEFAULT
# 530 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 531 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 532 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 533 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 534 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 535 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SaysSomethingLikeSeaIsEndless, MSGBOX_DEFAULT
# 536 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 537 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 538 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 539 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 540 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 541 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 542 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 543 "data/maps/SlateportCity/scripts.pory"
	release
# 544 "data/maps/SlateportCity/scripts.pory"
	end
# 545 "data/maps/SlateportCity/scripts.pory"

# 546 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_DelayAquaGrunt:
# 547 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 548 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 549 "data/maps/SlateportCity/scripts.pory"
	step_end
# 550 "data/maps/SlateportCity/scripts.pory"

# 551 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt10::
# 552 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldveBroughtMyGameBoy, MSGBOX_SIGN
# 553 "data/maps/SlateportCity/scripts.pory"
	end
# 554 "data/maps/SlateportCity/scripts.pory"

# 555 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt11::
# 556 "data/maps/SlateportCity/scripts.pory"
	lock
# 557 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 558 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HotSpringsAfterOperation, MSGBOX_DEFAULT
# 559 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 560 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_11, Common_Movement_FaceOriginalDirection
# 561 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 562 "data/maps/SlateportCity/scripts.pory"
	release
# 563 "data/maps/SlateportCity/scripts.pory"
	end
# 564 "data/maps/SlateportCity/scripts.pory"

# 565 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DollClerk::
# 566 "data/maps/SlateportCity/scripts.pory"
	lock
# 567 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 568 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 569 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 570 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor_Dolls
# 571 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 572 "data/maps/SlateportCity/scripts.pory"
	release
# 573 "data/maps/SlateportCity/scripts.pory"
	end
# 574 "data/maps/SlateportCity/scripts.pory"

# 575 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 576 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor_Dolls:
# 577 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_AZURILL_DOLL
# 578 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_MARILL_DOLL
# 579 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_SKITTY_DOLL
# 580 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_NONE
# 581 "data/maps/SlateportCity/scripts.pory"
	release
# 582 "data/maps/SlateportCity/scripts.pory"
	end
# 583 "data/maps/SlateportCity/scripts.pory"

# 584 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ComeBackWithSecretPower::
# 585 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_ComeBackWithSecretPower, MSGBOX_DEFAULT
# 586 "data/maps/SlateportCity/scripts.pory"
	release
# 587 "data/maps/SlateportCity/scripts.pory"
	end
# 588 "data/maps/SlateportCity/scripts.pory"

# 589 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DecorClerk::
# 590 "data/maps/SlateportCity/scripts.pory"
	lock
# 591 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 592 "data/maps/SlateportCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_ComeBackWithSecretPower
# 593 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 594 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 595 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor
# 596 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 597 "data/maps/SlateportCity/scripts.pory"
	release
# 598 "data/maps/SlateportCity/scripts.pory"
	end
# 599 "data/maps/SlateportCity/scripts.pory"

# 600 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 601 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor:
# 602 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BRICK
# 603 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BRICK
# 604 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BRICK
# 605 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BALLOON
# 606 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BALLOON
# 607 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BALLOON
# 608 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_LOW_NOTE_MAT
# 609 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_D_NOTE_MAT
# 610 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_E_NOTE_MAT
# 611 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_F_NOTE_MAT
# 612 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_G_NOTE_MAT
# 613 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_A_NOTE_MAT
# 614 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_B_NOTE_MAT
# 615 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_HIGH_NOTE_MAT
# 616 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_NONE
# 617 "data/maps/SlateportCity/scripts.pory"
	release
# 618 "data/maps/SlateportCity/scripts.pory"
	end
# 619 "data/maps/SlateportCity/scripts.pory"

# 620 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PowerTMClerk::
# 621 "data/maps/SlateportCity/scripts.pory"
	lock
# 622 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 623 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 624 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 625 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_PowerTMs
# 626 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 627 "data/maps/SlateportCity/scripts.pory"
	release
# 628 "data/maps/SlateportCity/scripts.pory"
	end
# 629 "data/maps/SlateportCity/scripts.pory"

# 630 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 631 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_PowerTMs:
# 632 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_HIDDEN_POWER
# 633 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_SECRET_POWER
# 634 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 635 "data/maps/SlateportCity/scripts.pory"
	release
# 636 "data/maps/SlateportCity/scripts.pory"
	end
# 637 "data/maps/SlateportCity/scripts.pory"

# 638 "data/maps/SlateportCity/scripts.pory"
@ Scene with Capt Sterns interview and Team Aqua announcing plans to steal Submarine
# 639 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern::
# 640 "data/maps/SlateportCity/scripts.pory"
	lockall
# 641 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternMoveAheadWithExploration, MSGBOX_DEFAULT
# 642 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GabbyWonderfulThanksForInterview, MSGBOX_DEFAULT
# 643 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 644 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, Common_Movement_WalkInPlaceFasterRight
# 645 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 646 "data/maps/SlateportCity/scripts.pory"
	delay 10
# 647 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, Common_Movement_WalkInPlaceFasterDown
# 648 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 649 "data/maps/SlateportCity/scripts.pory"
	delay 25
# 650 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternWatchGabbyAndTyExit
# 651 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceStern
# 652 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, SlateportCity_Movement_GabbyExit
# 653 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, SlateportCity_Movement_TyExit
# 654 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 655 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_GABBY
# 656 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_TY
# 657 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhewFirstInterview, MSGBOX_DEFAULT
# 658 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 659 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 660 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhPlayerWeMadeDiscovery, MSGBOX_DEFAULT
# 661 "data/maps/SlateportCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 662 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaWillAssumeControlOfSubmarine, MSGBOX_DEFAULT
# 663 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_COOK, Common_Movement_WalkInPlaceFasterLeft
# 664 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_FAT_MAN, Common_Movement_WalkInPlaceFasterLeft
# 665 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, SlateportCity_Movement_OldWomanConcern
# 666 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_RICH_BOY, Common_Movement_QuestionMark
# 667 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_MAN_1, SlateportCity_Movement_ManConcern
# 668 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 669 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterDown
# 670 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 671 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhatWasAllThat, MSGBOX_DEFAULT
# 672 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 673 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_ExclamationMark
# 674 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 675 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_Delay48
# 676 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 677 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 678 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 679 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FromHarborTryingToTakeSub, MSGBOX_DEFAULT
# 680 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 681 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 682 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternEnterHarbor
# 683 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerEnterHarbor
# 684 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 685 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_CAPT_STERN
# 686 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
# 687 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
# 688 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
# 689 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
# 690 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 2
# 691 "data/maps/SlateportCity/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 11, 14
# 692 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 693 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 694 "data/maps/SlateportCity/scripts.pory"
	end
# 695 "data/maps/SlateportCity/scripts.pory"

# 696 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_OldWomanConcern:
# 697 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 698 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 699 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 700 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 701 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 702 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 703 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 704 "data/maps/SlateportCity/scripts.pory"
	step_end
# 705 "data/maps/SlateportCity/scripts.pory"

# 706 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ManConcern:
# 707 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 708 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 709 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 710 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 711 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 712 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 713 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 714 "data/maps/SlateportCity/scripts.pory"
	step_end
# 715 "data/maps/SlateportCity/scripts.pory"

# 716 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_GabbyExit:
# 717 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 718 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 719 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 720 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 721 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 722 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 723 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 724 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 725 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 726 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 727 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 728 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 729 "data/maps/SlateportCity/scripts.pory"
	step_end
# 730 "data/maps/SlateportCity/scripts.pory"

# 731 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_TyExit:
# 732 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 733 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 734 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 735 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 736 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 737 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 738 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 739 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 740 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 741 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 742 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 743 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 744 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 745 "data/maps/SlateportCity/scripts.pory"
	step_end
# 746 "data/maps/SlateportCity/scripts.pory"

# 747 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_Unused:
# 748 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 749 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 750 "data/maps/SlateportCity/scripts.pory"
	step_end
# 751 "data/maps/SlateportCity/scripts.pory"

# 752 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternEnterHarbor:
# 753 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 754 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 755 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 756 "data/maps/SlateportCity/scripts.pory"
	set_invisible
# 757 "data/maps/SlateportCity/scripts.pory"
	step_end
# 758 "data/maps/SlateportCity/scripts.pory"

# 759 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternWatchGabbyAndTyExit:
# 760 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 761 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 762 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 763 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 764 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 765 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 766 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 767 "data/maps/SlateportCity/scripts.pory"
	step_end
# 768 "data/maps/SlateportCity/scripts.pory"

# 769 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerEnterHarbor:
# 770 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 771 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 772 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 773 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 774 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 775 "data/maps/SlateportCity/scripts.pory"
	step_end
# 776 "data/maps/SlateportCity/scripts.pory"

# 777 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceStern:
# 778 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 779 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 780 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 781 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 782 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 783 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 784 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 785 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 786 "data/maps/SlateportCity/scripts.pory"
	step_end
# 787 "data/maps/SlateportCity/scripts.pory"

# 788 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Ty::
# 789 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BigSmileForCamera, MSGBOX_SIGN
# 790 "data/maps/SlateportCity/scripts.pory"
	end
# 791 "data/maps/SlateportCity/scripts.pory"

# 792 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Gabby::
# 793 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MostInvaluableExperience, MSGBOX_SIGN
# 794 "data/maps/SlateportCity/scripts.pory"
	end
# 795 "data/maps/SlateportCity/scripts.pory"

# 796 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man3::
# 797 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WonderIfLighthouseStartlesPokemon, MSGBOX_NPC
# 798 "data/maps/SlateportCity/scripts.pory"
	end
# 799 "data/maps/SlateportCity/scripts.pory"

# 800 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryPowderClerk::
# 801 "data/maps/SlateportCity/scripts.pory"
	lock
# 802 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 803 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POWDER_JAR, SlateportCity_EventScript_ReceivedPowderJar
# 804 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerries, MSGBOX_DEFAULT
# 805 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 806 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_RECEIVED_POWDER_JAR
# 807 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 808 "data/maps/SlateportCity/scripts.pory"
	release
# 809 "data/maps/SlateportCity/scripts.pory"
	end
# 810 "data/maps/SlateportCity/scripts.pory"

# 811 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ReceivedPowderJar::
# 812 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, 1
# 813 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 814 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_ExplainBerryPowder
# 815 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BroughtMeSomeBerryPowder, MSGBOX_DEFAULT
# 816 "data/maps/SlateportCity/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 817 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 818 "data/maps/SlateportCity/scripts.pory"
	end
# 819 "data/maps/SlateportCity/scripts.pory"

# 820 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ExplainBerryPowder::
# 821 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 822 "data/maps/SlateportCity/scripts.pory"
	release
# 823 "data/maps/SlateportCity/scripts.pory"
	end
# 824 "data/maps/SlateportCity/scripts.pory"

# 825 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem::
# 826 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ExchangeWhatWithIt
# 827 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 828 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 829 "data/maps/SlateportCity/scripts.pory"
	special ShowScrollableMultichoice
# 830 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 831 "data/maps/SlateportCity/scripts.pory"
	switch VAR_RESULT
# 832 "data/maps/SlateportCity/scripts.pory"
	case 0, SlateportCity_EventScript_EnergyPowder
# 833 "data/maps/SlateportCity/scripts.pory"
	case 1, SlateportCity_EventScript_EnergyRoot
# 834 "data/maps/SlateportCity/scripts.pory"
	case 2, SlateportCity_EventScript_HealPowder
# 835 "data/maps/SlateportCity/scripts.pory"
	case 3, SlateportCity_EventScript_RevivalHerb
# 836 "data/maps/SlateportCity/scripts.pory"
	case 4, SlateportCity_EventScript_Protein
# 837 "data/maps/SlateportCity/scripts.pory"
	case 5, SlateportCity_EventScript_Iron
# 838 "data/maps/SlateportCity/scripts.pory"
	case 6, SlateportCity_EventScript_Carbos
# 839 "data/maps/SlateportCity/scripts.pory"
	case 7, SlateportCity_EventScript_Calcium
# 840 "data/maps/SlateportCity/scripts.pory"
	case 8, SlateportCity_EventScript_Zinc
# 841 "data/maps/SlateportCity/scripts.pory"
	case 9, SlateportCity_EventScript_HPUp
# 842 "data/maps/SlateportCity/scripts.pory"
	case 10, SlateportCity_EventScript_PPUp
# 843 "data/maps/SlateportCity/scripts.pory"
	case 11, SlateportCity_EventScript_CancelPowderItemSelect
# 844 "data/maps/SlateportCity/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_EventScript_CancelPowderItemSelect
# 845 "data/maps/SlateportCity/scripts.pory"
	end
# 846 "data/maps/SlateportCity/scripts.pory"

# 847 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyPowder::
# 848 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
# 849 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
# 850 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 851 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 852 "data/maps/SlateportCity/scripts.pory"
	end
# 853 "data/maps/SlateportCity/scripts.pory"

# 854 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyRoot::
# 855 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
# 856 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
# 857 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 80
# 858 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 859 "data/maps/SlateportCity/scripts.pory"
	end
# 860 "data/maps/SlateportCity/scripts.pory"

# 861 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HealPowder::
# 862 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
# 863 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HEAL_POWDER
# 864 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 865 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 866 "data/maps/SlateportCity/scripts.pory"
	end
# 867 "data/maps/SlateportCity/scripts.pory"

# 868 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RevivalHerb::
# 869 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
# 870 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
# 871 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 300
# 872 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 873 "data/maps/SlateportCity/scripts.pory"
	end
# 874 "data/maps/SlateportCity/scripts.pory"

# 875 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Protein::
# 876 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PROTEIN
# 877 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PROTEIN
# 878 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 879 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 880 "data/maps/SlateportCity/scripts.pory"
	end
# 881 "data/maps/SlateportCity/scripts.pory"

# 882 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Iron::
# 883 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_IRON
# 884 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_IRON
# 885 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 886 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 887 "data/maps/SlateportCity/scripts.pory"
	end
# 888 "data/maps/SlateportCity/scripts.pory"

# 889 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Carbos::
# 890 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CARBOS
# 891 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CARBOS
# 892 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 893 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 894 "data/maps/SlateportCity/scripts.pory"
	end
# 895 "data/maps/SlateportCity/scripts.pory"

# 896 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Calcium::
# 897 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CALCIUM
# 898 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CALCIUM
# 899 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 900 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 901 "data/maps/SlateportCity/scripts.pory"
	end
# 902 "data/maps/SlateportCity/scripts.pory"

# 903 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Zinc::
# 904 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ZINC
# 905 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ZINC
# 906 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 907 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 908 "data/maps/SlateportCity/scripts.pory"
	end
# 909 "data/maps/SlateportCity/scripts.pory"

# 910 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HPUp::
# 911 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HP_UP
# 912 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HP_UP
# 913 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 914 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 915 "data/maps/SlateportCity/scripts.pory"
	end
# 916 "data/maps/SlateportCity/scripts.pory"

# 917 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PPUp::
# 918 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PP_UP
# 919 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PP_UP
# 920 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 3000
# 921 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 922 "data/maps/SlateportCity/scripts.pory"
	end
# 923 "data/maps/SlateportCity/scripts.pory"

# 924 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CancelPowderItemSelect::
# 925 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ComeBackToTradeBerryPowder, MSGBOX_DEFAULT
# 926 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 927 "data/maps/SlateportCity/scripts.pory"
	release
# 928 "data/maps/SlateportCity/scripts.pory"
	end
# 929 "data/maps/SlateportCity/scripts.pory"

# 930 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem::
# 931 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExchangeBerryPowderForItem, MSGBOX_YESNO
# 932 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_EventScript_ChooseBerryPowderItem
# 933 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 934 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 935 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NotEnoughBerryPowder
# 936 "data/maps/SlateportCity/scripts.pory"
	giveitem VAR_0x8008
# 937 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NoRoomForBerryPowderItem
# 938 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 939 "data/maps/SlateportCity/scripts.pory"
	special TakeBerryPowder
# 940 "data/maps/SlateportCity/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 941 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FineBerryPowderTradeSomethingElse, MSGBOX_YESNO
# 942 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_EventScript_ChooseBerryPowderItem
# 943 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhenYouGetMoreBringItToMe, MSGBOX_DEFAULT
# 944 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 945 "data/maps/SlateportCity/scripts.pory"
	release
# 946 "data/maps/SlateportCity/scripts.pory"
	end
# 947 "data/maps/SlateportCity/scripts.pory"

# 948 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NoRoomForBerryPowderItem::
# 949 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 950 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 951 "data/maps/SlateportCity/scripts.pory"
	release
# 952 "data/maps/SlateportCity/scripts.pory"
	end
# 953 "data/maps/SlateportCity/scripts.pory"

# 954 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotEnoughBerryPowder::
# 955 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontHaveEnoughBerryPowder, MSGBOX_DEFAULT
# 956 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 957 "data/maps/SlateportCity/scripts.pory"
	end
# 958 "data/maps/SlateportCity/scripts.pory"

# 959 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottBattleTentScene::
# 960 "data/maps/SlateportCity/scripts.pory"
	lockall
# 961 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 962 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 963 "data/maps/SlateportCity/scripts.pory"
	opendoor 10, 12
# 964 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 965 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 966 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PushPlayerDown
# 967 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitBattleTent
# 968 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 969 "data/maps/SlateportCity/scripts.pory"
	closedoor 10, 12
# 970 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 971 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
# 972 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 973 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerWatchScottExit
# 974 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitAfterBattleTent
# 975 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 976 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 977 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 978 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 979 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 980 "data/maps/SlateportCity/scripts.pory"
	end
# 981 "data/maps/SlateportCity/scripts.pory"

# 982 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PushPlayerDown:
# 983 "data/maps/SlateportCity/scripts.pory"
	lock_facing_direction
# 984 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 985 "data/maps/SlateportCity/scripts.pory"
	unlock_facing_direction
# 986 "data/maps/SlateportCity/scripts.pory"
	step_end
# 987 "data/maps/SlateportCity/scripts.pory"

# 988 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerWatchScottExit:
# 989 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 990 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 991 "data/maps/SlateportCity/scripts.pory"
	step_end
# 992 "data/maps/SlateportCity/scripts.pory"

# 993 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitBattleTent:
# 994 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 995 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 996 "data/maps/SlateportCity/scripts.pory"
	step_end
# 997 "data/maps/SlateportCity/scripts.pory"

# 998 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitAfterBattleTent:
# 999 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1000 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1001 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1002 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1003 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1004 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1005 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1006 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1007 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1008 "data/maps/SlateportCity/scripts.pory"

# 1009 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryCrushRankingsSign::
# 1010 "data/maps/SlateportCity/scripts.pory"
	lockall
# 1011 "data/maps/SlateportCity/scripts.pory"
	special ShowBerryCrushRankings
# 1012 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 1013 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 1014 "data/maps/SlateportCity/scripts.pory"
	end
# 1015 "data/maps/SlateportCity/scripts.pory"

# 1016 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EnergyGuruSellWhatYouNeed:
# 1017 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the ENERGY GURU! I'll go for it and\n"
# 1018 "data/maps/SlateportCity/scripts.pory"
	.string "sell you what you need!$"
# 1019 "data/maps/SlateportCity/scripts.pory"

# 1020 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhYourPokemon:
# 1021 "data/maps/SlateportCity/scripts.pory"
	.string "Oh?\n"
# 1022 "data/maps/SlateportCity/scripts.pory"
	.string "Your {STR_VAR_1}…$"
# 1023 "data/maps/SlateportCity/scripts.pory"

# 1024 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseGiveItThisEffortRibbon:
# 1025 "data/maps/SlateportCity/scripts.pory"
	.string "Went for it stupendously!\p"
# 1026 "data/maps/SlateportCity/scripts.pory"
	.string "As its reward, please give it this\n"
# 1027 "data/maps/SlateportCity/scripts.pory"
	.string "EFFORT RIBBON.$"
# 1028 "data/maps/SlateportCity/scripts.pory"

# 1029 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ReceivedEffortRibbon:
# 1030 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} received the EFFORT RIBBON.$"
# 1031 "data/maps/SlateportCity/scripts.pory"

# 1032 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PutEffortRibbonOnMon:
# 1033 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} put the EFFORT RIBBON\n"
# 1034 "data/maps/SlateportCity/scripts.pory"
	.string "on {STR_VAR_1}.$"
# 1035 "data/maps/SlateportCity/scripts.pory"

# 1036 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoForItLittleHarder:
# 1037 "data/maps/SlateportCity/scripts.pory"
	.string "You have to go for it a little harder.\p"
# 1038 "data/maps/SlateportCity/scripts.pory"
	.string "If you do, I'll give your POKéMON\n"
# 1039 "data/maps/SlateportCity/scripts.pory"
	.string "something nice.$"
# 1040 "data/maps/SlateportCity/scripts.pory"

# 1041 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EffortRibbonLooksGoodOnIt:
# 1042 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! Your {STR_VAR_1}, that EFFORT\n"
# 1043 "data/maps/SlateportCity/scripts.pory"
	.string "RIBBON looks good on it!$"
# 1044 "data/maps/SlateportCity/scripts.pory"

# 1045 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WonderIfLighthouseStartlesPokemon:
# 1046 "data/maps/SlateportCity/scripts.pory"
	.string "The light of the lighthouse reaches\n"
# 1047 "data/maps/SlateportCity/scripts.pory"
	.string "dozens of miles away.\p"
# 1048 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder if it doesn't startle POKéMON\n"
# 1049 "data/maps/SlateportCity/scripts.pory"
	.string "in the sea.$"
# 1050 "data/maps/SlateportCity/scripts.pory"

# 1051 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaweedFullOfLife:
# 1052 "data/maps/SlateportCity/scripts.pory"
	.string "Ooh, look at this!\p"
# 1053 "data/maps/SlateportCity/scripts.pory"
	.string "The seaweed you can get around these\n"
# 1054 "data/maps/SlateportCity/scripts.pory"
	.string "parts is fresh and full of life.\p"
# 1055 "data/maps/SlateportCity/scripts.pory"
	.string "Why, it looks like it can even rear up\n"
# 1056 "data/maps/SlateportCity/scripts.pory"
	.string "and attack!$"
# 1057 "data/maps/SlateportCity/scripts.pory"

# 1058 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HowTownIsBornAndGrows:
# 1059 "data/maps/SlateportCity/scripts.pory"
	.string "Where the water is clean, the fruits\n"
# 1060 "data/maps/SlateportCity/scripts.pory"
	.string "of bountiful harvest gather.\p"
# 1061 "data/maps/SlateportCity/scripts.pory"
	.string "And where people gather, a market\n"
# 1062 "data/maps/SlateportCity/scripts.pory"
	.string "soon starts.\p"
# 1063 "data/maps/SlateportCity/scripts.pory"
	.string "That is how a town is born and grows.$"
# 1064 "data/maps/SlateportCity/scripts.pory"

# 1065 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SlateportWonderfulPlace:
# 1066 "data/maps/SlateportCity/scripts.pory"
	.string "Shopping where you can breathe the\n"
# 1067 "data/maps/SlateportCity/scripts.pory"
	.string "scent of the ocean…\p"
# 1068 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT is such a wonderful place!$"
# 1069 "data/maps/SlateportCity/scripts.pory"

# 1070 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyBricksSoDecorWontGetDirty:
# 1071 "data/maps/SlateportCity/scripts.pory"
	.string "If you put DOLLS or CUSHIONS on\n"
# 1072 "data/maps/SlateportCity/scripts.pory"
	.string "the floor, they'll get dirty.\p"
# 1073 "data/maps/SlateportCity/scripts.pory"
	.string "I'm going to buy some BRICKS so my\n"
# 1074 "data/maps/SlateportCity/scripts.pory"
	.string "DOLLS and CUSHIONS won't get dirty\l"
# 1075 "data/maps/SlateportCity/scripts.pory"
	.string "when I leave them out.$"
# 1076 "data/maps/SlateportCity/scripts.pory"

# 1077 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoingToCompeteInBattleTent:
# 1078 "data/maps/SlateportCity/scripts.pory"
	.string "Wroooar! I'm going to compete in\n"
# 1079 "data/maps/SlateportCity/scripts.pory"
	.string "the BATTLE TENT, too!\p"
# 1080 "data/maps/SlateportCity/scripts.pory"
	.string "But before that, I need to catch\n"
# 1081 "data/maps/SlateportCity/scripts.pory"
	.string "some POKéMON!$"
# 1082 "data/maps/SlateportCity/scripts.pory"

# 1083 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BushedHikingFromMauville:
# 1084 "data/maps/SlateportCity/scripts.pory"
	.string "Whew… I'm just bushed…\p"
# 1085 "data/maps/SlateportCity/scripts.pory"
	.string "I hiked over from MAUVILLE CITY.\n"
# 1086 "data/maps/SlateportCity/scripts.pory"
	.string "But, boy, this city's huge.\p"
# 1087 "data/maps/SlateportCity/scripts.pory"
	.string "If I'd known this, I would've ridden\n"
# 1088 "data/maps/SlateportCity/scripts.pory"
	.string "my BIKE here.$"
# 1089 "data/maps/SlateportCity/scripts.pory"

# 1090 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EveryoneCallsHimCaptStern:
# 1091 "data/maps/SlateportCity/scripts.pory"
	.string "STERN, the fellow who built the\n"
# 1092 "data/maps/SlateportCity/scripts.pory"
	.string "MUSEUM, also happens to be the leader\l"
# 1093 "data/maps/SlateportCity/scripts.pory"
	.string "of an undersea exploration team.\p"
# 1094 "data/maps/SlateportCity/scripts.pory"
	.string "So, everyone calls him CAPT. STERN.$"
# 1095 "data/maps/SlateportCity/scripts.pory"

# 1096 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsLongLineOverThere:
# 1097 "data/maps/SlateportCity/scripts.pory"
	.string "What is that over there?\n"
# 1098 "data/maps/SlateportCity/scripts.pory"
	.string "That long line…$"
# 1099 "data/maps/SlateportCity/scripts.pory"

# 1100 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_VisitedMuseumOften:
# 1101 "data/maps/SlateportCity/scripts.pory"
	.string "When I was a child, I visited\n"
# 1102 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM often.\p"
# 1103 "data/maps/SlateportCity/scripts.pory"
	.string "I used to dream about the mysteries of\n"
# 1104 "data/maps/SlateportCity/scripts.pory"
	.string "the sea after seeing the exhibits.$"
# 1105 "data/maps/SlateportCity/scripts.pory"

# 1106 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_QuitPushing:
# 1107 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, there! Quit pushing!\n"
# 1108 "data/maps/SlateportCity/scripts.pory"
	.string "This is the line, can't you see?$"
# 1109 "data/maps/SlateportCity/scripts.pory"

# 1110 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaHasPolicy:
# 1111 "data/maps/SlateportCity/scripts.pory"
	.string "TEAM AQUA has a policy of\n"
# 1112 "data/maps/SlateportCity/scripts.pory"
	.string "assembling and dispersing at\l"
# 1113 "data/maps/SlateportCity/scripts.pory"
	.string "the operation site.$"
# 1114 "data/maps/SlateportCity/scripts.pory"

# 1115 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BossIsBrilliant:
# 1116 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is brilliant.\p"
# 1117 "data/maps/SlateportCity/scripts.pory"
	.string "What would he want to do with\n"
# 1118 "data/maps/SlateportCity/scripts.pory"
	.string "a MUSEUM now?$"
# 1119 "data/maps/SlateportCity/scripts.pory"

# 1120 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsNewSchemeIWonder:
# 1121 "data/maps/SlateportCity/scripts.pory"
	.string "What's the new scheme, I wonder?\p"
# 1122 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is scary when he's mad, so\n"
# 1123 "data/maps/SlateportCity/scripts.pory"
	.string "I'd better not screw things up…$"
# 1124 "data/maps/SlateportCity/scripts.pory"

# 1125 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldTakeItAll:
# 1126 "data/maps/SlateportCity/scripts.pory"
	.string "If there's something we need in\n"
# 1127 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM, we should take it all!$"
# 1128 "data/maps/SlateportCity/scripts.pory"

# 1129 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontButtIn:
# 1130 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, you there!\n"
# 1131 "data/maps/SlateportCity/scripts.pory"
	.string "Don't butt in!$"
# 1132 "data/maps/SlateportCity/scripts.pory"

# 1133 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RemindsMeOfLongLineForGames:
# 1134 "data/maps/SlateportCity/scripts.pory"
	.string "A long line, huh?\p"
# 1135 "data/maps/SlateportCity/scripts.pory"
	.string "It reminds me of the times I lined up to\n"
# 1136 "data/maps/SlateportCity/scripts.pory"
	.string "buy smash-hit games…$"
# 1137 "data/maps/SlateportCity/scripts.pory"

# 1138 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhyAreWeLiningUp:
# 1139 "data/maps/SlateportCity/scripts.pory"
	.string "Why are we even lining up and paying?\n"
# 1140 "data/maps/SlateportCity/scripts.pory"
	.string "We should just march in!$"
# 1141 "data/maps/SlateportCity/scripts.pory"

# 1142 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatDoYouWant:
# 1143 "data/maps/SlateportCity/scripts.pory"
	.string "What?\n"
# 1144 "data/maps/SlateportCity/scripts.pory"
	.string "What do you want?$"
# 1145 "data/maps/SlateportCity/scripts.pory"

# 1146 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllReadSignForYou:
# 1147 "data/maps/SlateportCity/scripts.pory"
	.string "You want to read this sign?\n"
# 1148 "data/maps/SlateportCity/scripts.pory"
	.string "I'll read it for you!$"
# 1149 "data/maps/SlateportCity/scripts.pory"

# 1150 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SaysSomethingLikeSeaIsEndless:
# 1151 "data/maps/SlateportCity/scripts.pory"
	.string "Let's see…\p"
# 1152 "data/maps/SlateportCity/scripts.pory"
	.string "Um… I think it says something like\n"
# 1153 "data/maps/SlateportCity/scripts.pory"
	.string "“the life in the sea is endless.”\p"
# 1154 "data/maps/SlateportCity/scripts.pory"
	.string "Yup, I'm pretty sure that's what\n"
# 1155 "data/maps/SlateportCity/scripts.pory"
	.string "it says.$"
# 1156 "data/maps/SlateportCity/scripts.pory"

# 1157 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldveBroughtMyGameBoy:
# 1158 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…\p"
# 1159 "data/maps/SlateportCity/scripts.pory"
	.string "I should've brought my Game Boy\n"
# 1160 "data/maps/SlateportCity/scripts.pory"
	.string "Advance so I wouldn't get bored in line…\p"
# 1161 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…$"
# 1162 "data/maps/SlateportCity/scripts.pory"

# 1163 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HotSpringsAfterOperation:
# 1164 "data/maps/SlateportCity/scripts.pory"
	.string "When this operation's over, I'll take\n"
# 1165 "data/maps/SlateportCity/scripts.pory"
	.string "you to a hot spring spa!\p"
# 1166 "data/maps/SlateportCity/scripts.pory"
	.string "That's what our leader said.\n"
# 1167 "data/maps/SlateportCity/scripts.pory"
	.string "I can't wait!$"
# 1168 "data/maps/SlateportCity/scripts.pory"

# 1169 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaIsSoWet:
# 1170 "data/maps/SlateportCity/scripts.pory"
	.string "The sea is just so vast…\p"
# 1171 "data/maps/SlateportCity/scripts.pory"
	.string "Could the sea have been made by\n"
# 1172 "data/maps/SlateportCity/scripts.pory"
	.string "the tears shed by POKéMON?$"
# 1173 "data/maps/SlateportCity/scripts.pory"

# 1174 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SinkOldBoats:
# 1175 "data/maps/SlateportCity/scripts.pory"
	.string "Do you know what they do with old\n"
# 1176 "data/maps/SlateportCity/scripts.pory"
	.string "ships that become too creaky to sail?\p"
# 1177 "data/maps/SlateportCity/scripts.pory"
	.string "They sink them in the sea so they\n"
# 1178 "data/maps/SlateportCity/scripts.pory"
	.string "become habitats for POKéMON.$"
# 1179 "data/maps/SlateportCity/scripts.pory"

# 1180 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyTooMuch:
# 1181 "data/maps/SlateportCity/scripts.pory"
	.string "Whenever I visit here, I get carried\n"
# 1182 "data/maps/SlateportCity/scripts.pory"
	.string "away and buy too much.$"
# 1183 "data/maps/SlateportCity/scripts.pory"

# 1184 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GetNameRaterToHelpYou:
# 1185 "data/maps/SlateportCity/scripts.pory"
	.string "If you want to change your POKéMON's\n"
# 1186 "data/maps/SlateportCity/scripts.pory"
	.string "nickname, you'll have to get the NAME\l"
# 1187 "data/maps/SlateportCity/scripts.pory"
	.string "RATER to help you.$"
# 1188 "data/maps/SlateportCity/scripts.pory"

# 1189 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CantChangeTradeMonName:
# 1190 "data/maps/SlateportCity/scripts.pory"
	.string "Any POKéMON you get in a trade,\n"
# 1191 "data/maps/SlateportCity/scripts.pory"
	.string "you can't change its nickname.\p"
# 1192 "data/maps/SlateportCity/scripts.pory"
	.string "The original TRAINER's love for that\n"
# 1193 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON is in the nickname.$"
# 1194 "data/maps/SlateportCity/scripts.pory"

# 1195 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentBuiltRecently:
# 1196 "data/maps/SlateportCity/scripts.pory"
	.string "Recently, a BATTLE TENT was built\n"
# 1197 "data/maps/SlateportCity/scripts.pory"
	.string "in SLATEPORT.\p"
# 1198 "data/maps/SlateportCity/scripts.pory"
	.string "GYMS are fun, but the BATTLE TENT's\n"
# 1199 "data/maps/SlateportCity/scripts.pory"
	.string "awesome in its own way.\p"
# 1200 "data/maps/SlateportCity/scripts.pory"
	.string "You should go find tough POKéMON\n"
# 1201 "data/maps/SlateportCity/scripts.pory"
	.string "for the BATTLE TENT!$"
# 1202 "data/maps/SlateportCity/scripts.pory"

# 1203 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptSternBeingInterviewed:
# 1204 "data/maps/SlateportCity/scripts.pory"
	.string "I was hoping that it was a famous star\n"
# 1205 "data/maps/SlateportCity/scripts.pory"
	.string "so I could get an autograph.\p"
# 1206 "data/maps/SlateportCity/scripts.pory"
	.string "But who's that being interviewed?\n"
# 1207 "data/maps/SlateportCity/scripts.pory"
	.string "Isn't that CAPT. STERN?$"
# 1208 "data/maps/SlateportCity/scripts.pory"

# 1209 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_InterviewerSoCool:
# 1210 "data/maps/SlateportCity/scripts.pory"
	.string "That lady interviewer is so cool\n"
# 1211 "data/maps/SlateportCity/scripts.pory"
	.string "and pretty.\p"
# 1212 "data/maps/SlateportCity/scripts.pory"
	.string "When I grow up, I'm going to be\n"
# 1213 "data/maps/SlateportCity/scripts.pory"
	.string "an international journalist!$"
# 1214 "data/maps/SlateportCity/scripts.pory"

# 1215 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternSaysDiscoveredSomething:
# 1216 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN says they discovered\n"
# 1217 "data/maps/SlateportCity/scripts.pory"
	.string "something at the bottom of the sea.\p"
# 1218 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder what it is?\n"
# 1219 "data/maps/SlateportCity/scripts.pory"
	.string "What could it be?$"
# 1220 "data/maps/SlateportCity/scripts.pory"

# 1221 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainComeBackWithBigFish:
# 1222 "data/maps/SlateportCity/scripts.pory"
	.string "What's going on here?\p"
# 1223 "data/maps/SlateportCity/scripts.pory"
	.string "Did the good CAPTAIN come back with\n"
# 1224 "data/maps/SlateportCity/scripts.pory"
	.string "a big fish from the ocean floor?$"
# 1225 "data/maps/SlateportCity/scripts.pory"

# 1226 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AmIOnTV:
# 1227 "data/maps/SlateportCity/scripts.pory"
	.string "Hey! Are you watching?\n"
# 1228 "data/maps/SlateportCity/scripts.pory"
	.string "Am I on TV?$"
# 1229 "data/maps/SlateportCity/scripts.pory"

# 1230 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainsACelebrity:
# 1231 "data/maps/SlateportCity/scripts.pory"
	.string "A TV interview! Here!\n"
# 1232 "data/maps/SlateportCity/scripts.pory"
	.string "The CAPTAIN's a celebrity!$"
# 1233 "data/maps/SlateportCity/scripts.pory"

# 1234 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BigSmileForCamera:
# 1235 "data/maps/SlateportCity/scripts.pory"
	.string "TY: Okay, CAPT. STERN, a big smile\n"
# 1236 "data/maps/SlateportCity/scripts.pory"
	.string "for the camera!$"
# 1237 "data/maps/SlateportCity/scripts.pory"

# 1238 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MostInvaluableExperience:
# 1239 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: I see, I see. You've had a most\n"
# 1240 "data/maps/SlateportCity/scripts.pory"
	.string "invaluable experience…$"
# 1241 "data/maps/SlateportCity/scripts.pory"

# 1242 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternMoveAheadWithExploration:
# 1243 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Yes, indeed. We intend to\n"
# 1244 "data/maps/SlateportCity/scripts.pory"
	.string "move ahead with our exploration.$"
# 1245 "data/maps/SlateportCity/scripts.pory"

# 1246 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GabbyWonderfulThanksForInterview:
# 1247 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: That's wonderful, CAPT. STERN!\n"
# 1248 "data/maps/SlateportCity/scripts.pory"
	.string "Thank you for taking the time from\l"
# 1249 "data/maps/SlateportCity/scripts.pory"
	.string "your busy schedule to talk to us.\p"
# 1250 "data/maps/SlateportCity/scripts.pory"
	.string "We hope we can interview you again\n"
# 1251 "data/maps/SlateportCity/scripts.pory"
	.string "with news of more discoveries!$"
# 1252 "data/maps/SlateportCity/scripts.pory"

# 1253 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhewFirstInterview:
# 1254 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Whew…\p"
# 1255 "data/maps/SlateportCity/scripts.pory"
	.string "That was my first time to be filmed for\n"
# 1256 "data/maps/SlateportCity/scripts.pory"
	.string "TV. That was nerve-wracking.$"
# 1257 "data/maps/SlateportCity/scripts.pory"

# 1258 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhPlayerWeMadeDiscovery:
# 1259 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! {PLAYER}{KUN}!\n"
# 1260 "data/maps/SlateportCity/scripts.pory"
	.string "You're looking great!\p"
# 1261 "data/maps/SlateportCity/scripts.pory"
	.string "We made a huge discovery on our last\n"
# 1262 "data/maps/SlateportCity/scripts.pory"
	.string "seafloor exploration.\p"
# 1263 "data/maps/SlateportCity/scripts.pory"
	.string "We found an underwater cavern on\n"
# 1264 "data/maps/SlateportCity/scripts.pory"
	.string "ROUTE 128.\p"
# 1265 "data/maps/SlateportCity/scripts.pory"
	.string "We think it's the habitat of a POKéMON\n"
# 1266 "data/maps/SlateportCity/scripts.pory"
	.string "that's said to have been long extinct.$"
# 1267 "data/maps/SlateportCity/scripts.pory"

# 1268 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaWillAssumeControlOfSubmarine:
# 1269 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1270 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN, I presume.\p"
# 1271 "data/maps/SlateportCity/scripts.pory"
	.string "We of TEAM AQUA will assume\n"
# 1272 "data/maps/SlateportCity/scripts.pory"
	.string "control of your submarine!\p"
# 1273 "data/maps/SlateportCity/scripts.pory"
	.string "Your objections are meaningless!\n"
# 1274 "data/maps/SlateportCity/scripts.pory"
	.string "We expect your total cooperation!\p"
# 1275 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1276 "data/maps/SlateportCity/scripts.pory"
	.string "Just watch and learn what TEAM\l"
# 1277 "data/maps/SlateportCity/scripts.pory"
	.string "AQUA has planned!$"
# 1278 "data/maps/SlateportCity/scripts.pory"

# 1279 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhatWasAllThat:
# 1280 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: What was that all about?\p"
# 1281 "data/maps/SlateportCity/scripts.pory"
	.string "It sounded like someone using\n"
# 1282 "data/maps/SlateportCity/scripts.pory"
	.string "a megaphone…\p"
# 1283 "data/maps/SlateportCity/scripts.pory"
	.string "Where did it come from?$"
# 1284 "data/maps/SlateportCity/scripts.pory"

# 1285 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FromHarborTryingToTakeSub:
# 1286 "data/maps/SlateportCity/scripts.pory"
	.string "It's from the HARBOR!\p"
# 1287 "data/maps/SlateportCity/scripts.pory"
	.string "The submarine!\n"
# 1288 "data/maps/SlateportCity/scripts.pory"
	.string "They're trying to take it!$"
# 1289 "data/maps/SlateportCity/scripts.pory"

# 1290 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseComeWithMe:
# 1291 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 1292 "data/maps/SlateportCity/scripts.pory"
	.string "Please, come with me!$"
# 1293 "data/maps/SlateportCity/scripts.pory"

# 1294 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentSign:
# 1295 "data/maps/SlateportCity/scripts.pory"
	.string "BATTLE TENT SLATEPORT SITE\n"
# 1296 "data/maps/SlateportCity/scripts.pory"
	.string "“Find it! The ultimate POKéMON!”$"
# 1297 "data/maps/SlateportCity/scripts.pory"

# 1298 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardWantedSign:
# 1299 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1300 "data/maps/SlateportCity/scripts.pory"
	.string "“Wanted: A sailor capable of sailing\n"
# 1301 "data/maps/SlateportCity/scripts.pory"
	.string "in all currents.”$"
# 1302 "data/maps/SlateportCity/scripts.pory"

# 1303 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardNearsCompletion:
# 1304 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1305 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL nears\n"
# 1306 "data/maps/SlateportCity/scripts.pory"
	.string "completion for serving the ports of\l"
# 1307 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT and LILYCOVE.”$"
# 1308 "data/maps/SlateportCity/scripts.pory"

# 1309 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardFerryComplete:
# 1310 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1311 "data/maps/SlateportCity/scripts.pory"
	.string "“Boarding of the SLATEPORT-LILYCOVE\n"
# 1312 "data/maps/SlateportCity/scripts.pory"
	.string "ferry S.S. TIDAL is handled at the\l"
# 1313 "data/maps/SlateportCity/scripts.pory"
	.string "HARBOR.”$"
# 1314 "data/maps/SlateportCity/scripts.pory"

# 1315 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PokemonFanClubSign:
# 1316 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON FAN CLUB\n"
# 1317 "data/maps/SlateportCity/scripts.pory"
	.string "“Calling all fans of POKéMON!”$"
# 1318 "data/maps/SlateportCity/scripts.pory"

# 1319 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OceanicMuseumSign:
# 1320 "data/maps/SlateportCity/scripts.pory"
	.string "“The endless sea sustains\n"
# 1321 "data/maps/SlateportCity/scripts.pory"
	.string "all life.”\p"
# 1322 "data/maps/SlateportCity/scripts.pory"
	.string "OCEANIC MUSEUM$"
# 1323 "data/maps/SlateportCity/scripts.pory"

# 1324 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CitySign:
# 1325 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT CITY\p"
# 1326 "data/maps/SlateportCity/scripts.pory"
	.string "“The port where people and POKéMON\n"
# 1327 "data/maps/SlateportCity/scripts.pory"
	.string "cross paths.”$"
# 1328 "data/maps/SlateportCity/scripts.pory"

# 1329 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MarketSign:
# 1330 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT MARKET\n"
# 1331 "data/maps/SlateportCity/scripts.pory"
	.string "“Unique items found nowhere else!”$"
# 1332 "data/maps/SlateportCity/scripts.pory"

# 1333 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborFerryUnderConstruction:
# 1334 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1335 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL is under\n"
# 1336 "data/maps/SlateportCity/scripts.pory"
	.string "construction in the SHIPYARD.\p"
# 1337 "data/maps/SlateportCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 1338 "data/maps/SlateportCity/scripts.pory"
	.string "shortly.”$"
# 1339 "data/maps/SlateportCity/scripts.pory"

# 1340 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborSign:
# 1341 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1342 "data/maps/SlateportCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 1343 "data/maps/SlateportCity/scripts.pory"
	.string "the ferry S.S. TIDAL.”$"
# 1344 "data/maps/SlateportCity/scripts.pory"

# 1345 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_NameRatersHouseSign:
# 1346 "data/maps/SlateportCity/scripts.pory"
	.string "NAME RATER'S HOUSE\n"
# 1347 "data/maps/SlateportCity/scripts.pory"
	.string "“POKéMON nicknames rated.”$"
# 1348 "data/maps/SlateportCity/scripts.pory"

# 1349 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerries:
# 1350 "data/maps/SlateportCity/scripts.pory"
	.string "If a wild POKéMON gets hurt, it heals\n"
# 1351 "data/maps/SlateportCity/scripts.pory"
	.string "itself by chewing on BERRIES.\p"
# 1352 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1353 "data/maps/SlateportCity/scripts.pory"
	.string "Somebody saw that and got the idea\n"
# 1354 "data/maps/SlateportCity/scripts.pory"
	.string "of making medicine from BERRIES.\p"
# 1355 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1356 "data/maps/SlateportCity/scripts.pory"
	.string "To turn BERRIES into medicine,\n"
# 1357 "data/maps/SlateportCity/scripts.pory"
	.string "they must be crushed into powder.\p"
# 1358 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1359 "data/maps/SlateportCity/scripts.pory"
	.string "You seem to have an interest\n"
# 1360 "data/maps/SlateportCity/scripts.pory"
	.string "in BERRIES!\p"
# 1361 "data/maps/SlateportCity/scripts.pory"
	.string "I've got something good for someone\n"
# 1362 "data/maps/SlateportCity/scripts.pory"
	.string "like you.$"
# 1363 "data/maps/SlateportCity/scripts.pory"

# 1364 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerryPowder:
# 1365 "data/maps/SlateportCity/scripts.pory"
	.string "I recently had machines installed at\n"
# 1366 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON CENTERS for crushing BERRIES.\p"
# 1367 "data/maps/SlateportCity/scripts.pory"
	.string "The BERRY CRUSH machines are at\n"
# 1368 "data/maps/SlateportCity/scripts.pory"
	.string "the DIRECT CORNER upstairs.\p"
# 1369 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?\p"
# 1370 "data/maps/SlateportCity/scripts.pory"
	.string "Could you make BERRY POWDER for\n"
# 1371 "data/maps/SlateportCity/scripts.pory"
	.string "me using those machines?\p"
# 1372 "data/maps/SlateportCity/scripts.pory"
	.string "I can make you all sorts of medicine\n"
# 1373 "data/maps/SlateportCity/scripts.pory"
	.string "if you bring me lots of BERRY POWDER.$"
# 1374 "data/maps/SlateportCity/scripts.pory"

# 1375 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BroughtMeSomeBerryPowder:
# 1376 "data/maps/SlateportCity/scripts.pory"
	.string "Have you brought me some\n"
# 1377 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER?$"
# 1378 "data/maps/SlateportCity/scripts.pory"

# 1379 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeWhatWithIt:
# 1380 "data/maps/SlateportCity/scripts.pory"
	.string "What would you like to exchange\n"
# 1381 "data/maps/SlateportCity/scripts.pory"
	.string "it with?$"
# 1382 "data/maps/SlateportCity/scripts.pory"

# 1383 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeBerryPowderForItem:
# 1384 "data/maps/SlateportCity/scripts.pory"
	.string "Okay, you want to exchange your\n"
# 1385 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for one {STR_VAR_1}?$"
# 1386 "data/maps/SlateportCity/scripts.pory"

# 1387 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontHaveEnoughBerryPowder:
# 1388 "data/maps/SlateportCity/scripts.pory"
	.string "Oh, dear. You don't have enough\n"
# 1389 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER.$"
# 1390 "data/maps/SlateportCity/scripts.pory"

# 1391 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FineBerryPowderTradeSomethingElse:
# 1392 "data/maps/SlateportCity/scripts.pory"
	.string "This is fine BERRY POWDER.\n"
# 1393 "data/maps/SlateportCity/scripts.pory"
	.string "It will make excellent medicine.\p"
# 1394 "data/maps/SlateportCity/scripts.pory"
	.string "Would you like to trade more of your\n"
# 1395 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for something else?$"
# 1396 "data/maps/SlateportCity/scripts.pory"

# 1397 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhenYouGetMoreBringItToMe:
# 1398 "data/maps/SlateportCity/scripts.pory"
	.string "Okay! When you get some more\n"
# 1399 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER, bring it to me, please!$"
# 1400 "data/maps/SlateportCity/scripts.pory"

# 1401 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ComeBackToTradeBerryPowder:
# 1402 "data/maps/SlateportCity/scripts.pory"
	.string "Come back if you'd like to trade your\n"
# 1403 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for some medicine.\p"
# 1404 "data/maps/SlateportCity/scripts.pory"
	.string "I'm always running a bazaar here.\p"
# 1405 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?$"
# 1406 "data/maps/SlateportCity/scripts.pory"

# 1407 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YouDroveTeamAquaAway:
# 1408 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Huh?\n"
# 1409 "data/maps/SlateportCity/scripts.pory"
	.string "I'm sure I met you somewhere before.\p"
# 1410 "data/maps/SlateportCity/scripts.pory"
	.string "Have I introduced myself to you?\n"
# 1411 "data/maps/SlateportCity/scripts.pory"
	.string "If not, my name's SCOTT.\p"
# 1412 "data/maps/SlateportCity/scripts.pory"
	.string "I just saw TEAM AQUA run away from\n"
# 1413 "data/maps/SlateportCity/scripts.pory"
	.string "here like they were stung.\p"
# 1414 "data/maps/SlateportCity/scripts.pory"
	.string "Let me guess--you drove them away?$"
# 1415 "data/maps/SlateportCity/scripts.pory"

# 1416 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MaybeThisTrainer:
# 1417 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Hmm…\n"
# 1418 "data/maps/SlateportCity/scripts.pory"
	.string "Maybe, just maybe, this TRAINER…$"
# 1419 "data/maps/SlateportCity/scripts.pory"

# 1420 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_LetsRegisterEachOther:
# 1421 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: All right! I think you're going\n"
# 1422 "data/maps/SlateportCity/scripts.pory"
	.string "to become a good friend.\p"
# 1423 "data/maps/SlateportCity/scripts.pory"
	.string "So, let's register each other in our\n"
# 1424 "data/maps/SlateportCity/scripts.pory"
	.string "POKéNAVS.\p"
# 1425 "data/maps/SlateportCity/scripts.pory"
	.string "… … … … … …$"
# 1426 "data/maps/SlateportCity/scripts.pory"

# 1427 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RegisteredScott:
# 1428 "data/maps/SlateportCity/scripts.pory"
	.string "Registered this SCOTT person\n"
# 1429 "data/maps/SlateportCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1430 "data/maps/SlateportCity/scripts.pory"

# 1431 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou:
# 1432 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: What I'd like to do is tag along\n"
# 1433 "data/maps/SlateportCity/scripts.pory"
	.string "with you, but I do want to keep an eye\l"
# 1434 "data/maps/SlateportCity/scripts.pory"
	.string "on the talents of other people, too.\p"
# 1435 "data/maps/SlateportCity/scripts.pory"
	.string "So, I'll be off to roam other towns\n"
# 1436 "data/maps/SlateportCity/scripts.pory"
	.string "a bit more.\p"
# 1437 "data/maps/SlateportCity/scripts.pory"
	.string "Be seeing you, {PLAYER}{KUN}!$"
# 1438 "data/maps/SlateportCity/scripts.pory"

# 1439 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_TakingBattleTentChallenge:
# 1440 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Oh, hey!\n"
# 1441 "data/maps/SlateportCity/scripts.pory"
	.string "If it isn't {PLAYER}{KUN}!\p"
# 1442 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}, let me guess--you're going\n"
# 1443 "data/maps/SlateportCity/scripts.pory"
	.string "to take the BATTLE TENT challenge?\p"
# 1444 "data/maps/SlateportCity/scripts.pory"
	.string "Yeah! That's a good idea!\n"
# 1445 "data/maps/SlateportCity/scripts.pory"
	.string "That's a really great idea!\p"
# 1446 "data/maps/SlateportCity/scripts.pory"
	.string "After all, a tough TRAINER is\n"
# 1447 "data/maps/SlateportCity/scripts.pory"
	.string "the perfect fit for the BATTLE TENT!\p"
# 1448 "data/maps/SlateportCity/scripts.pory"
	.string "Give it your best effort!$"

SlateportCity_Text_Spencer::
# 396 "data/maps/SlateportCity/scripts.pory"
	.string "Man, this museum must be really popular!\n"
	.string "I can't wait to get in!\p"
	.string "These guys look kind of familiar to me,\n"
	.string "though…$"

SlateportCity_Text_Bren::
# 402 "data/maps/SlateportCity/scripts.pory"
	.string "Man, this museum must be really popular!\n"
	.string "I can't wait to get in!\p"
	.string "These guys look kind of familiar to me,\n"
	.string "though…$"

SlateportCity_Text_Kyle::
# 408 "data/maps/SlateportCity/scripts.pory"
	.string "Man, this museum must be really popular!\n"
	.string "I can't wait to get in!\p"
	.string "These guys look kind of familiar to me,\n"
	.string "though…$"

SlateportCity_Text_SpencerTalked::
# 414 "data/maps/SlateportCity/scripts.pory"
	.string "I can't quite put my finger on it…\n"
	.string "… … …\p"
	.string "Oh, well.$"

SlateportCity_Text_BrenTalked::
# 420 "data/maps/SlateportCity/scripts.pory"
	.string "I can't quite put my finger on it…\n"
	.string "… … …\p"
	.string "Oh, well.$"

SlateportCity_Text_KyleTalked::
# 426 "data/maps/SlateportCity/scripts.pory"
	.string "I can't quite put my finger on it…\n"
	.string "… … …\p"
	.string "Oh, well.$"
