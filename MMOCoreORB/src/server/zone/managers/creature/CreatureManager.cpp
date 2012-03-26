/*
 *	server/zone/managers/creature/CreatureManager.cpp generated by engine3 IDL compiler 0.60
 */

#include "CreatureManager.h"

#include "server/zone/Zone.h"

#include "server/zone/packets/MessageCallback.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/creature/NonPlayerCreatureObject.h"

#include "server/zone/objects/creature/AiAgent.h"

#include "server/zone/objects/creature/Creature.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/managers/creature/CreatureTemplateManager.h"

#include "server/zone/objects/area/SpawnArea.h"

/*
 *	CreatureManagerStub
 */

enum {RPC_INITIALIZE__ = 6,RPC_SPAWNLAIR__INT_INT_INT_FLOAT_FLOAT_FLOAT_,RPC_SPAWNCREATUREWITHLEVEL__INT_INT_FLOAT_FLOAT_FLOAT_LONG_,RPC_SPAWNCREATURE__INT_FLOAT_FLOAT_FLOAT_LONG_,RPC_SPAWNCREATURE__INT_INT_FLOAT_FLOAT_FLOAT_LONG_,RPC_CREATECREATURE__INT_,RPC_PLACECREATURE__CREATUREOBJECT_FLOAT_FLOAT_FLOAT_LONG_,RPC_LOADSPAWNAREAS__,RPC_LOADSINGLESPAWNS__,RPC_LOADTRAINERS__,RPC_LOADMISSIONSPAWNS__,RPC_LOADINFORMANTS__,RPC_SPAWNRANDOMCREATURESAROUND__SCENEOBJECT_,RPC_SPAWNRANDOMCREATURE__INT_FLOAT_FLOAT_FLOAT_LONG_,RPC_HARVEST__CREATURE_CREATUREOBJECT_INT_,RPC_ADDTORESERVEPOOL__AIAGENT_,RPC_GETSPAWNEDRANDOMCREATURES__,RPC_GETSPAWNAREA__STRING_};

CreatureManager::CreatureManager(Zone* planet) : ZoneManager(DummyConstructorParameter::instance()) {
	CreatureManagerImplementation* _implementation = new CreatureManagerImplementation(planet);
	_impl = _implementation;
	_impl->_setStub(this);
}

CreatureManager::CreatureManager(DummyConstructorParameter* param) : ZoneManager(param) {
}

CreatureManager::~CreatureManager() {
}



void CreatureManager::initialize() {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZE__);

		method.executeWithVoidReturn();
	} else
		_implementation->initialize();
}

TangibleObject* CreatureManager::spawnLair(unsigned int lairTemplate, int minDifficulty, int maxDifficulty, float x, float z, float y) {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SPAWNLAIR__INT_INT_INT_FLOAT_FLOAT_FLOAT_);
		method.addUnsignedIntParameter(lairTemplate);
		method.addSignedIntParameter(minDifficulty);
		method.addSignedIntParameter(maxDifficulty);
		method.addFloatParameter(x);
		method.addFloatParameter(z);
		method.addFloatParameter(y);

		return static_cast<TangibleObject*>(method.executeWithObjectReturn());
	} else
		return _implementation->spawnLair(lairTemplate, minDifficulty, maxDifficulty, x, z, y);
}

CreatureObject* CreatureManager::spawnCreatureWithLevel(unsigned int mobileTemplateCRC, int level, float x, float z, float y, unsigned long long parentID) {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SPAWNCREATUREWITHLEVEL__INT_INT_FLOAT_FLOAT_FLOAT_LONG_);
		method.addUnsignedIntParameter(mobileTemplateCRC);
		method.addSignedIntParameter(level);
		method.addFloatParameter(x);
		method.addFloatParameter(z);
		method.addFloatParameter(y);
		method.addUnsignedLongParameter(parentID);

		return static_cast<CreatureObject*>(method.executeWithObjectReturn());
	} else
		return _implementation->spawnCreatureWithLevel(mobileTemplateCRC, level, x, z, y, parentID);
}

CreatureObject* CreatureManager::spawnCreature(unsigned int templateCRC, float x, float z, float y, unsigned long long parentID) {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SPAWNCREATURE__INT_FLOAT_FLOAT_FLOAT_LONG_);
		method.addUnsignedIntParameter(templateCRC);
		method.addFloatParameter(x);
		method.addFloatParameter(z);
		method.addFloatParameter(y);
		method.addUnsignedLongParameter(parentID);

		return static_cast<CreatureObject*>(method.executeWithObjectReturn());
	} else
		return _implementation->spawnCreature(templateCRC, x, z, y, parentID);
}

CreatureObject* CreatureManager::spawnCreature(unsigned int templateCRC, unsigned int objectCRC, float x, float z, float y, unsigned long long parentID) {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SPAWNCREATURE__INT_INT_FLOAT_FLOAT_FLOAT_LONG_);
		method.addUnsignedIntParameter(templateCRC);
		method.addUnsignedIntParameter(objectCRC);
		method.addFloatParameter(x);
		method.addFloatParameter(z);
		method.addFloatParameter(y);
		method.addUnsignedLongParameter(parentID);

		return static_cast<CreatureObject*>(method.executeWithObjectReturn());
	} else
		return _implementation->spawnCreature(templateCRC, objectCRC, x, z, y, parentID);
}

CreatureObject* CreatureManager::createCreature(unsigned int templateCRC) {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CREATECREATURE__INT_);
		method.addUnsignedIntParameter(templateCRC);

		return static_cast<CreatureObject*>(method.executeWithObjectReturn());
	} else
		return _implementation->createCreature(templateCRC);
}

void CreatureManager::placeCreature(CreatureObject* creature, float x, float z, float y, unsigned long long parentID) {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_PLACECREATURE__CREATUREOBJECT_FLOAT_FLOAT_FLOAT_LONG_);
		method.addObjectParameter(creature);
		method.addFloatParameter(x);
		method.addFloatParameter(z);
		method.addFloatParameter(y);
		method.addUnsignedLongParameter(parentID);

		method.executeWithVoidReturn();
	} else
		_implementation->placeCreature(creature, x, z, y, parentID);
}

int CreatureManager::notifyDestruction(TangibleObject* destructor, AiAgent* destructedObject, int condition) {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->notifyDestruction(destructor, destructedObject, condition);
}

void CreatureManager::loadSpawnAreas() {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_LOADSPAWNAREAS__);

		method.executeWithVoidReturn();
	} else
		_implementation->loadSpawnAreas();
}

void CreatureManager::loadSingleSpawns() {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_LOADSINGLESPAWNS__);

		method.executeWithVoidReturn();
	} else
		_implementation->loadSingleSpawns();
}

void CreatureManager::loadTrainers() {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_LOADTRAINERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->loadTrainers();
}

void CreatureManager::loadMissionSpawns() {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_LOADMISSIONSPAWNS__);

		method.executeWithVoidReturn();
	} else
		_implementation->loadMissionSpawns();
}

void CreatureManager::loadInformants() {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_LOADINFORMANTS__);

		method.executeWithVoidReturn();
	} else
		_implementation->loadInformants();
}

void CreatureManager::spawnRandomCreaturesAround(SceneObject* creature) {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SPAWNRANDOMCREATURESAROUND__SCENEOBJECT_);
		method.addObjectParameter(creature);

		method.executeWithVoidReturn();
	} else
		_implementation->spawnRandomCreaturesAround(creature);
}

void CreatureManager::spawnRandomCreature(int number, float x, float z, float y, unsigned long long parentID) {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SPAWNRANDOMCREATURE__INT_FLOAT_FLOAT_FLOAT_LONG_);
		method.addSignedIntParameter(number);
		method.addFloatParameter(x);
		method.addFloatParameter(z);
		method.addFloatParameter(y);
		method.addUnsignedLongParameter(parentID);

		method.executeWithVoidReturn();
	} else
		_implementation->spawnRandomCreature(number, x, z, y, parentID);
}

void CreatureManager::harvest(Creature* creature, CreatureObject* player, int selectedID) {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HARVEST__CREATURE_CREATUREOBJECT_INT_);
		method.addObjectParameter(creature);
		method.addObjectParameter(player);
		method.addSignedIntParameter(selectedID);

		method.executeWithVoidReturn();
	} else
		_implementation->harvest(creature, player, selectedID);
}

void CreatureManager::addToReservePool(AiAgent* agent) {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDTORESERVEPOOL__AIAGENT_);
		method.addObjectParameter(agent);

		method.executeWithVoidReturn();
	} else
		_implementation->addToReservePool(agent);
}

int CreatureManager::getSpawnedRandomCreatures() {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSPAWNEDRANDOMCREATURES__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getSpawnedRandomCreatures();
}

Vector<ManagedReference<SpawnArea* > >* CreatureManager::getWorldSpawnAreas() {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getWorldSpawnAreas();
}

SpawnArea* CreatureManager::getSpawnArea(const String& areaname) {
	CreatureManagerImplementation* _implementation = static_cast<CreatureManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSPAWNAREA__STRING_);
		method.addAsciiParameter(areaname);

		return static_cast<SpawnArea*>(method.executeWithObjectReturn());
	} else
		return _implementation->getSpawnArea(areaname);
}

DistributedObjectServant* CreatureManager::_getImplementation() {

	_updated = true;
	return _impl;
}

void CreatureManager::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	CreatureManagerImplementation
 */

CreatureManagerImplementation::CreatureManagerImplementation(DummyConstructorParameter* param) : ZoneManagerImplementation(param) {
	_initializeImplementation();
}


CreatureManagerImplementation::~CreatureManagerImplementation() {
}


void CreatureManagerImplementation::finalize() {
}

void CreatureManagerImplementation::_initializeImplementation() {
	_setClassHelper(CreatureManagerHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void CreatureManagerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<CreatureManager*>(stub);
	ZoneManagerImplementation::_setStub(stub);
}

DistributedObjectStub* CreatureManagerImplementation::_getStub() {
	return _this;
}

CreatureManagerImplementation::operator const CreatureManager*() {
	return _this;
}

void CreatureManagerImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void CreatureManagerImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void CreatureManagerImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void CreatureManagerImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void CreatureManagerImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void CreatureManagerImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void CreatureManagerImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void CreatureManagerImplementation::_serializationHelperMethod() {
	ZoneManagerImplementation::_serializationHelperMethod();

	_setClassName("CreatureManager");

}

void CreatureManagerImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(CreatureManagerImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool CreatureManagerImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ZoneManagerImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "CreatureManager.zone") {
		TypeInfo<ManagedWeakReference<Zone* > >::parseFromBinaryStream(&zone, stream);
		return true;
	}

	if (_name == "CreatureManager.spawnAreaMap") {
		TypeInfo<SpawnAreaMap >::parseFromBinaryStream(&spawnAreaMap, stream);
		return true;
	}

	if (_name == "CreatureManager.reservePool") {
		TypeInfo<SortedVector<ManagedReference<AiAgent* > > >::parseFromBinaryStream(&reservePool, stream);
		return true;
	}

	if (_name == "CreatureManager.spawnedRandomCreatures") {
		TypeInfo<int >::parseFromBinaryStream(&spawnedRandomCreatures, stream);
		return true;
	}


	return false;
}

void CreatureManagerImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = CreatureManagerImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int CreatureManagerImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ZoneManagerImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "CreatureManager.zone";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedWeakReference<Zone* > >::toBinaryStream(&zone, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "CreatureManager.spawnAreaMap";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<SpawnAreaMap >::toBinaryStream(&spawnAreaMap, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "CreatureManager.reservePool";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<SortedVector<ManagedReference<AiAgent* > > >::toBinaryStream(&reservePool, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "CreatureManager.spawnedRandomCreatures";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&spawnedRandomCreatures, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return _count + 4;
}

CreatureManagerImplementation::CreatureManagerImplementation(Zone* planet) : ZoneManagerImplementation("CreatureManager") {
	_initializeImplementation();
	// server/zone/managers/creature/CreatureManager.idl():  		zone = planet;
	zone = planet;
	// server/zone/managers/creature/CreatureManager.idl():  		setCreatureTemplateManager();
	setCreatureTemplateManager();
	// server/zone/managers/creature/CreatureManager.idl():  		spawnedRandomCreatures = 0;
	spawnedRandomCreatures = 0;
}

void CreatureManagerImplementation::initialize() {
	// server/zone/managers/creature/CreatureManager.idl():  		loadSpawnAreas();
	loadSpawnAreas();
	// server/zone/managers/creature/CreatureManager.idl():  		loadTrainers();
	loadTrainers();
	// server/zone/managers/creature/CreatureManager.idl():  		loadSingleSpawns();
	loadSingleSpawns();
	// server/zone/managers/creature/CreatureManager.idl():  		loadMissionSpawns();
	loadMissionSpawns();
	// server/zone/managers/creature/CreatureManager.idl():  		loadInformants();
	loadInformants();
}

void CreatureManagerImplementation::addToReservePool(AiAgent* agent) {
	Locker _locker(_this);
	// server/zone/managers/creature/CreatureManager.idl():  		}
	if (spawnedRandomCreatures > 0){
	// server/zone/managers/creature/CreatureManager.idl():  			spawnedRandomCreatures = spawnedRandomCreatures - 1;
	spawnedRandomCreatures = spawnedRandomCreatures - 1;
}

	else {
}
	// server/zone/managers/creature/CreatureManager.idl():  		reservePool.put(agent);
	(&reservePool)->put(agent);
}

int CreatureManagerImplementation::getSpawnedRandomCreatures() {
	// server/zone/managers/creature/CreatureManager.idl():  		return spawnedRandomCreatures;
	return spawnedRandomCreatures;
}

Vector<ManagedReference<SpawnArea* > >* CreatureManagerImplementation::getWorldSpawnAreas() {
	// server/zone/managers/creature/CreatureManager.idl():  		return spawnAreaMap.getWorldSpawnAreas();
	return (&spawnAreaMap)->getWorldSpawnAreas();
}

/*
 *	CreatureManagerAdapter
 */

CreatureManagerAdapter::CreatureManagerAdapter(CreatureManager* obj) : ZoneManagerAdapter(obj) {
}

Packet* CreatureManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_INITIALIZE__:
		initialize();
		break;
	case RPC_SPAWNLAIR__INT_INT_INT_FLOAT_FLOAT_FLOAT_:
		resp->insertLong(spawnLair(inv->getUnsignedIntParameter(), inv->getSignedIntParameter(), inv->getSignedIntParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getFloatParameter())->_getObjectID());
		break;
	case RPC_SPAWNCREATUREWITHLEVEL__INT_INT_FLOAT_FLOAT_FLOAT_LONG_:
		resp->insertLong(spawnCreatureWithLevel(inv->getUnsignedIntParameter(), inv->getSignedIntParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getUnsignedLongParameter())->_getObjectID());
		break;
	case RPC_SPAWNCREATURE__INT_FLOAT_FLOAT_FLOAT_LONG_:
		resp->insertLong(spawnCreature(inv->getUnsignedIntParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getUnsignedLongParameter())->_getObjectID());
		break;
	case RPC_SPAWNCREATURE__INT_INT_FLOAT_FLOAT_FLOAT_LONG_:
		resp->insertLong(spawnCreature(inv->getUnsignedIntParameter(), inv->getUnsignedIntParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getUnsignedLongParameter())->_getObjectID());
		break;
	case RPC_CREATECREATURE__INT_:
		resp->insertLong(createCreature(inv->getUnsignedIntParameter())->_getObjectID());
		break;
	case RPC_PLACECREATURE__CREATUREOBJECT_FLOAT_FLOAT_FLOAT_LONG_:
		placeCreature(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getFloatParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getUnsignedLongParameter());
		break;
	case RPC_LOADSPAWNAREAS__:
		loadSpawnAreas();
		break;
	case RPC_LOADSINGLESPAWNS__:
		loadSingleSpawns();
		break;
	case RPC_LOADTRAINERS__:
		loadTrainers();
		break;
	case RPC_LOADMISSIONSPAWNS__:
		loadMissionSpawns();
		break;
	case RPC_LOADINFORMANTS__:
		loadInformants();
		break;
	case RPC_SPAWNRANDOMCREATURESAROUND__SCENEOBJECT_:
		spawnRandomCreaturesAround(static_cast<SceneObject*>(inv->getObjectParameter()));
		break;
	case RPC_SPAWNRANDOMCREATURE__INT_FLOAT_FLOAT_FLOAT_LONG_:
		spawnRandomCreature(inv->getSignedIntParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getUnsignedLongParameter());
		break;
	case RPC_HARVEST__CREATURE_CREATUREOBJECT_INT_:
		harvest(static_cast<Creature*>(inv->getObjectParameter()), static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getSignedIntParameter());
		break;
	case RPC_ADDTORESERVEPOOL__AIAGENT_:
		addToReservePool(static_cast<AiAgent*>(inv->getObjectParameter()));
		break;
	case RPC_GETSPAWNEDRANDOMCREATURES__:
		resp->insertSignedInt(getSpawnedRandomCreatures());
		break;
	case RPC_GETSPAWNAREA__STRING_:
		resp->insertLong(getSpawnArea(inv->getAsciiParameter(_param0_getSpawnArea__String_))->_getObjectID());
		break;
	default:
		return NULL;
	}

	return resp;
}

void CreatureManagerAdapter::initialize() {
	(static_cast<CreatureManager*>(stub))->initialize();
}

TangibleObject* CreatureManagerAdapter::spawnLair(unsigned int lairTemplate, int minDifficulty, int maxDifficulty, float x, float z, float y) {
	return (static_cast<CreatureManager*>(stub))->spawnLair(lairTemplate, minDifficulty, maxDifficulty, x, z, y);
}

CreatureObject* CreatureManagerAdapter::spawnCreatureWithLevel(unsigned int mobileTemplateCRC, int level, float x, float z, float y, unsigned long long parentID) {
	return (static_cast<CreatureManager*>(stub))->spawnCreatureWithLevel(mobileTemplateCRC, level, x, z, y, parentID);
}

CreatureObject* CreatureManagerAdapter::spawnCreature(unsigned int templateCRC, float x, float z, float y, unsigned long long parentID) {
	return (static_cast<CreatureManager*>(stub))->spawnCreature(templateCRC, x, z, y, parentID);
}

CreatureObject* CreatureManagerAdapter::spawnCreature(unsigned int templateCRC, unsigned int objectCRC, float x, float z, float y, unsigned long long parentID) {
	return (static_cast<CreatureManager*>(stub))->spawnCreature(templateCRC, objectCRC, x, z, y, parentID);
}

CreatureObject* CreatureManagerAdapter::createCreature(unsigned int templateCRC) {
	return (static_cast<CreatureManager*>(stub))->createCreature(templateCRC);
}

void CreatureManagerAdapter::placeCreature(CreatureObject* creature, float x, float z, float y, unsigned long long parentID) {
	(static_cast<CreatureManager*>(stub))->placeCreature(creature, x, z, y, parentID);
}

void CreatureManagerAdapter::loadSpawnAreas() {
	(static_cast<CreatureManager*>(stub))->loadSpawnAreas();
}

void CreatureManagerAdapter::loadSingleSpawns() {
	(static_cast<CreatureManager*>(stub))->loadSingleSpawns();
}

void CreatureManagerAdapter::loadTrainers() {
	(static_cast<CreatureManager*>(stub))->loadTrainers();
}

void CreatureManagerAdapter::loadMissionSpawns() {
	(static_cast<CreatureManager*>(stub))->loadMissionSpawns();
}

void CreatureManagerAdapter::loadInformants() {
	(static_cast<CreatureManager*>(stub))->loadInformants();
}

void CreatureManagerAdapter::spawnRandomCreaturesAround(SceneObject* creature) {
	(static_cast<CreatureManager*>(stub))->spawnRandomCreaturesAround(creature);
}

void CreatureManagerAdapter::spawnRandomCreature(int number, float x, float z, float y, unsigned long long parentID) {
	(static_cast<CreatureManager*>(stub))->spawnRandomCreature(number, x, z, y, parentID);
}

void CreatureManagerAdapter::harvest(Creature* creature, CreatureObject* player, int selectedID) {
	(static_cast<CreatureManager*>(stub))->harvest(creature, player, selectedID);
}

void CreatureManagerAdapter::addToReservePool(AiAgent* agent) {
	(static_cast<CreatureManager*>(stub))->addToReservePool(agent);
}

int CreatureManagerAdapter::getSpawnedRandomCreatures() {
	return (static_cast<CreatureManager*>(stub))->getSpawnedRandomCreatures();
}

SpawnArea* CreatureManagerAdapter::getSpawnArea(const String& areaname) {
	return (static_cast<CreatureManager*>(stub))->getSpawnArea(areaname);
}

/*
 *	CreatureManagerHelper
 */

CreatureManagerHelper* CreatureManagerHelper::staticInitializer = CreatureManagerHelper::instance();

CreatureManagerHelper::CreatureManagerHelper() {
	className = "CreatureManager";

	Core::getObjectBroker()->registerClass(className, this);
}

void CreatureManagerHelper::finalizeHelper() {
	CreatureManagerHelper::finalize();
}

DistributedObject* CreatureManagerHelper::instantiateObject() {
	return new CreatureManager(DummyConstructorParameter::instance());
}

DistributedObjectServant* CreatureManagerHelper::instantiateServant() {
	return new CreatureManagerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* CreatureManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CreatureManagerAdapter(static_cast<CreatureManager*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

