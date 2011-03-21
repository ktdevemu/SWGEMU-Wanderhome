/*
 *	server/zone/objects/intangible/IntangibleObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "IntangibleObject.h"

#include "server/zone/Zone.h"

#include "server/zone/templates/SharedObjectTemplate.h"

/*
 *	IntangibleObjectStub
 */

enum {RPC_FINALIZE__ = 6,RPC_INITIALIZETRANSIENTMEMBERS__,RPC_ISINTANGIBLEOBJECT__,RPC_SENDBASELINESTO__SCENEOBJECT_,RPC_UPDATESTATUS__INT_BOOL_,RPC_GETSTATUS__};

IntangibleObject::IntangibleObject() : SceneObject(DummyConstructorParameter::instance()) {
	IntangibleObjectImplementation* _implementation = new IntangibleObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

IntangibleObject::IntangibleObject(DummyConstructorParameter* param) : SceneObject(param) {
}

IntangibleObject::~IntangibleObject() {
}


void IntangibleObject::initializeTransientMembers() {
	IntangibleObjectImplementation* _implementation = (IntangibleObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void IntangibleObject::loadTemplateData(SharedObjectTemplate* templateData) {
	IntangibleObjectImplementation* _implementation = (IntangibleObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

bool IntangibleObject::isIntangibleObject() {
	IntangibleObjectImplementation* _implementation = (IntangibleObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISINTANGIBLEOBJECT__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isIntangibleObject();
}

void IntangibleObject::sendBaselinesTo(SceneObject* player) {
	IntangibleObjectImplementation* _implementation = (IntangibleObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDBASELINESTO__SCENEOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendBaselinesTo(player);
}

void IntangibleObject::updateStatus(int newStatus, bool notifyClient) {
	IntangibleObjectImplementation* _implementation = (IntangibleObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_UPDATESTATUS__INT_BOOL_);
		method.addSignedIntParameter(newStatus);
		method.addBooleanParameter(notifyClient);

		method.executeWithVoidReturn();
	} else
		_implementation->updateStatus(newStatus, notifyClient);
}

unsigned int IntangibleObject::getStatus() {
	IntangibleObjectImplementation* _implementation = (IntangibleObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSTATUS__);

		return method.executeWithUnsignedIntReturn();
	} else
		return _implementation->getStatus();
}

DistributedObjectServant* IntangibleObject::_getImplementation() {

	_updated = true;
	return _impl;
}

void IntangibleObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	IntangibleObjectImplementation
 */

IntangibleObjectImplementation::IntangibleObjectImplementation(DummyConstructorParameter* param) : SceneObjectImplementation(param) {
	_initializeImplementation();
}


IntangibleObjectImplementation::~IntangibleObjectImplementation() {
	IntangibleObjectImplementation::finalize();
}


void IntangibleObjectImplementation::_initializeImplementation() {
	_setClassHelper(IntangibleObjectHelper::instance());

	_serializationHelperMethod();
	_serializationHelperMethod();
}

void IntangibleObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (IntangibleObject*) stub;
	SceneObjectImplementation::_setStub(stub);
}

DistributedObjectStub* IntangibleObjectImplementation::_getStub() {
	return _this;
}

IntangibleObjectImplementation::operator const IntangibleObject*() {
	return _this;
}

void IntangibleObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void IntangibleObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void IntangibleObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void IntangibleObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void IntangibleObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void IntangibleObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void IntangibleObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void IntangibleObjectImplementation::_serializationHelperMethod() {
	SceneObjectImplementation::_serializationHelperMethod();

	_setClassName("IntangibleObject");

}

void IntangibleObjectImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(IntangibleObjectImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool IntangibleObjectImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (SceneObjectImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "status") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&status, stream);
		return true;
	}


	return false;
}

void IntangibleObjectImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = IntangibleObjectImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int IntangibleObjectImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "status";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&status, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 1 + SceneObjectImplementation::writeObjectMembers(stream);
}

IntangibleObjectImplementation::IntangibleObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/intangible/IntangibleObject.idl():  		Logger.setLoggingName("IntangibleObject");
	Logger::setLoggingName("IntangibleObject");
	// server/zone/objects/intangible/IntangibleObject.idl():  		status = 0;
	status = 0;
}

void IntangibleObjectImplementation::finalize() {
}

void IntangibleObjectImplementation::loadTemplateData(SharedObjectTemplate* templateData) {
	// server/zone/objects/intangible/IntangibleObject.idl():  		super.loadTemplateData(templateData);
	SceneObjectImplementation::loadTemplateData(templateData);
}

bool IntangibleObjectImplementation::isIntangibleObject() {
	// server/zone/objects/intangible/IntangibleObject.idl():  		return true;
	return true;
}

unsigned int IntangibleObjectImplementation::getStatus() {
	// server/zone/objects/intangible/IntangibleObject.idl():  		return status;
	return status;
}

/*
 *	IntangibleObjectAdapter
 */

IntangibleObjectAdapter::IntangibleObjectAdapter(IntangibleObjectImplementation* obj) : SceneObjectAdapter(obj) {
}

Packet* IntangibleObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_FINALIZE__:
		finalize();
		break;
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		initializeTransientMembers();
		break;
	case RPC_ISINTANGIBLEOBJECT__:
		resp->insertBoolean(isIntangibleObject());
		break;
	case RPC_SENDBASELINESTO__SCENEOBJECT_:
		sendBaselinesTo((SceneObject*) inv->getObjectParameter());
		break;
	case RPC_UPDATESTATUS__INT_BOOL_:
		updateStatus(inv->getSignedIntParameter(), inv->getBooleanParameter());
		break;
	case RPC_GETSTATUS__:
		resp->insertInt(getStatus());
		break;
	default:
		return NULL;
	}

	return resp;
}

void IntangibleObjectAdapter::finalize() {
	((IntangibleObjectImplementation*) impl)->finalize();
}

void IntangibleObjectAdapter::initializeTransientMembers() {
	((IntangibleObjectImplementation*) impl)->initializeTransientMembers();
}

bool IntangibleObjectAdapter::isIntangibleObject() {
	return ((IntangibleObjectImplementation*) impl)->isIntangibleObject();
}

void IntangibleObjectAdapter::sendBaselinesTo(SceneObject* player) {
	((IntangibleObjectImplementation*) impl)->sendBaselinesTo(player);
}

void IntangibleObjectAdapter::updateStatus(int newStatus, bool notifyClient) {
	((IntangibleObjectImplementation*) impl)->updateStatus(newStatus, notifyClient);
}

unsigned int IntangibleObjectAdapter::getStatus() {
	return ((IntangibleObjectImplementation*) impl)->getStatus();
}

/*
 *	IntangibleObjectHelper
 */

IntangibleObjectHelper* IntangibleObjectHelper::staticInitializer = IntangibleObjectHelper::instance();

IntangibleObjectHelper::IntangibleObjectHelper() {
	className = "IntangibleObject";

	Core::getObjectBroker()->registerClass(className, this);
}

void IntangibleObjectHelper::finalizeHelper() {
	IntangibleObjectHelper::finalize();
}

DistributedObject* IntangibleObjectHelper::instantiateObject() {
	return new IntangibleObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* IntangibleObjectHelper::instantiateServant() {
	return new IntangibleObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* IntangibleObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new IntangibleObjectAdapter((IntangibleObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

