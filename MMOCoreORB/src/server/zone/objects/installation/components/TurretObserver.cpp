/*
 *	server/zone/objects/installation/components/TurretObserver.cpp generated by engine3 IDL compiler 0.60
 */

#include "TurretObserver.h"

#include "server/zone/objects/building/BuildingObject.h"

#include "server/zone/objects/scene/SceneObject.h"

/*
 *	TurretObserverStub
 */

enum {RPC_NOTIFYOBSERVEREVENT__INT_OBSERVABLE_MANAGEDOBJECT_LONG_ = 6};

TurretObserver::TurretObserver(BuildingObject* obj) : Observer(DummyConstructorParameter::instance()) {
	TurretObserverImplementation* _implementation = new TurretObserverImplementation(obj);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("TurretObserver");
}

TurretObserver::TurretObserver(DummyConstructorParameter* param) : Observer(param) {
	_setClassName("TurretObserver");
}

TurretObserver::~TurretObserver() {
}



int TurretObserver::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	TurretObserverImplementation* _implementation = static_cast<TurretObserverImplementation*>(_getImplementation());
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

DistributedObjectServant* TurretObserver::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

void TurretObserver::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	TurretObserverImplementation
 */

TurretObserverImplementation::TurretObserverImplementation(DummyConstructorParameter* param) : ObserverImplementation(param) {
	_initializeImplementation();
}


TurretObserverImplementation::~TurretObserverImplementation() {
}


void TurretObserverImplementation::finalize() {
}

void TurretObserverImplementation::_initializeImplementation() {
	_setClassHelper(TurretObserverHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void TurretObserverImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<TurretObserver*>(stub);
	ObserverImplementation::_setStub(stub);
}

DistributedObjectStub* TurretObserverImplementation::_getStub() {
	return _this.get();
}

TurretObserverImplementation::operator const TurretObserver*() {
	return _this.get();
}

void TurretObserverImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void TurretObserverImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void TurretObserverImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void TurretObserverImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void TurretObserverImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void TurretObserverImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void TurretObserverImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void TurretObserverImplementation::_serializationHelperMethod() {
	ObserverImplementation::_serializationHelperMethod();

	_setClassName("TurretObserver");

}

void TurretObserverImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(TurretObserverImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool TurretObserverImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ObserverImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "TurretObserver.building") {
		TypeInfo<ManagedWeakReference<BuildingObject* > >::parseFromBinaryStream(&building, stream);
		return true;
	}


	return false;
}

void TurretObserverImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = TurretObserverImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int TurretObserverImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ObserverImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;
	_name = "TurretObserver.building";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<BuildingObject* > >::toBinaryStream(&building, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 1;
}

TurretObserverImplementation::TurretObserverImplementation(BuildingObject* obj) {
	_initializeImplementation();
	// server/zone/objects/installation/components/TurretObserver.idl():  		Logger.setLoggingName("TurretObserver");
	Logger::setLoggingName("TurretObserver");
	// server/zone/objects/installation/components/TurretObserver.idl():  		building = obj;
	building = obj;
}

/*
 *	TurretObserverAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


TurretObserverAdapter::TurretObserverAdapter(TurretObserver* obj) : ObserverAdapter(obj) {
}

void TurretObserverAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_NOTIFYOBSERVEREVENT__INT_OBSERVABLE_MANAGEDOBJECT_LONG_:
		{
			resp->insertSignedInt(notifyObserverEvent(inv->getUnsignedIntParameter(), static_cast<Observable*>(inv->getObjectParameter()), static_cast<ManagedObject*>(inv->getObjectParameter()), inv->getSignedLongParameter()));
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

int TurretObserverAdapter::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	return (static_cast<TurretObserver*>(stub))->notifyObserverEvent(eventType, observable, arg1, arg2);
}

/*
 *	TurretObserverHelper
 */

TurretObserverHelper* TurretObserverHelper::staticInitializer = TurretObserverHelper::instance();

TurretObserverHelper::TurretObserverHelper() {
	className = "TurretObserver";

	Core::getObjectBroker()->registerClass(className, this);
}

void TurretObserverHelper::finalizeHelper() {
	TurretObserverHelper::finalize();
}

DistributedObject* TurretObserverHelper::instantiateObject() {
	return new TurretObserver(DummyConstructorParameter::instance());
}

DistributedObjectServant* TurretObserverHelper::instantiateServant() {
	return new TurretObserverImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* TurretObserverHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new TurretObserverAdapter(static_cast<TurretObserver*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

