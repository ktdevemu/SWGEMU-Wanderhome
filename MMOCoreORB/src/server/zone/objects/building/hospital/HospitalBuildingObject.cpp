/*
 *	server/zone/objects/building/hospital/HospitalBuildingObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "HospitalBuildingObject.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/cell/CellObject.h"

/*
 *	HospitalBuildingObjectStub
 */

enum {RPC_ISHOSPITALBUILDINGOBJECT__ = 6};

HospitalBuildingObject::HospitalBuildingObject() : BuildingObject(DummyConstructorParameter::instance()) {
	HospitalBuildingObjectImplementation* _implementation = new HospitalBuildingObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("HospitalBuildingObject");
}

HospitalBuildingObject::HospitalBuildingObject(DummyConstructorParameter* param) : BuildingObject(param) {
	_setClassName("HospitalBuildingObject");
}

HospitalBuildingObject::~HospitalBuildingObject() {
}



bool HospitalBuildingObject::isHospitalBuildingObject() {
	HospitalBuildingObjectImplementation* _implementation = static_cast<HospitalBuildingObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISHOSPITALBUILDINGOBJECT__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isHospitalBuildingObject();
}

DistributedObjectServant* HospitalBuildingObject::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* HospitalBuildingObject::_getImplementationForRead() {
	return _impl;
}

void HospitalBuildingObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	HospitalBuildingObjectImplementation
 */

HospitalBuildingObjectImplementation::HospitalBuildingObjectImplementation(DummyConstructorParameter* param) : BuildingObjectImplementation(param) {
	_initializeImplementation();
}


HospitalBuildingObjectImplementation::~HospitalBuildingObjectImplementation() {
}


void HospitalBuildingObjectImplementation::finalize() {
}

void HospitalBuildingObjectImplementation::_initializeImplementation() {
	_setClassHelper(HospitalBuildingObjectHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void HospitalBuildingObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<HospitalBuildingObject*>(stub);
	BuildingObjectImplementation::_setStub(stub);
}

DistributedObjectStub* HospitalBuildingObjectImplementation::_getStub() {
	return _this.get();
}

HospitalBuildingObjectImplementation::operator const HospitalBuildingObject*() {
	return _this.get();
}

void HospitalBuildingObjectImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void HospitalBuildingObjectImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void HospitalBuildingObjectImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void HospitalBuildingObjectImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void HospitalBuildingObjectImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void HospitalBuildingObjectImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void HospitalBuildingObjectImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void HospitalBuildingObjectImplementation::_serializationHelperMethod() {
	BuildingObjectImplementation::_serializationHelperMethod();

	_setClassName("HospitalBuildingObject");

}

void HospitalBuildingObjectImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(HospitalBuildingObjectImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool HospitalBuildingObjectImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (BuildingObjectImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	}

	return false;
}

void HospitalBuildingObjectImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = HospitalBuildingObjectImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int HospitalBuildingObjectImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = BuildingObjectImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;

	return _count + 0;
}

HospitalBuildingObjectImplementation::HospitalBuildingObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/building/hospital/HospitalBuildingObject.idl():  		Logger.setLoggingName("HospitalBuildingObject");
	Logger::setLoggingName("HospitalBuildingObject");
}

bool HospitalBuildingObjectImplementation::isHospitalBuildingObject() {
	// server/zone/objects/building/hospital/HospitalBuildingObject.idl():  		return true;
	return true;
}

/*
 *	HospitalBuildingObjectAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


HospitalBuildingObjectAdapter::HospitalBuildingObjectAdapter(HospitalBuildingObject* obj) : BuildingObjectAdapter(obj) {
}

void HospitalBuildingObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_ISHOSPITALBUILDINGOBJECT__:
		{
			resp->insertBoolean(isHospitalBuildingObject());
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

bool HospitalBuildingObjectAdapter::isHospitalBuildingObject() {
	return (static_cast<HospitalBuildingObject*>(stub))->isHospitalBuildingObject();
}

/*
 *	HospitalBuildingObjectHelper
 */

HospitalBuildingObjectHelper* HospitalBuildingObjectHelper::staticInitializer = HospitalBuildingObjectHelper::instance();

HospitalBuildingObjectHelper::HospitalBuildingObjectHelper() {
	className = "HospitalBuildingObject";

	Core::getObjectBroker()->registerClass(className, this);
}

void HospitalBuildingObjectHelper::finalizeHelper() {
	HospitalBuildingObjectHelper::finalize();
}

DistributedObject* HospitalBuildingObjectHelper::instantiateObject() {
	return new HospitalBuildingObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* HospitalBuildingObjectHelper::instantiateServant() {
	return new HospitalBuildingObjectImplementation();
}

DistributedObjectAdapter* HospitalBuildingObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new HospitalBuildingObjectAdapter(static_cast<HospitalBuildingObject*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

