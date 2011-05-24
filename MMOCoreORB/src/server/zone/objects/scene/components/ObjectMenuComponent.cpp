/*
 *	server/zone/objects/scene/components/ObjectMenuComponent.cpp generated by engine3 IDL compiler 0.60
 */

#include "ObjectMenuComponent.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/objects/player/PlayerCreature.h"

/*
 *	ObjectMenuComponentStub
 */

enum {RPC_HANDLEOBJECTMENUSELECT__PLAYERCREATURE_BYTE_};

ObjectMenuComponent::ObjectMenuComponent() : SceneObjectComponent(DummyConstructorParameter::instance()) {
	ObjectMenuComponentImplementation* _implementation = new ObjectMenuComponentImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

ObjectMenuComponent::ObjectMenuComponent(DummyConstructorParameter* param) : SceneObjectComponent(param) {
}

ObjectMenuComponent::~ObjectMenuComponent() {
}


void ObjectMenuComponent::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player) {
	ObjectMenuComponentImplementation* _implementation = (ObjectMenuComponentImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillObjectMenuResponse(menuResponse, player);
}

int ObjectMenuComponent::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	ObjectMenuComponentImplementation* _implementation = (ObjectMenuComponentImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEOBJECTMENUSELECT__PLAYERCREATURE_BYTE_);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->handleObjectMenuSelect(player, selectedID);
}

DistributedObjectServant* ObjectMenuComponent::_getImplementation() {

	_updated = true;
	return _impl;
}

void ObjectMenuComponent::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	ObjectMenuComponentImplementation
 */

ObjectMenuComponentImplementation::ObjectMenuComponentImplementation(DummyConstructorParameter* param) : SceneObjectComponentImplementation(param) {
	_initializeImplementation();
}


ObjectMenuComponentImplementation::~ObjectMenuComponentImplementation() {
}


void ObjectMenuComponentImplementation::finalize() {
}

void ObjectMenuComponentImplementation::_initializeImplementation() {
	_setClassHelper(ObjectMenuComponentHelper::instance());

	_serializationHelperMethod();
	_serializationHelperMethod();
}

void ObjectMenuComponentImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (ObjectMenuComponent*) stub;
	SceneObjectComponentImplementation::_setStub(stub);
}

DistributedObjectStub* ObjectMenuComponentImplementation::_getStub() {
	return _this;
}

ObjectMenuComponentImplementation::operator const ObjectMenuComponent*() {
	return _this;
}

void ObjectMenuComponentImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void ObjectMenuComponentImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void ObjectMenuComponentImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void ObjectMenuComponentImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void ObjectMenuComponentImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void ObjectMenuComponentImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void ObjectMenuComponentImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void ObjectMenuComponentImplementation::_serializationHelperMethod() {
	SceneObjectComponentImplementation::_serializationHelperMethod();

	_setClassName("ObjectMenuComponent");

}

void ObjectMenuComponentImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(ObjectMenuComponentImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool ObjectMenuComponentImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (SceneObjectComponentImplementation::readObjectMember(stream, _name))
		return true;


	return false;
}

void ObjectMenuComponentImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ObjectMenuComponentImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ObjectMenuComponentImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;

	return 0 + SceneObjectComponentImplementation::writeObjectMembers(stream);
}

ObjectMenuComponentImplementation::ObjectMenuComponentImplementation() : SceneObjectComponentImplementation() {
	_initializeImplementation();
}

/*
 *	ObjectMenuComponentAdapter
 */

ObjectMenuComponentAdapter::ObjectMenuComponentAdapter(ObjectMenuComponentImplementation* obj) : SceneObjectComponentAdapter(obj) {
}

Packet* ObjectMenuComponentAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_HANDLEOBJECTMENUSELECT__PLAYERCREATURE_BYTE_:
		resp->insertSignedInt(handleObjectMenuSelect((PlayerCreature*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	default:
		return NULL;
	}

	return resp;
}

int ObjectMenuComponentAdapter::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	return ((ObjectMenuComponentImplementation*) impl)->handleObjectMenuSelect(player, selectedID);
}

/*
 *	ObjectMenuComponentHelper
 */

ObjectMenuComponentHelper* ObjectMenuComponentHelper::staticInitializer = ObjectMenuComponentHelper::instance();

ObjectMenuComponentHelper::ObjectMenuComponentHelper() {
	className = "ObjectMenuComponent";

	Core::getObjectBroker()->registerClass(className, this);
}

void ObjectMenuComponentHelper::finalizeHelper() {
	ObjectMenuComponentHelper::finalize();
}

DistributedObject* ObjectMenuComponentHelper::instantiateObject() {
	return new ObjectMenuComponent(DummyConstructorParameter::instance());
}

DistributedObjectServant* ObjectMenuComponentHelper::instantiateServant() {
	return new ObjectMenuComponentImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ObjectMenuComponentHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ObjectMenuComponentAdapter((ObjectMenuComponentImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

