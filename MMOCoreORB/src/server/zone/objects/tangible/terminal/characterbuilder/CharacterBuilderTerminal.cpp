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
	_impl = new CharacterBuilderTerminalImplementation();
	_impl->_setStub(this);
}

CharacterBuilderTerminal::CharacterBuilderTerminal(DummyConstructorParameter* param) : Terminal(param) {
}

CharacterBuilderTerminal::~CharacterBuilderTerminal() {
}


void CharacterBuilderTerminal::loadTemplateData(SharedObjectTemplate* templateData) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((CharacterBuilderTerminalImplementation*) _impl)->loadTemplateData(templateData);
}

void CharacterBuilderTerminal::initializeTransientMembers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((CharacterBuilderTerminalImplementation*) _impl)->initializeTransientMembers();
}

int CharacterBuilderTerminal::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return ((CharacterBuilderTerminalImplementation*) _impl)->handleObjectMenuSelect(player, selectedID);
}

void CharacterBuilderTerminal::sendInitialChoices(PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((CharacterBuilderTerminalImplementation*) _impl)->sendInitialChoices(player);
}

void CharacterBuilderTerminal::giveLanguages(PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((CharacterBuilderTerminalImplementation*) _impl)->giveLanguages(player);
}

void CharacterBuilderTerminal::enhanceCharacter(PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((CharacterBuilderTerminalImplementation*) _impl)->enhanceCharacter(player);
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

CharacterBuilderTerminalImplementation::CharacterBuilderTerminalImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/terminal/characterbuilder/CharacterBuilderTerminal.idl(64):  		Logger.setLoggingName("CharacterBuilderTerminal");
	Logger::setLoggingName("CharacterBuilderTerminal");
}

/*
 *	CharacterBuilderTerminalAdapter
 */

CharacterBuilderTerminalAdapter::CharacterBuilderTerminalAdapter(CharacterBuilderTerminalImplementation* obj) : TerminalAdapter(obj) {
}

Packet* CharacterBuilderTerminalAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		resp->insertSignedInt(handleObjectMenuSelect((PlayerCreature*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	case 8:
		sendInitialChoices((PlayerCreature*) inv->getObjectParameter());
		break;
	case 9:
		giveLanguages((PlayerCreature*) inv->getObjectParameter());
		break;
	case 10:
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

	DistributedObjectBroker::instance()->registerClass(className, this);
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

