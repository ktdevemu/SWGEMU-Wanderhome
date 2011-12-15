/*
 *	server/zone/objects/mission/HuntingMissionObjective.cpp generated by engine3 IDL compiler 0.60
 */

#include "HuntingMissionObjective.h"

#include "server/zone/objects/mission/MissionObject.h"

#include "server/zone/objects/mission/MissionObserver.h"

#include "server/zone/objects/area/MissionSpawnActiveArea.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/templates/SharedObjectTemplate.h"

/*
 *	HuntingMissionObjectiveStub
 */

enum {RPC_FINALIZE__ = 6,RPC_INITIALIZETRANSIENTMEMBERS__,RPC_ACTIVATE__,RPC_ABORT__,RPC_COMPLETE__,RPC_NOTIFYOBSERVEREVENT__MISSIONOBSERVER_INT_OBSERVABLE_MANAGEDOBJECT_LONG_};

HuntingMissionObjective::HuntingMissionObjective(MissionObject* mission) : MissionObjective(DummyConstructorParameter::instance()) {
	HuntingMissionObjectiveImplementation* _implementation = new HuntingMissionObjectiveImplementation(mission);
	_impl = _implementation;
	_impl->_setStub(this);
}

HuntingMissionObjective::HuntingMissionObjective(DummyConstructorParameter* param) : MissionObjective(param) {
}

HuntingMissionObjective::~HuntingMissionObjective() {
}



void HuntingMissionObjective::initializeTransientMembers() {
	HuntingMissionObjectiveImplementation* _implementation = static_cast<HuntingMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void HuntingMissionObjective::activate() {
	HuntingMissionObjectiveImplementation* _implementation = static_cast<HuntingMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ACTIVATE__);

		method.executeWithVoidReturn();
	} else
		_implementation->activate();
}

void HuntingMissionObjective::abort() {
	HuntingMissionObjectiveImplementation* _implementation = static_cast<HuntingMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ABORT__);

		method.executeWithVoidReturn();
	} else
		_implementation->abort();
}

void HuntingMissionObjective::complete() {
	HuntingMissionObjectiveImplementation* _implementation = static_cast<HuntingMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_COMPLETE__);

		method.executeWithVoidReturn();
	} else
		_implementation->complete();
}

int HuntingMissionObjective::notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	HuntingMissionObjectiveImplementation* _implementation = static_cast<HuntingMissionObjectiveImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYOBSERVEREVENT__MISSIONOBSERVER_INT_OBSERVABLE_MANAGEDOBJECT_LONG_);
		method.addObjectParameter(observer);
		method.addUnsignedIntParameter(eventType);
		method.addObjectParameter(observable);
		method.addObjectParameter(arg1);
		method.addSignedLongParameter(arg2);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->notifyObserverEvent(observer, eventType, observable, arg1, arg2);
}

DistributedObjectServant* HuntingMissionObjective::_getImplementation() {

	_updated = true;
	return _impl;
}

void HuntingMissionObjective::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	HuntingMissionObjectiveImplementation
 */

HuntingMissionObjectiveImplementation::HuntingMissionObjectiveImplementation(DummyConstructorParameter* param) : MissionObjectiveImplementation(param) {
	_initializeImplementation();
}


HuntingMissionObjectiveImplementation::~HuntingMissionObjectiveImplementation() {
	HuntingMissionObjectiveImplementation::finalize();
}


void HuntingMissionObjectiveImplementation::_initializeImplementation() {
	_setClassHelper(HuntingMissionObjectiveHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void HuntingMissionObjectiveImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<HuntingMissionObjective*>(stub);
	MissionObjectiveImplementation::_setStub(stub);
}

DistributedObjectStub* HuntingMissionObjectiveImplementation::_getStub() {
	return _this;
}

HuntingMissionObjectiveImplementation::operator const HuntingMissionObjective*() {
	return _this;
}

void HuntingMissionObjectiveImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void HuntingMissionObjectiveImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void HuntingMissionObjectiveImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void HuntingMissionObjectiveImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void HuntingMissionObjectiveImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void HuntingMissionObjectiveImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void HuntingMissionObjectiveImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void HuntingMissionObjectiveImplementation::_serializationHelperMethod() {
	MissionObjectiveImplementation::_serializationHelperMethod();

	_setClassName("HuntingMissionObjective");

}

void HuntingMissionObjectiveImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(HuntingMissionObjectiveImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool HuntingMissionObjectiveImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (MissionObjectiveImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "targetsKilled") {
		TypeInfo<int >::parseFromBinaryStream(&targetsKilled, stream);
		return true;
	}


	return false;
}

void HuntingMissionObjectiveImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = HuntingMissionObjectiveImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int HuntingMissionObjectiveImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "targetsKilled";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&targetsKilled, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 1 + MissionObjectiveImplementation::writeObjectMembers(stream);
}

HuntingMissionObjectiveImplementation::HuntingMissionObjectiveImplementation(MissionObject* mission) : MissionObjectiveImplementation(mission) {
	_initializeImplementation();
	// server/zone/objects/mission/HuntingMissionObjective.idl():  		Logger.setLoggingName("HuntingMissionObjective");
	Logger::setLoggingName("HuntingMissionObjective");
}

void HuntingMissionObjectiveImplementation::finalize() {
}

void HuntingMissionObjectiveImplementation::initializeTransientMembers() {
	// server/zone/objects/mission/HuntingMissionObjective.idl():  		super.initializeTransientMembers();
	MissionObjectiveImplementation::initializeTransientMembers();
	// server/zone/objects/mission/HuntingMissionObjective.idl():  		Logger.setLoggingName("MissionObject");
	Logger::setLoggingName("MissionObject");
}

/*
 *	HuntingMissionObjectiveAdapter
 */

HuntingMissionObjectiveAdapter::HuntingMissionObjectiveAdapter(HuntingMissionObjective* obj) : MissionObjectiveAdapter(obj) {
}

Packet* HuntingMissionObjectiveAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
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
	case RPC_NOTIFYOBSERVEREVENT__MISSIONOBSERVER_INT_OBSERVABLE_MANAGEDOBJECT_LONG_:
		resp->insertSignedInt(notifyObserverEvent(static_cast<MissionObserver*>(inv->getObjectParameter()), inv->getUnsignedIntParameter(), static_cast<Observable*>(inv->getObjectParameter()), static_cast<ManagedObject*>(inv->getObjectParameter()), inv->getSignedLongParameter()));
		break;
	default:
		return NULL;
	}

	return resp;
}

void HuntingMissionObjectiveAdapter::finalize() {
	(static_cast<HuntingMissionObjective*>(stub))->finalize();
}

void HuntingMissionObjectiveAdapter::initializeTransientMembers() {
	(static_cast<HuntingMissionObjective*>(stub))->initializeTransientMembers();
}

void HuntingMissionObjectiveAdapter::activate() {
	(static_cast<HuntingMissionObjective*>(stub))->activate();
}

void HuntingMissionObjectiveAdapter::abort() {
	(static_cast<HuntingMissionObjective*>(stub))->abort();
}

void HuntingMissionObjectiveAdapter::complete() {
	(static_cast<HuntingMissionObjective*>(stub))->complete();
}

int HuntingMissionObjectiveAdapter::notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	return (static_cast<HuntingMissionObjective*>(stub))->notifyObserverEvent(observer, eventType, observable, arg1, arg2);
}

/*
 *	HuntingMissionObjectiveHelper
 */

HuntingMissionObjectiveHelper* HuntingMissionObjectiveHelper::staticInitializer = HuntingMissionObjectiveHelper::instance();

HuntingMissionObjectiveHelper::HuntingMissionObjectiveHelper() {
	className = "HuntingMissionObjective";

	Core::getObjectBroker()->registerClass(className, this);
}

void HuntingMissionObjectiveHelper::finalizeHelper() {
	HuntingMissionObjectiveHelper::finalize();
}

DistributedObject* HuntingMissionObjectiveHelper::instantiateObject() {
	return new HuntingMissionObjective(DummyConstructorParameter::instance());
}

DistributedObjectServant* HuntingMissionObjectiveHelper::instantiateServant() {
	return new HuntingMissionObjectiveImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* HuntingMissionObjectiveHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new HuntingMissionObjectiveAdapter(static_cast<HuntingMissionObjective*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

