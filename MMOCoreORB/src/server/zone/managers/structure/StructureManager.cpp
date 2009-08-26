/*
 *	server/zone/managers/structure/StructureManager.cpp generated by engine3 IDL compiler 0.60
 */

#include "StructureManager.h"

#include "server/zone/Zone.h"

#include "server/zone/ZoneProcessServerImplementation.h"

#include "server/zone/managers/object/ObjectManager.h"

#include "server/zone/objects/building/BuildingObject.h"

#include "server/zone/objects/cell/CellObject.h"

/*
 *	StructureManagerStub
 */

StructureManager::StructureManager(Zone* zone, ZoneProcessServerImplementation* processor) : ManagedObject(DummyConstructorParameter::instance()) {
	_impl = new StructureManagerImplementation(zone, processor);
	_impl->_setStub(this);
	_impl->_setClassHelper(StructureManagerHelper::instance());

	((StructureManagerImplementation*) _impl)->_serializationHelperMethod();
}

StructureManager::StructureManager(DummyConstructorParameter* param) : ManagedObject(param) {
}

StructureManager::~StructureManager() {
}

void StructureManager::loadStaticBuildings() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((StructureManagerImplementation*) _impl)->loadStaticBuildings();
}

void StructureManager::loadPlayerStructures() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		((StructureManagerImplementation*) _impl)->loadPlayerStructures();
}

void StructureManager::loadStructures() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		method.executeWithVoidReturn();
	} else
		((StructureManagerImplementation*) _impl)->loadStructures();
}

BuildingObject* StructureManager::loadStaticBuilding(unsigned long long oid, int planet) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addUnsignedLongParameter(oid);
		method.addSignedIntParameter(planet);

		return (BuildingObject*) method.executeWithObjectReturn();
	} else
		return ((StructureManagerImplementation*) _impl)->loadStaticBuilding(oid, planet);
}

/*
 *	StructureManagerImplementation
 */

StructureManagerImplementation::~StructureManagerImplementation() {
}

void StructureManagerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (StructureManager*) stub;
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* StructureManagerImplementation::_getStub() {
	return _this;
}

StructureManagerImplementation::operator const StructureManager*() {
	return _this;
}

void StructureManagerImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void StructureManagerImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void StructureManagerImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void StructureManagerImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void StructureManagerImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void StructureManagerImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void StructureManagerImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void StructureManagerImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	addSerializableVariable("zone", &zone);
}

void StructureManagerImplementation::loadStructures() {
	// server/zone/managers/structure/StructureManager.idl(67):  loadStaticBuildings();
	loadStaticBuildings();
	// server/zone/managers/structure/StructureManager.idl(68):  loadPlayerStructures();
	loadPlayerStructures();
}

/*
 *	StructureManagerAdapter
 */

StructureManagerAdapter::StructureManagerAdapter(StructureManagerImplementation* obj) : ManagedObjectAdapter(obj) {
}

Packet* StructureManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		loadStaticBuildings();
		break;
	case 7:
		loadPlayerStructures();
		break;
	case 8:
		loadStructures();
		break;
	case 9:
		resp->insertLong(loadStaticBuilding(inv->getUnsignedLongParameter(), inv->getSignedIntParameter())->_getObjectID());
		break;
	default:
		return NULL;
	}

	return resp;
}

void StructureManagerAdapter::loadStaticBuildings() {
	return ((StructureManagerImplementation*) impl)->loadStaticBuildings();
}

void StructureManagerAdapter::loadPlayerStructures() {
	return ((StructureManagerImplementation*) impl)->loadPlayerStructures();
}

void StructureManagerAdapter::loadStructures() {
	return ((StructureManagerImplementation*) impl)->loadStructures();
}

BuildingObject* StructureManagerAdapter::loadStaticBuilding(unsigned long long oid, int planet) {
	return ((StructureManagerImplementation*) impl)->loadStaticBuilding(oid, planet);
}

/*
 *	StructureManagerHelper
 */

StructureManagerHelper* StructureManagerHelper::staticInitializer = StructureManagerHelper::instance();

StructureManagerHelper::StructureManagerHelper() {
	className = "StructureManager";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void StructureManagerHelper::finalizeHelper() {
	StructureManagerHelper::finalize();
}

DistributedObject* StructureManagerHelper::instantiateObject() {
	return new StructureManager(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* StructureManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new StructureManagerAdapter((StructureManagerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

