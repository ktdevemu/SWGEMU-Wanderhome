stormtrooper_colonel = Creature:new {
	objectName = "@mob/creature_names:fbase_stormtrooper_squad_leader_hard",
	socialGroup = "imperial",
	pvpFaction = "imperial",
	faction = "imperial",
	level = 27,
	chanceHit = 0.37,
	damageMin = 260,
	damageMax = 270,
	baseXp = 2822,
	baseHAM = 8100,
	baseHAMmax = 9900,
	armor = 0,
	resists = {20,20,20,-1,30,-1,30,-1,-1},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = NONE,
	creatureBitmask = PACK + KILLER,
	optionsBitmask = 128,
	diet = HERBIVORE,

	templates = {"object/mobile/dressed_stormtrooper_groupleader_m.iff"},
	lootGroups = { },
	weapons = {"stormtrooper_weapons"},
	conversationTemplate = "",
	attacks = {	}
}

CreatureTemplates:addCreatureTemplate(stormtrooper_colonel, "stormtrooper_colonel")