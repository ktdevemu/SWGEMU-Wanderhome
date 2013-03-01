/*
 *	server/zone/objects/tangible/terminal/ticketcollector/TicketCollector.cpp generated by engine3 IDL compiler 0.60
 */

#include "TicketCollector.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/tangible/ticket/TicketObject.h"

/*
 *	TicketCollectorStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 6,RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,RPC_USETICKET__CREATUREOBJECT_TICKETOBJECT_,RPC_ISTICKETCOLLECTOR__};

TicketCollector::TicketCollector() : Terminal(DummyConstructorParameter::instance()) {
	TicketCollectorImplementation* _implementation = new TicketCollectorImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("TicketCollector");
}

TicketCollector::TicketCollector(DummyConstructorParameter* param) : Terminal(param) {
	_setClassName("TicketCollector");
}

TicketCollector::~TicketCollector() {
}



void TicketCollector::initializeTransientMembers() {
	TicketCollectorImplementation* _implementation = static_cast<TicketCollectorImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

int TicketCollector::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	TicketCollectorImplementation* _implementation = static_cast<TicketCollectorImplementation*>(_getImplementation());
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

void TicketCollector::useTicket(CreatureObject* player, TicketObject* ticket) {
	TicketCollectorImplementation* _implementation = static_cast<TicketCollectorImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_USETICKET__CREATUREOBJECT_TICKETOBJECT_);
		method.addObjectParameter(player);
		method.addObjectParameter(ticket);

		method.executeWithVoidReturn();
	} else
		_implementation->useTicket(player, ticket);
}

bool TicketCollector::isTicketCollector() {
	TicketCollectorImplementation* _implementation = static_cast<TicketCollectorImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISTICKETCOLLECTOR__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isTicketCollector();
}

DistributedObjectServant* TicketCollector::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* TicketCollector::_getImplementationForRead() {
	return _impl;
}

void TicketCollector::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	TicketCollectorImplementation
 */

TicketCollectorImplementation::TicketCollectorImplementation(DummyConstructorParameter* param) : TerminalImplementation(param) {
	_initializeImplementation();
}


TicketCollectorImplementation::~TicketCollectorImplementation() {
}


void TicketCollectorImplementation::finalize() {
}

void TicketCollectorImplementation::_initializeImplementation() {
	_setClassHelper(TicketCollectorHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void TicketCollectorImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<TicketCollector*>(stub);
	TerminalImplementation::_setStub(stub);
}

DistributedObjectStub* TicketCollectorImplementation::_getStub() {
	return _this.get();
}

TicketCollectorImplementation::operator const TicketCollector*() {
	return _this.get();
}

void TicketCollectorImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void TicketCollectorImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void TicketCollectorImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void TicketCollectorImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void TicketCollectorImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void TicketCollectorImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void TicketCollectorImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void TicketCollectorImplementation::_serializationHelperMethod() {
	TerminalImplementation::_serializationHelperMethod();

	_setClassName("TicketCollector");

}

void TicketCollectorImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(TicketCollectorImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool TicketCollectorImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (TerminalImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	}

	return false;
}

void TicketCollectorImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = TicketCollectorImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int TicketCollectorImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = TerminalImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;

	return _count + 0;
}

TicketCollectorImplementation::TicketCollectorImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/terminal/ticketcollector/TicketCollector.idl():  		Logger.setLoggingName("TicketCollector");
	Logger::setLoggingName("TicketCollector");
}

void TicketCollectorImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/terminal/ticketcollector/TicketCollector.idl():  		super.initializeTransientMembers();
	TerminalImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/terminal/ticketcollector/TicketCollector.idl():  		Logger.setLoggingName("TicketCollector");
	Logger::setLoggingName("TicketCollector");
}

bool TicketCollectorImplementation::isTicketCollector() {
	// server/zone/objects/tangible/terminal/ticketcollector/TicketCollector.idl():  		return true;
	return true;
}

/*
 *	TicketCollectorAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


TicketCollectorAdapter::TicketCollectorAdapter(TicketCollector* obj) : TerminalAdapter(obj) {
}

void TicketCollectorAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			initializeTransientMembers();
		}
		break;
	case RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_:
		{
			resp->insertSignedInt(handleObjectMenuSelect(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getByteParameter()));
		}
		break;
	case RPC_USETICKET__CREATUREOBJECT_TICKETOBJECT_:
		{
			useTicket(static_cast<CreatureObject*>(inv->getObjectParameter()), static_cast<TicketObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_ISTICKETCOLLECTOR__:
		{
			resp->insertBoolean(isTicketCollector());
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

void TicketCollectorAdapter::initializeTransientMembers() {
	(static_cast<TicketCollector*>(stub))->initializeTransientMembers();
}

int TicketCollectorAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<TicketCollector*>(stub))->handleObjectMenuSelect(player, selectedID);
}

void TicketCollectorAdapter::useTicket(CreatureObject* player, TicketObject* ticket) {
	(static_cast<TicketCollector*>(stub))->useTicket(player, ticket);
}

bool TicketCollectorAdapter::isTicketCollector() {
	return (static_cast<TicketCollector*>(stub))->isTicketCollector();
}

/*
 *	TicketCollectorHelper
 */

TicketCollectorHelper* TicketCollectorHelper::staticInitializer = TicketCollectorHelper::instance();

TicketCollectorHelper::TicketCollectorHelper() {
	className = "TicketCollector";

	Core::getObjectBroker()->registerClass(className, this);
}

void TicketCollectorHelper::finalizeHelper() {
	TicketCollectorHelper::finalize();
}

DistributedObject* TicketCollectorHelper::instantiateObject() {
	return new TicketCollector(DummyConstructorParameter::instance());
}

DistributedObjectServant* TicketCollectorHelper::instantiateServant() {
	return new TicketCollectorImplementation();
}

DistributedObjectAdapter* TicketCollectorHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new TicketCollectorAdapter(static_cast<TicketCollector*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

