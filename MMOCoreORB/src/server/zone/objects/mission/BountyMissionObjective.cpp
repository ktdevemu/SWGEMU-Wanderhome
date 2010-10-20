/*
 *	server/zone/objects/mission/BountyMissionObjective.cpp generated by engine3 IDL compiler 0.61
 */

#include "BountyMissionObjective.h"

#include "server/zone/objects/scene/Observer.h"

#include "server/zone/objects/scene/Observable.h"

#include "server/zone/objects/mission/MissionObject.h"

#include "server/zone/objects/mission/MissionObserver.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/creature/AiAgent.h"

#include "server/zone/templates/SharedObjectTemplate.h"

/*
 *	BountyMissionObjectiveStub
 */

BountyMissionObjective::BountyMissionObjective(MissionObject* mission) : MissionObjective(DummyConstructorParameter::instance()) {
	BountyMissionObjectiveImplementation* _implementation = new BountyMissionObjectiveImplementation(mission);
	_impl = _implementation;
	_impl->_setStub(this);
}

BountyMissionObjective::BountyMissionObjective(DummyConstructorParameter* param) : MissionObjective(param) {
}

BountyMissionObjective::~BountyMissionObjective() {
}


void BountyMissionObjective::initializeTransientMembers() {
	BountyMissionObjectiveImplementation* _implementation = (BountyMissionObjectiveImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void BountyMissionObjective::activate() {
	BountyMissionObjectiveImplementation* _implementation = (BountyMissionObjectiveImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		_implementation->activate();
}

void BountyMissionObjective::abort() {
	BountyMissionObjectiveImplementation* _implementation = (BountyMissionObjectiveImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		method.executeWithVoidReturn();
	} else
		_implementation->abort();
}

void BountyMissionObjective::complete() {
	BountyMissionObjectiveImplementation* _implementation = (BountyMissionObjectiveImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		method.executeWithVoidReturn();
	} else
		_implementation->complete();
}

void BountyMissionObjective::spawnTarget(int zoneID) {
	BountyMissionObjectiveImplementation* _implementation = (BountyMissionObjectiveImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addSignedIntParameter(zoneID);

		method.executeWithVoidReturn();
	} else
		_implementation->spawnTarget(zoneID);
}

int BountyMissionObjective::notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	BountyMissionObjectiveImplementation* _implementation = (BountyMissionObjectiveImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addObjectParameter(observer);
		method.addUnsignedIntParameter(eventType);
		method.addObjectParameter(observable);
		method.addObjectParameter(arg1);
		method.addSignedLongParameter(arg2);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->notifyObserverEvent(observer, eventType, observable, arg1, arg2);
}

void BountyMissionObjective::setNpcTemplateToSpawn(SharedObjectTemplate* sp) {
	BountyMissionObjectiveImplementation* _implementation = (BountyMissionObjectiveImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->setNpcTemplateToSpawn(sp);
}

DistributedObjectServant* BountyMissionObjective::_getImplementation() {
	return _impl;}

void BountyMissionObjective::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	BountyMissionObjectiveImplementation
 */

BountyMissionObjectiveImplementation::BountyMissionObjectiveImplementation(DummyConstructorParameter* param) : MissionObjectiveImplementation(param) {
	_initializeImplementation();
}


BountyMissionObjectiveImplementation::~BountyMissionObjectiveImplementation() {
	BountyMissionObjectiveImplementation::finalize();
}


void BountyMissionObjectiveImplementation::_initializeImplementation() {
	_setClassHelper(BountyMissionObjectiveHelper::instance());

	_serializationHelperMethod();
}

void BountyMissionObjectiveImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (BountyMissionObjective*) stub;
	MissionObjectiveImplementation::_setStub(stub);
}

DistributedObjectStub* BountyMissionObjectiveImplementation::_getStub() {
	return _this;
}

BountyMissionObjectiveImplementation::operator const BountyMissionObjective*() {
	return _this;
}

void BountyMissionObjectiveImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void BountyMissionObjectiveImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void BountyMissionObjectiveImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void BountyMissionObjectiveImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void BountyMissionObjectiveImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void BountyMissionObjectiveImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void BountyMissionObjectiveImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void BountyMissionObjectiveImplementation::_serializationHelperMethod() {
	MissionObjectiveImplementation::_serializationHelperMethod();

	_setClassName("BountyMissionObjective");

	addSerializableVariable("npcTemplateToSpawn", &npcTemplateToSpawn);
	addSerializableVariable("npcTarget", &npcTarget);
}

BountyMissionObjectiveImplementation::BountyMissionObjectiveImplementation(MissionObject* mission) : MissionObjectiveImplementation(mission) {
	_initializeImplementation();
	// server/zone/objects/mission/BountyMissionObjective.idl(66):  		Logger.setLoggingName("BountyMissionObjective");
	Logger::setLoggingName("BountyMissionObjective");
}

void BountyMissionObjectiveImplementation::finalize() {
}

void BountyMissionObjectiveImplementation::initializeTransientMembers() {
	// server/zone/objects/mission/BountyMissionObjective.idl(74):  		super.initializeTransientMembers();
	MissionObjectiveImplementation::initializeTransientMembers();
	// server/zone/objects/mission/BountyMissionObjective.idl(76):  		Logger.setLoggingName("MissionObject");
	Logger::setLoggingName("MissionObject");
	// server/zone/objects/mission/BountyMissionObjective.idl(78):  		activate();
	activate();
}

/*
 *	BountyMissionObjectiveAdapter
 */

BountyMissionObjectiveAdapter::BountyMissionObjectiveAdapter(BountyMissionObjectiveImplementation* obj) : MissionObjectiveAdapter(obj) {
}

Packet* BountyMissionObjectiveAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		finalize();
		break;
	case 7:
		initializeTransientMembers();
		break;
	case 8:
		activate();
		break;
	case 9:
		abort();
		break;
	case 10:
		complete();
		break;
	case 11:
		spawnTarget(inv->getSignedIntParameter());
		break;
	case 12:
		resp->insertSignedInt(notifyObserverEvent((MissionObserver*) inv->getObjectParameter(), inv->getUnsignedIntParameter(), (Observable*) inv->getObjectParameter(), (ManagedObject*) inv->getObjectParameter(), inv->getSignedLongParameter()));
		break;
	default:
		return NULL;
	}

	return resp;
}

void BountyMissionObjectiveAdapter::finalize() {
	((BountyMissionObjectiveImplementation*) impl)->finalize();
}

void BountyMissionObjectiveAdapter::initializeTransientMembers() {
	((BountyMissionObjectiveImplementation*) impl)->initializeTransientMembers();
}

void BountyMissionObjectiveAdapter::activate() {
	((BountyMissionObjectiveImplementation*) impl)->activate();
}

void BountyMissionObjectiveAdapter::abort() {
	((BountyMissionObjectiveImplementation*) impl)->abort();
}

void BountyMissionObjectiveAdapter::complete() {
	((BountyMissionObjectiveImplementation*) impl)->complete();
}

void BountyMissionObjectiveAdapter::spawnTarget(int zoneID) {
	((BountyMissionObjectiveImplementation*) impl)->spawnTarget(zoneID);
}

int BountyMissionObjectiveAdapter::notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	return ((BountyMissionObjectiveImplementation*) impl)->notifyObserverEvent(observer, eventType, observable, arg1, arg2);
}

/*
 *	BountyMissionObjectiveHelper
 */

BountyMissionObjectiveHelper* BountyMissionObjectiveHelper::staticInitializer = BountyMissionObjectiveHelper::instance();

BountyMissionObjectiveHelper::BountyMissionObjectiveHelper() {
	className = "BountyMissionObjective";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void BountyMissionObjectiveHelper::finalizeHelper() {
	BountyMissionObjectiveHelper::finalize();
}

DistributedObject* BountyMissionObjectiveHelper::instantiateObject() {
	return new BountyMissionObjective(DummyConstructorParameter::instance());
}

DistributedObjectServant* BountyMissionObjectiveHelper::instantiateServant() {
	return new BountyMissionObjectiveImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* BountyMissionObjectiveHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new BountyMissionObjectiveAdapter((BountyMissionObjectiveImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

