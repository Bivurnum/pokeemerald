# 3 "data/maps/DewfordTown_Gym/scripts.pory"

# 4 "data/maps/DewfordTown_Gym/scripts.pory"
.set LOCALID_RIVAL1, 9
# 5 "data/maps/DewfordTown_Gym/scripts.pory"

# 6 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_MapScripts::
# 7 "data/maps/DewfordTown_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_Gym_OnTransition
# 8 "data/maps/DewfordTown_Gym/scripts.pory"
	.byte 0
# 9 "data/maps/DewfordTown_Gym/scripts.pory"

# 10 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_OnTransition:
# 11 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 12 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 13 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 14 "data/maps/DewfordTown_Gym/scripts.pory"

# 15 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel::
# 16 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_defeated TRAINER_BRAWLY_1, DewfordTown_Gym_EventScript_SetLightsOn
# 17 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 18 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 19 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 0, DewfordTown_Gym_EventScript_SetFlashLevel7
# 20 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_SetFlashLevel6
# 21 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_SetFlashLevel5
# 22 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_SetFlashLevel4
# 23 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_SetFlashLevel3
# 24 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_SetFlashLevel2
# 25 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetFlashLevel1

DewfordTown_Gym_EventScript_Rival1::
# 29 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 30 "data/maps/DewfordTown_Gym/scripts.pory"
	applymovement 9, Common_Movement_FacePlayer
# 31 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmovement 0
# 32 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_TEMP_3, 5
	goto_if_eq DewfordTown_Gym_EventScript_Rival1_2
# 35 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_Rival1_3
# 40 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_FindingDeadEnds, MSGBOX_DEFAULT
# 41 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_3, 5
DewfordTown_Gym_EventScript_Rival1_1:
# 43 "data/maps/DewfordTown_Gym/scripts.pory"
	release
	end

DewfordTown_Gym_EventScript_Rival1_2:
# 33 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_HeHasToBeHereSomewhere, MSGBOX_DEFAULT
	goto DewfordTown_Gym_EventScript_Rival1_1

DewfordTown_Gym_EventScript_Rival1_3:
# 36 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_WhoaYouBeatTheGym, MSGBOX_DEFAULT
# 37 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_3, 5
	goto DewfordTown_Gym_EventScript_Rival1_1


# 65 "data/maps/DewfordTown_Gym/scripts.pory"

# 66 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetLightsOn::
# 67 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 0
# 68 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 69 "data/maps/DewfordTown_Gym/scripts.pory"

# 70 "data/maps/DewfordTown_Gym/scripts.pory"
@ Brightest
# 71 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel1::
# 72 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 1
# 73 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 74 "data/maps/DewfordTown_Gym/scripts.pory"

# 75 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel2::
# 76 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 2
# 77 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 78 "data/maps/DewfordTown_Gym/scripts.pory"

# 79 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel3::
# 80 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 3
# 81 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 82 "data/maps/DewfordTown_Gym/scripts.pory"

# 83 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel4::
# 84 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 4
# 85 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 86 "data/maps/DewfordTown_Gym/scripts.pory"

# 87 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel5::
# 88 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 5
# 89 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 90 "data/maps/DewfordTown_Gym/scripts.pory"

# 91 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel6::
# 92 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 6
# 93 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 94 "data/maps/DewfordTown_Gym/scripts.pory"

# 95 "data/maps/DewfordTown_Gym/scripts.pory"
@ Darkest
# 96 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel7::
# 97 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 7
# 98 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 99 "data/maps/DewfordTown_Gym/scripts.pory"

# 100 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrightenRoom::
# 101 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 102 "data/maps/DewfordTown_Gym/scripts.pory"
	nop1
# 103 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, VAR_0x8001, DewfordTown_Gym_EventScript_NoLightChange
# 104 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 105 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_AnimateFlash1Trainer
# 106 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_AnimateFlash2Trainers
# 107 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_AnimateFlash3Trainers
# 108 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_AnimateFlash4Trainers
# 109 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_AnimateFlash5Trainers
# 110 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 6, DewfordTown_Gym_EventScript_AnimateFlash6Trainers
# 111 "data/maps/DewfordTown_Gym/scripts.pory"

# 112 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_NoLightChange::
# 113 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 114 "data/maps/DewfordTown_Gym/scripts.pory"

# 115 "data/maps/DewfordTown_Gym/scripts.pory"
@ NOTE: A little confusingly, a larger animateflash param value is a smaller flash radius
# 116 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash1Trainer::
# 117 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 118 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 6
# 119 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 120 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 121 "data/maps/DewfordTown_Gym/scripts.pory"

# 122 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash2Trainers::
# 123 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 124 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 5
# 125 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 126 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 127 "data/maps/DewfordTown_Gym/scripts.pory"

# 128 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash3Trainers::
# 129 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 130 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 4
# 131 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 132 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 133 "data/maps/DewfordTown_Gym/scripts.pory"

# 134 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash4Trainers::
# 135 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 136 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 3
# 137 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 138 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 139 "data/maps/DewfordTown_Gym/scripts.pory"

# 140 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash5Trainers::
# 141 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 142 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 2
# 143 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 144 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 145 "data/maps/DewfordTown_Gym/scripts.pory"

# 146 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash6Trainers::
# 147 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 148 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 1
# 149 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 150 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 151 "data/maps/DewfordTown_Gym/scripts.pory"

# 152 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlashFullBrightness::
# 153 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 154 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 0
# 155 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 156 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 157 "data/maps/DewfordTown_Gym/scripts.pory"

# 158 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CountTrainersDefeated::
# 159 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8000, 0
# 160 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_TAKAO, DewfordTown_Gym_EventScript_CheckJocelyn
# 161 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 162 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckJocelyn::
# 163 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JOCELYN, DewfordTown_Gym_EventScript_CheckLaura
# 164 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 165 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLaura::
# 166 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LAURA, DewfordTown_Gym_EventScript_CheckBrenden
# 167 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 168 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckBrenden::
# 169 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BRENDEN, DewfordTown_Gym_EventScript_CheckCristian
# 170 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 171 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckCristian::
# 172 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_CRISTIAN, DewfordTown_Gym_EventScript_CheckLilith
# 173 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 174 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLilith::
# 175 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LILITH, DewfordTown_Gym_EventScript_StopCountingTrainers
# 176 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 177 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_StopCountingTrainers::
# 178 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 179 "data/maps/DewfordTown_Gym/scripts.pory"

# 180 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly::
# 181 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyIntro, DewfordTown_Gym_Text_BrawlyDefeat, DewfordTown_Gym_EventScript_BrawlyDefeated, NO_MUSIC
# 182 "data/maps/DewfordTown_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 183 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_Gym_EventScript_BrawlyRematch
# 184 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BULK_UP, DewfordTown_Gym_EventScript_GiveBulkUp2
# 185 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
# 186 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 187 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 188 "data/maps/DewfordTown_Gym/scripts.pory"

# 189 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated::
# 190 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_AnimateFlashFullBrightness
# 191 "data/maps/DewfordTown_Gym/scripts.pory"
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
# 192 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 193 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 194 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
# 195 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 196 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 197 "data/maps/DewfordTown_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 198 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 199 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 200 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_GiveBulkUp
# 201 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 202 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 203 "data/maps/DewfordTown_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 204 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_RegisteredBrawly, MSGBOX_DEFAULT
# 205 "data/maps/DewfordTown_Gym/scripts.pory"
	waitfanfare
# 206 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 207 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 208 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
# 209 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_ROXANNE_CALL_STEP_COUNTER, 0
# 210 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_3, 0
# 211 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 212 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 213 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 214 "data/maps/DewfordTown_Gym/scripts.pory"

# 215 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp::
# 216 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 217 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
# 218 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 219 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 220 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 221 "data/maps/DewfordTown_Gym/scripts.pory"

# 222 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp2:
# 223 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 224 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 225 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 226 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 227 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 228 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 229 "data/maps/DewfordTown_Gym/scripts.pory"

# 230 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyRematch::
# 231 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyPreRematch, DewfordTown_Gym_Text_BrawlyRematchDefeat, DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons
# 232 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
# 233 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 234 "data/maps/DewfordTown_Gym/scripts.pory"

# 235 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Takao::
# 236 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoIntro, DewfordTown_Gym_Text_TakaoDefeat, DewfordTown_Gym_EventScript_TakaoBrightenRoom
# 237 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
# 238 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 239 "data/maps/DewfordTown_Gym/scripts.pory"

# 240 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_TakaoBrightenRoom::
# 241 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 242 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 243 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 244 "data/maps/DewfordTown_Gym/scripts.pory"

# 245 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Jocelyn::
# 246 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynIntro, DewfordTown_Gym_Text_JocelynDefeat, DewfordTown_Gym_EventScript_JocelynBrightenRoom
# 247 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 248 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 249 "data/maps/DewfordTown_Gym/scripts.pory"

# 250 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_JocelynBrightenRoom::
# 251 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 252 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 253 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 254 "data/maps/DewfordTown_Gym/scripts.pory"

# 255 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Laura::
# 256 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LAURA, DewfordTown_Gym_Text_LauraIntro, DewfordTown_Gym_Text_LauraDefeat, DewfordTown_Gym_EventScript_LauraBrightenRoom
# 257 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
# 258 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 259 "data/maps/DewfordTown_Gym/scripts.pory"

# 260 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrightenRoom::
# 261 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 262 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 263 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 264 "data/maps/DewfordTown_Gym/scripts.pory"

# 265 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brenden::
# 266 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRENDEN, DewfordTown_Gym_Text_BrendenIntro, DewfordTown_Gym_Text_BrendenDefeat, DewfordTown_Gym_EventScript_BrendenBrightenRoom
# 267 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
# 268 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 269 "data/maps/DewfordTown_Gym/scripts.pory"

# 270 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrendenBrightenRoom::
# 271 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 272 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 273 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 274 "data/maps/DewfordTown_Gym/scripts.pory"

# 275 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Cristian::
# 276 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianIntro, DewfordTown_Gym_Text_CristianDefeat, DewfordTown_Gym_EventScript_CristianBrightenRoom
# 277 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
# 278 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 279 "data/maps/DewfordTown_Gym/scripts.pory"

# 280 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianBrightenRoom::
# 281 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 282 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 283 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 284 "data/maps/DewfordTown_Gym/scripts.pory"

# 285 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Lilith::
# 286 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LILITH, DewfordTown_Gym_Text_LilithIntro, DewfordTown_Gym_Text_LilithDefeat, DewfordTown_Gym_EventScript_LilithBrightenRoom
# 287 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
# 288 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 289 "data/maps/DewfordTown_Gym/scripts.pory"

# 290 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithBrightenRoom::
# 291 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 292 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 293 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 294 "data/maps/DewfordTown_Gym/scripts.pory"

# 295 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuide::
# 296 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 297 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 298 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymGuidePostVictory
# 299 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 300 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 301 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 302 "data/maps/DewfordTown_Gym/scripts.pory"

# 303 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuidePostVictory::
# 304 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 305 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 306 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 307 "data/maps/DewfordTown_Gym/scripts.pory"

# 308 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LeftGymStatue::
# 309 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 310 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 311 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 312 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 313 "data/maps/DewfordTown_Gym/scripts.pory"

# 314 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_RightGymStatue::
# 315 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 316 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 317 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 318 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 319 "data/maps/DewfordTown_Gym/scripts.pory"

# 320 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatueCertified::
# 321 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 322 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 323 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 324 "data/maps/DewfordTown_Gym/scripts.pory"

# 325 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatue::
# 326 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 327 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 328 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 329 "data/maps/DewfordTown_Gym/scripts.pory"

# 330 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuideAdvice:
# 331 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 332 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 333 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD's GYM LEADER BRAWLY commands\n"
# 334 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FIGHTING-type POKéMON.\p"
# 335 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Going against him with NORMAL-type\n"
# 336 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "POKéMON is asking for trouble.\p"
# 337 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FIGHTING POKéMON will lay a serious\n"
# 338 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "smack down on NORMAL POKéMON,\l"
# 339 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "so be careful!\p"
# 340 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "What's worse, the GYM is as dark as\n"
# 341 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "the ocean floor.\p"
# 342 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But it will get brighter after defeating\n"
# 343 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "the TRAINERS in your way.\p"
# 344 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, okay, go for it!$"
# 345 "data/maps/DewfordTown_Gym/scripts.pory"

# 346 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuidePostVictory:
# 347 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah! It's turned too bright in here!\p"
# 348 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your future is bright, too!$"
# 349 "data/maps/DewfordTown_Gym/scripts.pory"

# 350 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoIntro:
# 351 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Might is right!\n"
# 352 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Come on!$"
# 353 "data/maps/DewfordTown_Gym/scripts.pory"

# 354 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoDefeat:
# 355 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Not enough power…$"
# 356 "data/maps/DewfordTown_Gym/scripts.pory"

# 357 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoPostBattle:
# 358 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your skill overcame my strength!\n"
# 359 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your technique is commendable!$"
# 360 "data/maps/DewfordTown_Gym/scripts.pory"

# 361 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynIntro:
# 362 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "There's no need for BRAWLY to be\n"
# 363 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "involved!\p"
# 364 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll crush you!$"
# 365 "data/maps/DewfordTown_Gym/scripts.pory"

# 366 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynDefeat:
# 367 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But… How?\n"
# 368 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How could I lose so easily?$"
# 369 "data/maps/DewfordTown_Gym/scripts.pory"

# 370 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynPostBattle:
# 371 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm not going to waste this loss.\n"
# 372 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll use it to motivate me to train!\p"
# 373 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "One day I'll become a GYM LEADER…\p"
# 374 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "No, I'll become the POKéMON LEAGUE\n"
# 375 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "CHAMPION!$"
# 376 "data/maps/DewfordTown_Gym/scripts.pory"

# 377 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraIntro:
# 378 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Don't you dare brush me off!\n"
# 379 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not my fault if you cry!$"
# 380 "data/maps/DewfordTown_Gym/scripts.pory"

# 381 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraDefeat:
# 382 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Waaaaaaah!\n"
# 383 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I lost!$"
# 384 "data/maps/DewfordTown_Gym/scripts.pory"

# 385 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraPostBattle:
# 386 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I battle in the dark to make my heart\n"
# 387 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "stronger.\p"
# 388 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But because it's so dark, I can never\n"
# 389 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "see BRAWLY's face…$"
# 390 "data/maps/DewfordTown_Gym/scripts.pory"

# 391 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithIntro:
# 392 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ufufu…\n"
# 393 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Are you stumbling around in the dark?$"
# 394 "data/maps/DewfordTown_Gym/scripts.pory"

# 395 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithDefeat:
# 396 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, you…\n"
# 397 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I don't want to know you!$"
# 398 "data/maps/DewfordTown_Gym/scripts.pory"

# 399 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithPostBattle:
# 400 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You deserve to stay lost and end up\n"
# 401 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "back at the entrance again!$"
# 402 "data/maps/DewfordTown_Gym/scripts.pory"

# 403 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenIntro:
# 404 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll show you the gumption of\n"
# 405 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "a sailing man!$"
# 406 "data/maps/DewfordTown_Gym/scripts.pory"

# 407 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenDefeat:
# 408 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How'd this happen?\n"
# 409 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not like me to lose this way!$"
# 410 "data/maps/DewfordTown_Gym/scripts.pory"

# 411 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenPostBattle:
# 412 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, aye! You're worthy of seeing\n"
# 413 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "our GYM LEADER.$"
# 414 "data/maps/DewfordTown_Gym/scripts.pory"

# 415 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianIntro:
# 416 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you mean to pass, it has to be\n"
# 417 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "through me!$"
# 418 "data/maps/DewfordTown_Gym/scripts.pory"

# 419 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianDefeat:
# 420 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Grrrrr!\n"
# 421 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Vastly overpowered!$"
# 422 "data/maps/DewfordTown_Gym/scripts.pory"

# 423 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianPostBattle:
# 424 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You win!\n"
# 425 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Go after that BADGE!$"
# 426 "data/maps/DewfordTown_Gym/scripts.pory"

# 427 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyIntro:
# 428 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm BRAWLY!\n"
# 429 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD's GYM LEADER!\p"
# 430 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I've been churned in the rough waves\n"
# 431 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "of these parts, and I've grown tough\l"
# 432 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the pitch-black cave!\p"
# 433 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "So you wanted to challenge me?\n"
# 434 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Let me see what you're made of!$"
# 435 "data/maps/DewfordTown_Gym/scripts.pory"

# 436 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyDefeat:
# 437 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah, wow! You made a much bigger\n"
# 438 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "splash than I expected!\p"
# 439 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You swamped me!\p"
# 440 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Okay, you've got me.\n"
# 441 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Take this GYM BADGE!$"
# 442 "data/maps/DewfordTown_Gym/scripts.pory"

# 443 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ReceivedKnuckleBadge:
# 444 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER} received the KNUCKLE BADGE\n"
# 445 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "from BRAWLY.$"
# 446 "data/maps/DewfordTown_Gym/scripts.pory"

# 447 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis:
# 448 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "The KNUCKLE BADGE makes all POKéMON\n"
# 449 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "up to Level 30, even those you get in\l"
# 450 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "trades, obey without question.\p"
# 451 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "And, you'll be able to use the HM move\n"
# 452 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FLASH outside of battle.\p"
# 453 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you'd like, use this TECHNICAL\n"
# 454 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "MACHINE, too.$"
# 455 "data/maps/DewfordTown_Gym/scripts.pory"

# 456 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ExplainBulkUp:
# 457 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "That TM08 contains BULK UP.\p"
# 458 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's a move that raises both ATTACK\n"
# 459 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "and DEFENSE stats.\p"
# 460 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "… … … … … …$"
# 461 "data/maps/DewfordTown_Gym/scripts.pory"

# 462 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_RegisteredBrawly:
# 463 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Registered GYM LEADER BRAWLY\n"
# 464 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 465 "data/maps/DewfordTown_Gym/scripts.pory"

# 466 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostBattle:
# 467 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I can see your talent becoming a giant\n"
# 468 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "wave to cause a storm of astonishment\l"
# 469 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "among TRAINERS one day!$"
# 470 "data/maps/DewfordTown_Gym/scripts.pory"

# 471 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatue:
# 472 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM$"
# 473 "data/maps/DewfordTown_Gym/scripts.pory"

# 474 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatueCertified:
# 475 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM\p"
# 476 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY'S CERTIFIED TRAINERS:\n"
# 477 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER}$"
# 478 "data/maps/DewfordTown_Gym/scripts.pory"

# 479 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPreRematch:
# 480 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 481 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 482 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 483 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 484 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Show me how much higher\n"
# 485 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "you've gone!$"
# 486 "data/maps/DewfordTown_Gym/scripts.pory"

# 487 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchDefeat:
# 488 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wow!\n"
# 489 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Swamped again!$"
# 490 "data/maps/DewfordTown_Gym/scripts.pory"

# 491 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostRematch:
# 492 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: Battling is vast and it's deep.\n"
# 493 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You can't see the bottom.\l"
# 494 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's just like the sea of HOENN!$"
# 495 "data/maps/DewfordTown_Gym/scripts.pory"

# 496 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons:
# 497 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 498 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 499 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 500 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 501 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh? You only have one POKéMON\n"
# 502 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "that can battle.\p"
# 503 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm sorry, but I'd like you to come back\n"
# 504 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "with at least two POKéMON.$"

DewfordTown_Gym_Text_FindingDeadEnds::
# 47 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I don't know how I'm supposed to look\n"
	.string "for STEVEN in here.\l"
	.string "I keep finding dead ends in the dark!$"

DewfordTown_Gym_Text_WhoaYouBeatTheGym::
# 52 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoa! You beat the gym and turned all\n"
	.string "the lights on?\l"
	.string "Nice!\p"
	.string "You didn't happen to see STEVEN in\n"
	.string "there, did you?\l"
	.string "No?\l"
	.string "That's too bad.\l"
	.string "I'll keep looking.$"

DewfordTown_Gym_Text_HeHasToBeHereSomewhere::
# 61 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "He has to be around here SOMEWHERE!$"
