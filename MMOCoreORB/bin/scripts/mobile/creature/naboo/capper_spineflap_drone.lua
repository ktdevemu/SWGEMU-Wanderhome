capper_spineflap_drone = Creature:new {
	objectName = "@mob/creature_names:capper_spineflap_drone",
	socialGroup = "Cap. Spineflap",
	pvpFaction = "",
	faction = "",
	level = 6,
	chanceHit = 0.250000,
	damageMin = 50,
	damageMax = 55,
	range = 0,
	baseXp = 147,
	baseHAM = 200,
	armor = 0,
	resists = {0,0,0,0,0,0,0,-1,-1},
	meatType = "meat_insect",
	meatAmount = 6,
	hideType = "hide_scale",
	hideAmount = 10,
	boneType = "bone_avian",
	boneAmount = 6,
	milk = 0,
	tamingChance = 0.250000,
	ferocity = 0,
	pvpBitmask = ATTACKABLE,
	creatureBitmask = PACK,
	diet = CARNIVORE,

	templates = {},
	lootgroups = {},
	weapons = {},
	attacks = {}
}

CreatureTemplates:addCreatureTemplate(capper_spineflap_drone, "capper_spineflap_drone")
