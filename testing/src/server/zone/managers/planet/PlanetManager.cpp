/*
 *	server/zone/managers/planet/PlanetManager.cpp generated by engine3 IDL compiler 0.60
 */

#include "PlanetManager.h"

#include "server/zone/Zone.h"

#include "server/zone/ZoneProcessServerImplementation.h"

#include "server/zone/objects/building/BuildingObject.h"

#include "server/zone/objects/scene/variables/StringId.h"

#include "server/zone/managers/structure/StructureManager.h"

#include "server/zone/managers/objectcontroller/ObjectController.h"

/*
 *	PlanetManagerStub
 */

PlanetManager::PlanetManager(Zone* planet, ZoneProcessServerImplementation* srv) : ManagedObject(DummyConstructorParameter::instance()) {
	_impl = new PlanetManagerImplementation(planet, srv);
	_impl->_setStub(this);
}

PlanetManager::PlanetManager(DummyConstructorParameter* param) : ManagedObject(param) {
}

PlanetManager::~PlanetManager() {
}


TransactionalObject* PlanetManager::clone() {
	PlanetManager* objectCopy = new PlanetManager(DummyConstructorParameter::instance());
	objectCopy->_impl = new PlanetManagerImplementation(DummyConstructorParameter::instance());
	*((PlanetManagerImplementation*) objectCopy->_impl) = *((PlanetManagerImplementation*) _impl);
	objectCopy->_impl->_setStub(objectCopy);
	return (TransactionalObject*) objectCopy;
}


void PlanetManager::initializeTransientMembers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((PlanetManagerImplementation*) _impl)->initializeTransientMembers();
}

void PlanetManager::initialize() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		((PlanetManagerImplementation*) _impl)->initialize();
}

void PlanetManager::loadRegions() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		method.executeWithVoidReturn();
	} else
		((PlanetManagerImplementation*) _impl)->loadRegions();
}

bool PlanetManager::getRegion(StringId& name, float x, float y) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((PlanetManagerImplementation*) _impl)->getRegion(name, x, y);
}

StructureManager* PlanetManager::getStructureManager() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		return (StructureManager*) method.executeWithObjectReturn();
	} else
		return ((PlanetManagerImplementation*) _impl)->getStructureManager();
}

TerrainManager* PlanetManager::getTerrainManager() {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((PlanetManagerImplementation*) _impl)->getTerrainManager();
}

Region* PlanetManager::getRegion(float x, float y) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addFloatParameter(x);
		method.addFloatParameter(y);

		return (Region*) method.executeWithObjectReturn();
	} else
		return ((PlanetManagerImplementation*) _impl)->getRegion(x, y);
}

int PlanetManager::getRegionCount() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		return method.executeWithSignedIntReturn();
	} else
		return ((PlanetManagerImplementation*) _impl)->getRegionCount();
}

Region* PlanetManager::getRegion(int index) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addSignedIntParameter(index);

		return (Region*) method.executeWithObjectReturn();
	} else
		return ((PlanetManagerImplementation*) _impl)->getRegion(index);
}

Region* PlanetManager::getRegion(const String& regionName) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addAsciiParameter(regionName);

		return (Region*) method.executeWithObjectReturn();
	} else
		return ((PlanetManagerImplementation*) _impl)->getRegion(regionName);
}

/*
 *	PlanetManagerImplementation
 */

PlanetManagerImplementation::PlanetManagerImplementation(DummyConstructorParameter* param) : ManagedObjectImplementation(param) {
	_initializeImplementation();
}

PlanetManagerImplementation::~PlanetManagerImplementation() {
	PlanetManagerImplementation::finalize();
}


void PlanetManagerImplementation::_initializeImplementation() {
	_setClassHelper(PlanetManagerHelper::instance());

	_serializationHelperMethod();
}

void PlanetManagerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (PlanetManager*) stub;
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* PlanetManagerImplementation::_getStub() {
	return _this;
}

PlanetManagerImplementation::operator const PlanetManager*() {
	return _this;
}

void PlanetManagerImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void PlanetManagerImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void PlanetManagerImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void PlanetManagerImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void PlanetManagerImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void PlanetManagerImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void PlanetManagerImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void PlanetManagerImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	_setClassName("PlanetManager");

	addSerializableVariable("zone", &zone);
	addSerializableVariable("regionMap", &regionMap);
	addSerializableVariable("structureManager", &structureManager);
}

PlanetManagerImplementation::PlanetManagerImplementation(Zone* planet, ZoneProcessServerImplementation* srv) {
	_initializeImplementation();
	// server/zone/managers/planet/PlanetManager.idl(76):  		zone = planet;
	zone = planet;
	// server/zone/managers/planet/PlanetManager.idl(77):  		server = srv;
	server = srv;
	// server/zone/managers/planet/PlanetManager.idl(79):  		Logger.setLoggingName("PlanetManager");
	Logger::setLoggingName("PlanetManager");
	// server/zone/managers/planet/PlanetManager.idl(80):  		Logger.setLogging("false");
	Logger::setLogging("false");
	// server/zone/managers/planet/PlanetManager.idl(81):  		Logger.setGlobalLogging("true");
	Logger::setGlobalLogging("true");
	// server/zone/managers/planet/PlanetManager.idl(83):  		terrainManager = null;
	terrainManager = NULL;
	// server/zone/managers/planet/PlanetManager.idl(85):  		structureManager = null;
	structureManager = NULL;
}

bool PlanetManagerImplementation::getRegion(StringId& name, float x, float y) {
	// server/zone/managers/planet/PlanetManager.idl(97):  		return regionMap.getRegion(name, x, y);
	return (&regionMap)->getRegion((&name), x, y);
}

StructureManager* PlanetManagerImplementation::getStructureManager() {
	// server/zone/managers/planet/PlanetManager.idl(101):  		return structureManager;
	return structureManager;
}

TerrainManager* PlanetManagerImplementation::getTerrainManager() {
	// server/zone/managers/planet/PlanetManager.idl(106):  		return terrainManager;
	return terrainManager;
}

Region* PlanetManagerImplementation::getRegion(float x, float y) {
	// server/zone/managers/planet/PlanetManager.idl(110):  		return regionMap.getRegion(x, y);
	return (&regionMap)->getRegion(x, y);
}

int PlanetManagerImplementation::getRegionCount() {
	// server/zone/managers/planet/PlanetManager.idl(114):  		return regionMap.size();
	return (&regionMap)->size();
}

Region* PlanetManagerImplementation::getRegion(int index) {
	// server/zone/managers/planet/PlanetManager.idl(118):  		return regionMap.getRegion(index);
	return (&regionMap)->getRegion(index);
}

Region* PlanetManagerImplementation::getRegion(const String& regionName) {
	// server/zone/managers/planet/PlanetManager.idl(122):  		return regionMap.getRegion(regionName);
	return (&regionMap)->getRegion(regionName);
}

/*
 *	PlanetManagerAdapter
 */

PlanetManagerAdapter::PlanetManagerAdapter(PlanetManagerImplementation* obj) : ManagedObjectAdapter(obj) {
}

Packet* PlanetManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		finalize();
		break;
	case 8:
		initialize();
		break;
	case 9:
		loadRegions();
		break;
	case 10:
		resp->insertLong(getStructureManager()->_getObjectID());
		break;
	case 11:
		resp->insertLong(getRegion(inv->getFloatParameter(), inv->getFloatParameter())->_getObjectID());
		break;
	case 12:
		resp->insertSignedInt(getRegionCount());
		break;
	case 13:
		resp->insertLong(getRegion(inv->getSignedIntParameter())->_getObjectID());
		break;
	case 14:
		resp->insertLong(getRegion(inv->getAsciiParameter(_param0_getRegion__String_))->_getObjectID());
		break;
	default:
		return NULL;
	}

	return resp;
}

void PlanetManagerAdapter::initializeTransientMembers() {
	((PlanetManagerImplementation*) impl)->initializeTransientMembers();
}

void PlanetManagerAdapter::finalize() {
	((PlanetManagerImplementation*) impl)->finalize();
}

void PlanetManagerAdapter::initialize() {
	((PlanetManagerImplementation*) impl)->initialize();
}

void PlanetManagerAdapter::loadRegions() {
	((PlanetManagerImplementation*) impl)->loadRegions();
}

StructureManager* PlanetManagerAdapter::getStructureManager() {
	return ((PlanetManagerImplementation*) impl)->getStructureManager();
}

Region* PlanetManagerAdapter::getRegion(float x, float y) {
	return ((PlanetManagerImplementation*) impl)->getRegion(x, y);
}

int PlanetManagerAdapter::getRegionCount() {
	return ((PlanetManagerImplementation*) impl)->getRegionCount();
}

Region* PlanetManagerAdapter::getRegion(int index) {
	return ((PlanetManagerImplementation*) impl)->getRegion(index);
}

Region* PlanetManagerAdapter::getRegion(const String& regionName) {
	return ((PlanetManagerImplementation*) impl)->getRegion(regionName);
}

/*
 *	PlanetManagerHelper
 */

PlanetManagerHelper* PlanetManagerHelper::staticInitializer = PlanetManagerHelper::instance();

PlanetManagerHelper::PlanetManagerHelper() {
	className = "PlanetManager";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void PlanetManagerHelper::finalizeHelper() {
	PlanetManagerHelper::finalize();
}

DistributedObject* PlanetManagerHelper::instantiateObject() {
	return new PlanetManager(DummyConstructorParameter::instance());
}

DistributedObjectServant* PlanetManagerHelper::instantiateServant() {
	return new PlanetManagerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* PlanetManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new PlanetManagerAdapter((PlanetManagerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

