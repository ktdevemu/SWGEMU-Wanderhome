mercenary_elite = Creature:new {
	objectName = "@mob/creature_names:mercenary_elite",
	socialGroup = "lok_mercenaries",
	pvpFaction = "lok_mercenaries",
	faction = "lok_mercenaries",
	level = 40,
	chanceHit = 0.43,
	damageMin = 335,
	damageMax = 380,
	baseXp = 4006,
	baseHAM = 9100,
	baseHAMmax = 11100,
	armor = 0,
	resists = {60,40,25,25,25,25,-1,-1,-1},
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
	creatureBitmask = PACK + KILLER + STALKER,
	optionsBitmask = 128,
	diet = HERBIVORE,

	templates = {
		"object/mobile/dressed_mercenary_elite_hum_f.iff",
		"object/mobile/dressed_mercenary_elite_hum_m.iff",
		"object/mobile/dressed_mercenary_elite_nikto_m.iff",
		"object/mobile/dressed_mercenary_elite_rod_m.iff",
		"object/mobile/dressed_mercenary_elite_wee_m.iff"
		},
	lootGroups = {},
	weapons = {"rebel_weapons_heavy"},
	conversationTemplate = "",
	attacks = {
	}
}

CreatureTemplates:addCreatureTemplate(mercenary_elite, "mercenary_elite")