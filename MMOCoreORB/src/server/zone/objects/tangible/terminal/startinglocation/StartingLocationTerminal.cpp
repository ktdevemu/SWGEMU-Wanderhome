/*
 *	server/zone/objects/tangible/terminal/startinglocation/StartingLocationTerminal.cpp generated by engine3 IDL compiler 0.60
 */

#include "StartingLocationTerminal.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/Zone.h"

/*
 *	StartingLocationTerminalStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 6,RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,RPC_SETAUTHORIZATIONSTATE__BOOL_};

StartingLocationTerminal::StartingLocationTerminal() : Terminal(DummyConstructorParameter::instance()) {
	StartingLocationTerminalImplementation* _implementation = new StartingLocationTerminalImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("StartingLocationTerminal");
}

StartingLocationTerminal::StartingLocationTerminal(DummyConstructorParameter* param) : Terminal(param) {
	_setClassName("StartingLocationTerminal");
}

StartingLocationTerminal::~StartingLocationTerminal() {
}



void StartingLocationTerminal::initializeTransientMembers() {
	StartingLocationTerminalImplementation* _implementation = static_cast<StartingLocationTerminalImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

int StartingLocationTerminal::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	StartingLocationTerminalImplementation* _implementation = static_cast<StartingLocationTerminalImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->handleObjectMenuSelect(player, selectedID);
}

void StartingLocationTerminal::setAuthorizationState(bool state) {
	StartingLocationTerminalImplementation* _implementation = static_cast<StartingLocationTerminalImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETAUTHORIZATIONSTATE__BOOL_);
		method.addBooleanParameter(state);

		method.executeWithVoidReturn();
	} else
		_implementation->setAuthorizationState(state);
}

DistributedObjectServant* StartingLocationTerminal::_getImplementation() {

	_updated = true;
	return _impl;
}

void StartingLocationTerminal::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	StartingLocationTerminalImplementation
 */

StartingLocationTerminalImplementation::StartingLocationTerminalImplementation(DummyConstructorParameter* param) : TerminalImplementation(param) {
	_initializeImplementation();
}


StartingLocationTerminalImplementation::~StartingLocationTerminalImplementation() {
}


void StartingLocationTerminalImplementation::finalize() {
}

void StartingLocationTerminalImplementation::_initializeImplementation() {
	_setClassHelper(StartingLocationTerminalHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void StartingLocationTerminalImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<StartingLocationTerminal*>(stub);
	TerminalImplementation::_setStub(stub);
}

DistributedObjectStub* StartingLocationTerminalImplementation::_getStub() {
	return _this.get();
}

StartingLocationTerminalImplementation::operator const StartingLocationTerminal*() {
	return _this.get();
}

void StartingLocationTerminalImplementation::lock(bool doLock) {
	_this.get()->lock(doLock);
}

void StartingLocationTerminalImplementation::lock(ManagedObject* obj) {
	_this.get()->lock(obj);
}

void StartingLocationTerminalImplementation::rlock(bool doLock) {
	_this.get()->rlock(doLock);
}

void StartingLocationTerminalImplementation::wlock(bool doLock) {
	_this.get()->wlock(doLock);
}

void StartingLocationTerminalImplementation::wlock(ManagedObject* obj) {
	_this.get()->wlock(obj);
}

void StartingLocationTerminalImplementation::unlock(bool doLock) {
	_this.get()->unlock(doLock);
}

void StartingLocationTerminalImplementation::runlock(bool doLock) {
	_this.get()->runlock(doLock);
}

void StartingLocationTerminalImplementation::_serializationHelperMethod() {
	TerminalImplementation::_serializationHelperMethod();

	_setClassName("StartingLocationTerminal");

}

void StartingLocationTerminalImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(StartingLocationTerminalImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool StartingLocationTerminalImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (TerminalImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "StartingLocationTerminal.authorizationState") {
		TypeInfo<bool >::parseFromBinaryStream(&authorizationState, stream);
		return true;
	}


	return false;
}

void StartingLocationTerminalImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = StartingLocationTerminalImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int StartingLocationTerminalImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = TerminalImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;
	_name = "StartingLocationTerminal.authorizationState";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<bool >::toBinaryStream(&authorizationState, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 1;
}

StartingLocationTerminalImplementation::StartingLocationTerminalImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/terminal/startinglocation/StartingLocationTerminal.idl():  		Logger.setLoggingName("StartingLocationTerminal");
	Logger::setLoggingName("StartingLocationTerminal");
	// server/zone/objects/tangible/terminal/startinglocation/StartingLocationTerminal.idl():  		authorizationState = true;
	authorizationState = true;
}

void StartingLocationTerminalImplementation::setAuthorizationState(bool state) {
	// server/zone/objects/tangible/terminal/startinglocation/StartingLocationTerminal.idl():  		authorizationState = state;
	authorizationState = state;
}

/*
 *	StartingLocationTerminalAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


StartingLocationTerminalAdapter::StartingLocationTerminalAdapter(StartingLocationTerminal* obj) : TerminalAdapter(obj) {
}

void StartingLocationTerminalAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			initializeTransientMembers();
		}
		break;
	case RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_:
		{
			resp->insertSignedInt(handleObjectMenuSelect(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getByteParameter()));
		}
		break;
	case RPC_SETAUTHORIZATIONSTATE__BOOL_:
		{
			setAuthorizationState(inv->getBooleanParameter());
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

void StartingLocationTerminalAdapter::initializeTransientMembers() {
	(static_cast<StartingLocationTerminal*>(stub))->initializeTransientMembers();
}

int StartingLocationTerminalAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<StartingLocationTerminal*>(stub))->handleObjectMenuSelect(player, selectedID);
}

void StartingLocationTerminalAdapter::setAuthorizationState(bool state) {
	(static_cast<StartingLocationTerminal*>(stub))->setAuthorizationState(state);
}

/*
 *	StartingLocationTerminalHelper
 */

StartingLocationTerminalHelper* StartingLocationTerminalHelper::staticInitializer = StartingLocationTerminalHelper::instance();

StartingLocationTerminalHelper::StartingLocationTerminalHelper() {
	className = "StartingLocationTerminal";

	Core::getObjectBroker()->registerClass(className, this);
}

void StartingLocationTerminalHelper::finalizeHelper() {
	StartingLocationTerminalHelper::finalize();
}

DistributedObject* StartingLocationTerminalHelper::instantiateObject() {
	return new StartingLocationTerminal(DummyConstructorParameter::instance());
}

DistributedObjectServant* StartingLocationTerminalHelper::instantiateServant() {
	return new StartingLocationTerminalImplementation();
}

DistributedObjectAdapter* StartingLocationTerminalHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new StartingLocationTerminalAdapter(static_cast<StartingLocationTerminal*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

