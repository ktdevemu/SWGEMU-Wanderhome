plumed_rasp = Creature:new {
	templateType = NPCCREATURE,
	gameObjectType = 1024,
	objectName = "@monster_name:plumed_rasp",
	socialGroup = "Rasp",
	pvpFaction = "",
	faction = "",
	level = 7,
	chanceHit = 0.260000,
	damageMin = 80,
	damageMax = 90,
	range = 0,
	baseXp = 147,
	baseHAM = 150,
	armor = 0,
	resists = {0,0,0,0,0,15,0,-1,-1},
	meatType = "meat_avian",
	meatAmount = 3,
	hideType = "hide_",
	hideAmount = 0,
	boneType = "bone_avian",
	boneAmount = 2,
	milk = 0,
	tamingChance = 0.250000,
	ferocity = 0,
	pvpBitmask = ATTACKABLE,
	creatureBitmask = NONE,
	diet = CARNIVORE,

	templates = {},
	weapons = {},
	attacks = {}
}

CreatureTemplates:addCreatureTemplate(plumed_rasp, "plumed_rasp")
