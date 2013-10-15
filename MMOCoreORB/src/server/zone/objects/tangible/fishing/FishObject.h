/*
 *	server/zone/objects/tangible/fishing/FishObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef FISHOBJECT_H_
#define FISHOBJECT_H_

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
namespace fishing {

class FishObject : public TangibleObject {
public:
	FishObject();

	void initializeTransientMembers();

	void setAttributes(const String& playerName, const String& terrainN, String& timestamp, float fishLength);

	/**
	 * Fills the radial options
	 * @pre { this object is locked }
	 * @post { this object is locked, menuResponse is complete}
	 * @param menuResponse ObjectMenuResponse that will be sent to the client
	 */
	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	/**
	 * Handles the radial selection sent by the client
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @returns 0 if successfull
	 */
	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	/**
	 * Filet a fish
	 * Takes objects in the Container and sends them to the player invenvotry
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @param player The player to whom to send the items
	 */
	void filet(CreatureObject* player);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	FishObject(DummyConstructorParameter* param);

	virtual ~FishObject();

	friend class FishObjectHelper;
};

} // namespace fishing
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::fishing;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace fishing {

class FishObjectImplementation : public TangibleObjectImplementation {
protected:
	String player;

	String zoneName;

	String timeCaught;

	float length;

public:
	FishObjectImplementation();

	FishObjectImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void setAttributes(const String& playerName, const String& terrainN, String& timestamp, float fishLength);

	/**
	 * Fills the radial options
	 * @pre { this object is locked }
	 * @post { this object is locked, menuResponse is complete}
	 * @param menuResponse ObjectMenuResponse that will be sent to the client
	 */
	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	/**
	 * Handles the radial selection sent by the client
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @returns 0 if successfull
	 */
	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	/**
	 * Filet a fish
	 * Takes objects in the Container and sends them to the player invenvotry
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @param player The player to whom to send the items
	 */
	void filet(CreatureObject* player);

	WeakReference<FishObject*> _this;

	operator const FishObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~FishObjectImplementation();

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

	friend class FishObject;
};

class FishObjectAdapter : public TangibleObjectAdapter {
public:
	FishObjectAdapter(FishObject* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void setAttributes(const String& playerName, const String& terrainN, String& timestamp, float fishLength);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	void filet(CreatureObject* player);

};

class FishObjectHelper : public DistributedObjectClassHelper, public Singleton<FishObjectHelper> {
	static FishObjectHelper* staticInitializer;

public:
	FishObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<FishObjectHelper>;
};

} // namespace fishing
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::fishing;

#endif /*FISHOBJECT_H_*/
