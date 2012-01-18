axkva_min = Creature:new {
	objectName = "@mob/creature_names:axkva_min",
	socialGroup = "Nightsister",
	pvpFaction = "Nightsister",
	faction = "",
	level = 302,
	chanceHit = 30,
	damageMin = 1645,
	damageMax = 3000,
	baseXp = 28549,
	baseHAM = 385000,
	baseHAMmax = 471000,
	armor = 3,
	resists = {100,95,95,100,100,100,100,100,-1},
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
	creatureBitmask = PACK + KILLER + HEALER,
	optionsBitmask = 128,
	diet = HERBIVORE,
	lootChance = 8000000,

	templates = {"object/mobile/dressed_dathomir_nightsister_axkva.iff"},
	lootgroups = {
		{group = "axkva_min", chance = 500000},
		{group = "nightsister_crystals_4", chance = 1400000},
		{group = "nightsister_common", chance = 5000000},
		{group = "pistols", chance = 1000000},
		{group = "rifles", chance = 1000000},
		{group = "armor_attachments", chance = 550000},
		{group = "clothing_attachments", chance = 550000}
	},
	weapons = {"mixed_force_weapons"},
	conversationTemplate = "",
	attacks = {
	}
}

CreatureTemplates:addCreatureTemplate(axkva_min, "axkva_min")