mol_nimai = Creature:new {
	objectName = "",
	socialGroup = "Townsperson",
	pvpFaction = "None",
	faction = "",
	level = 100,
	chanceHit = 1,
	damageMin = 645,
	damageMax = 1000,
	baseXp = 9429,
	baseHAM = 24000,
	baseHAMmax = 30000,
	armor = 0,
	resists = {0,0,0,0,0,0,0,0,-1},
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
	creatureBitmask = PACK,
	optionsBitmask = 264,
	diet = HERBIVORE,

	templates = {"object/mobile/dressed_ris_inventor_bothan_male.iff"},
	lootGroups = {},
	weapons = {""},
	conversationTemplate = "ris_armor_quest_convotemplate",
	attacks = {
	}
}

CreatureTemplates:addCreatureTemplate(mol_nimai, "mol_nimai")