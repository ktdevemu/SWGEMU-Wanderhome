NarglatchCaveScreenPlay = ScreenPlay:new {
	numberOfActs = 1,

	screenplayName = "NarglatchCaveScreenPlay",

 	lootContainers = {
		6336292,
		6336293,
        	6336295,
        	6336297,
        	6336298
	},
	
	lootLevel = 16,	

	lootGroups = {
		{
			groups = {
				{group = "color_crystals", chance = 160000},
				{group = "junk", chance = 8240000},
				{group = "rifles", chance = 500000},
				{group = "pistols", chance = 500000},
				{group = "clothing_attachments", chance = 300000},
				{group = "armor_attachments", chance = 300000}
			},
			lootChance = 8000000
		}					
	},
	
	lootContainerRespawn = 1800 
}

registerScreenPlay("NarglatchCaveScreenPlay", true)

function NarglatchCaveScreenPlay:start()
	if (isZoneEnabled("naboo")) then
		self:spawnMobiles()
		self:initializeLootContainers()
	end
end

function NarglatchCaveScreenPlay:spawnMobiles()
	--spawnCreature("narglatch_hunter", 210,  5857.06, -4735.69)
	spawnMobile("naboo", "narglatch_cub", 210,  59.1563, -48.2338, -105.9, 0, 5285904)
	spawnMobile("naboo", "narglatch_cub", 210,  59.9239, -48.0151, -105.848, 0, 5285904)
	spawnMobile("naboo", "narglatch_cub", 210,  59.2891, -48.1575, -106.455, 0, 5285904)
	spawnMobile("naboo", "narglatch_cub", 210,  58.6679, -48.374, -105.204, 0, 5285904)
	spawnMobile("naboo", "narglatch_guardian", 210,  51.2337, -51.2872, -81.9015, 0, 5285904)
	spawnMobile("naboo", "narglatch_guardian", 210,  50.2935, -51.4655, -81.2462, 0, 5285904)
	spawnMobile("naboo", "narglatch_guardian", 210,  49.7328, -51.0798, -80.6538, 0, 5285904)
	spawnMobile("naboo", "narglatch", 210,  188.433, -65.8127, -96.0352, 0, 5285903)
	spawnMobile("naboo", "narglatch_cub", 210,  188.399, -65.8936, -105.666, 0, 5285903)
	spawnMobile("naboo", "narglatch_cub", 210,  188.437, -65.8282, -106.207, 0, 5285903)
	spawnMobile("naboo", "narglatch_cub", 210,  186.971, -65.5715, -107.227, 0, 5285903)
	spawnMobile("naboo", "narglatch_cub", 210,  186.356, -65.5219, -108.394, 0, 5285903)
	spawnMobile("naboo", "narglatch_matriarch", 210,  190.219, -66.5608, -101.405, 0, 5285903)
	spawnMobile("naboo", "narglatch", 210,  154.726, -66.2054, -97.0398, 0, 5285902)
	spawnMobile("naboo", "narglatch", 210,  153.984, -66.1003, -96.709, 0, 5285902)
	spawnMobile("naboo", "narglatch", 210,  154.57, -66.1752, -97.0431, 0, 5285902)
	spawnMobile("naboo", "narglatch", 210,  155.203, -66.3735, -97.7713, 0, 5285902)
	spawnMobile("naboo", "female_narglatch", 210,  124.829, -66.7547, -87.9985, 0, 5285902)
	spawnMobile("naboo", "female_narglatch", 210,  123.467, -66.727, -87.7582, 0, 5285902)
	spawnMobile("naboo", "female_narglatch", 210,  136.382, -66.4899, -120.494, 0, 5285902)
	spawnMobile("naboo", "female_narglatch", 210,  136.293, -66.4107, -119.244, 0, 5285902)
	spawnMobile("naboo", "narglatch", 210,  106.14, -66.2979, -106.777, 0, 5285902)
	spawnMobile("naboo", "narglatch", 210,  107.509, -66.2915, -108.184, 0, 5285902)
	spawnMobile("naboo", "narglatch", 210,  107.208, -66.2926, -107.5, 0, 5285902)
	spawnMobile("naboo", "narglatch", 210,  107.977, -66.5127, -106.369, 0, 5285902)
	spawnMobile("naboo", "female_narglatch", 210,  86.3064, -46.6698, -109.72, 0, 5285899)
	spawnMobile("naboo", "female_narglatch", 210,  86.8994, -46.7851, -108.768, 0, 5285899)
	spawnMobile("naboo", "narglatch", 210,  74.6552, -77.0677, -88.5809, 0, 5285898)
	spawnMobile("naboo", "narglatch", 210,  79.4059, -75.6855, -59.4771, 0, 5285898)
	spawnMobile("naboo", "narglatch", 210,  79.8804, -75.7066, -59.0985, 0, 5285898)
	spawnMobile("naboo", "narglatch", 210,  79.3953, -75.6892, -59.8034, 0, 5285898)
	spawnMobile("naboo", "female_narglatch", 210,  72.215, -77.3807, -90.5184, 0, 5285898)
	spawnMobile("naboo", "female_narglatch", 210,  80.0613, -62.7106, -16.379, 0, 5285897)
	spawnMobile("naboo", "narglatch_cub", 210,  83.8814, -62.1124, -12.7906, 0, 5285897)
	spawnMobile("naboo", "narglatch_cub", 210,  84.8026, -62.3222, -14.1039, 0, 5285897)
	spawnMobile("naboo", "narglatch_cub", 210,  85.7581, -62.1249, -13.2416, 0, 5285897)
	spawnMobile("naboo", "narglatch_cub", 210,  86.8824, -62.004, -11.9496, 0, 5285897)
	spawnMobile("naboo", "female_narglatch", 210,  51.1727, -67.489, -44.9174, 0, 5285896)
	spawnMobile("naboo", "narglatch_cub", 210,  51.1845, -67.6346, -47.5875, 0, 5285896)
	spawnMobile("naboo", "narglatch_cub", 210,  51.3974, -67.6616, -48.7445, 0, 5285896)
	spawnMobile("naboo", "narglatch_cub", 210,  51.6902, -67.6934, -48.6905, 0, 5285896)
	spawnMobile("naboo", "narglatch_cub", 210,  50.7219, -67.539, -47.8711, 0, 5285896)
	spawnMobile("naboo", "narglatch_guardian", 210,  45.8427, -47.2964, -26.0894, 0, 5285896)
	spawnMobile("naboo", "narglatch_guardian", 210,  45.2566, -46.9206, -24.8118, 0, 5285896)
	spawnMobile("naboo", "narglatch_hunter", 210,  27.5306, -43.3069, -67.1476, 0, 5285896)
	spawnMobile("naboo", "narglatch_guardian", 210,  24.5021, -37.9369, -31.854, 0, 5285896)
	spawnMobile("naboo", "narglatch_guardian", 210,  25.3447, -37.7154, -31.1389, 0, 5285896)
	spawnMobile("naboo", "narglatch_cub", 210,  21.5772, -41.9673, -66.2902, 0, 5285896)
	spawnMobile("naboo", "narglatch_cub", 210,  22.6629, -42.1857, -66.8769, 0, 5285896)
	spawnMobile("naboo", "narglatch_cub", 210,  23.982, -42.4837, -67.5169, 0, 5285896)
	spawnMobile("naboo", "narglatch_cub", 210,  20.056, -27.2205, -8.69811, 0, 5285895)
	spawnMobile("naboo", "narglatch_cub", 210,  19.2017, -27.1022, -8.761, 0, 5285895)
	spawnMobile("naboo", "narglatch_cub", 210,  19.8043, -26.7543, -7.50212, 0, 5285895)
	spawnMobile("naboo", "narglatch_cub", 210,  20.4196, -26.4089, -6.54443, 0, 5285895)
	spawnMobile("naboo", "narglatch_hunter", 210,  -0.0842351, -12.6628, -10.128, 0, 5285895)
	spawnMobile("naboo", "narglatch_hunter", 210,  0.57355, -13.1971, -10.0831, 0, 5285895)
	--spawnCreature("narglatch_guardian", 210,  5833.88, -4673.6)
	--spawnCreature("narglatch_hunter", 210,  5859.51, -4736.48)
	--spawnCreature("narglatch_hunter", 210,  5858.02, -4735.05)
	--spawnCreature("narglatch_guardian", 210,  5835.26, -4674.7)
	spawnMobile("naboo", "narglatch", 210,  55.609, -72.4672, -111.031, 0, 5285900)
	spawnMobile("naboo", "narglatch", 210,  55.7263, -72.4423, -111.107, 0, 5285900)
	spawnMobile("naboo", "narglatch", 210,  56.0992, -71.9749, -112.282, 0, 5285900)
	spawnMobile("naboo", "narglatch_cub", 210,  76.6839, -46.1883, -137.218, 0, 5285905)
	spawnMobile("naboo", "narglatch_cub", 210,  76.0665, -46.1734, -138.453, 0, 5285905)
	spawnMobile("naboo", "female_narglatch", 210,  78.0875, -46.5705, -143.613, 0, 5285905)
	spawnMobile("naboo", "female_narglatch", 210,  82.2869, -66.0361, -136.77, 0, 5285901)
	spawnMobile("naboo", "female_narglatch", 210,  81.6276, -65.8453, -137.914, 0, 5285901)
	spawnMobile("naboo", "narglatch", 210,  83.5343, -46.4091, -143.324, 0, 5285905)
	spawnMobile("naboo", "narglatch", 210,  82.0385, -46.588, -144.784, 0, 5285905)
	spawnMobile("naboo", "narglatch_cub", 210,  84.4604, -66.3536, -138.625, 0, 5285901)
	spawnMobile("naboo", "narglatch_cub", 210,  84.7233, -66.4678, -137.191, 0, 5285901)
	spawnMobile("naboo", "narglatch_cub", 210,  84.3998, -66.4002, -137.437, 0, 5285901)
	spawnMobile("naboo", "narglatch_cub", 210,  85.8107, -66.6873, -136.395, 0, 5285901)
end
