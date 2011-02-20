/*
 *	server/zone/objects/tangible/terminal/characterbuilder/CharacterBuilderTerminal.cpp generated by engine3 IDL compiler 0.60
 */

#include "CharacterBuilderTerminal.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/Zone.h"

#include "server/zone/templates/SharedObjectTemplate.h"

/*
 *	CharacterBuilderTerminalStub
 */

CharacterBuilderTerminal::CharacterBuilderTerminal() : Terminal(DummyConstructorParameter::instance()) {
	CharacterBuilderTerminalImplementation* _implementation = new CharacterBuilderTerminalImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

CharacterBuilderTerminal::CharacterBuilderTerminal(DummyConstructorParameter* param) : Terminal(param) {
}

CharacterBuilderTerminal::~CharacterBuilderTerminal() {
}


void CharacterBuilderTerminal::loadTemplateData(SharedObjectTemplate* templateData) {
	CharacterBuilderTerminalImplementation* _implementation = (CharacterBuilderTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

void CharacterBuilderTerminal::initializeTransientMembers() {
	CharacterBuilderTerminalImplementation* _implementation = (CharacterBuilderTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

int CharacterBuilderTerminal::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	CharacterBuilderTerminalImplementation* _implementation = (CharacterBuilderTerminalImplementation*) _getImplementation();
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

void CharacterBuilderTerminal::sendInitialChoices(PlayerCreature* player) {
	CharacterBuilderTerminalImplementation* _implementation = (CharacterBuilderTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendInitialChoices(player);
}

void CharacterBuilderTerminal::giveLanguages(PlayerCreature* player) {
	CharacterBuilderTerminalImplementation* _implementation = (CharacterBuilderTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->giveLanguages(player);
}

void CharacterBuilderTerminal::enhanceCharacter(PlayerCreature* player) {
	CharacterBuilderTerminalImplementation* _implementation = (CharacterBuilderTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->enhanceCharacter(player);
}

DistributedObjectServant* CharacterBuilderTerminal::_getImplementation() {

	_updated = true;
	return _impl;
}

void CharacterBuilderTerminal::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	CharacterBuilderTerminalImplementation
 */

CharacterBuilderTerminalImplementation::CharacterBuilderTerminalImplementation(DummyConstructorParameter* param) : TerminalImplementation(param) {
	_initializeImplementation();
}


CharacterBuilderTerminalImplementation::~CharacterBuilderTerminalImplementation() {
}


void CharacterBuilderTerminalImplementation::finalize() {
}

void CharacterBuilderTerminalImplementation::_initializeImplementation() {
	_setClassHelper(CharacterBuilderTerminalHelper::instance());

	_serializationHelperMethod();
	_serializationHelperMethod();
}

void CharacterBuilderTerminalImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (CharacterBuilderTerminal*) stub;
	TerminalImplementation::_setStub(stub);
}

DistributedObjectStub* CharacterBuilderTerminalImplementation::_getStub() {
	return _this;
}

CharacterBuilderTerminalImplementation::operator const CharacterBuilderTerminal*() {
	return _this;
}

void CharacterBuilderTerminalImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void CharacterBuilderTerminalImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void CharacterBuilderTerminalImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void CharacterBuilderTerminalImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void CharacterBuilderTerminalImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void CharacterBuilderTerminalImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void CharacterBuilderTerminalImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void CharacterBuilderTerminalImplementation::_serializationHelperMethod() {
	TerminalImplementation::_serializationHelperMethod();

	_setClassName("CharacterBuilderTerminal");

}

void CharacterBuilderTerminalImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(CharacterBuilderTerminalImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool CharacterBuilderTerminalImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (TerminalImplementation::readObjectMember(stream, _name))
		return true;


	return false;
}

void CharacterBuilderTerminalImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = CharacterBuilderTerminalImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int CharacterBuilderTerminalImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;

	return 0 + TerminalImplementation::writeObjectMembers(stream);
}

CharacterBuilderTerminalImplementation::CharacterBuilderTerminalImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/terminal/characterbuilder/CharacterBuilderTerminal.idl():  		Logger.setLoggingName("CharacterBuilderTerminal");
	Logger::setLoggingName("CharacterBuilderTerminal");
}

/*
 *	CharacterBuilderTerminalAdapter
 */

CharacterBuilderTerminalAdapter::CharacterBuilderTerminalAdapter(CharacterBuilderTerminalImplementation* obj) : TerminalAdapter(obj) {
}

enum {RPC_INITIALIZETRANSIENTMEMBERS__,RPC_HANDLEOBJECTMENUSELECT__PLAYERCREATURE_BYTE_,RPC_SENDINITIALCHOICES__PLAYERCREATURE_,RPC_GIVELANGUAGES__PLAYERCREATURE_,RPC_ENHANCECHARACTER__PLAYERCREATURE_,};

Packet* CharacterBuilderTerminalAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		initializeTransientMembers();
		break;
	case RPC_HANDLEOBJECTMENUSELECT__PLAYERCREATURE_BYTE_:
		resp->insertSignedInt(handleObjectMenuSelect((PlayerCreature*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	case RPC_SENDINITIALCHOICES__PLAYERCREATURE_:
		sendInitialChoices((PlayerCreature*) inv->getObjectParameter());
		break;
	case RPC_GIVELANGUAGES__PLAYERCREATURE_:
		giveLanguages((PlayerCreature*) inv->getObjectParameter());
		break;
	case RPC_ENHANCECHARACTER__PLAYERCREATURE_:
		enhanceCharacter((PlayerCreature*) inv->getObjectParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void CharacterBuilderTerminalAdapter::initializeTransientMembers() {
	((CharacterBuilderTerminalImplementation*) impl)->initializeTransientMembers();
}

int CharacterBuilderTerminalAdapter::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	return ((CharacterBuilderTerminalImplementation*) impl)->handleObjectMenuSelect(player, selectedID);
}

void CharacterBuilderTerminalAdapter::sendInitialChoices(PlayerCreature* player) {
	((CharacterBuilderTerminalImplementation*) impl)->sendInitialChoices(player);
}

void CharacterBuilderTerminalAdapter::giveLanguages(PlayerCreature* player) {
	((CharacterBuilderTerminalImplementation*) impl)->giveLanguages(player);
}

void CharacterBuilderTerminalAdapter::enhanceCharacter(PlayerCreature* player) {
	((CharacterBuilderTerminalImplementation*) impl)->enhanceCharacter(player);
}

/*
 *	CharacterBuilderTerminalHelper
 */

CharacterBuilderTerminalHelper* CharacterBuilderTerminalHelper::staticInitializer = CharacterBuilderTerminalHelper::instance();

CharacterBuilderTerminalHelper::CharacterBuilderTerminalHelper() {
	className = "CharacterBuilderTerminal";

	Core::getObjectBroker()->registerClass(className, this);
}

void CharacterBuilderTerminalHelper::finalizeHelper() {
	CharacterBuilderTerminalHelper::finalize();
}

DistributedObject* CharacterBuilderTerminalHelper::instantiateObject() {
	return new CharacterBuilderTerminal(DummyConstructorParameter::instance());
}

DistributedObjectServant* CharacterBuilderTerminalHelper::instantiateServant() {
	return new CharacterBuilderTerminalImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* CharacterBuilderTerminalHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CharacterBuilderTerminalAdapter((CharacterBuilderTerminalImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

