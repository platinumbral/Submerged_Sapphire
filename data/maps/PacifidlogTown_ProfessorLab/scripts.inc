PacifidlogTown_ProfessorLab_MapScripts::
# 2 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_ProfessorLab_OnTransition
# 3 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PacifidlogTown_ProfessorLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PacifidlogTown_ProfessorLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	map_script_2 VAR_TEMP_2, 0, PacifidlogTown_ProfessorLab_EventScript_EveryFrame
# 5 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	map_script_2 VAR_LOST_BATTLE, 1, PacifidlogTown_ProfessorLab_EventScript_RivalBattleLoss
	.2byte 0


PacifidlogTown_ProfessorLab_OnTransition::
# 10 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setvar VAR_TEMP_2, 0
	return


PacifidlogTown_ProfessorLab_EventScript_EveryFrame::
# 14 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	compare VAR_PACIFIDLOG_TOWN_STATE, 1
	goto_if_eq PacifidlogTown_ProfessorLab_EventScript_EveryFrame_1
	return

PacifidlogTown_ProfessorLab_EventScript_EveryFrame_1:
# 15 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lockall
# 16 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setvar VAR_TEMP_2, 1
# 17 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_EveryFrame_Text_0
# 18 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 19 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement 3, ProfessorIntro1
# 20 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmovement 0
# 21 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_EveryFrame_Text_1
# 22 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 23 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement 3, ProfessorIntro2
# 24 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmovement 0
# 25 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_EveryFrame_Text_2
# 26 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 27 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_EveryFrame_Text_3
# 28 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 29 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement 3, ProfessorIntro3
# 30 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerIntro
# 31 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmovement 0
# 32 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_EveryFrame_Text_4
# 33 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setvar VAR_PACIFIDLOG_TOWN_STATE, 2
# 34 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 35 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	releaseall
	return


PacifidlogTown_ProfessorLab_EventScript_LeftBall::
# 40 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lockall
# 41 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	goto_if_unset FLAG_LEFT_STARTER, PacifidlogTown_ProfessorLab_EventScript_LeftBall_4
PacifidlogTown_ProfessorLab_EventScript_LeftBall_3:
# 61 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_LeftBall_Text_2
PacifidlogTown_ProfessorLab_EventScript_LeftBall_1:
# 63 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 64 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	releaseall
	end

PacifidlogTown_ProfessorLab_EventScript_LeftBall_2:
# 42 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	showmonpic SPECIES_PIPLUP, 10, 3
# 43 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_LeftBall_Text_0, MSGBOX_YESNO
# 44 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PacifidlogTown_ProfessorLab_EventScript_LeftBall_9
# 57 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	hidemonpic
	goto PacifidlogTown_ProfessorLab_EventScript_LeftBall_1

PacifidlogTown_ProfessorLab_EventScript_LeftBall_4:
# 41 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	goto_if_unset FLAG_MID_STARTER, PacifidlogTown_ProfessorLab_EventScript_LeftBall_6
	goto PacifidlogTown_ProfessorLab_EventScript_LeftBall_3

PacifidlogTown_ProfessorLab_EventScript_LeftBall_6:
# 41 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	goto_if_unset FLAG_RIGHT_STARTER, PacifidlogTown_ProfessorLab_EventScript_LeftBall_2
	goto PacifidlogTown_ProfessorLab_EventScript_LeftBall_3

PacifidlogTown_ProfessorLab_EventScript_LeftBall_9:
# 45 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 46 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_LeftBall_Text_1
# 47 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	givemon SPECIES_PIPLUP, 5
# 48 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	removeobject 4
# 49 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setflag FLAG_LEFT_STARTER
# 50 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 51 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 52 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setvar VAR_PACIFIDLOG_TOWN_STATE, 3
# 53 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitfanfare
# 54 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call NicknamePartyMon
	goto PacifidlogTown_ProfessorLab_EventScript_LeftBall_1


PacifidlogTown_ProfessorLab_EventScript_MiddleBall::
# 69 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lockall
# 70 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	goto_if_unset FLAG_LEFT_STARTER, PacifidlogTown_ProfessorLab_EventScript_MiddleBall_4
PacifidlogTown_ProfessorLab_EventScript_MiddleBall_3:
# 90 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_LeftBall_Text_2
PacifidlogTown_ProfessorLab_EventScript_MiddleBall_1:
# 92 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 93 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	releaseall
	end

PacifidlogTown_ProfessorLab_EventScript_MiddleBall_2:
# 71 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 72 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_MiddleBall_Text_0, MSGBOX_YESNO
# 73 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PacifidlogTown_ProfessorLab_EventScript_MiddleBall_9
# 86 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	hidemonpic
	goto PacifidlogTown_ProfessorLab_EventScript_MiddleBall_1

PacifidlogTown_ProfessorLab_EventScript_MiddleBall_4:
# 70 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	goto_if_unset FLAG_MID_STARTER, PacifidlogTown_ProfessorLab_EventScript_MiddleBall_6
	goto PacifidlogTown_ProfessorLab_EventScript_MiddleBall_3

PacifidlogTown_ProfessorLab_EventScript_MiddleBall_6:
# 70 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	goto_if_unset FLAG_RIGHT_STARTER, PacifidlogTown_ProfessorLab_EventScript_MiddleBall_2
	goto PacifidlogTown_ProfessorLab_EventScript_MiddleBall_3

PacifidlogTown_ProfessorLab_EventScript_MiddleBall_9:
# 74 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 75 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_MiddleBall_Text_1
# 76 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5
# 77 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	removeobject 5
# 78 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setflag FLAG_MID_STARTER
# 79 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 80 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 81 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setvar VAR_PACIFIDLOG_TOWN_STATE, 3
# 82 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitfanfare
# 83 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call NicknamePartyMon
	goto PacifidlogTown_ProfessorLab_EventScript_MiddleBall_1


PacifidlogTown_ProfessorLab_EventScript_RightBall::
# 98 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lockall
# 99 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	goto_if_unset FLAG_LEFT_STARTER, PacifidlogTown_ProfessorLab_EventScript_RightBall_4
PacifidlogTown_ProfessorLab_EventScript_RightBall_3:
# 119 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_LeftBall_Text_2
PacifidlogTown_ProfessorLab_EventScript_RightBall_1:
# 121 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 122 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	releaseall
	end

PacifidlogTown_ProfessorLab_EventScript_RightBall_2:
# 100 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	showmonpic SPECIES_POPPLIO, 10, 3
# 101 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_RightBall_Text_0, MSGBOX_YESNO
# 102 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PacifidlogTown_ProfessorLab_EventScript_RightBall_9
# 115 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	hidemonpic
	goto PacifidlogTown_ProfessorLab_EventScript_RightBall_1

PacifidlogTown_ProfessorLab_EventScript_RightBall_4:
# 99 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	goto_if_unset FLAG_MID_STARTER, PacifidlogTown_ProfessorLab_EventScript_RightBall_6
	goto PacifidlogTown_ProfessorLab_EventScript_RightBall_3

PacifidlogTown_ProfessorLab_EventScript_RightBall_6:
# 99 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	goto_if_unset FLAG_RIGHT_STARTER, PacifidlogTown_ProfessorLab_EventScript_RightBall_2
	goto PacifidlogTown_ProfessorLab_EventScript_RightBall_3

PacifidlogTown_ProfessorLab_EventScript_RightBall_9:
# 103 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 104 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_RightBall_Text_1
# 105 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	givemon SPECIES_POPPLIO, 5
# 106 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	removeobject 6
# 107 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setflag FLAG_RIGHT_STARTER
# 108 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 109 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 110 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setvar VAR_PACIFIDLOG_TOWN_STATE, 3
# 111 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitfanfare
# 112 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call NicknamePartyMon
	goto PacifidlogTown_ProfessorLab_EventScript_RightBall_1


PacifidlogTown_ProfessorLab_EventScript_Professor::
# 127 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lock
# 128 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	faceplayer
# 129 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_Professor_Text_0
# 130 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	release
	return


PacifidlogTown_ProfessorLab_EventScript_Aide1::
# 134 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lock
# 135 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	faceplayer
# 136 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_Aide1_Text_0
# 137 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	release
	return


PacifidlogTown_ProfessorLab_EventScript_Aide2::
# 141 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lock
# 142 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	faceplayer
# 143 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_Aide2_Text_0
# 144 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	release
	return


NicknamePartyMon::
# 148 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 149 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	hidemonpic
# 150 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 151 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 152 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


Pacifidlogtown_ProfessorLab_EventScript_DontLeave::
# 157 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lockall
# 158 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox Pacifidlogtown_ProfessorLab_EventScript_DontLeave_Text_0
# 159 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 160 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Playerup
# 161 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmovement 0
# 162 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	releaseall
	return


PacifidlogTown_ProfessorLab_EventScript_TriggerRival_4::
# 166 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call PacifidlogTown_ProfessorLab_EventScript_RivalIntro
# 167 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceright
# 168 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_TriggerRival_4_Text_0
# 169 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 170 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement 7, rivalmove
# 171 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, uptwo
# 172 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmovement 7
# 173 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection
# 174 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	releaseall
	return


PacifidlogTown_ProfessorLab_EventScript_TriggerRival_5::
# 178 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call PacifidlogTown_ProfessorLab_EventScript_RivalIntro
# 179 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, facedown
# 180 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_TriggerRival_4_Text_0
# 181 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 182 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement 7, rivalmove
# 183 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, leftup
# 184 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmovement 7
# 185 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection
# 186 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	releaseall
	return


PacifidlogTown_ProfessorLab_EventScript_TriggerRival_6::
# 190 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call PacifidlogTown_ProfessorLab_EventScript_RivalIntro
# 191 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, facedown
# 192 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_TriggerRival_4_Text_0
# 193 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 194 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement 7, rivalmove
# 195 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, waitleft
# 196 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmovement 7
# 197 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection
# 198 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	releaseall
	return


PacifidlogTown_ProfessorLab_EventScript_TriggerRival_7::
# 202 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call PacifidlogTown_ProfessorLab_EventScript_RivalIntro
# 203 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, faceleft
# 204 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_TriggerRival_4_Text_0
# 205 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 206 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement 7, rivalmove
# 207 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, left3up
# 208 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmovement 7
# 209 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	call PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection
# 210 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	releaseall
	return


PacifidlogTown_ProfessorLab_EventScript_RivalIntro::
# 213 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lockall
# 214 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	addobject 7
# 215 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_RivalIntro_Text_0
# 216 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 217 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement 7, facetheplayer
	return


PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection::
# 222 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	lockall
# 223 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection_Text_0
# 224 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 225 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection_Text_1
# 226 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection_1
# 240 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection_2
# 253 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement 7, toleftmon
# 254 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmovement 0
# 255 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection_Text_4
# 256 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	removeobject 4
# 257 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setflag FLAG_LEFT_STARTER
# 258 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 259 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement 7, right2
# 260 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmovement 0
# 261 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement 7, facetheplayer
# 262 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmovement 0
# 263 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setflag FLAG_TEMP_CONTINUE_ON_LOSS
# 264 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	trainerbattle_single TRAINER_LAB_RIVAL_POPPLIO, LabRival_Intro, LabRival_Outro, PacifidlogTown_ProfessorLab_Eventscript_RivalBattleWon
	return

PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection_1:
# 227 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement 7, tomiddlemon
# 228 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmovement 0
# 229 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection_Text_2
# 230 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	removeobject 5
# 231 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setflag FLAG_MID_STARTER
# 232 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 233 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement 7, right1
# 234 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmovement 0
# 235 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement 7, facetheplayer
# 236 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmovement 0
# 237 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setflag FLAG_TEMP_CONTINUE_ON_LOSS
# 238 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	trainerbattle_single TRAINER_LAB_RIVAL_PIPLUP, LabRival_Intro, LabRival_Outro, PacifidlogTown_ProfessorLab_Eventscript_RivalBattleWon
	return

PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection_2:
# 241 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement 7, torightmon
# 242 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmovement 0
# 243 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection_Text_3
# 244 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	removeobject 6
# 245 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setflag FLAG_RIGHT_STARTER
# 246 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 247 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	applymovement 7, facetheplayer
# 248 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmovement 0
# 249 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setflag FLAG_TEMP_CONTINUE_ON_LOSS
# 250 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	trainerbattle_single TRAINER_LAB_RIVAL_OSHAWOTT, LabRival_Intro, LabRival_Outro, PacifidlogTown_ProfessorLab_Eventscript_RivalBattleWon
	return


# 270 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
ProfessorIntro1:
# 271 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_down
# 272 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_right
# 272 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_right
# 273 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	face_up
	step_end

# 276 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
ProfessorIntro2:
# 277 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_left
# 277 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_left
# 278 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	emote_exclamation_mark
	step_end

# 281 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
ProfessorIntro3:
# 282 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
# 283 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_left
# 284 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
# 285 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_left
# 286 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
# 287 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	face_down
	step_end

# 290 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
PlayerIntro:
# 291 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
# 291 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
# 292 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_left
# 292 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_left
# 293 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
	step_end

# 296 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
Playerup:
# 297 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
	step_end

# 300 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
facetheplayer:
# 301 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	face_player
	step_end

# 304 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
faceright:
# 305 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	face_right
	step_end

# 308 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
facedown:
# 309 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	face_down
	step_end

# 312 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
faceleft:
# 313 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	face_left
	step_end

# 316 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
rivalmove:
# 317 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
# 317 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
# 317 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
# 318 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_left
# 318 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_left
# 319 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	face_up
	step_end

# 322 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
uptwo:
# 323 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
# 323 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
	step_end

# 326 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
leftup:
# 327 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_left
# 328 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
	step_end

# 331 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
waitleft:
# 332 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	delay_16
# 333 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_left
# 333 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_left
# 334 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
	step_end

# 336 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
left3up:
# 337 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_left
# 337 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_left
# 337 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_left
# 338 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
# 338 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
	step_end

# 341 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
toleftmon:
# 342 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_left
# 343 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
	step_end

# 346 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
tomiddlemon:
# 347 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
	step_end

# 350 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
torightmon:
# 351 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_right
# 352 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_up
	step_end

# 355 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
right2:
# 356 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_right
# 356 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_right
	step_end

# 359 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
right1:
# 360 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	walk_right
	step_end

PacifidlogTown_ProfessorLab_Eventscript_RivalBattleWon::
# 364 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_Eventscript_RivalBattleWon_Text_0
# 365 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	clearflag FLAG_TEMP_CONTINUE_ON_LOSS
# 366 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setvar VAR_PACIFIDLOG_TOWN_STATE, 4
# 367 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	releaseall
	return


PacifidlogTown_ProfessorLab_EventScript_RivalBattleLoss::
# 370 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	msgbox PacifidlogTown_ProfessorLab_EventScript_RivalBattleLoss_Text_0
# 371 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	waitmessage
# 372 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setvar VAR_LOST_BATTLE, 0
# 373 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	clearflag FLAG_TEMP_CONTINUE_ON_LOSS
# 374 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	setvar VAR_PACIFIDLOG_TOWN_STATE, 4
# 375 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	releaseall
	return


PacifidlogTown_ProfessorLab_EventScript_EveryFrame_Text_0:
# 17 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Alkalinity and turbidity readings are\n"
	.string "normal...$"

PacifidlogTown_ProfessorLab_EventScript_EveryFrame_Text_1:
# 21 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Looks like there's some minor bleaching\n"
	.string "in the colony...$"

PacifidlogTown_ProfessorLab_EventScript_EveryFrame_Text_2:
# 25 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Oh, {PLAYER}! There you are!$"

PacifidlogTown_ProfessorLab_EventScript_EveryFrame_Text_3:
# 27 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Come here, I want to give you\n"
	.string "something!$"

PacifidlogTown_ProfessorLab_EventScript_EveryFrame_Text_4:
# 32 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "There are three Poké Balls here, each\n"
	.string "containing a different Pokémon. I want\l"
	.string "you to choose one!$"

PacifidlogTown_ProfessorLab_EventScript_LeftBall_Text_0:
# 43 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Do you want to choose Piplup?$"

PacifidlogTown_ProfessorLab_EventScript_LeftBall_Text_1:
# 46 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "You received Piplup!$"

PacifidlogTown_ProfessorLab_EventScript_LeftBall_Text_2:
# 61 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "You already have a starter Pokémon.$"

PacifidlogTown_ProfessorLab_EventScript_MiddleBall_Text_0:
# 72 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Do you want to choose Oshawott?$"

PacifidlogTown_ProfessorLab_EventScript_MiddleBall_Text_1:
# 75 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "You received Oshawott!$"

PacifidlogTown_ProfessorLab_EventScript_RightBall_Text_0:
# 101 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Do you want to choose Popplio?$"

PacifidlogTown_ProfessorLab_EventScript_RightBall_Text_1:
# 104 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "You received Popplio!$"

PacifidlogTown_ProfessorLab_EventScript_Professor_Text_0:
# 129 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Hello {PLAYER}! The Corsola seem to\n"
	.string "be doing well today!$"

PacifidlogTown_ProfessorLab_EventScript_Aide1_Text_0:
# 136 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "I know the work we do here is important\n"
	.string "to keep the Corsola healthy, but I wish\l"
	.string "the seawater didn't spray all over my\l"
	.string "papers...$"

PacifidlogTown_ProfessorLab_EventScript_Aide2_Text_0:
# 143 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "A long time ago, Mareanie didn't live in\n"
	.string "Hoenn. But now, they've been spread\l"
	.string "head to Pacifidlog, and pose a real\l"
	.string "threat to our Corsola colony.$"

NicknamePartyMon_Text_0:
# 148 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Would you like to give it a nickname?$"

Pacifidlogtown_ProfessorLab_EventScript_DontLeave_Text_0:
# 158 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "You can't leave yet, {PLAYER}! You\n"
	.string "need to choose a starter Pokémon\l"
	.string "first!$"

PacifidlogTown_ProfessorLab_EventScript_TriggerRival_4_Text_0:
# 168 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Oh, {PLAYER}, looks like you beat me\n"
	.string "here!$"

PacifidlogTown_ProfessorLab_EventScript_RivalIntro_Text_0:
# 215 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Ah, sorry I'm late Professor!$"

PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection_Text_0:
# 223 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Oh, RIVAL, you can choose a starter\n"
	.string "Pokémon too!$"

PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection_Text_1:
# 225 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Hmm... I think I'll take...$"

PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection_Text_2:
# 229 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Oshawott!$"

PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection_Text_3:
# 243 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Popplio!$"

PacifidlogTown_ProfessorLab_EventScript_RivalStarterSelection_Text_4:
# 255 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Piplup!$"

PacifidlogTown_ProfessorLab_Eventscript_RivalBattleWon_Text_0:
# 364 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "I'll get you next time!$"

PacifidlogTown_ProfessorLab_EventScript_RivalBattleLoss_Text_0:
# 370 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Yes, I choose the better Pokémon!$"

LabRival_Intro::
# 377 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Well {PLAYER}, we've both got a Pokémon now! You know what that means, right?$"

LabRival_Outro::
# 382 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "Wow, you're really good! I need to train harder!$"

LabRival_PostBattle::
# 386 "data/maps/PacifidlogTown_ProfessorLab/scripts.pory"
	.string "You'll have no trouble making it to Ever Grande City!$"
