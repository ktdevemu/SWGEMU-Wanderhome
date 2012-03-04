/*
 *	server/zone/objects/building/BuildingObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef BUILDINGOBJECT_H_
#define BUILDINGOBJECT_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

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
namespace tangible {
namespace sign {

class SignObject;

} // namespace sign
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::sign;

namespace server {
namespace zone {

class ZoneServer;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace templates {

class SharedObjectTemplate;

} // namespace templates
} // namespace zone
} // namespace server

using namespace server::zone::templates;

#include "server/zone/objects/cell/CellObject.h"

#include "server/zone/objects/structure/StructureObject.h"

#include "engine/lua/LuaObject.h"

#include "engine/util/u3d/QuadTree.h"

#include "engine/util/u3d/QuadTreeEntry.h"

#include "system/util/SortedVector.h"

#include "system/util/Vector.h"

#include "engine/util/u3d/Vector3.h"

#include "system/lang/StackTrace.h"

namespace server {
namespace zone {
namespace objects {
namespace building {

class BuildingObject : public StructureObject {
public:
	static const int MAXPLAYERITEMS = 400;

	BuildingObject();

	void createCellObjects();

	void destroyObjectFromDatabase(bool destroyContainedObjects = false);

	void loadTemplateData(SharedObjectTemplate* templateData);

	void initializeTransientMembers();

	void createContainerComponent();

	void setCustomObjectName(const UnicodeString& name, bool notifyClient);

	void updateSignName(bool notifyClient);

	void sendContainerObjectsTo(SceneObject* player);

	void updateCellPermissionsTo(CreatureObject* creature);

	void broadcastCellPermissions();

	bool isAllowedEntry(const String& firstName);

	int notifyStructurePlaced(CreatureObject* player);

	Vector3 getEjectionPoint();

	void ejectObject(SceneObject* obj);

	void notifyRemoveFromZone();

	void notifyLoadFromDatabase();

	void notifyInsert(QuadTreeEntry* obj);

	void notifyInsertToZone(Zone* zone);

	void notifyDissapear(QuadTreeEntry* obj);

	void notifyObjectInsertedToZone(SceneObject* object);

	void insert(QuadTreeEntry* obj);

	void remove(QuadTreeEntry* obj);

	void update(QuadTreeEntry* obj);

	void inRange(QuadTreeEntry* obj, float range);

	void sendTo(SceneObject* player, bool doClose);

	void sendBaselinesTo(SceneObject* player);

	void sendDestroyTo(SceneObject* player);

	void addCell(CellObject* cell, unsigned int cellNumber);

	bool isStaticBuilding();

	CellObject* getCell(unsigned int idx);

	int getTotalCellNumber();

	bool transferObject(SceneObject* object, int containmentType, bool notifyClient = false);

	int notifyObjectInsertedToChild(SceneObject* object, SceneObject* child, SceneObject* oldParent);

	int notifyObjectRemovedFromChild(SceneObject* object, SceneObject* child);

	int getCurrentNumberOfPlayerItems();

	void destroyAllPlayerItems();

	void onEnter(CreatureObject* player);

	void onExit(CreatureObject* player, unsigned long long parentid);

	bool isBuildingObject();

	bool isHospitalBuildingObject();

	bool isRecreationalBuildingObject();

	void setSignObject(SignObject* sign);

	SignObject* getSignObject();

	bool isCityHallBuilding();

	void setAccessFee(int fee);

	int getAccessFee();

	bool isPublicStructure();

	bool isPrivateStructure();

	void setPublicStructure(bool privacy);

	bool isCondemned();

	int getMapCellSize();

	bool togglePrivacy();

	unsigned int getMaximumNumberOfPlayerItems();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	BuildingObject(DummyConstructorParameter* param);

	virtual ~BuildingObject();

	friend class BuildingObjectHelper;
};

} // namespace building
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::building;

namespace server {
namespace zone {
namespace objects {
namespace building {

class BuildingObjectImplementation : public StructureObjectImplementation {
protected:
	VectorMap<unsigned int, ManagedReference<CellObject* > > cells;

	int totalCellNumber;

	ManagedReference<SignObject* > signObject;

	unsigned long long deedObjectID;

	int accessFee;

public:
	bool publicStructure;

	static const int MAXPLAYERITEMS = 400;

protected:
	UnicodeString signName;

public:
	BuildingObjectImplementation();

	BuildingObjectImplementation(DummyConstructorParameter* param);

	void createCellObjects();

	void destroyObjectFromDatabase(bool destroyContainedObjects = false);

	void loadTemplateData(SharedObjectTemplate* templateData);

	void initializeTransientMembers();

	void createContainerComponent();

	void setCustomObjectName(const UnicodeString& name, bool notifyClient);

	void updateSignName(bool notifyClient);

	void sendContainerObjectsTo(SceneObject* player);

	void updateCellPermissionsTo(CreatureObject* creature);

	void broadcastCellPermissions();

	bool isAllowedEntry(const String& firstName);

	virtual int notifyStructurePlaced(CreatureObject* player);

	Vector3 getEjectionPoint();

	void ejectObject(SceneObject* obj);

	void notifyRemoveFromZone();

	void notifyLoadFromDatabase();

	void notifyInsert(QuadTreeEntry* obj);

	void notifyInsertToZone(Zone* zone);

	void notifyDissapear(QuadTreeEntry* obj);

	void notifyObjectInsertedToZone(SceneObject* object);

	void insert(QuadTreeEntry* obj);

	void remove(QuadTreeEntry* obj);

	void update(QuadTreeEntry* obj);

	void inRange(QuadTreeEntry* obj, float range);

	void sendTo(SceneObject* player, bool doClose);

	void sendBaselinesTo(SceneObject* player);

	void sendDestroyTo(SceneObject* player);

	void addCell(CellObject* cell, unsigned int cellNumber);

	bool isStaticBuilding();

	CellObject* getCell(unsigned int idx);

	int getTotalCellNumber();

	virtual bool transferObject(SceneObject* object, int containmentType, bool notifyClient = false);

	int notifyObjectInsertedToChild(SceneObject* object, SceneObject* child, SceneObject* oldParent);

	int notifyObjectRemovedFromChild(SceneObject* object, SceneObject* child);

	int getCurrentNumberOfPlayerItems();

	void destroyAllPlayerItems();

	virtual void onEnter(CreatureObject* player);

	virtual void onExit(CreatureObject* player, unsigned long long parentid);

	bool isBuildingObject();

	virtual bool isHospitalBuildingObject();

	virtual bool isRecreationalBuildingObject();

	void setSignObject(SignObject* sign);

	SignObject* getSignObject();

	virtual bool isCityHallBuilding();

	void setAccessFee(int fee);

	int getAccessFee();

	bool isPublicStructure();

	bool isPrivateStructure();

	void setPublicStructure(bool privacy);

	bool isCondemned();

	int getMapCellSize();

	bool togglePrivacy();

	virtual unsigned int getMaximumNumberOfPlayerItems();

	WeakReference<BuildingObject*> _this;

	operator const BuildingObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~BuildingObjectImplementation();

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
	bool readObjectMember(ObjectInputStream* stream, const String& name);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class BuildingObject;
};

class BuildingObjectAdapter : public StructureObjectAdapter {
public:
	BuildingObjectAdapter(BuildingObject* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void createCellObjects();

	void destroyObjectFromDatabase(bool destroyContainedObjects);

	void initializeTransientMembers();

	void createContainerComponent();

	void setCustomObjectName(const UnicodeString& name, bool notifyClient);

	void updateSignName(bool notifyClient);

	void sendContainerObjectsTo(SceneObject* player);

	void updateCellPermissionsTo(CreatureObject* creature);

	void broadcastCellPermissions();

	bool isAllowedEntry(const String& firstName);

	int notifyStructurePlaced(CreatureObject* player);

	void ejectObject(SceneObject* obj);

	void notifyRemoveFromZone();

	void notifyLoadFromDatabase();

	void notifyInsertToZone(Zone* zone);

	void notifyObjectInsertedToZone(SceneObject* object);

	void sendTo(SceneObject* player, bool doClose);

	void sendBaselinesTo(SceneObject* player);

	void sendDestroyTo(SceneObject* player);

	void addCell(CellObject* cell, unsigned int cellNumber);

	bool isStaticBuilding();

	CellObject* getCell(unsigned int idx);

	int getTotalCellNumber();

	bool transferObject(SceneObject* object, int containmentType, bool notifyClient);

	int notifyObjectInsertedToChild(SceneObject* object, SceneObject* child, SceneObject* oldParent);

	int notifyObjectRemovedFromChild(SceneObject* object, SceneObject* child);

	int getCurrentNumberOfPlayerItems();

	void destroyAllPlayerItems();

	void onEnter(CreatureObject* player);

	void onExit(CreatureObject* player, unsigned long long parentid);

	bool isBuildingObject();

	bool isHospitalBuildingObject();

	bool isRecreationalBuildingObject();

	void setSignObject(SignObject* sign);

	SignObject* getSignObject();

	bool isCityHallBuilding();

	void setAccessFee(int fee);

	int getAccessFee();

	bool isPublicStructure();

	bool isPrivateStructure();

	void setPublicStructure(bool privacy);

	bool isCondemned();

	int getMapCellSize();

	bool togglePrivacy();

	unsigned int getMaximumNumberOfPlayerItems();

protected:
	UnicodeString _param0_setCustomObjectName__UnicodeString_bool_;
	String _param0_isAllowedEntry__String_;
};

class BuildingObjectHelper : public DistributedObjectClassHelper, public Singleton<BuildingObjectHelper> {
	static BuildingObjectHelper* staticInitializer;

public:
	BuildingObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<BuildingObjectHelper>;
};

} // namespace building
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::building;

#endif /*BUILDINGOBJECT_H_*/
