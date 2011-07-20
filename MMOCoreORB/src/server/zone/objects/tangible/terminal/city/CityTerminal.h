/*
 *	server/zone/objects/tangible/terminal/city/CityTerminal.h generated by engine3 IDL compiler 0.60
 */

#ifndef CITYTERMINAL_H_
#define CITYTERMINAL_H_

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
namespace object {

class ObjectMenuResponse;

} // namespace object
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::object;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace objects {
namespace building {
namespace city {

class CityHallObject;

} // namespace city
} // namespace building
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::building::city;

#include "server/zone/objects/tangible/terminal/Terminal.h"

#include "engine/lua/LuaObject.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace terminal {
namespace city {

class CityTerminal : public Terminal {
public:
	CityTerminal();

	void initializeTransientMembers();

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	bool isCityTerminal();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	CityTerminal(DummyConstructorParameter* param);

	virtual ~CityTerminal();

	friend class CityTerminalHelper;
};

} // namespace city
} // namespace terminal
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::terminal::city;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace terminal {
namespace city {

class CityTerminalImplementation : public TerminalImplementation {

public:
	CityTerminalImplementation();

	CityTerminalImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	bool isCityTerminal();

	WeakReference<CityTerminal*> _this;

	operator const CityTerminal*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~CityTerminalImplementation();

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

	friend class CityTerminal;
};

class CityTerminalAdapter : public TerminalAdapter {
public:
	CityTerminalAdapter(CityTerminalImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	bool isCityTerminal();

};

class CityTerminalHelper : public DistributedObjectClassHelper, public Singleton<CityTerminalHelper> {
	static CityTerminalHelper* staticInitializer;

public:
	CityTerminalHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<CityTerminalHelper>;
};

} // namespace city
} // namespace terminal
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::terminal::city;

#endif /*CITYTERMINAL_H_*/
