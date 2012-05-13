/*
 *	server/zone/objects/player/sessions/CitySpecializationSession.cpp generated by engine3 IDL compiler 0.60
 */

#include "CitySpecializationSession.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/region/CityRegion.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/structure/StructureObject.h"

#include "server/zone/managers/structure/StructureManager.h"

/*
 *	CitySpecializationSessionStub
 */

enum {RPC_INITIALIZESESSION__ = 6,RPC_SENDCONFIRMATIONBOX__STRING_,RPC_ACCEPTCHOICE__,RPC_CANCELSESSION__,RPC_CLEARSESSION__};

CitySpecializationSession::CitySpecializationSession(CreatureObject* creature, CityRegion* city, SceneObject* terminal) : Facade(DummyConstructorParameter::instance()) {
	CitySpecializationSessionImplementation* _implementation = new CitySpecializationSessionImplementation(creature, city, terminal);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("CitySpecializationSession");
}

CitySpecializationSession::CitySpecializationSession(DummyConstructorParameter* param) : Facade(param) {
	_setClassName("CitySpecializationSession");
}

CitySpecializationSession::~CitySpecializationSession() {
}



int CitySpecializationSession::initializeSession() {
	CitySpecializationSessionImplementation* _implementation = static_cast<CitySpecializationSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZESESSION__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->initializeSession();
}

int CitySpecializationSession::sendConfirmationBox(const String& choice) {
	CitySpecializationSessionImplementation* _implementation = static_cast<CitySpecializationSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDCONFIRMATIONBOX__STRING_);
		method.addAsciiParameter(choice);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->sendConfirmationBox(choice);
}

int CitySpecializationSession::acceptChoice() {
	CitySpecializationSessionImplementation* _implementation = static_cast<CitySpecializationSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ACCEPTCHOICE__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->acceptChoice();
}

int CitySpecializationSession::cancelSession() {
	CitySpecializationSessionImplementation* _implementation = static_cast<CitySpecializationSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CANCELSESSION__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->cancelSession();
}

int CitySpecializationSession::clearSession() {
	CitySpecializationSessionImplementation* _implementation = static_cast<CitySpecializationSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CLEARSESSION__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->clearSession();
}

DistributedObjectServant* CitySpecializationSession::_getImplementation() {

	_updated = true;
	return _impl;
}

void CitySpecializationSession::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	CitySpecializationSessionImplementation
 */

CitySpecializationSessionImplementation::CitySpecializationSessionImplementation(DummyConstructorParameter* param) : FacadeImplementation(param) {
	_initializeImplementation();
}


CitySpecializationSessionImplementation::~CitySpecializationSessionImplementation() {
}


void CitySpecializationSessionImplementation::finalize() {
}

void CitySpecializationSessionImplementation::_initializeImplementation() {
	_setClassHelper(CitySpecializationSessionHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void CitySpecializationSessionImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<CitySpecializationSession*>(stub);
	FacadeImplementation::_setStub(stub);
}

DistributedObjectStub* CitySpecializationSessionImplementation::_getStub() {
	return _this;
}

CitySpecializationSessionImplementation::operator const CitySpecializationSession*() {
	return _this;
}

void CitySpecializationSessionImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void CitySpecializationSessionImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void CitySpecializationSessionImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void CitySpecializationSessionImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void CitySpecializationSessionImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void CitySpecializationSessionImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void CitySpecializationSessionImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void CitySpecializationSessionImplementation::_serializationHelperMethod() {
	FacadeImplementation::_serializationHelperMethod();

	_setClassName("CitySpecializationSession");

}

void CitySpecializationSessionImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(CitySpecializationSessionImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool CitySpecializationSessionImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (FacadeImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "CitySpecializationSession.creatureObject") {
		TypeInfo<ManagedReference<CreatureObject* > >::parseFromBinaryStream(&creatureObject, stream);
		return true;
	}

	if (_name == "CitySpecializationSession.cityRegion") {
		TypeInfo<ManagedReference<CityRegion* > >::parseFromBinaryStream(&cityRegion, stream);
		return true;
	}

	if (_name == "CitySpecializationSession.terminalObject") {
		TypeInfo<ManagedReference<SceneObject* > >::parseFromBinaryStream(&terminalObject, stream);
		return true;
	}

	if (_name == "CitySpecializationSession.specialization") {
		TypeInfo<String >::parseFromBinaryStream(&specialization, stream);
		return true;
	}


	return false;
}

void CitySpecializationSessionImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = CitySpecializationSessionImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int CitySpecializationSessionImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = FacadeImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;
	_name = "CitySpecializationSession.creatureObject";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<CreatureObject* > >::toBinaryStream(&creatureObject, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "CitySpecializationSession.cityRegion";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<CityRegion* > >::toBinaryStream(&cityRegion, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "CitySpecializationSession.terminalObject";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<SceneObject* > >::toBinaryStream(&terminalObject, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "CitySpecializationSession.specialization";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&specialization, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 4;
}

CitySpecializationSessionImplementation::CitySpecializationSessionImplementation(CreatureObject* creature, CityRegion* city, SceneObject* terminal) {
	_initializeImplementation();
	// server/zone/objects/player/sessions/CitySpecializationSession.idl():  		Logger.setLoggingName("CitySpecializationSession");
	Logger::setLoggingName("CitySpecializationSession");
	// server/zone/objects/player/sessions/CitySpecializationSession.idl():  		Logger.setLogging(true);
	Logger::setLogging(true);
	// server/zone/objects/player/sessions/CitySpecializationSession.idl():  		creatureObject = creature;
	creatureObject = creature;
	// server/zone/objects/player/sessions/CitySpecializationSession.idl():  		cityRegion = city;
	cityRegion = city;
	// server/zone/objects/player/sessions/CitySpecializationSession.idl():  		terminalObject = terminal;
	terminalObject = terminal;
}

int CitySpecializationSessionImplementation::cancelSession() {
	// server/zone/objects/player/sessions/CitySpecializationSession.idl():  		creatureObject.dropActiveSession(SessionFacadeType.CITYSPEC);
	creatureObject->dropActiveSession(SessionFacadeType::CITYSPEC);
	// server/zone/objects/player/sessions/CitySpecializationSession.idl():  		return 0;
	return 0;
}

int CitySpecializationSessionImplementation::clearSession() {
	// server/zone/objects/player/sessions/CitySpecializationSession.idl():  		return 0;
	return 0;
}

/*
 *	CitySpecializationSessionAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


CitySpecializationSessionAdapter::CitySpecializationSessionAdapter(CitySpecializationSession* obj) : FacadeAdapter(obj) {
}

void CitySpecializationSessionAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZESESSION__:
		{
			resp->insertSignedInt(initializeSession());
		}
		break;
	case RPC_SENDCONFIRMATIONBOX__STRING_:
		{
			String choice; 
			resp->insertSignedInt(sendConfirmationBox(inv->getAsciiParameter(choice)));
		}
		break;
	case RPC_ACCEPTCHOICE__:
		{
			resp->insertSignedInt(acceptChoice());
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

int CitySpecializationSessionAdapter::initializeSession() {
	return (static_cast<CitySpecializationSession*>(stub))->initializeSession();
}

int CitySpecializationSessionAdapter::sendConfirmationBox(const String& choice) {
	return (static_cast<CitySpecializationSession*>(stub))->sendConfirmationBox(choice);
}

int CitySpecializationSessionAdapter::acceptChoice() {
	return (static_cast<CitySpecializationSession*>(stub))->acceptChoice();
}

int CitySpecializationSessionAdapter::cancelSession() {
	return (static_cast<CitySpecializationSession*>(stub))->cancelSession();
}

int CitySpecializationSessionAdapter::clearSession() {
	return (static_cast<CitySpecializationSession*>(stub))->clearSession();
}

/*
 *	CitySpecializationSessionHelper
 */

CitySpecializationSessionHelper* CitySpecializationSessionHelper::staticInitializer = CitySpecializationSessionHelper::instance();

CitySpecializationSessionHelper::CitySpecializationSessionHelper() {
	className = "CitySpecializationSession";

	Core::getObjectBroker()->registerClass(className, this);
}

void CitySpecializationSessionHelper::finalizeHelper() {
	CitySpecializationSessionHelper::finalize();
}

DistributedObject* CitySpecializationSessionHelper::instantiateObject() {
	return new CitySpecializationSession(DummyConstructorParameter::instance());
}

DistributedObjectServant* CitySpecializationSessionHelper::instantiateServant() {
	return new CitySpecializationSessionImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* CitySpecializationSessionHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CitySpecializationSessionAdapter(static_cast<CitySpecializationSession*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

