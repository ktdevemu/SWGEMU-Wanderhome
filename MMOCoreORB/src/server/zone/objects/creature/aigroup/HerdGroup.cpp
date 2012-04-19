/*
 *	server/zone/objects/creature/aigroup/HerdGroup.cpp generated by engine3 IDL compiler 0.60
 */

#include "HerdGroup.h"

/*
 *	HerdGroupStub
 */

enum {RPC_ISHERDGROUP__ = 6};

HerdGroup::HerdGroup() : AiGroup(DummyConstructorParameter::instance()) {
	HerdGroupImplementation* _implementation = new HerdGroupImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("HerdGroup");
}

HerdGroup::HerdGroup(DummyConstructorParameter* param) : AiGroup(param) {
	_setClassName("HerdGroup");
}

HerdGroup::~HerdGroup() {
}



bool HerdGroup::isHerdGroup() {
	HerdGroupImplementation* _implementation = static_cast<HerdGroupImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISHERDGROUP__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isHerdGroup();
}

DistributedObjectServant* HerdGroup::_getImplementation() {

	_updated = true;
	return _impl;
}

void HerdGroup::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	HerdGroupImplementation
 */

HerdGroupImplementation::HerdGroupImplementation(DummyConstructorParameter* param) : AiGroupImplementation(param) {
	_initializeImplementation();
}


HerdGroupImplementation::~HerdGroupImplementation() {
}


void HerdGroupImplementation::finalize() {
}

void HerdGroupImplementation::_initializeImplementation() {
	_setClassHelper(HerdGroupHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void HerdGroupImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<HerdGroup*>(stub);
	AiGroupImplementation::_setStub(stub);
}

DistributedObjectStub* HerdGroupImplementation::_getStub() {
	return _this;
}

HerdGroupImplementation::operator const HerdGroup*() {
	return _this;
}

void HerdGroupImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void HerdGroupImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void HerdGroupImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void HerdGroupImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void HerdGroupImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void HerdGroupImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void HerdGroupImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void HerdGroupImplementation::_serializationHelperMethod() {
	AiGroupImplementation::_serializationHelperMethod();

	_setClassName("HerdGroup");

}

void HerdGroupImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(HerdGroupImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool HerdGroupImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (AiGroupImplementation::readObjectMember(stream, _name))
		return true;


	return false;
}

void HerdGroupImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = HerdGroupImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int HerdGroupImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = AiGroupImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;

	return _count + 0;
}

HerdGroupImplementation::HerdGroupImplementation() : AiGroupImplementation() {
	_initializeImplementation();
}

bool HerdGroupImplementation::isHerdGroup() {
	// server/zone/objects/creature/aigroup/HerdGroup.idl():  		return true;
	return true;
}

/*
 *	HerdGroupAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


HerdGroupAdapter::HerdGroupAdapter(HerdGroup* obj) : AiGroupAdapter(obj) {
}

void HerdGroupAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_ISHERDGROUP__:
		resp->insertBoolean(isHerdGroup());
		break;
	default:
		throw Exception("Method does not exists");
	}
}

bool HerdGroupAdapter::isHerdGroup() {
	return (static_cast<HerdGroup*>(stub))->isHerdGroup();
}

/*
 *	HerdGroupHelper
 */

HerdGroupHelper* HerdGroupHelper::staticInitializer = HerdGroupHelper::instance();

HerdGroupHelper::HerdGroupHelper() {
	className = "HerdGroup";

	Core::getObjectBroker()->registerClass(className, this);
}

void HerdGroupHelper::finalizeHelper() {
	HerdGroupHelper::finalize();
}

DistributedObject* HerdGroupHelper::instantiateObject() {
	return new HerdGroup(DummyConstructorParameter::instance());
}

DistributedObjectServant* HerdGroupHelper::instantiateServant() {
	return new HerdGroupImplementation();
}

DistributedObjectAdapter* HerdGroupHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new HerdGroupAdapter(static_cast<HerdGroup*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

