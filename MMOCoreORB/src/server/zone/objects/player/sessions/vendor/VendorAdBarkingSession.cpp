/*
 *	server/zone/objects/player/sessions/vendor/VendorAdBarkingSession.cpp generated by engine3 IDL compiler 0.60
 */

#include "VendorAdBarkingSession.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	VendorAdBarkingSessionStub
 */

enum {RPC_INITIALIZESESSION__ = 6,RPC_CANCELSESSION__,RPC_CLEARSESSION__,};

VendorAdBarkingSession::VendorAdBarkingSession(CreatureObject* play) : Facade(DummyConstructorParameter::instance()) {
	VendorAdBarkingSessionImplementation* _implementation = new VendorAdBarkingSessionImplementation(play);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("VendorAdBarkingSession");
}

VendorAdBarkingSession::VendorAdBarkingSession(DummyConstructorParameter* param) : Facade(param) {
	_setClassName("VendorAdBarkingSession");
}

VendorAdBarkingSession::~VendorAdBarkingSession() {
}



int VendorAdBarkingSession::initializeSession() {
	VendorAdBarkingSessionImplementation* _implementation = static_cast<VendorAdBarkingSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZESESSION__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->initializeSession();
}

int VendorAdBarkingSession::cancelSession() {
	VendorAdBarkingSessionImplementation* _implementation = static_cast<VendorAdBarkingSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CANCELSESSION__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->cancelSession();
}

int VendorAdBarkingSession::clearSession() {
	VendorAdBarkingSessionImplementation* _implementation = static_cast<VendorAdBarkingSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CLEARSESSION__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->clearSession();
}

DistributedObjectServant* VendorAdBarkingSession::_getImplementation() {

	_updated = true;
	return _impl;
}

void VendorAdBarkingSession::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	VendorAdBarkingSessionImplementation
 */

VendorAdBarkingSessionImplementation::VendorAdBarkingSessionImplementation(DummyConstructorParameter* param) : FacadeImplementation(param) {
	_initializeImplementation();
}


VendorAdBarkingSessionImplementation::~VendorAdBarkingSessionImplementation() {
}


void VendorAdBarkingSessionImplementation::finalize() {
}

void VendorAdBarkingSessionImplementation::_initializeImplementation() {
	_setClassHelper(VendorAdBarkingSessionHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void VendorAdBarkingSessionImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<VendorAdBarkingSession*>(stub);
	FacadeImplementation::_setStub(stub);
}

DistributedObjectStub* VendorAdBarkingSessionImplementation::_getStub() {
	return _this.get();
}

VendorAdBarkingSessionImplementation::operator const VendorAdBarkingSession*() {
	return _this.get();
}

void VendorAdBarkingSessionImplementation::lock(bool doLock) {
	_this.get()->lock(doLock);
}

void VendorAdBarkingSessionImplementation::lock(ManagedObject* obj) {
	_this.get()->lock(obj);
}

void VendorAdBarkingSessionImplementation::rlock(bool doLock) {
	_this.get()->rlock(doLock);
}

void VendorAdBarkingSessionImplementation::wlock(bool doLock) {
	_this.get()->wlock(doLock);
}

void VendorAdBarkingSessionImplementation::wlock(ManagedObject* obj) {
	_this.get()->wlock(obj);
}

void VendorAdBarkingSessionImplementation::unlock(bool doLock) {
	_this.get()->unlock(doLock);
}

void VendorAdBarkingSessionImplementation::runlock(bool doLock) {
	_this.get()->runlock(doLock);
}

void VendorAdBarkingSessionImplementation::_serializationHelperMethod() {
	FacadeImplementation::_serializationHelperMethod();

	_setClassName("VendorAdBarkingSession");

}

void VendorAdBarkingSessionImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(VendorAdBarkingSessionImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool VendorAdBarkingSessionImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (FacadeImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "VendorAdBarkingSession.owner") {
		TypeInfo<ManagedReference<CreatureObject* > >::parseFromBinaryStream(&owner, stream);
		return true;
	}

	if (_name == "VendorAdBarkingSession.advertisingMod") {
		TypeInfo<int >::parseFromBinaryStream(&advertisingMod, stream);
		return true;
	}


	return false;
}

void VendorAdBarkingSessionImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = VendorAdBarkingSessionImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int VendorAdBarkingSessionImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = FacadeImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;
	_name = "VendorAdBarkingSession.owner";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<CreatureObject* > >::toBinaryStream(&owner, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "VendorAdBarkingSession.advertisingMod";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&advertisingMod, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 2;
}

VendorAdBarkingSessionImplementation::VendorAdBarkingSessionImplementation(CreatureObject* play) {
	_initializeImplementation();
	// server/zone/objects/player/sessions/vendor/VendorAdBarkingSession.idl():  		Logger.setLoggingName("VendorAdBarkingSession");
	Logger::setLoggingName("VendorAdBarkingSession");
	// server/zone/objects/player/sessions/vendor/VendorAdBarkingSession.idl():  		Logger.setLogging(true);
	Logger::setLogging(true);
	// server/zone/objects/player/sessions/vendor/VendorAdBarkingSession.idl():  		owner = play;
	owner = play;
}

int VendorAdBarkingSessionImplementation::cancelSession() {
	// server/zone/objects/player/sessions/vendor/VendorAdBarkingSession.idl():  		clearSession(
	if (owner != NULL)	// server/zone/objects/player/sessions/vendor/VendorAdBarkingSession.idl():  			owner.dropActiveSession(SessionFacadeType.VENDORADBARKING);
	owner->dropActiveSession(SessionFacadeType::VENDORADBARKING);
	// server/zone/objects/player/sessions/vendor/VendorAdBarkingSession.idl():  		clearSession();
	clearSession();
	// server/zone/objects/player/sessions/vendor/VendorAdBarkingSession.idl():  		return 0;
	return 0;
}

int VendorAdBarkingSessionImplementation::clearSession() {
	// server/zone/objects/player/sessions/vendor/VendorAdBarkingSession.idl():  		owner = null;
	owner = NULL;
	// server/zone/objects/player/sessions/vendor/VendorAdBarkingSession.idl():  		return 0;
	return 0;
}

/*
 *	VendorAdBarkingSessionAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


VendorAdBarkingSessionAdapter::VendorAdBarkingSessionAdapter(VendorAdBarkingSession* obj) : FacadeAdapter(obj) {
}

void VendorAdBarkingSessionAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZESESSION__:
		{
			resp->insertSignedInt(initializeSession());
		}
		break;
	case RPC_CANCELSESSION__:
		{
			resp->insertSignedInt(cancelSession());
		}
		break;
	case RPC_CLEARSESSION__:
		{
			resp->insertSignedInt(clearSession());
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

int VendorAdBarkingSessionAdapter::initializeSession() {
	return (static_cast<VendorAdBarkingSession*>(stub))->initializeSession();
}

int VendorAdBarkingSessionAdapter::cancelSession() {
	return (static_cast<VendorAdBarkingSession*>(stub))->cancelSession();
}

int VendorAdBarkingSessionAdapter::clearSession() {
	return (static_cast<VendorAdBarkingSession*>(stub))->clearSession();
}

/*
 *	VendorAdBarkingSessionHelper
 */

VendorAdBarkingSessionHelper* VendorAdBarkingSessionHelper::staticInitializer = VendorAdBarkingSessionHelper::instance();

VendorAdBarkingSessionHelper::VendorAdBarkingSessionHelper() {
	className = "VendorAdBarkingSession";

	Core::getObjectBroker()->registerClass(className, this);
}

void VendorAdBarkingSessionHelper::finalizeHelper() {
	VendorAdBarkingSessionHelper::finalize();
}

DistributedObject* VendorAdBarkingSessionHelper::instantiateObject() {
	return new VendorAdBarkingSession(DummyConstructorParameter::instance());
}

DistributedObjectServant* VendorAdBarkingSessionHelper::instantiateServant() {
	return new VendorAdBarkingSessionImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* VendorAdBarkingSessionHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new VendorAdBarkingSessionAdapter(static_cast<VendorAdBarkingSession*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

