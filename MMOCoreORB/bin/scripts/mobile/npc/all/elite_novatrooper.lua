elite_novatrooper = Creature:new {
	objectName = "@mob/creature_names:Elite_Novatrooper",
	socialGroup = "Imperial",
	pvpFaction = "Imperial",
	faction = "",
	level = 162,
	chanceHit = 10,
	damageMin = 945,
	damageMax = 1600,
	baseXp = 15360,
	baseHAM = 95000,
	baseHAMmax = 116000,
	armor = 0,
	resists = {65,65,80,30,0,0,30,45,-1},
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
	weapons = {"stormtrooper_weapons"},
	conversationTemplate = "",
	attacks = {
	}
}

CreatureTemplates:addCreatureTemplate(elite_novatrooper, "elite_novatrooper")