/*
 *	server/zone/objects/tangible/terminal/mission/MissionTerminal.h generated by engine3 IDL compiler 0.60
 */

#ifndef MISSIONTERMINAL_H_
#define MISSIONTERMINAL_H_

#include "engine/orb/DistributedObjectBroker.h"

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
namespace player {

class PlayerCreature;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

#include "server/zone/objects/tangible/terminal/Terminal.h"

#include "engine/lua/LuaObject.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace terminal {
namespace mission {

class MissionTerminal : public Terminal {
public:
	MissionTerminal();

	void initializeTransientMembers();

protected:
	MissionTerminal(DummyConstructorParameter* param);

	virtual ~MissionTerminal();

	friend class MissionTerminalHelper;
};

} // namespace mission
} // namespace terminal
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::terminal::mission;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace terminal {
namespace mission {

class MissionTerminalImplementation : public TerminalImplementation {

public:
	MissionTerminalImplementation();

	MissionTerminalImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	MissionTerminal* _this;

	operator const MissionTerminal*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~MissionTerminalImplementation();

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

	friend class MissionTerminal;
};

class MissionTerminalAdapter : public TerminalAdapter {
public:
	MissionTerminalAdapter(MissionTerminalImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

};

class MissionTerminalHelper : public DistributedObjectClassHelper, public Singleton<MissionTerminalHelper> {
	static MissionTerminalHelper* staticInitializer;

public:
	MissionTerminalHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<MissionTerminalHelper>;
};

} // namespace mission
} // namespace terminal
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::terminal::mission;

#endif /*MISSIONTERMINAL_H_*/
