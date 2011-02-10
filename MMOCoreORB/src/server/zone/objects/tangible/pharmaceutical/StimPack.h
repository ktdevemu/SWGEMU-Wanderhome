/*
 *	server/zone/objects/tangible/pharmaceutical/StimPack.h generated by engine3 IDL compiler 0.60
 */

#ifndef STIMPACK_H_
#define STIMPACK_H_

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

#include "server/zone/templates/tangible/StimPackTemplate.h"

#include "server/zone/objects/manufactureschematic/craftingvalues/CraftingValues.h"

#include "engine/lua/LuaObject.h"

#include "server/zone/objects/tangible/pharmaceutical/PharmaceuticalObject.h"

#include "system/lang/Math.h"

#include "system/lang/String.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace pharmaceutical {

class StimPack : public PharmaceuticalObject {
public:
	StimPack();

	void updateCraftingValues(ManufactureSchematic* schematic);

	void loadTemplateData(SharedObjectTemplate* templateData);

	unsigned int calculatePower(CreatureObject* healer, CreatureObject* patient, bool applyBattleFatigue = true);

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	void fillAttributeList(AttributeListMessage* msg, PlayerCreature* object);

	float getEffectiveness();

	bool isStimPack();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	StimPack(DummyConstructorParameter* param);

	virtual ~StimPack();

	friend class StimPackHelper;
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

class StimPackImplementation : public PharmaceuticalObjectImplementation {
protected:
	float effectiveness;

public:
	StimPackImplementation();

	StimPackImplementation(DummyConstructorParameter* param);

	void updateCraftingValues(ManufactureSchematic* schematic);

	void loadTemplateData(SharedObjectTemplate* templateData);

	virtual unsigned int calculatePower(CreatureObject* healer, CreatureObject* patient, bool applyBattleFatigue = true);

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	void fillAttributeList(AttributeListMessage* msg, PlayerCreature* object);

	float getEffectiveness();

	bool isStimPack();

	StimPack* _this;

	operator const StimPack*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~StimPackImplementation();

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

	friend class StimPack;
};

class StimPackAdapter : public PharmaceuticalObjectAdapter {
public:
	StimPackAdapter(StimPackImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	unsigned int calculatePower(CreatureObject* healer, CreatureObject* patient, bool applyBattleFatigue);

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	float getEffectiveness();

	bool isStimPack();

};

class StimPackHelper : public DistributedObjectClassHelper, public Singleton<StimPackHelper> {
	static StimPackHelper* staticInitializer;

public:
	StimPackHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<StimPackHelper>;
};

} // namespace pharmaceutical
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::pharmaceutical;

#endif /*STIMPACK_H_*/
