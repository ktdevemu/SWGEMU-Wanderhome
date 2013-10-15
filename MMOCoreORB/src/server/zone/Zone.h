/*
 *	server/zone/Zone.h generated by engine3 IDL compiler 0.60
 */

#ifndef ZONE_H_
#define ZONE_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {

class ZoneProcessServer;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace objects {
namespace area {

class ActiveArea;

} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area;

namespace server {
namespace zone {
namespace managers {
namespace planet {

class PlanetManager;

} // namespace planet
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::planet;

namespace server {
namespace zone {
namespace managers {
namespace creature {

class CreatureManager;

} // namespace creature
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::creature;

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

namespace server {
namespace zone {
namespace managers {
namespace gcw {

class GCWManager;

} // namespace gcw
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::gcw;

namespace server {
namespace zone {
namespace managers {
namespace minigames {

class FishingManager;

} // namespace minigames
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::minigames;

namespace server {
namespace zone {
namespace managers {
namespace minigames {

class GamblingManager;

} // namespace minigames
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::minigames;

namespace server {
namespace zone {
namespace managers {
namespace minigames {

class ForageManager;

} // namespace minigames
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::minigames;

namespace server {
namespace zone {
namespace objects {
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {
namespace objects {
namespace region {

class CityRegion;

} // namespace region
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::region;

#include "server/chat/room/ChatRoom.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/managers/planet/HeightMap.h"

#include "server/zone/managers/object/ObjectMap.h"

#include "server/zone/managers/planet/MapLocationTable.h"

#include "engine/util/u3d/Vector3.h"

#include "server/zone/QuadTreeReference.h"

#include "engine/util/u3d/QuadTree.h"

#include "engine/util/u3d/QuadTreeEntry.h"

#include "system/lang/Time.h"

#include "engine/core/TaskManager.h"

#include "engine/core/ManagedObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "system/util/VectorMap.h"

#include "system/util/SortedVector.h"

#include "system/lang/System.h"

#include "server/zone/objects/scene/SceneObject.h"

namespace server {
namespace zone {

class Zone : public SceneObject {
public:
	Zone(ZoneProcessServer* processor, const String& zoneName);

	void initializeTransientMembers();

	SceneObject* getNearestPlanetaryObject(SceneObject* object, const String& mapObjectLocationType);

	void initializePrivateData();

	QuadTree* getRegionTree();

	int getInRangeObjects(float x, float y, float range, SortedVector<ManagedReference<QuadTreeEntry* > >* objects, bool readLockZone);

	void createContainerComponent();

	int getInRangeActiveAreas(float x, float y, SortedVector<ManagedReference<ActiveArea* > >* objects, bool readLockZone);

	SortedVector<ManagedReference<SceneObject* > > getPlanetaryObjectList(const String& mapObjectLocationType);

	void insert(QuadTreeEntry* entry);

	void remove(QuadTreeEntry* entry);

	void update(QuadTreeEntry* entry);

	void inRange(QuadTreeEntry* entry, float range);

	void updateActiveAreas(SceneObject* object);

	void startManagers();

	void stopManagers();

	float getHeight(float x, float y);

	void addSceneObject(SceneObject* object);

	void addCityRegionToUpdate(CityRegion* city);

	void updateCityRegions();

	void sendMapLocationsTo(SceneObject* player);

	void dropSceneObject(SceneObject* object);

	PlanetManager* getPlanetManager();

	ZoneServer* getZoneServer();

	CreatureManager* getCreatureManager();

	unsigned long long getGalacticTime();

	bool hasManagersStarted();

	/**
	 * These functions return the size of the terrain file for this zone.
	 */
	float getMinX();

	float getMaxX();

	float getMinY();

	float getMaxY();

	bool isWithinBoundaries(const Vector3& position);

	float getBoundingRadius();

	/**
	 * Registers the object to the planetary map. This also makes the object visible to the find command.
	 * @param object The object to register to the planetary map.
	 */
	void registerObjectWithPlanetaryMap(SceneObject* object);

	/**
	 * Unregisters the object from the planetary map.
	 * @param object The object to unregister from the planetary map.
	 */
	void unregisterObjectWithPlanetaryMap(SceneObject* object);

	String getZoneName();

	unsigned int getZoneCRC();

	GCWManager* getGCWManager();

	void setChatRoom(ChatRoom* room);

	ChatRoom* getChatRoom();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	Zone(DummyConstructorParameter* param);

	virtual ~Zone();

	friend class ZoneHelper;
};

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class ZoneImplementation : public SceneObjectImplementation {
	String zoneName;

	unsigned int zoneCRC;

	ManagedReference<ZoneProcessServer* > processor;

	Reference<ObjectMap* > objectMap;

	ManagedReference<PlanetManager* > planetManager;

	ManagedReference<CreatureManager* > creatureManager;

	ManagedReference<GCWManager* > gcwManager;

	ManagedReference<ChatRoom* > chatRoom;

	SortedVector<ManagedReference<CityRegion* > > cityRegionUpdateVector;

	ManagedReference<ZoneServer* > server;

	QuadTreeReference regionTree;

	QuadTreeReference quadTree;

	Time galacticTime;

	Reference<HeightMap* > heightMap;

	Reference<MapLocationTable* > mapLocations;

	bool managersStarted;

public:
	ZoneImplementation(ZoneProcessServer* processor, const String& zoneName);

	ZoneImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void finalize();

	SceneObject* getNearestPlanetaryObject(SceneObject* object, const String& mapObjectLocationType);

	void initializePrivateData();

	QuadTree* getRegionTree();

	int getInRangeObjects(float x, float y, float range, SortedVector<ManagedReference<QuadTreeEntry* > >* objects, bool readLockZone);

	void createContainerComponent();

	int getInRangeActiveAreas(float x, float y, SortedVector<ManagedReference<ActiveArea* > >* objects, bool readLockZone);

	SortedVector<ManagedReference<SceneObject* > > getPlanetaryObjectList(const String& mapObjectLocationType);

	void insert(QuadTreeEntry* entry);

	void remove(QuadTreeEntry* entry);

	void update(QuadTreeEntry* entry);

	void inRange(QuadTreeEntry* entry, float range);

	void updateActiveAreas(SceneObject* object);

	void startManagers();

	void stopManagers();

	float getHeight(float x, float y);

	void addSceneObject(SceneObject* object);

	void addCityRegionToUpdate(CityRegion* city);

	void updateCityRegions();

	void sendMapLocationsTo(SceneObject* player);

	void dropSceneObject(SceneObject* object);

	PlanetManager* getPlanetManager();

	ZoneServer* getZoneServer();

	CreatureManager* getCreatureManager();

	unsigned long long getGalacticTime();

	bool hasManagersStarted();

	/**
	 * These functions return the size of the terrain file for this zone.
	 */
	float getMinX();

	float getMaxX();

	float getMinY();

	float getMaxY();

	bool isWithinBoundaries(const Vector3& position);

	float getBoundingRadius();

	/**
	 * Registers the object to the planetary map. This also makes the object visible to the find command.
	 * @param object The object to register to the planetary map.
	 */
	void registerObjectWithPlanetaryMap(SceneObject* object);

	/**
	 * Unregisters the object from the planetary map.
	 * @param object The object to unregister from the planetary map.
	 */
	void unregisterObjectWithPlanetaryMap(SceneObject* object);

	String getZoneName();

	unsigned int getZoneCRC();

	GCWManager* getGCWManager();

	void setChatRoom(ChatRoom* room);

	ChatRoom* getChatRoom();

	WeakReference<Zone*> _this;

	operator const Zone*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~ZoneImplementation();

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
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class Zone;
};

class ZoneAdapter : public SceneObjectAdapter {
public:
	ZoneAdapter(Zone* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void finalize();

	SceneObject* getNearestPlanetaryObject(SceneObject* object, const String& mapObjectLocationType);

	void initializePrivateData();

	void createContainerComponent();

	void updateActiveAreas(SceneObject* object);

	void startManagers();

	void stopManagers();

	float getHeight(float x, float y);

	void addSceneObject(SceneObject* object);

	void addCityRegionToUpdate(CityRegion* city);

	void updateCityRegions();

	void sendMapLocationsTo(SceneObject* player);

	void dropSceneObject(SceneObject* object);

	PlanetManager* getPlanetManager();

	ZoneServer* getZoneServer();

	CreatureManager* getCreatureManager();

	unsigned long long getGalacticTime();

	bool hasManagersStarted();

	float getMinX();

	float getMaxX();

	float getMinY();

	float getMaxY();

	float getBoundingRadius();

	void registerObjectWithPlanetaryMap(SceneObject* object);

	void unregisterObjectWithPlanetaryMap(SceneObject* object);

	String getZoneName();

	unsigned int getZoneCRC();

	GCWManager* getGCWManager();

	void setChatRoom(ChatRoom* room);

	ChatRoom* getChatRoom();

};

class ZoneHelper : public DistributedObjectClassHelper, public Singleton<ZoneHelper> {
	static ZoneHelper* staticInitializer;

public:
	ZoneHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ZoneHelper>;
};

} // namespace zone
} // namespace server

using namespace server::zone;

#endif /*ZONE_H_*/
