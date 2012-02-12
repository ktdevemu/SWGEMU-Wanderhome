noble = Creature:new {
	objectName = "@mob/creature_names:noble",
	socialGroup = "Townsperson",
	pvpFaction = "Townsperson",
	faction = "",
	level = 6,
	chanceHit = 0.250000,
	damageMin = 50,
	damageMax = 55,
	baseXp = 113,
	baseHAM = 180,
	baseHAMmax = 220,
	armor = 0,
	resists = {0,0,0,0,0,0,0,-1,-1},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0.000000,
	ferocity = 0,
	pvpBitmask = NONE,
	creatureBitmask = HERD,
	diet = HERBIVORE,

	templates = {"object/mobile/dressed_noble_old_human_male_02.iff",
					"object/mobile/dressed_noble_twilek_male_01.iff",
					"object/mobile/dressed_noble_old_human_female_02.iff",
					"object/mobile/dressed_noble_fat_zabrak_male_02.iff",
					"object/mobile/dressed_noble_human_male_04.iff",
					"object/mobile/dressed_noble_old_twk_female_01.iff",
					"object/mobile/dressed_noble_rodian_female_01.iff"},
	lootGroups = {},
	weapons = {"rebel_weapons_light"},
	attacks = {}
}

CreatureTemplates:addCreatureTemplate(noble, "noble")