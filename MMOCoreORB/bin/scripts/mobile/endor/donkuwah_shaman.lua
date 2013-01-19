donkuwah_shaman = Creature:new {
	objectName = "@mob/creature_names:donkuwah_shaman",
	socialGroup = "donkuwah_tribe",
	pvpFaction = "donkuwah_tribe",
	faction = "donkuwah_tribe",
	level = 30,
	chanceHit = 0.39,
	damageMin = 290,
	damageMax = 300,
	baseXp = 3097,
	baseHAM = 8400,
	baseHAMmax = 10200,
	armor = 0,
	resists = {0,0,0,0,0,-1,0,-1,-1},
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
	creatureBitmask = PACK + KILLER + HEALER,
	optionsBitmask = 128,
	diet = HERBIVORE,

	templates = {"object/mobile/dulok_male.iff"},
	lootGroups = {
		 {
	        groups = {
				{group = "donkuwah_common", chance = 3300000}
			},
			lootChance = 7000000
		}
	},
	weapons = {"donkuwah_weapons"},
	conversationTemplate = "",
	attacks = merge(brawlermaster)
}

CreatureTemplates:addCreatureTemplate(donkuwah_shaman, "donkuwah_shaman")
