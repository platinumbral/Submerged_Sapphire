PacifidlogTown_PokemonCenter_EventScript_GameboyKid::
# 2 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	lockall
# 3 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	msgbox PacifidlogTown_PokemonCenter_EventScript_GameboyKid_Text_0
# 4 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


# 6 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 7 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_MapScripts::
# 8 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_PokemonCenter_1F_OnTransition
# 9 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 10 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 11 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 12 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_OnTransition:
# 13 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_PACIFIDLOG_TOWN
# 14 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	end
# 15 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 16 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_EventScript_Nurse::
# 17 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_PACIFIDLOG_NURSE
# 18 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 19 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 20 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 21 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	release
# 22 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	end
# 23 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 24 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_EventScript_Girl::
# 25 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	msgbox PacifidlogTown_PokemonCenter_1F_Text_WhatColorTrainerCard, MSGBOX_NPC
# 26 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	end
# 27 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 28 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_EventScript_Woman::
# 29 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	msgbox PacifidlogTown_PokemonCenter_1F_Text_OnColonyOfCorsola, MSGBOX_NPC
# 30 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	end
# 31 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 32 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_EventScript_OldMan::
# 33 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	msgbox PacifidlogTown_PokemonCenter_1F_Text_AncestorsLivedOnBoats, MSGBOX_NPC
# 34 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	end
# 35 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 36 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_Text_WhatColorTrainerCard:
# 37 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "What color is your TRAINER CARD?\n"
# 38 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "Mine's copper!$"
# 39 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 40 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_Text_OnColonyOfCorsola:
# 41 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "PACIFIDLOG TOWN floats on top of\n"
# 42 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "a colony of CORSOLA.\p"
# 43 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "If I told you that, would you believe\n"
# 44 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "me?$"
# 45 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 46 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_Text_AncestorsLivedOnBoats:
# 47 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "The ancestors of the people in\n"
# 48 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "PACIFIDLOG were said to have been\l"
# 49 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "born on boats and then lived and died \l"
# 50 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "aboard them.\p"
# 51 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "I understand that they lived that way\n"
# 52 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "because they were searching for\l"
# 53 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "something.$"

PacifidlogTown_PokemonCenter_EventScript_GameboyKid_Text_0:
# 3 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "Hey {PLAYER}, I hear you're setting\n"
	.string "out on a journey soon. I'm so jealous! I\l"
	.string "wish I had Pokemon of my own...$"
