/*
 *	server/zone/objects/region/Region.h generated by engine3 IDL compiler 0.60
 */

#ifndef REGION_H_
#define REGION_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace terminal {

class Terminal;

} // namespace terminal
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::terminal;

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

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

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

#include "server/zone/objects/scene/variables/StringId.h"

#include "server/zone/objects/region/RegionCenterPoint.h"

#include "server/zone/objects/region/RegionCenterPointList.h"

#include "system/util/VectorMap.h"

#include "engine/core/ManagedObject.h"

#include "server/zone/objects/area/ActiveArea.h"

namespace server {
namespace zone {
namespace objects {
namespace region {

class Region : public ActiveArea {
public:
	Region();

	void setCityRegion(CityRegion* city);

	CityRegion* getCityRegion();

	void notifyLoadFromDatabase();

	void enqueueEnterEvent(SceneObject* obj);

	void enqueueExitEvent(SceneObject* obj);

	void notifyEnter(SceneObject* object);

	void notifyExit(SceneObject* object);

	bool isRegion();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	Region(DummyConstructorParameter* param);

	virtual ~Region();

	friend class RegionHelper;
};

} // namespace region
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::region;

namespace server {
namespace zone {
namespace objects {
namespace region {

class RegionImplementation : public ActiveAreaImplementation {
protected:
	ManagedWeakReference<CityRegion* > cityRegion;

public:
	RegionImplementation();

	RegionImplementation(DummyConstructorParameter* param);

	void setCityRegion(CityRegion* city);

	CityRegion* getCityRegion();

	void notifyLoadFromDatabase();

	void enqueueEnterEvent(SceneObject* obj);

	void enqueueExitEvent(SceneObject* obj);

	void notifyEnter(SceneObject* object);

	void notifyExit(SceneObject* object);

	bool isRegion();

	WeakReference<Region*> _this;

	operator const Region*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~RegionImplementation();

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

	friend class Region;
};

class RegionAdapter : public ActiveAreaAdapter {
public:
	RegionAdapter(Region* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void setCityRegion(CityRegion* city);

	CityRegion* getCityRegion();

	void notifyLoadFromDatabase();

	void enqueueEnterEvent(SceneObject* obj);

	void enqueueExitEvent(SceneObject* obj);

	void notifyEnter(SceneObject* object);

	void notifyExit(SceneObject* object);

	bool isRegion();

};

class RegionHelper : public DistributedObjectClassHelper, public Singleton<RegionHelper> {
	static RegionHelper* staticInitializer;

public:
	RegionHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<RegionHelper>;
};

} // namespace region
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::region;

#endif /*REGION_H_*/
