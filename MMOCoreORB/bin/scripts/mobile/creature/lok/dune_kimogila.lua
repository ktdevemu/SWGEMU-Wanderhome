dune_kimogila = Creature:new {
	objectName = "dune kimogila",
	socialGroup = "Kimogila",
	pvpFaction = "",
	faction = "",
	level = 123,
	chanceHit = 4.000000,
	damageMin = 785,
	damageMax = 1280,
	baseXp = 11671,
	baseHAM = 59000,
	armor = 0,
	resists = {40,65,0,100,-1,0,100,-1,-1},
	meatType = "meat_carnivore",
	meatAmount = 1450,
	hideType = "hide_leathery",
	hideAmount = 1350,
	boneType = "bone_",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0.000000,
	ferocity = 0,
	pvpBitmask = AGGRESSIVE,
	creatureBitmask = KILLER + PACK,
	diet = CARNIVORE,

	templates = {},
	lootgroups = {},
	weapons = {},
	attacks = {
		{"intimidationattack","intimidationChance=50"},
		{"creatureareacombo",""}
	}
}

CreatureTemplates:addCreatureTemplate(dune_kimogila, "dune_kimogila")
