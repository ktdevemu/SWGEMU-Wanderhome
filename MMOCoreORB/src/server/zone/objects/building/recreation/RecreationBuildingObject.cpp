/*
 *	server/zone/objects/building/recreation/RecreationBuildingObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "RecreationBuildingObject.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/cell/CellObject.h"

/*
 *	RecreationBuildingObjectStub
 */

RecreationBuildingObject::RecreationBuildingObject() : BuildingObject(DummyConstructorParameter::instance()) {
	RecreationBuildingObjectImplementation* _implementation = new RecreationBuildingObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

RecreationBuildingObject::RecreationBuildingObject(DummyConstructorParameter* param) : BuildingObject(param) {
}

RecreationBuildingObject::~RecreationBuildingObject() {
}


DistributedObjectServant* RecreationBuildingObject::_getImplementation() {
	return _impl;}

void RecreationBuildingObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	RecreationBuildingObjectImplementation
 */

RecreationBuildingObjectImplementation::RecreationBuildingObjectImplementation(DummyConstructorParameter* param) : BuildingObjectImplementation(param) {
	_initializeImplementation();
}


RecreationBuildingObjectImplementation::~RecreationBuildingObjectImplementation() {
}


void RecreationBuildingObjectImplementation::finalize() {
}

void RecreationBuildingObjectImplementation::_initializeImplementation() {
	_setClassHelper(RecreationBuildingObjectHelper::instance());

	_serializationHelperMethod();
}

void RecreationBuildingObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (RecreationBuildingObject*) stub;
	BuildingObjectImplementation::_setStub(stub);
}

DistributedObjectStub* RecreationBuildingObjectImplementation::_getStub() {
	return _this;
}

RecreationBuildingObjectImplementation::operator const RecreationBuildingObject*() {
	return _this;
}

void RecreationBuildingObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void RecreationBuildingObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void RecreationBuildingObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void RecreationBuildingObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void RecreationBuildingObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void RecreationBuildingObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void RecreationBuildingObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void RecreationBuildingObjectImplementation::_serializationHelperMethod() {
	BuildingObjectImplementation::_serializationHelperMethod();

	_setClassName("RecreationBuildingObject");

}

RecreationBuildingObjectImplementation::RecreationBuildingObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/building/recreation/RecreationBuildingObject.idl(55):  		Logger.setLoggingName("RecreationBuildingObject");
	Logger::setLoggingName("RecreationBuildingObject");
}

/*
 *	RecreationBuildingObjectAdapter
 */

RecreationBuildingObjectAdapter::RecreationBuildingObjectAdapter(RecreationBuildingObjectImplementation* obj) : BuildingObjectAdapter(obj) {
}

Packet* RecreationBuildingObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	default:
		return NULL;
	}

	return resp;
}

/*
 *	RecreationBuildingObjectHelper
 */

RecreationBuildingObjectHelper* RecreationBuildingObjectHelper::staticInitializer = RecreationBuildingObjectHelper::instance();

RecreationBuildingObjectHelper::RecreationBuildingObjectHelper() {
	className = "RecreationBuildingObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void RecreationBuildingObjectHelper::finalizeHelper() {
	RecreationBuildingObjectHelper::finalize();
}

DistributedObject* RecreationBuildingObjectHelper::instantiateObject() {
	return new RecreationBuildingObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* RecreationBuildingObjectHelper::instantiateServant() {
	return new RecreationBuildingObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* RecreationBuildingObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new RecreationBuildingObjectAdapter((RecreationBuildingObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

