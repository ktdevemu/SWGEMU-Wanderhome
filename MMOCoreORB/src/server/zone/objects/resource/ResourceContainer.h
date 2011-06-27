/*
 *	server/zone/objects/resource/ResourceContainer.h generated by engine3 IDL compiler 0.60
 */

#ifndef RESOURCECONTAINER_H_
#define RESOURCECONTAINER_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

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
namespace area {

class ActiveArea;

} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area;

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

#include "server/zone/objects/resource/ResourceSpawn.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "engine/log/Logger.h"

#include "system/util/VectorMap.h"

#include "system/util/Vector.h"

#include "server/zone/objects/tangible/TangibleObject.h"

namespace server {
namespace zone {
namespace objects {
namespace resource {

class ResourceContainer : public TangibleObject {
public:
	static const int MAXSIZE = 100000;

	ResourceContainer();

	void initializeTransientMembers();

	void destroyObjectFromDatabase(bool destroyContainedObjects = false);

	void fillAttributeList(AttributeListMessage* msg, PlayerCreature* object);

	void sendBaselinesTo(SceneObject* player);

	void setQuantity(unsigned int newQuantity, bool notifyClient = true);

	bool isResourceContainer();

	int getQuantity();

	int getUseCount();

	void setUseCount(unsigned int newUseCount, bool notifyClient = true);

	void setSpawnObject(ResourceSpawn* spawn);

	String getSpawnName();

	String getSpawnType();

	unsigned long long getSpawnID();

	ResourceSpawn* getSpawnObject();

	void split(int newStackSize);

	void split(int newStackSize, PlayerCreature* player);

	void combine(ResourceContainer* fromContainer);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	ResourceContainer(DummyConstructorParameter* param);

	virtual ~ResourceContainer();

	String _return_getSpawnName;
	String _return_getSpawnType;

	friend class ResourceContainerHelper;
};

} // namespace resource
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::resource;

namespace server {
namespace zone {
namespace objects {
namespace resource {

class ResourceContainerImplementation : public TangibleObjectImplementation {
protected:
	ManagedReference<ResourceSpawn* > spawnObject;

	int stackQuantity;

public:
	static const int MAXSIZE = 100000;

	ResourceContainerImplementation();

	ResourceContainerImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void destroyObjectFromDatabase(bool destroyContainedObjects = false);

	void fillAttributeList(AttributeListMessage* msg, PlayerCreature* object);

	void sendBaselinesTo(SceneObject* player);

	void setQuantity(unsigned int newQuantity, bool notifyClient = true);

	bool isResourceContainer();

	int getQuantity();

	int getUseCount();

	void setUseCount(unsigned int newUseCount, bool notifyClient = true);

	void setSpawnObject(ResourceSpawn* spawn);

	String getSpawnName();

	String getSpawnType();

	unsigned long long getSpawnID();

	ResourceSpawn* getSpawnObject();

	void split(int newStackSize);

	void split(int newStackSize, PlayerCreature* player);

	void combine(ResourceContainer* fromContainer);

	WeakReference<ResourceContainer*> _this;

	operator const ResourceContainer*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~ResourceContainerImplementation();

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

	friend class ResourceContainer;
};

class ResourceContainerAdapter : public TangibleObjectAdapter {
public:
	ResourceContainerAdapter(ResourceContainerImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void destroyObjectFromDatabase(bool destroyContainedObjects);

	void sendBaselinesTo(SceneObject* player);

	void setQuantity(unsigned int newQuantity, bool notifyClient);

	bool isResourceContainer();

	int getQuantity();

	int getUseCount();

	void setUseCount(unsigned int newUseCount, bool notifyClient);

	void setSpawnObject(ResourceSpawn* spawn);

	String getSpawnName();

	String getSpawnType();

	unsigned long long getSpawnID();

	ResourceSpawn* getSpawnObject();

	void split(int newStackSize);

	void split(int newStackSize, PlayerCreature* player);

	void combine(ResourceContainer* fromContainer);

};

class ResourceContainerHelper : public DistributedObjectClassHelper, public Singleton<ResourceContainerHelper> {
	static ResourceContainerHelper* staticInitializer;

public:
	ResourceContainerHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ResourceContainerHelper>;
};

} // namespace resource
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::resource;

#endif /*RESOURCECONTAINER_H_*/
