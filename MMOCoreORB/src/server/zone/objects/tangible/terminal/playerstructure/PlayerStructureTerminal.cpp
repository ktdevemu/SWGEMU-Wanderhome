/*
 *	server/zone/objects/tangible/terminal/playerstructure/PlayerStructureTerminal.cpp generated by engine3 IDL compiler 0.55
 */

#include "PlayerStructureTerminal.h"

#include "PlayerStructureTerminalImplementation.h"

#include "../../../player/Player.h"

#include "../../../structure/building/BuildingObject.h"

#include "../Terminal.h"

/*
 *	PlayerStructureTerminalStub
 */

PlayerStructureTerminal::PlayerStructureTerminal(BuildingObject* buio, unsigned long long objid, float x, float z, float y) : Terminal(DummyConstructorParameter::instance()) {
	_impl = new PlayerStructureTerminalImplementation(buio, objid, x, z, y);
	_impl->_setStub(this);
}

PlayerStructureTerminal::PlayerStructureTerminal(DummyConstructorParameter* param) : Terminal(param) {
}

PlayerStructureTerminal::~PlayerStructureTerminal() {
}

int PlayerStructureTerminal::useObject(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(player);

		return method.executeWithSignedIntReturn();
	} else
		return ((PlayerStructureTerminalImplementation*) _impl)->useObject(player);
}

void PlayerStructureTerminal::sendPermissionListTo(Player* player, const String& listname) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(player);
		method.addAsciiParameter(listname);

		method.executeWithVoidReturn();
	} else
		((PlayerStructureTerminalImplementation*) _impl)->sendPermissionListTo(player, listname);
}

/*
 *	PlayerStructureTerminalAdapter
 */

PlayerStructureTerminalAdapter::PlayerStructureTerminalAdapter(PlayerStructureTerminalImplementation* obj) : TerminalAdapter(obj) {
}

Packet* PlayerStructureTerminalAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		resp->insertSignedInt(useObject((Player*) inv->getObjectParameter()));
		break;
	case 7:
		sendPermissionListTo((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_sendPermissionListTo__Player_String_));
		break;
	default:
		return NULL;
	}

	return resp;
}

int PlayerStructureTerminalAdapter::useObject(Player* player) {
	return ((PlayerStructureTerminalImplementation*) impl)->useObject(player);
}

void PlayerStructureTerminalAdapter::sendPermissionListTo(Player* player, const String& listname) {
	return ((PlayerStructureTerminalImplementation*) impl)->sendPermissionListTo(player, listname);
}

/*
 *	PlayerStructureTerminalHelper
 */

PlayerStructureTerminalHelper* PlayerStructureTerminalHelper::staticInitializer = PlayerStructureTerminalHelper::instance();

PlayerStructureTerminalHelper::PlayerStructureTerminalHelper() {
	className = "PlayerStructureTerminal";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void PlayerStructureTerminalHelper::finalizeHelper() {
	PlayerStructureTerminalHelper::finalize();
}

DistributedObject* PlayerStructureTerminalHelper::instantiateObject() {
	return new PlayerStructureTerminal(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* PlayerStructureTerminalHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new PlayerStructureTerminalAdapter((PlayerStructureTerminalImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	PlayerStructureTerminalServant
 */

PlayerStructureTerminalServant::PlayerStructureTerminalServant(unsigned int objCRC, unsigned long long objid, const UnicodeString& n, const String& tempn, float x, float z, float y, unsigned char terminaltype) : TerminalImplementation(objCRC, objid, n, tempn, x, z, y, terminaltype) {
	_classHelper = PlayerStructureTerminalHelper::instance();
}

PlayerStructureTerminalServant::~PlayerStructureTerminalServant() {
}

void PlayerStructureTerminalServant::_setStub(DistributedObjectStub* stub) {
	_this = (PlayerStructureTerminal*) stub;
	TerminalServant::_setStub(stub);
}

DistributedObjectStub* PlayerStructureTerminalServant::_getStub() {
	return _this;
}

