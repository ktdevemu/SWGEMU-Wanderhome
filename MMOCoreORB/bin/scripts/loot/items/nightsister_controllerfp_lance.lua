--Automatically generated by SWGEmu Spawn Tool v0.12 loot editor.

nightsister_controllerfp_lance = {
	minimumLevel = 0,
	maximumLevel = -1,
	customObjectName = "",
	directObjectTemplate = "object/weapon/melee/polearm/lance_controllerfp_nightsister.iff",
	craftingValues = {
		{"mindamage",7,13,0},
		{"maxdamage",133,246,0},
		{"attackspeed",7.2,4.1,1},
		{"woundchance",9,18,0},
		{"hitpoints",750,1500,0},
		{"zerorangemod",5,15,0},
		{"maxrangemod",5,15,0},
		{"midrange",3,3,0},
		{"midrangemod",5,15,0},
		{"maxrange",5,5,0},
		{"attackhealthcost",26,14,0},
		{"attackactioncost",59,32,0},
		{"attackmindcost",29,15,0},
	},
	customizationStringNames = {},
	customizationValues = {},

	-- dotChance: The chance of this weapon object dropping with a dot on it. Higher number means less chance. Set to 0 for static.
	dotChance = 1,

	-- dotValues: Object map that can randomly or statically generate a dot (used for weapon objects.)
	dotValues = {
		{"type", 2, 2}, -- 1 = Poison, 2 = Disease, 3 = Fire.
		{"attribute", 0, 0}, -- See CreatureAttributes.h in src for numbers.
		{"strength", 40, 40}, -- set for disease. Fire will be x1.5, poison x2.
		{"duration", 240, 240}, -- set for poison. Fire will be x1.5, disease x5.
		{"potency", 70, 70},
		{"uses", 8000, 8000}
	}

}

addLootItemTemplate("nightsister_controllerfp_lance", nightsister_controllerfp_lance)
