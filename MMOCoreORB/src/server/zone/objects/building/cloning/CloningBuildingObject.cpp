/*
 *	server/zone/objects/building/cloning/CloningBuildingObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "CloningBuildingObject.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/cell/CellObject.h"


// Imported class dependencies

#include "server/zone/managers/object/ObjectMap.h"

#include "engine/util/Quaternion.h"

#include "server/zone/objects/scene/ObserverEventMap.h"

#include "system/util/SortedVector.h"

#include "server/zone/Zone.h"

#include "server/zone/ZoneProcessServerImplementation.h"

#include "engine/core/ObjectUpdateToDatabaseTask.h"

#include "server/zone/objects/tangible/sign/SignObject.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/managers/planet/PlanetManager.h"

#include "server/zone/templates/SharedObjectTemplate.h"

#include "server/zone/managers/planet/MapLocationTable.h"

#include "server/zone/objects/scene/variables/PendingTasksMap.h"

#include "server/zone/objects/area/ActiveArea.h"

#include "server/zone/managers/creature/CreatureManager.h"

#include "server/zone/objects/scene/variables/CustomizationVariables.h"

#include "system/lang/Time.h"

#include "server/zone/objects/structure/StructurePermissionList.h"

#include "server/zone/objects/tangible/terminal/structure/StructureTerminal.h"

#include "server/zone/objects/scene/variables/DeltaVector.h"

#include "server/zone/managers/planet/HeightMap.h"

#include "server/zone/objects/scene/variables/StringId.h"

#include "system/util/VectorMap.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "system/util/Vector.h"

/*
 *	CloningBuildingObjectStub
 */

CloningBuildingObject::CloningBuildingObject() : BuildingObject(DummyConstructorParameter::instance()) {
	ManagedObject::_setImplementation(new CloningBuildingObjectImplementation());
	ManagedObject::_getImplementation()->_setStub(this);
}

CloningBuildingObject::CloningBuildingObject(DummyConstructorParameter* param) : BuildingObject(param) {
}

CloningBuildingObject::~CloningBuildingObject() {
}


void CloningBuildingObject::loadTemplateData(SharedObjectTemplate* templateData) {
	if (isNull()) {
		throw ObjectNotLocalException(this);

	} else
		((CloningBuildingObjectImplementation*) _getImplementation())->loadTemplateData(templateData);
}

bool CloningBuildingObject::isCloningBuildingObject() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		return method.executeWithBooleanReturn();
	} else
		return ((CloningBuildingObjectImplementation*) _getImplementation())->isCloningBuildingObject();
}

CloneSpawnPoint* CloningBuildingObject::getRandomSpawnPoint() {
	if (isNull()) {
		throw ObjectNotLocalException(this);

	} else
		return ((CloningBuildingObjectImplementation*) _getImplementation())->getRandomSpawnPoint();
}

/*
 *	CloningBuildingObjectImplementation
 */

CloningBuildingObjectImplementation::CloningBuildingObjectImplementation(DummyConstructorParameter* param) : BuildingObjectImplementation(param) {
	_initializeImplementation();
}


CloningBuildingObjectImplementation::~CloningBuildingObjectImplementation() {
}


void CloningBuildingObjectImplementation::finalize() {
}

void CloningBuildingObjectImplementation::_initializeImplementation() {
	_setClassHelper(CloningBuildingObjectHelper::instance());

	_serializationHelperMethod();
}

void CloningBuildingObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (CloningBuildingObject*) stub;
	BuildingObjectImplementation::_setStub(stub);
}

DistributedObjectStub* CloningBuildingObjectImplementation::_getStub() {
	return _this;
}

CloningBuildingObjectImplementation::operator const CloningBuildingObject*() {
	return _this;
}

TransactionalObject* CloningBuildingObjectImplementation::clone() {
	return (TransactionalObject*) new CloningBuildingObjectImplementation(*this);
}


void CloningBuildingObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void CloningBuildingObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void CloningBuildingObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void CloningBuildingObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void CloningBuildingObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void CloningBuildingObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void CloningBuildingObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void CloningBuildingObjectImplementation::_serializationHelperMethod() {
	BuildingObjectImplementation::_serializationHelperMethod();

	_setClassName("CloningBuildingObject");

}

CloningBuildingObjectImplementation::CloningBuildingObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/building/cloning/CloningBuildingObject.idl(57):  		Logger.setLoggingName("CloningBuildingObject");
	Logger::setLoggingName("CloningBuildingObject");
}

void CloningBuildingObjectImplementation::loadTemplateData(SharedObjectTemplate* templateData) {
	// server/zone/objects/building/cloning/CloningBuildingObject.idl(63):  		super.loadTemplateData(templateData);
	BuildingObjectImplementation::loadTemplateData(templateData);
}

bool CloningBuildingObjectImplementation::isCloningBuildingObject() {
	// server/zone/objects/building/cloning/CloningBuildingObject.idl(67):  		return true;
	return true;
}

CloneSpawnPoint* CloningBuildingObjectImplementation::getRandomSpawnPoint() {
	// server/zone/objects/building/cloning/CloningBuildingObject.idl(72):  		CloningBuildingObjectTemplate cloningTemplate = null;
	CloningBuildingObjectTemplate* cloningTemplate = NULL;
	// server/zone/objects/building/cloning/CloningBuildingObject.idl(74):  
	if (BuildingObjectImplementation::templateObject->isCloningBuildingObjectTemplate()){
	// server/zone/objects/building/cloning/CloningBuildingObject.idl(75):  			cloningTemplate = (CloningBuildingObjectTemplate) super.templateObject;
	cloningTemplate = (CloningBuildingObjectTemplate*) BuildingObjectImplementation::templateObject;
	// server/zone/objects/building/cloning/CloningBuildingObject.idl(77):  			return cloningTemplate.getRandomSpawnPoint();
	return cloningTemplate->getRandomSpawnPoint();
}

	else {
	// server/zone/objects/building/cloning/CloningBuildingObject.idl(79):  			return null;
	return NULL;
}
}

/*
 *	CloningBuildingObjectAdapter
 */

CloningBuildingObjectAdapter::CloningBuildingObjectAdapter(CloningBuildingObjectImplementation* obj) : BuildingObjectAdapter(obj) {
}

Packet* CloningBuildingObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		resp->insertBoolean(isCloningBuildingObject());
		break;
	default:
		return NULL;
	}

	return resp;
}

bool CloningBuildingObjectAdapter::isCloningBuildingObject() {
	return ((CloningBuildingObjectImplementation*) impl)->isCloningBuildingObject();
}

/*
 *	CloningBuildingObjectHelper
 */

CloningBuildingObjectHelper* CloningBuildingObjectHelper::staticInitializer = CloningBuildingObjectHelper::instance();

CloningBuildingObjectHelper::CloningBuildingObjectHelper() {
	className = "CloningBuildingObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void CloningBuildingObjectHelper::finalizeHelper() {
	CloningBuildingObjectHelper::finalize();
}

DistributedObject* CloningBuildingObjectHelper::instantiateObject() {
	return new CloningBuildingObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* CloningBuildingObjectHelper::instantiateServant() {
	return new CloningBuildingObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* CloningBuildingObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CloningBuildingObjectAdapter((CloningBuildingObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

