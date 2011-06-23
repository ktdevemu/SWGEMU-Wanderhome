/*
 *	server/zone/objects/building/BuildingObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "BuildingObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/objects/tangible/sign/SignObject.h"

#include "server/zone/objects/tangible/terminal/structure/StructureTerminal.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/Zone.h"

#include "server/zone/templates/SharedObjectTemplate.h"

/*
 *	BuildingObjectStub
 */

enum {RPC_CREATECELLOBJECTS__ = 6,RPC_DESTROYOBJECTFROMDATABASE__BOOL_,RPC_INITIALIZETRANSIENTMEMBERS__,RPC_CREATECONTAINERCOMPONENT__,RPC_SENDCHANGENAMEPROMPTTO__PLAYERCREATURE_,RPC_SENDCONTAINEROBJECTSTO__SCENEOBJECT_,RPC_UPDATECELLPERMISSIONSTO__SCENEOBJECT_,RPC_NOTIFYSTRUCTUREPLACED__PLAYERCREATURE_,RPC_REMOVEFROMZONE__,RPC_NOTIFYLOADFROMDATABASE__,RPC_NOTIFYINSERTTOZONE__SCENEOBJECT_,RPC_SENDTO__SCENEOBJECT_BOOL_,RPC_SENDBASELINESTO__SCENEOBJECT_,RPC_SENDDESTROYTO__SCENEOBJECT_,RPC_ISSTATICBUILDING__,RPC_GETCELL__INT_,RPC_GETTOTALCELLNUMBER__,RPC_ADDOBJECT__SCENEOBJECT_INT_BOOL_,RPC_GETCURRENTNUMEROFPLAYERITEMS__,RPC_ONENTER__PLAYERCREATURE_,RPC_ONEXIT__PLAYERCREATURE_,RPC_ISBUILDINGOBJECT__,RPC_ISMEDICALBUILDINGOBJECT__,RPC_SETSIGNOBJECT__SIGNOBJECT_,RPC_GETSIGNOBJECT__,RPC_ISCITYHALLBUILDING__,RPC_SETACCESSFEE__INT_,RPC_GETACCESSFEE__,RPC_ISPUBLICSTRUCTURE__,RPC_SETPUBLICSTRUCTURE__BOOL_,RPC_GETMAXIMUMNUMBEROFPLAYERITEMS__};

BuildingObject::BuildingObject() : StructureObject(DummyConstructorParameter::instance()) {
	BuildingObjectImplementation* _implementation = new BuildingObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

BuildingObject::BuildingObject(DummyConstructorParameter* param) : StructureObject(param) {
}

BuildingObject::~BuildingObject() {
}


void BuildingObject::createCellObjects() {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CREATECELLOBJECTS__);

		method.executeWithVoidReturn();
	} else
		_implementation->createCellObjects();
}

void BuildingObject::destroyObjectFromDatabase(bool destroyContainedObjects) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DESTROYOBJECTFROMDATABASE__BOOL_);
		method.addBooleanParameter(destroyContainedObjects);

		method.executeWithVoidReturn();
	} else
		_implementation->destroyObjectFromDatabase(destroyContainedObjects);
}

void BuildingObject::loadTemplateData(SharedObjectTemplate* templateData) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

void BuildingObject::initializeTransientMembers() {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void BuildingObject::createContainerComponent() {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CREATECONTAINERCOMPONENT__);

		method.executeWithVoidReturn();
	} else
		_implementation->createContainerComponent();
}

void BuildingObject::sendChangeNamePromptTo(PlayerCreature* player) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDCHANGENAMEPROMPTTO__PLAYERCREATURE_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendChangeNamePromptTo(player);
}

void BuildingObject::sendContainerObjectsTo(SceneObject* player) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDCONTAINEROBJECTSTO__SCENEOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendContainerObjectsTo(player);
}

void BuildingObject::updateCellPermissionsTo(SceneObject* player) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_UPDATECELLPERMISSIONSTO__SCENEOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->updateCellPermissionsTo(player);
}

int BuildingObject::notifyStructurePlaced(PlayerCreature* player) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYSTRUCTUREPLACED__PLAYERCREATURE_);
		method.addObjectParameter(player);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->notifyStructurePlaced(player);
}

Vector3 BuildingObject::getEjectionPoint() {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getEjectionPoint();
}

void BuildingObject::removeFromZone() {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_REMOVEFROMZONE__);

		method.executeWithVoidReturn();
	} else
		_implementation->removeFromZone();
}

void BuildingObject::notifyLoadFromDatabase() {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYLOADFROMDATABASE__);

		method.executeWithVoidReturn();
	} else
		_implementation->notifyLoadFromDatabase();
}

void BuildingObject::notifyInsert(QuadTreeEntry* obj) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->notifyInsert(obj);
}

void BuildingObject::notifyDissapear(QuadTreeEntry* obj) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->notifyDissapear(obj);
}

void BuildingObject::notifyInsertToZone(SceneObject* object) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYINSERTTOZONE__SCENEOBJECT_);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		_implementation->notifyInsertToZone(object);
}

void BuildingObject::insert(QuadTreeEntry* obj) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->insert(obj);
}

void BuildingObject::remove(QuadTreeEntry* obj) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->remove(obj);
}

void BuildingObject::update(QuadTreeEntry* obj) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->update(obj);
}

void BuildingObject::inRange(QuadTreeEntry* obj, float range) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->inRange(obj, range);
}

void BuildingObject::sendTo(SceneObject* player, bool doClose) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDTO__SCENEOBJECT_BOOL_);
		method.addObjectParameter(player);
		method.addBooleanParameter(doClose);

		method.executeWithVoidReturn();
	} else
		_implementation->sendTo(player, doClose);
}

void BuildingObject::sendBaselinesTo(SceneObject* player) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDBASELINESTO__SCENEOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendBaselinesTo(player);
}

void BuildingObject::sendDestroyTo(SceneObject* player) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDDESTROYTO__SCENEOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendDestroyTo(player);
}

bool BuildingObject::isStaticBuilding() {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISSTATICBUILDING__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isStaticBuilding();
}

CellObject* BuildingObject::getCell(int idx) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETCELL__INT_);
		method.addSignedIntParameter(idx);

		return (CellObject*) method.executeWithObjectReturn();
	} else
		return _implementation->getCell(idx);
}

int BuildingObject::getTotalCellNumber() {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETTOTALCELLNUMBER__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getTotalCellNumber();
}

bool BuildingObject::addObject(SceneObject* object, int containmentType, bool notifyClient) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDOBJECT__SCENEOBJECT_INT_BOOL_);
		method.addObjectParameter(object);
		method.addSignedIntParameter(containmentType);
		method.addBooleanParameter(notifyClient);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->addObject(object, containmentType, notifyClient);
}

int BuildingObject::getCurrentNumerOfPlayerItems() {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETCURRENTNUMEROFPLAYERITEMS__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getCurrentNumerOfPlayerItems();
}

void BuildingObject::onEnter(PlayerCreature* player) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ONENTER__PLAYERCREATURE_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->onEnter(player);
}

void BuildingObject::onExit(PlayerCreature* player) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ONEXIT__PLAYERCREATURE_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->onExit(player);
}

bool BuildingObject::isBuildingObject() {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISBUILDINGOBJECT__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isBuildingObject();
}

bool BuildingObject::isMedicalBuildingObject() {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISMEDICALBUILDINGOBJECT__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isMedicalBuildingObject();
}

void BuildingObject::setSignObject(SignObject* sign) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETSIGNOBJECT__SIGNOBJECT_);
		method.addObjectParameter(sign);

		method.executeWithVoidReturn();
	} else
		_implementation->setSignObject(sign);
}

SignObject* BuildingObject::getSignObject() {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSIGNOBJECT__);

		return (SignObject*) method.executeWithObjectReturn();
	} else
		return _implementation->getSignObject();
}

bool BuildingObject::isCityHallBuilding() {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISCITYHALLBUILDING__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isCityHallBuilding();
}

void BuildingObject::setAccessFee(int fee) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETACCESSFEE__INT_);
		method.addSignedIntParameter(fee);

		method.executeWithVoidReturn();
	} else
		_implementation->setAccessFee(fee);
}

int BuildingObject::getAccessFee() {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETACCESSFEE__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getAccessFee();
}

bool BuildingObject::isPublicStructure() {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISPUBLICSTRUCTURE__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isPublicStructure();
}

void BuildingObject::setPublicStructure(bool privacy) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETPUBLICSTRUCTURE__BOOL_);
		method.addBooleanParameter(privacy);

		method.executeWithVoidReturn();
	} else
		_implementation->setPublicStructure(privacy);
}

unsigned int BuildingObject::getMaximumNumberOfPlayerItems() {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETMAXIMUMNUMBEROFPLAYERITEMS__);

		return method.executeWithUnsignedIntReturn();
	} else
		return _implementation->getMaximumNumberOfPlayerItems();
}

DistributedObjectServant* BuildingObject::_getImplementation() {

	_updated = true;
	return _impl;
}

void BuildingObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	BuildingObjectImplementation
 */

BuildingObjectImplementation::BuildingObjectImplementation(DummyConstructorParameter* param) : StructureObjectImplementation(param) {
	_initializeImplementation();
}


BuildingObjectImplementation::~BuildingObjectImplementation() {
}


void BuildingObjectImplementation::finalize() {
}

void BuildingObjectImplementation::_initializeImplementation() {
	_setClassHelper(BuildingObjectHelper::instance());

	_serializationHelperMethod();
	_serializationHelperMethod();
}

void BuildingObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (BuildingObject*) stub;
	StructureObjectImplementation::_setStub(stub);
}

DistributedObjectStub* BuildingObjectImplementation::_getStub() {
	return _this;
}

BuildingObjectImplementation::operator const BuildingObject*() {
	return _this;
}

void BuildingObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void BuildingObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void BuildingObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void BuildingObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void BuildingObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void BuildingObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void BuildingObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void BuildingObjectImplementation::_serializationHelperMethod() {
	StructureObjectImplementation::_serializationHelperMethod();

	_setClassName("BuildingObject");

}

void BuildingObjectImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(BuildingObjectImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool BuildingObjectImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (StructureObjectImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "cells") {
		TypeInfo<Vector<ManagedReference<CellObject* > > >::parseFromBinaryStream(&cells, stream);
		return true;
	}

	if (_name == "totalCellNumber") {
		TypeInfo<int >::parseFromBinaryStream(&totalCellNumber, stream);
		return true;
	}

	if (_name == "signObject") {
		TypeInfo<ManagedReference<SignObject* > >::parseFromBinaryStream(&signObject, stream);
		return true;
	}

	if (_name == "deedObjectID") {
		TypeInfo<unsigned long long >::parseFromBinaryStream(&deedObjectID, stream);
		return true;
	}

	if (_name == "accessFee") {
		TypeInfo<int >::parseFromBinaryStream(&accessFee, stream);
		return true;
	}

	if (_name == "publicStructure") {
		TypeInfo<bool >::parseFromBinaryStream(&publicStructure, stream);
		return true;
	}


	return false;
}

void BuildingObjectImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = BuildingObjectImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int BuildingObjectImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "cells";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<Vector<ManagedReference<CellObject* > > >::toBinaryStream(&cells, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "totalCellNumber";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&totalCellNumber, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "signObject";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedReference<SignObject* > >::toBinaryStream(&signObject, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "deedObjectID";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned long long >::toBinaryStream(&deedObjectID, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "accessFee";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&accessFee, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "publicStructure";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<bool >::toBinaryStream(&publicStructure, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 6 + StructureObjectImplementation::writeObjectMembers(stream);
}

BuildingObjectImplementation::BuildingObjectImplementation() {
	_initializeImplementation();
	Reference<QuadTree*> _ref0;
	// server/zone/objects/building/BuildingObject.idl():  		Logger.setLoggingName("BuildingObject");
	Logger::setLoggingName("BuildingObject");
	// server/zone/objects/building/BuildingObject.idl():  		quadTree = new QuadTree(-1024, -1024, 1024, 1024);
	quadTree = _ref0 = new QuadTree(-1024, -1024, 1024, 1024);
	// server/zone/objects/building/BuildingObject.idl():  		super.staticObject = false;
	StructureObjectImplementation::staticObject = false;
	// server/zone/objects/building/BuildingObject.idl():  		totalCellNumber = 0;
	totalCellNumber = 0;
	// server/zone/objects/building/BuildingObject.idl():  		accessFee = 0;
	accessFee = 0;
	// server/zone/objects/building/BuildingObject.idl():  		deedObjectID = 0;
	deedObjectID = 0;
	// server/zone/objects/building/BuildingObject.idl():  		publicStructure = true;
	publicStructure = true;
}

int BuildingObjectImplementation::notifyStructurePlaced(PlayerCreature* player) {
	// server/zone/objects/building/BuildingObject.idl():  		return 0;
	return 0;
}

bool BuildingObjectImplementation::isStaticBuilding() {
	// server/zone/objects/building/BuildingObject.idl():  		return super.staticObject;
	return StructureObjectImplementation::staticObject;
}

CellObject* BuildingObjectImplementation::getCell(int idx) {
	// server/zone/objects/building/BuildingObject.idl():  		return cells.get(idx);
	return (&cells)->get(idx);
}

int BuildingObjectImplementation::getTotalCellNumber() {
	// server/zone/objects/building/BuildingObject.idl():  		return totalCellNumber;
	return totalCellNumber;
}

void BuildingObjectImplementation::onExit(PlayerCreature* player) {
}

bool BuildingObjectImplementation::isBuildingObject() {
	// server/zone/objects/building/BuildingObject.idl():  		return true;
	return true;
}

bool BuildingObjectImplementation::isMedicalBuildingObject() {
	// server/zone/objects/building/BuildingObject.idl():  		return false;
	return false;
}

void BuildingObjectImplementation::setSignObject(SignObject* sign) {
	// server/zone/objects/building/BuildingObject.idl():  		signObject = sign;
	signObject = sign;
}

SignObject* BuildingObjectImplementation::getSignObject() {
	// server/zone/objects/building/BuildingObject.idl():  		return signObject;
	return signObject;
}

bool BuildingObjectImplementation::isCityHallBuilding() {
	// server/zone/objects/building/BuildingObject.idl():  		return false;
	return false;
}

void BuildingObjectImplementation::setAccessFee(int fee) {
	// server/zone/objects/building/BuildingObject.idl():  		accessFee = fee;
	accessFee = fee;
}

int BuildingObjectImplementation::getAccessFee() {
	// server/zone/objects/building/BuildingObject.idl():  		return accessFee;
	return accessFee;
}

bool BuildingObjectImplementation::isPublicStructure() {
	// server/zone/objects/building/BuildingObject.idl():  		return publicStructure;
	return publicStructure;
}

void BuildingObjectImplementation::setPublicStructure(bool privacy) {
	// server/zone/objects/building/BuildingObject.idl():  		publicStructure = privacy;
	publicStructure = privacy;
}

/*
 *	BuildingObjectAdapter
 */

BuildingObjectAdapter::BuildingObjectAdapter(BuildingObjectImplementation* obj) : StructureObjectAdapter(obj) {
}

Packet* BuildingObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_CREATECELLOBJECTS__:
		createCellObjects();
		break;
	case RPC_DESTROYOBJECTFROMDATABASE__BOOL_:
		destroyObjectFromDatabase(inv->getBooleanParameter());
		break;
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		initializeTransientMembers();
		break;
	case RPC_CREATECONTAINERCOMPONENT__:
		createContainerComponent();
		break;
	case RPC_SENDCHANGENAMEPROMPTTO__PLAYERCREATURE_:
		sendChangeNamePromptTo((PlayerCreature*) inv->getObjectParameter());
		break;
	case RPC_SENDCONTAINEROBJECTSTO__SCENEOBJECT_:
		sendContainerObjectsTo((SceneObject*) inv->getObjectParameter());
		break;
	case RPC_UPDATECELLPERMISSIONSTO__SCENEOBJECT_:
		updateCellPermissionsTo((SceneObject*) inv->getObjectParameter());
		break;
	case RPC_NOTIFYSTRUCTUREPLACED__PLAYERCREATURE_:
		resp->insertSignedInt(notifyStructurePlaced((PlayerCreature*) inv->getObjectParameter()));
		break;
	case RPC_REMOVEFROMZONE__:
		removeFromZone();
		break;
	case RPC_NOTIFYLOADFROMDATABASE__:
		notifyLoadFromDatabase();
		break;
	case RPC_NOTIFYINSERTTOZONE__SCENEOBJECT_:
		notifyInsertToZone((SceneObject*) inv->getObjectParameter());
		break;
	case RPC_SENDTO__SCENEOBJECT_BOOL_:
		sendTo((SceneObject*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case RPC_SENDBASELINESTO__SCENEOBJECT_:
		sendBaselinesTo((SceneObject*) inv->getObjectParameter());
		break;
	case RPC_SENDDESTROYTO__SCENEOBJECT_:
		sendDestroyTo((SceneObject*) inv->getObjectParameter());
		break;
	case RPC_ISSTATICBUILDING__:
		resp->insertBoolean(isStaticBuilding());
		break;
	case RPC_GETCELL__INT_:
		resp->insertLong(getCell(inv->getSignedIntParameter())->_getObjectID());
		break;
	case RPC_GETTOTALCELLNUMBER__:
		resp->insertSignedInt(getTotalCellNumber());
		break;
	case RPC_ADDOBJECT__SCENEOBJECT_INT_BOOL_:
		resp->insertBoolean(addObject((SceneObject*) inv->getObjectParameter(), inv->getSignedIntParameter(), inv->getBooleanParameter()));
		break;
	case RPC_GETCURRENTNUMEROFPLAYERITEMS__:
		resp->insertSignedInt(getCurrentNumerOfPlayerItems());
		break;
	case RPC_ONENTER__PLAYERCREATURE_:
		onEnter((PlayerCreature*) inv->getObjectParameter());
		break;
	case RPC_ONEXIT__PLAYERCREATURE_:
		onExit((PlayerCreature*) inv->getObjectParameter());
		break;
	case RPC_ISBUILDINGOBJECT__:
		resp->insertBoolean(isBuildingObject());
		break;
	case RPC_ISMEDICALBUILDINGOBJECT__:
		resp->insertBoolean(isMedicalBuildingObject());
		break;
	case RPC_SETSIGNOBJECT__SIGNOBJECT_:
		setSignObject((SignObject*) inv->getObjectParameter());
		break;
	case RPC_GETSIGNOBJECT__:
		resp->insertLong(getSignObject()->_getObjectID());
		break;
	case RPC_ISCITYHALLBUILDING__:
		resp->insertBoolean(isCityHallBuilding());
		break;
	case RPC_SETACCESSFEE__INT_:
		setAccessFee(inv->getSignedIntParameter());
		break;
	case RPC_GETACCESSFEE__:
		resp->insertSignedInt(getAccessFee());
		break;
	case RPC_ISPUBLICSTRUCTURE__:
		resp->insertBoolean(isPublicStructure());
		break;
	case RPC_SETPUBLICSTRUCTURE__BOOL_:
		setPublicStructure(inv->getBooleanParameter());
		break;
	case RPC_GETMAXIMUMNUMBEROFPLAYERITEMS__:
		resp->insertInt(getMaximumNumberOfPlayerItems());
		break;
	default:
		return NULL;
	}

	return resp;
}

void BuildingObjectAdapter::createCellObjects() {
	((BuildingObjectImplementation*) impl)->createCellObjects();
}

void BuildingObjectAdapter::destroyObjectFromDatabase(bool destroyContainedObjects) {
	((BuildingObjectImplementation*) impl)->destroyObjectFromDatabase(destroyContainedObjects);
}

void BuildingObjectAdapter::initializeTransientMembers() {
	((BuildingObjectImplementation*) impl)->initializeTransientMembers();
}

void BuildingObjectAdapter::createContainerComponent() {
	((BuildingObjectImplementation*) impl)->createContainerComponent();
}

void BuildingObjectAdapter::sendChangeNamePromptTo(PlayerCreature* player) {
	((BuildingObjectImplementation*) impl)->sendChangeNamePromptTo(player);
}

void BuildingObjectAdapter::sendContainerObjectsTo(SceneObject* player) {
	((BuildingObjectImplementation*) impl)->sendContainerObjectsTo(player);
}

void BuildingObjectAdapter::updateCellPermissionsTo(SceneObject* player) {
	((BuildingObjectImplementation*) impl)->updateCellPermissionsTo(player);
}

int BuildingObjectAdapter::notifyStructurePlaced(PlayerCreature* player) {
	return ((BuildingObjectImplementation*) impl)->notifyStructurePlaced(player);
}

void BuildingObjectAdapter::removeFromZone() {
	((BuildingObjectImplementation*) impl)->removeFromZone();
}

void BuildingObjectAdapter::notifyLoadFromDatabase() {
	((BuildingObjectImplementation*) impl)->notifyLoadFromDatabase();
}

void BuildingObjectAdapter::notifyInsertToZone(SceneObject* object) {
	((BuildingObjectImplementation*) impl)->notifyInsertToZone(object);
}

void BuildingObjectAdapter::sendTo(SceneObject* player, bool doClose) {
	((BuildingObjectImplementation*) impl)->sendTo(player, doClose);
}

void BuildingObjectAdapter::sendBaselinesTo(SceneObject* player) {
	((BuildingObjectImplementation*) impl)->sendBaselinesTo(player);
}

void BuildingObjectAdapter::sendDestroyTo(SceneObject* player) {
	((BuildingObjectImplementation*) impl)->sendDestroyTo(player);
}

bool BuildingObjectAdapter::isStaticBuilding() {
	return ((BuildingObjectImplementation*) impl)->isStaticBuilding();
}

CellObject* BuildingObjectAdapter::getCell(int idx) {
	return ((BuildingObjectImplementation*) impl)->getCell(idx);
}

int BuildingObjectAdapter::getTotalCellNumber() {
	return ((BuildingObjectImplementation*) impl)->getTotalCellNumber();
}

bool BuildingObjectAdapter::addObject(SceneObject* object, int containmentType, bool notifyClient) {
	return ((BuildingObjectImplementation*) impl)->addObject(object, containmentType, notifyClient);
}

int BuildingObjectAdapter::getCurrentNumerOfPlayerItems() {
	return ((BuildingObjectImplementation*) impl)->getCurrentNumerOfPlayerItems();
}

void BuildingObjectAdapter::onEnter(PlayerCreature* player) {
	((BuildingObjectImplementation*) impl)->onEnter(player);
}

void BuildingObjectAdapter::onExit(PlayerCreature* player) {
	((BuildingObjectImplementation*) impl)->onExit(player);
}

bool BuildingObjectAdapter::isBuildingObject() {
	return ((BuildingObjectImplementation*) impl)->isBuildingObject();
}

bool BuildingObjectAdapter::isMedicalBuildingObject() {
	return ((BuildingObjectImplementation*) impl)->isMedicalBuildingObject();
}

void BuildingObjectAdapter::setSignObject(SignObject* sign) {
	((BuildingObjectImplementation*) impl)->setSignObject(sign);
}

SignObject* BuildingObjectAdapter::getSignObject() {
	return ((BuildingObjectImplementation*) impl)->getSignObject();
}

bool BuildingObjectAdapter::isCityHallBuilding() {
	return ((BuildingObjectImplementation*) impl)->isCityHallBuilding();
}

void BuildingObjectAdapter::setAccessFee(int fee) {
	((BuildingObjectImplementation*) impl)->setAccessFee(fee);
}

int BuildingObjectAdapter::getAccessFee() {
	return ((BuildingObjectImplementation*) impl)->getAccessFee();
}

bool BuildingObjectAdapter::isPublicStructure() {
	return ((BuildingObjectImplementation*) impl)->isPublicStructure();
}

void BuildingObjectAdapter::setPublicStructure(bool privacy) {
	((BuildingObjectImplementation*) impl)->setPublicStructure(privacy);
}

unsigned int BuildingObjectAdapter::getMaximumNumberOfPlayerItems() {
	return ((BuildingObjectImplementation*) impl)->getMaximumNumberOfPlayerItems();
}

/*
 *	BuildingObjectHelper
 */

BuildingObjectHelper* BuildingObjectHelper::staticInitializer = BuildingObjectHelper::instance();

BuildingObjectHelper::BuildingObjectHelper() {
	className = "BuildingObject";

	Core::getObjectBroker()->registerClass(className, this);
}

void BuildingObjectHelper::finalizeHelper() {
	BuildingObjectHelper::finalize();
}

DistributedObject* BuildingObjectHelper::instantiateObject() {
	return new BuildingObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* BuildingObjectHelper::instantiateServant() {
	return new BuildingObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* BuildingObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new BuildingObjectAdapter((BuildingObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

