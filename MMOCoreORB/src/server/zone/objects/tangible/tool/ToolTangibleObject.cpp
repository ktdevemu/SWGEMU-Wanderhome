/*
 *	server/zone/objects/tangible/tool/ToolTangibleObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "ToolTangibleObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

/*
 *	ToolTangibleObjectStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 6};

ToolTangibleObject::ToolTangibleObject() : TangibleObject(DummyConstructorParameter::instance()) {
	ToolTangibleObjectImplementation* _implementation = new ToolTangibleObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

ToolTangibleObject::ToolTangibleObject(DummyConstructorParameter* param) : TangibleObject(param) {
}

ToolTangibleObject::~ToolTangibleObject() {
}


void ToolTangibleObject::initializeTransientMembers() {
	ToolTangibleObjectImplementation* _implementation = (ToolTangibleObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

DistributedObjectServant* ToolTangibleObject::_getImplementation() {

	_updated = true;
	return _impl;
}

void ToolTangibleObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	ToolTangibleObjectImplementation
 */

ToolTangibleObjectImplementation::ToolTangibleObjectImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}


ToolTangibleObjectImplementation::~ToolTangibleObjectImplementation() {
}


void ToolTangibleObjectImplementation::finalize() {
}

void ToolTangibleObjectImplementation::_initializeImplementation() {
	_setClassHelper(ToolTangibleObjectHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void ToolTangibleObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (ToolTangibleObject*) stub;
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* ToolTangibleObjectImplementation::_getStub() {
	return _this;
}

ToolTangibleObjectImplementation::operator const ToolTangibleObject*() {
	return _this;
}

void ToolTangibleObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void ToolTangibleObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void ToolTangibleObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void ToolTangibleObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void ToolTangibleObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void ToolTangibleObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void ToolTangibleObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void ToolTangibleObjectImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("ToolTangibleObject");

}

void ToolTangibleObjectImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(ToolTangibleObjectImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool ToolTangibleObjectImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (TangibleObjectImplementation::readObjectMember(stream, _name))
		return true;


	return false;
}

void ToolTangibleObjectImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ToolTangibleObjectImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ToolTangibleObjectImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;

	return 0 + TangibleObjectImplementation::writeObjectMembers(stream);
}

ToolTangibleObjectImplementation::ToolTangibleObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/tool/ToolTangibleObject.idl():  		Logger.setLoggingName("ToolTangibleObject");
	Logger::setLoggingName("ToolTangibleObject");
}

void ToolTangibleObjectImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/tool/ToolTangibleObject.idl():  		super.initializeTransientMembers();
	TangibleObjectImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/tool/ToolTangibleObject.idl():  		Logger.setLoggingName("ToolTangibleObject");
	Logger::setLoggingName("ToolTangibleObject");
}

/*
 *	ToolTangibleObjectAdapter
 */

ToolTangibleObjectAdapter::ToolTangibleObjectAdapter(ToolTangibleObjectImplementation* obj) : TangibleObjectAdapter(obj) {
}

Packet* ToolTangibleObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		initializeTransientMembers();
		break;
	default:
		return NULL;
	}

	return resp;
}

void ToolTangibleObjectAdapter::initializeTransientMembers() {
	((ToolTangibleObjectImplementation*) impl)->initializeTransientMembers();
}

/*
 *	ToolTangibleObjectHelper
 */

ToolTangibleObjectHelper* ToolTangibleObjectHelper::staticInitializer = ToolTangibleObjectHelper::instance();

ToolTangibleObjectHelper::ToolTangibleObjectHelper() {
	className = "ToolTangibleObject";

	Core::getObjectBroker()->registerClass(className, this);
}

void ToolTangibleObjectHelper::finalizeHelper() {
	ToolTangibleObjectHelper::finalize();
}

DistributedObject* ToolTangibleObjectHelper::instantiateObject() {
	return new ToolTangibleObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* ToolTangibleObjectHelper::instantiateServant() {
	return new ToolTangibleObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ToolTangibleObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ToolTangibleObjectAdapter((ToolTangibleObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

