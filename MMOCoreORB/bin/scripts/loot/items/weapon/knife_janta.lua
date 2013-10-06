--Automatically generated by SWGEmu Spawn Tool v0.12 loot editor.

knife_janta = {
	minimumLevel = 0,
	maximumLevel = -1,
	customObjectName = "",
	directObjectTemplate = "object/weapon/melee/knife/knife_janta.iff",
	craftingValues = {
		{"mindamage",14,26,0},
		{"maxdamage",32,62,0},
		{"attackspeed",3.9,2.7,1},
		{"woundchance",6,12,0},
		{"hitpoints",750,1500,0},
		{"zerorangemod",17,33,0},
		{"maxrangemod",17,33,0},
		{"midrange",3,3,0},
		{"midrangemod",17,33,0},
		{"maxrange",7,7,0},
		{"attackhealthcost",8,4,0},
		{"attackactioncost",38,20,0},
		{"attackmindcost",8,4,0},
	},
	customizationStringNames = {},
	customizationValues = {},

	-- randomDotChance: The chance of this weapon object dropping with a random dot on it. Higher number means less chance. Set to 0 to always have a random dot.
	randomDotChance = 10,

	-- staticDotChance: The chance of this weapon object dropping with a static dot on it. Higher number means less chance. Set to 0 to always have a static dot.
	staticDotChance = 8, -- not a true static dot on this weapon, just a higher chance of having a mind poison in addition to any other dots

	-- staticDotType: 1 = Poison, 2 = Disease, 3 = Fire, 4 = Bleed
	staticDotType = 1,

	-- staticDotValues: Object map that can randomly or statically generate a dot (used for weapon objects.)
	staticDotValues = {
		{"attribute", 6, 6}, -- See CreatureAttributes.h in src for numbers.
		{"strength", 110, 250}, --because of the system random in the strength calculation, setting at 110, 250 will always produce a strength between 110 and 140 + % increase based on level of mob looted from.
		{"duration", 30, 240},
		{"potency", 10, 99},
		{"uses", 2000, 9999}
	},

	junkDealerTypeNeeded = JUNKWEAPONS,
	junkMinValue = 20,
	junkMaxValue = 60

}

addLootItemTemplate("knife_janta", knife_janta)
