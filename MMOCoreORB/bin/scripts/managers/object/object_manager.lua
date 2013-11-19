Object = {}

-- for creation of new instances
function Object:new (o)
	o = o or { }
	setmetatable(o, self)
    self.__index = self
    return o
end

local ObjectManager = Object:new {}

-- Perform the supplied function with an ai agent created from the pointer.
-- @param pCreatureObject a pointer to a creature object that is an AiAgent.
-- @param performThisFunction a function that takes an ai agent as its argument.
-- @return whatever performThisFunction returns or nil if the pCreatureObject pointer is nil.
function ObjectManager.withCreatureAiAgent(pCreatureObject, performThisFunction)
	if pCreatureObject == nil then
		return nil
	end
	local aiAgent = LuaAiAgent(pCreatureObject)
	return performThisFunction(aiAgent)
end

-- Perform the supplied function with a scene object created from the pointer.
-- @param pSceneObject a pointer to a scene object.
-- @param performThisFunction a function that takes a scene object as its argument.
-- @return whatever performThisFunction returns or nil if the pSceneObject pointer is nil.
function ObjectManager.withSceneObject(pSceneObject, performThisFunction)
	if pSceneObject == nil then
		return nil
	end
	local sceneObject = LuaSceneObject(pSceneObject)
	return performThisFunction(sceneObject)
end

-- Perform the supplied function with a creature object created from the pointer.
-- @param pCreatureObject a pointer to a creature object.
-- @param performThisFunction a function that takes a creature object as its argument.
-- @return whatever performThisFunction returns or nil if the pCreatureObject pointer is nil.
function ObjectManager.withCreatureObject(pCreatureObject, performThisFunction)
	if pCreatureObject == nil then
		return nil
	end
	local creatureObject = LuaCreatureObject(pCreatureObject)
	return performThisFunction(creatureObject)
end

-- Perform the supplied function with a player object created from the pointer.
-- @param pPlayerObject a pointer to a player object.
-- @param performThisFunction a function that takes a player object as its argument.
-- @return whatever performThisFunction returns or nil if the pPlayerObject pointer is nil.
function ObjectManager.withPlayerObject(pPlayerObject, performThisFunction)
	if pPlayerObject == nil then
		return nil
	end
	local playerObject = LuaPlayerObject(pPlayerObject)
	return performThisFunction(playerObject)
end

-- Perform the supplied function with a city region created from the pointer.
-- @param pCityRegion a pointer to a city region.
-- @param performThisFunction a function that takes a city region as its argument.
-- @return whatever performThisFunction returns or nil if the pCityRegion pointer is nil.
function ObjectManager.withCityRegion(pCityRegion, performThisFunction)
	if pCityRegion == nil then
		return nil
	end
	local cityRegion = LuaCityRegion(pCityRegion)
	return performThisFunction(cityRegion)
end

-- Perform the supplied function with a player object fetched from the creature object pointer.
-- @param pCreatureObject a pointer to a creature object.
-- @param performThisFunction a function that takes a player object as its argument.
-- @return whatever performThisFunction returns or nil if the pCreatureObject pointer is nil or does not have a player object.
function ObjectManager.withCreaturePlayerObject(pCreatureObject, performThisFunction)
	return ObjectManager.withCreatureObject(pCreatureObject, function(creatureObject)
		return ObjectManager.withPlayerObject(creatureObject:getPlayerObject(), performThisFunction)
	end)
end

-- Perform the supplied function with a creature object and a player object fetched from the creature object pointer.
-- @param pCreatureObject a pointer to a creature object.
-- @param performThisFunction a function that takes a creature object and a player object as its argument.
-- @return whatever performThisFunction returns or nil if the pCreatureObject pointer is nil or does not have a player object.
function ObjectManager.withCreatureAndPlayerObject(pCreatureObject, performThisFunction)
	return ObjectManager.withCreatureObject(pCreatureObject, function(creatureObject)
		return ObjectManager.withPlayerObject(creatureObject:getPlayerObject(), function(playerObject)
			return performThisFunction(creatureObject, playerObject)
		end)
	end)
end

return ObjectManager
