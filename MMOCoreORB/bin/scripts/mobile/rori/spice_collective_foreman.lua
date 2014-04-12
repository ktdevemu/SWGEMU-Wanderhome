spice_collective_foreman = Creature:new {
	objectName = "@mob/creature_names:spice_collective_foreman",
	socialGroup = "spice_collective",
	pvpFaction = "spice_collective",
	faction = "spice_collective",
	level = 18,
	chanceHit = 0.320000,
	damageMin = 170,
	damageMax = 180,
	baseXp = 1257,
	baseHAM = 4100,
	baseHAMmax = 5000,
	armor = 0,
	resists = {0,0,0,0,0,0,0,-1,-1},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0.000000,
	ferocity = 0,
	pvpBitmask = ATTACKABLE,
	creatureBitmask = PACK + HERD,
	diet = HERBIVORE,

	templates = {
		"object/mobile/dressed_spice_collective_foreman_trandoshan_female_01.iff",
		"object/mobile/dressed_spice_collective_foreman_trandoshan_male_01.iff"},
	lootGroups = {
	    {
			groups = {
				{group = "junk", chance = 2000000},
				{group = "wearables_common", chance = 2000000},
				{group = "rifles", chance = 2000000},
				{group = "tailor_components", chance = 2000000},
				{group = "loot_kit_parts", chance = 2000000}
			},
			lootChance = 3200000
		}				
	},
	weapons = {"ranged_weapons"},
	attacks = merge(brawlernovice,marksmannovice)
}

CreatureTemplates:addCreatureTemplate(spice_collective_foreman, "spice_collective_foreman")