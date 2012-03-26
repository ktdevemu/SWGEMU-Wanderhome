/*
 *	server/zone/objects/tangible/terminal/guild/GuildTerminal.cpp generated by engine3 IDL compiler 0.60
 */

#include "GuildTerminal.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/guild/GuildObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/Zone.h"

/*
 *	GuildTerminalStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 6,RPC_FILLOBJECTMENURESPONSE__OBJECTMENURESPONSE_CREATUREOBJECT_,RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,RPC_ISGUILDTERMINAL__,RPC_SETGUILDOBJECT__GUILDOBJECT_,RPC_GETGUILDOBJECT__};

GuildTerminal::GuildTerminal() : Terminal(DummyConstructorParameter::instance()) {
	GuildTerminalImplementation* _implementation = new GuildTerminalImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

GuildTerminal::GuildTerminal(DummyConstructorParameter* param) : Terminal(param) {
}

GuildTerminal::~GuildTerminal() {
}



void GuildTerminal::initializeTransientMembers() {
	GuildTerminalImplementation* _implementation = static_cast<GuildTerminalImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void GuildTerminal::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player) {
	GuildTerminalImplementation* _implementation = static_cast<GuildTerminalImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_FILLOBJECTMENURESPONSE__OBJECTMENURESPONSE_CREATUREOBJECT_);
		method.addObjectParameter(menuResponse);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->fillObjectMenuResponse(menuResponse, player);
}

int GuildTerminal::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	GuildTerminalImplementation* _implementation = static_cast<GuildTerminalImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->handleObjectMenuSelect(player, selectedID);
}

bool GuildTerminal::isGuildTerminal() {
	GuildTerminalImplementation* _implementation = static_cast<GuildTerminalImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISGUILDTERMINAL__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isGuildTerminal();
}

void GuildTerminal::setGuildObject(GuildObject* guild) {
	GuildTerminalImplementation* _implementation = static_cast<GuildTerminalImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETGUILDOBJECT__GUILDOBJECT_);
		method.addObjectParameter(guild);

		method.executeWithVoidReturn();
	} else
		_implementation->setGuildObject(guild);
}

GuildObject* GuildTerminal::getGuildObject() {
	GuildTerminalImplementation* _implementation = static_cast<GuildTerminalImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETGUILDOBJECT__);

		return static_cast<GuildObject*>(method.executeWithObjectReturn());
	} else
		return _implementation->getGuildObject();
}

DistributedObjectServant* GuildTerminal::_getImplementation() {

	_updated = true;
	return _impl;
}

void GuildTerminal::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	GuildTerminalImplementation
 */

GuildTerminalImplementation::GuildTerminalImplementation(DummyConstructorParameter* param) : TerminalImplementation(param) {
	_initializeImplementation();
}


GuildTerminalImplementation::~GuildTerminalImplementation() {
}


void GuildTerminalImplementation::finalize() {
}

void GuildTerminalImplementation::_initializeImplementation() {
	_setClassHelper(GuildTerminalHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void GuildTerminalImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<GuildTerminal*>(stub);
	TerminalImplementation::_setStub(stub);
}

DistributedObjectStub* GuildTerminalImplementation::_getStub() {
	return _this;
}

GuildTerminalImplementation::operator const GuildTerminal*() {
	return _this;
}

void GuildTerminalImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void GuildTerminalImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void GuildTerminalImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void GuildTerminalImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void GuildTerminalImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void GuildTerminalImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void GuildTerminalImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void GuildTerminalImplementation::_serializationHelperMethod() {
	TerminalImplementation::_serializationHelperMethod();

	_setClassName("GuildTerminal");

}

void GuildTerminalImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(GuildTerminalImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool GuildTerminalImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (TerminalImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "GuildTerminal.guildObject") {
		TypeInfo<ManagedReference<GuildObject* > >::parseFromBinaryStream(&guildObject, stream);
		return true;
	}


	return false;
}

void GuildTerminalImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = GuildTerminalImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int GuildTerminalImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = TerminalImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "GuildTerminal.guildObject";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedReference<GuildObject* > >::toBinaryStream(&guildObject, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return _count + 1;
}

GuildTerminalImplementation::GuildTerminalImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/terminal/guild/GuildTerminal.idl():  		Logger.setLoggingName("GuildTerminal");
	Logger::setLoggingName("GuildTerminal");
	// server/zone/objects/tangible/terminal/guild/GuildTerminal.idl():  		guildObject = null;
	guildObject = NULL;
}

void GuildTerminalImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/terminal/guild/GuildTerminal.idl():  		super.initializeTransientMembers();
	TerminalImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/terminal/guild/GuildTerminal.idl():  		Logger.setLoggingName("GuildTerminal");
	Logger::setLoggingName("GuildTerminal");
}

bool GuildTerminalImplementation::isGuildTerminal() {
	// server/zone/objects/tangible/terminal/guild/GuildTerminal.idl():  		return true;
	return true;
}

void GuildTerminalImplementation::setGuildObject(GuildObject* guild) {
	// server/zone/objects/tangible/terminal/guild/GuildTerminal.idl():  		guildObject = guild;
	guildObject = guild;
}

GuildObject* GuildTerminalImplementation::getGuildObject() {
	// server/zone/objects/tangible/terminal/guild/GuildTerminal.idl():  		return guildObject;
	return guildObject;
}

/*
 *	GuildTerminalAdapter
 */

GuildTerminalAdapter::GuildTerminalAdapter(GuildTerminal* obj) : TerminalAdapter(obj) {
}

Packet* GuildTerminalAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		initializeTransientMembers();
		break;
	case RPC_FILLOBJECTMENURESPONSE__OBJECTMENURESPONSE_CREATUREOBJECT_:
		fillObjectMenuResponse(static_cast<ObjectMenuResponse*>(inv->getObjectParameter()), static_cast<CreatureObject*>(inv->getObjectParameter()));
		break;
	case RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_:
		resp->insertSignedInt(handleObjectMenuSelect(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getByteParameter()));
		break;
	case RPC_ISGUILDTERMINAL__:
		resp->insertBoolean(isGuildTerminal());
		break;
	case RPC_SETGUILDOBJECT__GUILDOBJECT_:
		setGuildObject(static_cast<GuildObject*>(inv->getObjectParameter()));
		break;
	case RPC_GETGUILDOBJECT__:
		resp->insertLong(getGuildObject()->_getObjectID());
		break;
	default:
		return NULL;
	}

	return resp;
}

void GuildTerminalAdapter::initializeTransientMembers() {
	(static_cast<GuildTerminal*>(stub))->initializeTransientMembers();
}

void GuildTerminalAdapter::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player) {
	(static_cast<GuildTerminal*>(stub))->fillObjectMenuResponse(menuResponse, player);
}

int GuildTerminalAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<GuildTerminal*>(stub))->handleObjectMenuSelect(player, selectedID);
}

bool GuildTerminalAdapter::isGuildTerminal() {
	return (static_cast<GuildTerminal*>(stub))->isGuildTerminal();
}

void GuildTerminalAdapter::setGuildObject(GuildObject* guild) {
	(static_cast<GuildTerminal*>(stub))->setGuildObject(guild);
}

GuildObject* GuildTerminalAdapter::getGuildObject() {
	return (static_cast<GuildTerminal*>(stub))->getGuildObject();
}

/*
 *	GuildTerminalHelper
 */

GuildTerminalHelper* GuildTerminalHelper::staticInitializer = GuildTerminalHelper::instance();

GuildTerminalHelper::GuildTerminalHelper() {
	className = "GuildTerminal";

	Core::getObjectBroker()->registerClass(className, this);
}

void GuildTerminalHelper::finalizeHelper() {
	GuildTerminalHelper::finalize();
}

DistributedObject* GuildTerminalHelper::instantiateObject() {
	return new GuildTerminal(DummyConstructorParameter::instance());
}

DistributedObjectServant* GuildTerminalHelper::instantiateServant() {
	return new GuildTerminalImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* GuildTerminalHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new GuildTerminalAdapter(static_cast<GuildTerminal*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

