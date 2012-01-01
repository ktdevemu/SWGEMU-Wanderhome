crazed_geonosian_guard = Creature:new {
	objectName = "@mob/creature_names:crazed_Geonosian_guard",
	socialGroup = "self",
	pvpFaction = "",
	faction = "",
	level = 65,
	chanceHit = 0.64,
	damageMin = 480,
	damageMax = 670,
	baseXp = 6288,
	baseHAM = 11000,
	baseHAMmax = 14000,
	armor = 0,
	resists = {25,35,-1,65,0,25,-1,0,-1},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = AGGRESSIVE + ATTACKABLE,
	creatureBitmask = PACK + KILLER,
	optionsBitmask = 128,
	diet = HERBIVORE,

	templates = {},
	lootgroups = {},
	weapons = {"geonosian_weapons"},
	conversationTemplate = "",
	attacks = {
	}
}

CreatureTemplates:addCreatureTemplate(crazed_geonosian_guard, "crazed_geonosian_guard")