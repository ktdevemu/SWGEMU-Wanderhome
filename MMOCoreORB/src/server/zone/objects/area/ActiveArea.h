/*
 *	server/zone/objects/area/ActiveArea.h generated by engine3 IDL compiler 0.60
 */

#ifndef ACTIVEAREA_H_
#define ACTIVEAREA_H_

#include "engine/core/Core.h"

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
namespace objects {
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

#include "engine/util/u3d/QuadTreeEntry.h"

#include "server/zone/objects/scene/SceneObject.h"

namespace server {
namespace zone {
namespace objects {
namespace area {

class ActiveArea : public SceneObject {
public:
	ActiveArea();

	void sendTo(SceneObject* player, bool doClose);

	void enqueueEnterEvent(SceneObject* obj);

	void enqueueExitEvent(SceneObject* obj);

	void notifyEnter(SceneObject* object);

	void notifyExit(SceneObject* object);

	bool isActiveArea();

	bool isRegion();

	bool isNoBuildArea();

	bool containsPoint(float x, float y);

	float getRadius2();

	void setNoBuildArea(bool val);

	void setMunicipalZone(bool val);

	void setRadius(float r);

	bool isCampArea();

	bool isMunicipalZone();

	unsigned long long getCellObjectID();

	void setCellObjectID(unsigned long long celloid);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	ActiveArea(DummyConstructorParameter* param);

	virtual ~ActiveArea();

	friend class ActiveAreaHelper;
};

} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area;

namespace server {
namespace zone {
namespace objects {
namespace area {

class ActiveAreaImplementation : public SceneObjectImplementation {
protected:
	float radius2;

	bool noBuildArea;

	bool municipalZone;

	unsigned long long cellObjectID;

public:
	ActiveAreaImplementation();

	ActiveAreaImplementation(DummyConstructorParameter* param);

	void sendTo(SceneObject* player, bool doClose);

	void enqueueEnterEvent(SceneObject* obj);

	void enqueueExitEvent(SceneObject* obj);

	virtual void notifyEnter(SceneObject* object);

	virtual void notifyExit(SceneObject* object);

	bool isActiveArea();

	virtual bool isRegion();

	bool isNoBuildArea();

	bool containsPoint(float x, float y);

	float getRadius2();

	void setNoBuildArea(bool val);

	void setMunicipalZone(bool val);

	void setRadius(float r);

	virtual bool isCampArea();

	bool isMunicipalZone();

	unsigned long long getCellObjectID();

	void setCellObjectID(unsigned long long celloid);

	WeakReference<ActiveArea*> _this;

	operator const ActiveArea*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~ActiveAreaImplementation();

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

	friend class ActiveArea;
};

class ActiveAreaAdapter : public SceneObjectAdapter {
public:
	ActiveAreaAdapter(ActiveArea* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void sendTo(SceneObject* player, bool doClose);

	void enqueueEnterEvent(SceneObject* obj);

	void enqueueExitEvent(SceneObject* obj);

	void notifyEnter(SceneObject* object);

	void notifyExit(SceneObject* object);

	bool isActiveArea();

	bool isRegion();

	bool isNoBuildArea();

	bool containsPoint(float x, float y);

	float getRadius2();

	void setNoBuildArea(bool val);

	void setMunicipalZone(bool val);

	void setRadius(float r);

	bool isCampArea();

	bool isMunicipalZone();

	unsigned long long getCellObjectID();

	void setCellObjectID(unsigned long long celloid);

};

class ActiveAreaHelper : public DistributedObjectClassHelper, public Singleton<ActiveAreaHelper> {
	static ActiveAreaHelper* staticInitializer;

public:
	ActiveAreaHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ActiveAreaHelper>;
};

} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area;

#endif /*ACTIVEAREA_H_*/
