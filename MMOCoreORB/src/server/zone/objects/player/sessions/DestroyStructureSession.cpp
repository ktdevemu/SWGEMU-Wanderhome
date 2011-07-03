/*
 *	server/zone/objects/player/sessions/DestroyStructureSession.cpp generated by engine3 IDL compiler 0.60
 */

#include "DestroyStructureSession.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/structure/StructureObject.h"

#include "server/zone/managers/structure/StructureManager.h"

/*
 *	DestroyStructureSessionStub
 */

enum {RPC_ISDESTROYCODE__INT_ = 6,RPC_INITIALIZESESSION__,RPC_SENDDESTROYCODE__,RPC_DESTROYSTRUCTURE__,RPC_CANCELSESSION__,RPC_CLEARSESSION__,RPC_GETSTRUCTUREOBJECT__};

DestroyStructureSession::DestroyStructureSession(CreatureObject* creature, StructureObject* structure) : Facade(DummyConstructorParameter::instance()) {
	DestroyStructureSessionImplementation* _implementation = new DestroyStructureSessionImplementation(creature, structure);
	_impl = _implementation;
	_impl->_setStub(this);
}

DestroyStructureSession::DestroyStructureSession(DummyConstructorParameter* param) : Facade(param) {
}

DestroyStructureSession::~DestroyStructureSession() {
}


bool DestroyStructureSession::isDestroyCode(unsigned int code) {
	DestroyStructureSessionImplementation* _implementation = (DestroyStructureSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISDESTROYCODE__INT_);
		method.addUnsignedIntParameter(code);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isDestroyCode(code);
}

int DestroyStructureSession::initializeSession() {
	DestroyStructureSessionImplementation* _implementation = (DestroyStructureSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZESESSION__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->initializeSession();
}

int DestroyStructureSession::sendDestroyCode() {
	DestroyStructureSessionImplementation* _implementation = (DestroyStructureSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDDESTROYCODE__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->sendDestroyCode();
}

int DestroyStructureSession::destroyStructure() {
	DestroyStructureSessionImplementation* _implementation = (DestroyStructureSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DESTROYSTRUCTURE__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->destroyStructure();
}

int DestroyStructureSession::cancelSession() {
	DestroyStructureSessionImplementation* _implementation = (DestroyStructureSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CANCELSESSION__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->cancelSession();
}

int DestroyStructureSession::clearSession() {
	DestroyStructureSessionImplementation* _implementation = (DestroyStructureSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CLEARSESSION__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->clearSession();
}

StructureObject* DestroyStructureSession::getStructureObject() {
	DestroyStructureSessionImplementation* _implementation = (DestroyStructureSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSTRUCTUREOBJECT__);

		return (StructureObject*) method.executeWithObjectReturn();
	} else
		return _implementation->getStructureObject();
}

DistributedObjectServant* DestroyStructureSession::_getImplementation() {

	_updated = true;
	return _impl;
}

void DestroyStructureSession::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	DestroyStructureSessionImplementation
 */

DestroyStructureSessionImplementation::DestroyStructureSessionImplementation(DummyConstructorParameter* param) : FacadeImplementation(param) {
	_initializeImplementation();
}


DestroyStructureSessionImplementation::~DestroyStructureSessionImplementation() {
}


void DestroyStructureSessionImplementation::finalize() {
}

void DestroyStructureSessionImplementation::_initializeImplementation() {
	_setClassHelper(DestroyStructureSessionHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void DestroyStructureSessionImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (DestroyStructureSession*) stub;
	FacadeImplementation::_setStub(stub);
}

DistributedObjectStub* DestroyStructureSessionImplementation::_getStub() {
	return _this;
}

DestroyStructureSessionImplementation::operator const DestroyStructureSession*() {
	return _this;
}

void DestroyStructureSessionImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void DestroyStructureSessionImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void DestroyStructureSessionImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void DestroyStructureSessionImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void DestroyStructureSessionImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void DestroyStructureSessionImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void DestroyStructureSessionImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void DestroyStructureSessionImplementation::_serializationHelperMethod() {
	FacadeImplementation::_serializationHelperMethod();

	_setClassName("DestroyStructureSession");

}

void DestroyStructureSessionImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(DestroyStructureSessionImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool DestroyStructureSessionImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (FacadeImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "creatureObject") {
		TypeInfo<ManagedReference<CreatureObject* > >::parseFromBinaryStream(&creatureObject, stream);
		return true;
	}

	if (_name == "structureObject") {
		TypeInfo<ManagedReference<StructureObject* > >::parseFromBinaryStream(&structureObject, stream);
		return true;
	}

	if (_name == "destroyCode") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&destroyCode, stream);
		return true;
	}


	return false;
}

void DestroyStructureSessionImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = DestroyStructureSessionImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int DestroyStructureSessionImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "creatureObject";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedReference<CreatureObject* > >::toBinaryStream(&creatureObject, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "structureObject";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedReference<StructureObject* > >::toBinaryStream(&structureObject, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "destroyCode";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&destroyCode, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 3 + FacadeImplementation::writeObjectMembers(stream);
}

DestroyStructureSessionImplementation::DestroyStructureSessionImplementation(CreatureObject* creature, StructureObject* structure) {
	_initializeImplementation();
	// server/zone/objects/player/sessions/DestroyStructureSession.idl():  		Logger.setLoggingName("DestroyStructureSession");
	Logger::setLoggingName("DestroyStructureSession");
	// server/zone/objects/player/sessions/DestroyStructureSession.idl():  		Logger.setLogging(true);
	Logger::setLogging(true);
	// server/zone/objects/player/sessions/DestroyStructureSession.idl():  		creatureObject = creature;
	creatureObject = creature;
	// server/zone/objects/player/sessions/DestroyStructureSession.idl():  		structureObject = structure;
	structureObject = structure;
	// server/zone/objects/player/sessions/DestroyStructureSession.idl():  		destroyCode = 0;
	destroyCode = 0;
}

bool DestroyStructureSessionImplementation::isDestroyCode(unsigned int code) {
	// server/zone/objects/player/sessions/DestroyStructureSession.idl():  		return code == destroyCode;
	return code == destroyCode;
}

int DestroyStructureSessionImplementation::cancelSession() {
	// server/zone/objects/player/sessions/DestroyStructureSession.idl():  		creatureObject.dropActiveSession(SessionFacadeType.DESTROYSTRUCTURE);
	creatureObject->dropActiveSession(SessionFacadeType::DESTROYSTRUCTURE);
	// server/zone/objects/player/sessions/DestroyStructureSession.idl():  		return 0;
	return 0;
}

int DestroyStructureSessionImplementation::clearSession() {
	// server/zone/objects/player/sessions/DestroyStructureSession.idl():  		return 0;
	return 0;
}

StructureObject* DestroyStructureSessionImplementation::getStructureObject() {
	// server/zone/objects/player/sessions/DestroyStructureSession.idl():  		return structureObject;
	return structureObject;
}

/*
 *	DestroyStructureSessionAdapter
 */

DestroyStructureSessionAdapter::DestroyStructureSessionAdapter(DestroyStructureSessionImplementation* obj) : FacadeAdapter(obj) {
}

Packet* DestroyStructureSessionAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_ISDESTROYCODE__INT_:
		resp->insertBoolean(isDestroyCode(inv->getUnsignedIntParameter()));
		break;
	case RPC_INITIALIZESESSION__:
		resp->insertSignedInt(initializeSession());
		break;
	case RPC_SENDDESTROYCODE__:
		resp->insertSignedInt(sendDestroyCode());
		break;
	case RPC_DESTROYSTRUCTURE__:
		resp->insertSignedInt(destroyStructure());
		break;
	case RPC_CANCELSESSION__:
		resp->insertSignedInt(cancelSession());
		break;
	case RPC_CLEARSESSION__:
		resp->insertSignedInt(clearSession());
		break;
	case RPC_GETSTRUCTUREOBJECT__:
		resp->insertLong(getStructureObject()->_getObjectID());
		break;
	default:
		return NULL;
	}

	return resp;
}

bool DestroyStructureSessionAdapter::isDestroyCode(unsigned int code) {
	return ((DestroyStructureSessionImplementation*) impl)->isDestroyCode(code);
}

int DestroyStructureSessionAdapter::initializeSession() {
	return ((DestroyStructureSessionImplementation*) impl)->initializeSession();
}

int DestroyStructureSessionAdapter::sendDestroyCode() {
	return ((DestroyStructureSessionImplementation*) impl)->sendDestroyCode();
}

int DestroyStructureSessionAdapter::destroyStructure() {
	return ((DestroyStructureSessionImplementation*) impl)->destroyStructure();
}

int DestroyStructureSessionAdapter::cancelSession() {
	return ((DestroyStructureSessionImplementation*) impl)->cancelSession();
}

int DestroyStructureSessionAdapter::clearSession() {
	return ((DestroyStructureSessionImplementation*) impl)->clearSession();
}

StructureObject* DestroyStructureSessionAdapter::getStructureObject() {
	return ((DestroyStructureSessionImplementation*) impl)->getStructureObject();
}

/*
 *	DestroyStructureSessionHelper
 */

DestroyStructureSessionHelper* DestroyStructureSessionHelper::staticInitializer = DestroyStructureSessionHelper::instance();

DestroyStructureSessionHelper::DestroyStructureSessionHelper() {
	className = "DestroyStructureSession";

	Core::getObjectBroker()->registerClass(className, this);
}

void DestroyStructureSessionHelper::finalizeHelper() {
	DestroyStructureSessionHelper::finalize();
}

DistributedObject* DestroyStructureSessionHelper::instantiateObject() {
	return new DestroyStructureSession(DummyConstructorParameter::instance());
}

DistributedObjectServant* DestroyStructureSessionHelper::instantiateServant() {
	return new DestroyStructureSessionImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* DestroyStructureSessionHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new DestroyStructureSessionAdapter((DestroyStructureSessionImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

