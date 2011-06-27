/*
 *	server/zone/objects/installation/shuttle/ShuttleInstallation.h generated by engine3 IDL compiler 0.60
 */

#ifndef SHUTTLEINSTALLATION_H_
#define SHUTTLEINSTALLATION_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

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
namespace player {

class PlayerCreature;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

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

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace templates {

class SharedObjectTemplate;

} // namespace templates
} // namespace zone
} // namespace server

using namespace server::zone::templates;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace terminal {
namespace ticketcollector {

class TicketCollector;

} // namespace ticketcollector
} // namespace terminal
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::terminal::ticketcollector;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace terminal {
namespace travel {

class TravelTerminal;

} // namespace travel
} // namespace terminal
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::terminal::travel;

#include "server/zone/objects/installation/InstallationObject.h"

#include "engine/lua/LuaObject.h"

#include "system/util/SortedVector.h"

#include "engine/service/proto/BasePacket.h"

#include "system/lang/ref/Reference.h"

#include "system/util/VectorMap.h"

namespace server {
namespace zone {
namespace objects {
namespace installation {
namespace shuttle {

class ShuttleInstallation : public InstallationObject {
public:
	ShuttleInstallation();

	bool checkRequisitesForPlacement(PlayerCreature* player);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	ShuttleInstallation(DummyConstructorParameter* param);

	virtual ~ShuttleInstallation();

	friend class ShuttleInstallationHelper;
};

} // namespace shuttle
} // namespace installation
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::installation::shuttle;

namespace server {
namespace zone {
namespace objects {
namespace installation {
namespace shuttle {

class ShuttleInstallationImplementation : public InstallationObjectImplementation {

public:
	ShuttleInstallationImplementation();

	ShuttleInstallationImplementation(DummyConstructorParameter* param);

	bool checkRequisitesForPlacement(PlayerCreature* player);

	WeakReference<ShuttleInstallation*> _this;

	operator const ShuttleInstallation*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~ShuttleInstallationImplementation();

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

	friend class ShuttleInstallation;
};

class ShuttleInstallationAdapter : public InstallationObjectAdapter {
public:
	ShuttleInstallationAdapter(ShuttleInstallationImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	bool checkRequisitesForPlacement(PlayerCreature* player);

};

class ShuttleInstallationHelper : public DistributedObjectClassHelper, public Singleton<ShuttleInstallationHelper> {
	static ShuttleInstallationHelper* staticInitializer;

public:
	ShuttleInstallationHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ShuttleInstallationHelper>;
};

} // namespace shuttle
} // namespace installation
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::installation::shuttle;

#endif /*SHUTTLEINSTALLATION_H_*/
