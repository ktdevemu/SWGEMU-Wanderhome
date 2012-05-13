/*
 *	server/zone/objects/tangible/terminal/Terminal.cpp generated by engine3 IDL compiler 0.60
 */

#include "Terminal.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

/*
 *	TerminalStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 6,RPC_ISTERMINAL__,RPC_ISGUILDTERMINAL__,RPC_SETCONTROLLEDOBJECT__SCENEOBJECT_,RPC_GETCONTROLLEDOBJECT__,RPC_ISELEVATORTERMINAL__,RPC_ISVENDORTERMINAL__,RPC_ISBAZAARTERMINAL__,RPC_INITIALIZECHILDOBJECT__SCENEOBJECT_};

Terminal::Terminal() : TangibleObject(DummyConstructorParameter::instance()) {
	TerminalImplementation* _implementation = new TerminalImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("Terminal");
}

Terminal::Terminal(DummyConstructorParameter* param) : TangibleObject(param) {
	_setClassName("Terminal");
}

Terminal::~Terminal() {
}



void Terminal::initializeTransientMembers() {
	TerminalImplementation* _implementation = static_cast<TerminalImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

bool Terminal::isTerminal() {
	TerminalImplementation* _implementation = static_cast<TerminalImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISTERMINAL__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isTerminal();
}

bool Terminal::isGuildTerminal() {
	TerminalImplementation* _implementation = static_cast<TerminalImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISGUILDTERMINAL__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isGuildTerminal();
}

void Terminal::setControlledObject(SceneObject* obj) {
	TerminalImplementation* _implementation = static_cast<TerminalImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETCONTROLLEDOBJECT__SCENEOBJECT_);
		method.addObjectParameter(obj);

		method.executeWithVoidReturn();
	} else
		_implementation->setControlledObject(obj);
}

SceneObject* Terminal::getControlledObject() {
	TerminalImplementation* _implementation = static_cast<TerminalImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETCONTROLLEDOBJECT__);

		return static_cast<SceneObject*>(method.executeWithObjectReturn());
	} else
		return _implementation->getControlledObject();
}

bool Terminal::isElevatorTerminal() {
	TerminalImplementation* _implementation = static_cast<TerminalImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISELEVATORTERMINAL__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isElevatorTerminal();
}

bool Terminal::isVendorTerminal() {
	TerminalImplementation* _implementation = static_cast<TerminalImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISVENDORTERMINAL__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isVendorTerminal();
}

bool Terminal::isBazaarTerminal() {
	TerminalImplementation* _implementation = static_cast<TerminalImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISBAZAARTERMINAL__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isBazaarTerminal();
}

void Terminal::initializeChildObject(SceneObject* controllerObject) {
	TerminalImplementation* _implementation = static_cast<TerminalImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZECHILDOBJECT__SCENEOBJECT_);
		method.addObjectParameter(controllerObject);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeChildObject(controllerObject);
}

DistributedObjectServant* Terminal::_getImplementation() {

	_updated = true;
	return _impl;
}

void Terminal::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	TerminalImplementation
 */

TerminalImplementation::TerminalImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}


TerminalImplementation::~TerminalImplementation() {
}


void TerminalImplementation::finalize() {
}

void TerminalImplementation::_initializeImplementation() {
	_setClassHelper(TerminalHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void TerminalImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<Terminal*>(stub);
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* TerminalImplementation::_getStub() {
	return _this;
}

TerminalImplementation::operator const Terminal*() {
	return _this;
}

void TerminalImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void TerminalImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void TerminalImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void TerminalImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void TerminalImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void TerminalImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void TerminalImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void TerminalImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("Terminal");

}

void TerminalImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(TerminalImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool TerminalImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (TangibleObjectImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "Terminal.controlledObject") {
		TypeInfo<ManagedReference<SceneObject* > >::parseFromBinaryStream(&controlledObject, stream);
		return true;
	}


	return false;
}

void TerminalImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = TerminalImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int TerminalImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = TangibleObjectImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;
	_name = "Terminal.controlledObject";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<SceneObject* > >::toBinaryStream(&controlledObject, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 1;
}

TerminalImplementation::TerminalImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/terminal/Terminal.idl():  		Logger.setLoggingName("Terminal");
	Logger::setLoggingName("Terminal");
	// server/zone/objects/tangible/terminal/Terminal.idl():  		controlledObject = null;
	controlledObject = NULL;
}

bool TerminalImplementation::isTerminal() {
	// server/zone/objects/tangible/terminal/Terminal.idl():  		return true;
	return true;
}

bool TerminalImplementation::isGuildTerminal() {
	// server/zone/objects/tangible/terminal/Terminal.idl():  		return false;
	return false;
}

void TerminalImplementation::setControlledObject(SceneObject* obj) {
	// server/zone/objects/tangible/terminal/Terminal.idl():  		controlledObject = obj;
	controlledObject = obj;
}

SceneObject* TerminalImplementation::getControlledObject() {
	// server/zone/objects/tangible/terminal/Terminal.idl():  		return controlledObject;
	return controlledObject;
}

bool TerminalImplementation::isElevatorTerminal() {
	// server/zone/objects/tangible/terminal/Terminal.idl():  		return false;
	return false;
}

bool TerminalImplementation::isVendorTerminal() {
	// server/zone/objects/tangible/terminal/Terminal.idl():  		return false;
	return false;
}

bool TerminalImplementation::isBazaarTerminal() {
	// server/zone/objects/tangible/terminal/Terminal.idl():  		return false;
	return false;
}

void TerminalImplementation::initializeChildObject(SceneObject* controllerObject) {
	// server/zone/objects/tangible/terminal/Terminal.idl():  		setControlledObject(controllerObject);
	setControlledObject(controllerObject);
}

/*
 *	TerminalAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


TerminalAdapter::TerminalAdapter(Terminal* obj) : TangibleObjectAdapter(obj) {
}

void TerminalAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			initializeTransientMembers();
		}
		break;
	case RPC_ISTERMINAL__:
		{
			resp->insertBoolean(isTerminal());
		}
		break;
	case RPC_ISGUILDTERMINAL__:
		{
			resp->insertBoolean(isGuildTerminal());
		}
		break;
	case RPC_SETCONTROLLEDOBJECT__SCENEOBJECT_:
		{
			setControlledObject(static_cast<SceneObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_GETCONTROLLEDOBJECT__:
		{
			resp->insertLong(getControlledObject()->_getObjectID());
		}
		break;
	case RPC_ISELEVATORTERMINAL__:
		{
			resp->insertBoolean(isElevatorTerminal());
		}
		break;
	case RPC_ISVENDORTERMINAL__:
		{
			resp->insertBoolean(isVendorTerminal());
		}
		break;
	case RPC_ISBAZAARTERMINAL__:
		{
			resp->insertBoolean(isBazaarTerminal());
		}
		break;
	case RPC_INITIALIZECHILDOBJECT__SCENEOBJECT_:
		{
			initializeChildObject(static_cast<SceneObject*>(inv->getObjectParameter()));
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

void TerminalAdapter::initializeTransientMembers() {
	(static_cast<Terminal*>(stub))->initializeTransientMembers();
}

bool TerminalAdapter::isTerminal() {
	return (static_cast<Terminal*>(stub))->isTerminal();
}

bool TerminalAdapter::isGuildTerminal() {
	return (static_cast<Terminal*>(stub))->isGuildTerminal();
}

void TerminalAdapter::setControlledObject(SceneObject* obj) {
	(static_cast<Terminal*>(stub))->setControlledObject(obj);
}

SceneObject* TerminalAdapter::getControlledObject() {
	return (static_cast<Terminal*>(stub))->getControlledObject();
}

bool TerminalAdapter::isElevatorTerminal() {
	return (static_cast<Terminal*>(stub))->isElevatorTerminal();
}

bool TerminalAdapter::isVendorTerminal() {
	return (static_cast<Terminal*>(stub))->isVendorTerminal();
}

bool TerminalAdapter::isBazaarTerminal() {
	return (static_cast<Terminal*>(stub))->isBazaarTerminal();
}

void TerminalAdapter::initializeChildObject(SceneObject* controllerObject) {
	(static_cast<Terminal*>(stub))->initializeChildObject(controllerObject);
}

/*
 *	TerminalHelper
 */

TerminalHelper* TerminalHelper::staticInitializer = TerminalHelper::instance();

TerminalHelper::TerminalHelper() {
	className = "Terminal";

	Core::getObjectBroker()->registerClass(className, this);
}

void TerminalHelper::finalizeHelper() {
	TerminalHelper::finalize();
}

DistributedObject* TerminalHelper::instantiateObject() {
	return new Terminal(DummyConstructorParameter::instance());
}

DistributedObjectServant* TerminalHelper::instantiateServant() {
	return new TerminalImplementation();
}

DistributedObjectAdapter* TerminalHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new TerminalAdapter(static_cast<Terminal*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

