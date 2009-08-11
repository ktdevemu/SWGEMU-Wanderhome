/*
 *	server/zone/objects/building/BuildingObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "BuildingObject.h"

#include "server/zone/objects/cell/CellObject.h"

/*
 *	BuildingObjectStub
 */

BuildingObject::BuildingObject(LuaObject* templateData) : TangibleObject(DummyConstructorParameter::instance()) {
	_impl = new BuildingObjectImplementation(templateData);
	_impl->_setStub(this);

	((BuildingObjectImplementation*) _impl)->_serializationHelperMethod();
}

BuildingObject::BuildingObject(DummyConstructorParameter* param) : TangibleObject(param) {
}

BuildingObject::~BuildingObject() {
}

void BuildingObject::notifyInsert(QuadTreeEntry* obj) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(obj);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->notifyInsert(obj);
}

void BuildingObject::notifyDissapear(QuadTreeEntry* obj) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(obj);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->notifyDissapear(obj);
}

void BuildingObject::notifyInsertToZone(SceneObject* object) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->notifyInsertToZone(object);
}

void BuildingObject::insert(QuadTreeEntry* obj) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(obj);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->insert(obj);
}

void BuildingObject::remove(QuadTreeEntry* obj) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(obj);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->remove(obj);
}

void BuildingObject::update(QuadTreeEntry* obj) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addObjectParameter(obj);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->update(obj);
}

void BuildingObject::inRange(QuadTreeEntry* obj, float range) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addObjectParameter(obj);
		method.addFloatParameter(range);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->inRange(obj, range);
}

void BuildingObject::sendTo(SceneObject* player, bool doClose) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addObjectParameter(player);
		method.addBooleanParameter(doClose);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->sendTo(player, doClose);
}

void BuildingObject::sendBaselinesTo(SceneObject* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->sendBaselinesTo(player);
}

void BuildingObject::sendDestroyTo(SceneObject* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->sendDestroyTo(player);
}

void BuildingObject::addCell(CellObject* cell) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addObjectParameter(cell);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->addCell(cell);
}

bool BuildingObject::isStaticBuilding() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);

		return method.executeWithBooleanReturn();
	} else
		return ((BuildingObjectImplementation*) _impl)->isStaticBuilding();
}

CellObject* BuildingObject::getCell(int idx) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addSignedIntParameter(idx);

		return (CellObject*) method.executeWithObjectReturn();
	} else
		return ((BuildingObjectImplementation*) _impl)->getCell(idx);
}

void BuildingObject::setStaticBuilding(bool value) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addBooleanParameter(value);

		method.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->setStaticBuilding(value);
}

/*
 *	BuildingObjectImplementation
 */

BuildingObjectImplementation::~BuildingObjectImplementation() {
}

void BuildingObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (BuildingObject*) stub;
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* BuildingObjectImplementation::_getStub() {
	return _this;
}

BuildingObjectImplementation::operator const BuildingObject*() {
	return _this;
}

void BuildingObjectImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	addSerializableVariable("staticBuilding", &staticBuilding);
}

bool BuildingObjectImplementation::isStaticBuilding() {
	// server/zone/objects/building/BuildingObject.idl(80):  return staticBuilding;
	return staticBuilding;
}

CellObject* BuildingObjectImplementation::getCell(int idx) {
	// server/zone/objects/building/BuildingObject.idl(84):  return cells.get(idx);
	return cells->get(idx);
}

void BuildingObjectImplementation::setStaticBuilding(bool value) {
	// server/zone/objects/building/BuildingObject.idl(88):  staticBuilding = value;
	staticBuilding = value;
}

/*
 *	BuildingObjectAdapter
 */

BuildingObjectAdapter::BuildingObjectAdapter(BuildingObjectImplementation* obj) : TangibleObjectAdapter(obj) {
}

Packet* BuildingObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		notifyInsert((QuadTreeEntry*) inv->getObjectParameter());
		break;
	case 7:
		notifyDissapear((QuadTreeEntry*) inv->getObjectParameter());
		break;
	case 8:
		notifyInsertToZone((SceneObject*) inv->getObjectParameter());
		break;
	case 9:
		insert((QuadTreeEntry*) inv->getObjectParameter());
		break;
	case 10:
		remove((QuadTreeEntry*) inv->getObjectParameter());
		break;
	case 11:
		update((QuadTreeEntry*) inv->getObjectParameter());
		break;
	case 12:
		inRange((QuadTreeEntry*) inv->getObjectParameter(), inv->getFloatParameter());
		break;
	case 13:
		sendTo((SceneObject*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 14:
		sendBaselinesTo((SceneObject*) inv->getObjectParameter());
		break;
	case 15:
		sendDestroyTo((SceneObject*) inv->getObjectParameter());
		break;
	case 16:
		addCell((CellObject*) inv->getObjectParameter());
		break;
	case 17:
		resp->insertBoolean(isStaticBuilding());
		break;
	case 18:
		resp->insertLong(getCell(inv->getSignedIntParameter())->_getObjectID());
		break;
	case 19:
		setStaticBuilding(inv->getBooleanParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void BuildingObjectAdapter::notifyInsert(QuadTreeEntry* obj) {
	return ((BuildingObjectImplementation*) impl)->notifyInsert(obj);
}

void BuildingObjectAdapter::notifyDissapear(QuadTreeEntry* obj) {
	return ((BuildingObjectImplementation*) impl)->notifyDissapear(obj);
}

void BuildingObjectAdapter::notifyInsertToZone(SceneObject* object) {
	return ((BuildingObjectImplementation*) impl)->notifyInsertToZone(object);
}

void BuildingObjectAdapter::insert(QuadTreeEntry* obj) {
	return ((BuildingObjectImplementation*) impl)->insert(obj);
}

void BuildingObjectAdapter::remove(QuadTreeEntry* obj) {
	return ((BuildingObjectImplementation*) impl)->remove(obj);
}

void BuildingObjectAdapter::update(QuadTreeEntry* obj) {
	return ((BuildingObjectImplementation*) impl)->update(obj);
}

void BuildingObjectAdapter::inRange(QuadTreeEntry* obj, float range) {
	return ((BuildingObjectImplementation*) impl)->inRange(obj, range);
}

void BuildingObjectAdapter::sendTo(SceneObject* player, bool doClose) {
	return ((BuildingObjectImplementation*) impl)->sendTo(player, doClose);
}

void BuildingObjectAdapter::sendBaselinesTo(SceneObject* player) {
	return ((BuildingObjectImplementation*) impl)->sendBaselinesTo(player);
}

void BuildingObjectAdapter::sendDestroyTo(SceneObject* player) {
	return ((BuildingObjectImplementation*) impl)->sendDestroyTo(player);
}

void BuildingObjectAdapter::addCell(CellObject* cell) {
	return ((BuildingObjectImplementation*) impl)->addCell(cell);
}

bool BuildingObjectAdapter::isStaticBuilding() {
	return ((BuildingObjectImplementation*) impl)->isStaticBuilding();
}

CellObject* BuildingObjectAdapter::getCell(int idx) {
	return ((BuildingObjectImplementation*) impl)->getCell(idx);
}

void BuildingObjectAdapter::setStaticBuilding(bool value) {
	return ((BuildingObjectImplementation*) impl)->setStaticBuilding(value);
}

/*
 *	BuildingObjectHelper
 */

BuildingObjectHelper* BuildingObjectHelper::staticInitializer = BuildingObjectHelper::instance();

BuildingObjectHelper::BuildingObjectHelper() {
	className = "BuildingObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void BuildingObjectHelper::finalizeHelper() {
	BuildingObjectHelper::finalize();
}

DistributedObject* BuildingObjectHelper::instantiateObject() {
	return new BuildingObject(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* BuildingObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new BuildingObjectAdapter((BuildingObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

