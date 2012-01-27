/*
 * LuaCreatureObject.cpp
 *
 *  Created on: 31/08/2009
 *      Author: victor
 */

#include "LuaCreatureObject.h"
#include "CreatureObject.h"
#include "server/zone/objects/cell/CellObject.h"
#include "server/zone/objects/player/sessions/ConversationSession.h"
#include "server/zone/ZoneServer.h"
#include "server/zone/objects/group/GroupObject.h"
#include "server/zone/packets/chat/ChatSystemMessage.h"

const char LuaCreatureObject::className[] = "LuaCreatureObject";

Luna<LuaCreatureObject>::RegType LuaCreatureObject::Register[] = {
		{ "_setObject", &LuaCreatureObject::_setObject },
		{ "_getObject", &LuaCreatureObject::_getObject },
		{ "getBankCredits", &LuaCreatureObject::getBankCredits },
		{ "setBankCredits", &LuaCreatureObject::setBankCredits },
		{ "sendSystemMessage", &LuaCreatureObject::sendSystemMessage },
		{ "sendGroupMessage", &LuaCreatureObject::sendGroupMessage },
		{ "playMusicMessage", &LuaCreatureObject::playMusicMessage },
		{ "sendNewbieTutorialRequest", &LuaCreatureObject::sendNewbieTutorialRequest },
		{ "hasScreenPlayState", &LuaCreatureObject::hasScreenPlayState },
		{ "setScreenPlayState", &LuaCreatureObject::setScreenPlayState },
		{ "getScreenPlayState", &LuaCreatureObject::getScreenPlayState },
		{ "playEffect", &LuaCreatureObject::playEffect },
		{ "sendNewbieTutorialEnableHudElement", &LuaCreatureObject::sendNewbieTutorialEnableHudElement },
		{ "getInCellNumber", &LuaCreatureObject::getInCellNumber },
		{ "sendOpenHolocronToPageMessage", &LuaCreatureObject::sendOpenHolocronToPageMessage },
		{ "inflictDamage", &LuaCreatureObject::inflictDamage },
		{ "setHAM", &LuaCreatureObject::setHAM },
		{ "getHAM", &LuaCreatureObject::getHAM },
		{ "getMaxHAM", &LuaCreatureObject::getMaxHAM },
		{ "getTargetID", &LuaCreatureObject::getTargetID },
		{ "clearCombatState", &LuaCreatureObject::clearCombatState },
		{ "getParent", &LuaSceneObject::getParent },
		{ "getZoneName", &LuaSceneObject::getZoneName },
		{ "getObjectID", &LuaSceneObject::getObjectID },
		{ "getPositionX", &LuaSceneObject::getPositionX },
		{ "getPositionY", &LuaSceneObject::getPositionY },
		{ "getPositionZ", &LuaSceneObject::getPositionZ },
		{ "getParentID", &LuaSceneObject::getParentID },
		{ "isInRangeWithObject", &LuaSceneObject::isInRangeWithObject },
		{ "getDistanceTo", &LuaSceneObject::getDistanceTo },
		{ "getServerObjectCRC", &LuaSceneObject::getServerObjectCRC },
		{ "setState", &LuaCreatureObject::setState},
		{ "setPosture", &LuaCreatureObject::setPosture},
		{ "hasSkill", &LuaCreatureObject::hasSkill},
		{ "removeSkill", &LuaCreatureObject::removeSkill},
		{ "getConversationSession", &LuaCreatureObject::getConversationSession},
		{ "doAnimation", &LuaCreatureObject::doAnimation},
		{ "engageCombat", &LuaCreatureObject::engageCombat},
		{ "getPlayerObject", &LuaCreatureObject::getPlayerObject},
		{ "setCustomObjectName", &LuaSceneObject::setCustomObjectName},
		{ "getFaction", &LuaCreatureObject::getFaction},
		{ "setFaction", &LuaCreatureObject::setFaction},
		{ "isRebel", &LuaCreatureObject::isRebel},
		{ "isImperial", &LuaCreatureObject::isImperial},
		{ "isNeutral", &LuaCreatureObject::isNeutral},
		{ "teleport", &LuaCreatureObject::teleport},
		{ "getName", &LuaCreatureObject::getName},
		{ "isAiAgent", &LuaCreatureObject::isAiAgent},
		{ "setFactionRank", &LuaCreatureObject::setFactionRank},
		{ "getFactionRank", &LuaCreatureObject::getFactionRank},
		{ "getCashCredits", &LuaCreatureObject::getCashCredits},
		{ "subtractCashCredits", &LuaCreatureObject::subtractCashCredits},
		{ "addCashCredits", &LuaCreatureObject::addCashCredits},
		{ "removeScreenPlayState", &LuaCreatureObject::removeScreenPlayState},
		{ "isGrouped", &LuaCreatureObject::isGrouped},
		{ "getContainerObjectByTemplate", &LuaSceneObject::getContainerObjectByTemplate },
		{ "getGroupSize", &LuaCreatureObject::getGroupSize},
		{ "getGroupMember", &LuaCreatureObject::getGroupMember},
		{ "setOptionsBitmask", &LuaCreatureObject::setOptionsBitmask},
		{ "addDotState", &LuaCreatureObject::addDotState},
		{ 0, 0 }
};

LuaCreatureObject::LuaCreatureObject(lua_State *L) : LuaSceneObject(L) {
	realObject = static_cast<CreatureObject*>(lua_touserdata(L, 1));
}

LuaCreatureObject::~LuaCreatureObject(){
}

int LuaCreatureObject::_setObject(lua_State* L) {
	realObject = static_cast<CreatureObject*>(lua_touserdata(L, -1));

	return 0;
}

int LuaCreatureObject::getName(lua_State* L) {
	String text = realObject->getFirstName();
	lua_pushstring(L, text.toCharArray());
	return 1;
}

int LuaCreatureObject::_getObject(lua_State* L) {
	lua_pushlightuserdata(L, realObject.get());

	return 0;
}

int LuaCreatureObject::addDotState(lua_State* L) {
	//addDotState(unsigned long dotType, unsigned int strength, byte type, unsigned int duration, float potency, unsigned int defense)
	uint32 defense = lua_tointeger(L, -1);
	float potency = lua_tonumber(L, -2);
	uint32 duration = lua_tointeger(L, -3);
	byte type = lua_tointeger(L, -4);
	uint32 strength = lua_tointeger(L, -5);
	uint64 dotType = lua_tointeger(L, -6);

	realObject->addDotState(dotType, strength, type, duration, potency, defense);

	return 0;
}

int LuaCreatureObject::setState(lua_State* L) {
	uint32 state = (uint32) lua_tonumber(L, -1);

	realObject->setState(state, true);

	return 0;
}

int LuaCreatureObject::setPosture(lua_State* L) {
	uint32 posture = (uint32) lua_tonumber(L, -1);

	realObject->setPosture(posture, true);

	return 0;
}

int LuaCreatureObject::sendOpenHolocronToPageMessage(lua_State* L) {
	realObject->sendOpenHolocronToPageMessage();

	return 0;
}

int LuaCreatureObject::sendSystemMessage(lua_State* L) {
	String value = lua_tostring(L, -1);
	realObject->sendSystemMessage(value);

	return 0;
}

int LuaCreatureObject::sendGroupMessage(lua_State* L) {
	String value = lua_tostring(L, -1);

	if (realObject == NULL)
		return 0;

	if (!realObject->isGrouped()) {
		realObject->sendSystemMessage(value);
	} else {
		GroupObject* group = realObject->getGroup();

		if (group != NULL) {
			UnicodeString msg(value);
			group->broadcastMessage(new ChatSystemMessage(msg));
		}
	}

	return 0;
}

int LuaCreatureObject::setHAM(lua_State* L) {
	uint32 type = (uint32) lua_tonumber(L, -2);
	uint32 value = (uint32) lua_tonumber(L, -1);

	realObject->setHAM(type, value);

	return 0;
}

int LuaCreatureObject::playMusicMessage(lua_State *L) {
	String value = lua_tostring(L, -1);
	realObject->playMusicMessage(value);

	return 0;
}

int LuaCreatureObject::setBankCredits(lua_State *L) {
	uint32 credits = (uint32) lua_tonumber(L, -1);

	realObject->setBankCredits(credits);

	return 0;
}

int LuaCreatureObject::sendNewbieTutorialRequest(lua_State *L) {
	String value = lua_tostring(L, -1);
	realObject->sendNewbieTutorialRequest(value);

	return 0;
}

int LuaCreatureObject::hasScreenPlayState(lua_State *L) {
	String play = lua_tostring(L, -1);
	uint64 stateToCheck = lua_tointeger(L, -2);

	uint64 state = realObject->getScreenPlayState(play);

	if (state & stateToCheck)
		lua_pushnumber(L, 1);
	else
		lua_pushnumber(L, 0);

	return 1;
}

int LuaCreatureObject::getScreenPlayState(lua_State *L) {
	String play = lua_tostring(L, -1);
	uint64 state = realObject->getScreenPlayState(play);

	lua_pushinteger(L, state);

	return 1;
}

int LuaCreatureObject::sendNewbieTutorialEnableHudElement(lua_State* L) {
	String ui = lua_tostring(L, -2);
	int enable = lua_tonumber(L, -1);

	realObject->sendNewbieTutorialEnableHudElement(ui, enable);

	return 0;
}

int LuaCreatureObject::hasSkill(lua_State* L) {
	String value = lua_tostring(L, -1);

	bool check = realObject->hasSkill(value);

	lua_pushboolean(L, check);

	return 1;
}

int LuaCreatureObject::removeSkill(lua_State* L) {
	String value = lua_tostring(L, -1);

	realObject->removeSkill(value, true);
	return 0;
}

int LuaCreatureObject::getInCellNumber(lua_State* L) {
	SceneObject* parent = realObject->getParent();

	if (parent == NULL || !parent->isCellObject())
		lua_pushnumber(L, -1);
	else {
		int cellId = ((CellObject*)parent)->getCellNumber();

		lua_pushnumber(L, cellId);
	}

	return 1; // we return the number of vars pushed to the L stack
}

int LuaCreatureObject::setScreenPlayState(lua_State *L) {
	String play = lua_tostring(L, -1);
	uint64 stateToSet = lua_tointeger(L, -2);

	realObject->setScreenPlayState(play, stateToSet | realObject->getScreenPlayState(play));

	return 0;
}

int LuaCreatureObject::removeScreenPlayState(lua_State* L) {
	String play = lua_tostring(L, -1);
	uint64 stateToClear = lua_tointeger(L, -2);

	uint64 stateMask = realObject->getScreenPlayState(play);

	if (stateMask & stateToClear)
		realObject->setScreenPlayState(play, stateMask - stateToClear);

	return 0;
}

int LuaCreatureObject::getTargetID(lua_State* L) {
	uint64 targetID = realObject->getTargetID();

	lua_pushinteger(L, targetID);

	return 1;
}

int LuaCreatureObject::clearCombatState(lua_State* L) {
	bool clearDef = lua_tonumber(L, -1);

	realObject->clearCombatState(clearDef);

	return 0;
}

int LuaCreatureObject::getHAM(lua_State* L) {
	int type = lua_tonumber(L, -1);

	int value = realObject->getHAM(type);

	lua_pushnumber(L, value);

	return 1;
}

int LuaCreatureObject::getMaxHAM(lua_State* L) {
	int type = lua_tonumber(L, -1);

	int value = realObject->getMaxHAM(type);

	lua_pushnumber(L, value);

	return 1;
}

int LuaCreatureObject::inflictDamage(lua_State* L) {
 //int inflictDamage(TangibleObject attacker, int damageType, int damage, boolean destroy, boolean notifyClient = true);
	int destroy = lua_tonumber(L, -1);
	int damage = lua_tonumber(L, -2);
	int damageType = lua_tonumber(L, -3);
	TangibleObject* attacker = (TangibleObject*) lua_touserdata(L, -4);

	realObject->inflictDamage(attacker, damageType, damage, destroy);

	return 0;
}

int LuaCreatureObject::teleport(lua_State* L) {
	int cellObjID = lua_tonumber(L, -1);
	int y = lua_tonumber(L, -2);
	int z = lua_tonumber(L, -3);
	int x = lua_tonumber(L, -4);



	realObject->teleport(x, z, y, cellObjID);

	return 0;
}

int LuaCreatureObject::playEffect(lua_State* L) {
	//public native void playEffect(final string file, final string aux);

	String aux = lua_tostring(L, -1);
	String file = lua_tostring(L, -2);

	realObject->playEffect(file, aux);

	return 0;
}

int LuaCreatureObject::getBankCredits(lua_State *L) {
	lua_pushnumber(L, realObject->getBankCredits());

	return 1; // we return the number of vars pushed to the L stack
}

int LuaCreatureObject::getConversationSession(lua_State* L) {
	ConversationSession* session = cast<ConversationSession*>(realObject->getActiveSession(SessionFacadeType::CONVERSATION));

	lua_pushlightuserdata(L, session);

	return 1;
}

int LuaCreatureObject::doAnimation(lua_State* L) {
	String animString = lua_tostring(L, -1);

	if (realObject != NULL)
		realObject->doAnimation(animString);

	return 0;
}

int LuaCreatureObject::engageCombat(lua_State* L) {
	CreatureObject* enemy = (CreatureObject*)lua_touserdata(L, -1);

	if (enemy != NULL)
		realObject->addDefender(enemy);

	return 0;
}

int LuaCreatureObject::getPlayerObject(lua_State* L) {
	lua_pushlightuserdata(L, realObject->getPlayerObject());

	return 1;
}

int LuaCreatureObject::getFaction(lua_State* L) {
	uint32 faction = realObject->getFaction();

	lua_pushinteger(L, faction);

	return 1;
}

int LuaCreatureObject::isRebel(lua_State* L) {
	lua_pushboolean(L, realObject->isRebel());

	return 1;
}

int LuaCreatureObject::isNeutral(lua_State* L) {
	lua_pushboolean(L, realObject->isNeutral());

	return 1;
}

int LuaCreatureObject::isImperial(lua_State* L) {
	lua_pushboolean(L, realObject->isImperial());

	return 1;
}

int LuaCreatureObject::setFaction(lua_State* L) {
	uint32 faction = lua_tointeger(L, -1);

	realObject->setFaction(faction);

	return 0;
}

int LuaCreatureObject::setFactionRank(lua_State* L) {
	int rank = lua_tointeger(L, -1);

	realObject->setFactionRank(rank);

	return 0;
}

int LuaCreatureObject::getFactionRank(lua_State* L) {
	lua_pushinteger(L, realObject->getFactionRank());

	return 1;
}

int LuaCreatureObject::getCashCredits(lua_State* L) {
	lua_pushinteger(L, realObject->getCashCredits());

	return 1;
}

int LuaCreatureObject::subtractCashCredits(lua_State* L) {
	realObject->subtractCashCredits(lua_tointeger(L, -1));

	return 0;
}

int LuaCreatureObject::addCashCredits(lua_State* L) {
	bool notifyClient = lua_toboolean(L, -1);
	int credits = lua_tonumber(L, -2);
	realObject->addCashCredits(credits, notifyClient);

	return 0;
}

int LuaCreatureObject::isAiAgent(lua_State* L) {
	bool val = realObject->isAiAgent();

	lua_pushboolean(L, val);

	return 1;
}

int LuaCreatureObject::isGrouped(lua_State* L) {
	bool val = realObject->isGrouped();
	lua_pushboolean(L, val);

	return 1;
}

int LuaCreatureObject::getGroupSize(lua_State* L) {
	if (!realObject->isGrouped()) {
		lua_pushnumber(L, 0);
	} else {
		GroupObject* group = realObject->getGroup();

		if (group != NULL) {
			lua_pushnumber(L, group->getGroupSize());
		} else {
			lua_pushnumber(L, 0);
		}

	}

	return 1;
}

int LuaCreatureObject::setOptionsBitmask(lua_State* L) {
	uint32 bitmask = lua_tointeger(L, -1);
	
	realObject->setOptionsBitmask(bitmask, true);
	
	return 0;
}

int LuaCreatureObject::getGroupMember(lua_State* L) {
	int i = lua_tonumber(L, -1);

	if (i < 0)
		i = 0;

	if (!realObject->isGrouped()) {
		realObject->info("LuaCreatureObject::getGroupMember Creature is not grouped.");
		lua_pushnil(L);
	} else {
		GroupObject* group = realObject->getGroup();
		if (group == NULL) {
			realObject->info("LuaCreatureObject::getGroupMember Group is NULL.");
			lua_pushnil(L);
		} else {
			if (group->getGroupSize() < i) {
				realObject->info("LuaCreatureObject::getGroupMember Index out of Bounds apprehended.");
				lua_pushnil(L);
			} else {
				SceneObject* creo = group->getGroupMember(i);
				if (creo == NULL) {
					realObject->info("LuaCreatureObject::getGroupMember GroupMember is NULL.");
					lua_pushnil(L);
				} else {
					lua_pushlightuserdata(L, creo);
				}
			}
		}
	}

	return 1;
}
