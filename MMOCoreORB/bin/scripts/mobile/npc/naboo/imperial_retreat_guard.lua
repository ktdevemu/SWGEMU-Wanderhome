imperial_retreat_guard = Creature:new {
	objectName = "@mob/creature_names:imperial_retreat_guard",
	socialGroup = "Imperial",
	pvpFaction = "Imperial",
	faction = "",
	level = 72,
	chanceHit = 0.750000,
	damageMin = 520,
	damageMax = 750,
	baseXp = 6931,
	baseHAM = 1200,
	baseHAMmax = 1500,
	armor = 0,
	resists = {0,0,0,0,30,-1,30,-1,-1},
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
	creatureBitmask = PACK + KILLER,
	diet = HERBIVORE,

	templates = {},
	lootGroups = {
	    {
			groups = {
				{group = "junk", chance = 4000000},
				{group = "tailor_components", chance = 2000000},
				{group = "loot_kits", chance = 4000000}
			},
			lootChance = 4800000
		}				
	},
	weapons = {"imperial_weapons_medium"},
	attacks = {}
}

CreatureTemplates:addCreatureTemplate(imperial_retreat_guard, "imperial_retreat_guard")