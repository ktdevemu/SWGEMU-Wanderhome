massive_gnort = Creature:new {
	objectName = "@mob/creature_names:gnort_massive",
	socialGroup = "Gnort",
	pvpFaction = "",
	faction = "",
	level = 4,
	chanceHit = 0.240000,
	damageMin = 40,
	damageMax = 45,
	range = 0,
	baseXp = 62,
	baseHAM = 125,
	armor = 0,
	resists = {0,0,0,0,0,0,0,-1,-1},
	meatType = "meat_herbivore",
	meatAmount = 12,
	hideType = "hide_leathery",
	hideAmount = 8,
	boneType = "bone_mammal",
	boneAmount = 6,
	milk = 0,
	tamingChance = 0.000000,
	ferocity = 0,
	pvpBitmask = ATTACKABLE,
	creatureBitmask = HERD,
	diet = HERBIVORE,

	templates = {},
	lootgroups = {},
	weapons = {},
	attacks = {}
}

CreatureTemplates:addCreatureTemplate(massive_gnort, "massive_gnort")
