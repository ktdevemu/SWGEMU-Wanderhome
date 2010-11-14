/*
 *	server/zone/objects/area/StaticSpawnArea.cpp generated by engine3 IDL compiler 0.60
 */

#include "StaticSpawnArea.h"

#include "server/zone/managers/object/ObjectManager.h"

#include "server/zone/objects/creature/AiAgent.h"

#include "server/zone/objects/creature/aigroup/AiGroup.h"

#include "server/zone/objects/area/SpawnObserver.h"

#include "server/zone/objects/scene/Observable.h"

/*
 *	StaticSpawnAreaStub
 */

StaticSpawnArea::StaticSpawnArea() : SpawnArea(DummyConstructorParameter::instance()) {
	StaticSpawnAreaImplementation* _implementation = new StaticSpawnAreaImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

StaticSpawnArea::StaticSpawnArea(DummyConstructorParameter* param) : SpawnArea(param) {
}

StaticSpawnArea::~StaticSpawnArea() {
}


void StaticSpawnArea::spawnCreatures() {
	StaticSpawnAreaImplementation* _implementation = (StaticSpawnAreaImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		_implementation->spawnCreatures();
}

bool StaticSpawnArea::isStaticArea() {
	StaticSpawnAreaImplementation* _implementation = (StaticSpawnAreaImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isStaticArea();
}

DistributedObjectServant* StaticSpawnArea::_getImplementation() {

	_updated = true;
	return _impl;
}

void StaticSpawnArea::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	StaticSpawnAreaImplementation
 */

StaticSpawnAreaImplementation::StaticSpawnAreaImplementation(DummyConstructorParameter* param) : SpawnAreaImplementation(param) {
	_initializeImplementation();
}


StaticSpawnAreaImplementation::~StaticSpawnAreaImplementation() {
}


void StaticSpawnAreaImplementation::finalize() {
}

void StaticSpawnAreaImplementation::_initializeImplementation() {
	_setClassHelper(StaticSpawnAreaHelper::instance());

	_serializationHelperMethod();
}

void StaticSpawnAreaImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (StaticSpawnArea*) stub;
	SpawnAreaImplementation::_setStub(stub);
}

DistributedObjectStub* StaticSpawnAreaImplementation::_getStub() {
	return _this;
}

StaticSpawnAreaImplementation::operator const StaticSpawnArea*() {
	return _this;
}

void StaticSpawnAreaImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void StaticSpawnAreaImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void StaticSpawnAreaImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void StaticSpawnAreaImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void StaticSpawnAreaImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void StaticSpawnAreaImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void StaticSpawnAreaImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void StaticSpawnAreaImplementation::_serializationHelperMethod() {
	SpawnAreaImplementation::_serializationHelperMethod();

	_setClassName("StaticSpawnArea");

	addSerializableVariable("groups", &groups);
}

StaticSpawnAreaImplementation::StaticSpawnAreaImplementation() {
	_initializeImplementation();
	// server/zone/objects/area/StaticSpawnArea.idl(61):  		Logger.setLoggingName("StaticSpawnArea");
	Logger::setLoggingName("StaticSpawnArea");
}

bool StaticSpawnAreaImplementation::isStaticArea() {
	// server/zone/objects/area/StaticSpawnArea.idl(67):  		return true;
	return true;
}

/*
 *	StaticSpawnAreaAdapter
 */

StaticSpawnAreaAdapter::StaticSpawnAreaAdapter(StaticSpawnAreaImplementation* obj) : SpawnAreaAdapter(obj) {
}

Packet* StaticSpawnAreaAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		spawnCreatures();
		break;
	case 7:
		resp->insertBoolean(isStaticArea());
		break;
	default:
		return NULL;
	}

	return resp;
}

void StaticSpawnAreaAdapter::spawnCreatures() {
	((StaticSpawnAreaImplementation*) impl)->spawnCreatures();
}

bool StaticSpawnAreaAdapter::isStaticArea() {
	return ((StaticSpawnAreaImplementation*) impl)->isStaticArea();
}

/*
 *	StaticSpawnAreaHelper
 */

StaticSpawnAreaHelper* StaticSpawnAreaHelper::staticInitializer = StaticSpawnAreaHelper::instance();

StaticSpawnAreaHelper::StaticSpawnAreaHelper() {
	className = "StaticSpawnArea";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void StaticSpawnAreaHelper::finalizeHelper() {
	StaticSpawnAreaHelper::finalize();
}

DistributedObject* StaticSpawnAreaHelper::instantiateObject() {
	return new StaticSpawnArea(DummyConstructorParameter::instance());
}

DistributedObjectServant* StaticSpawnAreaHelper::instantiateServant() {
	return new StaticSpawnAreaImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* StaticSpawnAreaHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new StaticSpawnAreaAdapter((StaticSpawnAreaImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

