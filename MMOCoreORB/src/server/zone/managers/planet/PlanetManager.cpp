/*
 *	server/zone/managers/planet/PlanetManager.cpp generated by engine3 IDL compiler 0.60
 */

#include "PlanetManager.h"

#include "server/zone/Zone.h"

#include "server/zone/ZoneProcessServer.h"

#include "server/zone/objects/building/BuildingObject.h"

#include "server/zone/objects/scene/variables/StringId.h"

#include "server/zone/managers/structure/StructureManager.h"

#include "server/zone/managers/weather/WeatherManager.h"

#include "server/zone/managers/objectcontroller/ObjectController.h"

#include "server/zone/objects/creature/shuttle/ShuttleCreature.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/objects/scene/SceneObject.h"

/*
 *	PlanetManagerStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__,RPC_FINALIZE__,RPC_INITIALIZE__,RPC_LOADREGIONS__,RPC_LOADPLAYERREGIONS__,RPC_LOADNOBUILDAREAS__,RPC_LOADBADGEAREAS__,RPC_LOADPERFORMANCELOCATIONS__,RPC_LOADHUNTINGTARGETS__,RPC_LOADRECONLOCATIONS__,RPC_GETTRAVELFARE__STRING_,RPC_SENDPLANETTRAVELPOINTLISTRESPONSE__PLAYERCREATURE_,RPC_GETSTRUCTUREMANAGER__,RPC_GETWEATHERMANAGER__,RPC_GETREGION__FLOAT_FLOAT_,RPC_GETREGIONCOUNT__,RPC_GETNUMBEROFCITIES__,RPC_INCREASENUMBEROFCITIES__,RPC_GETREGION__INT_,RPC_ADDREGION__REGION_,RPC_DROPREGION__REGION_,RPC_HASREGION__STRING_,RPC_ADDPERFORMANCELOCATION__SCENEOBJECT_,RPC_ADDMISSIONNPC__SCENEOBJECT_,RPC_ADDHUNTINGTARGETTEMPLATE__STRING_STRING_INT_,RPC_ADDRECONLOC__SCENEOBJECT_,RPC_ADDINFORMANT__SCENEOBJECT_,};

PlanetManager::PlanetManager(Zone* planet, ZoneProcessServer* srv) : ManagedService(DummyConstructorParameter::instance()) {
	PlanetManagerImplementation* _implementation = new PlanetManagerImplementation(planet, srv);
	_impl = _implementation;
	_impl->_setStub(this);
}

PlanetManager::PlanetManager(DummyConstructorParameter* param) : ManagedService(param) {
}

PlanetManager::~PlanetManager() {
}


void PlanetManager::initializeTransientMembers() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void PlanetManager::initialize() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZE__);

		method.executeWithVoidReturn();
	} else
		_implementation->initialize();
}

void PlanetManager::loadRegions() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_LOADREGIONS__);

		method.executeWithVoidReturn();
	} else
		_implementation->loadRegions();
}

void PlanetManager::loadPlayerRegions() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_LOADPLAYERREGIONS__);

		method.executeWithVoidReturn();
	} else
		_implementation->loadPlayerRegions();
}

void PlanetManager::loadNoBuildAreas() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_LOADNOBUILDAREAS__);

		method.executeWithVoidReturn();
	} else
		_implementation->loadNoBuildAreas();
}

void PlanetManager::loadBadgeAreas() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_LOADBADGEAREAS__);

		method.executeWithVoidReturn();
	} else
		_implementation->loadBadgeAreas();
}

void PlanetManager::loadPerformanceLocations() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_LOADPERFORMANCELOCATIONS__);

		method.executeWithVoidReturn();
	} else
		_implementation->loadPerformanceLocations();
}

void PlanetManager::loadHuntingTargets() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_LOADHUNTINGTARGETS__);

		method.executeWithVoidReturn();
	} else
		_implementation->loadHuntingTargets();
}

void PlanetManager::loadReconLocations() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_LOADRECONLOCATIONS__);

		method.executeWithVoidReturn();
	} else
		_implementation->loadReconLocations();
}

bool PlanetManager::isNoBuildArea(float x, float y, StringId& fullAreaName) {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->isNoBuildArea(x, y, fullAreaName);
}

int PlanetManager::getTravelFare(const String& destinationPlanet) {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETTRAVELFARE__STRING_);
		method.addAsciiParameter(destinationPlanet);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getTravelFare(destinationPlanet);
}

void PlanetManager::sendPlanetTravelPointListResponse(PlayerCreature* player) {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDPLANETTRAVELPOINTLISTRESPONSE__PLAYERCREATURE_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendPlanetTravelPointListResponse(player);
}

Vector<ManagedReference<Region* > > PlanetManager::getRegions(StringId& regionName) {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getRegions(regionName);
}

StructureManager* PlanetManager::getStructureManager() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSTRUCTUREMANAGER__);

		return (StructureManager*) method.executeWithObjectReturn();
	} else
		return _implementation->getStructureManager();
}

WeatherManager* PlanetManager::getWeatherManager() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETWEATHERMANAGER__);

		return (WeatherManager*) method.executeWithObjectReturn();
	} else
		return _implementation->getWeatherManager();
}

TerrainManager* PlanetManager::getTerrainManager() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getTerrainManager();
}

Region* PlanetManager::getRegion(float x, float y) {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETREGION__FLOAT_FLOAT_);
		method.addFloatParameter(x);
		method.addFloatParameter(y);

		return (Region*) method.executeWithObjectReturn();
	} else
		return _implementation->getRegion(x, y);
}

int PlanetManager::getRegionCount() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETREGIONCOUNT__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getRegionCount();
}

int PlanetManager::getNumberOfCities() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETNUMBEROFCITIES__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getNumberOfCities();
}

void PlanetManager::increaseNumberOfCities() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INCREASENUMBEROFCITIES__);

		method.executeWithVoidReturn();
	} else
		_implementation->increaseNumberOfCities();
}

Region* PlanetManager::getRegion(int index) {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETREGION__INT_);
		method.addSignedIntParameter(index);

		return (Region*) method.executeWithObjectReturn();
	} else
		return _implementation->getRegion(index);
}

void PlanetManager::addRegion(Region* region) {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDREGION__REGION_);
		method.addObjectParameter(region);

		method.executeWithVoidReturn();
	} else
		_implementation->addRegion(region);
}

void PlanetManager::dropRegion(Region* region) {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DROPREGION__REGION_);
		method.addObjectParameter(region);

		method.executeWithVoidReturn();
	} else
		_implementation->dropRegion(region);
}

bool PlanetManager::hasRegion(const String& name) {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HASREGION__STRING_);
		method.addAsciiParameter(name);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->hasRegion(name);
}

void PlanetManager::addPerformanceLocation(SceneObject* obj) {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDPERFORMANCELOCATION__SCENEOBJECT_);
		method.addObjectParameter(obj);

		method.executeWithVoidReturn();
	} else
		_implementation->addPerformanceLocation(obj);
}

MissionTargetMap* PlanetManager::getPerformanceLocations() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getPerformanceLocations();
}

void PlanetManager::addMissionNpc(SceneObject* npc) {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDMISSIONNPC__SCENEOBJECT_);
		method.addObjectParameter(npc);

		method.executeWithVoidReturn();
	} else
		_implementation->addMissionNpc(npc);
}

MissionTargetMap* PlanetManager::getMissionNpcs() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getMissionNpcs();
}

void PlanetManager::addHuntingTargetTemplate(const String& temp1, const String& temp2, int level) {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDHUNTINGTARGETTEMPLATE__STRING_STRING_INT_);
		method.addAsciiParameter(temp1);
		method.addAsciiParameter(temp2);
		method.addSignedIntParameter(level);

		method.executeWithVoidReturn();
	} else
		_implementation->addHuntingTargetTemplate(temp1, temp2, level);
}

HuntingTargetEntry* PlanetManager::getHuntingTargetTemplate(int level) {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getHuntingTargetTemplate(level);
}

void PlanetManager::addReconLoc(SceneObject* obj) {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDRECONLOC__SCENEOBJECT_);
		method.addObjectParameter(obj);

		method.executeWithVoidReturn();
	} else
		_implementation->addReconLoc(obj);
}

MissionTargetMap* PlanetManager::getReconLocs() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getReconLocs();
}

void PlanetManager::addInformant(SceneObject* obj) {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDINFORMANT__SCENEOBJECT_);
		method.addObjectParameter(obj);

		method.executeWithVoidReturn();
	} else
		_implementation->addInformant(obj);
}

MissionTargetMap* PlanetManager::getInformants() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getInformants();
}

DistributedObjectServant* PlanetManager::_getImplementation() {

	_updated = true;
	return _impl;
}

void PlanetManager::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	PlanetManagerImplementation
 */

PlanetManagerImplementation::PlanetManagerImplementation(DummyConstructorParameter* param) : ManagedServiceImplementation(param) {
	_initializeImplementation();
}


PlanetManagerImplementation::~PlanetManagerImplementation() {
	PlanetManagerImplementation::finalize();
}


void PlanetManagerImplementation::_initializeImplementation() {
	_setClassHelper(PlanetManagerHelper::instance());

	_serializationHelperMethod();
	_serializationHelperMethod();
}

void PlanetManagerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (PlanetManager*) stub;
	ManagedServiceImplementation::_setStub(stub);
}

DistributedObjectStub* PlanetManagerImplementation::_getStub() {
	return _this;
}

PlanetManagerImplementation::operator const PlanetManager*() {
	return _this;
}

void PlanetManagerImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void PlanetManagerImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void PlanetManagerImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void PlanetManagerImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void PlanetManagerImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void PlanetManagerImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void PlanetManagerImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void PlanetManagerImplementation::_serializationHelperMethod() {
	ManagedServiceImplementation::_serializationHelperMethod();

	_setClassName("PlanetManager");

}

void PlanetManagerImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(PlanetManagerImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool PlanetManagerImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ManagedServiceImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "zone") {
		TypeInfo<ManagedWeakReference<Zone* > >::parseFromBinaryStream(&zone, stream);
		return true;
	}

	if (_name == "regionMap") {
		TypeInfo<RegionMap >::parseFromBinaryStream(&regionMap, stream);
		return true;
	}

	if (_name == "travelFares") {
		TypeInfo<VectorMap<String, int> >::parseFromBinaryStream(&travelFares, stream);
		return true;
	}

	if (_name == "structureManager") {
		TypeInfo<ManagedReference<StructureManager* > >::parseFromBinaryStream(&structureManager, stream);
		return true;
	}

	if (_name == "weatherManager") {
		TypeInfo<ManagedReference<WeatherManager* > >::parseFromBinaryStream(&weatherManager, stream);
		return true;
	}

	if (_name == "numberOfCities") {
		TypeInfo<int >::parseFromBinaryStream(&numberOfCities, stream);
		return true;
	}


	return false;
}

void PlanetManagerImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = PlanetManagerImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int PlanetManagerImplementation::writeObjectMembers(ObjectOutputStream* stream) {
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

	_name = "regionMap";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<RegionMap >::toBinaryStream(&regionMap, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "travelFares";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<VectorMap<String, int> >::toBinaryStream(&travelFares, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "structureManager";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedReference<StructureManager* > >::toBinaryStream(&structureManager, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "weatherManager";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedReference<WeatherManager* > >::toBinaryStream(&weatherManager, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "numberOfCities";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&numberOfCities, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 6 + ManagedServiceImplementation::writeObjectMembers(stream);
}

PlanetManagerImplementation::PlanetManagerImplementation(Zone* planet, ZoneProcessServer* srv) {
	_initializeImplementation();
	// server/zone/managers/planet/PlanetManager.idl():  		zone = planet;
	zone = planet;
	// server/zone/managers/planet/PlanetManager.idl():  		server = srv;
	server = srv;
	// server/zone/managers/planet/PlanetManager.idl():  		Logger.setLoggingName("PlanetManager " + zone.getPlanetName());
	Logger::setLoggingName("PlanetManager " + zone->getPlanetName());
	// server/zone/managers/planet/PlanetManager.idl():  		Logger.setLogging(false);
	Logger::setLogging(false);
	// server/zone/managers/planet/PlanetManager.idl():  		Logger.setGlobalLogging(true);
	Logger::setGlobalLogging(true);
	// server/zone/managers/planet/PlanetManager.idl():  		terrainManager = null;
	terrainManager = NULL;
	// server/zone/managers/planet/PlanetManager.idl():  		numberOfCities = 0;
	numberOfCities = 0;
	// server/zone/managers/planet/PlanetManager.idl():  		structureManager = null;
	structureManager = NULL;
	// server/zone/managers/planet/PlanetManager.idl():  		weatherManager = null;
	weatherManager = NULL;
	// server/zone/managers/planet/PlanetManager.idl():  		travelFares.setNullValue(0);
	(&travelFares)->setNullValue(0);
	// server/zone/managers/planet/PlanetManager.idl():  		travelFares.setNoDuplicateInsertPlan();
	(&travelFares)->setNoDuplicateInsertPlan();
}

int PlanetManagerImplementation::getTravelFare(const String& destinationPlanet) {
	// server/zone/managers/planet/PlanetManager.idl():  		return travelFares.get(destinationPlanet);
	return (&travelFares)->get(destinationPlanet);
}

Vector<ManagedReference<Region* > > PlanetManagerImplementation::getRegions(StringId& regionName) {
	// server/zone/managers/planet/PlanetManager.idl():  		return regionMap.getRegions(regionName);
	return (&regionMap)->getRegions((&regionName));
}

StructureManager* PlanetManagerImplementation::getStructureManager() {
	// server/zone/managers/planet/PlanetManager.idl():  		return structureManager;
	return structureManager;
}

WeatherManager* PlanetManagerImplementation::getWeatherManager() {
	// server/zone/managers/planet/PlanetManager.idl():  		return weatherManager;
	return weatherManager;
}

TerrainManager* PlanetManagerImplementation::getTerrainManager() {
	// server/zone/managers/planet/PlanetManager.idl():  		return terrainManager;
	return terrainManager;
}

Region* PlanetManagerImplementation::getRegion(float x, float y) {
	// server/zone/managers/planet/PlanetManager.idl():  		return regionMap.getRegion(x, y);
	return (&regionMap)->getRegion(x, y);
}

int PlanetManagerImplementation::getRegionCount() {
	// server/zone/managers/planet/PlanetManager.idl():  		return regionMap.size();
	return (&regionMap)->size();
}

int PlanetManagerImplementation::getNumberOfCities() {
	// server/zone/managers/planet/PlanetManager.idl():  		return numberOfCities;
	return numberOfCities;
}

void PlanetManagerImplementation::increaseNumberOfCities() {
	// server/zone/managers/planet/PlanetManager.idl():  		numberOfCities = numberOfCities + 1;
	numberOfCities = numberOfCities + 1;
}

Region* PlanetManagerImplementation::getRegion(int index) {
	// server/zone/managers/planet/PlanetManager.idl():  		return regionMap.getRegion(index);
	return (&regionMap)->getRegion(index);
}

void PlanetManagerImplementation::addRegion(Region* region) {
	// server/zone/managers/planet/PlanetManager.idl():  		regionMap.addRegion(region);
	(&regionMap)->addRegion(region);
}

void PlanetManagerImplementation::dropRegion(Region* region) {
	// server/zone/managers/planet/PlanetManager.idl():  		regionMap.dropRegion(region);
	(&regionMap)->dropRegion(region);
}

bool PlanetManagerImplementation::hasRegion(const String& name) {
	// server/zone/managers/planet/PlanetManager.idl():  		return regionMap.containsRegion(name);
	return (&regionMap)->containsRegion(name);
}

void PlanetManagerImplementation::addPerformanceLocation(SceneObject* obj) {
	// server/zone/managers/planet/PlanetManager.idl():  		performanceLocations.add(obj);
	(&performanceLocations)->add(obj);
}

MissionTargetMap* PlanetManagerImplementation::getPerformanceLocations() {
	// server/zone/managers/planet/PlanetManager.idl():  		return performanceLocations;
	return (&performanceLocations);
}

void PlanetManagerImplementation::addMissionNpc(SceneObject* npc) {
	// server/zone/managers/planet/PlanetManager.idl():  		missionNpcs.add(npc);
	(&missionNpcs)->add(npc);
}

MissionTargetMap* PlanetManagerImplementation::getMissionNpcs() {
	// server/zone/managers/planet/PlanetManager.idl():  		return missionNpcs;
	return (&missionNpcs);
}

void PlanetManagerImplementation::addHuntingTargetTemplate(const String& temp1, const String& temp2, int level) {
	// server/zone/managers/planet/PlanetManager.idl():  		huntingTargets.addTarget(temp1, temp2, level);
	(&huntingTargets)->addTarget(temp1, temp2, level);
}

HuntingTargetEntry* PlanetManagerImplementation::getHuntingTargetTemplate(int level) {
	// server/zone/managers/planet/PlanetManager.idl():  		return huntingTargets.getRandomTarget(level);
	return (&huntingTargets)->getRandomTarget(level);
}

void PlanetManagerImplementation::addReconLoc(SceneObject* obj) {
	// server/zone/managers/planet/PlanetManager.idl():  		reconLocs.add(obj);
	(&reconLocs)->add(obj);
}

MissionTargetMap* PlanetManagerImplementation::getReconLocs() {
	// server/zone/managers/planet/PlanetManager.idl():  		return reconLocs;
	return (&reconLocs);
}

void PlanetManagerImplementation::addInformant(SceneObject* obj) {
	// server/zone/managers/planet/PlanetManager.idl():  		informants.add(obj);
	(&informants)->add(obj);
}

MissionTargetMap* PlanetManagerImplementation::getInformants() {
	// server/zone/managers/planet/PlanetManager.idl():  		return informants;
	return (&informants);
}

/*
 *	PlanetManagerAdapter
 */

PlanetManagerAdapter::PlanetManagerAdapter(PlanetManagerImplementation* obj) : ManagedServiceAdapter(obj) {
}

Packet* PlanetManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		initializeTransientMembers();
		break;
	case RPC_FINALIZE__:
		finalize();
		break;
	case RPC_INITIALIZE__:
		initialize();
		break;
	case RPC_LOADREGIONS__:
		loadRegions();
		break;
	case RPC_LOADPLAYERREGIONS__:
		loadPlayerRegions();
		break;
	case RPC_LOADNOBUILDAREAS__:
		loadNoBuildAreas();
		break;
	case RPC_LOADBADGEAREAS__:
		loadBadgeAreas();
		break;
	case RPC_LOADPERFORMANCELOCATIONS__:
		loadPerformanceLocations();
		break;
	case RPC_LOADHUNTINGTARGETS__:
		loadHuntingTargets();
		break;
	case RPC_LOADRECONLOCATIONS__:
		loadReconLocations();
		break;
	case RPC_GETTRAVELFARE__STRING_:
		resp->insertSignedInt(getTravelFare(inv->getAsciiParameter(_param0_getTravelFare__String_)));
		break;
	case RPC_SENDPLANETTRAVELPOINTLISTRESPONSE__PLAYERCREATURE_:
		sendPlanetTravelPointListResponse((PlayerCreature*) inv->getObjectParameter());
		break;
	case RPC_GETSTRUCTUREMANAGER__:
		resp->insertLong(getStructureManager()->_getObjectID());
		break;
	case RPC_GETWEATHERMANAGER__:
		resp->insertLong(getWeatherManager()->_getObjectID());
		break;
	case RPC_GETREGION__FLOAT_FLOAT_:
		resp->insertLong(getRegion(inv->getFloatParameter(), inv->getFloatParameter())->_getObjectID());
		break;
	case RPC_GETREGIONCOUNT__:
		resp->insertSignedInt(getRegionCount());
		break;
	case RPC_GETNUMBEROFCITIES__:
		resp->insertSignedInt(getNumberOfCities());
		break;
	case RPC_INCREASENUMBEROFCITIES__:
		increaseNumberOfCities();
		break;
	case RPC_GETREGION__INT_:
		resp->insertLong(getRegion(inv->getSignedIntParameter())->_getObjectID());
		break;
	case RPC_ADDREGION__REGION_:
		addRegion((Region*) inv->getObjectParameter());
		break;
	case RPC_DROPREGION__REGION_:
		dropRegion((Region*) inv->getObjectParameter());
		break;
	case RPC_HASREGION__STRING_:
		resp->insertBoolean(hasRegion(inv->getAsciiParameter(_param0_hasRegion__String_)));
		break;
	case RPC_ADDPERFORMANCELOCATION__SCENEOBJECT_:
		addPerformanceLocation((SceneObject*) inv->getObjectParameter());
		break;
	case RPC_ADDMISSIONNPC__SCENEOBJECT_:
		addMissionNpc((SceneObject*) inv->getObjectParameter());
		break;
	case RPC_ADDHUNTINGTARGETTEMPLATE__STRING_STRING_INT_:
		addHuntingTargetTemplate(inv->getAsciiParameter(_param0_addHuntingTargetTemplate__String_String_int_), inv->getAsciiParameter(_param1_addHuntingTargetTemplate__String_String_int_), inv->getSignedIntParameter());
		break;
	case RPC_ADDRECONLOC__SCENEOBJECT_:
		addReconLoc((SceneObject*) inv->getObjectParameter());
		break;
	case RPC_ADDINFORMANT__SCENEOBJECT_:
		addInformant((SceneObject*) inv->getObjectParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void PlanetManagerAdapter::initializeTransientMembers() {
	((PlanetManagerImplementation*) impl)->initializeTransientMembers();
}

void PlanetManagerAdapter::finalize() {
	((PlanetManagerImplementation*) impl)->finalize();
}

void PlanetManagerAdapter::initialize() {
	((PlanetManagerImplementation*) impl)->initialize();
}

void PlanetManagerAdapter::loadRegions() {
	((PlanetManagerImplementation*) impl)->loadRegions();
}

void PlanetManagerAdapter::loadPlayerRegions() {
	((PlanetManagerImplementation*) impl)->loadPlayerRegions();
}

void PlanetManagerAdapter::loadNoBuildAreas() {
	((PlanetManagerImplementation*) impl)->loadNoBuildAreas();
}

void PlanetManagerAdapter::loadBadgeAreas() {
	((PlanetManagerImplementation*) impl)->loadBadgeAreas();
}

void PlanetManagerAdapter::loadPerformanceLocations() {
	((PlanetManagerImplementation*) impl)->loadPerformanceLocations();
}

void PlanetManagerAdapter::loadHuntingTargets() {
	((PlanetManagerImplementation*) impl)->loadHuntingTargets();
}

void PlanetManagerAdapter::loadReconLocations() {
	((PlanetManagerImplementation*) impl)->loadReconLocations();
}

int PlanetManagerAdapter::getTravelFare(const String& destinationPlanet) {
	return ((PlanetManagerImplementation*) impl)->getTravelFare(destinationPlanet);
}

void PlanetManagerAdapter::sendPlanetTravelPointListResponse(PlayerCreature* player) {
	((PlanetManagerImplementation*) impl)->sendPlanetTravelPointListResponse(player);
}

StructureManager* PlanetManagerAdapter::getStructureManager() {
	return ((PlanetManagerImplementation*) impl)->getStructureManager();
}

WeatherManager* PlanetManagerAdapter::getWeatherManager() {
	return ((PlanetManagerImplementation*) impl)->getWeatherManager();
}

Region* PlanetManagerAdapter::getRegion(float x, float y) {
	return ((PlanetManagerImplementation*) impl)->getRegion(x, y);
}

int PlanetManagerAdapter::getRegionCount() {
	return ((PlanetManagerImplementation*) impl)->getRegionCount();
}

int PlanetManagerAdapter::getNumberOfCities() {
	return ((PlanetManagerImplementation*) impl)->getNumberOfCities();
}

void PlanetManagerAdapter::increaseNumberOfCities() {
	((PlanetManagerImplementation*) impl)->increaseNumberOfCities();
}

Region* PlanetManagerAdapter::getRegion(int index) {
	return ((PlanetManagerImplementation*) impl)->getRegion(index);
}

void PlanetManagerAdapter::addRegion(Region* region) {
	((PlanetManagerImplementation*) impl)->addRegion(region);
}

void PlanetManagerAdapter::dropRegion(Region* region) {
	((PlanetManagerImplementation*) impl)->dropRegion(region);
}

bool PlanetManagerAdapter::hasRegion(const String& name) {
	return ((PlanetManagerImplementation*) impl)->hasRegion(name);
}

void PlanetManagerAdapter::addPerformanceLocation(SceneObject* obj) {
	((PlanetManagerImplementation*) impl)->addPerformanceLocation(obj);
}

void PlanetManagerAdapter::addMissionNpc(SceneObject* npc) {
	((PlanetManagerImplementation*) impl)->addMissionNpc(npc);
}

void PlanetManagerAdapter::addHuntingTargetTemplate(const String& temp1, const String& temp2, int level) {
	((PlanetManagerImplementation*) impl)->addHuntingTargetTemplate(temp1, temp2, level);
}

void PlanetManagerAdapter::addReconLoc(SceneObject* obj) {
	((PlanetManagerImplementation*) impl)->addReconLoc(obj);
}

void PlanetManagerAdapter::addInformant(SceneObject* obj) {
	((PlanetManagerImplementation*) impl)->addInformant(obj);
}

/*
 *	PlanetManagerHelper
 */

PlanetManagerHelper* PlanetManagerHelper::staticInitializer = PlanetManagerHelper::instance();

PlanetManagerHelper::PlanetManagerHelper() {
	className = "PlanetManager";

	Core::getObjectBroker()->registerClass(className, this);
}

void PlanetManagerHelper::finalizeHelper() {
	PlanetManagerHelper::finalize();
}

DistributedObject* PlanetManagerHelper::instantiateObject() {
	return new PlanetManager(DummyConstructorParameter::instance());
}

DistributedObjectServant* PlanetManagerHelper::instantiateServant() {
	return new PlanetManagerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* PlanetManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new PlanetManagerAdapter((PlanetManagerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

