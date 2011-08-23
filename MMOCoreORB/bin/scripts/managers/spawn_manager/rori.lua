-- {"regionName", xCenter, yCenter, radius, tier, spawnConstant, ["spawnGroup1"], [...]}
-- tier: 0 = no spawn, 1 = static spawn area, 2 = dynamic spawn area

rori_regions = {
	{"narmle",0,0,0,0,1},
	{"restuss",0,0,0,0,1},
	{"southern_forest_1",0,0,0,0,1},
	{"southern_forest_2",0,0,0,0,1},
	{"southern_forest_3",0,0,0,0,1},
	{"southern_forest_4",0,0,0,0,1},
	{"southern_forest_5",0,0,0,0,1},
	{"southern_forest_6",0,0,0,0,1},
	{"southern_forest_7",0,0,0,0,1},
	{"southern_mountains_1",0,0,0,0,1},
	{"southern_mountains_2",0,0,0,0,1},
	{"southern_mountains_3",0,0,0,0,1},
	{"southern_mountains_4",0,0,0,0,1},
	{"eastern_mountains_1",0,0,0,0,1},
	{"eastern_mountains_2",0,0,0,0,1},
	{"eastern_mountains_3",0,0,0,0,1},
	{"western_mountains_1",0,0,0,0,1},
	{"western_mountains_2",0,0,0,0,1},
	{"western_mountains_3",0,0,0,0,1},
	{"western_mountains_4",0,0,0,0,1},
	{"southern_mud_flats_1",0,0,0,0,1},
	{"southern_mud_flats_2",0,0,0,0,1},
	{"southern_mud_flats_3",0,0,0,0,1},
	{"southern_mud_flats_4",0,0,0,0,1},
	{"southern_mud_flats_5",0,0,0,0,1},
	{"southern_mud_flats_6",0,0,0,0,1},
	{"mud_beach_1",0,0,0,0,1},
	{"mud_beach_2",0,0,0,0,1},
	{"mud_beach_3",0,0,0,0,1},
	{"mud_beach_4",0,0,0,0,1},
	{"mud_beach_6",0,0,0,0,1},
	{"mud_beach_5",0,0,0,0,1},
	{"mud_beach_7",0,0,0,0,1},
	{"mud_beach_8",0,0,0,0,1},
	{"mud_beach_9",0,0,0,0,1},
	{"western_islands_1",0,0,0,0,1},
	{"western_islands_2",0,0,0,0,1},
	{"central_islands_1",0,0,0,0,1},
	{"central_islands_2",0,0,0,0,1},
	{"eastern_islands_1",0,0,0,0,1},
	{"eastern_islands_2",0,0,0,0,1},
	{"northern_islands_1",0,0,0,0,1},
	{"northern_islands_2",0,0,0,0,1},
	{"northern_islands_3",0,0,0,0,1},
	{"swamp_general_1",0,0,0,0,1},
	{"swamp_general_2",0,0,0,0,1},
	{"plains_1",0,0,0,0,1},
	{"plains_2",0,0,0,0,1},
	{"plains_3",0,0,0,0,1},
	{"plains_4",0,0,0,0,1},
	{"plains_5",0,0,0,0,1},
	{"plains_6",0,0,0,0,1},
	{"monster_island",0,0,0,0,1},
	{"world_spawner",0,0,0,0,1},
	{"narmle_easy_newbie",0,0,0,0,1},
	{"narmle_medium_newbie",0,0,0,0,1},
	{"restuss_easy_newbie",0,0,0,0,1},
	{"restuss_medium_newbie",0,0,0,0,1},
	{"western_mountains",0,0,0,0,1},
	{"northwest_mountains",0,0,0,0,1},
	{"northeast_mountains",0,0,0,0,1},
	{"eastern_mountains",0,0,0,0,1},
	{"southern_jungle_mountains",0,0,0,0,1},
	{"northern_peak",0,0,0,0,1},
	{"western_peak",0,0,0,0,1},
	{"northwest_peak",0,0,0,0,1},
	{"eastern_peak",0,0,0,0,1},
	{"southwest_jungle_peak",0,0,0,0,1},
	{"southeast_jungle_peak",0,0,0,0,1},
	{"jungle_1",0,0,0,0,1},
	{"jungle_2",0,0,0,0,1},
	{"jungle_3",0,0,0,0,1},
	{"swamp_1",0,0,0,0,1},
	{"swamp_2",0,0,0,0,1},
	{"swamp_3",0,0,0,0,1},
	{"swamp_4",0,0,0,0,1},
	{"swamp_5",0,0,0,0,1},
	{"hard_capper_spineflap_ne",0,0,0,0,1},
	{"medium_tusk_cat_ne",0,0,0,0,1},
	{"hard_mauler_ne",0,0,0,0,1},
	{"easy_fuzzy_jax_se",0,0,0,0,1},
	{"easy_ikopi_se",0,0,0,0,1},
	{"hard_rogungan_se",0,0,0,0,1},
	{"hard_capper_spineflap_sw",0,0,0,0,1},
	{"easy_ikopi_sw",0,0,0,0,1},
	{"hard_mauler_sw",0,0,0,0,1},
	{"hard_capper_spineflap_nw",0,0,0,0,1},
	{"hard_rogungan_nw",0,0,0,0,1},
	{"lake_octir_swamp",0,0,0,0,1},
	{"mudflats_1",0,0,0,0,1},
	{"mudflats_2",0,0,0,0,1},
	{"mudflats_3",0,0,0,0,1},
	{"mudflats_4",0,0,0,0,1},
	{"mudflats_5",0,0,0,0,1},
	{"mudflats_6",0,0,0,0,1},
	{"mudflats_7",0,0,0,0,1},
	{"mudflats_8",0,0,0,0,1},
	{"sdungeon_rebel_outpost",0,0,0,0,1},
	{"asworal_everglades_1",0,0,0,0,1},
	{"asworal_everglades_2",0,0,0,0,1},
	{"asworal_everglades_3",0,0,0,0,1},
	{"asworal_everglades_4",0,0,0,0,1},
	{"asworal_everglades_5",0,0,0,0,1},
	{"asworal_everglades_6",0,0,0,0,1},
	{"vaydean_marsh",0,0,0,0,1},
	{"narlis_fens_1",0,0,0,0,1},
	{"narlis_fens_2",0,0,0,0,1},
	{"madyn_plains_2",0,0,0,0,1},
	{"madyn_plains_3",0,0,0,0,1},
	{"madyn_plains_1",0,0,0,0,1},
	{"a_rebel_outpost",0,0,0,0,1}
}

rori_static_spawns = {
	--{"mobile", respawnInSeconds, x, z, y, degrees heading, parentID}
	{"corellian_butterfly_defender", 0, 0, 0, 0, 0, 0},
	{"trainer_merchant", 0, -5159, 80, -2325, 137, 0},
	{"trainer_merchant", 0, 12, 1.13306, 6, 180, 4635411},
	{"trainer_merchant", 0, 5388, 80, 5673, 110, 0},
	{"trainer_1hsword", 0, -5219, 80.6094, -2164, 0, 0},
	{"trainer_commando", 0, -5180, 80, -2349, 178, 0},
	{"trainer_commando", 0, 9.51478, 1.13306, -10.433, 39, 4635689},
	{"trainer_commando", 0, -1.5837, 0.74, 2.75309, 178, 4505792},
	{"trainer_2hsword", 0, -5214, 80.4173, -2167, 0, 0},
	{"trainer_rifleman", 0, -5215, 80, -2373, 182, 0},
	{"trainer_rifleman", 0, 3649, 96, -6492, 45, 0},
	{"trainer_unarmed", 0, -5288, 79.0383, -2508, 0, 0},
	{"trainer_brawler", 0, -5212, 80, -2449, 176, 0},
	{"trainer_brawler", 0, -11, 1, -14, 0, 4635691},
	{"trainer_brawler", 0, 5335.31, 80, 5530.48, 41, 0},
	{"trainer_bountyhunter", 0, -5232, 80, -2241, 0, 0},
	{"trainer_carbine", 0, -5138, 0, -2514, 180, 0},
	{"trainer_carbine", 0, 3627, 96, -6433, 89, 0},
	{"trainer_chef", 0, 5181, 0, 5668, 180, 0},
	{"trainer_polearm", 0, -5278, 0, -2328, 180, 0},
	{"trainer_pistol", 0, -5240, 0, -2454, 180, 0},
	{"trainer_imagedesigner", 0, -21.5126, 2.12878, 74.0536, 181, 4635404},
	{"trainer_imagedesigner", 0, 5255, 0, 5850, 180, 0},
	{"trainer_imagedesigner", 0, -22.3141, 2.12878, 73.1359, 183, 4635755},
	{"trainer_ranger", 0, -5167, 0, -2535, 180, 0},
	{"trainer_scout", 0, -5211, 0, -2925, 180, 0},
	{"trainer_scout", 0, -4951.32, 79.9841, -2373.68, 118, 0},
	{"trainer_scout", 0, 5371, 0, 5539, 180, 0},
	{"trainer_scout", 0, -12.5744, 1.13306, 4.79458, 180, 4635688},
	{"trainer_dancer", 0, 18.0876, 2.12874, 53.6634, 1, 4635403},
	{"trainer_dancer", 0, 5437, 80.6, 5564, 87, 0},
	{"trainer_dancer", 0, 17.9253, 2.12876, 53.5327, 3, 4635754},
	{"trainer_doctor", 0, 20.5091, 0.26, -6.05941, 12, 4635420},
	{"trainer_doctor", 0, -5104, 0, -2249, 180, 0},
	{"trainer_doctor", 0, -25.5, 0.26, -4, 180, 4635424},
	{"trainer_doctor", 0, -25, 0.26, -3, 180, 4635732},
	{"trainer_doctor", 0, 20.8797, 0.26, -4.8809, 46, 4635728},
	{"trainer_musician", 0, 5432.89, 80.6, 5569.12, 37, 0},
	{"trainer_musician", 0, 21.6954, 2.12795, 63.866, 4, 4635754},
	{"trainer_musician", 0, 21.5522, 2.12797, 63.5137, 0, 4635403},
	{"trainer_combatmedic", 0, -16.4, 0.26, 10.9, 180, 4635424},
	{"trainer_combatmedic", 0, 26.6041, 0.26, 5.45989, 83, 4635420},
	{"trainer_combatmedic", 0, 26.6144, 0.26, 5.52845, 84, 4635728},
	{"trainer_combatmedic", 0, -16.3425, 0.26, 10.8489, 168, 4635732},
	{"trainer_marksman", 0, 0, 1.13306, -13, 0, 4615374},
	{"trainer_marksman", 0, 0, 0, -13, 0, 4635690},
	{"trainer_marksman", 0, 5528, 80.7357, 5641, 91, 0},
	{"trainer_marksman", 0, -2.5, 2.01003, 3, 91, 4505601},
	{"trainer_medic", 0, 13.545, 0.26, 5.01144, 165, 4635420},
	{"trainer_medic", 0, -17.4597, 0.26, 0.00620247, 4, 4635424},
	{"trainer_medic", 0, 13.2069, 0.26, 4.92654, 165, 4635728},
	{"trainer_armorsmith", 0, -15, 1.133, 0, 88, 4635412},
	{"trainer_armorsmith", 0, -5248, 80, -2358, 36, 0},
	{"trainer_armorsmith", 0, -12.491, 1.13306, 3.55001, 157, 4635773},
	{"trainer_armorsmith", 0, 3676, 94.2, -6419, 57, 0},
	{"trainer_tailor", 0, 5209, 0, 5729, 180, 0},
	{"trainer_architect", 0, 11, 1.133, -14.5, 0, 4635413},
	{"trainer_architect", 0, 11, 1.133, -14.5, 0, 4635774},
	{"trainer_architect", 0, 5510, 80, 5663, 214, 0},
	{"trainer_creaturehandler", 0, 5134, 80, 5749, 180, 0},
	{"trainer_artisan", 0, -5160.97, 80, -2325.27, 137, 0},
	{"trainer_artisan", 0, -0.124425, 1.13306, -13.6473, 0, 4615384},
	{"trainer_artisan", 0, -0.112948, 1.13306, -14.1468, 0, 4635664},
	{"trainer_artisan", 0, 5256, 80, 5600, 13, 0},
	{"trainer_industrialist", 0, -5165, 80, -2461, 141, 0},
	{"trainer_weaponsmith", 0, -2.5, 1.13306, -8.4, 91, 4635414},
	{"trainer_weaponsmith", 0, -5274, 0, -2424, 180, 0},
	{"trainer_weaponsmith", 0, -2.5, 1.13306, -8.4, 91, 4635775},
	{"trainer_weaponsmith", 0, 3681, 0, -6420, 180, 0},
	{"trainer_droidengineer", 0, -11.4803, 1.13306, -13.6866, 4, 4635776},
	{"trainer_droidengineer", 0, -10.6439, 1.13306, -12.5741, 8, 4635415},
	{"trainer_entertainer", 0, 29.5159, 2.12878, 73.6413, 88, 4635403},
	{"trainer_entertainer", 0, -5078, 80, -2354, 146, 0},
	{"trainer_entertainer", 0, 30.0595, 2.12878, 73.1945, 76, 4635754},
	{"trainer_entertainer", 0, 5433, 80.6, 5558, 268, 0},
	{"trainer_merchant", 0, 11.6338, 1.13306, 5.69637, 177, 4635772}
}
