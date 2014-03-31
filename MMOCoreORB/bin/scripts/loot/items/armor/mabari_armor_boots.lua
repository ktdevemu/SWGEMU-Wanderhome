mabari_armor_boots = {
	minimumLevel = 0,
	maximumLevel = -1,
	customObjectName = "Mabari Armorweave Boots",
	directObjectTemplate = "object/tangible/wearables/armor/zam/armor_zam_wesell_boots.iff",
	craftingValues = {
		{"armor_rating",1,1,0},
		{"heateffectiveness",10,40,10},
		{"blasteffectiveness",10,40,10},
		{"armor_effectiveness",4,19,10},
		{"armor_integrity",18750, 31250,0},
		{"armor_health_encumbrance",8,5,0},
		{"armor_action_encumbrance",8,5,0},
		{"armor_mind_encumbrance",6,3,0},
	},
	skillMods = {

	},
	customizationStringNames = {"/private/index_color_1", "/private/index_color_2"},
	customizationValues = {
			{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19},
			{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28}
	},

	junkDealerTypeNeeded = JUNKARMOUR,
	junkMinValue = 30,
	junkMaxValue = 60
}

addLootItemTemplate("mabari_armor_boots", mabari_armor_boots)
