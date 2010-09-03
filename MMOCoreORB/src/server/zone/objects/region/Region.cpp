/*
 *	server/zone/objects/region/Region.cpp generated by engine3 IDL compiler 0.60
 */

#include "Region.h"

#include "server/zone/objects/tangible/terminal/bazaar/BazaarTerminal.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/objects/creature/shuttle/ShuttleCreature.h"

#include "server/zone/objects/building/city/CityHallObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	RegionStub
 */

Region::Region() : ActiveArea(DummyConstructorParameter::instance()) {
	_impl = new RegionImplementation();
	_impl->_setStub(this);
}

Region::Region(DummyConstructorParameter* param) : ActiveArea(param) {
}

Region::~Region() {
}


void Region::notifyEnter(SceneObject* object) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		((RegionImplementation*) _impl)->notifyEnter(object);
}

void Region::sendGreetingMessage(PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((RegionImplementation*) _impl)->sendGreetingMessage(player);
}

void Region::sendDepartingMessage(PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((RegionImplementation*) _impl)->sendDepartingMessage(player);
}

void Region::notifyExit(SceneObject* object) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		((RegionImplementation*) _impl)->notifyExit(object);
}

void Region::addBazaar(BazaarTerminal* ter) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(ter);

		method.executeWithVoidReturn();
	} else
		((RegionImplementation*) _impl)->addBazaar(ter);
}

BazaarTerminal* Region::getBazaar(int idx) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addSignedIntParameter(idx);

		return (BazaarTerminal*) method.executeWithObjectReturn();
	} else
		return ((RegionImplementation*) _impl)->getBazaar(idx);
}

ShuttleCreature* Region::getShuttle() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		return (ShuttleCreature*) method.executeWithObjectReturn();
	} else
		return ((RegionImplementation*) _impl)->getShuttle();
}

int Region::getBazaarCount() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		return method.executeWithSignedIntReturn();
	} else
		return ((RegionImplementation*) _impl)->getBazaarCount();
}

bool Region::isRegion() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);

		return method.executeWithBooleanReturn();
	} else
		return ((RegionImplementation*) _impl)->isRegion();
}

CityHallObject* Region::getCityHall() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);

		return (CityHallObject*) method.executeWithObjectReturn();
	} else
		return ((RegionImplementation*) _impl)->getCityHall();
}

void Region::setCityHall(CityHallObject* hall) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addObjectParameter(hall);

		method.executeWithVoidReturn();
	} else
		((RegionImplementation*) _impl)->setCityHall(hall);
}

/*
 *	RegionImplementation
 */

RegionImplementation::RegionImplementation(DummyConstructorParameter* param) : ActiveAreaImplementation(param) {
	_initializeImplementation();
}

RegionImplementation::~RegionImplementation() {
}


void RegionImplementation::finalize() {
}

void RegionImplementation::_initializeImplementation() {
	_setClassHelper(RegionHelper::instance());

	_serializationHelperMethod();
}

void RegionImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (Region*) stub;
	ActiveAreaImplementation::_setStub(stub);
}

DistributedObjectStub* RegionImplementation::_getStub() {
	return _this;
}

RegionImplementation::operator const Region*() {
	return _this;
}

void RegionImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void RegionImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void RegionImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void RegionImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void RegionImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void RegionImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void RegionImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void RegionImplementation::_serializationHelperMethod() {
	ActiveAreaImplementation::_serializationHelperMethod();

	_setClassName("Region");

	addSerializableVariable("bazaars", &bazaars);
	addSerializableVariable("shuttle", &shuttle);
	addSerializableVariable("cityHall", &cityHall);
}

RegionImplementation::RegionImplementation() : ActiveAreaImplementation() {
	_initializeImplementation();
	// server/zone/objects/region/Region.idl(72):  		bazaars.setNoDuplicateInsertPlan();
	(&bazaars)->setNoDuplicateInsertPlan();
	// server/zone/objects/region/Region.idl(73):  		bazaars.setNullValue(null);
	(&bazaars)->setNullValue(NULL);
}

void RegionImplementation::notifyEnter(SceneObject* object) {
	// server/zone/objects/region/Region.idl(77):  		if 
	if (object->isBazaarTerminal())	// server/zone/objects/region/Region.idl(78):  			bazaars.put(object.getObjectID(), (BazaarTerminal)object);
	(&bazaars)->put(object->getObjectID(), (BazaarTerminal*) object);
	// server/zone/objects/region/Region.idl(80):  		if 
	if (object->isPlayerCreature())	// server/zone/objects/region/Region.idl(81):  			sendGreetingMessage((PlayerCreature) object);
	sendGreetingMessage((PlayerCreature*) object);
	// server/zone/objects/region/Region.idl(83):  	}
	if (object->isCreatureObject()){
	// server/zone/objects/region/Region.idl(84):  			CreatureObject creature = (CreatureObject) object;
	CreatureObject* creature = (CreatureObject*) object;
	// server/zone/objects/region/Region.idl(86):  		}
	if (creature->isShuttleCreature()){
	// server/zone/objects/region/Region.idl(87):  				shuttle = (ShuttleCreature) creature;
	shuttle = (ShuttleCreature*) creature;
}
}
}

void RegionImplementation::notifyExit(SceneObject* object) {
	// server/zone/objects/region/Region.idl(96):  		if 
	if (object->isBazaarTerminal())	// server/zone/objects/region/Region.idl(97):  			bazaars.drop(object.getObjectID());
	(&bazaars)->drop(object->getObjectID());
	// server/zone/objects/region/Region.idl(99):  		if 
	if (object->isPlayerCreature())	// server/zone/objects/region/Region.idl(100):  			sendDepartingMessage((PlayerCreature) object);
	sendDepartingMessage((PlayerCreature*) object);
	// server/zone/objects/region/Region.idl(102):  	}
	if (shuttle != NULL && object->isCreatureObject()){
	// server/zone/objects/region/Region.idl(103):  			CreatureObject creature = (CreatureObject) object;
	CreatureObject* creature = (CreatureObject*) object;
	// server/zone/objects/region/Region.idl(105):  		}
	if (creature->isShuttleCreature()){
	// server/zone/objects/region/Region.idl(106):  				ShuttleCreature shuttleObject = (ShuttleCreature) creature;
	ShuttleCreature* shuttleObject = (ShuttleCreature*) creature;
	// server/zone/objects/region/Region.idl(108):  			}
	if (shuttle == shuttleObject)	// server/zone/objects/region/Region.idl(109):  					shuttle = null;
	shuttle = NULL;
}
}
}

void RegionImplementation::addBazaar(BazaarTerminal* ter) {
	// server/zone/objects/region/Region.idl(115):  		bazaars.put(ter.getObjectID(), ter);
	(&bazaars)->put(ter->getObjectID(), ter);
}

BazaarTerminal* RegionImplementation::getBazaar(int idx) {
	// server/zone/objects/region/Region.idl(119):  		return bazaars.get(idx);
	return (&bazaars)->get(idx);
}

ShuttleCreature* RegionImplementation::getShuttle() {
	// server/zone/objects/region/Region.idl(123):  		return shuttle;
	return shuttle;
}

int RegionImplementation::getBazaarCount() {
	// server/zone/objects/region/Region.idl(127):  		return bazaars.size();
	return (&bazaars)->size();
}

bool RegionImplementation::isRegion() {
	// server/zone/objects/region/Region.idl(131):  		return true;
	return true;
}

CityHallObject* RegionImplementation::getCityHall() {
	// server/zone/objects/region/Region.idl(135):  		return cityHall;
	return cityHall;
}

void RegionImplementation::setCityHall(CityHallObject* hall) {
	// server/zone/objects/region/Region.idl(139):  		cityHall = hall;
	cityHall = hall;
}

/*
 *	RegionAdapter
 */

RegionAdapter::RegionAdapter(RegionImplementation* obj) : ActiveAreaAdapter(obj) {
}

Packet* RegionAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		notifyEnter((SceneObject*) inv->getObjectParameter());
		break;
	case 7:
		sendGreetingMessage((PlayerCreature*) inv->getObjectParameter());
		break;
	case 8:
		sendDepartingMessage((PlayerCreature*) inv->getObjectParameter());
		break;
	case 9:
		notifyExit((SceneObject*) inv->getObjectParameter());
		break;
	case 10:
		addBazaar((BazaarTerminal*) inv->getObjectParameter());
		break;
	case 11:
		resp->insertLong(getBazaar(inv->getSignedIntParameter())->_getObjectID());
		break;
	case 12:
		resp->insertLong(getShuttle()->_getObjectID());
		break;
	case 13:
		resp->insertSignedInt(getBazaarCount());
		break;
	case 14:
		resp->insertBoolean(isRegion());
		break;
	case 15:
		resp->insertLong(getCityHall()->_getObjectID());
		break;
	case 16:
		setCityHall((CityHallObject*) inv->getObjectParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void RegionAdapter::notifyEnter(SceneObject* object) {
	((RegionImplementation*) impl)->notifyEnter(object);
}

void RegionAdapter::sendGreetingMessage(PlayerCreature* player) {
	((RegionImplementation*) impl)->sendGreetingMessage(player);
}

void RegionAdapter::sendDepartingMessage(PlayerCreature* player) {
	((RegionImplementation*) impl)->sendDepartingMessage(player);
}

void RegionAdapter::notifyExit(SceneObject* object) {
	((RegionImplementation*) impl)->notifyExit(object);
}

void RegionAdapter::addBazaar(BazaarTerminal* ter) {
	((RegionImplementation*) impl)->addBazaar(ter);
}

BazaarTerminal* RegionAdapter::getBazaar(int idx) {
	return ((RegionImplementation*) impl)->getBazaar(idx);
}

ShuttleCreature* RegionAdapter::getShuttle() {
	return ((RegionImplementation*) impl)->getShuttle();
}

int RegionAdapter::getBazaarCount() {
	return ((RegionImplementation*) impl)->getBazaarCount();
}

bool RegionAdapter::isRegion() {
	return ((RegionImplementation*) impl)->isRegion();
}

CityHallObject* RegionAdapter::getCityHall() {
	return ((RegionImplementation*) impl)->getCityHall();
}

void RegionAdapter::setCityHall(CityHallObject* hall) {
	((RegionImplementation*) impl)->setCityHall(hall);
}

/*
 *	RegionHelper
 */

RegionHelper* RegionHelper::staticInitializer = RegionHelper::instance();

RegionHelper::RegionHelper() {
	className = "Region";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void RegionHelper::finalizeHelper() {
	RegionHelper::finalize();
}

DistributedObject* RegionHelper::instantiateObject() {
	return new Region(DummyConstructorParameter::instance());
}

DistributedObjectServant* RegionHelper::instantiateServant() {
	return new RegionImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* RegionHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new RegionAdapter((RegionImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

