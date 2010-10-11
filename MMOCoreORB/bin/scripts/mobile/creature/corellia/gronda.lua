gronda = Creature:new {
	templateType = NPCCREATURE,
	gameObjectType = 1024,
	objectName = "@monster_name:gronda",
	socialGroup = "Gronda",
	pvpFaction = "",
	faction = "",
	level = 19,
	chanceHit = 0.320000,
	damageMin = 170,
	damageMax = 180,
	range = 0,
	baseXp = 1426,
	baseHAM = 5550,
	armor = 0,
	resists = {20,15,0,-1,-1,-1,-1,-1,-1},
	meatType = "meat_carnivore",
	meatAmount = 360,
	hideType = "hide_leathery",
	hideAmount = 270,
	boneType = "bone_mammal",
	boneAmount = 180,
	milk = 0,
	tamingChance = 0.250000,
	ferocity = 0,
	pvpBitmask = ATTACKABLE,
	creatureBitmask = PACK + HERD,
	diet = CARNIVORE,

	templates = {},
	weapons = {},
	attacks = {
		{"knockdownattack","knockdownChance=50"}
	}
}

CreatureTemplates:addCreatureTemplate(gronda, "gronda")
