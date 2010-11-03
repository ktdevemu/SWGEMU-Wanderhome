/*
 *	server/zone/objects/tangible/ticket/TicketObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "TicketObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

/*
 *	TicketObjectStub
 */

TicketObject::TicketObject() : TangibleObject(DummyConstructorParameter::instance()) {
	TicketObjectImplementation* _implementation = new TicketObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

TicketObject::TicketObject(DummyConstructorParameter* param) : TangibleObject(param) {
}

TicketObject::~TicketObject() {
}


void TicketObject::initializeTransientMembers() {
	TicketObjectImplementation* _implementation = (TicketObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void TicketObject::fillAttributeList(AttributeListMessage* msg, PlayerCreature* object) {
	TicketObjectImplementation* _implementation = (TicketObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillAttributeList(msg, object);
}

int TicketObject::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	TicketObjectImplementation* _implementation = (TicketObjectImplementation*) _getImplementation();
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

void TicketObject::setDeparturePlanet(const String& departureplanet) {
	TicketObjectImplementation* _implementation = (TicketObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addAsciiParameter(departureplanet);

		method.executeWithVoidReturn();
	} else
		_implementation->setDeparturePlanet(departureplanet);
}

void TicketObject::setDeparturePoint(const String& departurepoint) {
	TicketObjectImplementation* _implementation = (TicketObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addAsciiParameter(departurepoint);

		method.executeWithVoidReturn();
	} else
		_implementation->setDeparturePoint(departurepoint);
}

void TicketObject::setArrivalPlanet(const String& arrival) {
	TicketObjectImplementation* _implementation = (TicketObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addAsciiParameter(arrival);

		method.executeWithVoidReturn();
	} else
		_implementation->setArrivalPlanet(arrival);
}

void TicketObject::setArrivalPoint(const String& arrival) {
	TicketObjectImplementation* _implementation = (TicketObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addAsciiParameter(arrival);

		method.executeWithVoidReturn();
	} else
		_implementation->setArrivalPoint(arrival);
}

String TicketObject::getDeparturePlanet() {
	TicketObjectImplementation* _implementation = (TicketObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		method.executeWithAsciiReturn(_return_getDeparturePlanet);
		return _return_getDeparturePlanet;
	} else
		return _implementation->getDeparturePlanet();
}

String TicketObject::getDeparturePoint() {
	TicketObjectImplementation* _implementation = (TicketObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		method.executeWithAsciiReturn(_return_getDeparturePoint);
		return _return_getDeparturePoint;
	} else
		return _implementation->getDeparturePoint();
}

String TicketObject::getArrivalPlanet() {
	TicketObjectImplementation* _implementation = (TicketObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);

		method.executeWithAsciiReturn(_return_getArrivalPlanet);
		return _return_getArrivalPlanet;
	} else
		return _implementation->getArrivalPlanet();
}

String TicketObject::getArrivalPoint() {
	TicketObjectImplementation* _implementation = (TicketObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);

		method.executeWithAsciiReturn(_return_getArrivalPoint);
		return _return_getArrivalPoint;
	} else
		return _implementation->getArrivalPoint();
}

bool TicketObject::isTicketObject() {
	TicketObjectImplementation* _implementation = (TicketObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isTicketObject();
}

DistributedObjectServant* TicketObject::_getImplementation() {
	return _impl;}

void TicketObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	TicketObjectImplementation
 */

TicketObjectImplementation::TicketObjectImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}


TicketObjectImplementation::~TicketObjectImplementation() {
}


void TicketObjectImplementation::finalize() {
}

void TicketObjectImplementation::_initializeImplementation() {
	_setClassHelper(TicketObjectHelper::instance());

	_serializationHelperMethod();
}

void TicketObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (TicketObject*) stub;
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* TicketObjectImplementation::_getStub() {
	return _this;
}

TicketObjectImplementation::operator const TicketObject*() {
	return _this;
}

void TicketObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void TicketObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void TicketObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void TicketObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void TicketObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void TicketObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void TicketObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void TicketObjectImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("TicketObject");

	addSerializableVariable("departurePlanet", &departurePlanet);
	addSerializableVariable("departurePoint", &departurePoint);
	addSerializableVariable("arrivalPlanet", &arrivalPlanet);
	addSerializableVariable("arrivalPoint", &arrivalPoint);
}

TicketObjectImplementation::TicketObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/ticket/TicketObject.idl(63):  		Logger.setLoggingName("TicketObject");
	Logger::setLoggingName("TicketObject");
}

void TicketObjectImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/ticket/TicketObject.idl(67):  		super.initializeTransientMembers();
	TangibleObjectImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/ticket/TicketObject.idl(69):  		Logger.setLoggingName("TicketObject");
	Logger::setLoggingName("TicketObject");
}

void TicketObjectImplementation::setDeparturePlanet(const String& departureplanet) {
	// server/zone/objects/tangible/ticket/TicketObject.idl(90):  		departurePlanet = departureplanet;
	departurePlanet = departureplanet;
}

void TicketObjectImplementation::setDeparturePoint(const String& departurepoint) {
	// server/zone/objects/tangible/ticket/TicketObject.idl(94):  		departurePoint = departurepoint;
	departurePoint = departurepoint;
}

void TicketObjectImplementation::setArrivalPlanet(const String& arrival) {
	// server/zone/objects/tangible/ticket/TicketObject.idl(98):  		arrivalPlanet = arrival;
	arrivalPlanet = arrival;
}

void TicketObjectImplementation::setArrivalPoint(const String& arrival) {
	// server/zone/objects/tangible/ticket/TicketObject.idl(102):  		arrivalPoint = arrival;
	arrivalPoint = arrival;
}

String TicketObjectImplementation::getDeparturePlanet() {
	// server/zone/objects/tangible/ticket/TicketObject.idl(106):  		return departurePlanet;
	return departurePlanet;
}

String TicketObjectImplementation::getDeparturePoint() {
	// server/zone/objects/tangible/ticket/TicketObject.idl(110):  		return departurePoint;
	return departurePoint;
}

String TicketObjectImplementation::getArrivalPlanet() {
	// server/zone/objects/tangible/ticket/TicketObject.idl(114):  		return arrivalPlanet;
	return arrivalPlanet;
}

String TicketObjectImplementation::getArrivalPoint() {
	// server/zone/objects/tangible/ticket/TicketObject.idl(118):  		return arrivalPoint;
	return arrivalPoint;
}

bool TicketObjectImplementation::isTicketObject() {
	// server/zone/objects/tangible/ticket/TicketObject.idl(122):  		return true;
	return true;
}

/*
 *	TicketObjectAdapter
 */

TicketObjectAdapter::TicketObjectAdapter(TicketObjectImplementation* obj) : TangibleObjectAdapter(obj) {
}

Packet* TicketObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		resp->insertSignedInt(handleObjectMenuSelect((PlayerCreature*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	case 8:
		setDeparturePlanet(inv->getAsciiParameter(_param0_setDeparturePlanet__String_));
		break;
	case 9:
		setDeparturePoint(inv->getAsciiParameter(_param0_setDeparturePoint__String_));
		break;
	case 10:
		setArrivalPlanet(inv->getAsciiParameter(_param0_setArrivalPlanet__String_));
		break;
	case 11:
		setArrivalPoint(inv->getAsciiParameter(_param0_setArrivalPoint__String_));
		break;
	case 12:
		resp->insertAscii(getDeparturePlanet());
		break;
	case 13:
		resp->insertAscii(getDeparturePoint());
		break;
	case 14:
		resp->insertAscii(getArrivalPlanet());
		break;
	case 15:
		resp->insertAscii(getArrivalPoint());
		break;
	case 16:
		resp->insertBoolean(isTicketObject());
		break;
	default:
		return NULL;
	}

	return resp;
}

void TicketObjectAdapter::initializeTransientMembers() {
	((TicketObjectImplementation*) impl)->initializeTransientMembers();
}

int TicketObjectAdapter::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	return ((TicketObjectImplementation*) impl)->handleObjectMenuSelect(player, selectedID);
}

void TicketObjectAdapter::setDeparturePlanet(const String& departureplanet) {
	((TicketObjectImplementation*) impl)->setDeparturePlanet(departureplanet);
}

void TicketObjectAdapter::setDeparturePoint(const String& departurepoint) {
	((TicketObjectImplementation*) impl)->setDeparturePoint(departurepoint);
}

void TicketObjectAdapter::setArrivalPlanet(const String& arrival) {
	((TicketObjectImplementation*) impl)->setArrivalPlanet(arrival);
}

void TicketObjectAdapter::setArrivalPoint(const String& arrival) {
	((TicketObjectImplementation*) impl)->setArrivalPoint(arrival);
}

String TicketObjectAdapter::getDeparturePlanet() {
	return ((TicketObjectImplementation*) impl)->getDeparturePlanet();
}

String TicketObjectAdapter::getDeparturePoint() {
	return ((TicketObjectImplementation*) impl)->getDeparturePoint();
}

String TicketObjectAdapter::getArrivalPlanet() {
	return ((TicketObjectImplementation*) impl)->getArrivalPlanet();
}

String TicketObjectAdapter::getArrivalPoint() {
	return ((TicketObjectImplementation*) impl)->getArrivalPoint();
}

bool TicketObjectAdapter::isTicketObject() {
	return ((TicketObjectImplementation*) impl)->isTicketObject();
}

/*
 *	TicketObjectHelper
 */

TicketObjectHelper* TicketObjectHelper::staticInitializer = TicketObjectHelper::instance();

TicketObjectHelper::TicketObjectHelper() {
	className = "TicketObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void TicketObjectHelper::finalizeHelper() {
	TicketObjectHelper::finalize();
}

DistributedObject* TicketObjectHelper::instantiateObject() {
	return new TicketObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* TicketObjectHelper::instantiateServant() {
	return new TicketObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* TicketObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new TicketObjectAdapter((TicketObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

