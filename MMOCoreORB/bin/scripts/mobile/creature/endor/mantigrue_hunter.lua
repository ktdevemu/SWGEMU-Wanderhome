mantigrue_hunter = Creature:new {
	templateType = NPCCREATURE,
	gameObjectType = 1024,
	objectName = "@mob/creature_names:mantigrue_hunter",
	socialGroup = "Mantigrue",
	pvpFaction = "",
	faction = "",
	level = 38,
	chanceHit = 0.410000,
	damageMin = 320,
	damageMax = 350,
	range = 0,
	baseXp = 3733,
	baseHAM = 9800,
	armor = 0,
	resists = {40,40,0,-1,80,-1,80,80,-1},
	meatType = "meat_carnivore",
	meatAmount = 0,
	hideType = "hide_wooly",
	hideAmount = 0,
	boneType = "bone_",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0.200000,
	ferocity = 0,
	pvpBitmask = AGGRESSIVE,
	creatureBitmask = KILLER,
	diet = CARNIVORE,

	templates = {},
	weapons = {},
	attacks = {
		{"blindattack","blindChance=50"}
	}
}

CreatureTemplates:addCreatureTemplate(mantigrue_hunter, "mantigrue_hunter")
