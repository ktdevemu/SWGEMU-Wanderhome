/*
 *	server/zone/objects/tangible/tool/smuggler/PrecisionLaserKnife.h generated by engine3 IDL compiler 0.60
 */

#ifndef PRECISIONLASERKNIFE_H_
#define PRECISIONLASERKNIFE_H_

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
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

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

#include "server/zone/objects/player/PlayerObject.h"

#include "server/zone/objects/manufactureschematic/craftingvalues/CraftingValues.h"

#include "server/zone/objects/tangible/tool/smuggler/SlicingTool.h"

#include "engine/lua/LuaObject.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace tool {
namespace smuggler {

class PrecisionLaserKnife : public SlicingTool {
public:
	PrecisionLaserKnife();

	/**
	 * Handles the radial selection sent by the client, must be overriden by inherited objects
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @param player CreatureObject that selected the option
	 * @param selectedID selected menu id
	 * @returns 0 if successfull
	 */
	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	/**
	 * Fills the attribute list message options that are sent to player creature
	 * @pre { }
	 * @post { }
	 * @param msg attribute list message with the attributes
	 * @param object player creature to which the message is sent
	 */
	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	void updateCraftingValues(CraftingValues* values, bool firstUpdate);

	void updateCharges(int val);

	void useCharge(CreatureObject* player);

	int getCharges();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	PrecisionLaserKnife(DummyConstructorParameter* param);

	virtual ~PrecisionLaserKnife();

	friend class PrecisionLaserKnifeHelper;
};

} // namespace smuggler
} // namespace tool
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::tool::smuggler;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace tool {
namespace smuggler {

class PrecisionLaserKnifeImplementation : public SlicingToolImplementation {
protected:
	int charges;

public:
	PrecisionLaserKnifeImplementation();

	PrecisionLaserKnifeImplementation(DummyConstructorParameter* param);

	/**
	 * Handles the radial selection sent by the client, must be overriden by inherited objects
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @param player CreatureObject that selected the option
	 * @param selectedID selected menu id
	 * @returns 0 if successfull
	 */
	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	/**
	 * Fills the attribute list message options that are sent to player creature
	 * @pre { }
	 * @post { }
	 * @param msg attribute list message with the attributes
	 * @param object player creature to which the message is sent
	 */
	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	void updateCraftingValues(CraftingValues* values, bool firstUpdate);

	void updateCharges(int val);

	void useCharge(CreatureObject* player);

	int getCharges();

	WeakReference<PrecisionLaserKnife*> _this;

	operator const PrecisionLaserKnife*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~PrecisionLaserKnifeImplementation();

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

	friend class PrecisionLaserKnife;
};

class PrecisionLaserKnifeAdapter : public SlicingToolAdapter {
public:
	PrecisionLaserKnifeAdapter(PrecisionLaserKnife* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void updateCharges(int val);

	void useCharge(CreatureObject* player);

	int getCharges();

};

class PrecisionLaserKnifeHelper : public DistributedObjectClassHelper, public Singleton<PrecisionLaserKnifeHelper> {
	static PrecisionLaserKnifeHelper* staticInitializer;

public:
	PrecisionLaserKnifeHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<PrecisionLaserKnifeHelper>;
};

} // namespace smuggler
} // namespace tool
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::tool::smuggler;

#endif /*PRECISIONLASERKNIFE_H_*/
