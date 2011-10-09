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

enum {RPC_FINALIZE__ = 6,RPC_INITIALIZETRANSIENTMEMBERS__,RPC_ACTIVATE__,RPC_ABORT__,RPC_COMPLETE__};

ReconMissionObjective::ReconMissionObjective(MissionObject* mission) : MissionObjective(DummyConstructorParameter::instance()) {
	ReconMissionObjectiveImplementation* _implementation = new ReconMissionObjectiveImplementation(mission);
	_impl = _implementation;
	_impl->_setStub(this);
}

ReconMissionObjective::ReconMissionObjective(DummyConstructorParameter* param) : MissionObjective(param) {
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
	return _this;
}

ReconMissionObjectiveImplementation::operator const ReconMissionObjective*() {
	return _this;
}

void ReconMissionObjectiveImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void ReconMissionObjectiveImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void ReconMissionObjectiveImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void ReconMissionObjectiveImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void ReconMissionObjectiveImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void ReconMissionObjectiveImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void ReconMissionObjectiveImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
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

		uint16 _varSize = stream->readShort();

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

	if (_name == "locationActiveArea") {
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
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "locationActiveArea";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedReference<MissionReconActiveArea* > >::toBinaryStream(&locationActiveArea, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 1 + MissionObjectiveImplementation::writeObjectMembers(stream);
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

ReconMissionObjectiveAdapter::ReconMissionObjectiveAdapter(ReconMissionObjectiveImplementation* obj) : MissionObjectiveAdapter(obj) {
}

Packet* ReconMissionObjectiveAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_FINALIZE__:
		finalize();
		break;
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		initializeTransientMembers();
		break;
	case RPC_ACTIVATE__:
		activate();
		break;
	case RPC_ABORT__:
		abort();
		break;
	case RPC_COMPLETE__:
		complete();
		break;
	default:
		return NULL;
	}

	return resp;
}

void ReconMissionObjectiveAdapter::finalize() {
	(static_cast<ReconMissionObjectiveImplementation*>(impl))->finalize();
}

void ReconMissionObjectiveAdapter::initializeTransientMembers() {
	(static_cast<ReconMissionObjectiveImplementation*>(impl))->initializeTransientMembers();
}

void ReconMissionObjectiveAdapter::activate() {
	(static_cast<ReconMissionObjectiveImplementation*>(impl))->activate();
}

void ReconMissionObjectiveAdapter::abort() {
	(static_cast<ReconMissionObjectiveImplementation*>(impl))->abort();
}

void ReconMissionObjectiveAdapter::complete() {
	(static_cast<ReconMissionObjectiveImplementation*>(impl))->complete();
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
	DistributedObjectAdapter* adapter = new ReconMissionObjectiveAdapter(static_cast<ReconMissionObjectiveImplementation*>(obj->_getImplementation()));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

