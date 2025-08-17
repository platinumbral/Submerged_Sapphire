PacifidlogTown_Pokemart_MapScripts::
	.byte 0


PacifidlogTown_Pokemart_EventScript_Boy::
# 4 "data/maps/PacifidlogTown_Pokemart/scripts.pory"
	lock
# 5 "data/maps/PacifidlogTown_Pokemart/scripts.pory"
	faceplayer
# 6 "data/maps/PacifidlogTown_Pokemart/scripts.pory"
	msgbox PacifidlogTown_Pokemart_EventScript_Boy_Text_0
# 7 "data/maps/PacifidlogTown_Pokemart/scripts.pory"
	release
	return


PacifidlogTown_Pokemart_Employee::
# 11 "data/maps/PacifidlogTown_Pokemart/scripts.pory"
	lock
# 12 "data/maps/PacifidlogTown_Pokemart/scripts.pory"
	message PacifidlogTown_Pokemart_Employee_Text_0
# 13 "data/maps/PacifidlogTown_Pokemart/scripts.pory"
	waitmessage
# 14 "data/maps/PacifidlogTown_Pokemart/scripts.pory"
	pokemart PacifidlogItems
# 15 "data/maps/PacifidlogTown_Pokemart/scripts.pory"
	message PacifidlogTown_Pokemart_Employee_Text_1
# 16 "data/maps/PacifidlogTown_Pokemart/scripts.pory"
	release
	return


	.align 2
# 19 "data/maps/PacifidlogTown_Pokemart/scripts.pory"
PacifidlogItems:
# 20 "data/maps/PacifidlogTown_Pokemart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 21 "data/maps/PacifidlogTown_Pokemart/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 22 "data/maps/PacifidlogTown_Pokemart/scripts.pory"
	.2byte ITEM_NET_BALL
# 23 "data/maps/PacifidlogTown_Pokemart/scripts.pory"
	.2byte ITEM_POTION
# 24 "data/maps/PacifidlogTown_Pokemart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 25 "data/maps/PacifidlogTown_Pokemart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 26 "data/maps/PacifidlogTown_Pokemart/scripts.pory"
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_NONE

PacifidlogTown_Pokemart_EventScript_Boy_Text_0:
# 6 "data/maps/PacifidlogTown_Pokemart/scripts.pory"
	.string "Apparently Pacifidlog Town didn't\n"
	.string "always have a Poké Mart. Once the lab\l"
	.string "was built, the people here decided to\l"
	.string "build a Poké Mart too.$"

PacifidlogTown_Pokemart_Employee_Text_0:
# 12 "data/maps/PacifidlogTown_Pokemart/scripts.pory"
	.string "Welcome in {PLAYER}, how can I help you today?$"

PacifidlogTown_Pokemart_Employee_Text_1:
# 15 "data/maps/PacifidlogTown_Pokemart/scripts.pory"
	.string "Stop by again soon!$"
