/*
 *	server/zone/objects/creature/conversation/LuaConversationObserver.cpp generated by engine3 IDL compiler 0.60
 */

#include "LuaConversationObserver.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	LuaConversationObserverStub
 */

enum {};

LuaConversationObserver::LuaConversationObserver(ConversationTemplate* conversationTemplate) : ConversationObserver(DummyConstructorParameter::instance()) {
	LuaConversationObserverImplementation* _implementation = new LuaConversationObserverImplementation(conversationTemplate);
	_impl = _implementation;
	_impl->_setStub(this);
}

LuaConversationObserver::LuaConversationObserver(DummyConstructorParameter* param) : ConversationObserver(param) {
}

LuaConversationObserver::~LuaConversationObserver() {
}



ConversationScreen* LuaConversationObserver::getNextConversationScreen(CreatureObject* conversingPlayer, int selectedOption, CreatureObject* conversingNPC) {
	LuaConversationObserverImplementation* _implementation = static_cast<LuaConversationObserverImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getNextConversationScreen(conversingPlayer, selectedOption, conversingNPC);
}

ConversationScreen* LuaConversationObserver::runScreenHandlers(CreatureObject* conversingPlayer, CreatureObject* conversingNPC, int selectedOption, ConversationScreen* conversationScreen) {
	LuaConversationObserverImplementation* _implementation = static_cast<LuaConversationObserverImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->runScreenHandlers(conversingPlayer, conversingNPC, selectedOption, conversationScreen);
}

DistributedObjectServant* LuaConversationObserver::_getImplementation() {

	_updated = true;
	return _impl;
}

void LuaConversationObserver::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	LuaConversationObserverImplementation
 */

LuaConversationObserverImplementation::LuaConversationObserverImplementation(DummyConstructorParameter* param) : ConversationObserverImplementation(param) {
	_initializeImplementation();
}


LuaConversationObserverImplementation::~LuaConversationObserverImplementation() {
}


void LuaConversationObserverImplementation::finalize() {
}

void LuaConversationObserverImplementation::_initializeImplementation() {
	_setClassHelper(LuaConversationObserverHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void LuaConversationObserverImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<LuaConversationObserver*>(stub);
	ConversationObserverImplementation::_setStub(stub);
}

DistributedObjectStub* LuaConversationObserverImplementation::_getStub() {
	return _this;
}

LuaConversationObserverImplementation::operator const LuaConversationObserver*() {
	return _this;
}

void LuaConversationObserverImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void LuaConversationObserverImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void LuaConversationObserverImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void LuaConversationObserverImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void LuaConversationObserverImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void LuaConversationObserverImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void LuaConversationObserverImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void LuaConversationObserverImplementation::_serializationHelperMethod() {
	ConversationObserverImplementation::_serializationHelperMethod();

	_setClassName("LuaConversationObserver");

}

void LuaConversationObserverImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(LuaConversationObserverImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool LuaConversationObserverImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ConversationObserverImplementation::readObjectMember(stream, _name))
		return true;


	return false;
}

void LuaConversationObserverImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = LuaConversationObserverImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int LuaConversationObserverImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;

	return 0 + ConversationObserverImplementation::writeObjectMembers(stream);
}

LuaConversationObserverImplementation::LuaConversationObserverImplementation(ConversationTemplate* conversationTemplate) : ConversationObserverImplementation(conversationTemplate) {
	_initializeImplementation();
}

ConversationScreen* LuaConversationObserverImplementation::getNextConversationScreen(CreatureObject* conversingPlayer, int selectedOption, CreatureObject* conversingNPC) {
	// server/zone/objects/creature/conversation/LuaConversationObserver.idl():  		return DirectorManager.instance().getNextConversationScreen(super.conversationTemplate.getLuaClassHandler(), super.conversationTemplate, conversingPlayer, selectedOption, conversingNPC);
	return DirectorManager::instance()->getNextConversationScreen(ConversationObserverImplementation::conversationTemplate->getLuaClassHandler(), ConversationObserverImplementation::conversationTemplate, conversingPlayer, selectedOption, conversingNPC);
}

ConversationScreen* LuaConversationObserverImplementation::runScreenHandlers(CreatureObject* conversingPlayer, CreatureObject* conversingNPC, int selectedOption, ConversationScreen* conversationScreen) {
	// server/zone/objects/creature/conversation/LuaConversationObserver.idl():  		return DirectorManager.instance().runScreenHandlers(super.conversationTemplate.getLuaClassHandler(), super.conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen);
	return DirectorManager::instance()->runScreenHandlers(ConversationObserverImplementation::conversationTemplate->getLuaClassHandler(), ConversationObserverImplementation::conversationTemplate, conversingPlayer, conversingNPC, selectedOption, conversationScreen);
}

/*
 *	LuaConversationObserverAdapter
 */

LuaConversationObserverAdapter::LuaConversationObserverAdapter(LuaConversationObserver* obj) : ConversationObserverAdapter(obj) {
}

Packet* LuaConversationObserverAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	default:
		return NULL;
	}

	return resp;
}

/*
 *	LuaConversationObserverHelper
 */

LuaConversationObserverHelper* LuaConversationObserverHelper::staticInitializer = LuaConversationObserverHelper::instance();

LuaConversationObserverHelper::LuaConversationObserverHelper() {
	className = "LuaConversationObserver";

	Core::getObjectBroker()->registerClass(className, this);
}

void LuaConversationObserverHelper::finalizeHelper() {
	LuaConversationObserverHelper::finalize();
}

DistributedObject* LuaConversationObserverHelper::instantiateObject() {
	return new LuaConversationObserver(DummyConstructorParameter::instance());
}

DistributedObjectServant* LuaConversationObserverHelper::instantiateServant() {
	return new LuaConversationObserverImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* LuaConversationObserverHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new LuaConversationObserverAdapter(static_cast<LuaConversationObserver*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

