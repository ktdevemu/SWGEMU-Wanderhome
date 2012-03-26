/*
 *	server/zone/objects/tangible/deed/resource/ResourceDeed.cpp generated by engine3 IDL compiler 0.60
 */

#include "ResourceDeed.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

/*
 *	ResourceDeedStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 6,RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,RPC_USEOBJECT__CREATUREOBJECT_,RPC_DESTROYDEED__};

ResourceDeed::ResourceDeed() : Deed(DummyConstructorParameter::instance()) {
	ResourceDeedImplementation* _implementation = new ResourceDeedImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("ResourceDeed");
}

ResourceDeed::ResourceDeed(DummyConstructorParameter* param) : Deed(param) {
	_setClassName("ResourceDeed");
}

ResourceDeed::~ResourceDeed() {
}



void ResourceDeed::initializeTransientMembers() {
	ResourceDeedImplementation* _implementation = static_cast<ResourceDeedImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void ResourceDeed::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player) {
	ResourceDeedImplementation* _implementation = static_cast<ResourceDeedImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillObjectMenuResponse(menuResponse, player);
}

int ResourceDeed::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	ResourceDeedImplementation* _implementation = static_cast<ResourceDeedImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->handleObjectMenuSelect(player, selectedID);
}

int ResourceDeed::useObject(CreatureObject* player) {
	ResourceDeedImplementation* _implementation = static_cast<ResourceDeedImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_USEOBJECT__CREATUREOBJECT_);
		method.addObjectParameter(player);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->useObject(player);
}

void ResourceDeed::destroyDeed() {
	ResourceDeedImplementation* _implementation = static_cast<ResourceDeedImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DESTROYDEED__);

		method.executeWithVoidReturn();
	} else
		_implementation->destroyDeed();
}

DistributedObjectServant* ResourceDeed::_getImplementation() {

	_updated = true;
	return _impl;
}

void ResourceDeed::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	ResourceDeedImplementation
 */

ResourceDeedImplementation::ResourceDeedImplementation(DummyConstructorParameter* param) : DeedImplementation(param) {
	_initializeImplementation();
}


ResourceDeedImplementation::~ResourceDeedImplementation() {
}


void ResourceDeedImplementation::finalize() {
}

void ResourceDeedImplementation::_initializeImplementation() {
	_setClassHelper(ResourceDeedHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void ResourceDeedImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<ResourceDeed*>(stub);
	DeedImplementation::_setStub(stub);
}

DistributedObjectStub* ResourceDeedImplementation::_getStub() {
	return _this;
}

ResourceDeedImplementation::operator const ResourceDeed*() {
	return _this;
}

void ResourceDeedImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void ResourceDeedImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void ResourceDeedImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void ResourceDeedImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void ResourceDeedImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void ResourceDeedImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void ResourceDeedImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void ResourceDeedImplementation::_serializationHelperMethod() {
	DeedImplementation::_serializationHelperMethod();

	_setClassName("ResourceDeed");

}

void ResourceDeedImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(ResourceDeedImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool ResourceDeedImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (DeedImplementation::readObjectMember(stream, _name))
		return true;


	return false;
}

void ResourceDeedImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ResourceDeedImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ResourceDeedImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = DeedImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint16 _totalSize;

	return _count + 0;
}

ResourceDeedImplementation::ResourceDeedImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/deed/resource/ResourceDeed.idl():  		Logger.setLoggingName("ResourceDeed");
	Logger::setLoggingName("ResourceDeed");
}

/*
 *	ResourceDeedAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


ResourceDeedAdapter::ResourceDeedAdapter(ResourceDeed* obj) : DeedAdapter(obj) {
}

void ResourceDeedAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		initializeTransientMembers();
		break;
	case RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_:
		resp->insertSignedInt(handleObjectMenuSelect(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getByteParameter()));
		break;
	case RPC_USEOBJECT__CREATUREOBJECT_:
		resp->insertSignedInt(useObject(static_cast<CreatureObject*>(inv->getObjectParameter())));
		break;
	case RPC_DESTROYDEED__:
		destroyDeed();
		break;
	default:
		throw Exception("Method does not exists");
	}
}

void ResourceDeedAdapter::initializeTransientMembers() {
	(static_cast<ResourceDeed*>(stub))->initializeTransientMembers();
}

int ResourceDeedAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<ResourceDeed*>(stub))->handleObjectMenuSelect(player, selectedID);
}

int ResourceDeedAdapter::useObject(CreatureObject* player) {
	return (static_cast<ResourceDeed*>(stub))->useObject(player);
}

void ResourceDeedAdapter::destroyDeed() {
	(static_cast<ResourceDeed*>(stub))->destroyDeed();
}

/*
 *	ResourceDeedHelper
 */

ResourceDeedHelper* ResourceDeedHelper::staticInitializer = ResourceDeedHelper::instance();

ResourceDeedHelper::ResourceDeedHelper() {
	className = "ResourceDeed";

	Core::getObjectBroker()->registerClass(className, this);
}

void ResourceDeedHelper::finalizeHelper() {
	ResourceDeedHelper::finalize();
}

DistributedObject* ResourceDeedHelper::instantiateObject() {
	return new ResourceDeed(DummyConstructorParameter::instance());
}

DistributedObjectServant* ResourceDeedHelper::instantiateServant() {
	return new ResourceDeedImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ResourceDeedHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ResourceDeedAdapter(static_cast<ResourceDeed*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

