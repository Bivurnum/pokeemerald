# 1 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 2 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_MapScripts::
# 3 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_SeasideCyclingRoadSouthEntrance_OnTransition
# 4 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.byte 0
# 5 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 6 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_OnTransition:
# 7 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	call_if_eq VAR_CYCLING_CHALLENGE_STATE, 3, Route110_SeasideCyclingRoadSouthEntrance_EventScript_RestartChallenge
# 8 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	call_if_eq VAR_CYCLING_CHALLENGE_STATE, 2, Route110_SeasideCyclingRoadSouthEntrance_EventScript_RestartChallenge
# 9 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	end
# 10 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 11 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_EventScript_RestartChallenge::
# 12 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 1
# 13 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	return
# 14 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 15 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_EventScript_Clerk::
# 16 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	lock
# 17 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	faceplayer
# 18 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	msgbox Route110_SeasideCyclingRoadSouthEntrance_Text_GoAllOutOnCyclingRoad, MSGBOX_DEFAULT
# 19 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	release
# 20 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	end
# 21 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 22 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_EventScript_BikeCheck::
# 23 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	lockall
# 24 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 25 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	call_if_eq VAR_RESULT, 2, Route110_SeasideCyclingRoadSouthEntrance_EventScript_OnMachBike
# 26 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Route110_SeasideCyclingRoadSouthEntrance_EventScript_NoBike
# 27 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	setflag FLAG_SYS_CYCLING_ROAD
# 28 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 1
# 29 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	releaseall
# 30 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	end
# 31 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 32 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_EventScript_OnMachBike::
# 33 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 1
# 34 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	return
# 35 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 36 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_EventScript_NoBike::
# 37 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	msgbox Route110_SeasideCyclingRoadSouthEntrance_Text_TooDangerousToWalk, MSGBOX_DEFAULT
# 38 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	closemessage
# 39 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	ballfollowingmon
# 40 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route110_SeasideCyclingRoadSouthEntrance_Movement_PushPlayerBackFromCounter
# 41 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	releaseall
# 43 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	end
# 44 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 45 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_Movement_PushPlayerBackFromCounter:
# 46 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	walk_left
# 47 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	step_end
# 48 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 49 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_EventScript_ClearCyclingRoad::
# 50 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	lockall
# 51 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 0
# 52 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	clearflag FLAG_SYS_CYCLING_ROAD
# 53 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 0
# 54 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	releaseall
# 55 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	end
# 56 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 57 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_Text_GoAllOutOnCyclingRoad:
# 58 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "On CYCLING ROAD, you can go all out\n"
# 59 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "and cycle as fast as you'd like.\p"
# 60 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "It feels great to go that fast, but try\n"
# 61 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "not to crash into anyone!$"
# 62 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 63 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_Text_TooDangerousToWalk:
# 64 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "Sorry, you can't walk on CYCLING\n"
# 65 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "ROAD. It's too dangerous.\p"
# 66 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "Please come back with a BIKE.$"
