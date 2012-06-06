/*
 *	server/zone/objects/mission/ReconMissionObjective.cpp generated by engine3 IDL compiler 0.60
 */

#include "ReconMissionObjective.h"

#include "server/zone/objects/mission/MissionObject.h"

#include "server/zone/objects/mission/MissionObserver.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/templates/SharedObjectTemplate.h"

#include "server/zone/objects/area/MissionReconActiveArea.h"

/*
 *	ReconMissionObjectiveStub
 */

enum {RPC_FINALIZE__ = 6,RPC_INITIALIZETRANSIENTMEMBERS__,RPC_ACTIVATE__,RPC_ABORT__,RPC_COMPLETE__,};

ReconMissionObjective::ReconMissionObjective(MissionObject* mission) : MissionObjective(DummyConstructorParameter::instance()) {
	ReconMissionObjectiveImplementation* _implementation = new ReconMissionObjectiveImplementation(mission);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("ReconMissionObjective");
}

ReconMissionObjective::ReconMissionObjective(DummyConstructorParameter* param) : MissionObjective(param) {
	_setClassName("ReconMissionObjective");
}

ReconMissionObjective::~ReconMissionObjective() {
}



void ReconMissionObjective::initializeTransientMembers() {
	ReconMissionObjectiveImplementation* _implementation = static_cast<ReconMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void ReconMissionObjective::activate() {
	ReconMissionObjectiveImplementation* _implementation = static_cast<ReconMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ACTIVATE__);

		method.executeWithVoidReturn();
	} else
		_implementation->activate();
}

void ReconMissionObjective::abort() {
	ReconMissionObjectiveImplementation* _implementation = static_cast<ReconMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ABORT__);

		method.executeWithVoidReturn();
	} else
		_implementation->abort();
}

void ReconMissionObjective::complete() {
	ReconMissionObjectiveImplementation* _implementation = static_cast<ReconMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_COMPLETE__);

		method.executeWithVoidReturn();
	} else
		_implementation->complete();
}

Vector3 ReconMissionObjective::getEndPosition() {
	ReconMissionObjectiveImplementation* _implementation = static_cast<ReconMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getEndPosition();
}

DistributedObjectServant* ReconMissionObjective::_getImplementation() {

	_updated = true;
	return _impl;
}

void ReconMissionObjective::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	ReconMissionObjectiveImplementation
 */

ReconMissionObjectiveImplementation::ReconMissionObjectiveImplementation(DummyConstructorParameter* param) : MissionObjectiveImplementation(param) {
	_initializeImplementation();
}


ReconMissionObjectiveImplementation::~ReconMissionObjectiveImplementation() {
	ReconMissionObjectiveImplementation::finalize();
}


void ReconMissionObjectiveImplementation::_initializeImplementation() {
	_setClassHelper(ReconMissionObjectiveHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void ReconMissionObjectiveImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<ReconMissionObjective*>(stub);
	MissionObjectiveImplementation::_setStub(stub);
}

DistributedObjectStub* ReconMissionObjectiveImplementation::_getStub() {
	return _this.get();
}

ReconMissionObjectiveImplementation::operator const ReconMissionObjective*() {
	return _this.get();
}

void ReconMissionObjectiveImplementation::lock(bool doLock) {
	_this.get()->lock(doLock);
}

void ReconMissionObjectiveImplementation::lock(ManagedObject* obj) {
	_this.get()->lock(obj);
}

void ReconMissionObjectiveImplementation::rlock(bool doLock) {
	_this.get()->rlock(doLock);
}

void ReconMissionObjectiveImplementation::wlock(bool doLock) {
	_this.get()->wlock(doLock);
}

void ReconMissionObjectiveImplementation::wlock(ManagedObject* obj) {
	_this.get()->wlock(obj);
}

void ReconMissionObjectiveImplementation::unlock(bool doLock) {
	_this.get()->unlock(doLock);
}

void ReconMissionObjectiveImplementation::runlock(bool doLock) {
	_this.get()->runlock(doLock);
}

void ReconMissionObjectiveImplementation::_serializationHelperMethod() {
	MissionObjectiveImplementation::_serializationHelperMethod();

	_setClassName("ReconMissionObjective");

}

void ReconMissionObjectiveImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(ReconMissionObjectiveImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool ReconMissionObjectiveImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (MissionObjectiveImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "ReconMissionObjective.locationActiveArea") {
		TypeInfo<ManagedReference<MissionReconActiveArea* > >::parseFromBinaryStream(&locationActiveArea, stream);
		return true;
	}


	return false;
}

void ReconMissionObjectiveImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ReconMissionObjectiveImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ReconMissionObjectiveImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = MissionObjectiveImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;
	_name = "ReconMissionObjective.locationActiveArea";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<MissionReconActiveArea* > >::toBinaryStream(&locationActiveArea, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 1;
}

ReconMissionObjectiveImplementation::ReconMissionObjectiveImplementation(MissionObject* mission) : MissionObjectiveImplementation(mission) {
	_initializeImplementation();
	// server/zone/objects/mission/ReconMissionObjective.idl():  		Logger.setLoggingName("ReconMissionObjective");
	Logger::setLoggingName("ReconMissionObjective");
}

void ReconMissionObjectiveImplementation::finalize() {
	// server/zone/objects/mission/ReconMissionObjective.idl():  		Logger.info("deleting from memory", true);
	Logger::info("deleting from memory", true);
}

void ReconMissionObjectiveImplementation::initializeTransientMembers() {
	// server/zone/objects/mission/ReconMissionObjective.idl():  		super.initializeTransientMembers();
	MissionObjectiveImplementation::initializeTransientMembers();
	// server/zone/objects/mission/ReconMissionObjective.idl():  		Logger.setLoggingName("MissionObject");
	Logger::setLoggingName("MissionObject");
	// server/zone/objects/mission/ReconMissionObjective.idl():  		activate();
	activate();
}

/*
 *	ReconMissionObjectiveAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


ReconMissionObjectiveAdapter::ReconMissionObjectiveAdapter(ReconMissionObjective* obj) : MissionObjectiveAdapter(obj) {
}

void ReconMissionObjectiveAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_FINALIZE__:
		{
			finalize();
		}
		break;
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			initializeTransientMembers();
		}
		break;
	case RPC_ACTIVATE__:
		{
			activate();
		}
		break;
	case RPC_ABORT__:
		{
			abort();
		}
		break;
	case RPC_COMPLETE__:
		{
			complete();
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

void ReconMissionObjectiveAdapter::finalize() {
	(static_cast<ReconMissionObjective*>(stub))->finalize();
}

void ReconMissionObjectiveAdapter::initializeTransientMembers() {
	(static_cast<ReconMissionObjective*>(stub))->initializeTransientMembers();
}

void ReconMissionObjectiveAdapter::activate() {
	(static_cast<ReconMissionObjective*>(stub))->activate();
}

void ReconMissionObjectiveAdapter::abort() {
	(static_cast<ReconMissionObjective*>(stub))->abort();
}

void ReconMissionObjectiveAdapter::complete() {
	(static_cast<ReconMissionObjective*>(stub))->complete();
}

/*
 *	ReconMissionObjectiveHelper
 */

ReconMissionObjectiveHelper* ReconMissionObjectiveHelper::staticInitializer = ReconMissionObjectiveHelper::instance();

ReconMissionObjectiveHelper::ReconMissionObjectiveHelper() {
	className = "ReconMissionObjective";

	Core::getObjectBroker()->registerClass(className, this);
}

void ReconMissionObjectiveHelper::finalizeHelper() {
	ReconMissionObjectiveHelper::finalize();
}

DistributedObject* ReconMissionObjectiveHelper::instantiateObject() {
	return new ReconMissionObjective(DummyConstructorParameter::instance());
}

DistributedObjectServant* ReconMissionObjectiveHelper::instantiateServant() {
	return new ReconMissionObjectiveImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ReconMissionObjectiveHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ReconMissionObjectiveAdapter(static_cast<ReconMissionObjective*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

