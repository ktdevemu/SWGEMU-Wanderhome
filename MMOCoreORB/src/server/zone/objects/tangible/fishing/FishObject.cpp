/*
 *	server/zone/objects/tangible/fishing/FishObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "FishObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/ZoneServer.h"

/*
 *	FishObjectStub
 */

FishObject::FishObject() : TangibleObject(DummyConstructorParameter::instance()) {
	_impl = new FishObjectImplementation();
	_impl->_setStub(this);
}

FishObject::FishObject(DummyConstructorParameter* param) : TangibleObject(param) {
}

FishObject::~FishObject() {
}


void FishObject::initializeTransientMembers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((FishObjectImplementation*) _impl)->initializeTransientMembers();
}

void FishObject::setAttributes(String& playerName, int planetID, String& timestamp, float fishLength) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addAsciiParameter(playerName);
		method.addSignedIntParameter(planetID);
		method.addAsciiParameter(timestamp);
		method.addFloatParameter(fishLength);

		method.executeWithVoidReturn();
	} else
		((FishObjectImplementation*) _impl)->setAttributes(playerName, planetID, timestamp, fishLength);
}

void FishObject::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(menuResponse);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((FishObjectImplementation*) _impl)->fillObjectMenuResponse(menuResponse, player);
}

int FishObject::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return ((FishObjectImplementation*) _impl)->handleObjectMenuSelect(player, selectedID);
}

void FishObject::fillAttributeList(AttributeListMessage* msg, PlayerCreature* object) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(msg);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		((FishObjectImplementation*) _impl)->fillAttributeList(msg, object);
}

void FishObject::filet(PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((FishObjectImplementation*) _impl)->filet(player);
}

/*
 *	FishObjectImplementation
 */

FishObjectImplementation::FishObjectImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}

FishObjectImplementation::~FishObjectImplementation() {
}


void FishObjectImplementation::finalize() {
}

void FishObjectImplementation::_initializeImplementation() {
	_setClassHelper(FishObjectHelper::instance());

	_serializationHelperMethod();
}

void FishObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (FishObject*) stub;
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* FishObjectImplementation::_getStub() {
	return _this;
}

FishObjectImplementation::operator const FishObject*() {
	return _this;
}

void FishObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void FishObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void FishObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void FishObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void FishObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void FishObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void FishObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void FishObjectImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("FishObject");

	addSerializableVariable("player", &player);
	addSerializableVariable("planet", &planet);
	addSerializableVariable("timeCaught", &timeCaught);
	addSerializableVariable("length", &length);
}

FishObjectImplementation::FishObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/fishing/FishObject.idl(64):  		Logger.setLoggingName("FishObject");
	Logger::setLoggingName("FishObject");
	// server/zone/objects/tangible/fishing/FishObject.idl(66):  		player = "";
	player = "";
	// server/zone/objects/tangible/fishing/FishObject.idl(67):  		planet = 0;
	planet = 0;
	// server/zone/objects/tangible/fishing/FishObject.idl(68):  		timeCaught = "";
	timeCaught = "";
	// server/zone/objects/tangible/fishing/FishObject.idl(69):  		length = 0.0;
	length = 0.0;
}

void FishObjectImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/fishing/FishObject.idl(73):  		super.initializeTransientMembers();
	TangibleObjectImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/fishing/FishObject.idl(75):  		Logger.setLoggingName("FishObject");
	Logger::setLoggingName("FishObject");
}

void FishObjectImplementation::setAttributes(String& playerName, int planetID, String& timestamp, float fishLength) {
	// server/zone/objects/tangible/fishing/FishObject.idl(80):  		player = playerName;
	player = playerName;
	// server/zone/objects/tangible/fishing/FishObject.idl(81):  		planet = planetID;
	planet = planetID;
	// server/zone/objects/tangible/fishing/FishObject.idl(82):  		timeCaught = timestamp;
	timeCaught = timestamp;
	// server/zone/objects/tangible/fishing/FishObject.idl(83):  		length = fishLength;
	length = fishLength;
}

/*
 *	FishObjectAdapter
 */

FishObjectAdapter::FishObjectAdapter(FishObjectImplementation* obj) : TangibleObjectAdapter(obj) {
}

Packet* FishObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		setAttributes(inv->getAsciiParameter(_param0_setAttributes__String_int_String_float_), inv->getSignedIntParameter(), inv->getAsciiParameter(_param2_setAttributes__String_int_String_float_), inv->getFloatParameter());
		break;
	case 8:
		fillObjectMenuResponse((ObjectMenuResponse*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter());
		break;
	case 9:
		resp->insertSignedInt(handleObjectMenuSelect((PlayerCreature*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	case 10:
		fillAttributeList((AttributeListMessage*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter());
		break;
	case 11:
		filet((PlayerCreature*) inv->getObjectParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void FishObjectAdapter::initializeTransientMembers() {
	((FishObjectImplementation*) impl)->initializeTransientMembers();
}

void FishObjectAdapter::setAttributes(String& playerName, int planetID, String& timestamp, float fishLength) {
	((FishObjectImplementation*) impl)->setAttributes(playerName, planetID, timestamp, fishLength);
}

void FishObjectAdapter::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player) {
	((FishObjectImplementation*) impl)->fillObjectMenuResponse(menuResponse, player);
}

int FishObjectAdapter::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	return ((FishObjectImplementation*) impl)->handleObjectMenuSelect(player, selectedID);
}

void FishObjectAdapter::fillAttributeList(AttributeListMessage* msg, PlayerCreature* object) {
	((FishObjectImplementation*) impl)->fillAttributeList(msg, object);
}

void FishObjectAdapter::filet(PlayerCreature* player) {
	((FishObjectImplementation*) impl)->filet(player);
}

/*
 *	FishObjectHelper
 */

FishObjectHelper* FishObjectHelper::staticInitializer = FishObjectHelper::instance();

FishObjectHelper::FishObjectHelper() {
	className = "FishObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void FishObjectHelper::finalizeHelper() {
	FishObjectHelper::finalize();
}

DistributedObject* FishObjectHelper::instantiateObject() {
	return new FishObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* FishObjectHelper::instantiateServant() {
	return new FishObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* FishObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new FishObjectAdapter((FishObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

