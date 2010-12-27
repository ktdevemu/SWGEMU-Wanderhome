/*
 *	server/zone/objects/tangible/terminal/cloning/CloningTerminal.cpp generated by engine3 IDL compiler 0.60
 */

#include "CloningTerminal.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/Zone.h"

#include "server/zone/templates/SharedObjectTemplate.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

/*
 *	CloningTerminalStub
 */

CloningTerminal::CloningTerminal() : Terminal(DummyConstructorParameter::instance()) {
	CloningTerminalImplementation* _implementation = new CloningTerminalImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

CloningTerminal::CloningTerminal(DummyConstructorParameter* param) : Terminal(param) {
}

CloningTerminal::~CloningTerminal() {
}


int CloningTerminal::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	CloningTerminalImplementation* _implementation = (CloningTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->handleObjectMenuSelect(player, selectedID);
}

DistributedObjectServant* CloningTerminal::_getImplementation() {

	_updated = true;
	return _impl;
}

void CloningTerminal::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	CloningTerminalImplementation
 */

CloningTerminalImplementation::CloningTerminalImplementation(DummyConstructorParameter* param) : TerminalImplementation(param) {
	_initializeImplementation();
}


CloningTerminalImplementation::~CloningTerminalImplementation() {
}


void CloningTerminalImplementation::finalize() {
}

void CloningTerminalImplementation::_initializeImplementation() {
	_setClassHelper(CloningTerminalHelper::instance());

	_serializationHelperMethod();
	_serializationHelperMethod();
}

void CloningTerminalImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (CloningTerminal*) stub;
	TerminalImplementation::_setStub(stub);
}

DistributedObjectStub* CloningTerminalImplementation::_getStub() {
	return _this;
}

CloningTerminalImplementation::operator const CloningTerminal*() {
	return _this;
}

void CloningTerminalImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void CloningTerminalImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void CloningTerminalImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void CloningTerminalImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void CloningTerminalImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void CloningTerminalImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void CloningTerminalImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void CloningTerminalImplementation::_serializationHelperMethod() {
	TerminalImplementation::_serializationHelperMethod();

	_setClassName("CloningTerminal");

}

void CloningTerminalImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(CloningTerminalImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool CloningTerminalImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (TerminalImplementation::readObjectMember(stream, _name))
		return true;


	return false;
}

void CloningTerminalImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = CloningTerminalImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int CloningTerminalImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;

	return 0 + TerminalImplementation::writeObjectMembers(stream);
}

CloningTerminalImplementation::CloningTerminalImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/terminal/cloning/CloningTerminal.idl(59):  		Logger.setLoggingName("Cloning Terminal");
	Logger::setLoggingName("Cloning Terminal");
}

/*
 *	CloningTerminalAdapter
 */

CloningTerminalAdapter::CloningTerminalAdapter(CloningTerminalImplementation* obj) : TerminalAdapter(obj) {
}

Packet* CloningTerminalAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		resp->insertSignedInt(handleObjectMenuSelect((PlayerCreature*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	default:
		return NULL;
	}

	return resp;
}

int CloningTerminalAdapter::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	return ((CloningTerminalImplementation*) impl)->handleObjectMenuSelect(player, selectedID);
}

/*
 *	CloningTerminalHelper
 */

CloningTerminalHelper* CloningTerminalHelper::staticInitializer = CloningTerminalHelper::instance();

CloningTerminalHelper::CloningTerminalHelper() {
	className = "CloningTerminal";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void CloningTerminalHelper::finalizeHelper() {
	CloningTerminalHelper::finalize();
}

DistributedObject* CloningTerminalHelper::instantiateObject() {
	return new CloningTerminal(DummyConstructorParameter::instance());
}

DistributedObjectServant* CloningTerminalHelper::instantiateServant() {
	return new CloningTerminalImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* CloningTerminalHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CloningTerminalAdapter((CloningTerminalImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

