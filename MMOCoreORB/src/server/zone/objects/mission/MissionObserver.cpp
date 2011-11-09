/*
 *	server/zone/objects/mission/MissionObserver.cpp generated by engine3 IDL compiler 0.60
 */

#include "MissionObserver.h"

#include "server/zone/objects/mission/MissionObject.h"

#include "server/zone/objects/mission/MissionObjective.h"

#include "server/zone/objects/scene/SceneObject.h"

/*
 *	MissionObserverStub
 */

enum {RPC_NOTIFYOBSERVEREVENT__INT_OBSERVABLE_MANAGEDOBJECT_LONG_ = 6,RPC_DESTROYOBJECTFROMDATABASE__};

MissionObserver::MissionObserver(MissionObjective* objective) : Observer(DummyConstructorParameter::instance()) {
	MissionObserverImplementation* _implementation = new MissionObserverImplementation(objective);
	_impl = _implementation;
	_impl->_setStub(this);
}

MissionObserver::MissionObserver(DummyConstructorParameter* param) : Observer(param) {
}

MissionObserver::~MissionObserver() {
}



int MissionObserver::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	MissionObserverImplementation* _implementation = static_cast<MissionObserverImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYOBSERVEREVENT__INT_OBSERVABLE_MANAGEDOBJECT_LONG_);
		method.addUnsignedIntParameter(eventType);
		method.addObjectParameter(observable);
		method.addObjectParameter(arg1);
		method.addSignedLongParameter(arg2);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->notifyObserverEvent(eventType, observable, arg1, arg2);
}

void MissionObserver::destroyObjectFromDatabase() {
	MissionObserverImplementation* _implementation = static_cast<MissionObserverImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DESTROYOBJECTFROMDATABASE__);

		method.executeWithVoidReturn();
	} else
		_implementation->destroyObjectFromDatabase();
}

DistributedObjectServant* MissionObserver::_getImplementation() {

	_updated = true;
	return _impl;
}

void MissionObserver::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	MissionObserverImplementation
 */

MissionObserverImplementation::MissionObserverImplementation(DummyConstructorParameter* param) : ObserverImplementation(param) {
	_initializeImplementation();
}


MissionObserverImplementation::~MissionObserverImplementation() {
}


void MissionObserverImplementation::finalize() {
}

void MissionObserverImplementation::_initializeImplementation() {
	_setClassHelper(MissionObserverHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void MissionObserverImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<MissionObserver*>(stub);
	ObserverImplementation::_setStub(stub);
}

DistributedObjectStub* MissionObserverImplementation::_getStub() {
	return _this;
}

MissionObserverImplementation::operator const MissionObserver*() {
	return _this;
}

void MissionObserverImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void MissionObserverImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void MissionObserverImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void MissionObserverImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void MissionObserverImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void MissionObserverImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void MissionObserverImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void MissionObserverImplementation::_serializationHelperMethod() {
	ObserverImplementation::_serializationHelperMethod();

	_setClassName("MissionObserver");

}

void MissionObserverImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(MissionObserverImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool MissionObserverImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ObserverImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "missionObjective") {
		TypeInfo<ManagedWeakReference<MissionObjective* > >::parseFromBinaryStream(&missionObjective, stream);
		return true;
	}


	return false;
}

void MissionObserverImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = MissionObserverImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int MissionObserverImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "missionObjective";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedWeakReference<MissionObjective* > >::toBinaryStream(&missionObjective, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 1 + ObserverImplementation::writeObjectMembers(stream);
}

MissionObserverImplementation::MissionObserverImplementation(MissionObjective* objective) {
	_initializeImplementation();
	// server/zone/objects/mission/MissionObserver.idl():  		missionObjective = objective;
	missionObjective = objective;
	// server/zone/objects/mission/MissionObserver.idl():  		Logger.setLoggingName("MissionObserver");
	Logger::setLoggingName("MissionObserver");
}

/*
 *	MissionObserverAdapter
 */

MissionObserverAdapter::MissionObserverAdapter(MissionObserver* obj) : ObserverAdapter(obj) {
}

Packet* MissionObserverAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_NOTIFYOBSERVEREVENT__INT_OBSERVABLE_MANAGEDOBJECT_LONG_:
		resp->insertSignedInt(notifyObserverEvent(inv->getUnsignedIntParameter(), static_cast<Observable*>(inv->getObjectParameter()), static_cast<ManagedObject*>(inv->getObjectParameter()), inv->getSignedLongParameter()));
		break;
	case RPC_DESTROYOBJECTFROMDATABASE__:
		destroyObjectFromDatabase();
		break;
	default:
		return NULL;
	}

	return resp;
}

int MissionObserverAdapter::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	return (static_cast<MissionObserver*>(stub))->notifyObserverEvent(eventType, observable, arg1, arg2);
}

void MissionObserverAdapter::destroyObjectFromDatabase() {
	(static_cast<MissionObserver*>(stub))->destroyObjectFromDatabase();
}

/*
 *	MissionObserverHelper
 */

MissionObserverHelper* MissionObserverHelper::staticInitializer = MissionObserverHelper::instance();

MissionObserverHelper::MissionObserverHelper() {
	className = "MissionObserver";

	Core::getObjectBroker()->registerClass(className, this);
}

void MissionObserverHelper::finalizeHelper() {
	MissionObserverHelper::finalize();
}

DistributedObject* MissionObserverHelper::instantiateObject() {
	return new MissionObserver(DummyConstructorParameter::instance());
}

DistributedObjectServant* MissionObserverHelper::instantiateServant() {
	return new MissionObserverImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* MissionObserverHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new MissionObserverAdapter(static_cast<MissionObserver*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

