PacifidlogTown_House3_Woman::
# 2 "data/maps/PacifidlogTown_House3/scripts.pory"
	lock
# 3 "data/maps/PacifidlogTown_House3/scripts.pory"
	faceplayer
# 4 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Woman_Text_0
# 5 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
	return


# 8 "data/maps/PacifidlogTown_House3/scripts.pory"

# 9 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_MapScripts::
# 10 "data/maps/PacifidlogTown_House3/scripts.pory"
	.byte 0
# 11 "data/maps/PacifidlogTown_House3/scripts.pory"

# 12 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_Trader::
# 13 "data/maps/PacifidlogTown_House3/scripts.pory"
	lock
# 14 "data/maps/PacifidlogTown_House3/scripts.pory"
	faceplayer
# 15 "data/maps/PacifidlogTown_House3/scripts.pory"
	goto_if_set FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED, PacifidlogTown_House3_EventScript_TradeCompleted
# 16 "data/maps/PacifidlogTown_House3/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_HORSEA
# 17 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 18 "data/maps/PacifidlogTown_House3/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 19 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 20 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_WillingToTradeIt, MSGBOX_YESNO
# 21 "data/maps/PacifidlogTown_House3/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PacifidlogTown_House3_EventScript_DeclineTrade
# 22 "data/maps/PacifidlogTown_House3/scripts.pory"
	special ChoosePartyMon
# 23 "data/maps/PacifidlogTown_House3/scripts.pory"
	waitstate
# 24 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 25 "data/maps/PacifidlogTown_House3/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, PacifidlogTown_House3_EventScript_DeclineTrade
# 26 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 27 "data/maps/PacifidlogTown_House3/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 28 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 29 "data/maps/PacifidlogTown_House3/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, PacifidlogTown_House3_EventScript_NotRequestedMon
# 30 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 31 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 32 "data/maps/PacifidlogTown_House3/scripts.pory"
	special CreateInGameTradePokemon
# 33 "data/maps/PacifidlogTown_House3/scripts.pory"
	special DoInGameTradeScene
# 34 "data/maps/PacifidlogTown_House3/scripts.pory"
	waitstate
# 35 "data/maps/PacifidlogTown_House3/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 36 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_ItsSubtlyDifferentThankYou, MSGBOX_DEFAULT
# 37 "data/maps/PacifidlogTown_House3/scripts.pory"
	setflag FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED
# 38 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
# 39 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 40 "data/maps/PacifidlogTown_House3/scripts.pory"

# 41 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_DeclineTrade::
# 42 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_NotDesperateOrAnything, MSGBOX_DEFAULT
# 43 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
# 44 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 45 "data/maps/PacifidlogTown_House3/scripts.pory"

# 46 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_NotRequestedMon::
# 47 "data/maps/PacifidlogTown_House3/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 48 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_WontAcceptAnyLessThanRealMon, MSGBOX_DEFAULT
# 49 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
# 50 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 51 "data/maps/PacifidlogTown_House3/scripts.pory"

# 52 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_TradeCompleted::
# 53 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_ReallyWantedToGetBagon, MSGBOX_DEFAULT
# 54 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
# 55 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 56 "data/maps/PacifidlogTown_House3/scripts.pory"

# 57 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_Girl::
# 58 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_IsThatAPokedex, MSGBOX_NPC
# 59 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 60 "data/maps/PacifidlogTown_House3/scripts.pory"

# 61 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_WillingToTradeIt:
# 62 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Check out this {STR_VAR_2}!\p"
# 63 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "It's the {STR_VAR_2} that I caught\n"
# 64 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "yesterday to celebrate my birthday!\p"
# 65 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Oh, I can see that you want it!\n"
# 66 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "After all, it's priceless!\p"
# 67 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "I'll tell you what. I might be willing\n"
# 68 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "to trade it for a {STR_VAR_1}.$"
# 69 "data/maps/PacifidlogTown_House3/scripts.pory"

# 70 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_ItsSubtlyDifferentThankYou:
# 71 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Oh, so this is a {STR_VAR_1}?\p"
# 72 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "It's sort of like a {STR_VAR_2},\n"
# 73 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "and yet it's subtly different.\p"
# 74 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Thank you!$"
# 75 "data/maps/PacifidlogTown_House3/scripts.pory"

# 76 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_WontAcceptAnyLessThanRealMon:
# 77 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "No, no, no! I won't accept any\n"
# 78 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "less than a real {STR_VAR_1}!$"
# 79 "data/maps/PacifidlogTown_House3/scripts.pory"

# 80 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_NotDesperateOrAnything:
# 81 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Oh, so you're not going to go through\n"
# 82 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "with this?\p"
# 83 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "That's cool. I'm not desperate to make\n"
# 84 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "a trade or anything.$"
# 85 "data/maps/PacifidlogTown_House3/scripts.pory"

# 86 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_ReallyWantedToGetBagon:
# 87 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "I know I could go looking for one\n"
# 88 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "on my own, but…\p"
# 89 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "But I really wanted to get a BAGON\n"
# 90 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "that another TRAINER caught…$"
# 91 "data/maps/PacifidlogTown_House3/scripts.pory"

# 92 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_IsThatAPokedex:
# 93 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Is that a POKéDEX?\p"
# 94 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Did you get to meet a lot of different\n"
# 95 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "POKéMON?\p"
# 96 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "I wish I was like you.$"

PacifidlogTown_House3_Woman_Text_0:
# 4 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Hey {PLAYER}, do you ever get tired of\n"
	.string "fish? I know we're pretty fortunate\l"
	.string "here in Pacifidlog, but I'd like some\l"
	.string "variety every now and then.$"
