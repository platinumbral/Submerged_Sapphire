PacifidlogTown_ProfessorLab_MapScripts::
	.byte 0


PacifidlogTown_ProfessorLab_EventScript_LeftBall::
# 4 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lockall
# 5 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	showmonpic SPECIES_PIPLUP, 10, 3
# 6 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_LeftBall_Text_0, MSGBOX_YESNO
# 7 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PacifidlogTown_ProfessorLab_EventScript_LeftBall_2
# 18 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	hidemonpic
PacifidlogTown_ProfessorLab_EventScript_LeftBall_1:
# 20 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 21 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	releaseall
	end

PacifidlogTown_ProfessorLab_EventScript_LeftBall_2:
# 8 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 9 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_LeftBall_Text_1
# 10 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	givemon SPECIES_PIPLUP, 5
# 11 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	removeobject 4
# 12 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setflag FLAG_LEFT_STARTER
# 13 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 14 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitfanfare
# 15 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call NicknamePartyMon
	goto PacifidlogTown_ProfessorLab_EventScript_LeftBall_1


PacifidlogTown_ProfessorLab_EventScript_MiddleBall::
# 26 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lockall
# 27 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 28 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_MiddleBall_Text_0, MSGBOX_YESNO
# 29 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PacifidlogTown_ProfessorLab_EventScript_MiddleBall_2
# 40 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	hidemonpic
PacifidlogTown_ProfessorLab_EventScript_MiddleBall_1:
# 42 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 43 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	releaseall
	end

PacifidlogTown_ProfessorLab_EventScript_MiddleBall_2:
# 30 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 31 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_MiddleBall_Text_1
# 32 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5
# 33 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	removeobject 5
# 34 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setflag FLAG_MID_STARTER
# 35 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 36 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitfanfare
# 37 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call NicknamePartyMon
	goto PacifidlogTown_ProfessorLab_EventScript_MiddleBall_1


PacifidlogTown_ProfessorLab_EventScript_RightBall::
# 48 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lockall
# 49 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	showmonpic SPECIES_POPPLIO, 10, 3
# 50 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_RightBall_Text_0, MSGBOX_YESNO
# 51 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PacifidlogTown_ProfessorLab_EventScript_RightBall_2
# 62 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	hidemonpic
PacifidlogTown_ProfessorLab_EventScript_RightBall_1:
# 64 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 65 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	releaseall
	end

PacifidlogTown_ProfessorLab_EventScript_RightBall_2:
# 52 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 53 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_RightBall_Text_1
# 54 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	givemon SPECIES_POPPLIO, 5
# 55 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	removeobject 6
# 56 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setflag FLAG_RIGHT_STARTER
# 57 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 58 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitfanfare
# 59 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call NicknamePartyMon
	goto PacifidlogTown_ProfessorLab_EventScript_RightBall_1


PacifidlogTown_ProfessorLab_EventScript_Professor::
# 70 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lock
# 71 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	faceplayer
# 72 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_Professor_Text_0
# 73 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	release
	return


PacifidlogTown_ProfessorLab_EventScript_Aide1::
# 77 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lock
# 78 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	faceplayer
# 79 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_Aide1_Text_0
# 80 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	release
	return


PacifidlogTown_ProfessorLab_EventScript_Aide2::
# 84 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lock
# 85 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	faceplayer
# 86 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_Aide2_Text_0
# 87 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	release
	return


NicknamePartyMon::
# 91 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 92 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	hidemonpic
# 93 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 94 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 95 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


PacifidlogTown_ProfessorLab_EventScript_LeftBall_Text_0:
# 6 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Do you want to choose Piplup?$"

PacifidlogTown_ProfessorLab_EventScript_LeftBall_Text_1:
# 9 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "You received Piplup!$"

PacifidlogTown_ProfessorLab_EventScript_MiddleBall_Text_0:
# 28 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Do you want to choose Oshawott?$"

PacifidlogTown_ProfessorLab_EventScript_MiddleBall_Text_1:
# 31 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "You received Oshawott!$"

PacifidlogTown_ProfessorLab_EventScript_RightBall_Text_0:
# 50 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Do you want to choose Popplio?$"

PacifidlogTown_ProfessorLab_EventScript_RightBall_Text_1:
# 53 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "You received Popplio!$"

PacifidlogTown_ProfessorLab_EventScript_Professor_Text_0:
# 72 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Hello {PLAYER}! The Corsola seem to\n"
	.string "be doing well today!$"

PacifidlogTown_ProfessorLab_EventScript_Aide1_Text_0:
# 79 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "I know the work we do here is important\n"
	.string "to keep the Corsola healthy, but I wish\l"
	.string "the seawater didn't spray all over my\l"
	.string "papers...$"

PacifidlogTown_ProfessorLab_EventScript_Aide2_Text_0:
# 86 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "A long time ago, Mareanie didn't live in\n"
	.string "Hoenn. But now, they've been spread\l"
	.string "head to Pacifidlog, and pose a real\l"
	.string "threat to our Corsola colony.$"

NicknamePartyMon_Text_0:
# 91 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Would you like to give it a nickname?$"
