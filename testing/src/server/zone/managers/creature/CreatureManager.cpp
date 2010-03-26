/*
 *	server/zone/managers/creature/CreatureManager.cpp generated by engine3 IDL compiler 0.60
 */

#include "CreatureManager.h"

#include "server/zone/ZoneProcessServerImplementation.h"

#include "server/zone/managers/object/ObjectManager.h"

#include "server/zone/packets/MessageCallback.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/Zone.h"

#include "server/zone/managers/objectcontroller/ObjectController.h"

/*
 *	CreatureManagerStub
 */

CreatureManager::CreatureManager(Zone* planet, ZoneProcessServerImplementation* impl) : ManagedObject(DummyConstructorParameter::instance()) {
	_impl = new CreatureManagerImplementation(planet, impl);
	_impl->_setStub(this);
}

CreatureManager::CreatureManager(DummyConstructorParameter* param) : ManagedObject(param) {
}

CreatureManager::~CreatureManager() {
}


TransactionalObject* CreatureManager::clone() {
	CreatureManager* objectCopy = new CreatureManager(DummyConstructorParameter::instance());
	objectCopy->_impl = new CreatureManagerImplementation(DummyConstructorParameter::instance());
	*((CreatureManagerImplementation*) objectCopy->_impl) = *((CreatureManagerImplementation*) _impl);
	objectCopy->_impl->_setStub(objectCopy);
	return (TransactionalObject*) objectCopy;
}


CreatureObject* CreatureManager::spawnCreature(unsigned int templateCRC, float x, float y, unsigned long long parentID) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addUnsignedIntParameter(templateCRC);
		method.addFloatParameter(x);
		method.addFloatParameter(y);
		method.addUnsignedLongParameter(parentID);

		return (CreatureObject*) method.executeWithObjectReturn();
	} else
		return ((CreatureManagerImplementation*) _impl)->spawnCreature(templateCRC, x, y, parentID);
}

void CreatureManager::addCreatureToMap(CreatureObject* creature) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(creature);

		method.executeWithVoidReturn();
	} else
		((CreatureManagerImplementation*) _impl)->addCreatureToMap(creature);
}

void CreatureManager::removeCreatureFromMap(unsigned long long oid) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addUnsignedLongParameter(oid);

		method.executeWithVoidReturn();
	} else
		((CreatureManagerImplementation*) _impl)->removeCreatureFromMap(oid);
}

/*
 *	CreatureManagerImplementation
 */

CreatureManagerImplementation::CreatureManagerImplementation(DummyConstructorParameter* param) : ManagedObjectImplementation(param) {
	_initializeImplementation();
}

CreatureManagerImplementation::~CreatureManagerImplementation() {
}


void CreatureManagerImplementation::finalize() {
}

void CreatureManagerImplementation::_initializeImplementation() {
	_setClassHelper(CreatureManagerHelper::instance());

	_serializationHelperMethod();
}

void CreatureManagerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (CreatureManager*) stub;
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* CreatureManagerImplementation::_getStub() {
	return _this;
}

CreatureManagerImplementation::operator const CreatureManager*() {
	return _this;
}

void CreatureManagerImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void CreatureManagerImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void CreatureManagerImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void CreatureManagerImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void CreatureManagerImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void CreatureManagerImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void CreatureManagerImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void CreatureManagerImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	_setClassName("CreatureManager");

	addSerializableVariable("server", &server);
	addSerializableVariable("zone", &zone);
	addSerializableVariable("creatureMap", &creatureMap);
}

CreatureManagerImplementation::CreatureManagerImplementation(Zone* planet, ZoneProcessServerImplementation* impl) {
	_initializeImplementation();
	// server/zone/managers/creature/CreatureManager.idl(28):  		server = planet.getZoneServer();
	server = planet->getZoneServer();
	// server/zone/managers/creature/CreatureManager.idl(29):  		processor = impl;
	processor = impl;
	// server/zone/managers/creature/CreatureManager.idl(30):  		zone = planet;
	zone = planet;
	// server/zone/managers/creature/CreatureManager.idl(32):  		Logger.setLoggingName("CreatureManager");
	Logger::setLoggingName("CreatureManager");
	// server/zone/managers/creature/CreatureManager.idl(33):  		Logger.setGlobalLogging(true);
	Logger::setGlobalLogging(true);
	// server/zone/managers/creature/CreatureManager.idl(34):  		Logger.setLogging(false);
	Logger::setLogging(false);
}

void CreatureManagerImplementation::addCreatureToMap(CreatureObject* creature) {
	Locker _locker(_this);
	// server/zone/managers/creature/CreatureManager.idl(52):  		creatureMap.put(creature.getObjectID(), creature);
	(&creatureMap)->put(creature->getObjectID(), creature);
}

void CreatureManagerImplementation::removeCreatureFromMap(unsigned long long oid) {
	Locker _locker(_this);
	// server/zone/managers/creature/CreatureManager.idl(56):  		creatureMap.remove(oid);
	(&creatureMap)->remove(oid);
}

/*
 *	CreatureManagerAdapter
 */

CreatureManagerAdapter::CreatureManagerAdapter(CreatureManagerImplementation* obj) : ManagedObjectAdapter(obj) {
}

Packet* CreatureManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		resp->insertLong(spawnCreature(inv->getUnsignedIntParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getUnsignedLongParameter())->_getObjectID());
		break;
	case 7:
		addCreatureToMap((CreatureObject*) inv->getObjectParameter());
		break;
	case 8:
		removeCreatureFromMap(inv->getUnsignedLongParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

CreatureObject* CreatureManagerAdapter::spawnCreature(unsigned int templateCRC, float x, float y, unsigned long long parentID) {
	return ((CreatureManagerImplementation*) impl)->spawnCreature(templateCRC, x, y, parentID);
}

void CreatureManagerAdapter::addCreatureToMap(CreatureObject* creature) {
	((CreatureManagerImplementation*) impl)->addCreatureToMap(creature);
}

void CreatureManagerAdapter::removeCreatureFromMap(unsigned long long oid) {
	((CreatureManagerImplementation*) impl)->removeCreatureFromMap(oid);
}

/*
 *	CreatureManagerHelper
 */

CreatureManagerHelper* CreatureManagerHelper::staticInitializer = CreatureManagerHelper::instance();

CreatureManagerHelper::CreatureManagerHelper() {
	className = "CreatureManager";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void CreatureManagerHelper::finalizeHelper() {
	CreatureManagerHelper::finalize();
}

DistributedObject* CreatureManagerHelper::instantiateObject() {
	return new CreatureManager(DummyConstructorParameter::instance());
}

DistributedObjectServant* CreatureManagerHelper::instantiateServant() {
	return new CreatureManagerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* CreatureManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CreatureManagerAdapter((CreatureManagerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

