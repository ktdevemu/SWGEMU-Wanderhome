imo_vledmo = Creature:new {
	objectName = "",
	customName = "Imo Vledmo",
	socialGroup = "townsperson",
	pvpFaction = "townsperson",
	faction = "townsperson",
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
	optionsBitmask = 128,
	diet = HERBIVORE,

	templates = {"object/mobile/dressed_dathomir_prisoner_01.iff",
				 "object/mobile/dressed_dathomir_prisoner_02.iff",
				 "object/mobile/dressed_dathomir_prisoner_03.iff",
				 "object/mobile/dressed_dathomir_prisoner_04.iff",
				 "object/mobile/dressed_dathomir_prisoner_05.iff"},
	lootGroups = {},
	weapons = {},
	conversationTemplate = "",
	attacks = {
	}
}

CreatureTemplates:addCreatureTemplate(imo_vledmo, "imo_vledmo")