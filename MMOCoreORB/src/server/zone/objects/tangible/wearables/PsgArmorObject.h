/*
 *	server/zone/objects/tangible/wearables/PsgArmorObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef PSGARMOROBJECT_H_
#define PSGARMOROBJECT_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

#include "server/zone/objects/manufactureschematic/craftingvalues/CraftingValues.h"

#include "server/zone/objects/tangible/wearables/ArmorObject.h"

#include "engine/lua/LuaObject.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace wearables {

class PsgArmorObject : public ArmorObject {
public:
	PsgArmorObject();

	void initializeTransientMembers();

	bool isPsgArmorObject();

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	void updateCraftingValues(CraftingValues* schematic, bool firstUpdate);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	PsgArmorObject(DummyConstructorParameter* param);

	virtual ~PsgArmorObject();

	friend class PsgArmorObjectHelper;
};

} // namespace wearables
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::wearables;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace wearables {

class PsgArmorObjectImplementation : public ArmorObjectImplementation {

public:
	PsgArmorObjectImplementation();

	PsgArmorObjectImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	bool isPsgArmorObject();

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	void updateCraftingValues(CraftingValues* schematic, bool firstUpdate);

	WeakReference<PsgArmorObject*> _this;

	operator const PsgArmorObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~PsgArmorObjectImplementation();

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
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class PsgArmorObject;
};

class PsgArmorObjectAdapter : public ArmorObjectAdapter {
public:
	PsgArmorObjectAdapter(PsgArmorObject* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	bool isPsgArmorObject();

};

class PsgArmorObjectHelper : public DistributedObjectClassHelper, public Singleton<PsgArmorObjectHelper> {
	static PsgArmorObjectHelper* staticInitializer;

public:
	PsgArmorObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<PsgArmorObjectHelper>;
};

} // namespace wearables
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::wearables;

#endif /*PSGARMOROBJECT_H_*/
