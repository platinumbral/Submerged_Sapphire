PacifidlogTown_PlayerHouse_MapScripts::
	.byte 0


PacifidlogTown_PlayerHouse_Mom::
# 4 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	lock
# 5 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	faceplayer
# 6 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	msgbox PacifidlogTown_PlayerHouse_Mom_Text_0
	checkmoney 1000
# 0 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PacifidlogTown_PlayerHouse_Mom_2
PacifidlogTown_PlayerHouse_Mom_1:
# 12 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	msgbox PacifidlogTown_PlayerHouse_Mom_Text_3
# 13 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	release
	return

PacifidlogTown_PlayerHouse_Mom_2:
# 8 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	msgbox PacifidlogTown_PlayerHouse_Mom_Text_1
# 9 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	msgbox PacifidlogTown_PlayerHouse_Mom_Text_2
# 10 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	giveitem ITEM_PEARL
	goto PacifidlogTown_PlayerHouse_Mom_1


PacifidlogTown_PlayerHouse_Mom_Text_0:
# 6 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	.string "Welcome home, {PLAYER}! I hope your\n"
	.string "journey is going well.$"

PacifidlogTown_PlayerHouse_Mom_Text_1:
# 8 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	.string "Are you sure you have enough money for\n"
	.string "your journey?$"

PacifidlogTown_PlayerHouse_Mom_Text_2:
# 9 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	.string "I found this the other day, you can\n"
	.string "have it.$"

PacifidlogTown_PlayerHouse_Mom_Text_3:
# 12 "data/maps/PacifidlogTown_PlayerHouse/scripts.pory"
	.string "Be safe out there!$"
