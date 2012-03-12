/*
 *	server/zone/objects/tangible/powerup/PowerupObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef POWERUPOBJECT_H_
#define POWERUPOBJECT_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

#include "server/zone/objects/tangible/powerup/PowerupStatVector.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "engine/lua/LuaObject.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace powerup {

class PowerupObject : public TangibleObject {
public:
	PowerupObject();

	bool isRanged();

	bool isMelee();

	bool isThrown();

	bool isMine();

	void decreaseUses();

	int getUses();

	float getPowerupStat(const String& stat);

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	void updateCraftingValues(CraftingValues* values, bool firstUpdate);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	PowerupObject(DummyConstructorParameter* param);

	virtual ~PowerupObject();

	friend class PowerupObjectHelper;
};

} // namespace powerup
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::powerup;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace powerup {

class PowerupObjectImplementation : public TangibleObjectImplementation {
public:
	static float MAXPRIMARY;

	static float MAXSECONDARY;

protected:
	PowerupStatVector modifiers;

	int uses;

	String type;

public:
	PowerupObjectImplementation();

	PowerupObjectImplementation(DummyConstructorParameter* param);

	bool isRanged();

	bool isMelee();

	bool isThrown();

	bool isMine();

	void decreaseUses();

	int getUses();

	float getPowerupStat(const String& stat);

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	void updateCraftingValues(CraftingValues* values, bool firstUpdate);

	WeakReference<PowerupObject*> _this;

	operator const PowerupObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~PowerupObjectImplementation();

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

	friend class PowerupObject;
};

class PowerupObjectAdapter : public TangibleObjectAdapter {
public:
	PowerupObjectAdapter(PowerupObject* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	bool isRanged();

	bool isMelee();

	bool isThrown();

	bool isMine();

	void decreaseUses();

	int getUses();

	float getPowerupStat(const String& stat);

protected:
	String _param0_getPowerupStat__String_;
};

class PowerupObjectHelper : public DistributedObjectClassHelper, public Singleton<PowerupObjectHelper> {
	static PowerupObjectHelper* staticInitializer;

public:
	PowerupObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<PowerupObjectHelper>;
};

} // namespace powerup
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::powerup;

#endif /*POWERUPOBJECT_H_*/
