/*
 *	server/zone/objects/resource/ResourceContainer.cpp generated by engine3 IDL compiler 0.60
 */

#include "ResourceContainer.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/area/ActiveArea.h"

#include "server/zone/objects/scene/SceneObject.h"

/*
 *	ResourceContainerStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 6,RPC_DESTROYOBJECTFROMDATABASE__BOOL_,RPC_SENDBASELINESTO__SCENEOBJECT_,RPC_SETQUANTITY__INT_BOOL_,RPC_ISRESOURCECONTAINER__,RPC_GETQUANTITY__,RPC_GETUSECOUNT__,RPC_SETUSECOUNT__INT_BOOL_,RPC_SETSPAWNOBJECT__RESOURCESPAWN_,RPC_GETSPAWNNAME__,RPC_GETSPAWNTYPE__,RPC_GETSPAWNID__,RPC_GETSPAWNOBJECT__,RPC_SPLIT__INT_,RPC_SPLIT__INT_CREATUREOBJECT_,RPC_COMBINE__RESOURCECONTAINER_};

ResourceContainer::ResourceContainer() : TangibleObject(DummyConstructorParameter::instance()) {
	ResourceContainerImplementation* _implementation = new ResourceContainerImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

ResourceContainer::ResourceContainer(DummyConstructorParameter* param) : TangibleObject(param) {
}

ResourceContainer::~ResourceContainer() {
}



void ResourceContainer::initializeTransientMembers() {
	ResourceContainerImplementation* _implementation = static_cast<ResourceContainerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void ResourceContainer::destroyObjectFromDatabase(bool destroyContainedObjects) {
	ResourceContainerImplementation* _implementation = static_cast<ResourceContainerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DESTROYOBJECTFROMDATABASE__BOOL_);
		method.addBooleanParameter(destroyContainedObjects);

		method.executeWithVoidReturn();
	} else
		_implementation->destroyObjectFromDatabase(destroyContainedObjects);
}

void ResourceContainer::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	ResourceContainerImplementation* _implementation = static_cast<ResourceContainerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillAttributeList(msg, object);
}

void ResourceContainer::sendBaselinesTo(SceneObject* player) {
	ResourceContainerImplementation* _implementation = static_cast<ResourceContainerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDBASELINESTO__SCENEOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendBaselinesTo(player);
}

void ResourceContainer::setQuantity(unsigned int newQuantity, bool notifyClient) {
	ResourceContainerImplementation* _implementation = static_cast<ResourceContainerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETQUANTITY__INT_BOOL_);
		method.addUnsignedIntParameter(newQuantity);
		method.addBooleanParameter(notifyClient);

		method.executeWithVoidReturn();
	} else
		_implementation->setQuantity(newQuantity, notifyClient);
}

bool ResourceContainer::isResourceContainer() {
	ResourceContainerImplementation* _implementation = static_cast<ResourceContainerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISRESOURCECONTAINER__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isResourceContainer();
}

int ResourceContainer::getQuantity() {
	ResourceContainerImplementation* _implementation = static_cast<ResourceContainerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETQUANTITY__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getQuantity();
}

int ResourceContainer::getUseCount() {
	ResourceContainerImplementation* _implementation = static_cast<ResourceContainerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETUSECOUNT__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getUseCount();
}

void ResourceContainer::setUseCount(unsigned int newUseCount, bool notifyClient) {
	ResourceContainerImplementation* _implementation = static_cast<ResourceContainerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETUSECOUNT__INT_BOOL_);
		method.addUnsignedIntParameter(newUseCount);
		method.addBooleanParameter(notifyClient);

		method.executeWithVoidReturn();
	} else
		_implementation->setUseCount(newUseCount, notifyClient);
}

void ResourceContainer::setSpawnObject(ResourceSpawn* spawn) {
	ResourceContainerImplementation* _implementation = static_cast<ResourceContainerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETSPAWNOBJECT__RESOURCESPAWN_);
		method.addObjectParameter(spawn);

		method.executeWithVoidReturn();
	} else
		_implementation->setSpawnObject(spawn);
}

String ResourceContainer::getSpawnName() {
	ResourceContainerImplementation* _implementation = static_cast<ResourceContainerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSPAWNNAME__);

		method.executeWithAsciiReturn(_return_getSpawnName);
		return _return_getSpawnName;
	} else
		return _implementation->getSpawnName();
}

String ResourceContainer::getSpawnType() {
	ResourceContainerImplementation* _implementation = static_cast<ResourceContainerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSPAWNTYPE__);

		method.executeWithAsciiReturn(_return_getSpawnType);
		return _return_getSpawnType;
	} else
		return _implementation->getSpawnType();
}

unsigned long long ResourceContainer::getSpawnID() {
	ResourceContainerImplementation* _implementation = static_cast<ResourceContainerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSPAWNID__);

		return method.executeWithUnsignedLongReturn();
	} else
		return _implementation->getSpawnID();
}

ResourceSpawn* ResourceContainer::getSpawnObject() {
	ResourceContainerImplementation* _implementation = static_cast<ResourceContainerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSPAWNOBJECT__);

		return static_cast<ResourceSpawn*>(method.executeWithObjectReturn());
	} else
		return _implementation->getSpawnObject();
}

void ResourceContainer::split(int newStackSize) {
	ResourceContainerImplementation* _implementation = static_cast<ResourceContainerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SPLIT__INT_);
		method.addSignedIntParameter(newStackSize);

		method.executeWithVoidReturn();
	} else
		_implementation->split(newStackSize);
}

void ResourceContainer::split(int newStackSize, CreatureObject* player) {
	ResourceContainerImplementation* _implementation = static_cast<ResourceContainerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SPLIT__INT_CREATUREOBJECT_);
		method.addSignedIntParameter(newStackSize);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->split(newStackSize, player);
}

void ResourceContainer::combine(ResourceContainer* fromContainer) {
	ResourceContainerImplementation* _implementation = static_cast<ResourceContainerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_COMBINE__RESOURCECONTAINER_);
		method.addObjectParameter(fromContainer);

		method.executeWithVoidReturn();
	} else
		_implementation->combine(fromContainer);
}

DistributedObjectServant* ResourceContainer::_getImplementation() {

	_updated = true;
	return _impl;
}

void ResourceContainer::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	ResourceContainerImplementation
 */

ResourceContainerImplementation::ResourceContainerImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}


ResourceContainerImplementation::~ResourceContainerImplementation() {
}


void ResourceContainerImplementation::finalize() {
}

void ResourceContainerImplementation::_initializeImplementation() {
	_setClassHelper(ResourceContainerHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void ResourceContainerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<ResourceContainer*>(stub);
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* ResourceContainerImplementation::_getStub() {
	return _this;
}

ResourceContainerImplementation::operator const ResourceContainer*() {
	return _this;
}

void ResourceContainerImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void ResourceContainerImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void ResourceContainerImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void ResourceContainerImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void ResourceContainerImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void ResourceContainerImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void ResourceContainerImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void ResourceContainerImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("ResourceContainer");

}

void ResourceContainerImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(ResourceContainerImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool ResourceContainerImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (TangibleObjectImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "ResourceContainer.spawnObject") {
		TypeInfo<ManagedReference<ResourceSpawn* > >::parseFromBinaryStream(&spawnObject, stream);
		return true;
	}

	if (_name == "ResourceContainer.stackQuantity") {
		TypeInfo<int >::parseFromBinaryStream(&stackQuantity, stream);
		return true;
	}


	return false;
}

void ResourceContainerImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ResourceContainerImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ResourceContainerImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "ResourceContainer.spawnObject";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedReference<ResourceSpawn* > >::toBinaryStream(&spawnObject, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "ResourceContainer.stackQuantity";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&stackQuantity, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 2 + TangibleObjectImplementation::writeObjectMembers(stream);
}

ResourceContainerImplementation::ResourceContainerImplementation() {
	_initializeImplementation();
	// server/zone/objects/resource/ResourceContainer.idl():   	stackQuantity = 0;
	stackQuantity = 0;
	// server/zone/objects/resource/ResourceContainer.idl():   	setLoggingName("ResourceContainer");
	setLoggingName("ResourceContainer");
}

void ResourceContainerImplementation::initializeTransientMembers() {
	// server/zone/objects/resource/ResourceContainer.idl():  		super.initializeTransientMembers();
	TangibleObjectImplementation::initializeTransientMembers();
	// server/zone/objects/resource/ResourceContainer.idl():  		Logger.setLoggingName("ResourceContainer");
	Logger::setLoggingName("ResourceContainer");
}

bool ResourceContainerImplementation::isResourceContainer() {
	// server/zone/objects/resource/ResourceContainer.idl():  		return true;
	return true;
}

int ResourceContainerImplementation::getQuantity() {
	// server/zone/objects/resource/ResourceContainer.idl():  		return stackQuantity;
	return stackQuantity;
}

int ResourceContainerImplementation::getUseCount() {
	// server/zone/objects/resource/ResourceContainer.idl():  		return getQuantity();
	return getQuantity();
}

void ResourceContainerImplementation::setSpawnObject(ResourceSpawn* spawn) {
	// server/zone/objects/resource/ResourceContainer.idl():  		spawnObject = spawn;
	spawnObject = spawn;
}

String ResourceContainerImplementation::getSpawnName() {
	String ret;
	// server/zone/objects/resource/ResourceContainer.idl():  		return 
	if (spawnObject != NULL){
	// server/zone/objects/resource/ResourceContainer.idl():  			ret = spawnObject.getName();
	ret = spawnObject->getName();
}
	// server/zone/objects/resource/ResourceContainer.idl():  		return ret;
	return ret;
}

String ResourceContainerImplementation::getSpawnType() {
	String ret;
	// server/zone/objects/resource/ResourceContainer.idl():  		return 
	if (spawnObject != NULL){
	// server/zone/objects/resource/ResourceContainer.idl():  			ret = spawnObject.getType();
	ret = spawnObject->getType();
}
	// server/zone/objects/resource/ResourceContainer.idl():  		return ret;
	return ret;
}

unsigned long long ResourceContainerImplementation::getSpawnID() {
	// server/zone/objects/resource/ResourceContainer.idl():  		unsigned long id = 0;
	unsigned long long id = 0;
	// server/zone/objects/resource/ResourceContainer.idl():  		return 
	if (spawnObject != NULL){
	// server/zone/objects/resource/ResourceContainer.idl():  			id = spawnObject.getObjectID();
	id = spawnObject->getObjectID();
}
	// server/zone/objects/resource/ResourceContainer.idl():  		return id;
	return id;
}

ResourceSpawn* ResourceContainerImplementation::getSpawnObject() {
	// server/zone/objects/resource/ResourceContainer.idl():  		return spawnObject;
	return spawnObject;
}

/*
 *	ResourceContainerAdapter
 */

ResourceContainerAdapter::ResourceContainerAdapter(ResourceContainer* obj) : TangibleObjectAdapter(obj) {
}

Packet* ResourceContainerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		initializeTransientMembers();
		break;
	case RPC_DESTROYOBJECTFROMDATABASE__BOOL_:
		destroyObjectFromDatabase(inv->getBooleanParameter());
		break;
	case RPC_SENDBASELINESTO__SCENEOBJECT_:
		sendBaselinesTo(static_cast<SceneObject*>(inv->getObjectParameter()));
		break;
	case RPC_SETQUANTITY__INT_BOOL_:
		setQuantity(inv->getUnsignedIntParameter(), inv->getBooleanParameter());
		break;
	case RPC_ISRESOURCECONTAINER__:
		resp->insertBoolean(isResourceContainer());
		break;
	case RPC_GETQUANTITY__:
		resp->insertSignedInt(getQuantity());
		break;
	case RPC_GETUSECOUNT__:
		resp->insertSignedInt(getUseCount());
		break;
	case RPC_SETUSECOUNT__INT_BOOL_:
		setUseCount(inv->getUnsignedIntParameter(), inv->getBooleanParameter());
		break;
	case RPC_SETSPAWNOBJECT__RESOURCESPAWN_:
		setSpawnObject(static_cast<ResourceSpawn*>(inv->getObjectParameter()));
		break;
	case RPC_GETSPAWNNAME__:
		resp->insertAscii(getSpawnName());
		break;
	case RPC_GETSPAWNTYPE__:
		resp->insertAscii(getSpawnType());
		break;
	case RPC_GETSPAWNID__:
		resp->insertLong(getSpawnID());
		break;
	case RPC_GETSPAWNOBJECT__:
		resp->insertLong(getSpawnObject()->_getObjectID());
		break;
	case RPC_SPLIT__INT_:
		split(inv->getSignedIntParameter());
		break;
	case RPC_SPLIT__INT_CREATUREOBJECT_:
		split(inv->getSignedIntParameter(), static_cast<CreatureObject*>(inv->getObjectParameter()));
		break;
	case RPC_COMBINE__RESOURCECONTAINER_:
		combine(static_cast<ResourceContainer*>(inv->getObjectParameter()));
		break;
	default:
		return NULL;
	}

	return resp;
}

void ResourceContainerAdapter::initializeTransientMembers() {
	(static_cast<ResourceContainer*>(stub))->initializeTransientMembers();
}

void ResourceContainerAdapter::destroyObjectFromDatabase(bool destroyContainedObjects) {
	(static_cast<ResourceContainer*>(stub))->destroyObjectFromDatabase(destroyContainedObjects);
}

void ResourceContainerAdapter::sendBaselinesTo(SceneObject* player) {
	(static_cast<ResourceContainer*>(stub))->sendBaselinesTo(player);
}

void ResourceContainerAdapter::setQuantity(unsigned int newQuantity, bool notifyClient) {
	(static_cast<ResourceContainer*>(stub))->setQuantity(newQuantity, notifyClient);
}

bool ResourceContainerAdapter::isResourceContainer() {
	return (static_cast<ResourceContainer*>(stub))->isResourceContainer();
}

int ResourceContainerAdapter::getQuantity() {
	return (static_cast<ResourceContainer*>(stub))->getQuantity();
}

int ResourceContainerAdapter::getUseCount() {
	return (static_cast<ResourceContainer*>(stub))->getUseCount();
}

void ResourceContainerAdapter::setUseCount(unsigned int newUseCount, bool notifyClient) {
	(static_cast<ResourceContainer*>(stub))->setUseCount(newUseCount, notifyClient);
}

void ResourceContainerAdapter::setSpawnObject(ResourceSpawn* spawn) {
	(static_cast<ResourceContainer*>(stub))->setSpawnObject(spawn);
}

String ResourceContainerAdapter::getSpawnName() {
	return (static_cast<ResourceContainer*>(stub))->getSpawnName();
}

String ResourceContainerAdapter::getSpawnType() {
	return (static_cast<ResourceContainer*>(stub))->getSpawnType();
}

unsigned long long ResourceContainerAdapter::getSpawnID() {
	return (static_cast<ResourceContainer*>(stub))->getSpawnID();
}

ResourceSpawn* ResourceContainerAdapter::getSpawnObject() {
	return (static_cast<ResourceContainer*>(stub))->getSpawnObject();
}

void ResourceContainerAdapter::split(int newStackSize) {
	(static_cast<ResourceContainer*>(stub))->split(newStackSize);
}

void ResourceContainerAdapter::split(int newStackSize, CreatureObject* player) {
	(static_cast<ResourceContainer*>(stub))->split(newStackSize, player);
}

void ResourceContainerAdapter::combine(ResourceContainer* fromContainer) {
	(static_cast<ResourceContainer*>(stub))->combine(fromContainer);
}

/*
 *	ResourceContainerHelper
 */

ResourceContainerHelper* ResourceContainerHelper::staticInitializer = ResourceContainerHelper::instance();

ResourceContainerHelper::ResourceContainerHelper() {
	className = "ResourceContainer";

	Core::getObjectBroker()->registerClass(className, this);
}

void ResourceContainerHelper::finalizeHelper() {
	ResourceContainerHelper::finalize();
}

DistributedObject* ResourceContainerHelper::instantiateObject() {
	return new ResourceContainer(DummyConstructorParameter::instance());
}

DistributedObjectServant* ResourceContainerHelper::instantiateServant() {
	return new ResourceContainerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ResourceContainerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ResourceContainerAdapter(static_cast<ResourceContainer*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

