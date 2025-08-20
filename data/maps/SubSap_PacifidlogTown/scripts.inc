SubSap_PacifidlogTown_MapScripts::
# 2 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SubSap_PacifidlogTown_OnTransition
# 3 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SubSap_PacifidlogTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SubSap_PacifidlogTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	map_script_2 VAR_TEMP_2, 1, PacifidlogTown_EventScript_DevSquirtle
	.2byte 0


SubSap_PacifidlogTown_OnTransition::
# 9 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	setvar VAR_TEMP_2, 0
# 10 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	compare VAR_PACIFIDLOG_TOWN_STATE, 4
	goto_if_eq SubSap_PacifidlogTown_OnTransition_1
	return

SubSap_PacifidlogTown_OnTransition_1:
# 11 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	setvar VAR_TEMP_2, 1
	return


SubSat_PacifidlogTown_Fisherman::
# 16 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	lock
# 17 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	faceplayer
# 18 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	msgbox SubSat_PacifidlogTown_Fisherman_Text_0
	checkitem ITEM_SUPER_ROD
# 0 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SubSat_PacifidlogTown_Fisherman_2
SubSat_PacifidlogTown_Fisherman_1:
# 23 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	release
	return

SubSat_PacifidlogTown_Fisherman_2:
# 20 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	msgbox SubSat_PacifidlogTown_Fisherman_Text_1
# 21 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	giveitem ITEM_SUPER_ROD
	goto SubSat_PacifidlogTown_Fisherman_1


PacifidlogTown_EventScript_DevSquirtle::
# 27 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	lockall
# 28 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	addobject 2
# 29 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_DevSquirtle_Text_0
# 30 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	waitmessage
# 31 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, toDevSquirtle
# 32 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	waitmovement 0
# 33 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_DevSquirtle_Text_1
# 34 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	waitmessage
# 35 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	setflag FLAG_BADGE05_GET
# 36 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	setflag FLAG_BADGE06_GET
# 37 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	setflag FLAG_BADGE08_GET
# 38 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	giveitem ITEM_HM_SURF
# 39 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	giveitem ITEM_HM_FLY
# 40 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	givemon SPECIES_DRAGONITE, 100, ITEM_MASTER_BALL, , , , , , , , , , , , , , , , , MOVE_FLY, MOVE_SURF, MOVE_DRACO_METEOR, MOVE_ROAR_OF_TIME
# 41 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	givemon SPECIES_DITTO, 100, ITEM_ABILITY_CAPSULE, , , 3
# 42 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_DevSquirtle_Text_2
# 43 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	waitmessage
# 44 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	removeobject 2
# 45 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	setvar VAR_PACIFIDLOG_TOWN_STATE, 10
# 46 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	setvar VAR_TEMP_2, 0
# 47 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	releaseall
	return


# 51 "data/maps/SubSap_PacifidlogTown/scripts.pory"
toDevSquirtle:
# 52 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	walk_right
# 52 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	walk_right
# 52 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	walk_right
# 52 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	walk_right
# 52 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	walk_right
# 52 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	walk_right
# 53 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	walk_up
# 53 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	walk_up
	step_end

SubSat_PacifidlogTown_Fisherman_Text_0:
# 18 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	.string "Our town is reliant on the sea, so we've\n"
	.string "got to give it the care it deserves.$"

SubSat_PacifidlogTown_Fisherman_Text_1:
# 20 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	.string "Oh, you're leaving soon, aren't you\n"
	.string "{PLAYER}? I've got a spare Super Rod\l"
	.string "laying around, I'm sure it'll come in\l"
	.string "handy!$"

PacifidlogTown_EventScript_DevSquirtle_Text_0:
# 29 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	.string "Psst! Hey kid, over here.$"

PacifidlogTown_EventScript_DevSquirtle_Text_1:
# 33 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	.string "I've got something special, for your\n"
	.string "eyes only.$"

PacifidlogTown_EventScript_DevSquirtle_Text_2:
# 42 "data/maps/SubSap_PacifidlogTown/scripts.pory"
	.string "These two should help you out. But we\n"
	.string "never met, okay?$"
