/*
 *	server/zone/objects/tangible/tool/ToolTangibleObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef TOOLTANGIBLEOBJECT_H_
#define TOOLTANGIBLEOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

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

#include "server/zone/objects/tangible/TangibleObject.h"

#include "engine/lua/LuaObject.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace tool {

class ToolTangibleObject : public TangibleObject {
public:
	ToolTangibleObject();

	void initializeTransientMembers();

protected:
	ToolTangibleObject(DummyConstructorParameter* param);

	virtual ~ToolTangibleObject();

	friend class ToolTangibleObjectHelper;
};

} // namespace tool
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::tool;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace tool {

class ToolTangibleObjectImplementation : public TangibleObjectImplementation {

public:
	ToolTangibleObjectImplementation();

	ToolTangibleObjectImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	ToolTangibleObject* _this;

	operator const ToolTangibleObject*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~ToolTangibleObjectImplementation();

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

	friend class ToolTangibleObject;
};

class ToolTangibleObjectAdapter : public TangibleObjectAdapter {
public:
	ToolTangibleObjectAdapter(ToolTangibleObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

};

class ToolTangibleObjectHelper : public DistributedObjectClassHelper, public Singleton<ToolTangibleObjectHelper> {
	static ToolTangibleObjectHelper* staticInitializer;

public:
	ToolTangibleObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ToolTangibleObjectHelper>;
};

} // namespace tool
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::tool;

#endif /*TOOLTANGIBLEOBJECT_H_*/
