/*
 *	server/zone/objects/player/PlayerObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "PlayerObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/ZoneClientSession.h"

/*
 *	PlayerObjectStub
 */

PlayerObject::PlayerObject(LuaObject* templ, SceneObject* parent) : IntangibleObject(DummyConstructorParameter::instance()) {
	_impl = new PlayerObjectImplementation(templ, parent);
	_impl->_setStub(this);
}

PlayerObject::PlayerObject(DummyConstructorParameter* param) : IntangibleObject(param) {
}

PlayerObject::~PlayerObject() {
}

void PlayerObject::_initialize(unsigned int creatureObjectCRC) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addUnsignedIntParameter(creatureObjectCRC);

		method.executeWithVoidReturn();
	} else
		((PlayerObjectImplementation*) _impl)->initialize(creatureObjectCRC);
}

/*
 *	PlayerObjectImplementation
 */

PlayerObjectImplementation::~PlayerObjectImplementation() {
}

void PlayerObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (PlayerObject*) stub;
	IntangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* PlayerObjectImplementation::_getStub() {
	return _this;
}

/*
 *	PlayerObjectAdapter
 */

PlayerObjectAdapter::PlayerObjectAdapter(PlayerObjectImplementation* obj) : IntangibleObjectAdapter(obj) {
}

Packet* PlayerObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initialize(inv->getUnsignedIntParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void PlayerObjectAdapter::initialize(unsigned int creatureObjectCRC) {
	return ((PlayerObjectImplementation*) impl)->initialize(creatureObjectCRC);
}

/*
 *	PlayerObjectHelper
 */

PlayerObjectHelper* PlayerObjectHelper::staticInitializer = PlayerObjectHelper::instance();

PlayerObjectHelper::PlayerObjectHelper() {
	className = "PlayerObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void PlayerObjectHelper::finalizeHelper() {
	PlayerObjectHelper::finalize();
}

DistributedObject* PlayerObjectHelper::instantiateObject() {
	return new PlayerObject(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* PlayerObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new PlayerObjectAdapter((PlayerObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

