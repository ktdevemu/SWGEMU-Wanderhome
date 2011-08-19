/*
 *	server/zone/managers/structure/StructureManager.cpp generated by engine3 IDL compiler 0.60
 */

#include "StructureManager.h"

#include "server/zone/Zone.h"

#include "server/zone/ZoneProcessServer.h"

#include "server/zone/objects/building/BuildingObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/structure/StructureObject.h"

#include "server/zone/managers/objectcontroller/ObjectController.h"

#include "server/zone/objects/tangible/deed/Deed.h"

/*
 *	StructureManagerStub
 */

enum {RPC_INITIALIZE__ = 6,RPC_PLACESTRUCTUREFROMDEED__CREATUREOBJECT_LONG_FLOAT_FLOAT_INT_,RPC_PLACESTRUCTURE__CREATUREOBJECT_STRING_FLOAT_FLOAT_INT_,RPC_DESTROYSTRUCTURE__STRUCTUREOBJECT_,RPC_REDEEDSTRUCTURE__CREATUREOBJECT_,RPC_DECLARERESIDENCE__CREATUREOBJECT_STRUCTUREOBJECT_,RPC_GETTIMESTRING__INT_,RPC_GETINRANGEPARKINGGARAGE__SCENEOBJECT_INT_,RPC_REPORTSTRUCTURESTATUS__CREATUREOBJECT_STRUCTUREOBJECT_,RPC_PROMPTNAMESTRUCTURE__CREATUREOBJECT_STRUCTUREOBJECT_,RPC_PROMPTMANAGEMAINTENANCE__CREATUREOBJECT_STRUCTUREOBJECT_BOOL_,RPC_PROMPTDELETEALLITEMS__CREATUREOBJECT_STRUCTUREOBJECT_,RPC_PROMPTFINDLOSTITEMS__CREATUREOBJECT_STRUCTUREOBJECT_,RPC_PROMPTSETOWNER__CREATUREOBJECT_STRUCTUREOBJECT_,RPC_MOVEFIRSTITEMTO__CREATUREOBJECT_STRUCTUREOBJECT_};

StructureManager::StructureManager(Zone* zne, ZoneProcessServer* proc) : ManagedService(DummyConstructorParameter::instance()) {
	StructureManagerImplementation* _implementation = new StructureManagerImplementation(zne, proc);
	_impl = _implementation;
	_impl->_setStub(this);
}

StructureManager::StructureManager(DummyConstructorParameter* param) : ManagedService(param) {
}

StructureManager::~StructureManager() {
}


void StructureManager::initialize() {
	StructureManagerImplementation* _implementation = (StructureManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZE__);

		method.executeWithVoidReturn();
	} else
		_implementation->initialize();
}

int StructureManager::placeStructureFromDeed(CreatureObject* creature, unsigned long long deedID, float x, float y, int angle) {
	StructureManagerImplementation* _implementation = (StructureManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_PLACESTRUCTUREFROMDEED__CREATUREOBJECT_LONG_FLOAT_FLOAT_INT_);
		method.addObjectParameter(creature);
		method.addUnsignedLongParameter(deedID);
		method.addFloatParameter(x);
		method.addFloatParameter(y);
		method.addSignedIntParameter(angle);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->placeStructureFromDeed(creature, deedID, x, y, angle);
}

StructureObject* StructureManager::placeStructure(CreatureObject* creature, const String& structureTemplatePath, float x, float y, int angle) {
	StructureManagerImplementation* _implementation = (StructureManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_PLACESTRUCTURE__CREATUREOBJECT_STRING_FLOAT_FLOAT_INT_);
		method.addObjectParameter(creature);
		method.addAsciiParameter(structureTemplatePath);
		method.addFloatParameter(x);
		method.addFloatParameter(y);
		method.addSignedIntParameter(angle);

		return (StructureObject*) method.executeWithObjectReturn();
	} else
		return _implementation->placeStructure(creature, structureTemplatePath, x, y, angle);
}

int StructureManager::destroyStructure(StructureObject* structureObject) {
	StructureManagerImplementation* _implementation = (StructureManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DESTROYSTRUCTURE__STRUCTUREOBJECT_);
		method.addObjectParameter(structureObject);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->destroyStructure(structureObject);
}

int StructureManager::redeedStructure(CreatureObject* creature) {
	StructureManagerImplementation* _implementation = (StructureManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_REDEEDSTRUCTURE__CREATUREOBJECT_);
		method.addObjectParameter(creature);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->redeedStructure(creature);
}

int StructureManager::declareResidence(CreatureObject* player, StructureObject* structureObject) {
	StructureManagerImplementation* _implementation = (StructureManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DECLARERESIDENCE__CREATUREOBJECT_STRUCTUREOBJECT_);
		method.addObjectParameter(player);
		method.addObjectParameter(structureObject);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->declareResidence(player, structureObject);
}

String StructureManager::getTimeString(unsigned int timestamp) {
	StructureManagerImplementation* _implementation = (StructureManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETTIMESTRING__INT_);
		method.addUnsignedIntParameter(timestamp);

		method.executeWithAsciiReturn(_return_getTimeString);
		return _return_getTimeString;
	} else
		return _implementation->getTimeString(timestamp);
}

SceneObject* StructureManager::getInRangeParkingGarage(SceneObject* obj, int range) {
	StructureManagerImplementation* _implementation = (StructureManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETINRANGEPARKINGGARAGE__SCENEOBJECT_INT_);
		method.addObjectParameter(obj);
		method.addSignedIntParameter(range);

		return (SceneObject*) method.executeWithObjectReturn();
	} else
		return _implementation->getInRangeParkingGarage(obj, range);
}

void StructureManager::reportStructureStatus(CreatureObject* creature, StructureObject* structure) {
	StructureManagerImplementation* _implementation = (StructureManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_REPORTSTRUCTURESTATUS__CREATUREOBJECT_STRUCTUREOBJECT_);
		method.addObjectParameter(creature);
		method.addObjectParameter(structure);

		method.executeWithVoidReturn();
	} else
		_implementation->reportStructureStatus(creature, structure);
}

void StructureManager::promptNameStructure(CreatureObject* creature, StructureObject* structure) {
	StructureManagerImplementation* _implementation = (StructureManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_PROMPTNAMESTRUCTURE__CREATUREOBJECT_STRUCTUREOBJECT_);
		method.addObjectParameter(creature);
		method.addObjectParameter(structure);

		method.executeWithVoidReturn();
	} else
		_implementation->promptNameStructure(creature, structure);
}

void StructureManager::promptManageMaintenance(CreatureObject* creature, StructureObject* structure, bool allowWithdrawal) {
	StructureManagerImplementation* _implementation = (StructureManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_PROMPTMANAGEMAINTENANCE__CREATUREOBJECT_STRUCTUREOBJECT_BOOL_);
		method.addObjectParameter(creature);
		method.addObjectParameter(structure);
		method.addBooleanParameter(allowWithdrawal);

		method.executeWithVoidReturn();
	} else
		_implementation->promptManageMaintenance(creature, structure, allowWithdrawal);
}

void StructureManager::promptDeleteAllItems(CreatureObject* creature, StructureObject* structure) {
	StructureManagerImplementation* _implementation = (StructureManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_PROMPTDELETEALLITEMS__CREATUREOBJECT_STRUCTUREOBJECT_);
		method.addObjectParameter(creature);
		method.addObjectParameter(structure);

		method.executeWithVoidReturn();
	} else
		_implementation->promptDeleteAllItems(creature, structure);
}

void StructureManager::promptFindLostItems(CreatureObject* creature, StructureObject* structure) {
	StructureManagerImplementation* _implementation = (StructureManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_PROMPTFINDLOSTITEMS__CREATUREOBJECT_STRUCTUREOBJECT_);
		method.addObjectParameter(creature);
		method.addObjectParameter(structure);

		method.executeWithVoidReturn();
	} else
		_implementation->promptFindLostItems(creature, structure);
}

void StructureManager::promptSetOwner(CreatureObject* creature, StructureObject* structure) {
	StructureManagerImplementation* _implementation = (StructureManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_PROMPTSETOWNER__CREATUREOBJECT_STRUCTUREOBJECT_);
		method.addObjectParameter(creature);
		method.addObjectParameter(structure);

		method.executeWithVoidReturn();
	} else
		_implementation->promptSetOwner(creature, structure);
}

void StructureManager::moveFirstItemTo(CreatureObject* creature, StructureObject* structure) {
	StructureManagerImplementation* _implementation = (StructureManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_MOVEFIRSTITEMTO__CREATUREOBJECT_STRUCTUREOBJECT_);
		method.addObjectParameter(creature);
		method.addObjectParameter(structure);

		method.executeWithVoidReturn();
	} else
		_implementation->moveFirstItemTo(creature, structure);
}

DistributedObjectServant* StructureManager::_getImplementation() {

	_updated = true;
	return _impl;
}

void StructureManager::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	StructureManagerImplementation
 */

StructureManagerImplementation::StructureManagerImplementation(DummyConstructorParameter* param) : ManagedServiceImplementation(param) {
	_initializeImplementation();
}


StructureManagerImplementation::~StructureManagerImplementation() {
}


void StructureManagerImplementation::finalize() {
}

void StructureManagerImplementation::_initializeImplementation() {
	_setClassHelper(StructureManagerHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void StructureManagerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (StructureManager*) stub;
	ManagedServiceImplementation::_setStub(stub);
}

DistributedObjectStub* StructureManagerImplementation::_getStub() {
	return _this;
}

StructureManagerImplementation::operator const StructureManager*() {
	return _this;
}

void StructureManagerImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void StructureManagerImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void StructureManagerImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void StructureManagerImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void StructureManagerImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void StructureManagerImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void StructureManagerImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void StructureManagerImplementation::_serializationHelperMethod() {
	ManagedServiceImplementation::_serializationHelperMethod();

	_setClassName("StructureManager");

}

void StructureManagerImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(StructureManagerImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool StructureManagerImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ManagedServiceImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "zone") {
		TypeInfo<ManagedWeakReference<Zone* > >::parseFromBinaryStream(&zone, stream);
		return true;
	}


	return false;
}

void StructureManagerImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = StructureManagerImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int StructureManagerImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "zone";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedWeakReference<Zone* > >::toBinaryStream(&zone, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 1 + ManagedServiceImplementation::writeObjectMembers(stream);
}

StructureManagerImplementation::StructureManagerImplementation(Zone* zne, ZoneProcessServer* proc) {
	_initializeImplementation();
	// server/zone/managers/structure/StructureManager.idl():  		zone = zne;
	zone = zne;
	// server/zone/managers/structure/StructureManager.idl():  		server = proc;
	server = proc;
	// server/zone/managers/structure/StructureManager.idl():  		templateManager = TemplateManager.instance();
	templateManager = TemplateManager::instance();
	// server/zone/managers/structure/StructureManager.idl():  		string managerName = "StructureManager " + zone.getZoneName();
	String managerName = "StructureManager " + zone->getZoneName();
	// server/zone/managers/structure/StructureManager.idl():  		Logger.setLoggingName(managerName);
	Logger::setLoggingName(managerName);
	// server/zone/managers/structure/StructureManager.idl():  		Logger.setGlobalLogging(true);
	Logger::setGlobalLogging(true);
	// server/zone/managers/structure/StructureManager.idl():  		Logger.setLogging(false);
	Logger::setLogging(false);
}

void StructureManagerImplementation::initialize() {
	// server/zone/managers/structure/StructureManager.idl():  		loadPlayerStructures();
	loadPlayerStructures();
}

/*
 *	StructureManagerAdapter
 */

StructureManagerAdapter::StructureManagerAdapter(StructureManagerImplementation* obj) : ManagedServiceAdapter(obj) {
}

Packet* StructureManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_INITIALIZE__:
		initialize();
		break;
	case RPC_PLACESTRUCTUREFROMDEED__CREATUREOBJECT_LONG_FLOAT_FLOAT_INT_:
		resp->insertSignedInt(placeStructureFromDeed((CreatureObject*) inv->getObjectParameter(), inv->getUnsignedLongParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getSignedIntParameter()));
		break;
	case RPC_PLACESTRUCTURE__CREATUREOBJECT_STRING_FLOAT_FLOAT_INT_:
		resp->insertLong(placeStructure((CreatureObject*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_placeStructure__CreatureObject_String_float_float_int_), inv->getFloatParameter(), inv->getFloatParameter(), inv->getSignedIntParameter())->_getObjectID());
		break;
	case RPC_DESTROYSTRUCTURE__STRUCTUREOBJECT_:
		resp->insertSignedInt(destroyStructure((StructureObject*) inv->getObjectParameter()));
		break;
	case RPC_REDEEDSTRUCTURE__CREATUREOBJECT_:
		resp->insertSignedInt(redeedStructure((CreatureObject*) inv->getObjectParameter()));
		break;
	case RPC_DECLARERESIDENCE__CREATUREOBJECT_STRUCTUREOBJECT_:
		resp->insertSignedInt(declareResidence((CreatureObject*) inv->getObjectParameter(), (StructureObject*) inv->getObjectParameter()));
		break;
	case RPC_GETTIMESTRING__INT_:
		resp->insertAscii(getTimeString(inv->getUnsignedIntParameter()));
		break;
	case RPC_GETINRANGEPARKINGGARAGE__SCENEOBJECT_INT_:
		resp->insertLong(getInRangeParkingGarage((SceneObject*) inv->getObjectParameter(), inv->getSignedIntParameter())->_getObjectID());
		break;
	case RPC_REPORTSTRUCTURESTATUS__CREATUREOBJECT_STRUCTUREOBJECT_:
		reportStructureStatus((CreatureObject*) inv->getObjectParameter(), (StructureObject*) inv->getObjectParameter());
		break;
	case RPC_PROMPTNAMESTRUCTURE__CREATUREOBJECT_STRUCTUREOBJECT_:
		promptNameStructure((CreatureObject*) inv->getObjectParameter(), (StructureObject*) inv->getObjectParameter());
		break;
	case RPC_PROMPTMANAGEMAINTENANCE__CREATUREOBJECT_STRUCTUREOBJECT_BOOL_:
		promptManageMaintenance((CreatureObject*) inv->getObjectParameter(), (StructureObject*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case RPC_PROMPTDELETEALLITEMS__CREATUREOBJECT_STRUCTUREOBJECT_:
		promptDeleteAllItems((CreatureObject*) inv->getObjectParameter(), (StructureObject*) inv->getObjectParameter());
		break;
	case RPC_PROMPTFINDLOSTITEMS__CREATUREOBJECT_STRUCTUREOBJECT_:
		promptFindLostItems((CreatureObject*) inv->getObjectParameter(), (StructureObject*) inv->getObjectParameter());
		break;
	case RPC_PROMPTSETOWNER__CREATUREOBJECT_STRUCTUREOBJECT_:
		promptSetOwner((CreatureObject*) inv->getObjectParameter(), (StructureObject*) inv->getObjectParameter());
		break;
	case RPC_MOVEFIRSTITEMTO__CREATUREOBJECT_STRUCTUREOBJECT_:
		moveFirstItemTo((CreatureObject*) inv->getObjectParameter(), (StructureObject*) inv->getObjectParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void StructureManagerAdapter::initialize() {
	((StructureManagerImplementation*) impl)->initialize();
}

int StructureManagerAdapter::placeStructureFromDeed(CreatureObject* creature, unsigned long long deedID, float x, float y, int angle) {
	return ((StructureManagerImplementation*) impl)->placeStructureFromDeed(creature, deedID, x, y, angle);
}

StructureObject* StructureManagerAdapter::placeStructure(CreatureObject* creature, const String& structureTemplatePath, float x, float y, int angle) {
	return ((StructureManagerImplementation*) impl)->placeStructure(creature, structureTemplatePath, x, y, angle);
}

int StructureManagerAdapter::destroyStructure(StructureObject* structureObject) {
	return ((StructureManagerImplementation*) impl)->destroyStructure(structureObject);
}

int StructureManagerAdapter::redeedStructure(CreatureObject* creature) {
	return ((StructureManagerImplementation*) impl)->redeedStructure(creature);
}

int StructureManagerAdapter::declareResidence(CreatureObject* player, StructureObject* structureObject) {
	return ((StructureManagerImplementation*) impl)->declareResidence(player, structureObject);
}

String StructureManagerAdapter::getTimeString(unsigned int timestamp) {
	return ((StructureManagerImplementation*) impl)->getTimeString(timestamp);
}

SceneObject* StructureManagerAdapter::getInRangeParkingGarage(SceneObject* obj, int range) {
	return ((StructureManagerImplementation*) impl)->getInRangeParkingGarage(obj, range);
}

void StructureManagerAdapter::reportStructureStatus(CreatureObject* creature, StructureObject* structure) {
	((StructureManagerImplementation*) impl)->reportStructureStatus(creature, structure);
}

void StructureManagerAdapter::promptNameStructure(CreatureObject* creature, StructureObject* structure) {
	((StructureManagerImplementation*) impl)->promptNameStructure(creature, structure);
}

void StructureManagerAdapter::promptManageMaintenance(CreatureObject* creature, StructureObject* structure, bool allowWithdrawal) {
	((StructureManagerImplementation*) impl)->promptManageMaintenance(creature, structure, allowWithdrawal);
}

void StructureManagerAdapter::promptDeleteAllItems(CreatureObject* creature, StructureObject* structure) {
	((StructureManagerImplementation*) impl)->promptDeleteAllItems(creature, structure);
}

void StructureManagerAdapter::promptFindLostItems(CreatureObject* creature, StructureObject* structure) {
	((StructureManagerImplementation*) impl)->promptFindLostItems(creature, structure);
}

void StructureManagerAdapter::promptSetOwner(CreatureObject* creature, StructureObject* structure) {
	((StructureManagerImplementation*) impl)->promptSetOwner(creature, structure);
}

void StructureManagerAdapter::moveFirstItemTo(CreatureObject* creature, StructureObject* structure) {
	((StructureManagerImplementation*) impl)->moveFirstItemTo(creature, structure);
}

/*
 *	StructureManagerHelper
 */

StructureManagerHelper* StructureManagerHelper::staticInitializer = StructureManagerHelper::instance();

StructureManagerHelper::StructureManagerHelper() {
	className = "StructureManager";

	Core::getObjectBroker()->registerClass(className, this);
}

void StructureManagerHelper::finalizeHelper() {
	StructureManagerHelper::finalize();
}

DistributedObject* StructureManagerHelper::instantiateObject() {
	return new StructureManager(DummyConstructorParameter::instance());
}

DistributedObjectServant* StructureManagerHelper::instantiateServant() {
	return new StructureManagerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* StructureManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new StructureManagerAdapter((StructureManagerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

