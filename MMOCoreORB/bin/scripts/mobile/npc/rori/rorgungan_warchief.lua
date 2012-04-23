rorgungan_warchief = Creature:new {
	objectName = "@mob/creature_names:rorgungan_warchief",
	socialGroup = "Rorgungan",
	pvpFaction = "Rorgungan",
	faction = "",
	level = 19,
	chanceHit = 0.320000,
	damageMin = 170,
	damageMax = 180,
	baseXp = 1609,
	baseHAM = 4100,
	baseHAMmax = 5000,
	armor = 0,
	resists = {20,15,0,-1,30,0,0,-1,-1},
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
	creatureBitmask = PACK + KILLER + HERD,
	diet = HERBIVORE,

	templates = {},
	lootGroups = {
	    {
			groups = {
				{group = "junk", chance = 4000000},
				{group = "tailor_components", chance = 500000},
				{group = "loot_kits", chance = 3500000},
				{group = "color_crystals", chance = 1000000},
				{group = "crystals_poor", chance = 1000000}
			},
			lootChance = 4800000
		}					
	},
	weapons = {"rebel_weapons_heavy"},
	attacks = {}
}

CreatureTemplates:addCreatureTemplate(rorgungan_warchief, "rorgungan_warchief")