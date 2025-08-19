PacifidlogTown_ProfessorLab_MapScripts::
# 2 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OnTransition
# 3 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PacifidlogTown_ProfessorLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PacifidlogTown_ProfessorLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	map_script_2 VAR_TEMP_2, 0, PacifidlogTown_ProffessorLab_EventScript_EveryFrame
	.2byte 0


OnTransition::
# 9 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setvar VAR_TEMP_2, 0
	return


PacifidlogTown_ProffessorLab_EventScript_EveryFrame::
# 13 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	compare VAR_PACIFIDLOG_TOWN_STATE, 1
	goto_if_eq PacifidlogTown_ProffessorLab_EventScript_EveryFrame_1
	return

PacifidlogTown_ProffessorLab_EventScript_EveryFrame_1:
# 14 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lockall
# 15 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setvar VAR_TEMP_2, 1
# 16 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProffessorLab_EventScript_EveryFrame_Text_0
# 17 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 18 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement 3, ProfessorIntro1
# 19 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmovement 0
# 20 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProffessorLab_EventScript_EveryFrame_Text_1
# 21 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 22 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement 3, ProfessorIntro2
# 23 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmovement 0
# 24 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProffessorLab_EventScript_EveryFrame_Text_2
# 25 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 26 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProffessorLab_EventScript_EveryFrame_Text_3
# 27 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 28 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement 3, ProfessorIntro3
# 29 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerIntro
# 30 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmovement 0
# 31 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProffessorLab_EventScript_EveryFrame_Text_4
# 32 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 33 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	releaseall
	return


PacifidlogTown_ProfessorLab_EventScript_LeftBall::
# 38 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lockall
# 39 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	goto_if_unset FLAG_LEFT_STARTER, PacifidlogTown_ProfessorLab_EventScript_LeftBall_4
PacifidlogTown_ProfessorLab_EventScript_LeftBall_3:
# 59 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_LeftBall_Text_2
PacifidlogTown_ProfessorLab_EventScript_LeftBall_1:
# 61 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 62 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	releaseall
	end

PacifidlogTown_ProfessorLab_EventScript_LeftBall_2:
# 40 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	showmonpic SPECIES_PIPLUP, 10, 3
# 41 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_LeftBall_Text_0, MSGBOX_YESNO
# 42 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PacifidlogTown_ProfessorLab_EventScript_LeftBall_9
# 55 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	hidemonpic
	goto PacifidlogTown_ProfessorLab_EventScript_LeftBall_1

PacifidlogTown_ProfessorLab_EventScript_LeftBall_4:
# 39 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	goto_if_unset FLAG_MID_STARTER, PacifidlogTown_ProfessorLab_EventScript_LeftBall_6
	goto PacifidlogTown_ProfessorLab_EventScript_LeftBall_3

PacifidlogTown_ProfessorLab_EventScript_LeftBall_6:
# 39 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	goto_if_unset FLAG_RIGHT_STARTER, PacifidlogTown_ProfessorLab_EventScript_LeftBall_2
	goto PacifidlogTown_ProfessorLab_EventScript_LeftBall_3

PacifidlogTown_ProfessorLab_EventScript_LeftBall_9:
# 43 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 44 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_LeftBall_Text_1
# 45 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	givemon SPECIES_PIPLUP, 5
# 46 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	removeobject 4
# 47 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setflag FLAG_LEFT_STARTER
# 48 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 49 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 50 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setvar VAR_PACIFIDLOG_TOWN_STATE, 2
# 51 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitfanfare
# 52 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call NicknamePartyMon
	goto PacifidlogTown_ProfessorLab_EventScript_LeftBall_1


PacifidlogTown_ProfessorLab_EventScript_MiddleBall::
# 67 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lockall
# 68 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	goto_if_unset FLAG_LEFT_STARTER, PacifidlogTown_ProfessorLab_EventScript_MiddleBall_4
PacifidlogTown_ProfessorLab_EventScript_MiddleBall_3:
# 88 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_LeftBall_Text_2
PacifidlogTown_ProfessorLab_EventScript_MiddleBall_1:
# 90 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 91 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	releaseall
	end

PacifidlogTown_ProfessorLab_EventScript_MiddleBall_2:
# 69 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 70 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_MiddleBall_Text_0, MSGBOX_YESNO
# 71 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PacifidlogTown_ProfessorLab_EventScript_MiddleBall_9
# 84 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	hidemonpic
	goto PacifidlogTown_ProfessorLab_EventScript_MiddleBall_1

PacifidlogTown_ProfessorLab_EventScript_MiddleBall_4:
# 68 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	goto_if_unset FLAG_MID_STARTER, PacifidlogTown_ProfessorLab_EventScript_MiddleBall_6
	goto PacifidlogTown_ProfessorLab_EventScript_MiddleBall_3

PacifidlogTown_ProfessorLab_EventScript_MiddleBall_6:
# 68 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	goto_if_unset FLAG_RIGHT_STARTER, PacifidlogTown_ProfessorLab_EventScript_MiddleBall_2
	goto PacifidlogTown_ProfessorLab_EventScript_MiddleBall_3

PacifidlogTown_ProfessorLab_EventScript_MiddleBall_9:
# 72 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 73 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_MiddleBall_Text_1
# 74 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5
# 75 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	removeobject 5
# 76 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setflag FLAG_MID_STARTER
# 77 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 78 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 79 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setvar VAR_PACIFIDLOG_TOWN_STATE, 2
# 80 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitfanfare
# 81 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call NicknamePartyMon
	goto PacifidlogTown_ProfessorLab_EventScript_MiddleBall_1


PacifidlogTown_ProfessorLab_EventScript_RightBall::
# 96 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lockall
# 97 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	goto_if_unset FLAG_LEFT_STARTER, PacifidlogTown_ProfessorLab_EventScript_RightBall_4
PacifidlogTown_ProfessorLab_EventScript_RightBall_3:
# 117 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_LeftBall_Text_2
PacifidlogTown_ProfessorLab_EventScript_RightBall_1:
# 119 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 120 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	releaseall
	end

PacifidlogTown_ProfessorLab_EventScript_RightBall_2:
# 98 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	showmonpic SPECIES_POPPLIO, 10, 3
# 99 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_RightBall_Text_0, MSGBOX_YESNO
# 100 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PacifidlogTown_ProfessorLab_EventScript_RightBall_9
# 113 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	hidemonpic
	goto PacifidlogTown_ProfessorLab_EventScript_RightBall_1

PacifidlogTown_ProfessorLab_EventScript_RightBall_4:
# 97 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	goto_if_unset FLAG_MID_STARTER, PacifidlogTown_ProfessorLab_EventScript_RightBall_6
	goto PacifidlogTown_ProfessorLab_EventScript_RightBall_3

PacifidlogTown_ProfessorLab_EventScript_RightBall_6:
# 97 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	goto_if_unset FLAG_RIGHT_STARTER, PacifidlogTown_ProfessorLab_EventScript_RightBall_2
	goto PacifidlogTown_ProfessorLab_EventScript_RightBall_3

PacifidlogTown_ProfessorLab_EventScript_RightBall_9:
# 101 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 102 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_RightBall_Text_1
# 103 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	givemon SPECIES_POPPLIO, 5
# 104 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	removeobject 6
# 105 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setflag FLAG_RIGHT_STARTER
# 106 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 107 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 108 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setvar VAR_PACIFIDLOG_TOWN_STATE, 2
# 109 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitfanfare
# 110 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call NicknamePartyMon
	goto PacifidlogTown_ProfessorLab_EventScript_RightBall_1


PacifidlogTown_ProfessorLab_EventScript_Professor::
# 125 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lock
# 126 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	faceplayer
# 127 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_Professor_Text_0
# 128 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	release
	return


PacifidlogTown_ProfessorLab_EventScript_Aide1::
# 132 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lock
# 133 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	faceplayer
# 134 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_Aide1_Text_0
# 135 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	release
	return


PacifidlogTown_ProfessorLab_EventScript_Aide2::
# 139 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lock
# 140 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	faceplayer
# 141 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_Aide2_Text_0
# 142 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	release
	return


NicknamePartyMon::
# 146 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 147 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	hidemonpic
# 148 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 149 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 150 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


# 155 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
ProfessorIntro1:
# 156 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_down
# 157 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_right
# 157 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_right
# 158 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	face_up
	step_end

# 161 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
ProfessorIntro2:
# 162 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_left
# 162 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_left
# 163 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	emote_exclamation_mark
	step_end

# 166 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
ProfessorIntro3:
# 167 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
# 168 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_left
# 169 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
# 170 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_left
# 171 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
# 172 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	face_down
	step_end

# 175 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
PlayerIntro:
# 176 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
# 176 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
# 177 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_left
# 177 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_left
# 178 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
	step_end

PacifidlogTown_ProffessorLab_EventScript_EveryFrame_Text_0:
# 16 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Alkalinity and turbidity readings are\n"
	.string "normal...$"

PacifidlogTown_ProffessorLab_EventScript_EveryFrame_Text_1:
# 20 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Looks like there's some minor bleaching\n"
	.string "in the colony...$"

PacifidlogTown_ProffessorLab_EventScript_EveryFrame_Text_2:
# 24 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Oh, {PLAYER}! There you are!$"

PacifidlogTown_ProffessorLab_EventScript_EveryFrame_Text_3:
# 26 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Come here, I want to give you\n"
	.string "something!$"

PacifidlogTown_ProffessorLab_EventScript_EveryFrame_Text_4:
# 31 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "There are three Poké Balls here, each\n"
	.string "containing a different Pokémon. I want\l"
	.string "you to choose one!$"

PacifidlogTown_ProfessorLab_EventScript_LeftBall_Text_0:
# 41 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Do you want to choose Piplup?$"

PacifidlogTown_ProfessorLab_EventScript_LeftBall_Text_1:
# 44 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "You received Piplup!$"

PacifidlogTown_ProfessorLab_EventScript_LeftBall_Text_2:
# 59 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "You already have a starter Pokémon.$"

PacifidlogTown_ProfessorLab_EventScript_MiddleBall_Text_0:
# 70 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Do you want to choose Oshawott?$"

PacifidlogTown_ProfessorLab_EventScript_MiddleBall_Text_1:
# 73 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "You received Oshawott!$"

PacifidlogTown_ProfessorLab_EventScript_RightBall_Text_0:
# 99 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Do you want to choose Popplio?$"

PacifidlogTown_ProfessorLab_EventScript_RightBall_Text_1:
# 102 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "You received Popplio!$"

PacifidlogTown_ProfessorLab_EventScript_Professor_Text_0:
# 127 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Hello {PLAYER}! The Corsola seem to\n"
	.string "be doing well today!$"

PacifidlogTown_ProfessorLab_EventScript_Aide1_Text_0:
# 134 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "I know the work we do here is important\n"
	.string "to keep the Corsola healthy, but I wish\l"
	.string "the seawater didn't spray all over my\l"
	.string "papers...$"

PacifidlogTown_ProfessorLab_EventScript_Aide2_Text_0:
# 141 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "A long time ago, Mareanie didn't live in\n"
	.string "Hoenn. But now, they've been spread\l"
	.string "head to Pacifidlog, and pose a real\l"
	.string "threat to our Corsola colony.$"

NicknamePartyMon_Text_0:
# 146 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Would you like to give it a nickname?$"
