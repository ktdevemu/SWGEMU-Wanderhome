/*
 *	server/zone/objects/tangible/deed/building/BuildingDeed.h generated by engine3 IDL compiler 0.60
 */

#ifndef BUILDINGDEED_H_
#define BUILDINGDEED_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {

class TangibleObject;

} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible;

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

namespace server {
namespace zone {
namespace packets {
namespace scene {

class AttributeListMessage;

} // namespace scene
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::scene;

#include "engine/lua/LuaObject.h"

#include "server/zone/objects/tangible/deed/Deed.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace deed {

class BuildingDeed : public Deed {
public:
	BuildingDeed();

	void fillAttributeList(AttributeListMessage* alm, CreatureObject* object);

	void initializeTransientMembers();

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void setSurplusMaintenance(unsigned int surplusMaint);

	unsigned int getSurplusMaintenance();

	bool isBuildingDeed();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	BuildingDeed(DummyConstructorParameter* param);

	virtual ~BuildingDeed();

	friend class BuildingDeedHelper;
};

} // namespace deed
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::deed;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace deed {

class BuildingDeedImplementation : public DeedImplementation {
protected:
	unsigned int surplusMaintenance;

public:
	BuildingDeedImplementation();

	BuildingDeedImplementation(DummyConstructorParameter* param);

	void fillAttributeList(AttributeListMessage* alm, CreatureObject* object);

	void initializeTransientMembers();

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void setSurplusMaintenance(unsigned int surplusMaint);

	unsigned int getSurplusMaintenance();

	bool isBuildingDeed();

	WeakReference<BuildingDeed*> _this;

	operator const BuildingDeed*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~BuildingDeedImplementation();

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

	friend class BuildingDeed;
};

class BuildingDeedAdapter : public DeedAdapter {
public:
	BuildingDeedAdapter(BuildingDeedImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void setSurplusMaintenance(unsigned int surplusMaint);

	unsigned int getSurplusMaintenance();

	bool isBuildingDeed();

};

class BuildingDeedHelper : public DistributedObjectClassHelper, public Singleton<BuildingDeedHelper> {
	static BuildingDeedHelper* staticInitializer;

public:
	BuildingDeedHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<BuildingDeedHelper>;
};

} // namespace deed
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::deed;

#endif /*BUILDINGDEED_H_*/
