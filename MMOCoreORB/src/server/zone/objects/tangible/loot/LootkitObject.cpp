/*
 *	server/zone/objects/tangible/loot/LootkitObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "LootkitObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	LootkitObjectStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 6,RPC_CANADDOBJECT__SCENEOBJECT_INT_STRING_,RPC_NOTIFYOBJECTINSERTED__SCENEOBJECT_,RPC_GETPLAYER__,RPC_FILLATTRIBUTELIST__ATTRIBUTELISTMESSAGE_CREATUREOBJECT_};

LootkitObject::LootkitObject() : TangibleObject(DummyConstructorParameter::instance()) {
	LootkitObjectImplementation* _implementation = new LootkitObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

LootkitObject::LootkitObject(DummyConstructorParameter* param) : TangibleObject(param) {
}

LootkitObject::~LootkitObject() {
}



void LootkitObject::initializeTransientMembers() {
	LootkitObjectImplementation* _implementation = static_cast<LootkitObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

int LootkitObject::canAddObject(SceneObject* object, int containmentType, String& errorDescription) {
	LootkitObjectImplementation* _implementation = static_cast<LootkitObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CANADDOBJECT__SCENEOBJECT_INT_STRING_);
		method.addObjectParameter(object);
		method.addSignedIntParameter(containmentType);
		method.addAsciiParameter(errorDescription);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->canAddObject(object, containmentType, errorDescription);
}

int LootkitObject::notifyObjectInserted(SceneObject* object) {
	LootkitObjectImplementation* _implementation = static_cast<LootkitObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYOBJECTINSERTED__SCENEOBJECT_);
		method.addObjectParameter(object);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->notifyObjectInserted(object);
}

CreatureObject* LootkitObject::getPlayer() {
	LootkitObjectImplementation* _implementation = static_cast<LootkitObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETPLAYER__);

		return static_cast<CreatureObject*>(method.executeWithObjectReturn());
	} else
		return _implementation->getPlayer();
}

void LootkitObject::loadTemplateData(SharedObjectTemplate* templateData) {
	LootkitObjectImplementation* _implementation = static_cast<LootkitObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

void LootkitObject::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	LootkitObjectImplementation* _implementation = static_cast<LootkitObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_FILLATTRIBUTELIST__ATTRIBUTELISTMESSAGE_CREATUREOBJECT_);
		method.addObjectParameter(msg);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		_implementation->fillAttributeList(msg, object);
}

DistributedObjectServant* LootkitObject::_getImplementation() {

	_updated = true;
	return _impl;
}

void LootkitObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	LootkitObjectImplementation
 */

LootkitObjectImplementation::LootkitObjectImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}


LootkitObjectImplementation::~LootkitObjectImplementation() {
}


void LootkitObjectImplementation::finalize() {
}

void LootkitObjectImplementation::_initializeImplementation() {
	_setClassHelper(LootkitObjectHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void LootkitObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<LootkitObject*>(stub);
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* LootkitObjectImplementation::_getStub() {
	return _this;
}

LootkitObjectImplementation::operator const LootkitObject*() {
	return _this;
}

void LootkitObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void LootkitObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void LootkitObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void LootkitObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void LootkitObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void LootkitObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void LootkitObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void LootkitObjectImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("LootkitObject");

}

void LootkitObjectImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(LootkitObjectImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool LootkitObjectImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (TangibleObjectImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "components") {
		TypeInfo<VectorMap<unsigned int, bool> >::parseFromBinaryStream(&components, stream);
		return true;
	}

	if (_name == "attributes") {
		TypeInfo<VectorMap<unsigned int, String> >::parseFromBinaryStream(&attributes, stream);
		return true;
	}

	if (_name == "comps") {
		TypeInfo<Vector<unsigned int> >::parseFromBinaryStream(&comps, stream);
		return true;
	}

	if (_name == "reward") {
		TypeInfo<Vector<unsigned int> >::parseFromBinaryStream(&reward, stream);
		return true;
	}

	if (_name == "deleteComponents") {
		TypeInfo<bool >::parseFromBinaryStream(&deleteComponents, stream);
		return true;
	}


	return false;
}

void LootkitObjectImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = LootkitObjectImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int LootkitObjectImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "components";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<VectorMap<unsigned int, bool> >::toBinaryStream(&components, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "attributes";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<VectorMap<unsigned int, String> >::toBinaryStream(&attributes, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "comps";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<Vector<unsigned int> >::toBinaryStream(&comps, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "reward";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<Vector<unsigned int> >::toBinaryStream(&reward, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "deleteComponents";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<bool >::toBinaryStream(&deleteComponents, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 5 + TangibleObjectImplementation::writeObjectMembers(stream);
}

LootkitObjectImplementation::LootkitObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/loot/LootkitObject.idl():  		Logger.setLoggingName("LootKitObject");
	Logger::setLoggingName("LootKitObject");
}

void LootkitObjectImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/loot/LootkitObject.idl():  		super.initializeTransientMembers();
	TangibleObjectImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/loot/LootkitObject.idl():  		Logger.setLoggingName("LootKitObject");
	Logger::setLoggingName("LootKitObject");
}

/*
 *	LootkitObjectAdapter
 */

LootkitObjectAdapter::LootkitObjectAdapter(LootkitObjectImplementation* obj) : TangibleObjectAdapter(obj) {
}

Packet* LootkitObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		initializeTransientMembers();
		break;
	case RPC_CANADDOBJECT__SCENEOBJECT_INT_STRING_:
		resp->insertSignedInt(canAddObject(static_cast<SceneObject*>(inv->getObjectParameter()), inv->getSignedIntParameter(), inv->getAsciiParameter(_param2_canAddObject__SceneObject_int_String_)));
		break;
	case RPC_NOTIFYOBJECTINSERTED__SCENEOBJECT_:
		resp->insertSignedInt(notifyObjectInserted(static_cast<SceneObject*>(inv->getObjectParameter())));
		break;
	case RPC_GETPLAYER__:
		resp->insertLong(getPlayer()->_getObjectID());
		break;
	case RPC_FILLATTRIBUTELIST__ATTRIBUTELISTMESSAGE_CREATUREOBJECT_:
		fillAttributeList(static_cast<AttributeListMessage*>(inv->getObjectParameter()), static_cast<CreatureObject*>(inv->getObjectParameter()));
		break;
	default:
		return NULL;
	}

	return resp;
}

void LootkitObjectAdapter::initializeTransientMembers() {
	(static_cast<LootkitObjectImplementation*>(impl))->initializeTransientMembers();
}

int LootkitObjectAdapter::canAddObject(SceneObject* object, int containmentType, String& errorDescription) {
	return (static_cast<LootkitObjectImplementation*>(impl))->canAddObject(object, containmentType, errorDescription);
}

int LootkitObjectAdapter::notifyObjectInserted(SceneObject* object) {
	return (static_cast<LootkitObjectImplementation*>(impl))->notifyObjectInserted(object);
}

CreatureObject* LootkitObjectAdapter::getPlayer() {
	return (static_cast<LootkitObjectImplementation*>(impl))->getPlayer();
}

void LootkitObjectAdapter::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	(static_cast<LootkitObjectImplementation*>(impl))->fillAttributeList(msg, object);
}

/*
 *	LootkitObjectHelper
 */

LootkitObjectHelper* LootkitObjectHelper::staticInitializer = LootkitObjectHelper::instance();

LootkitObjectHelper::LootkitObjectHelper() {
	className = "LootkitObject";

	Core::getObjectBroker()->registerClass(className, this);
}

void LootkitObjectHelper::finalizeHelper() {
	LootkitObjectHelper::finalize();
}

DistributedObject* LootkitObjectHelper::instantiateObject() {
	return new LootkitObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* LootkitObjectHelper::instantiateServant() {
	return new LootkitObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* LootkitObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new LootkitObjectAdapter(static_cast<LootkitObjectImplementation*>(obj->_getImplementation()));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

