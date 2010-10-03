/*
 *	server/zone/objects/player/sui/listbox/SuiListBox.cpp generated by engine3 IDL compiler 0.60
 */

#include "SuiListBox.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/player/PlayerCreature.h"


// Imported class dependencies

#include "system/lang/Time.h"

#include "engine/util/Quaternion.h"

#include "server/zone/objects/player/TradeContainer.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/tangible/tool/CraftingTool.h"

#include "server/zone/objects/player/events/PlayerDisconnectEvent.h"

#include "server/zone/objects/tangible/tool/SurveyTool.h"

#include "system/util/VectorMap.h"

#include "server/zone/objects/player/badges/Badges.h"

#include "system/util/Vector.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/ZoneClientSession.h"

#include "server/zone/objects/player/events/PlayerRecoveryEvent.h"

#include "server/zone/ZoneProcessServerImplementation.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/templates/SharedObjectTemplate.h"

#include "system/util/SortedVector.h"

#include "engine/core/ObjectUpdateToDatabaseTask.h"

#include "server/zone/objects/scene/variables/PendingTasksMap.h"

#include "server/zone/objects/scene/variables/StringId.h"

/*
 *	SuiListBoxStub
 */

SuiListBox::SuiListBox(PlayerCreature* player, unsigned int windowType, unsigned int listBoxType) : SuiBox(DummyConstructorParameter::instance()) {
	SuiListBoxImplementation* _implementation = new SuiListBoxImplementation(player, windowType, listBoxType);
	ManagedObject::_setImplementation(_implementation);
	_implementation->_setStub(this);
}

SuiListBox::SuiListBox(DummyConstructorParameter* param) : SuiBox(param) {
}

SuiListBox::~SuiListBox() {
}


void SuiListBox::init() {
	SuiListBoxImplementation* _implementation = (SuiListBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		_implementation->init();
}

void SuiListBox::addMenuItem(const String& name, unsigned long long objectID) {
	SuiListBoxImplementation* _implementation = (SuiListBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addAsciiParameter(name);
		method.addUnsignedLongParameter(objectID);

		method.executeWithVoidReturn();
	} else
		_implementation->addMenuItem(name, objectID);
}

String SuiListBox::getMenuItemName(int index) {
	SuiListBoxImplementation* _implementation = (SuiListBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addSignedIntParameter(index);

		method.executeWithAsciiReturn(_return_getMenuItemName);
		return _return_getMenuItemName;
	} else
		return _implementation->getMenuItemName(index);
}

void SuiListBox::removeAllMenuItems() {
	SuiListBoxImplementation* _implementation = (SuiListBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		method.executeWithVoidReturn();
	} else
		_implementation->removeAllMenuItems();
}

unsigned long long SuiListBox::getMenuObjectID(unsigned int idx) {
	SuiListBoxImplementation* _implementation = (SuiListBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addUnsignedIntParameter(idx);

		return method.executeWithUnsignedLongReturn();
	} else
		return _implementation->getMenuObjectID(idx);
}

int SuiListBox::getMenuSize() {
	SuiListBoxImplementation* _implementation = (SuiListBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getMenuSize();
}

BaseMessage* SuiListBox::generateMessage() {
	SuiListBoxImplementation* _implementation = (SuiListBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		return (BaseMessage*) method.executeWithObjectReturn();
	} else
		return _implementation->generateMessage();
}

void SuiListBox::setNextBox(unsigned int boxID) {
	SuiListBoxImplementation* _implementation = (SuiListBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addUnsignedIntParameter(boxID);

		method.executeWithVoidReturn();
	} else
		_implementation->setNextBox(boxID);
}

void SuiListBox::setPreviousBox(unsigned int boxID) {
	SuiListBoxImplementation* _implementation = (SuiListBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addUnsignedIntParameter(boxID);

		method.executeWithVoidReturn();
	} else
		_implementation->setPreviousBox(boxID);
}

unsigned long long SuiListBox::getNextBox() {
	SuiListBoxImplementation* _implementation = (SuiListBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);

		return method.executeWithUnsignedLongReturn();
	} else
		return _implementation->getNextBox();
}

unsigned long long SuiListBox::getPreviousBox() {
	SuiListBoxImplementation* _implementation = (SuiListBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);

		return method.executeWithUnsignedLongReturn();
	} else
		return _implementation->getPreviousBox();
}

bool SuiListBox::isListBox() {
	SuiListBoxImplementation* _implementation = (SuiListBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isListBox();
}

DistributedObjectServant* SuiListBox::_getImplementation() {
	return getForUpdate();}

void SuiListBox::_setImplementation(DistributedObjectServant* servant) {
	setObject((ManagedObjectImplementation*) servant);}

/*
 *	SuiListBoxImplementation
 */

SuiListBoxImplementation::SuiListBoxImplementation(DummyConstructorParameter* param) : SuiBoxImplementation(param) {
	_initializeImplementation();
}


SuiListBoxImplementation::~SuiListBoxImplementation() {
}


void SuiListBoxImplementation::finalize() {
}

void SuiListBoxImplementation::_initializeImplementation() {
	_setClassHelper(SuiListBoxHelper::instance());

	_serializationHelperMethod();
}

void SuiListBoxImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (SuiListBox*) stub;
	SuiBoxImplementation::_setStub(stub);
}

DistributedObjectStub* SuiListBoxImplementation::_getStub() {
	return _this;
}

SuiListBoxImplementation::operator const SuiListBox*() {
	return _this;
}

TransactionalObject* SuiListBoxImplementation::clone() {
	return (TransactionalObject*) new SuiListBoxImplementation(*this);
}


void SuiListBoxImplementation::lock(bool doLock) {
}

void SuiListBoxImplementation::lock(ManagedObject* obj) {
}

void SuiListBoxImplementation::rlock(bool doLock) {
}

void SuiListBoxImplementation::wlock(bool doLock) {
}

void SuiListBoxImplementation::wlock(ManagedObject* obj) {
}

void SuiListBoxImplementation::unlock(bool doLock) {
}

void SuiListBoxImplementation::runlock(bool doLock) {
}

void SuiListBoxImplementation::_serializationHelperMethod() {
	SuiBoxImplementation::_serializationHelperMethod();

	_setClassName("SuiListBox");

	addSerializableVariable("menuItems", &menuItems);
	addSerializableVariable("type", &type);
	addSerializableVariable("next", &next);
	addSerializableVariable("previous", &previous);
}

SuiListBoxImplementation::SuiListBoxImplementation(PlayerCreature* player, unsigned int windowType, unsigned int listBoxType) : SuiBoxImplementation(player, windowType, SuiBox::LISTBOX) {
	_initializeImplementation();
	// server/zone/objects/player/sui/listbox/SuiListBox.idl(73):  		type = listBoxType;
	type = listBoxType;
	// server/zone/objects/player/sui/listbox/SuiListBox.idl(75):  		init();
	init();
}

void SuiListBoxImplementation::init() {
	// server/zone/objects/player/sui/listbox/SuiListBox.idl(79):  		next = 0;
	next = 0;
	// server/zone/objects/player/sui/listbox/SuiListBox.idl(80):  		previous = 0;
	previous = 0;
}

void SuiListBoxImplementation::addMenuItem(const String& name, unsigned long long objectID) {
	ManagedReference<SuiListBoxMenuItem*> _ref0;
	// server/zone/objects/player/sui/listbox/SuiListBox.idl(87):  		SuiListBoxMenuItem item = new SuiListBoxMenuItem(name, objectID);
	SuiListBoxMenuItem* item = _ref0 = new SuiListBoxMenuItem(name, objectID);
	// server/zone/objects/player/sui/listbox/SuiListBox.idl(88):  		menuItems.add(item);
	(&menuItems)->add(item);
}

String SuiListBoxImplementation::getMenuItemName(int index) {
	// server/zone/objects/player/sui/listbox/SuiListBox.idl(92):  		SuiListBoxMenuItem menuItem = menuItems.get(index);
	SuiListBoxMenuItem* menuItem = (&menuItems)->get(index);
	// server/zone/objects/player/sui/listbox/SuiListBox.idl(94):  		return menuItem.getOptionName();
	return menuItem->getOptionName();
}

void SuiListBoxImplementation::removeAllMenuItems() {
	// server/zone/objects/player/sui/listbox/SuiListBox.idl(102):  		menuItems.removeAll();
	(&menuItems)->removeAll();
}

unsigned long long SuiListBoxImplementation::getMenuObjectID(unsigned int idx) {
	// server/zone/objects/player/sui/listbox/SuiListBox.idl(106):  		return 
	if (idx < (&menuItems)->size()){
	// server/zone/objects/player/sui/listbox/SuiListBox.idl(108):  			SuiListBoxMenuItem menuItem = menuItems.get(idx);
	SuiListBoxMenuItem* menuItem = (&menuItems)->get(idx);
	// server/zone/objects/player/sui/listbox/SuiListBox.idl(110):  		}
	if (menuItem != NULL)	// server/zone/objects/player/sui/listbox/SuiListBox.idl(111):  				return menuItem.getObjectID();
	return menuItem->getObjectID();
}
	// server/zone/objects/player/sui/listbox/SuiListBox.idl(114):  0;
	return 0;
}

int SuiListBoxImplementation::getMenuSize() {
	// server/zone/objects/player/sui/listbox/SuiListBox.idl(118):  		return menuItems.size();
	return (&menuItems)->size();
}

void SuiListBoxImplementation::setNextBox(unsigned int boxID) {
	// server/zone/objects/player/sui/listbox/SuiListBox.idl(124):  		next = boxID;
	next = boxID;
}

void SuiListBoxImplementation::setPreviousBox(unsigned int boxID) {
	// server/zone/objects/player/sui/listbox/SuiListBox.idl(128):  		previous = boxID;
	previous = boxID;
}

unsigned long long SuiListBoxImplementation::getNextBox() {
	// server/zone/objects/player/sui/listbox/SuiListBox.idl(132):  		return next;
	return next;
}

unsigned long long SuiListBoxImplementation::getPreviousBox() {
	// server/zone/objects/player/sui/listbox/SuiListBox.idl(136):  		return previous;
	return previous;
}

bool SuiListBoxImplementation::isListBox() {
	// server/zone/objects/player/sui/listbox/SuiListBox.idl(140):  		return true;
	return true;
}

/*
 *	SuiListBoxAdapter
 */

SuiListBoxAdapter::SuiListBoxAdapter(SuiListBoxImplementation* obj) : SuiBoxAdapter(obj) {
}

Packet* SuiListBoxAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		init();
		break;
	case 7:
		addMenuItem(inv->getAsciiParameter(_param0_addMenuItem__String_long_), inv->getUnsignedLongParameter());
		break;
	case 8:
		resp->insertAscii(getMenuItemName(inv->getSignedIntParameter()));
		break;
	case 9:
		removeAllMenuItems();
		break;
	case 10:
		resp->insertLong(getMenuObjectID(inv->getUnsignedIntParameter()));
		break;
	case 11:
		resp->insertSignedInt(getMenuSize());
		break;
	case 12:
		resp->insertLong(generateMessage()->_getObjectID());
		break;
	case 13:
		setNextBox(inv->getUnsignedIntParameter());
		break;
	case 14:
		setPreviousBox(inv->getUnsignedIntParameter());
		break;
	case 15:
		resp->insertLong(getNextBox());
		break;
	case 16:
		resp->insertLong(getPreviousBox());
		break;
	case 17:
		resp->insertBoolean(isListBox());
		break;
	default:
		return NULL;
	}

	return resp;
}

void SuiListBoxAdapter::init() {
	((SuiListBoxImplementation*) impl)->init();
}

void SuiListBoxAdapter::addMenuItem(const String& name, unsigned long long objectID) {
	((SuiListBoxImplementation*) impl)->addMenuItem(name, objectID);
}

String SuiListBoxAdapter::getMenuItemName(int index) {
	return ((SuiListBoxImplementation*) impl)->getMenuItemName(index);
}

void SuiListBoxAdapter::removeAllMenuItems() {
	((SuiListBoxImplementation*) impl)->removeAllMenuItems();
}

unsigned long long SuiListBoxAdapter::getMenuObjectID(unsigned int idx) {
	return ((SuiListBoxImplementation*) impl)->getMenuObjectID(idx);
}

int SuiListBoxAdapter::getMenuSize() {
	return ((SuiListBoxImplementation*) impl)->getMenuSize();
}

BaseMessage* SuiListBoxAdapter::generateMessage() {
	return ((SuiListBoxImplementation*) impl)->generateMessage();
}

void SuiListBoxAdapter::setNextBox(unsigned int boxID) {
	((SuiListBoxImplementation*) impl)->setNextBox(boxID);
}

void SuiListBoxAdapter::setPreviousBox(unsigned int boxID) {
	((SuiListBoxImplementation*) impl)->setPreviousBox(boxID);
}

unsigned long long SuiListBoxAdapter::getNextBox() {
	return ((SuiListBoxImplementation*) impl)->getNextBox();
}

unsigned long long SuiListBoxAdapter::getPreviousBox() {
	return ((SuiListBoxImplementation*) impl)->getPreviousBox();
}

bool SuiListBoxAdapter::isListBox() {
	return ((SuiListBoxImplementation*) impl)->isListBox();
}

/*
 *	SuiListBoxHelper
 */

SuiListBoxHelper* SuiListBoxHelper::staticInitializer = SuiListBoxHelper::instance();

SuiListBoxHelper::SuiListBoxHelper() {
	className = "SuiListBox";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void SuiListBoxHelper::finalizeHelper() {
	SuiListBoxHelper::finalize();
}

DistributedObject* SuiListBoxHelper::instantiateObject() {
	return new SuiListBox(DummyConstructorParameter::instance());
}

DistributedObjectServant* SuiListBoxHelper::instantiateServant() {
	return new SuiListBoxImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* SuiListBoxHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new SuiListBoxAdapter((SuiListBoxImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

