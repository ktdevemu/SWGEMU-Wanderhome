/*
 *	server/zone/objects/area/SpawnObserver.cpp generated by engine3 IDL compiler 0.60
 */

#include "SpawnObserver.h"

#include "server/zone/objects/scene/Observable.h"

#include "server/zone/objects/scene/SceneObject.h"

/*
 *	SpawnObserverStub
 */

SpawnObserver::SpawnObserver(DynamicSpawnArea* area) : Observer(DummyConstructorParameter::instance()) {
	SpawnObserverImplementation* _implementation = new SpawnObserverImplementation(area);
	_impl = _implementation;
	_impl->_setStub(this);
}

SpawnObserver::SpawnObserver(DummyConstructorParameter* param) : Observer(param) {
}

SpawnObserver::~SpawnObserver() {
}


int SpawnObserver::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	SpawnObserverImplementation* _implementation = (SpawnObserverImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addUnsignedIntParameter(eventType);
		method.addObjectParameter(observable);
		method.addObjectParameter(arg1);
		method.addSignedLongParameter(arg2);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->notifyObserverEvent(eventType, observable, arg1, arg2);
}

DistributedObjectServant* SpawnObserver::_getImplementation() {

	_updated = true;
	return _impl;
}

void SpawnObserver::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	SpawnObserverImplementation
 */

SpawnObserverImplementation::SpawnObserverImplementation(DummyConstructorParameter* param) : ObserverImplementation(param) {
	_initializeImplementation();
}


SpawnObserverImplementation::~SpawnObserverImplementation() {
}


void SpawnObserverImplementation::finalize() {
}

void SpawnObserverImplementation::_initializeImplementation() {
	_setClassHelper(SpawnObserverHelper::instance());

	_serializationHelperMethod();
}

void SpawnObserverImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (SpawnObserver*) stub;
	ObserverImplementation::_setStub(stub);
}

DistributedObjectStub* SpawnObserverImplementation::_getStub() {
	return _this;
}

SpawnObserverImplementation::operator const SpawnObserver*() {
	return _this;
}

void SpawnObserverImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void SpawnObserverImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void SpawnObserverImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void SpawnObserverImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void SpawnObserverImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void SpawnObserverImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void SpawnObserverImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void SpawnObserverImplementation::_serializationHelperMethod() {
	ObserverImplementation::_serializationHelperMethod();

	_setClassName("SpawnObserver");

	addSerializableVariable("spawnArea", &spawnArea);
}

SpawnObserverImplementation::SpawnObserverImplementation(DynamicSpawnArea* area) {
	_initializeImplementation();
	// server/zone/objects/area/SpawnObserver.idl(56):  		spawnArea = area;
	spawnArea = area;
	// server/zone/objects/area/SpawnObserver.idl(58):  		Logger.setLoggingName("SpawnObserver");
	Logger::setLoggingName("SpawnObserver");
}

int SpawnObserverImplementation::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	// server/zone/objects/area/SpawnObserver.idl(62):  
	if (spawnArea == NULL)	// server/zone/objects/area/SpawnObserver.idl(63):  			return 1;
	return 1;

	else 	// server/zone/objects/area/SpawnObserver.idl(65):  			return spawnArea.notifyObserverEvent(eventType, observable, arg1, arg2);
	return spawnArea->notifyObserverEvent(eventType, observable, arg1, arg2);
}

/*
 *	SpawnObserverAdapter
 */

SpawnObserverAdapter::SpawnObserverAdapter(SpawnObserverImplementation* obj) : ObserverAdapter(obj) {
}

Packet* SpawnObserverAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		resp->insertSignedInt(notifyObserverEvent(inv->getUnsignedIntParameter(), (Observable*) inv->getObjectParameter(), (ManagedObject*) inv->getObjectParameter(), inv->getSignedLongParameter()));
		break;
	default:
		return NULL;
	}

	return resp;
}

int SpawnObserverAdapter::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	return ((SpawnObserverImplementation*) impl)->notifyObserverEvent(eventType, observable, arg1, arg2);
}

/*
 *	SpawnObserverHelper
 */

SpawnObserverHelper* SpawnObserverHelper::staticInitializer = SpawnObserverHelper::instance();

SpawnObserverHelper::SpawnObserverHelper() {
	className = "SpawnObserver";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void SpawnObserverHelper::finalizeHelper() {
	SpawnObserverHelper::finalize();
}

DistributedObject* SpawnObserverHelper::instantiateObject() {
	return new SpawnObserver(DummyConstructorParameter::instance());
}

DistributedObjectServant* SpawnObserverHelper::instantiateServant() {
	return new SpawnObserverImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* SpawnObserverHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new SpawnObserverAdapter((SpawnObserverImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

