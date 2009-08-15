/*
 * PlayerCreatureImplementation.cpp
 *
 *  Created on: 18/07/2009
 *      Author: TheAnswer
 */

#include "PlayerCreature.h"

#include "server/zone/managers/object/ObjectManager.h"
#include "server/zone/packets/zone/unkByteFlag.h"
#include "server/zone/packets/zone/CmdStartScene.h"
#include "server/zone/packets/zone/ParametersMessage.h"
#include "server/zone/packets/object/CommandQueueRemove.h"

#include "server/chat/room/ChatRoom.h"

#include "events/PlayerDisconnectEvent.h"
#include "events/PlayerRecoveryEvent.h"

#include "server/zone/objects/creature/commands/QueueCommand.h"
#include "server/zone/objects/building/BuildingObject.h"

#include "server/zone/ZoneProcessServerImplementation.h"

#include "professions/SkillBox.h"

#include "PlayerObject.h"

PlayerCreatureImplementation::PlayerCreatureImplementation(LuaObject* templateData) :
	CreatureObjectImplementation(templateData) {

	setLoggingName("PlayerCreature");

	owner = NULL;
	nextAction = NULL;

	nextTip = NULL;

	firstIncapacitationTime = NULL;

	disconnectEvent = NULL;
	recoveryEvent = NULL;

	logoutTimeStamp = new Time();

	chatRooms = new SortedVector<ChatRoom*>();

	setOffline();
}

void PlayerCreatureImplementation::sendToOwner(bool doClose) {
	if (owner == NULL)
		return;

	owner->balancePacketCheckupTime();

	BaseMessage* byteFlag = new unkByteFlag();
	owner->sendMessage(byteFlag);

	BaseMessage* startScene = new CmdStartScene(_this);
	owner->sendMessage(startScene);

	BaseMessage* parameters = new ParametersMessage();
	owner->sendMessage(parameters);

	if (parent != NULL) {
		SceneObject* grandParent = getGrandParent();

		grandParent->sendTo(_this);
	} else
		sendTo(_this, doClose);

	owner->resetPacketCheckupTime();
}

void PlayerCreatureImplementation::notifyInsert(QuadTreeEntry* entry) {
	SceneObject* scno = (SceneObject*) (((SceneObjectImplementation*) entry)->_getStub());

	if (scno == _this)
		return;

	SceneObject* grandParent = getGrandParent();

	if (parent != NULL) {
		if (grandParent == scno) { // we already should have sent our grandParent to owner

			if (grandParent->isBuildingObject())
				((BuildingObject*)grandParent)->addNotifiedObject(_this);

			return;
		}
	}

	if (scno->getParent() != NULL) {
		//check the parent if its building
		//check if the building has me as notified
		//if it has me than send the object without the buio
		//if it hasnt me than dont send me and wait for the building to be sent
		//TODO: check if we need this for every object or only for buildings

		SceneObject* scnoGrandParent = scno->getGrandParent();

		if (scnoGrandParent->isBuildingObject()) {
			BuildingObject* building = (BuildingObject*)scnoGrandParent;

			if (!building->hasNotifiedObject(_this))
				return;
		} else // we wait for the Objects parent to get sent
			return;
	}

	if (scno->isBuildingObject())
		((BuildingObject*)scno)->addNotifiedObject(_this);

	scno->sendTo(_this, true);
}

void PlayerCreatureImplementation::notifyDissapear(QuadTreeEntry* entry) {
	SceneObject* scno = (SceneObject*) (((SceneObjectImplementation*) entry)->_getStub());

	if (scno == _this)
		return;

	if (scno->isBuildingObject())
		((BuildingObject*)scno)->removeNotifiedObject(_this);

	scno->sendDestroyTo(_this);
}

void PlayerCreatureImplementation::logout(bool doLock) {
	wlock(doLock);

	try {
		if (disconnectEvent == NULL) {
			info("creating disconnect event");

			disconnectEvent = new PlayerDisconnectEvent(_this);

			if (isLoggingOut()) {
				server->scheduleTask(disconnectEvent, 10);
			} else {
				server->scheduleTask(disconnectEvent, 1000);
				setLoggingOut();
			}
		}
	} catch (...) {
		error("unreported exception caught in PlayerCreatureImplementation::logout(boolean doLock)");
	}

	unlock(doLock);
}

void PlayerCreatureImplementation::doRecovery() {
	if (isLinkDead()) {
		if (logoutTimeStamp->isPast()) {
			info("unloading dead link player");

			unload();

			setOffline();

			if (owner != NULL)
				owner->closeConnection(false, true);

			return;
		} else {
			info("keeping dead linked player in game");
		}
	}

	activateRecovery();
}

void PlayerCreatureImplementation::activateRecovery() {
	if (recoveryEvent == NULL) {
		recoveryEvent = new PlayerRecoveryEvent(_this);

		server->scheduleTask(recoveryEvent, 3000);
	}
}

void PlayerCreatureImplementation::unload() {
	info("unloading player");

	if (zone != NULL) {

		if (isInQuadTree()) {
			removeFromZone(true);
		}

	}
}

void PlayerCreatureImplementation::disconnect(bool closeClient, bool doLock) {
	try {
		_this->wlock(doLock);

		if (!isOnline()) {
			_this->unlock(doLock);
			return;
		}

		if (/*isInCombat() && */!isLinkDead()) {
			info("link dead");

			setLinkDead();
		} else {
			info ("disconnecting player");

			unload();

			setOffline();
		}

		if (disconnectEvent != NULL)
			disconnectEvent = NULL;

		/*if (logoutEvent != NULL) {
			server->removeEvent(logoutEvent);
			delete logoutEvent;

			logoutEvent = NULL;
		}*/

		if (closeClient && owner != NULL)
			owner->closeConnection(false, true);

		owner = NULL;

		_this->unlock();
	} catch (...) {
		_this->unlock();
	}
}

String PlayerCreatureImplementation::getFirstName() {
	UnicodeString fullName = objectName->getCustomString();

    int idx = fullName.indexOf(' ');

    if (idx != -1) {
    	return fullName.subString(0, idx).toString();
    } else {
    	return fullName.toString();
    }
}

void PlayerCreatureImplementation::setLinkDead() {
	onlineStatus = LINKDEAD;

	logoutTimeStamp->updateToCurrentTime();
	logoutTimeStamp->addMiliTime(30000);

	PlayerObject* playerObject = (PlayerObject*) getSlottedObject("ghost");

	if (playerObject != NULL)
		playerObject->setCharacterBit(PlayerObjectImplementation::LD, true);

	activateRecovery();
}
