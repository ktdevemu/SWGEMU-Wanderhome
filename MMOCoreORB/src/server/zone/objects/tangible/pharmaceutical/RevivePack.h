/*
 *	server/zone/objects/tangible/pharmaceutical/RevivePack.h generated by engine3 IDL compiler 0.60
 */

#ifndef REVIVEPACK_H_
#define REVIVEPACK_H_

#include "engine/orb/DistributedObjectBroker.h"

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
namespace packets {
namespace scene {

class AttributeListMessage;

} // namespace scene
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::scene;

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

class ZoneServer;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace objects {
namespace manufactureschematic {

class ManufactureSchematic;

} // namespace manufactureschematic
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::manufactureschematic;

#include "server/zone/objects/manufactureschematic/craftingvalues/CraftingValues.h"

#include "engine/lua/LuaObject.h"

#include "server/zone/objects/tangible/pharmaceutical/PharmaceuticalObject.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace pharmaceutical {

class RevivePack : public PharmaceuticalObject {
public:
	RevivePack();

	void updateCraftingValues(ManufactureSchematic* schematic);

	void fillAttributeList(AttributeListMessage* msg, PlayerCreature* object);

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	float getHealthWoundHealed();

	float getHealthHealed();

	float getActionWoundHealed();

	float getActionHealed();

	float getMindWoundHealed();

	float getMindHealed();

	bool isRevivePack();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	RevivePack(DummyConstructorParameter* param);

	virtual ~RevivePack();

	friend class RevivePackHelper;
};

} // namespace pharmaceutical
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::pharmaceutical;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace pharmaceutical {

class RevivePackImplementation : public PharmaceuticalObjectImplementation {
protected:
	float healthWoundHealed;

	float healthHealed;

	float actionWoundHealed;

	float actionHealed;

	float mindWoundHealed;

	float mindHealed;

public:
	RevivePackImplementation();

	RevivePackImplementation(DummyConstructorParameter* param);

	void updateCraftingValues(ManufactureSchematic* schematic);

	void fillAttributeList(AttributeListMessage* msg, PlayerCreature* object);

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	float getHealthWoundHealed();

	float getHealthHealed();

	float getActionWoundHealed();

	float getActionHealed();

	float getMindWoundHealed();

	float getMindHealed();

	bool isRevivePack();

	RevivePack* _this;

	operator const RevivePack*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~RevivePackImplementation();

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

	friend class RevivePack;
};

class RevivePackAdapter : public PharmaceuticalObjectAdapter {
public:
	RevivePackAdapter(RevivePackImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	float getHealthWoundHealed();

	float getHealthHealed();

	float getActionWoundHealed();

	float getActionHealed();

	float getMindWoundHealed();

	float getMindHealed();

	bool isRevivePack();

};

class RevivePackHelper : public DistributedObjectClassHelper, public Singleton<RevivePackHelper> {
	static RevivePackHelper* staticInitializer;

public:
	RevivePackHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<RevivePackHelper>;
};

} // namespace pharmaceutical
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::pharmaceutical;

#endif /*REVIVEPACK_H_*/
