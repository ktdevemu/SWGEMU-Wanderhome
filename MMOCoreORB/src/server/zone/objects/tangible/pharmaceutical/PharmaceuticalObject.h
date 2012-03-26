/*
 *	server/zone/objects/tangible/pharmaceutical/PharmaceuticalObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef PHARMACEUTICALOBJECT_H_
#define PHARMACEUTICALOBJECT_H_

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

#include "server/zone/objects/tangible/TangibleObject.h"

#include "engine/lua/LuaObject.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace pharmaceutical {

class PharmaceuticalObject : public TangibleObject {
public:
	PharmaceuticalObject();

	int getMedicineUseRequired();

	float getRange(CreatureObject* creature = NULL);

	bool isArea();

	float getArea();

	bool isPharmaceuticalObject();

	bool isStimPack();

	bool isRangedStimPack();

	bool isEnhancePack();

	bool isWoundPack();

	bool isCurePack();

	bool isStatePack();

	bool isRevivePack();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	PharmaceuticalObject(DummyConstructorParameter* param);

	virtual ~PharmaceuticalObject();

	friend class PharmaceuticalObjectHelper;
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

class PharmaceuticalObjectImplementation : public TangibleObjectImplementation {
protected:
	int medicineUseRequired;

public:
	PharmaceuticalObjectImplementation();

	PharmaceuticalObjectImplementation(DummyConstructorParameter* param);

	int getMedicineUseRequired();

	virtual float getRange(CreatureObject* creature = NULL);

	virtual bool isArea();

	virtual float getArea();

	bool isPharmaceuticalObject();

	virtual bool isStimPack();

	virtual bool isRangedStimPack();

	virtual bool isEnhancePack();

	virtual bool isWoundPack();

	virtual bool isCurePack();

	virtual bool isStatePack();

	virtual bool isRevivePack();

	WeakReference<PharmaceuticalObject*> _this;

	operator const PharmaceuticalObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~PharmaceuticalObjectImplementation();

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

	friend class PharmaceuticalObject;
};

class PharmaceuticalObjectAdapter : public TangibleObjectAdapter {
public:
	PharmaceuticalObjectAdapter(PharmaceuticalObject* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int getMedicineUseRequired();

	float getRange(CreatureObject* creature);

	bool isArea();

	float getArea();

	bool isPharmaceuticalObject();

	bool isStimPack();

	bool isRangedStimPack();

	bool isEnhancePack();

	bool isWoundPack();

	bool isCurePack();

	bool isStatePack();

	bool isRevivePack();

};

class PharmaceuticalObjectHelper : public DistributedObjectClassHelper, public Singleton<PharmaceuticalObjectHelper> {
	static PharmaceuticalObjectHelper* staticInitializer;

public:
	PharmaceuticalObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<PharmaceuticalObjectHelper>;
};

} // namespace pharmaceutical
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::pharmaceutical;

#endif /*PHARMACEUTICALOBJECT_H_*/
