rath_kana = Creature:new {
	objectName = "",
	customName = "Rath Kana",
	socialGroup = "self",
	pvpFaction = "",
	faction = "",
	level = 23,
	chanceHit = 0.28,
	damageMin = 90,
	damageMax = 110,
	baseXp = 870,
	baseHAM = 3200,
	baseHAMmax = 3400,
	armor = 0,
	resists = {0,0,0,0,0,0,0,-1,-1},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = ATTACKABLE,
	creatureBitmask = KILLER,
	optionsBitmask = 128,
	diet = HERBIVORE,

	templates = {"object/mobile/ig_assassin_droid.iff"},
	lootGroups = {},
	weapons = {"pirate_weapons_light"},
	conversationTemplate = "",
	attacks = merge(marksmanmaster,brawlermaster)
}

CreatureTemplates:addCreatureTemplate(rath_kana, "rath_kana")