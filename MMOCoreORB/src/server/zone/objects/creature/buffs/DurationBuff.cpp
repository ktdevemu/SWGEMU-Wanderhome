/*
 *	server/zone/objects/creature/buffs/DurationBuff.cpp generated by engine3 IDL compiler 0.60
 */

#include "DurationBuff.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/creature/buffs/BuffDurationEvent.h"

#include "server/zone/objects/creature/buffs/SpiceDownerBuff.h"

/*
 *	DurationBuffStub
 */

enum {RPC_ACTIVATE__BOOL_ = 6};

DurationBuff::DurationBuff(CreatureObject* creo, unsigned int buffcrc, float duration) : Buff(DummyConstructorParameter::instance()) {
	DurationBuffImplementation* _implementation = new DurationBuffImplementation(creo, buffcrc, duration);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("DurationBuff");
}

DurationBuff::DurationBuff(DummyConstructorParameter* param) : Buff(param) {
	_setClassName("DurationBuff");
}

DurationBuff::~DurationBuff() {
}



void DurationBuff::activate(bool applyModifiers) {
	DurationBuffImplementation* _implementation = static_cast<DurationBuffImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ACTIVATE__BOOL_);
		method.addBooleanParameter(applyModifiers);

		method.executeWithVoidReturn();
	} else
		_implementation->activate(applyModifiers);
}

DistributedObjectServant* DurationBuff::_getImplementation() {

	_updated = true;
	return _impl;
}

void DurationBuff::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	DurationBuffImplementation
 */

DurationBuffImplementation::DurationBuffImplementation(DummyConstructorParameter* param) : BuffImplementation(param) {
	_initializeImplementation();
}


DurationBuffImplementation::~DurationBuffImplementation() {
}


void DurationBuffImplementation::finalize() {
}

void DurationBuffImplementation::_initializeImplementation() {
	_setClassHelper(DurationBuffHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void DurationBuffImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<DurationBuff*>(stub);
	BuffImplementation::_setStub(stub);
}

DistributedObjectStub* DurationBuffImplementation::_getStub() {
	return _this;
}

DurationBuffImplementation::operator const DurationBuff*() {
	return _this;
}

void DurationBuffImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void DurationBuffImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void DurationBuffImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void DurationBuffImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void DurationBuffImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void DurationBuffImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void DurationBuffImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void DurationBuffImplementation::_serializationHelperMethod() {
	BuffImplementation::_serializationHelperMethod();

	_setClassName("DurationBuff");

}

void DurationBuffImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(DurationBuffImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool DurationBuffImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (BuffImplementation::readObjectMember(stream, _name))
		return true;


	return false;
}

void DurationBuffImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = DurationBuffImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int DurationBuffImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = BuffImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;

	return _count + 0;
}

DurationBuffImplementation::DurationBuffImplementation(CreatureObject* creo, unsigned int buffcrc, float duration) : BuffImplementation(creo, buffcrc, duration, BuffType::FOOD) {
	_initializeImplementation();
}

void DurationBuffImplementation::activate(bool applyModifiers) {
	// server/zone/objects/creature/buffs/DurationBuff.idl():  		super.activate(false);
	BuffImplementation::activate(false);
}

/*
 *	DurationBuffAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


DurationBuffAdapter::DurationBuffAdapter(DurationBuff* obj) : BuffAdapter(obj) {
}

void DurationBuffAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_ACTIVATE__BOOL_:
		activate(inv->getBooleanParameter());
		break;
	default:
		throw Exception("Method does not exists");
	}
}

void DurationBuffAdapter::activate(bool applyModifiers) {
	(static_cast<DurationBuff*>(stub))->activate(applyModifiers);
}

/*
 *	DurationBuffHelper
 */

DurationBuffHelper* DurationBuffHelper::staticInitializer = DurationBuffHelper::instance();

DurationBuffHelper::DurationBuffHelper() {
	className = "DurationBuff";

	Core::getObjectBroker()->registerClass(className, this);
}

void DurationBuffHelper::finalizeHelper() {
	DurationBuffHelper::finalize();
}

DistributedObject* DurationBuffHelper::instantiateObject() {
	return new DurationBuff(DummyConstructorParameter::instance());
}

DistributedObjectServant* DurationBuffHelper::instantiateServant() {
	return new DurationBuffImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* DurationBuffHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new DurationBuffAdapter(static_cast<DurationBuff*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

