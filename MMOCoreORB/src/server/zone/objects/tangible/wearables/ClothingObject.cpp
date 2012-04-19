/*
 *	server/zone/objects/tangible/wearables/ClothingObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "ClothingObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/Zone.h"

/*
 *	ClothingObjectStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 6,};

ClothingObject::ClothingObject() : WearableObject(DummyConstructorParameter::instance()) {
	ClothingObjectImplementation* _implementation = new ClothingObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("ClothingObject");
}

ClothingObject::ClothingObject(DummyConstructorParameter* param) : WearableObject(param) {
	_setClassName("ClothingObject");
}

ClothingObject::~ClothingObject() {
}



void ClothingObject::initializeTransientMembers() {
	ClothingObjectImplementation* _implementation = static_cast<ClothingObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void ClothingObject::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	ClothingObjectImplementation* _implementation = static_cast<ClothingObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->updateCraftingValues(values, firstUpdate);
}

DistributedObjectServant* ClothingObject::_getImplementation() {

	_updated = true;
	return _impl;
}

void ClothingObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	ClothingObjectImplementation
 */

ClothingObjectImplementation::ClothingObjectImplementation(DummyConstructorParameter* param) : WearableObjectImplementation(param) {
	_initializeImplementation();
}


ClothingObjectImplementation::~ClothingObjectImplementation() {
}


void ClothingObjectImplementation::finalize() {
}

void ClothingObjectImplementation::_initializeImplementation() {
	_setClassHelper(ClothingObjectHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void ClothingObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<ClothingObject*>(stub);
	WearableObjectImplementation::_setStub(stub);
}

DistributedObjectStub* ClothingObjectImplementation::_getStub() {
	return _this;
}

ClothingObjectImplementation::operator const ClothingObject*() {
	return _this;
}

void ClothingObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void ClothingObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void ClothingObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void ClothingObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void ClothingObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void ClothingObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void ClothingObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void ClothingObjectImplementation::_serializationHelperMethod() {
	WearableObjectImplementation::_serializationHelperMethod();

	_setClassName("ClothingObject");

}

void ClothingObjectImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(ClothingObjectImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool ClothingObjectImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (WearableObjectImplementation::readObjectMember(stream, _name))
		return true;


	return false;
}

void ClothingObjectImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ClothingObjectImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ClothingObjectImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = WearableObjectImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;

	return _count + 0;
}

ClothingObjectImplementation::ClothingObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/wearables/ClothingObject.idl():  		Logger.setLoggingName("ClothingObject");
	Logger::setLoggingName("ClothingObject");
}

void ClothingObjectImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/wearables/ClothingObject.idl():  		super.initializeTransientMembers();
	WearableObjectImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/wearables/ClothingObject.idl():  		Logger.setLoggingName("ClothingObject");
	Logger::setLoggingName("ClothingObject");
}

void ClothingObjectImplementation::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	// server/zone/objects/tangible/wearables/ClothingObject.idl():  		super.updateCraftingValues(values, firstUpdate);
	WearableObjectImplementation::updateCraftingValues(values, firstUpdate);
}

/*
 *	ClothingObjectAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


ClothingObjectAdapter::ClothingObjectAdapter(ClothingObject* obj) : WearableObjectAdapter(obj) {
}

void ClothingObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		initializeTransientMembers();
		break;
	default:
		throw Exception("Method does not exists");
	}
}

void ClothingObjectAdapter::initializeTransientMembers() {
	(static_cast<ClothingObject*>(stub))->initializeTransientMembers();
}

/*
 *	ClothingObjectHelper
 */

ClothingObjectHelper* ClothingObjectHelper::staticInitializer = ClothingObjectHelper::instance();

ClothingObjectHelper::ClothingObjectHelper() {
	className = "ClothingObject";

	Core::getObjectBroker()->registerClass(className, this);
}

void ClothingObjectHelper::finalizeHelper() {
	ClothingObjectHelper::finalize();
}

DistributedObject* ClothingObjectHelper::instantiateObject() {
	return new ClothingObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* ClothingObjectHelper::instantiateServant() {
	return new ClothingObjectImplementation();
}

DistributedObjectAdapter* ClothingObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ClothingObjectAdapter(static_cast<ClothingObject*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

