imperial_recruiter_convotemplate = ConvoTemplate:new {
	initialScreen = "",
	templateType = "Lua",
	luaClassHandler = "imperial_recruiter_handler",
	screens = {}
}

--greet_hated
imp_recruiter_greet_hated = ConvoScreen:new {
	id = "greet_hated",
	leftDialog = "@conversation/faction_recruiter_imperial:s_308",
	stopConversation = "true",
	options = {
	}
}

imperial_recruiter_convotemplate:addScreen(imp_recruiter_greet_hated);

--greet_changing_status

imp_recruiter_greet_changing_status = ConvoScreen:new {
	id = "greet_changing_status",
	leftDialog = "@conversation/faction_recruiter_imperial:s_444",
	stopConversation = "true",
	options = {
	}
}

imperial_recruiter_convotemplate:addScreen(imp_recruiter_greet_changing_status);

--greet_enemy
imp_recruiter_greet_enemy = ConvoScreen:new {
	id = "greet_enemy",
	leftDialog = "@conversation/faction_recruiter_imperial:s_306",
	stopConversation = "true",
	options = {
	}
}

imperial_recruiter_convotemplate:addScreen(imp_recruiter_greet_enemy);

--member start
imp_recruiter_member_covert_start = ConvoScreen:new {
	id = "greet_member_start_covert",
	leftDialog = "@conversation/faction_recruiter_imperial:s_310",
	stopConversation = "false",
	options = {
		{"@conversation/faction_recruiter_imperial:s_352", "confirm_go_overt"},
		{"@conversation/faction_recruiter_imperial:s_374", "leave_time_covert"},
		{"@conversation/faction_recruiter_imperial:s_386", "resign_covert"},
	}
}

imperial_recruiter_convotemplate:addScreen(imp_recruiter_member_covert_start);

imp_recruiter_member_overt_start = ConvoScreen:new {
	id = "greet_member_start_overt",
	leftDialog = "@conversation/faction_recruiter_imperial:s_310",
	stopConversation = "false",
	options = {
		{"@conversation/faction_recruiter_imperial:s_352", "confirm_go_covert"},
		{"@conversation/faction_recruiter_imperial:s_374", "leave_time_overt"},
		{"@conversation/faction_recruiter_imperial:s_386", "resign_overt"},
	}
}

imperial_recruiter_convotemplate:addScreen(imp_recruiter_member_overt_start);

imp_recruiter_neutral_start = ConvoScreen:new {
	id = "greet_neutral_start",
	leftDialog = "@conversation/faction_recruiter_imperial:s_414",
	stopConversation = "false",
	options = {
		
		{"@conversation/faction_recruiter_imperial:s_428", "join_military"},
	}
}

imperial_recruiter_convotemplate:addScreen(imp_recruiter_neutral_start);

imp_recruiter_onleave_start = ConvoScreen:new {
	id = "greet_onleave_start",
	leftDialog = "@conversation/faction_recruiter_imperial:s_80",
	stopConversation = "false",
	options = {
		
		{"@conversation/faction_recruiter_imperial:s_294", "resume_duties"},
	}
}

imperial_recruiter_convotemplate:addScreen(imp_recruiter_onleave_start);

--join military
imp_recruiter_join_military = ConvoScreen:new {
	id = "join_military",
	leftDialog = "@conversation/faction_recruiter_imperial:s_432",
	stopConversation = "false",
	options = {
		{"@conversation/faction_recruiter_imperial:s_434", "accept_join"},
		{"@conversation/faction_recruiter_imperial:s_440", "think_more"},
	}
}

imperial_recruiter_convotemplate:addScreen(imp_recruiter_join_military);
--

--accept_join
imp_recruiter_accept_join = ConvoScreen:new {
	id = "accept_join",
	leftDialog = "@conversation/faction_recruiter_imperial:s_436",
	stopConversation = "false",
	options = {
		{"@conversation/faction_recruiter_imperial:s_438", "accepted_join"},
	}
}

imperial_recruiter_convotemplate:addScreen(imp_recruiter_accept_join);
---

--accepted_join
imp_recruiter_accepted_join = ConvoScreen:new {
	id = "accepted_join",
	leftDialog = "@conversation/faction_recruiter_imperial:s_436",
	stopConversation = "true",
	options = {
	}
}

imperial_recruiter_convotemplate:addScreen(imp_recruiter_accepted_join);
--


--think_more
imp_recruiter_think_more = ConvoScreen:new {
	id = "think_more",
	leftDialog = "@conversation/faction_recruiter_imperial:s_442",
	stopConversation = "true",
	options = {		
	}
}

imperial_recruiter_convotemplate:addScreen(imp_recruiter_think_more);
-----

-- confirm_go_overt
imp_recruiter_confirm_go_overt = ConvoScreen:new {
	id = "confirm_go_overt",
	leftDialog = "@conversation/faction_recruiter_imperial:s_364",
	stopConversation = "false",
	options = {
		{"@conversation/faction_recruiter_imperial:s_366", "accepted_go_overt"},
		{"@conversation/faction_recruiter_imperial:s_370", "greet_member_start_overt"}
	}
}

imperial_recruiter_convotemplate:addScreen(imp_recruiter_confirm_go_overt);


-- confirm_go_covert
imp_recruiter_confirm_go_covert = ConvoScreen:new {
	id = "confirm_go_covert",
	leftDialog = "@conversation/faction_recruiter_imperial:s_354",
	stopConversation = "false",
	options = {
		{"@conversation/faction_recruiter_imperial:s_356", "accepted_go_covert"},
		{"@conversation/faction_recruiter_imperial:s_360", "greet_member_start_covert"}
	}
}

imperial_recruiter_convotemplate:addScreen(imp_recruiter_confirm_go_covert);

--accepted_go_overt
imp_recruiter_accepted_go_overt = ConvoScreen:new {
	id = "accepted_go_overt",
	leftDialog = "@conversation/faction_recruiter_imperial:s_368",
	stopConversation = "true",
	options = {
	}
}

imperial_recruiter_convotemplate:addScreen(imp_recruiter_accepted_go_overt);

--accepted_go_covert
imp_recruiter_accepted_go_covert = ConvoScreen:new {
	id = "accepted_go_covert",
	leftDialog = "@conversation/faction_recruiter_imperial:s_358",
	stopConversation = "true",
	options = {
	}
}

imperial_recruiter_convotemplate:addScreen(imp_recruiter_accepted_go_covert);
---

--leave_time
imp_recruiter_leave_time_covert = ConvoScreen:new {
	id = "leave_time_covert",
	leftDialog = "@conversation/faction_recruiter_imperial:s_376",
	stopConversation = "false",
	options = {
		{"@conversation/faction_recruiter_imperial:s_378", "accepted_go_on_leave"},
		{"@conversation/faction_recruiter_imperial:s_382", "greet_member_start_covert"}
	}
}

imperial_recruiter_convotemplate:addScreen(imp_recruiter_leave_time_covert);

imp_recruiter_leave_time_overt = ConvoScreen:new {
	id = "leave_time_overt",
	leftDialog = "@conversation/faction_recruiter_imperial:s_376",
	stopConversation = "false",
	options = {
		{"@conversation/faction_recruiter_imperial:s_378", "accepted_go_on_leave"},
		{"@conversation/faction_recruiter_imperial:s_382", "greet_member_start_overt"}
	}
}

imperial_recruiter_convotemplate:addScreen(imp_recruiter_leave_time_overt);
--

-- accepted_go_on_leave

imp_recruiter_accepted_go_on_leave = ConvoScreen:new {
	id = "accepted_go_on_leave",
	leftDialog = "@conversation/faction_recruiter_imperial:s_380",
	stopConversation = "true",
	options = {
	}
}

imperial_recruiter_convotemplate:addScreen(imp_recruiter_accepted_go_on_leave);
---


--resign
imp_recruiter_leave_resign_covert = ConvoScreen:new {
	id = "resign_covert",
	leftDialog = "@conversation/faction_recruiter_imperial:s_388",
	stopConversation = "false",
	options = {
		{"@conversation/faction_recruiter_imperial:s_390", "accepted_resign"},
		{"@conversation/faction_recruiter_imperial:s_394", "greet_member_start_covert"}
	}
}

imperial_recruiter_convotemplate:addScreen(imp_recruiter_leave_resign_covert);

imp_recruiter_leave_resign_overt = ConvoScreen:new {
	id = "resign_overt",
	leftDialog = "@conversation/faction_recruiter_imperial:s_388",
	stopConversation = "false",
	options = {
		{"@conversation/faction_recruiter_imperial:s_390", "accepted_resign"},
		{"@conversation/faction_recruiter_imperial:s_394", "greet_member_start_overt"}
	}
}

imperial_recruiter_convotemplate:addScreen(imp_recruiter_leave_resign_overt);

--accepted_resign
imp_recruiter_accepted_resign = ConvoScreen:new {
	id = "accepted_resign",
	leftDialog = "@conversation/faction_recruiter_imperial:s_392",
	stopConversation = "true",
	options = {
	}
}

imperial_recruiter_convotemplate:addScreen(imp_recruiter_accepted_resign);
--
-------------------------------------------
--resume_duties
imp_recruiter_resume_duties = ConvoScreen:new {
	id = "resume_duties",
	leftDialog = "@conversation/faction_recruiter_imperial:s_296",
	stopConversation = "false",
	options = {
		{"@conversation/faction_recruiter_imperial:s_298", "accepted_resume_duties"},
		{"@conversation/faction_recruiter_imperial:s_302", "greet_onleave_start"}
	}
}

imperial_recruiter_convotemplate:addScreen(imp_recruiter_resume_duties);

--accept_resume_duties
imp_recruiter_accepted_resume_duties = ConvoScreen:new {
	id = "accepted_resume_duties",
	leftDialog = "@conversation/faction_recruiter_imperial:s_300",
	stopConversation = "true",
	options = {
	}
}

imperial_recruiter_convotemplate:addScreen(imp_recruiter_accepted_resume_duties);

--confirm_promotion
imp_recruiter_confirm_promotion = ConvoScreen:new {
id = "confirm_promotion",
	leftDialog = "@conversation/faction_recruiter_imperial:s_314",
	stopConversation = "false",
	options = {
		{"@conversation/faction_recruiter_imperial:s_93", "accepted_promotion"}
		--{"@conversation/faction_recruiter_imperial:s_320", ""}
	}
}

imperial_recruiter_convotemplate:addScreen(imp_recruiter_confirm_promotion);

--accepted_promotion
imp_recruiter_accepted_promotion = ConvoScreen:new {
	id = "accepted_promotion",
	leftDialog = "@conversation/faction_recruiter_imperial:s_318",
	stopConversation = "true",
	options = {
	}
}

imperial_recruiter_convotemplate:addScreen(imp_recruiter_accepted_promotion);

--not enough points
imp_recruiter_not_enough_points = ConvoScreen:new {
	id = "not_enough_points",
	leftDialog = "@faction_recruiter:not_enough_for_promotion",
	stopConversation = "true",
	options = {
	}
}

imperial_recruiter_convotemplate:addScreen(imp_recruiter_not_enough_points);

--confirm_bribe
imp_recruiter_confirm_bribe = ConvoScreen:new {
	id = "confirm_bribe",
	leftDialog = "@conversation/faction_recruiter_imperial:s_400",
	stopConversation = "false",
	options = {
		{"@conversation/faction_recruiter_imperial:s_402", "accepted_bribe_20k"}
	}
}

imperial_recruiter_convotemplate:addScreen(imp_recruiter_confirm_bribe);

--accepted_bribe_20k
imp_recruiter_accepted_bribe_20k = ConvoScreen:new {
	id = "accepted_bribe_20k",
	leftDialog = "@conversation/faction_recruiter_imperial:s_408",
	stopConversation = "true",
	options = {
	}
}

imperial_recruiter_convotemplate:addScreen(imp_recruiter_accepted_bribe_20k);

--accepted_bribe_100k
imp_recruiter_accepted_bribe_100k = ConvoScreen:new {
	id = "accepted_bribe_100k",
	leftDialog = "@conversation/faction_recruiter_imperial:s_408",
	stopConversation = "true",
	options = {
	}
}

imperial_recruiter_convotemplate:addScreen(imp_recruiter_accepted_bribe_100k);


addConversationTemplate("imperial_recruiter_convotemplate", imperial_recruiter_convotemplate);
