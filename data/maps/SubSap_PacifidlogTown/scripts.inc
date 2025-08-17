SubSat_PacifidlogTown_Fisherman::
# 2 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	lock
# 3 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	faceplayer
# 4 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	msgbox SubSat_PacifidlogTown_Fisherman_Text_0
	checkitem ITEM_SUPER_ROD
# 0 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SubSat_PacifidlogTown_Fisherman_2
SubSat_PacifidlogTown_Fisherman_1:
# 9 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	release
	return

SubSat_PacifidlogTown_Fisherman_2:
# 6 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	msgbox SubSat_PacifidlogTown_Fisherman_Text_1
# 7 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	giveitem ITEM_SUPER_ROD
	goto SubSat_PacifidlogTown_Fisherman_1


# 12 "data/maps/SubSap_PacifidlogTown/scripts.pory"

# 13 "data/maps/SubSap_PacifidlogTown/scripts.pory"
SubSap_PacifidlogTown_MapScripts::
# 14 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	.byte 0

SubSat_PacifidlogTown_Fisherman_Text_0:
# 4 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	.string "Our town is reliant on the sea, so we've\n"
	.string "got to give it the care it deserves.$"

SubSat_PacifidlogTown_Fisherman_Text_1:
# 6 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	.string "Oh, you're leaving soon, aren't you\n"
	.string "{PLAYER}? I've got a spare Super Rod\l"
	.string "laying around, I'm sure it'll come in\l"
	.string "handy!$"
