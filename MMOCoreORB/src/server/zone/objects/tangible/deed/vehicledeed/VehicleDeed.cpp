/*
 *	server/zone/objects/tangible/deed/vehicledeed/VehicleDeed.cpp generated by engine3 IDL compiler 0.55
 */

#include "VehicleDeed.h"

#include "VehicleDeedImplementation.h"

#include "../DeedObject.h"

#include "../../../creature/CreatureObject.h"

#include "../../../player/Player.h"

#include "../../../scene/SceneObject.h"

/*
 *	VehicleDeedStub
 */

VehicleDeed::VehicleDeed(CreatureObject* creature, unsigned int objcrc, const UnicodeString& customname, const String& stfname) : DeedObject(DummyConstructorParameter::instance()) {
	_impl = new VehicleDeedImplementation(creature, objcrc, customname, stfname);
	_impl->_setStub(this);
}

VehicleDeed::VehicleDeed(unsigned long long objid, unsigned int objcrc, const UnicodeString& customname, const String& stfname) : DeedObject(DummyConstructorParameter::instance()) {
	_impl = new VehicleDeedImplementation(objid, objcrc, customname, stfname);
	_impl->_setStub(this);
}

VehicleDeed::VehicleDeed(DummyConstructorParameter* param) : DeedObject(param) {
}

VehicleDeed::~VehicleDeed() {
}

int VehicleDeed::useObject(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(player);

		return method.executeWithSignedIntReturn();
	} else
		return ((VehicleDeedImplementation*) _impl)->useObject(player);
}

SceneObject* VehicleDeed::generateObject(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(player);

		return (SceneObject*) method.executeWithObjectReturn();
	} else
		return ((VehicleDeedImplementation*) _impl)->generateObject(player);
}

void VehicleDeed::parseItemAttributes() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		method.executeWithVoidReturn();
	} else
		((VehicleDeedImplementation*) _impl)->parseItemAttributes();
}

void VehicleDeed::setTargetConditionMax(unsigned int condmax) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addUnsignedIntParameter(condmax);

		method.executeWithVoidReturn();
	} else
		((VehicleDeedImplementation*) _impl)->setTargetConditionMax(condmax);
}

unsigned int VehicleDeed::getTargetConditionMax() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((VehicleDeedImplementation*) _impl)->getTargetConditionMax();
}

/*
 *	VehicleDeedAdapter
 */

VehicleDeedAdapter::VehicleDeedAdapter(VehicleDeedImplementation* obj) : DeedObjectAdapter(obj) {
}

Packet* VehicleDeedAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		resp->insertSignedInt(useObject((Player*) inv->getObjectParameter()));
		break;
	case 7:
		resp->insertLong(generateObject((Player*) inv->getObjectParameter())->_getObjectID());
		break;
	case 8:
		parseItemAttributes();
		break;
	case 9:
		setTargetConditionMax(inv->getUnsignedIntParameter());
		break;
	case 10:
		resp->insertInt(getTargetConditionMax());
		break;
	default:
		return NULL;
	}

	return resp;
}

int VehicleDeedAdapter::useObject(Player* player) {
	return ((VehicleDeedImplementation*) impl)->useObject(player);
}

SceneObject* VehicleDeedAdapter::generateObject(Player* player) {
	return ((VehicleDeedImplementation*) impl)->generateObject(player);
}

void VehicleDeedAdapter::parseItemAttributes() {
	return ((VehicleDeedImplementation*) impl)->parseItemAttributes();
}

void VehicleDeedAdapter::setTargetConditionMax(unsigned int condmax) {
	return ((VehicleDeedImplementation*) impl)->setTargetConditionMax(condmax);
}

unsigned int VehicleDeedAdapter::getTargetConditionMax() {
	return ((VehicleDeedImplementation*) impl)->getTargetConditionMax();
}

/*
 *	VehicleDeedHelper
 */

VehicleDeedHelper* VehicleDeedHelper::staticInitializer = VehicleDeedHelper::instance();

VehicleDeedHelper::VehicleDeedHelper() {
	className = "VehicleDeed";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void VehicleDeedHelper::finalizeHelper() {
	VehicleDeedHelper::finalize();
}

DistributedObject* VehicleDeedHelper::instantiateObject() {
	return new VehicleDeed(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* VehicleDeedHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new VehicleDeedAdapter((VehicleDeedImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	VehicleDeedServant
 */

VehicleDeedServant::VehicleDeedServant(CreatureObject* creature, unsigned int objcrc, const UnicodeString& customname, const String& stfname) : DeedObjectImplementation(creature, objcrc, customname, stfname) {
	_classHelper = VehicleDeedHelper::instance();
}

VehicleDeedServant::VehicleDeedServant(unsigned long long objid, unsigned int objcrc, const UnicodeString& customname, const String& stfname) : DeedObjectImplementation(objid, objcrc, customname, stfname) {
	_classHelper = VehicleDeedHelper::instance();
}

VehicleDeedServant::~VehicleDeedServant() {
}

void VehicleDeedServant::_setStub(DistributedObjectStub* stub) {
	_this = (VehicleDeed*) stub;
	DeedObjectServant::_setStub(stub);
}

DistributedObjectStub* VehicleDeedServant::_getStub() {
	return _this;
}

