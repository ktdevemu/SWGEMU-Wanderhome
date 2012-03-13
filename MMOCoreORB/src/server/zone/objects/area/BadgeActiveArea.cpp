/*
 *	server/zone/objects/area/BadgeActiveArea.cpp generated by engine3 IDL compiler 0.60
 */

#include "BadgeActiveArea.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/player/PlayerObject.h"

/*
 *	BadgeActiveAreaStub
 */

enum {RPC_NOTIFYENTER__SCENEOBJECT_ = 6,RPC_SETBADGE__INT_,RPC_GETBADGE__};

BadgeActiveArea::BadgeActiveArea() : ActiveArea(DummyConstructorParameter::instance()) {
	BadgeActiveAreaImplementation* _implementation = new BadgeActiveAreaImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

BadgeActiveArea::BadgeActiveArea(DummyConstructorParameter* param) : ActiveArea(param) {
}

BadgeActiveArea::~BadgeActiveArea() {
}



void BadgeActiveArea::notifyEnter(SceneObject* player) {
	BadgeActiveAreaImplementation* _implementation = static_cast<BadgeActiveAreaImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYENTER__SCENEOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->notifyEnter(player);
}

void BadgeActiveArea::setBadge(unsigned int a) {
	BadgeActiveAreaImplementation* _implementation = static_cast<BadgeActiveAreaImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETBADGE__INT_);
		method.addUnsignedIntParameter(a);

		method.executeWithVoidReturn();
	} else
		_implementation->setBadge(a);
}

unsigned int BadgeActiveArea::getBadge() {
	BadgeActiveAreaImplementation* _implementation = static_cast<BadgeActiveAreaImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETBADGE__);

		return method.executeWithUnsignedIntReturn();
	} else
		return _implementation->getBadge();
}

DistributedObjectServant* BadgeActiveArea::_getImplementation() {

	_updated = true;
	return _impl;
}

void BadgeActiveArea::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	BadgeActiveAreaImplementation
 */

BadgeActiveAreaImplementation::BadgeActiveAreaImplementation(DummyConstructorParameter* param) : ActiveAreaImplementation(param) {
	_initializeImplementation();
}


BadgeActiveAreaImplementation::~BadgeActiveAreaImplementation() {
}


void BadgeActiveAreaImplementation::finalize() {
}

void BadgeActiveAreaImplementation::_initializeImplementation() {
	_setClassHelper(BadgeActiveAreaHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void BadgeActiveAreaImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<BadgeActiveArea*>(stub);
	ActiveAreaImplementation::_setStub(stub);
}

DistributedObjectStub* BadgeActiveAreaImplementation::_getStub() {
	return _this;
}

BadgeActiveAreaImplementation::operator const BadgeActiveArea*() {
	return _this;
}

void BadgeActiveAreaImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void BadgeActiveAreaImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void BadgeActiveAreaImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void BadgeActiveAreaImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void BadgeActiveAreaImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void BadgeActiveAreaImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void BadgeActiveAreaImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void BadgeActiveAreaImplementation::_serializationHelperMethod() {
	ActiveAreaImplementation::_serializationHelperMethod();

	_setClassName("BadgeActiveArea");

}

void BadgeActiveAreaImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(BadgeActiveAreaImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool BadgeActiveAreaImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ActiveAreaImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "BadgeActiveArea.areaBadge") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&areaBadge, stream);
		return true;
	}


	return false;
}

void BadgeActiveAreaImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = BadgeActiveAreaImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int BadgeActiveAreaImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "BadgeActiveArea.areaBadge";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&areaBadge, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 1 + ActiveAreaImplementation::writeObjectMembers(stream);
}

BadgeActiveAreaImplementation::BadgeActiveAreaImplementation() {
	_initializeImplementation();
	// server/zone/objects/area/BadgeActiveArea.idl():  		areaBadge = 0;
	areaBadge = 0;
	// server/zone/objects/area/BadgeActiveArea.idl():  		Logger.setLoggingName("BadgeActiveArea");
	Logger::setLoggingName("BadgeActiveArea");
}

void BadgeActiveAreaImplementation::notifyEnter(SceneObject* player) {
	// server/zone/objects/area/BadgeActiveArea.idl():  		CreatureObject 
	if (!player->isPlayerCreature())	// server/zone/objects/area/BadgeActiveArea.idl():  			return;
	return;
	// server/zone/objects/area/BadgeActiveArea.idl():  		CreatureObject playerCreature = (CreatureObject) player;
	CreatureObject* playerCreature = (CreatureObject*) player;
	// server/zone/objects/area/BadgeActiveArea.idl():  		PlayerObject ghost = playerCreature.getPlayerObject();
	PlayerObject* ghost = playerCreature->getPlayerObject();
	// server/zone/objects/area/BadgeActiveArea.idl():  	}
	if (!ghost->hasBadge(areaBadge)){
	// server/zone/objects/area/BadgeActiveArea.idl():  			ghost.awardBadge(areaBadge);
	ghost->awardBadge(areaBadge);
}
}

void BadgeActiveAreaImplementation::setBadge(unsigned int a) {
	// server/zone/objects/area/BadgeActiveArea.idl():  		areaBadge = a;
	areaBadge = a;
}

unsigned int BadgeActiveAreaImplementation::getBadge() {
	// server/zone/objects/area/BadgeActiveArea.idl():  		return areaBadge;
	return areaBadge;
}

/*
 *	BadgeActiveAreaAdapter
 */

BadgeActiveAreaAdapter::BadgeActiveAreaAdapter(BadgeActiveArea* obj) : ActiveAreaAdapter(obj) {
}

Packet* BadgeActiveAreaAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_NOTIFYENTER__SCENEOBJECT_:
		notifyEnter(static_cast<SceneObject*>(inv->getObjectParameter()));
		break;
	case RPC_SETBADGE__INT_:
		setBadge(inv->getUnsignedIntParameter());
		break;
	case RPC_GETBADGE__:
		resp->insertInt(getBadge());
		break;
	default:
		return NULL;
	}

	return resp;
}

void BadgeActiveAreaAdapter::notifyEnter(SceneObject* player) {
	(static_cast<BadgeActiveArea*>(stub))->notifyEnter(player);
}

void BadgeActiveAreaAdapter::setBadge(unsigned int a) {
	(static_cast<BadgeActiveArea*>(stub))->setBadge(a);
}

unsigned int BadgeActiveAreaAdapter::getBadge() {
	return (static_cast<BadgeActiveArea*>(stub))->getBadge();
}

/*
 *	BadgeActiveAreaHelper
 */

BadgeActiveAreaHelper* BadgeActiveAreaHelper::staticInitializer = BadgeActiveAreaHelper::instance();

BadgeActiveAreaHelper::BadgeActiveAreaHelper() {
	className = "BadgeActiveArea";

	Core::getObjectBroker()->registerClass(className, this);
}

void BadgeActiveAreaHelper::finalizeHelper() {
	BadgeActiveAreaHelper::finalize();
}

DistributedObject* BadgeActiveAreaHelper::instantiateObject() {
	return new BadgeActiveArea(DummyConstructorParameter::instance());
}

DistributedObjectServant* BadgeActiveAreaHelper::instantiateServant() {
	return new BadgeActiveAreaImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* BadgeActiveAreaHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new BadgeActiveAreaAdapter(static_cast<BadgeActiveArea*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

