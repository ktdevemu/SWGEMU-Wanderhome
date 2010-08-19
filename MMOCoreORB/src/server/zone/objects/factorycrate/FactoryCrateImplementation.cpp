/*
 * FactoryCrateImplementation.cpp
 *
 *  Created on: 07/25/2010
 *      Author: Kyle
 */

#include "FactoryCrate.h"
#include "server/zone/packets/factory/FactoryCrateObjectMessage3.h"
#include "server/zone/packets/factory/FactoryCrateObjectMessage6.h"
#include "server/zone/packets/factory/FactoryCrateObjectDeltaMessage3.h"
#include "server/zone/objects/player/PlayerCreature.h"
#include "server/zone/managers/object/ObjectManager.h"
#include "server/zone/packets/scene/SceneObjectCreateMessage.h"
#include "server/zone/packets/scene/SceneObjectDestroyMessage.h"
#include "server/zone/packets/scene/SceneObjectCloseMessage.h"
#include "server/zone/packets/scene/UpdateContainmentMessage.h"
#include "server/zone/packets/scene/AttributeListMessage.h"

void FactoryCrateImplementation::initializeTransientMembers() {
	TangibleObjectImplementation::initializeTransientMembers();

	setLoggingName("FactoryCrate");

	setOptionsBitmask(0x2100);
}

void FactoryCrateImplementation::loadTemplateData(SharedObjectTemplate* templateData) {
	TangibleObjectImplementation::loadTemplateData(templateData);
}

void FactoryCrateImplementation::sendTo(SceneObject* player, bool doClose) {
	if (isStaticObject())
		return;


	if (getParent() == NULL)
		return;

	// Scene Create
	BaseMessage* create = new SceneObjectCreateMessage(_this);
	player->sendMessage(create);

	if (parent != NULL) {
		BaseMessage* link = new UpdateContainmentMessage(getObjectID(), getParent()->getObjectID(), 0xFFFFFFFF);
		player->sendMessage(link);
	}

	sendBaselinesTo(player);

	sendSlottedObjectsTo(player);
	sendContainerObjectsTo(player);

	if(doClose) {
		BaseMessage* msg = new SceneObjectCloseMessage(_this);
		player->sendMessage(msg);
	}

}

void FactoryCrateImplementation::sendBaselinesTo(SceneObject* player) {
	/*StringBuffer msg;
	msg << "sending cell number " << cellNumber << " baselines";
	info(msg.toString(), true);*/

	BaseMessage* fctyMsg3 = new FactoryCrateObjectMessage3(_this);
	player->sendMessage(fctyMsg3);

	BaseMessage* fctyMsg6 = new FactoryCrateObjectMessage6(_this);
	player->sendMessage(fctyMsg6);

}

void FactoryCrateImplementation::fillAttributeList(AttributeListMessage* alm, PlayerCreature* object) {

	alm->insertAttribute("volume", volume);

	TangibleObject* prototype = (TangibleObject*) getContainerObject(0);

	if(prototype == NULL || !prototype->isTangibleObject())
		return;

	if (prototype->getCraftersName() != "") {
		alm->insertAttribute("crafter", prototype->getCraftersName());
	}

	if (prototype->getCraftersSerial() != "") {
		alm->insertAttribute("serial_number", prototype->getCraftersSerial());
	}

	alm->insertAttribute("factory_count", getUseCount());

	alm->insertAttribute("factory_attribs", "\\#pcontrast2 --------------");

	StringBuffer type;
	type << "@" << prototype->getObjectNameStringIdFile() << ":"
			<< prototype->getObjectNameStringIdName();

	alm->insertAttribute("object_type", "@got_n:component");
	alm->insertAttribute("original_name", type);

	if(prototype != NULL)
		prototype->fillAttributeList(alm, object);
}

void FactoryCrateImplementation::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player) {
	TangibleObjectImplementation::fillObjectMenuResponse(menuResponse, player);
}

int FactoryCrateImplementation::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {

	switch (selectedID) {

	case 77:

		break;

	default:
		TangibleObjectImplementation::handleObjectMenuSelect(player, selectedID);
	}

	return 0;
}

TangibleObject* FactoryCrateImplementation::getPrototype() {
	TangibleObject* prototype = (TangibleObject*) getContainerObject(0);

	if(prototype == NULL || !prototype->isTangibleObject()) {
		error("getPrototype has a NULL or non-tangible item");
		return NULL;
	}
	return prototype;
}

String FactoryCrateImplementation::getCraftersName() {

	TangibleObject* prototype = getPrototype();

	if(prototype == NULL || !prototype->isTangibleObject()) {
		error("getCraftersName has a NULL or non-tangible item");
		return "";
	}

	return prototype->getCraftersName();
}

String FactoryCrateImplementation::getCraftersSerial() {

	TangibleObject* prototype = getPrototype();

	if(prototype == NULL || !prototype->isTangibleObject()) {
		error("getCraftersSerial has a NULL or non-tangible item");
		return "";
	}

	return prototype->getCraftersSerial();
}

bool FactoryCrateImplementation::extractObjectToParent(int count) {

	TangibleObject* prototype = getPrototype();

	if(prototype == NULL || !prototype->isTangibleObject()) {
		error("extractObject has a NULL or non-tangible item");
		return false;
	}

	ObjectManager* objectManager = ObjectManager::instance();

	TangibleObject* protoclone = (TangibleObject*) objectManager->cloneObject(prototype);

	if(protoclone != NULL) {
		protoclone->setParent(NULL);
		protoclone->setOptionsBitmask(0x2100);
		protoclone->setUseCount(count, false);

		parent->addObject(protoclone, -1, true);
		parent->broadcastObject(protoclone, true);

		setUseCount(getUseCount() - count);
		return true;
	}
	return false;
}

TangibleObject* FactoryCrateImplementation::extractObject(int count) {

	TangibleObject* prototype = getPrototype();

	if(prototype == NULL || !prototype->isTangibleObject()) {
		error("extractObject has a NULL or non-tangible item");
		return false;
	}

	ObjectManager* objectManager = ObjectManager::instance();

	TangibleObject* protoclone = (TangibleObject*) objectManager->cloneObject(prototype);

	if(protoclone != NULL) {
		protoclone->setParent(NULL);
		protoclone->setOptionsBitmask(0x2100);
		protoclone->setUseCount(count, false);

		parent->addObject(protoclone, -1, true);

		setUseCount(getUseCount() - count, true);
		return protoclone;
	}
	return NULL;
}

void FactoryCrateImplementation::split(int newStackSize) {

	ObjectManager* objectManager = ObjectManager::instance();

	ManagedReference<FactoryCrate*> newCrate = (FactoryCrate*) objectManager->cloneObject(_this);

	if(parent == NULL || newCrate == NULL)
		return;

	newCrate->setUseCount(newStackSize, false);
	setUseCount(getUseCount() - newStackSize, true);

	parent->addObject(newCrate, -1, true);
	parent->broadcastObject(newCrate, true);

	newCrate->updateToDatabase();
   	updateToDatabase();
}

void FactoryCrateImplementation::setUseCount(uint32 newUseCount, bool notifyClient) {
	if (useCount == newUseCount)
		return;

	useCount = newUseCount;

	if (useCount < 1) {
		if (parent != NULL) {
			parent->removeObject(_this, true);
		}

		broadcastDestroy(_this, true);

		destroyObjectFromDatabase(true);

		return;
	}

	if (!notifyClient)
		return;

	FactoryCrateObjectDeltaMessage3* dfcty3 = new FactoryCrateObjectDeltaMessage3(_this);
	dfcty3->setQuantity(newUseCount);
	dfcty3->close();

	broadcastMessage(dfcty3, true);
}
