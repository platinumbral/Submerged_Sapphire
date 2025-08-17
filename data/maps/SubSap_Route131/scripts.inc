SubSap_Route131_MapScripts::
	.byte 0


SubSap_Route131_SwimmerOphelia::
# 4 "data/maps/SubSap_Route131/scripts.pory"
	trainerbattle_single TRAINER_ROUTE131_SWIMMER_OPHELIA, SwimmerOphelia_Intro, SwimmerOphelia_Outro
# 5 "data/maps/SubSap_Route131/scripts.pory"
	msgbox SwimmerOphelia_PostBattle, MSGBOX_AUTOCLOSE
# 6 "data/maps/SubSap_Route131/scripts.pory"
	waitmessage
	end


SwimmerOphelia_Intro::
# 10 "data/maps/SubSap_Route131/scripts.pory"
	.string "Oh hi {PLAYER}! You have a Pokémon now, right? Let's battle!$"

SwimmerOphelia_Outro::
# 14 "data/maps/SubSap_Route131/scripts.pory"
	.string "Wow, you're really good! I need to train harder!$"

SwimmerOphelia_PostBattle::
# 18 "data/maps/SubSap_Route131/scripts.pory"
	.string "You'll have no trouble making it to Ever Grande City!$"
