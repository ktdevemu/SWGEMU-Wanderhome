carrion_spat_corpsereaver = Creature:new {
	objectName = "@mob/creature_names:carrion_spat_corpsereaver",
	socialGroup = "Carrion Spat",
	pvpFaction = "",
	faction = "",
	level = 13,
	chanceHit = 0.29,
	damageMin = 130,
	damageMax = 140,
	baseXp = 714,
	baseHAM = 1500,
	baseHAMmax = 1900,
	armor = 0,
	resists = {0,0,0,10,10,0,0,0,-1},
	meatType = "meat_avian",
	meatAmount = 260,
	hideType = "",
	hideAmount = 0,
	boneType = "bone_avian",
	boneAmount = 180,
	milk = 0,
	tamingChance = 0.05,
	ferocity = 0,
	pvpBitmask = ATTACKABLE,
	creatureBitmask = PACK + KILLER,
	optionsBitmask = 128,
	diet = CARNIVORE,

	templates = {"object/mobile/carrion_spat.iff"},
	lootgroups = {},
	weapons = {},
	conversationTemplate = "",
	attacks = {
		{"blindattack","blindChance=50"},
		{"stunattack","stunChance=50"}
	}
}

CreatureTemplates:addCreatureTemplate(carrion_spat_corpsereaver, "carrion_spat_corpsereaver")