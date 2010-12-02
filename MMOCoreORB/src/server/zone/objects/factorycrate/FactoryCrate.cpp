/*
 *	server/zone/objects/factorycrate/FactoryCrate.cpp generated by engine3 IDL compiler 0.60
 */

#include "FactoryCrate.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

/*
 *	FactoryCrateStub
 */

FactoryCrate::FactoryCrate() : TangibleObject(DummyConstructorParameter::instance()) {
	FactoryCrateImplementation* _implementation = new FactoryCrateImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

FactoryCrate::FactoryCrate(DummyConstructorParameter* param) : TangibleObject(param) {
}

FactoryCrate::~FactoryCrate() {
}


void FactoryCrate::loadTemplateData(SharedObjectTemplate* templateData) {
	FactoryCrateImplementation* _implementation = (FactoryCrateImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

void FactoryCrate::initializeTransientMembers() {
	FactoryCrateImplementation* _implementation = (FactoryCrateImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void FactoryCrate::sendBaselinesTo(SceneObject* player) {
	FactoryCrateImplementation* _implementation = (FactoryCrateImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendBaselinesTo(player);
}

void FactoryCrate::fillAttributeList(AttributeListMessage* msg, PlayerCreature* object) {
	FactoryCrateImplementation* _implementation = (FactoryCrateImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillAttributeList(msg, object);
}

void FactoryCrate::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player) {
	FactoryCrateImplementation* _implementation = (FactoryCrateImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillObjectMenuResponse(menuResponse, player);
}

int FactoryCrate::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	FactoryCrateImplementation* _implementation = (FactoryCrateImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->handleObjectMenuSelect(player, selectedID);
}

bool FactoryCrate::isFactoryCrate() {
	FactoryCrateImplementation* _implementation = (FactoryCrateImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isFactoryCrate();
}

void FactoryCrate::setUseCount(unsigned int newUseCount, bool notifyClient) {
	FactoryCrateImplementation* _implementation = (FactoryCrateImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addUnsignedIntParameter(newUseCount);
		method.addBooleanParameter(notifyClient);

		method.executeWithVoidReturn();
	} else
		_implementation->setUseCount(newUseCount, notifyClient);
}

TangibleObject* FactoryCrate::getPrototype() {
	FactoryCrateImplementation* _implementation = (FactoryCrateImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		return (TangibleObject*) method.executeWithObjectReturn();
	} else
		return _implementation->getPrototype();
}

String FactoryCrate::getCraftersName() {
	FactoryCrateImplementation* _implementation = (FactoryCrateImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		method.executeWithAsciiReturn(_return_getCraftersName);
		return _return_getCraftersName;
	} else
		return _implementation->getCraftersName();
}

String FactoryCrate::getCraftersSerial() {
	FactoryCrateImplementation* _implementation = (FactoryCrateImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		method.executeWithAsciiReturn(_return_getCraftersSerial);
		return _return_getCraftersSerial;
	} else
		return _implementation->getCraftersSerial();
}

bool FactoryCrate::extractObjectToParent() {
	FactoryCrateImplementation* _implementation = (FactoryCrateImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->extractObjectToParent();
}

TangibleObject* FactoryCrate::extractObject(int count) {
	FactoryCrateImplementation* _implementation = (FactoryCrateImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addSignedIntParameter(count);

		return (TangibleObject*) method.executeWithObjectReturn();
	} else
		return _implementation->extractObject(count);
}

void FactoryCrate::split(int newStackSize) {
	FactoryCrateImplementation* _implementation = (FactoryCrateImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addSignedIntParameter(newStackSize);

		method.executeWithVoidReturn();
	} else
		_implementation->split(newStackSize);
}

DistributedObjectServant* FactoryCrate::_getImplementation() {

	_updated = true;
	return _impl;
}

void FactoryCrate::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	FactoryCrateImplementation
 */

FactoryCrateImplementation::FactoryCrateImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}


FactoryCrateImplementation::~FactoryCrateImplementation() {
}


void FactoryCrateImplementation::finalize() {
}

void FactoryCrateImplementation::_initializeImplementation() {
	_setClassHelper(FactoryCrateHelper::instance());

	_serializationHelperMethod();
}

void FactoryCrateImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (FactoryCrate*) stub;
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* FactoryCrateImplementation::_getStub() {
	return _this;
}

FactoryCrateImplementation::operator const FactoryCrate*() {
	return _this;
}

void FactoryCrateImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void FactoryCrateImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void FactoryCrateImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void FactoryCrateImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void FactoryCrateImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void FactoryCrateImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void FactoryCrateImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void FactoryCrateImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("FactoryCrate");

}

FactoryCrateImplementation::FactoryCrateImplementation() {
	_initializeImplementation();
	// server/zone/objects/factorycrate/FactoryCrate.idl(63):  		Logger.setLoggingName("FactoryCrate");
	Logger::setLoggingName("FactoryCrate");
}

bool FactoryCrateImplementation::isFactoryCrate() {
	// server/zone/objects/factorycrate/FactoryCrate.idl(103):  		return true;
	return true;
}

/*
 *	FactoryCrateAdapter
 */

FactoryCrateAdapter::FactoryCrateAdapter(FactoryCrateImplementation* obj) : TangibleObjectAdapter(obj) {
}

Packet* FactoryCrateAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		sendBaselinesTo((SceneObject*) inv->getObjectParameter());
		break;
	case 8:
		resp->insertSignedInt(handleObjectMenuSelect((PlayerCreature*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	case 9:
		resp->insertBoolean(isFactoryCrate());
		break;
	case 10:
		setUseCount(inv->getUnsignedIntParameter(), inv->getBooleanParameter());
		break;
	case 11:
		resp->insertLong(getPrototype()->_getObjectID());
		break;
	case 12:
		resp->insertAscii(getCraftersName());
		break;
	case 13:
		resp->insertAscii(getCraftersSerial());
		break;
	case 14:
		resp->insertBoolean(extractObjectToParent());
		break;
	case 15:
		resp->insertLong(extractObject(inv->getSignedIntParameter())->_getObjectID());
		break;
	case 16:
		split(inv->getSignedIntParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void FactoryCrateAdapter::initializeTransientMembers() {
	((FactoryCrateImplementation*) impl)->initializeTransientMembers();
}

void FactoryCrateAdapter::sendBaselinesTo(SceneObject* player) {
	((FactoryCrateImplementation*) impl)->sendBaselinesTo(player);
}

int FactoryCrateAdapter::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	return ((FactoryCrateImplementation*) impl)->handleObjectMenuSelect(player, selectedID);
}

bool FactoryCrateAdapter::isFactoryCrate() {
	return ((FactoryCrateImplementation*) impl)->isFactoryCrate();
}

void FactoryCrateAdapter::setUseCount(unsigned int newUseCount, bool notifyClient) {
	((FactoryCrateImplementation*) impl)->setUseCount(newUseCount, notifyClient);
}

TangibleObject* FactoryCrateAdapter::getPrototype() {
	return ((FactoryCrateImplementation*) impl)->getPrototype();
}

String FactoryCrateAdapter::getCraftersName() {
	return ((FactoryCrateImplementation*) impl)->getCraftersName();
}

String FactoryCrateAdapter::getCraftersSerial() {
	return ((FactoryCrateImplementation*) impl)->getCraftersSerial();
}

bool FactoryCrateAdapter::extractObjectToParent() {
	return ((FactoryCrateImplementation*) impl)->extractObjectToParent();
}

TangibleObject* FactoryCrateAdapter::extractObject(int count) {
	return ((FactoryCrateImplementation*) impl)->extractObject(count);
}

void FactoryCrateAdapter::split(int newStackSize) {
	((FactoryCrateImplementation*) impl)->split(newStackSize);
}

/*
 *	FactoryCrateHelper
 */

FactoryCrateHelper* FactoryCrateHelper::staticInitializer = FactoryCrateHelper::instance();

FactoryCrateHelper::FactoryCrateHelper() {
	className = "FactoryCrate";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void FactoryCrateHelper::finalizeHelper() {
	FactoryCrateHelper::finalize();
}

DistributedObject* FactoryCrateHelper::instantiateObject() {
	return new FactoryCrate(DummyConstructorParameter::instance());
}

DistributedObjectServant* FactoryCrateHelper::instantiateServant() {
	return new FactoryCrateImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* FactoryCrateHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new FactoryCrateAdapter((FactoryCrateImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

