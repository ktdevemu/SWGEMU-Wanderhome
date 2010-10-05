/*
 *	server/zone/objects/tangible/terminal/city/CityVoteTerminal.cpp generated by engine3 IDL compiler 0.60
 */

#include "CityVoteTerminal.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/building/city/CityHallObject.h"

/*
 *	CityVoteTerminalStub
 */

CityVoteTerminal::CityVoteTerminal() : Terminal(DummyConstructorParameter::instance()) {
	CityVoteTerminalImplementation* _implementation = new CityVoteTerminalImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

CityVoteTerminal::CityVoteTerminal(DummyConstructorParameter* param) : Terminal(param) {
}

CityVoteTerminal::~CityVoteTerminal() {
}


void CityVoteTerminal::initializeTransientMembers() {
	CityVoteTerminalImplementation* _implementation = (CityVoteTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void CityVoteTerminal::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player) {
	CityVoteTerminalImplementation* _implementation = (CityVoteTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(menuResponse);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->fillObjectMenuResponse(menuResponse, player);
}

int CityVoteTerminal::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	CityVoteTerminalImplementation* _implementation = (CityVoteTerminalImplementation*) _getImplementation();
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

bool CityVoteTerminal::isCityVoteTerminal() {
	CityVoteTerminalImplementation* _implementation = (CityVoteTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isCityVoteTerminal();
}

void CityVoteTerminal::setCityHallObject(CityHallObject* cityHall) {
	CityVoteTerminalImplementation* _implementation = (CityVoteTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(cityHall);

		method.executeWithVoidReturn();
	} else
		_implementation->setCityHallObject(cityHall);
}

CityHallObject* CityVoteTerminal::getCityHallObject() {
	CityVoteTerminalImplementation* _implementation = (CityVoteTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		return (CityHallObject*) method.executeWithObjectReturn();
	} else
		return _implementation->getCityHallObject();
}

DistributedObjectServant* CityVoteTerminal::_getImplementation() {
	return _impl;}

void CityVoteTerminal::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	CityVoteTerminalImplementation
 */

CityVoteTerminalImplementation::CityVoteTerminalImplementation(DummyConstructorParameter* param) : TerminalImplementation(param) {
	_initializeImplementation();
}


CityVoteTerminalImplementation::~CityVoteTerminalImplementation() {
}


void CityVoteTerminalImplementation::finalize() {
}

void CityVoteTerminalImplementation::_initializeImplementation() {
	_setClassHelper(CityVoteTerminalHelper::instance());

	_serializationHelperMethod();
}

void CityVoteTerminalImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (CityVoteTerminal*) stub;
	TerminalImplementation::_setStub(stub);
}

DistributedObjectStub* CityVoteTerminalImplementation::_getStub() {
	return _this;
}

CityVoteTerminalImplementation::operator const CityVoteTerminal*() {
	return _this;
}

void CityVoteTerminalImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void CityVoteTerminalImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void CityVoteTerminalImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void CityVoteTerminalImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void CityVoteTerminalImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void CityVoteTerminalImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void CityVoteTerminalImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void CityVoteTerminalImplementation::_serializationHelperMethod() {
	TerminalImplementation::_serializationHelperMethod();

	_setClassName("CityVoteTerminal");

	addSerializableVariable("cityHallObject", &cityHallObject);
}

CityVoteTerminalImplementation::CityVoteTerminalImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/terminal/city/CityVoteTerminal.idl(60):  		Logger.setLoggingName("CityVoteTerminal");
	Logger::setLoggingName("CityVoteTerminal");
}

void CityVoteTerminalImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/terminal/city/CityVoteTerminal.idl(63):  		super.initializeTransientMembers();
	TerminalImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/terminal/city/CityVoteTerminal.idl(65):  		Logger.setLoggingName("CityVoteTerminal");
	Logger::setLoggingName("CityVoteTerminal");
}

bool CityVoteTerminalImplementation::isCityVoteTerminal() {
	// server/zone/objects/tangible/terminal/city/CityVoteTerminal.idl(73):  		return true;
	return true;
}

void CityVoteTerminalImplementation::setCityHallObject(CityHallObject* cityHall) {
	// server/zone/objects/tangible/terminal/city/CityVoteTerminal.idl(77):  		cityHallObject = cityHall;
	cityHallObject = cityHall;
}

CityHallObject* CityVoteTerminalImplementation::getCityHallObject() {
	// server/zone/objects/tangible/terminal/city/CityVoteTerminal.idl(81):  		return cityHallObject;
	return cityHallObject;
}

/*
 *	CityVoteTerminalAdapter
 */

CityVoteTerminalAdapter::CityVoteTerminalAdapter(CityVoteTerminalImplementation* obj) : TerminalAdapter(obj) {
}

Packet* CityVoteTerminalAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		fillObjectMenuResponse((ObjectMenuResponse*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter());
		break;
	case 8:
		resp->insertSignedInt(handleObjectMenuSelect((PlayerCreature*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	case 9:
		resp->insertBoolean(isCityVoteTerminal());
		break;
	case 10:
		setCityHallObject((CityHallObject*) inv->getObjectParameter());
		break;
	case 11:
		resp->insertLong(getCityHallObject()->_getObjectID());
		break;
	default:
		return NULL;
	}

	return resp;
}

void CityVoteTerminalAdapter::initializeTransientMembers() {
	((CityVoteTerminalImplementation*) impl)->initializeTransientMembers();
}

void CityVoteTerminalAdapter::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player) {
	((CityVoteTerminalImplementation*) impl)->fillObjectMenuResponse(menuResponse, player);
}

int CityVoteTerminalAdapter::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	return ((CityVoteTerminalImplementation*) impl)->handleObjectMenuSelect(player, selectedID);
}

bool CityVoteTerminalAdapter::isCityVoteTerminal() {
	return ((CityVoteTerminalImplementation*) impl)->isCityVoteTerminal();
}

void CityVoteTerminalAdapter::setCityHallObject(CityHallObject* cityHall) {
	((CityVoteTerminalImplementation*) impl)->setCityHallObject(cityHall);
}

CityHallObject* CityVoteTerminalAdapter::getCityHallObject() {
	return ((CityVoteTerminalImplementation*) impl)->getCityHallObject();
}

/*
 *	CityVoteTerminalHelper
 */

CityVoteTerminalHelper* CityVoteTerminalHelper::staticInitializer = CityVoteTerminalHelper::instance();

CityVoteTerminalHelper::CityVoteTerminalHelper() {
	className = "CityVoteTerminal";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void CityVoteTerminalHelper::finalizeHelper() {
	CityVoteTerminalHelper::finalize();
}

DistributedObject* CityVoteTerminalHelper::instantiateObject() {
	return new CityVoteTerminal(DummyConstructorParameter::instance());
}

DistributedObjectServant* CityVoteTerminalHelper::instantiateServant() {
	return new CityVoteTerminalImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* CityVoteTerminalHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CityVoteTerminalAdapter((CityVoteTerminalImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

