/*
 *	server/zone/managers/objectcontroller/ObjectController.cpp generated by engine3 IDL compiler 0.60
 */

#include "ObjectController.h"

#include "server/zone/managers/objectcontroller/command/CommandList.h"

#include "server/zone/managers/objectcontroller/command/CommandConfigManager.h"

#include "server/zone/objects/creature/commands/QueueCommand.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/ZoneProcessServerImplementation.h"

#include "server/zone/objects/scene/SceneObject.h"

/*
 *	ObjectControllerStub
 */

ObjectController::ObjectController(ZoneProcessServerImplementation* server) : ManagedObject(DummyConstructorParameter::instance()) {
	_impl = new ObjectControllerImplementation(server);
	_impl->_setStub(this);

	((ObjectControllerImplementation*) _impl)->_serializationHelperMethod();
}

ObjectController::ObjectController(DummyConstructorParameter* param) : ManagedObject(param) {
}

ObjectController::~ObjectController() {
}

void ObjectController::addQueueCommand(QueueCommand* command) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((ObjectControllerImplementation*) _impl)->addQueueCommand(command);
}

QueueCommand* ObjectController::getQueueCommand(const String& name) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((ObjectControllerImplementation*) _impl)->getQueueCommand(name);
}

QueueCommand* ObjectController::getQueueCommand(unsigned int crc) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((ObjectControllerImplementation*) _impl)->getQueueCommand(crc);
}

/*
 *	ObjectControllerImplementation
 */

ObjectControllerImplementation::~ObjectControllerImplementation() {
}

void ObjectControllerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (ObjectController*) stub;
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* ObjectControllerImplementation::_getStub() {
	return _this;
}

ObjectControllerImplementation::operator const ObjectController*() {
	return _this;
}

void ObjectControllerImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

}

/*
 *	ObjectControllerAdapter
 */

ObjectControllerAdapter::ObjectControllerAdapter(ObjectControllerImplementation* obj) : ManagedObjectAdapter(obj) {
}

Packet* ObjectControllerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	default:
		return NULL;
	}

	return resp;
}

/*
 *	ObjectControllerHelper
 */

ObjectControllerHelper* ObjectControllerHelper::staticInitializer = ObjectControllerHelper::instance();

ObjectControllerHelper::ObjectControllerHelper() {
	className = "ObjectController";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void ObjectControllerHelper::finalizeHelper() {
	ObjectControllerHelper::finalize();
}

DistributedObject* ObjectControllerHelper::instantiateObject() {
	return new ObjectController(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ObjectControllerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ObjectControllerAdapter((ObjectControllerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

