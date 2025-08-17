PacifidlogTown_House2_girl::
# 2 "data/maps/PacifidlogTown_House2/scripts.pory"
	lock
# 3 "data/maps/PacifidlogTown_House2/scripts.pory"
	faceplayer
# 4 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_girl_Text_0
# 5 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
	return


# 8 "data/maps/PacifidlogTown_House2/scripts.pory"

# 9 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_MapScripts::
# 10 "data/maps/PacifidlogTown_House2/scripts.pory"
	.byte 0
# 11 "data/maps/PacifidlogTown_House2/scripts.pory"

# 12 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_FanClubYoungerBrother::
# 13 "data/maps/PacifidlogTown_House2/scripts.pory"
	lock
# 14 "data/maps/PacifidlogTown_House2/scripts.pory"
	faceplayer
# 15 "data/maps/PacifidlogTown_House2/scripts.pory"
	dotimebasedevents
# 16 "data/maps/PacifidlogTown_House2/scripts.pory"
	call PacifidlogTown_House2_EventScript_UpdateFanClubTMFlag
# 17 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK, PacifidlogTown_House2_EventScript_ComeBackInXDays
# 18 "data/maps/PacifidlogTown_House2/scripts.pory"
	call_if_set FLAG_MET_FANCLUB_YOUNGER_BROTHER, PacifidlogTown_House2_EventScript_MonAssessment
# 19 "data/maps/PacifidlogTown_House2/scripts.pory"
	call_if_unset FLAG_MET_FANCLUB_YOUNGER_BROTHER, PacifidlogTown_House2_EventScript_FirstMonAssessment
# 20 "data/maps/PacifidlogTown_House2/scripts.pory"
	setflag FLAG_MET_FANCLUB_YOUNGER_BROTHER
# 21 "data/maps/PacifidlogTown_House2/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 22 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_ge VAR_RESULT, FRIENDSHIP_150_TO_199, PacifidlogTown_House2_EventScript_GiveReturn
# 23 "data/maps/PacifidlogTown_House2/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 24 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_ge VAR_RESULT, FRIENDSHIP_50_TO_99, PacifidlogTown_House2_EventScript_PutInEffort
# 25 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto PacifidlogTown_House2_EventScript_GiveFrustration
# 26 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 27 "data/maps/PacifidlogTown_House2/scripts.pory"

# 28 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_UpdateFanClubTMFlag::
# 29 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK, Common_EventScript_NopReturn
# 30 "data/maps/PacifidlogTown_House2/scripts.pory"
	specialvar VAR_RESULT, GetDaysUntilPacifidlogTMAvailable
# 31 "data/maps/PacifidlogTown_House2/scripts.pory"
	call_if_eq VAR_RESULT, 0, PacifidlogTown_House2_EventScript_ClearReceivedFanClubTM
# 32 "data/maps/PacifidlogTown_House2/scripts.pory"
	return
# 33 "data/maps/PacifidlogTown_House2/scripts.pory"

# 34 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_MonAssessment::
# 35 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_AhYourPokemon, MSGBOX_DEFAULT
# 36 "data/maps/PacifidlogTown_House2/scripts.pory"
	return
# 37 "data/maps/PacifidlogTown_House2/scripts.pory"

# 38 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_FirstMonAssessment::
# 39 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_ChairmansYoungerBrotherOnVacation, MSGBOX_DEFAULT
# 40 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_AhYourPokemon, MSGBOX_DEFAULT
# 41 "data/maps/PacifidlogTown_House2/scripts.pory"
	return
# 42 "data/maps/PacifidlogTown_House2/scripts.pory"

# 43 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_ClearReceivedFanClubTM::
# 44 "data/maps/PacifidlogTown_House2/scripts.pory"
	clearflag FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK
# 45 "data/maps/PacifidlogTown_House2/scripts.pory"
	return
# 46 "data/maps/PacifidlogTown_House2/scripts.pory"

# 47 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_GiveReturn::
# 48 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_AdoringPokemonTakeThis, MSGBOX_DEFAULT
# 49 "data/maps/PacifidlogTown_House2/scripts.pory"
	giveitem ITEM_TM_RETURN
# 50 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 51 "data/maps/PacifidlogTown_House2/scripts.pory"
	setflag FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK
# 52 "data/maps/PacifidlogTown_House2/scripts.pory"
	special SetPacifidlogTMReceivedDay
# 53 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_ExplainReturnFrustration, MSGBOX_DEFAULT
# 54 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
# 55 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 56 "data/maps/PacifidlogTown_House2/scripts.pory"

# 57 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_PutInEffort::
# 58 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_PutInSomeMoreEffort, MSGBOX_DEFAULT
# 59 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
# 60 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 61 "data/maps/PacifidlogTown_House2/scripts.pory"

# 62 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_GiveFrustration::
# 63 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_ViciousPokemonTakeThis, MSGBOX_DEFAULT
# 64 "data/maps/PacifidlogTown_House2/scripts.pory"
	giveitem ITEM_TM_FRUSTRATION
# 65 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 66 "data/maps/PacifidlogTown_House2/scripts.pory"
	setflag FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK
# 67 "data/maps/PacifidlogTown_House2/scripts.pory"
	special SetPacifidlogTMReceivedDay
# 68 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_ExplainReturnFrustration, MSGBOX_DEFAULT
# 69 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
# 70 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 71 "data/maps/PacifidlogTown_House2/scripts.pory"

# 72 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_ComeBackInXDays::
# 73 "data/maps/PacifidlogTown_House2/scripts.pory"
	specialvar VAR_RESULT, GetDaysUntilPacifidlogTMAvailable
# 74 "data/maps/PacifidlogTown_House2/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 75 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_GetGoodTMInXDays, MSGBOX_DEFAULT
# 76 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
# 77 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 78 "data/maps/PacifidlogTown_House2/scripts.pory"

# 79 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_HappyAzurill::
# 80 "data/maps/PacifidlogTown_House2/scripts.pory"
	lock
# 81 "data/maps/PacifidlogTown_House2/scripts.pory"
	faceplayer
# 82 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitse
# 83 "data/maps/PacifidlogTown_House2/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 84 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_Rurii, MSGBOX_DEFAULT
# 85 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitmoncry
# 86 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_VeryFriendlyWithTrainer, MSGBOX_DEFAULT
# 87 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
# 88 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 89 "data/maps/PacifidlogTown_House2/scripts.pory"

# 90 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_UnhappyAzurill::
# 91 "data/maps/PacifidlogTown_House2/scripts.pory"
	lock
# 92 "data/maps/PacifidlogTown_House2/scripts.pory"
	faceplayer
# 93 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitse
# 94 "data/maps/PacifidlogTown_House2/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_ENCOUNTER
# 95 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_Rururi, MSGBOX_DEFAULT
# 96 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitmoncry
# 97 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_DoesntLikeTrainerVeryMuch, MSGBOX_DEFAULT
# 98 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
# 99 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 100 "data/maps/PacifidlogTown_House2/scripts.pory"

# 101 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_ChairmansYoungerBrotherOnVacation:
# 102 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Er-hem!\p"
# 103 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "I am the POKéMON FAN CLUB's most\n"
# 104 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "important person, the CHAIRMAN's\l"
# 105 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "younger brother.\p"
# 106 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "I'm here enjoying my vacation with\n"
# 107 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "POKéMON, yes, indeed.$"
# 108 "data/maps/PacifidlogTown_House2/scripts.pory"

# 109 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_AhYourPokemon:
# 110 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Ah!\n"
# 111 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Your POKéMON…$"
# 112 "data/maps/PacifidlogTown_House2/scripts.pory"

# 113 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_AdoringPokemonTakeThis:
# 114 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "It clearly likes you very much.\p"
# 115 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "A POKéMON that adoring and adorable\n"
# 116 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "deserves a TM like this, no?$"
# 117 "data/maps/PacifidlogTown_House2/scripts.pory"

# 118 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_PutInSomeMoreEffort:
# 119 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Hmm…\n"
# 120 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "It's not bad, but it's also not good.\p"
# 121 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "You, as the TRAINER, need to put in\n"
# 122 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "some more effort.$"
# 123 "data/maps/PacifidlogTown_House2/scripts.pory"

# 124 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_ViciousPokemonTakeThis:
# 125 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "It has a vicious look to it.\p"
# 126 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "A frightening POKéMON like that\n"
# 127 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "deserves a TM like this.$"
# 128 "data/maps/PacifidlogTown_House2/scripts.pory"

# 129 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_ExplainReturnFrustration:
# 130 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "If a POKéMON likes you a lot, RETURN's\n"
# 131 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "power is enhanced.\p"
# 132 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "If it doesn't like you, FRUSTRATION's\n"
# 133 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "power goes up.$"
# 134 "data/maps/PacifidlogTown_House2/scripts.pory"

# 135 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_GetGoodTMInXDays:
# 136 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Oh, yes. In about {STR_VAR_1} or so days,\n"
# 137 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "I should be getting a good TM or two.\p"
# 138 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "You should come see me then.\n"
# 139 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "I'll give you a TM that's suitable for\l"
# 140 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "your POKéMON.$"
# 141 "data/maps/PacifidlogTown_House2/scripts.pory"

# 142 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_Rurii:
# 143 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "AZURILL: Rurii.$"
# 144 "data/maps/PacifidlogTown_House2/scripts.pory"

# 145 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_VeryFriendlyWithTrainer:
# 146 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "It appears to be very friendly with the\n"
# 147 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "TRAINER.$"
# 148 "data/maps/PacifidlogTown_House2/scripts.pory"

# 149 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_Rururi:
# 150 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "AZURILL: Rururi!$"
# 151 "data/maps/PacifidlogTown_House2/scripts.pory"

# 152 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_DoesntLikeTrainerVeryMuch:
# 153 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "It doesn't appear to like the TRAINER\n"
# 154 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "very much.$"

PacifidlogTown_House2_girl_Text_0:
# 4 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Can you believe some people used to\n"
	.string "think Hoenn had too much water before\l"
	.string "Kyogre woke up? I wonder what they\l"
	.string "think now?$"
