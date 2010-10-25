female_forest_slice_hound = Creature:new {
	objectName = "@mob/creature_names:female_forest_slice_hound",
	socialGroup = "Forest Slice Hound",
	pvpFaction = "",
	faction = "",
	level = 10,
	chanceHit = 0.280000,
	damageMin = 130,
	damageMax = 140,
	range = 0,
	baseXp = 356,
	baseHAM = 750,
	armor = 0,
	resists = {0,0,0,0,0,0,0,-1,-1},
	meatType = "meat_carnivore",
	meatAmount = 65,
	hideType = "hide_bristley",
	hideAmount = 35,
	boneType = "bone_mammal",
	boneAmount = 30,
	milk = 0,
	tamingChance = 0.250000,
	ferocity = 0,
	pvpBitmask = ATTACKABLE,
	creatureBitmask = PACK + HERD,
	diet = CARNIVORE,

	templates = {},
	lootgroups = {},
	weapons = {},
	attacks = {
		{"posturedownattack","postureDownChance=50"}
	}
}

CreatureTemplates:addCreatureTemplate(female_forest_slice_hound, "female_forest_slice_hound")
