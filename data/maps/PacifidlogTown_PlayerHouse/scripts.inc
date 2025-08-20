PacifidlogTown_PlayerHouse_MapScripts::
	.byte 0


PacifidlogTown_PlayerHouse_Mom::
# 5 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	lock
# 6 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	faceplayer
# 7 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	msgbox PacifidlogTown_PlayerHouse_Mom_Text_0
	checkmoney 1000
# 0 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PacifidlogTown_PlayerHouse_Mom_2
PacifidlogTown_PlayerHouse_Mom_1:
# 13 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	msgbox PacifidlogTown_PlayerHouse_Mom_Text_3
# 14 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	release
	return

PacifidlogTown_PlayerHouse_Mom_2:
# 9 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	msgbox PacifidlogTown_PlayerHouse_Mom_Text_1
# 10 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	msgbox PacifidlogTown_PlayerHouse_Mom_Text_2
# 11 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	giveitem ITEM_PEARL
	goto PacifidlogTown_PlayerHouse_Mom_1


PacifidlogTown_PlayerHouse_EventScript_Wakeup_0::
# 21 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	lockall
# 22 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ToMom_0
# 23 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	call PacifidlogTown_PlayerHouse_EventScript_FirstMom
	return


# 26 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
ToMom_0:
# 27 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_down
# 27 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_down
# 27 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_down
# 28 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_left
# 28 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_left
# 28 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_left
# 28 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_left
	step_end

PacifidlogTown_PlayerHouse_EventScript_Wakeup_1::
# 32 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	lockall
# 33 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ToMom_1
# 34 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	call PacifidlogTown_PlayerHouse_EventScript_FirstMom
	return


# 37 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
ToMom_1:
# 38 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_down
# 38 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_down
# 39 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_left
# 39 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_left
# 39 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_left
# 39 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_left
	step_end

PacifidlogTown_PlayerHouse_EventScript_Wakeup_2::
# 43 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	lockall
# 44 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ToMom_2
# 45 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	call PacifidlogTown_PlayerHouse_EventScript_FirstMom
	return


# 48 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
ToMom_2:
# 49 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_down
# 50 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_left
# 50 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_left
# 50 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_left
# 50 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_left
	step_end

PacifidlogTown_PlayerHouse_EventScript_Wakeup_3::
# 53 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	lockall
# 54 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ToMom_3
# 55 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	call PacifidlogTown_PlayerHouse_EventScript_FirstMom
	return


# 58 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
ToMom_3:
# 59 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_left
# 59 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_left
# 59 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_left
# 59 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_left
	step_end

PacifidlogTown_PlayerHouse_EventScript_Wakeup_4::
# 63 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	lockall
# 64 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ToMom_4
# 65 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	call PacifidlogTown_PlayerHouse_EventScript_FirstMom
	return


# 68 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
ToMom_4:
# 69 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_up
# 70 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_left
# 70 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_left
# 70 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_left
# 70 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_left
	step_end

PacifidlogTown_PlayerHouse_EventScript_Wakeup_5::
# 74 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	lockall
# 75 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ToMom_5
# 76 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	call PacifidlogTown_PlayerHouse_EventScript_FirstMom
	return


# 79 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
ToMom_5:
# 80 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_up
# 80 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_up
# 81 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_left
# 81 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_left
# 81 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_left
# 81 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_left
	step_end

PacifidlogTown_PlayerHouse_EventScript_Wakeup_6::
# 85 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	lockall
# 86 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ToMom_6
# 87 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	call PacifidlogTown_PlayerHouse_EventScript_FirstMom
	return


# 91 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
ToMom_6:
# 92 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_up
# 92 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_up
# 92 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_up
# 93 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_left
# 93 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_left
# 93 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_left
# 93 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	walk_left
	step_end

# 96 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
MomTurn:
# 97 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	face_right
	step_end

PacifidlogTown_PlayerHouse_EventScript_FirstMom::
# 101 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	waitmovement 0
# 102 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	applymovement 1, MomTurn
# 103 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	waitmovement 0
# 104 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	msgbox PacifidlogTown_PlayerHouse_EventScript_FirstMom_Text_0
# 105 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	msgbox PacifidlogTown_PlayerHouse_EventScript_FirstMom_Text_1
# 106 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	setvar VAR_PACIFIDLOG_TOWN_STATE, 1
# 107 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	setflag FLAG_ON
# 108 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	releaseall
	return


PacifidlogTown_PlayerHouse_Mom_Text_0:
# 7 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	.string "Welcome home, {PLAYER}! I hope your\n"
	.string "journey is going well.$"

PacifidlogTown_PlayerHouse_Mom_Text_1:
# 9 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	.string "Are you sure you have enough money for\n"
	.string "your journey?$"

PacifidlogTown_PlayerHouse_Mom_Text_2:
# 10 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	.string "I found this the other day, you can\n"
	.string "have it.$"

PacifidlogTown_PlayerHouse_Mom_Text_3:
# 13 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	.string "Be safe out there!$"

PacifidlogTown_PlayerHouse_EventScript_FirstMom_Text_0:
# 104 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	.string "Oh, {PLAYER}! You woke up!$"

PacifidlogTown_PlayerHouse_EventScript_FirstMom_Text_1:
# 105 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	.string "Professor Fir told me he wanted to see\n"
	.string "you, supposedly he's got a surprise\l"
	.string "planned for you and RIVAL$"
