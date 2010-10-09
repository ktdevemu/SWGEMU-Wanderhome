Grovo = Creature:new {
	templateType = NPCCREATURE,
	gameObjectType = 1024,
	objectName = "Grovo",
	socialGroup = "Nightsister ",
	pvpFaction = "",
	faction = "",
	level = 75,
	chanceHit = 0.700000,
	damageMin = 520,
	damageMax = 750,
	range = 0,
	baseXp = 7207,
	baseHAM = 13500,
	armor = 0,
	resists = {0,60,0,100,100,100,0,0,-1},
	meatType = "meat_carnivore",
	meatAmount = 1100,
	hideType = "hide_leathery",
	hideAmount = 1000,
	boneType = "bone_mammal",
	boneAmount = 950,
	milk = 0.000000,
	tamingChance = 0.000000,
	ferocity = 0,
	pvpBitmask = AGGRESSIVE,
	creatureBitmask = KILLER + PACK,
	diet = CARNIVORE,

	templates = {},
	weapons = {},
	attacks = {
		{"creatureareableeding",""},
		{"creatureareacombo",""}
	}
}

CreatureTemplates:addCreatureTemplate(Grovo, "Grovo")
