/*
 *	server/zone/objects/tangible/terminal/travel/TravelTerminal.cpp generated by engine3 IDL compiler 0.60
 */

#include "TravelTerminal.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/tangible/ticket/TicketObject.h"

#include "server/zone/managers/planet/PlanetManager.h"

/*
 *	TravelTerminalStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 6,RPC_NOTIFYINSERTTOZONE__ZONE_,RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,};

TravelTerminal::TravelTerminal() : Terminal(DummyConstructorParameter::instance()) {
	TravelTerminalImplementation* _implementation = new TravelTerminalImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

TravelTerminal::TravelTerminal(DummyConstructorParameter* param) : Terminal(param) {
}

TravelTerminal::~TravelTerminal() {
}



void TravelTerminal::initializeTransientMembers() {
	TravelTerminalImplementation* _implementation = static_cast<TravelTerminalImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void TravelTerminal::notifyInsertToZone(Zone* zone) {
	TravelTerminalImplementation* _implementation = static_cast<TravelTerminalImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYINSERTTOZONE__ZONE_);
		method.addObjectParameter(zone);

		method.executeWithVoidReturn();
	} else
		_implementation->notifyInsertToZone(zone);
}

int TravelTerminal::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	TravelTerminalImplementation* _implementation = static_cast<TravelTerminalImplementation*>(_getImplementation());
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

PlanetTravelPoint* TravelTerminal::getPlanetTravelPoint() {
	TravelTerminalImplementation* _implementation = static_cast<TravelTerminalImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getPlanetTravelPoint();
}

DistributedObjectServant* TravelTerminal::_getImplementation() {

	_updated = true;
	return _impl;
}

void TravelTerminal::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	TravelTerminalImplementation
 */

TravelTerminalImplementation::TravelTerminalImplementation(DummyConstructorParameter* param) : TerminalImplementation(param) {
	_initializeImplementation();
}


TravelTerminalImplementation::~TravelTerminalImplementation() {
}


void TravelTerminalImplementation::finalize() {
}

void TravelTerminalImplementation::_initializeImplementation() {
	_setClassHelper(TravelTerminalHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void TravelTerminalImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<TravelTerminal*>(stub);
	TerminalImplementation::_setStub(stub);
}

DistributedObjectStub* TravelTerminalImplementation::_getStub() {
	return _this;
}

TravelTerminalImplementation::operator const TravelTerminal*() {
	return _this;
}

void TravelTerminalImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void TravelTerminalImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void TravelTerminalImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void TravelTerminalImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void TravelTerminalImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void TravelTerminalImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void TravelTerminalImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void TravelTerminalImplementation::_serializationHelperMethod() {
	TerminalImplementation::_serializationHelperMethod();

	_setClassName("TravelTerminal");

}

void TravelTerminalImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(TravelTerminalImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool TravelTerminalImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (TerminalImplementation::readObjectMember(stream, _name))
		return true;


	return false;
}

void TravelTerminalImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = TravelTerminalImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int TravelTerminalImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;

	return 0 + TerminalImplementation::writeObjectMembers(stream);
}

TravelTerminalImplementation::TravelTerminalImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/terminal/travel/TravelTerminal.idl():  		Logger.setLoggingName("TravelTerminal");
	Logger::setLoggingName("TravelTerminal");
	// server/zone/objects/tangible/terminal/travel/TravelTerminal.idl():  		planetTravelPoint == null;
	planetTravelPoint == NULL;
}

void TravelTerminalImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/terminal/travel/TravelTerminal.idl():  		super.initializeTransientMembers();
	TerminalImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/terminal/travel/TravelTerminal.idl():  		Logger.setLoggingName("TravelTerminal");
	Logger::setLoggingName("TravelTerminal");
	// server/zone/objects/tangible/terminal/travel/TravelTerminal.idl():  		Zone zone = getZone();
	Zone* zone = getZone();
	// server/zone/objects/tangible/terminal/travel/TravelTerminal.idl():  	}
	if (zone != NULL)	// server/zone/objects/tangible/terminal/travel/TravelTerminal.idl():  			planetTravelPoint = zone.getPlanetManager().getNearestPlanetTravelPoint(this);
	planetTravelPoint = zone->getPlanetManager()->getNearestPlanetTravelPoint(_this);
}

PlanetTravelPoint* TravelTerminalImplementation::getPlanetTravelPoint() {
	// server/zone/objects/tangible/terminal/travel/TravelTerminal.idl():  		return planetTravelPoint;
	return planetTravelPoint;
}

/*
 *	TravelTerminalAdapter
 */

TravelTerminalAdapter::TravelTerminalAdapter(TravelTerminalImplementation* obj) : TerminalAdapter(obj) {
}

Packet* TravelTerminalAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		initializeTransientMembers();
		break;
	case RPC_NOTIFYINSERTTOZONE__ZONE_:
		notifyInsertToZone(static_cast<Zone*>(inv->getObjectParameter()));
		break;
	case RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_:
		resp->insertSignedInt(handleObjectMenuSelect(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getByteParameter()));
		break;
	default:
		return NULL;
	}

	return resp;
}

void TravelTerminalAdapter::initializeTransientMembers() {
	(static_cast<TravelTerminalImplementation*>(impl))->initializeTransientMembers();
}

void TravelTerminalAdapter::notifyInsertToZone(Zone* zone) {
	(static_cast<TravelTerminalImplementation*>(impl))->notifyInsertToZone(zone);
}

int TravelTerminalAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<TravelTerminalImplementation*>(impl))->handleObjectMenuSelect(player, selectedID);
}

/*
 *	TravelTerminalHelper
 */

TravelTerminalHelper* TravelTerminalHelper::staticInitializer = TravelTerminalHelper::instance();

TravelTerminalHelper::TravelTerminalHelper() {
	className = "TravelTerminal";

	Core::getObjectBroker()->registerClass(className, this);
}

void TravelTerminalHelper::finalizeHelper() {
	TravelTerminalHelper::finalize();
}

DistributedObject* TravelTerminalHelper::instantiateObject() {
	return new TravelTerminal(DummyConstructorParameter::instance());
}

DistributedObjectServant* TravelTerminalHelper::instantiateServant() {
	return new TravelTerminalImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* TravelTerminalHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new TravelTerminalAdapter(static_cast<TravelTerminalImplementation*>(obj->_getImplementation()));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

