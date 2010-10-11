mantigrue_night_stalker = Creature:new {
	templateType = NPCCREATURE,
	gameObjectType = 1024,
	objectName = "@mob/creature_names:mantigrue_night_stalker",
	socialGroup = "Mantigrue",
	pvpFaction = "",
	faction = "",
	level = 28,
	chanceHit = 0.360000,
	damageMin = 290,
	damageMax = 300,
	range = 25,
	baseXp = 2914,
	baseHAM = 8000,
	armor = 0,
	resists = {30,40,0,-1,-1,-1,-1,-1,-1},
	meatType = "meat_carnivore",
	meatAmount = 0,
	hideType = "hide_wooly",
	hideAmount = 0,
	boneType = "bone_",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0.250000,
	ferocity = 0,
	pvpBitmask = AGGRESSIVE,
	creatureBitmask = KILLER + STALKER + PACK + HERD,
	diet = CARNIVORE,

	templates = {},
	weapons = {},
	attacks = {
		{"posturedownattack","postureDownChance=50"}
	}
}

CreatureTemplates:addCreatureTemplate(mantigrue_night_stalker, "mantigrue_night_stalker")
