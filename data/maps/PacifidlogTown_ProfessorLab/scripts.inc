PacifidlogTown_ProfessorLab_MapScripts::
	.byte 0


PacifidlogTown_ProfessorLab_EventScript_LeftBall::
# 4 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lockall
# 5 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	goto_if_unset FLAG_LEFT_STARTER, PacifidlogTown_ProfessorLab_EventScript_LeftBall_4
PacifidlogTown_ProfessorLab_EventScript_LeftBall_3:
# 23 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_LeftBall_Text_2
PacifidlogTown_ProfessorLab_EventScript_LeftBall_1:
# 25 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 26 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	releaseall
	end

PacifidlogTown_ProfessorLab_EventScript_LeftBall_2:
# 6 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	showmonpic SPECIES_PIPLUP, 10, 3
# 7 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_LeftBall_Text_0, MSGBOX_YESNO
# 8 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PacifidlogTown_ProfessorLab_EventScript_LeftBall_9
# 19 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	hidemonpic
	goto PacifidlogTown_ProfessorLab_EventScript_LeftBall_1

PacifidlogTown_ProfessorLab_EventScript_LeftBall_4:
# 5 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	goto_if_unset FLAG_MID_STARTER, PacifidlogTown_ProfessorLab_EventScript_LeftBall_6
	goto PacifidlogTown_ProfessorLab_EventScript_LeftBall_3

PacifidlogTown_ProfessorLab_EventScript_LeftBall_6:
# 5 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	goto_if_unset FLAG_RIGHT_STARTER, PacifidlogTown_ProfessorLab_EventScript_LeftBall_2
	goto PacifidlogTown_ProfessorLab_EventScript_LeftBall_3

PacifidlogTown_ProfessorLab_EventScript_LeftBall_9:
# 9 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 10 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_LeftBall_Text_1
# 11 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	givemon SPECIES_PIPLUP, 5
# 12 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	removeobject 4
# 13 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setflag FLAG_LEFT_STARTER
# 14 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 15 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitfanfare
# 16 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call NicknamePartyMon
	goto PacifidlogTown_ProfessorLab_EventScript_LeftBall_1


PacifidlogTown_ProfessorLab_EventScript_MiddleBall::
# 31 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lockall
# 32 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	goto_if_unset FLAG_LEFT_STARTER, PacifidlogTown_ProfessorLab_EventScript_MiddleBall_4
PacifidlogTown_ProfessorLab_EventScript_MiddleBall_3:
# 50 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_LeftBall_Text_2
PacifidlogTown_ProfessorLab_EventScript_MiddleBall_1:
# 52 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 53 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	releaseall
	end

PacifidlogTown_ProfessorLab_EventScript_MiddleBall_2:
# 33 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 34 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_MiddleBall_Text_0, MSGBOX_YESNO
# 35 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PacifidlogTown_ProfessorLab_EventScript_MiddleBall_9
# 46 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	hidemonpic
	goto PacifidlogTown_ProfessorLab_EventScript_MiddleBall_1

PacifidlogTown_ProfessorLab_EventScript_MiddleBall_4:
# 32 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	goto_if_unset FLAG_MID_STARTER, PacifidlogTown_ProfessorLab_EventScript_MiddleBall_6
	goto PacifidlogTown_ProfessorLab_EventScript_MiddleBall_3

PacifidlogTown_ProfessorLab_EventScript_MiddleBall_6:
# 32 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	goto_if_unset FLAG_RIGHT_STARTER, PacifidlogTown_ProfessorLab_EventScript_MiddleBall_2
	goto PacifidlogTown_ProfessorLab_EventScript_MiddleBall_3

PacifidlogTown_ProfessorLab_EventScript_MiddleBall_9:
# 36 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 37 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_MiddleBall_Text_1
# 38 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5
# 39 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	removeobject 5
# 40 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setflag FLAG_MID_STARTER
# 41 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 42 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitfanfare
# 43 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call NicknamePartyMon
	goto PacifidlogTown_ProfessorLab_EventScript_MiddleBall_1


PacifidlogTown_ProfessorLab_EventScript_RightBall::
# 58 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lockall
# 59 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	goto_if_unset FLAG_LEFT_STARTER, PacifidlogTown_ProfessorLab_EventScript_RightBall_4
PacifidlogTown_ProfessorLab_EventScript_RightBall_3:
# 77 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_LeftBall_Text_2
PacifidlogTown_ProfessorLab_EventScript_RightBall_1:
# 79 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 80 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	releaseall
	end

PacifidlogTown_ProfessorLab_EventScript_RightBall_2:
# 60 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	showmonpic SPECIES_POPPLIO, 10, 3
# 61 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_RightBall_Text_0, MSGBOX_YESNO
# 62 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PacifidlogTown_ProfessorLab_EventScript_RightBall_9
# 73 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	hidemonpic
	goto PacifidlogTown_ProfessorLab_EventScript_RightBall_1

PacifidlogTown_ProfessorLab_EventScript_RightBall_4:
# 59 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	goto_if_unset FLAG_MID_STARTER, PacifidlogTown_ProfessorLab_EventScript_RightBall_6
	goto PacifidlogTown_ProfessorLab_EventScript_RightBall_3

PacifidlogTown_ProfessorLab_EventScript_RightBall_6:
# 59 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	goto_if_unset FLAG_RIGHT_STARTER, PacifidlogTown_ProfessorLab_EventScript_RightBall_2
	goto PacifidlogTown_ProfessorLab_EventScript_RightBall_3

PacifidlogTown_ProfessorLab_EventScript_RightBall_9:
# 63 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 64 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_RightBall_Text_1
# 65 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	givemon SPECIES_POPPLIO, 5
# 66 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	removeobject 6
# 67 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setflag FLAG_RIGHT_STARTER
# 68 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 69 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitfanfare
# 70 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call NicknamePartyMon
	goto PacifidlogTown_ProfessorLab_EventScript_RightBall_1


PacifidlogTown_ProfessorLab_EventScript_Professor::
# 85 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lock
# 86 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	faceplayer
# 87 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_Professor_Text_0
# 88 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	release
	return


PacifidlogTown_ProfessorLab_EventScript_Aide1::
# 92 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lock
# 93 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	faceplayer
# 94 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_Aide1_Text_0
# 95 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	release
	return


PacifidlogTown_ProfessorLab_EventScript_Aide2::
# 99 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lock
# 100 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	faceplayer
# 101 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_Aide2_Text_0
# 102 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	release
	return


NicknamePartyMon::
# 106 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 107 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	hidemonpic
# 108 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 109 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 110 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


PacifidlogTown_ProfessorLab_EventScript_LeftBall_Text_0:
# 7 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Do you want to choose Piplup?$"

PacifidlogTown_ProfessorLab_EventScript_LeftBall_Text_1:
# 10 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "You received Piplup!$"

PacifidlogTown_ProfessorLab_EventScript_LeftBall_Text_2:
# 23 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "You already have a starter Pokémon.$"

PacifidlogTown_ProfessorLab_EventScript_MiddleBall_Text_0:
# 34 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Do you want to choose Oshawott?$"

PacifidlogTown_ProfessorLab_EventScript_MiddleBall_Text_1:
# 37 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "You received Oshawott!$"

PacifidlogTown_ProfessorLab_EventScript_RightBall_Text_0:
# 61 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Do you want to choose Popplio?$"

PacifidlogTown_ProfessorLab_EventScript_RightBall_Text_1:
# 64 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "You received Popplio!$"

PacifidlogTown_ProfessorLab_EventScript_Professor_Text_0:
# 87 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Hello {PLAYER}! The Corsola seem to\n"
	.string "be doing well today!$"

PacifidlogTown_ProfessorLab_EventScript_Aide1_Text_0:
# 94 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "I know the work we do here is important\n"
	.string "to keep the Corsola healthy, but I wish\l"
	.string "the seawater didn't spray all over my\l"
	.string "papers...$"

PacifidlogTown_ProfessorLab_EventScript_Aide2_Text_0:
# 101 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "A long time ago, Mareanie didn't live in\n"
	.string "Hoenn. But now, they've been spread\l"
	.string "head to Pacifidlog, and pose a real\l"
	.string "threat to our Corsola colony.$"

NicknamePartyMon_Text_0:
# 106 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Would you like to give it a nickname?$"
