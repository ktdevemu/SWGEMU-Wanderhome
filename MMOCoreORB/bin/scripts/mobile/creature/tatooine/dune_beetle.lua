dune_beetle = Creature:new {
	objectName = "@mob/creature_names:dune_beetle",
	socialGroup = "Gt. Sand Beet.",
	pvpFaction = "",
	faction = "",
	level = 13,
	chanceHit = 0.290000,
	damageMin = 120,
	damageMax = 130,
	range = 25,
	baseXp = 714,
	baseHAM = 1300,
	armor = 0,
	resists = {15,15,0,0,0,0,0,-1,-1},
	meatType = "meat_insect",
	meatAmount = 6,
	hideType = "hide_scale",
	hideAmount = 8,
	boneType = "bone_",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0.250000,
	ferocity = 0,
	pvpBitmask = AGGRESSIVE,
	creatureBitmask = KILLER + PACK,
	diet = HERBIVORE,

	templates = {},
	lootgroups = {},
	weapons = {},
	attacks = {}
}

CreatureTemplates:addCreatureTemplate(dune_beetle, "dune_beetle")
