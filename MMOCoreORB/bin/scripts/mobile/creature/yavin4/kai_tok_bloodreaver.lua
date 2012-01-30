kai_tok_bloodreaver = Creature:new {
	objectName = "@mob/creature_names:kai_tok_bloodreaver",
	socialGroup = "Kai Tok",
	pvpFaction = "",
	faction = "",
	level = 35,
	chanceHit = 0.42,
	damageMin = 260,
	damageMax = 270,
	baseXp = 3460,
	baseHAM = 9100,
	baseHAMmax = 11100,
	armor = 0,
	resists = {35,30,0,0,0,-1,-1,-1,-1},
	meatType = "meat_carnivore",
	meatAmount = 0,
	hideType = "hide_leathery",
	hideAmount = 41,
	boneType = "bone_avian",
	boneAmount = 46,
	milk = 0,
	tamingChance = 0.05,
	ferocity = 0,
	pvpBitmask = AGGRESSIVE + ATTACKABLE,
	creatureBitmask = PACK + STALKER,
	optionsBitmask = 128,
	diet = CARNIVORE,

	templates = {"object/mobile/kai_tok.iff"},
	lootGroups = {},
	weapons = {},
	conversationTemplate = "",
	attacks = {
		{"dizzyattack","dizzyChance=50"},
		{"stunattack","stunChance=50"}
	}
}

CreatureTemplates:addCreatureTemplate(kai_tok_bloodreaver, "kai_tok_bloodreaver")