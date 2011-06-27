/*
 *	server/zone/objects/tangible/Container.h generated by engine3 IDL compiler 0.60
 */

#ifndef CONTAINER_H_
#define CONTAINER_H_

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
namespace packets {
namespace object {

class ObjectMenuResponse;

} // namespace object
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::object;

#include "server/zone/objects/tangible/TangibleObject.h"

#include "engine/lua/LuaObject.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {

class Container : public TangibleObject {
public:
	Container();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void initializeTransientMembers();

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player);

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	bool checkPermission(PlayerCreature* player);

	int canAddObject(SceneObject* object, int containmentType, String& errorDescription);

	bool isContainerObject();

	bool isContainerLocked();

	void setLockedStatus(bool lock);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

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
protected:
	bool locked;

public:
	ContainerImplementation();

	ContainerImplementation(DummyConstructorParameter* param);

	void loadTemplateData(SharedObjectTemplate* templateData);

	void initializeTransientMembers();

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player);

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	bool checkPermission(PlayerCreature* player);

	int canAddObject(SceneObject* object, int containmentType, String& errorDescription);

	bool isContainerObject();

	bool isContainerLocked();

	void setLockedStatus(bool lock);

	WeakReference<Container*> _this;

	operator const Container*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~ContainerImplementation();

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

	friend class Container;
};

class ContainerAdapter : public TangibleObjectAdapter {
public:
	ContainerAdapter(ContainerImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	bool checkPermission(PlayerCreature* player);

	int canAddObject(SceneObject* object, int containmentType, String& errorDescription);

	bool isContainerObject();

	bool isContainerLocked();

	void setLockedStatus(bool lock);

protected:
	String _param2_canAddObject__SceneObject_int_String_;
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
