/*
 *	server/zone/objects/tangible/terminal/travel/TravelTerminal.cpp generated by engine3 IDL compiler 0.61
 */

#include "TravelTerminal.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/tangible/ticket/TicketObject.h"

#include "server/zone/objects/creature/shuttle/ShuttleCreature.h"

/*
 *	TravelTerminalStub
 */

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
	TravelTerminalImplementation* _implementation = (TravelTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

int TravelTerminal::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	TravelTerminalImplementation* _implementation = (TravelTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->handleObjectMenuSelect(player, selectedID);
}

void TravelTerminal::setShuttle(ShuttleCreature* shut) {
	TravelTerminalImplementation* _implementation = (TravelTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(shut);

		method.executeWithVoidReturn();
	} else
		_implementation->setShuttle(shut);
}

DistributedObjectServant* TravelTerminal::_getImplementation() {
	return _impl;}

void TravelTerminal::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

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

	_serializationHelperMethod();
}

void TravelTerminalImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (TravelTerminal*) stub;
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

	addSerializableVariable("shuttle", &shuttle);
}

TravelTerminalImplementation::TravelTerminalImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/terminal/travel/TravelTerminal.idl(59):  		Logger.setLoggingName("TravelTerminal");
	Logger::setLoggingName("TravelTerminal");
}

void TravelTerminalImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/terminal/travel/TravelTerminal.idl(63):  		super.initializeTransientMembers();
	TerminalImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/terminal/travel/TravelTerminal.idl(65):  		Logger.setLoggingName("TravelTerminal");
	Logger::setLoggingName("TravelTerminal");
}

void TravelTerminalImplementation::setShuttle(ShuttleCreature* shut) {
	// server/zone/objects/tangible/terminal/travel/TravelTerminal.idl(78):  		shuttle = shut;
	shuttle = shut;
}

/*
 *	TravelTerminalAdapter
 */

TravelTerminalAdapter::TravelTerminalAdapter(TravelTerminalImplementation* obj) : TerminalAdapter(obj) {
}

Packet* TravelTerminalAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		resp->insertSignedInt(handleObjectMenuSelect((PlayerCreature*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	case 8:
		setShuttle((ShuttleCreature*) inv->getObjectParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void TravelTerminalAdapter::initializeTransientMembers() {
	((TravelTerminalImplementation*) impl)->initializeTransientMembers();
}

int TravelTerminalAdapter::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	return ((TravelTerminalImplementation*) impl)->handleObjectMenuSelect(player, selectedID);
}

void TravelTerminalAdapter::setShuttle(ShuttleCreature* shut) {
	((TravelTerminalImplementation*) impl)->setShuttle(shut);
}

/*
 *	TravelTerminalHelper
 */

TravelTerminalHelper* TravelTerminalHelper::staticInitializer = TravelTerminalHelper::instance();

TravelTerminalHelper::TravelTerminalHelper() {
	className = "TravelTerminal";

	DistributedObjectBroker::instance()->registerClass(className, this);
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
	DistributedObjectAdapter* adapter = new TravelTerminalAdapter((TravelTerminalImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

