local ObjectManager = require("managers.object.object_manager")
local ScreenPlay = require("screenplays.screenplay")

local VillageJediManagerCommon = ScreenPlay:new {}

VILLAGE_JEDI_PROGRESSION_SCREEN_PLAY_STATE_STRING = "VillageJediProgression"
VILLAGE_JEDI_PROGRESSION_GLOWING = 1
VILLAGE_JEDI_PROGRESSION_HAS_CRYSTAL = 2
VILLAGE_JEDI_PROGRESSION_HAS_VILLAGE_ACCESS = 4
VILLAGE_JEDI_PROGRESSION_COMPLETED_VILLAGE = 8
VILLAGE_JEDI_PROGRESSION_DEFEATED_MELLIACHAE = 16

-- Set the jedi progression screen play state on the player.
-- @param pCreatureObject pointer to the creature object of the player.
-- @param state the state to set.
function VillageJediManagerCommon.setJediProgressionScreenPlayState(pCreatureObject, state)
	if (pCreatureObject == nil) then
		return
	end

	CreatureObject(pCreatureObject):setScreenPlayState(state, VILLAGE_JEDI_PROGRESSION_SCREEN_PLAY_STATE_STRING)
end

-- Check if the player has the jedi progression screen play state.
-- @param pCreatureObject pointer to the creature object of the player.
-- @param state the state to check if the player has.
-- @return true if the player has the state.
function VillageJediManagerCommon.hasJediProgressionScreenPlayState(pCreatureObject, state)
	if (pCreatureObject == nil) then
		return false
	end

	return CreatureObject(pCreatureObject):hasScreenPlayState(state, VILLAGE_JEDI_PROGRESSION_SCREEN_PLAY_STATE_STRING)
end

function VillageJediManagerCommon.unlockBranch(pPlayer, branch)
	if (pPlayer == nil) then
		return false
	end

	local questStatusTemp = CreatureObject(pPlayer):getScreenPlayState("VillageUnlockScreenPlay:" .. branch)
	if (questStatusTemp == 0) then
		CreatureObject(pPlayer):setScreenPlayState(1, "VillageUnlockScreenPlay:" .. branch)
	end

	local stringTO = "@quest/force_sensitive/utils:" .. branch

	local messageString = LuaStringIdChatParameter("@quest/force_sensitive/utils:branch_selected_unlock")
	messageString:setTO(stringTO)
	CreatureObject(pPlayer):sendSystemMessage(messageString:_getObject())
end

return VillageJediManagerCommon
