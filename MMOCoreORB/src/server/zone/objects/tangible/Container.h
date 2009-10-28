/*
 *	server/zone/objects/tangible/Container.h generated by engine3 IDL compiler 0.60
 */

#ifndef CONTAINER_H_
#define CONTAINER_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

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

class Container : public TangibleObject {
public:
	Container(LuaObject* templateData);

	void loadTemplateData(LuaObject* templateData);

	void initializeTransientMembers();

	void sendContainerObjectsTo(SceneObject* player);

protected:
	Container(DummyConstructorParameter* param);

	virtual ~Container();

	friend class ContainerHelper;
};

} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible;

namespace server {
namespace zone {
namespace objects {
namespace tangible {

class ContainerImplementation : public TangibleObjectImplementation {

public:
	ContainerImplementation(LuaObject* templateData);

	ContainerImplementation(DummyConstructorParameter* param);

	void loadTemplateData(LuaObject* templateData);

	void initializeTransientMembers();

	void sendContainerObjectsTo(SceneObject* player);

	Container* _this;

	operator const Container*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~ContainerImplementation();

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

	friend class Container;
};

class ContainerAdapter : public TangibleObjectAdapter {
public:
	ContainerAdapter(ContainerImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void sendContainerObjectsTo(SceneObject* player);

};

class ContainerHelper : public DistributedObjectClassHelper, public Singleton<ContainerHelper> {
	static ContainerHelper* staticInitializer;

public:
	ContainerHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ContainerHelper>;
};

} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible;

#endif /*CONTAINER_H_*/
