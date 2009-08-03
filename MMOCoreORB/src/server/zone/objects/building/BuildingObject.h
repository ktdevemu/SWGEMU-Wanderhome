/*
 *	server/zone/objects/building/BuildingObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef BUILDINGOBJECT_H_
#define BUILDINGOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

namespace server {
namespace zone {
namespace objects {
namespace cell {

class CellObject;

} // namespace cell
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::cell;

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

#include "server/zone/objects/tangible/TangibleObject.h"

#include "engine/lua/LuaObject.h"

#include "engine/util/QuadTree.h"

#include "engine/util/QuadTreeEntry.h"

#include "system/util/SortedVector.h"

namespace server {
namespace zone {
namespace objects {
namespace building {

class BuildingObject : public TangibleObject {
public:
	BuildingObject(LuaObject* templateData);

	void notifyInsert(QuadTreeEntry* obj);

	void notifyDissapear(QuadTreeEntry* obj);

	void notifyInsertToZone(SceneObject* object);

	void insert(QuadTreeEntry* obj);

	void remove(QuadTreeEntry* obj);

	void update(QuadTreeEntry* obj);

	void inRange(QuadTreeEntry* obj, float range);

	void sendTo(SceneObject* player, bool doClose = true);

	void sendBaselinesTo(SceneObject* player);

	bool isStaticBuilding();

	CellObject* getCell(int idx);

	void addCell(CellObject* cell);

	void setStaticBuilding(bool value);

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

class BuildingObjectImplementation : public TangibleObjectImplementation, public QuadTree {
protected:
	SortedVector<CellObject* >* cells;

	bool staticBuilding;

public:
	BuildingObjectImplementation(LuaObject* templateData);

	void notifyInsert(QuadTreeEntry* obj);

	void notifyDissapear(QuadTreeEntry* obj);

	void notifyInsertToZone(SceneObject* object);

	void insert(QuadTreeEntry* obj);

	void remove(QuadTreeEntry* obj);

	void update(QuadTreeEntry* obj);

	void inRange(QuadTreeEntry* obj, float range);

	void sendTo(SceneObject* player, bool doClose = true);

	void sendBaselinesTo(SceneObject* player);

	bool isStaticBuilding();

	CellObject* getCell(int idx);

	void addCell(CellObject* cell);

	void setStaticBuilding(bool value);

	BuildingObject* _this;

	operator const BuildingObject*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~BuildingObjectImplementation();

	void _setStub(DistributedObjectStub* stub);

	void _serializationHelperMethod();

	friend class BuildingObject;
};

class BuildingObjectAdapter : public TangibleObjectAdapter {
public:
	BuildingObjectAdapter(BuildingObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void notifyInsert(QuadTreeEntry* obj);

	void notifyDissapear(QuadTreeEntry* obj);

	void notifyInsertToZone(SceneObject* object);

	void insert(QuadTreeEntry* obj);

	void remove(QuadTreeEntry* obj);

	void update(QuadTreeEntry* obj);

	void inRange(QuadTreeEntry* obj, float range);

	void sendTo(SceneObject* player, bool doClose);

	void sendBaselinesTo(SceneObject* player);

	bool isStaticBuilding();

	CellObject* getCell(int idx);

	void addCell(CellObject* cell);

	void setStaticBuilding(bool value);

};

class BuildingObjectHelper : public DistributedObjectClassHelper, public Singleton<BuildingObjectHelper> {
	static BuildingObjectHelper* staticInitializer;

public:
	BuildingObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<BuildingObjectHelper>;
};

} // namespace building
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::building;

#endif /*BUILDINGOBJECT_H_*/
