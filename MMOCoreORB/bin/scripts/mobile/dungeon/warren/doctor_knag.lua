doctor_knag = Creature:new {
	objectName = "@theme_park/warren/warren_system_messages:name_knag",
	socialGroup = "warren",
	pvpFaction = "",
	faction = "",
	level = 11,
	chanceHit = 1,
	damageMin = 121,
	damageMax = 270,
	baseXp = 2100,
	baseHAM = 8600,
	baseHAMmax = 9900,
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
	pvpBitmask = AGGRESSIVE + ATTACKABLE + ENEMY,
	creatureBitmask = PACK,
	optionsBitmask = 128,
	diet = HERBIVORE,

	templates = {"object/mobile/warren_knag_garhun.iff"},
	lootGroups = {},
	weapons = {},
	conversationTemplate = "",
	attacks = {}
}

CreatureTemplates:addCreatureTemplate(doctor_knag, "doctor_knag")
