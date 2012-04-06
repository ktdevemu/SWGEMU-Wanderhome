/*
 *	server/zone/objects/tangible/wearables/RobeObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "RobeObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/Zone.h"

/*
 *	RobeObjectStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 6,RPC_GETSKILLREQUIRED__,RPC_ISROBEOBJECT__};

RobeObject::RobeObject() : WearableObject(DummyConstructorParameter::instance()) {
	RobeObjectImplementation* _implementation = new RobeObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("RobeObject");
}

RobeObject::RobeObject(DummyConstructorParameter* param) : WearableObject(param) {
	_setClassName("RobeObject");
}

RobeObject::~RobeObject() {
}



void RobeObject::initializeTransientMembers() {
	RobeObjectImplementation* _implementation = static_cast<RobeObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void RobeObject::loadTemplateData(SharedObjectTemplate* templateData) {
	RobeObjectImplementation* _implementation = static_cast<RobeObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

void RobeObject::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	RobeObjectImplementation* _implementation = static_cast<RobeObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillAttributeList(msg, object);
}

String RobeObject::getSkillRequired() {
	RobeObjectImplementation* _implementation = static_cast<RobeObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSKILLREQUIRED__);

		method.executeWithAsciiReturn(_return_getSkillRequired);
		return _return_getSkillRequired;
	} else
		return _implementation->getSkillRequired();
}

bool RobeObject::isRobeObject() {
	RobeObjectImplementation* _implementation = static_cast<RobeObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISROBEOBJECT__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isRobeObject();
}

DistributedObjectServant* RobeObject::_getImplementation() {

	_updated = true;
	return _impl;
}

void RobeObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	RobeObjectImplementation
 */

RobeObjectImplementation::RobeObjectImplementation(DummyConstructorParameter* param) : WearableObjectImplementation(param) {
	_initializeImplementation();
}


RobeObjectImplementation::~RobeObjectImplementation() {
}


void RobeObjectImplementation::finalize() {
}

void RobeObjectImplementation::_initializeImplementation() {
	_setClassHelper(RobeObjectHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void RobeObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<RobeObject*>(stub);
	WearableObjectImplementation::_setStub(stub);
}

DistributedObjectStub* RobeObjectImplementation::_getStub() {
	return _this;
}

RobeObjectImplementation::operator const RobeObject*() {
	return _this;
}

void RobeObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void RobeObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void RobeObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void RobeObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void RobeObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void RobeObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void RobeObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void RobeObjectImplementation::_serializationHelperMethod() {
	WearableObjectImplementation::_serializationHelperMethod();

	_setClassName("RobeObject");

}

void RobeObjectImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(RobeObjectImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool RobeObjectImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (WearableObjectImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "RobeObject.skillRequired") {
		TypeInfo<String >::parseFromBinaryStream(&skillRequired, stream);
		return true;
	}


	return false;
}

void RobeObjectImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = RobeObjectImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int RobeObjectImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = WearableObjectImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;
	_name = "RobeObject.skillRequired";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&skillRequired, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 1;
}

RobeObjectImplementation::RobeObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/wearables/RobeObject.idl():  		Logger.setLoggingName("RobeObject");
	Logger::setLoggingName("RobeObject");
}

void RobeObjectImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/wearables/RobeObject.idl():  		super.initializeTransientMembers();
	WearableObjectImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/wearables/RobeObject.idl():  		Logger.setLoggingName("RobeObject");
	Logger::setLoggingName("RobeObject");
}

void RobeObjectImplementation::loadTemplateData(SharedObjectTemplate* templateData) {
	// server/zone/objects/tangible/wearables/RobeObject.idl():  		super.loadTemplateData(templateData);
	WearableObjectImplementation::loadTemplateData(templateData);
	// server/zone/objects/tangible/wearables/RobeObject.idl():  		RobeObjectTemplate 
	if (!templateData->isRobeObjectTemplate())	// server/zone/objects/tangible/wearables/RobeObject.idl():  			return;
	return;
	// server/zone/objects/tangible/wearables/RobeObject.idl():  		RobeObjectTemplate templ = (RobeObjectTemplate) templateData;
	RobeObjectTemplate* templ = (RobeObjectTemplate*) templateData;
	// server/zone/objects/tangible/wearables/RobeObject.idl():  		skillRequired = templ.getSkillRequired();
	skillRequired = templ->getSkillRequired();
}

String RobeObjectImplementation::getSkillRequired() {
	// server/zone/objects/tangible/wearables/RobeObject.idl():  		return skillRequired;
	return skillRequired;
}

bool RobeObjectImplementation::isRobeObject() {
	// server/zone/objects/tangible/wearables/RobeObject.idl():  		return true;
	return true;
}

/*
 *	RobeObjectAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


RobeObjectAdapter::RobeObjectAdapter(RobeObject* obj) : WearableObjectAdapter(obj) {
}

void RobeObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		initializeTransientMembers();
		break;
	case RPC_GETSKILLREQUIRED__:
		resp->insertAscii(getSkillRequired());
		break;
	case RPC_ISROBEOBJECT__:
		resp->insertBoolean(isRobeObject());
		break;
	default:
		throw Exception("Method does not exists");
	}
}

void RobeObjectAdapter::initializeTransientMembers() {
	(static_cast<RobeObject*>(stub))->initializeTransientMembers();
}

String RobeObjectAdapter::getSkillRequired() {
	return (static_cast<RobeObject*>(stub))->getSkillRequired();
}

bool RobeObjectAdapter::isRobeObject() {
	return (static_cast<RobeObject*>(stub))->isRobeObject();
}

/*
 *	RobeObjectHelper
 */

RobeObjectHelper* RobeObjectHelper::staticInitializer = RobeObjectHelper::instance();

RobeObjectHelper::RobeObjectHelper() {
	className = "RobeObject";

	Core::getObjectBroker()->registerClass(className, this);
}

void RobeObjectHelper::finalizeHelper() {
	RobeObjectHelper::finalize();
}

DistributedObject* RobeObjectHelper::instantiateObject() {
	return new RobeObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* RobeObjectHelper::instantiateServant() {
	return new RobeObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* RobeObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new RobeObjectAdapter(static_cast<RobeObject*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

