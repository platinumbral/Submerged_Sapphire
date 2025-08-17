PacifidlogTown_ProfessorLab_MapScripts::
	.byte 0


PacifidlogTown_ProfessorLab_EventScript_Professor::
# 4 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lockall
# 5 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	faceplayer
# 6 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_Professor_Text_0
# 7 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	releaseall
	return


PacifidlogTown_ProfessorLab_EventScript_Aide1::
# 11 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lockall
# 12 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	faceplayer
# 13 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_Aide1_Text_0
# 14 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	releaseall
	return


PacifidlogTown_ProfessorLab_EventScript_Aide2::
# 18 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lockall
# 19 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	faceplayer
# 20 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_Aide2_Text_0
# 21 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	releaseall
	return


PacifidlogTown_ProfessorLab_EventScript_Professor_Text_0:
# 6 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Hello {PLAYER}! The Corsola seem to\n"
	.string "be doing well today!$"

PacifidlogTown_ProfessorLab_EventScript_Aide1_Text_0:
# 13 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "I know the work we do here is important\n"
	.string "to keep the Corsola healthy, but I wish\l"
	.string "the seawater didn't spray all over my\l"
	.string "papers...$"

PacifidlogTown_ProfessorLab_EventScript_Aide2_Text_0:
# 20 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "A long time ago, Mareanie didn't live in\n"
	.string "Hoenn. But now, they've been spread\l"
	.string "head to Pacifidlog, and pose a real\l"
	.string "threat to our Corsola colony.$"
