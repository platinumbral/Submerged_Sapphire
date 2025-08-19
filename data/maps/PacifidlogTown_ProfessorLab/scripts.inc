PacifidlogTown_ProfessorLab_MapScripts::
# 2 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OnTransition
# 3 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PacifidlogTown_ProfessorLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PacifidlogTown_ProfessorLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	map_script_2 VAR_TEMP_2, 0, PacifidlogTown_ProfessorLab_EventScript_EveryFrame
	.2byte 0


OnTransition::
# 9 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setvar VAR_TEMP_2, 0
	return


PacifidlogTown_ProfessorLab_EventScript_EveryFrame::
# 13 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	compare VAR_PACIFIDLOG_TOWN_STATE, 1
	goto_if_eq PacifidlogTown_ProfessorLab_EventScript_EveryFrame_1
	return

PacifidlogTown_ProfessorLab_EventScript_EveryFrame_1:
# 14 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lockall
# 15 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setvar VAR_TEMP_2, 1
# 16 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_EveryFrame_Text_0
# 17 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 18 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement 3, ProfessorIntro1
# 19 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmovement 0
# 20 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_EveryFrame_Text_1
# 21 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 22 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement 3, ProfessorIntro2
# 23 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmovement 0
# 24 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_EveryFrame_Text_2
# 25 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 26 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_EveryFrame_Text_3
# 27 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 28 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement 3, ProfessorIntro3
# 29 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerIntro
# 30 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmovement 0
# 31 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_EveryFrame_Text_4
# 32 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setvar VAR_PACIFIDLOG_TOWN_STATE, 2
# 33 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 34 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	releaseall
	return


PacifidlogTown_ProfessorLab_EventScript_LeftBall::
# 39 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lockall
# 40 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	goto_if_unset FLAG_LEFT_STARTER, PacifidlogTown_ProfessorLab_EventScript_LeftBall_4
PacifidlogTown_ProfessorLab_EventScript_LeftBall_3:
# 60 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_LeftBall_Text_2
PacifidlogTown_ProfessorLab_EventScript_LeftBall_1:
# 62 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 63 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	releaseall
	end

PacifidlogTown_ProfessorLab_EventScript_LeftBall_2:
# 41 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	showmonpic SPECIES_PIPLUP, 10, 3
# 42 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_LeftBall_Text_0, MSGBOX_YESNO
# 43 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PacifidlogTown_ProfessorLab_EventScript_LeftBall_9
# 56 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	hidemonpic
	goto PacifidlogTown_ProfessorLab_EventScript_LeftBall_1

PacifidlogTown_ProfessorLab_EventScript_LeftBall_4:
# 40 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	goto_if_unset FLAG_MID_STARTER, PacifidlogTown_ProfessorLab_EventScript_LeftBall_6
	goto PacifidlogTown_ProfessorLab_EventScript_LeftBall_3

PacifidlogTown_ProfessorLab_EventScript_LeftBall_6:
# 40 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	goto_if_unset FLAG_RIGHT_STARTER, PacifidlogTown_ProfessorLab_EventScript_LeftBall_2
	goto PacifidlogTown_ProfessorLab_EventScript_LeftBall_3

PacifidlogTown_ProfessorLab_EventScript_LeftBall_9:
# 44 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 45 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_LeftBall_Text_1
# 46 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	givemon SPECIES_PIPLUP, 5
# 47 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	removeobject 4
# 48 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setflag FLAG_LEFT_STARTER
# 49 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 50 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 51 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setvar VAR_PACIFIDLOG_TOWN_STATE, 3
# 52 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitfanfare
# 53 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call NicknamePartyMon
	goto PacifidlogTown_ProfessorLab_EventScript_LeftBall_1


PacifidlogTown_ProfessorLab_EventScript_MiddleBall::
# 68 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lockall
# 69 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	goto_if_unset FLAG_LEFT_STARTER, PacifidlogTown_ProfessorLab_EventScript_MiddleBall_4
PacifidlogTown_ProfessorLab_EventScript_MiddleBall_3:
# 89 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_LeftBall_Text_2
PacifidlogTown_ProfessorLab_EventScript_MiddleBall_1:
# 91 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 92 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	releaseall
	end

PacifidlogTown_ProfessorLab_EventScript_MiddleBall_2:
# 70 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 71 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_MiddleBall_Text_0, MSGBOX_YESNO
# 72 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PacifidlogTown_ProfessorLab_EventScript_MiddleBall_9
# 85 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	hidemonpic
	goto PacifidlogTown_ProfessorLab_EventScript_MiddleBall_1

PacifidlogTown_ProfessorLab_EventScript_MiddleBall_4:
# 69 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	goto_if_unset FLAG_MID_STARTER, PacifidlogTown_ProfessorLab_EventScript_MiddleBall_6
	goto PacifidlogTown_ProfessorLab_EventScript_MiddleBall_3

PacifidlogTown_ProfessorLab_EventScript_MiddleBall_6:
# 69 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	goto_if_unset FLAG_RIGHT_STARTER, PacifidlogTown_ProfessorLab_EventScript_MiddleBall_2
	goto PacifidlogTown_ProfessorLab_EventScript_MiddleBall_3

PacifidlogTown_ProfessorLab_EventScript_MiddleBall_9:
# 73 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 74 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_MiddleBall_Text_1
# 75 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5
# 76 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	removeobject 5
# 77 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setflag FLAG_MID_STARTER
# 78 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 79 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 80 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setvar VAR_PACIFIDLOG_TOWN_STATE, 3
# 81 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitfanfare
# 82 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call NicknamePartyMon
	goto PacifidlogTown_ProfessorLab_EventScript_MiddleBall_1


PacifidlogTown_ProfessorLab_EventScript_RightBall::
# 97 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lockall
# 98 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	goto_if_unset FLAG_LEFT_STARTER, PacifidlogTown_ProfessorLab_EventScript_RightBall_4
PacifidlogTown_ProfessorLab_EventScript_RightBall_3:
# 118 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_LeftBall_Text_2
PacifidlogTown_ProfessorLab_EventScript_RightBall_1:
# 120 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 121 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	releaseall
	end

PacifidlogTown_ProfessorLab_EventScript_RightBall_2:
# 99 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	showmonpic SPECIES_POPPLIO, 10, 3
# 100 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_RightBall_Text_0, MSGBOX_YESNO
# 101 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PacifidlogTown_ProfessorLab_EventScript_RightBall_9
# 114 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	hidemonpic
	goto PacifidlogTown_ProfessorLab_EventScript_RightBall_1

PacifidlogTown_ProfessorLab_EventScript_RightBall_4:
# 98 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	goto_if_unset FLAG_MID_STARTER, PacifidlogTown_ProfessorLab_EventScript_RightBall_6
	goto PacifidlogTown_ProfessorLab_EventScript_RightBall_3

PacifidlogTown_ProfessorLab_EventScript_RightBall_6:
# 98 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	goto_if_unset FLAG_RIGHT_STARTER, PacifidlogTown_ProfessorLab_EventScript_RightBall_2
	goto PacifidlogTown_ProfessorLab_EventScript_RightBall_3

PacifidlogTown_ProfessorLab_EventScript_RightBall_9:
# 102 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 103 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_RightBall_Text_1
# 104 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	givemon SPECIES_POPPLIO, 5
# 105 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	removeobject 6
# 106 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setflag FLAG_RIGHT_STARTER
# 107 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 108 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 109 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setvar VAR_PACIFIDLOG_TOWN_STATE, 3
# 110 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitfanfare
# 111 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call NicknamePartyMon
	goto PacifidlogTown_ProfessorLab_EventScript_RightBall_1


PacifidlogTown_ProfessorLab_EventScript_Professor::
# 126 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lock
# 127 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	faceplayer
# 128 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_Professor_Text_0
# 129 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	release
	return


PacifidlogTown_ProfessorLab_EventScript_Aide1::
# 133 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lock
# 134 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	faceplayer
# 135 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_Aide1_Text_0
# 136 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	release
	return


PacifidlogTown_ProfessorLab_EventScript_Aide2::
# 140 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lock
# 141 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	faceplayer
# 142 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_Aide2_Text_0
# 143 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	release
	return


NicknamePartyMon::
# 147 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 148 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	hidemonpic
# 149 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 150 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 151 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


Pacifidlogtown_ProfessorLab_EventScript_DontLeave::
# 156 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lockall
# 157 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox Pacifidlogtown_ProfessorLab_EventScript_DontLeave_Text_0
# 158 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 159 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Playerup
# 160 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmovement 0
# 161 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	releaseall
	return


PacifidlogTown_ProfessorLab_EventScript_TriggerRival_4::
# 165 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call PacifidlogTown_ProfessorLab_EventScript_RivalIntro
# 166 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 167 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_TriggerRival_4_Text_0
# 168 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 169 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement 7, rivalmove
# 170 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, uptwo
# 171 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmovement 7
# 172 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection
# 173 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	releaseall
	return


PacifidlogTown_ProfessorLab_EventScript_TriggerRival_5::
# 177 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call PacifidlogTown_ProfessorLab_EventScript_RivalIntro
# 178 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, facedown
# 179 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_TriggerRival_4_Text_0
# 180 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 181 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement 7, rivalmove
# 182 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, leftup
# 183 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmovement 7
# 184 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection
# 185 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	releaseall
	return


PacifidlogTown_ProfessorLab_EventScript_TriggerRival_6::
# 189 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call PacifidlogTown_ProfessorLab_EventScript_RivalIntro
# 190 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, facedown
# 191 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_TriggerRival_4_Text_0
# 192 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 193 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement 7, rivalmove
# 194 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, waitleft
# 195 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmovement 7
# 196 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection
# 197 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	releaseall
	return


PacifidlogTown_ProfessorLab_EventScript_TriggerRival_7::
# 201 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call PacifidlogTown_ProfessorLab_EventScript_RivalIntro
# 202 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceleft
# 203 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_TriggerRival_4_Text_0
# 204 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 205 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement 7, rivalmove
# 206 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, left3up
# 207 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmovement 7
# 208 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection
# 209 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	releaseall
	return


PacifidlogTown_ProfessorLab_EventScript_RivalIntro::
# 212 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lockall
# 213 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	addobject 7
# 214 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_RivalIntro_Text_0
# 215 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 216 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement 7, facetheplayer
	return


PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection::
# 221 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lockall
# 222 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection_Text_0
# 223 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 224 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection_Text_1
# 225 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection_2
# 238 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection_3
# 250 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement 7, toleftmon
# 251 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmovement 0
# 252 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection_Text_5
# 253 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	removeobject 4
# 254 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setflag FLAG_LEFT_STARTER
# 255 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 256 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement 7, right2
# 257 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmovement 0
# 258 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement 7, facetheplayer
# 259 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmovement 0
# 260 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection_Text_3
PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection_1:
# 262 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 263 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection_Text_6
# 264 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setvar VAR_PACIFIDLOG_TOWN_STATE, 4
	return

PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection_2:
# 226 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement 7, tomiddlemon
# 227 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmovement 0
# 228 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection_Text_2
# 229 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	removeobject 5
# 230 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setflag FLAG_MID_STARTER
# 231 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 232 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement 7, right1
# 233 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmovement 0
# 234 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement 7, facetheplayer
# 235 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmovement 0
# 236 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection_Text_3
	goto PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection_1

PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection_3:
# 239 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement 7, torightmon
# 240 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmovement 0
# 241 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection_Text_4
# 242 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	removeobject 6
# 243 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setflag FLAG_RIGHT_STARTER
# 244 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 245 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement 7, facetheplayer
# 246 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmovement 0
# 247 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection_Text_3
	goto PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection_1


# 268 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
ProfessorIntro1:
# 269 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_down
# 270 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_right
# 270 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_right
# 271 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	face_up
	step_end

# 274 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
ProfessorIntro2:
# 275 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_left
# 275 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_left
# 276 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	emote_exclamation_mark
	step_end

# 279 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
ProfessorIntro3:
# 280 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
# 281 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_left
# 282 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
# 283 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_left
# 284 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
# 285 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	face_down
	step_end

# 288 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
PlayerIntro:
# 289 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
# 289 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
# 290 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_left
# 290 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_left
# 291 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
	step_end

# 294 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
Playerup:
# 295 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
	step_end

# 298 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
facetheplayer:
# 299 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	face_player
	step_end

# 302 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
faceright:
# 303 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	face_right
	step_end

# 306 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
facedown:
# 307 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	face_down
	step_end

# 310 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
faceleft:
# 311 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	face_left
	step_end

# 314 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
rivalmove:
# 315 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
# 315 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
# 315 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
# 316 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_left
# 316 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_left
# 317 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	face_up
	step_end

# 320 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
uptwo:
# 321 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
# 321 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
	step_end

# 324 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
leftup:
# 325 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_left
# 326 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
	step_end

# 329 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
waitleft:
# 330 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	delay_1
# 331 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_left
# 331 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_left
# 332 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
	step_end

# 334 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
left3up:
# 335 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_left
# 335 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_left
# 335 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_left
# 336 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
# 336 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
	step_end

# 339 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
toleftmon:
# 340 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_left
# 341 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
	step_end

# 344 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
tomiddlemon:
# 345 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
	step_end

# 348 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
torightmon:
# 349 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_right
# 350 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
	step_end

# 353 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
right2:
# 354 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_right
# 354 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_right
	step_end

# 357 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
right1:
# 358 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_right
	step_end

PacifidlogTown_ProfessorLab_EventScript_EveryFrame_Text_0:
# 16 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Alkalinity and turbidity readings are\n"
	.string "normal...$"

PacifidlogTown_ProfessorLab_EventScript_EveryFrame_Text_1:
# 20 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Looks like there's some minor bleaching\n"
	.string "in the colony...$"

PacifidlogTown_ProfessorLab_EventScript_EveryFrame_Text_2:
# 24 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Oh, {PLAYER}! There you are!$"

PacifidlogTown_ProfessorLab_EventScript_EveryFrame_Text_3:
# 26 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Come here, I want to give you\n"
	.string "something!$"

PacifidlogTown_ProfessorLab_EventScript_EveryFrame_Text_4:
# 31 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "There are three Poké Balls here, each\n"
	.string "containing a different Pokémon. I want\l"
	.string "you to choose one!$"

PacifidlogTown_ProfessorLab_EventScript_LeftBall_Text_0:
# 42 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Do you want to choose Piplup?$"

PacifidlogTown_ProfessorLab_EventScript_LeftBall_Text_1:
# 45 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "You received Piplup!$"

PacifidlogTown_ProfessorLab_EventScript_LeftBall_Text_2:
# 60 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "You already have a starter Pokémon.$"

PacifidlogTown_ProfessorLab_EventScript_MiddleBall_Text_0:
# 71 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Do you want to choose Oshawott?$"

PacifidlogTown_ProfessorLab_EventScript_MiddleBall_Text_1:
# 74 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "You received Oshawott!$"

PacifidlogTown_ProfessorLab_EventScript_RightBall_Text_0:
# 100 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Do you want to choose Popplio?$"

PacifidlogTown_ProfessorLab_EventScript_RightBall_Text_1:
# 103 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "You received Popplio!$"

PacifidlogTown_ProfessorLab_EventScript_Professor_Text_0:
# 128 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Hello {PLAYER}! The Corsola seem to\n"
	.string "be doing well today!$"

PacifidlogTown_ProfessorLab_EventScript_Aide1_Text_0:
# 135 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "I know the work we do here is important\n"
	.string "to keep the Corsola healthy, but I wish\l"
	.string "the seawater didn't spray all over my\l"
	.string "papers...$"

PacifidlogTown_ProfessorLab_EventScript_Aide2_Text_0:
# 142 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "A long time ago, Mareanie didn't live in\n"
	.string "Hoenn. But now, they've been spread\l"
	.string "head to Pacifidlog, and pose a real\l"
	.string "threat to our Corsola colony.$"

NicknamePartyMon_Text_0:
# 147 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Would you like to give it a nickname?$"

Pacifidlogtown_ProfessorLab_EventScript_DontLeave_Text_0:
# 157 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "You can't leave yet, {PLAYER}! You\n"
	.string "need to choose a starter Pokémon\l"
	.string "first!$"

PacifidlogTown_ProfessorLab_EventScript_TriggerRival_4_Text_0:
# 167 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Oh, {PLAYER}, looks like you beat me\n"
	.string "here!$"

PacifidlogTown_ProfessorLab_EventScript_RivalIntro_Text_0:
# 214 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Ah, sorry I'm late Professor!$"

PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection_Text_0:
# 222 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Oh, RIVAL, you can choose a starter\n"
	.string "Pokémon too!$"

PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection_Text_1:
# 224 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Hmm... I think I'll take...$"

PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection_Text_2:
# 228 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Oshawott!$"

PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection_Text_3:
# 236 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Well {PLAYER}, we've both got a\n"
	.string "Pokémon now! You know what that means,\l"
	.string "right?$"

PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection_Text_4:
# 241 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Popplio!$"

PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection_Text_5:
# 252 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Piplup!$"

PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection_Text_6:
# 263 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "This is where I'd put my rival battle, if\n"
	.string "I had one.$"
