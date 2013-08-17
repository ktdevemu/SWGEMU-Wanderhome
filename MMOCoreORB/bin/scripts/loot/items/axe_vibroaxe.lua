--Automatically generated by SWGEmu Spawn Tool v0.12 loot editor.

axe_vibroaxe = {
	minimumLevel = 0,
	maximumLevel = -1,
	customObjectName = "",
	directObjectTemplate = "object/melee/weapon/axe/axe_vibroaxe.iff",
	craftingValues = {
		{"mindamage",53,98,0},
		{"maxdamage",123,228,0},
		{"attackspeed",6.5,4.5,1},
		{"woundchance",6,14,0},
		{"hitpoints",750,1500,0},
		{"zerorangemod",-26,-14,0},
		{"maxrangemod",-26,-14,0},
		{"midrange",3,3,0},
		{"midrangemod",-26,-14,0},
		{"maxrange",7,7,0},
		{"attackhealthcost",85,46,0},
		{"attackactioncost",52,28,0},
		{"attackmindcost",20,11,0},
	},
	customizationStringNames = {},
	customizationValues = {},

	-- dotChance: The chance of this weapon object dropping with a dot on it. Higher number means less chance. Set to 0 for static.
	dotChance = 10,

	-- dotValues: Object map that can randomly or statically generate a dot (used for weapon objects.)
	dotValues = {
		{"type", 1, 3}, -- 1 = Poison, 2 = Disease, 3 = Fire.
		{"attribute", 0, 8}, -- See CreatureAttributes.h in src for numbers.
		{"strength", 10, 200}, -- set for disease. Fire will be x1.5, poison x2.
		{"duration", 30, 240}, -- set for poison. Fire will be x1.5, disease x5.
		{"potency", 1, 100},
		{"uses", 250, 9999}
	}

}

addLootItemTemplate("axe_vibroaxe", axe_vibroaxe)
