/*
 *	server/zone/managers/structure/StructureManager.h generated by engine3 IDL compiler 0.60
 */

#ifndef STRUCTUREMANAGER_H_
#define STRUCTUREMANAGER_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class ZoneProcessServerImplementation;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace objects {
namespace building {

class BuildingObject;

} // namespace building
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::building;

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {
namespace objects {
namespace player {

class PlayerCreature;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

namespace server {
namespace zone {
namespace objects {
namespace structure {

class StructureObject;

} // namespace structure
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::structure;

namespace server {
namespace zone {
namespace managers {
namespace objectcontroller {

class ObjectController;

} // namespace objectcontroller
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::objectcontroller;

#include "server/zone/managers/templates/TemplateManager.h"

#include "server/zone/templates/tangible/SharedStructureObjectTemplate.h"

#include "server/zone/templates/tangible/SharedBuildingObjectTemplate.h"

#include "server/zone/templates/tangible/SharedInstallationObjectTemplate.h"

#include "engine/core/ManagedService.h"

#include "engine/util/Quaternion.h"

#include "engine/log/Logger.h"

#include "system/thread/Thread.h"

#include "system/util/SortedVector.h"

namespace server {
namespace zone {
namespace managers {
namespace structure {

class StructureManager : public ManagedService {
public:
	StructureManager(Zone* zone, ZoneProcessServerImplementation* processor);

	void loadStructures();

	int placeStructureFromDeed(PlayerCreature* player, unsigned long long deedID, float x, float y, int angle);

	int placeStructure(PlayerCreature* player, StructureObject* structureObject, SharedStructureObjectTemplate* structureTemplate, unsigned long long deedID, float x, float y, const Quaternion& direction);

	int constructStructure(PlayerCreature* player, StructureObject* structureObject, SharedStructureObjectTemplate* structureTemplate, unsigned long long deedID, float x, float y, const Quaternion& direction);

	int destroyStructure(PlayerCreature* player, StructureObject* structureObject);

	int redeedStructure(PlayerCreature* player, StructureObject* structureObject, bool destroy = true);

	int declareResidence(PlayerCreature* player, StructureObject* structureObject);

	int changePrivacy(PlayerCreature* player, StructureObject* structureObject);

	String getTimeString(unsigned int timestamp);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	StructureManager(DummyConstructorParameter* param);

	virtual ~StructureManager();

	String _return_getTimeString;

	friend class StructureManagerHelper;
};

} // namespace structure
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::structure;

namespace server {
namespace zone {
namespace managers {
namespace structure {

class StructureManagerImplementation : public ManagedServiceImplementation, public Logger {
	ManagedWeakReference<Zone* > zone;

	ZoneProcessServerImplementation* server;

	TemplateManager* templateManager;

protected:
	static SortedVector<String> listOfStaticBuildings;

	static SortedVector<String> createdFiles;

public:
	StructureManagerImplementation(Zone* zone, ZoneProcessServerImplementation* processor);

	StructureManagerImplementation(DummyConstructorParameter* param);

private:
	void createNewLuas();

	void createLuaIncludes();

	void loadStaticBuildings();

	void loadStaticBanks();

	void loadStaticBazaars();

	void loadStaticMissionTerminals();

	void loadStaticCraftingStations();

	void loadPlayerStructures();

	void loadStaticGamblingTerminals();

	void loadStaticGamblingTerminals(int iff);

	void loadStaticGarages();

	BuildingObject* loadStaticBuilding(unsigned long long oid);

	void loadStaticCells(BuildingObject* building);

public:
	void loadStructures();

	int placeStructureFromDeed(PlayerCreature* player, unsigned long long deedID, float x, float y, int angle);

	int placeStructure(PlayerCreature* player, StructureObject* structureObject, SharedStructureObjectTemplate* structureTemplate, unsigned long long deedID, float x, float y, const Quaternion& direction);

	int constructStructure(PlayerCreature* player, StructureObject* structureObject, SharedStructureObjectTemplate* structureTemplate, unsigned long long deedID, float x, float y, const Quaternion& direction);

	int destroyStructure(PlayerCreature* player, StructureObject* structureObject);

	int redeedStructure(PlayerCreature* player, StructureObject* structureObject, bool destroy = true);

	int declareResidence(PlayerCreature* player, StructureObject* structureObject);

	int changePrivacy(PlayerCreature* player, StructureObject* structureObject);

	String getTimeString(unsigned int timestamp);

	StructureManager* _this;

	operator const StructureManager*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~StructureManagerImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();

	friend class StructureManager;
};

class StructureManagerAdapter : public ManagedServiceAdapter {
public:
	StructureManagerAdapter(StructureManagerImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void loadStructures();

	int placeStructureFromDeed(PlayerCreature* player, unsigned long long deedID, float x, float y, int angle);

	int destroyStructure(PlayerCreature* player, StructureObject* structureObject);

	int redeedStructure(PlayerCreature* player, StructureObject* structureObject, bool destroy);

	int declareResidence(PlayerCreature* player, StructureObject* structureObject);

	int changePrivacy(PlayerCreature* player, StructureObject* structureObject);

	String getTimeString(unsigned int timestamp);

};

class StructureManagerHelper : public DistributedObjectClassHelper, public Singleton<StructureManagerHelper> {
	static StructureManagerHelper* staticInitializer;

public:
	StructureManagerHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<StructureManagerHelper>;
};

} // namespace structure
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::structure;

#endif /*STRUCTUREMANAGER_H_*/
