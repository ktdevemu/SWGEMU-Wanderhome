gnort = Creature:new {
	templateType = NPCCREATURE,
	gameObjectType = 1024,
	objectName = "@monster_name:gnort",
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
	meatAmount = 6,
	hideType = "hide_leathery",
	hideAmount = 4,
	boneType = "bone_mammal",
	boneAmount = 3,
	milk = 0.000000,
	tamingChance = 0.250000,
	ferocity = 0,
	pvpBitmask = ATTACKABLE,
	creatureBitmask = HERD,
	diet = CARNIVORE,

	templates = {},
	weapons = {},
	attacks = {}
}

CreatureTemplates:addCreatureTemplate(gnort, "gnort")
