/*
 *	server/zone/objects/creature/CreatureGroup.cpp generated by engine3 IDL compiler 0.55
 */

#include "CreatureGroup.h"

#include "CreatureGroupImplementation.h"

#include "Creature.h"

#include "CreatureObject.h"

/*
 *	CreatureGroupStub
 */

CreatureGroup::CreatureGroup() {
	_impl = new CreatureGroupImplementation();
	_impl->_setStub(this);
}

CreatureGroup::CreatureGroup(DummyConstructorParameter* param) {
	_impl = NULL;
}

CreatureGroup::~CreatureGroup() {
}

void CreatureGroup::addCreature(Creature* creature) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(creature);

		method.executeWithVoidReturn();
	} else
		((CreatureGroupImplementation*) _impl)->addCreature(creature);
}

void CreatureGroup::setTarget(CreatureObject* targ) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(targ);

		method.executeWithVoidReturn();
	} else
		((CreatureGroupImplementation*) _impl)->setTarget(targ);
}

/*
 *	CreatureGroupAdapter
 */

CreatureGroupAdapter::CreatureGroupAdapter(CreatureGroupImplementation* obj) : DistributedObjectAdapter((DistributedObjectServant*) obj) {
}

Packet* CreatureGroupAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		addCreature((Creature*) inv->getObjectParameter());
		break;
	case 7:
		setTarget((CreatureObject*) inv->getObjectParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void CreatureGroupAdapter::addCreature(Creature* creature) {
	return ((CreatureGroupImplementation*) impl)->addCreature(creature);
}

void CreatureGroupAdapter::setTarget(CreatureObject* targ) {
	return ((CreatureGroupImplementation*) impl)->setTarget(targ);
}

/*
 *	CreatureGroupHelper
 */

CreatureGroupHelper* CreatureGroupHelper::staticInitializer = CreatureGroupHelper::instance();

CreatureGroupHelper::CreatureGroupHelper() {
	className = "CreatureGroup";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void CreatureGroupHelper::finalizeHelper() {
	CreatureGroupHelper::finalize();
}

DistributedObject* CreatureGroupHelper::instantiateObject() {
	return new CreatureGroup(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* CreatureGroupHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CreatureGroupAdapter((CreatureGroupImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	CreatureGroupServant
 */

CreatureGroupServant::CreatureGroupServant() {
	_classHelper = CreatureGroupHelper::instance();
}

CreatureGroupServant::~CreatureGroupServant() {
}

void CreatureGroupServant::_setStub(DistributedObjectStub* stub) {
	_this = (CreatureGroup*) stub;
}

DistributedObjectStub* CreatureGroupServant::_getStub() {
	return _this;
}

