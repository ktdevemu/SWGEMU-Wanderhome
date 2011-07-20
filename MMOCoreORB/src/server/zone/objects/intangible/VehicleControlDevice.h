/*
 *	server/zone/objects/intangible/VehicleControlDevice.h generated by engine3 IDL compiler 0.60
 */

#ifndef VEHICLECONTROLDEVICE_H_
#define VEHICLECONTROLDEVICE_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace intangible {

class IntangibleObject;

} // namespace intangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::intangible;

namespace server {
namespace zone {
namespace objects {
namespace creature {

class VehicleObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

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
namespace objects {
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

#include "server/zone/managers/radial/RadialOptions.h"

#include "engine/lua/LuaObject.h"

#include "server/zone/objects/intangible/ControlDevice.h"

#include "system/lang/System.h"

namespace server {
namespace zone {
namespace objects {
namespace intangible {

class VehicleControlDevice : public ControlDevice {
public:
	VehicleControlDevice();

	void storeObject(CreatureObject* player);

	void generateObject(CreatureObject* player);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void destroyObjectFromDatabase(bool destroyContainedObjects = false);

	int canBeDestroyed(CreatureObject* player);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	VehicleControlDevice(DummyConstructorParameter* param);

	virtual ~VehicleControlDevice();

	friend class VehicleControlDeviceHelper;
};

} // namespace intangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::intangible;

namespace server {
namespace zone {
namespace objects {
namespace intangible {

class VehicleControlDeviceImplementation : public ControlDeviceImplementation {

public:
	VehicleControlDeviceImplementation();

	VehicleControlDeviceImplementation(DummyConstructorParameter* param);

	void storeObject(CreatureObject* player);

	void generateObject(CreatureObject* player);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void destroyObjectFromDatabase(bool destroyContainedObjects = false);

	int canBeDestroyed(CreatureObject* player);

	WeakReference<VehicleControlDevice*> _this;

	operator const VehicleControlDevice*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~VehicleControlDeviceImplementation();

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

	friend class VehicleControlDevice;
};

class VehicleControlDeviceAdapter : public ControlDeviceAdapter {
public:
	VehicleControlDeviceAdapter(VehicleControlDeviceImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void storeObject(CreatureObject* player);

	void generateObject(CreatureObject* player);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void destroyObjectFromDatabase(bool destroyContainedObjects);

	int canBeDestroyed(CreatureObject* player);

};

class VehicleControlDeviceHelper : public DistributedObjectClassHelper, public Singleton<VehicleControlDeviceHelper> {
	static VehicleControlDeviceHelper* staticInitializer;

public:
	VehicleControlDeviceHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<VehicleControlDeviceHelper>;
};

} // namespace intangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::intangible;

#endif /*VEHICLECONTROLDEVICE_H_*/
