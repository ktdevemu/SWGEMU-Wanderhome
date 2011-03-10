/*
 *	server/zone/objects/tangible/Container.cpp generated by engine3 IDL compiler 0.60
 */

#include "Container.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

#include "server/zone/templates/SharedObjectTemplate.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

/*
 *	ContainerStub
 */

Container::Container() : TangibleObject(DummyConstructorParameter::instance()) {
	ContainerImplementation* _implementation = new ContainerImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

Container::Container(DummyConstructorParameter* param) : TangibleObject(param) {
}

Container::~Container() {
}


void Container::loadTemplateData(SharedObjectTemplate* templateData) {
	ContainerImplementation* _implementation = (ContainerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

void Container::initializeTransientMembers() {
	ContainerImplementation* _implementation = (ContainerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void Container::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player) {
	ContainerImplementation* _implementation = (ContainerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillObjectMenuResponse(menuResponse, player);
}

int Container::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	ContainerImplementation* _implementation = (ContainerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->handleObjectMenuSelect(player, selectedID);
}

bool Container::checkPermission(PlayerCreature* player) {
	ContainerImplementation* _implementation = (ContainerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(player);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->checkPermission(player);
}

int Container::canAddObject(SceneObject* object, int containmentType, String& errorDescription) {
	ContainerImplementation* _implementation = (ContainerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(object);
		method.addSignedIntParameter(containmentType);
		method.addAsciiParameter(errorDescription);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->canAddObject(object, containmentType, errorDescription);
}

bool Container::isContainerObject() {
	ContainerImplementation* _implementation = (ContainerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isContainerObject();
}

bool Container::isContainerLocked() {
	ContainerImplementation* _implementation = (ContainerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isContainerLocked();
}

void Container::setLockedStatus(bool lock) {
	ContainerImplementation* _implementation = (ContainerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addBooleanParameter(lock);

		method.executeWithVoidReturn();
	} else
		_implementation->setLockedStatus(lock);
}

DistributedObjectServant* Container::_getImplementation() {

	_updated = true;
	return _impl;
}

void Container::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	ContainerImplementation
 */

ContainerImplementation::ContainerImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}


ContainerImplementation::~ContainerImplementation() {
}


void ContainerImplementation::finalize() {
}

void ContainerImplementation::_initializeImplementation() {
	_setClassHelper(ContainerHelper::instance());

	_serializationHelperMethod();
	_serializationHelperMethod();
}

void ContainerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (Container*) stub;
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* ContainerImplementation::_getStub() {
	return _this;
}

ContainerImplementation::operator const Container*() {
	return _this;
}

void ContainerImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void ContainerImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void ContainerImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void ContainerImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void ContainerImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void ContainerImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void ContainerImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void ContainerImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("Container");

}

void ContainerImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(ContainerImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool ContainerImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (TangibleObjectImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "locked") {
		TypeInfo<bool >::parseFromBinaryStream(&locked, stream);
		return true;
	}


	return false;
}

void ContainerImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ContainerImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ContainerImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "locked";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<bool >::toBinaryStream(&locked, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 1 + TangibleObjectImplementation::writeObjectMembers(stream);
}

ContainerImplementation::ContainerImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/Container.idl():  		Logger.setLoggingName("Container");
	Logger::setLoggingName("Container");
	// server/zone/objects/tangible/Container.idl():  		locked = false;
	locked = false;
}

bool ContainerImplementation::isContainerObject() {
	// server/zone/objects/tangible/Container.idl():  		return true;
	return true;
}

bool ContainerImplementation::isContainerLocked() {
	// server/zone/objects/tangible/Container.idl():  		return locked;
	return locked;
}

void ContainerImplementation::setLockedStatus(bool lock) {
	// server/zone/objects/tangible/Container.idl():  		locked = lock;
	locked = lock;
}

/*
 *	ContainerAdapter
 */

ContainerAdapter::ContainerAdapter(ContainerImplementation* obj) : TangibleObjectAdapter(obj) {
}

enum {RPC_INITIALIZETRANSIENTMEMBERS__,RPC_HANDLEOBJECTMENUSELECT__PLAYERCREATURE_BYTE_,RPC_CHECKPERMISSION__PLAYERCREATURE_,RPC_CANADDOBJECT__SCENEOBJECT_INT_STRING_,RPC_ISCONTAINEROBJECT__,RPC_ISCONTAINERLOCKED__,RPC_SETLOCKEDSTATUS__BOOL_};

Packet* ContainerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		initializeTransientMembers();
		break;
	case RPC_HANDLEOBJECTMENUSELECT__PLAYERCREATURE_BYTE_:
		resp->insertSignedInt(handleObjectMenuSelect((PlayerCreature*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	case RPC_CHECKPERMISSION__PLAYERCREATURE_:
		resp->insertBoolean(checkPermission((PlayerCreature*) inv->getObjectParameter()));
		break;
	case RPC_CANADDOBJECT__SCENEOBJECT_INT_STRING_:
		resp->insertSignedInt(canAddObject((SceneObject*) inv->getObjectParameter(), inv->getSignedIntParameter(), inv->getAsciiParameter(_param2_canAddObject__SceneObject_int_String_)));
		break;
	case RPC_ISCONTAINEROBJECT__:
		resp->insertBoolean(isContainerObject());
		break;
	case RPC_ISCONTAINERLOCKED__:
		resp->insertBoolean(isContainerLocked());
		break;
	case RPC_SETLOCKEDSTATUS__BOOL_:
		setLockedStatus(inv->getBooleanParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void ContainerAdapter::initializeTransientMembers() {
	((ContainerImplementation*) impl)->initializeTransientMembers();
}

int ContainerAdapter::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	return ((ContainerImplementation*) impl)->handleObjectMenuSelect(player, selectedID);
}

bool ContainerAdapter::checkPermission(PlayerCreature* player) {
	return ((ContainerImplementation*) impl)->checkPermission(player);
}

int ContainerAdapter::canAddObject(SceneObject* object, int containmentType, String& errorDescription) {
	return ((ContainerImplementation*) impl)->canAddObject(object, containmentType, errorDescription);
}

bool ContainerAdapter::isContainerObject() {
	return ((ContainerImplementation*) impl)->isContainerObject();
}

bool ContainerAdapter::isContainerLocked() {
	return ((ContainerImplementation*) impl)->isContainerLocked();
}

void ContainerAdapter::setLockedStatus(bool lock) {
	((ContainerImplementation*) impl)->setLockedStatus(lock);
}

/*
 *	ContainerHelper
 */

ContainerHelper* ContainerHelper::staticInitializer = ContainerHelper::instance();

ContainerHelper::ContainerHelper() {
	className = "Container";

	Core::getObjectBroker()->registerClass(className, this);
}

void ContainerHelper::finalizeHelper() {
	ContainerHelper::finalize();
}

DistributedObject* ContainerHelper::instantiateObject() {
	return new Container(DummyConstructorParameter::instance());
}

DistributedObjectServant* ContainerHelper::instantiateServant() {
	return new ContainerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ContainerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ContainerAdapter((ContainerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

