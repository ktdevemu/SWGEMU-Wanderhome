/*
 *	server/zone/objects/creature/shuttle/ShuttleCreature.h generated by engine3 IDL compiler 0.60
 */

#ifndef SHUTTLECREATURE_H_
#define SHUTTLECREATURE_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

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
namespace objects {
namespace tangible {
namespace ticket {

class TicketObject;

} // namespace ticket
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::ticket;

namespace server {
namespace zone {
namespace managers {
namespace planet {

class PlanetManager;

} // namespace planet
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::planet;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class ZoneServer;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace shuttle {

class ShuttleLandingEvent;

} // namespace shuttle
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::shuttle;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace shuttle {

class ShuttleTakeOffEvent;

} // namespace shuttle
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::shuttle;

#include "engine/core/ManagedObject.h"

#include "engine/lua/LuaObject.h"

#include "system/util/Vector.h"

#include "system/lang/Time.h"

#include "system/util/SortedVector.h"

#include "server/zone/objects/creature/NonPlayerCreatureObject.h"

#include "system/lang/ref/Reference.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace shuttle {

class ShuttleCreature : public NonPlayerCreatureObject {
public:
	ShuttleCreature();

	void doTakeOff();

	void doLanding();

	void activateRecovery();

	bool isAttackableBy(CreatureObject* object);

	void sendPlayerTo(PlayerCreature* player, TicketObject* ticket);

	int getArrivalTime();

	long long getLandingTime();

	void getArrivalPoint(float& x, float& y, float& z);

	void setArrivalPoint(float x, float y, float z);

	void setStarport(bool st);

	void setPlanet(const String& plan);

	void setCity(const String& cit);

	void setTax(unsigned int t);

	String getPlanet();

	String getCity();

	unsigned int getTax();

	bool isStarport();

	bool isShuttleCreature();

protected:
	ShuttleCreature(DummyConstructorParameter* param);

	virtual ~ShuttleCreature();

	String _return_getCity;
	String _return_getPlanet;

	friend class ShuttleCreatureHelper;
};

} // namespace shuttle
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::shuttle;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace shuttle {

class ShuttleCreatureImplementation : public NonPlayerCreatureObjectImplementation {
protected:
	String planet;

	String city;

	unsigned int tax;

	bool starport;

	float arrivalPositionX;

	float arrivalPositionZ;

	float arrivalPositionY;

	Reference<ShuttleLandingEvent*> shuttleLandingEvent;

	Reference<ShuttleTakeOffEvent*> shuttleTakeOffEvent;

public:
	ShuttleCreatureImplementation();

	ShuttleCreatureImplementation(DummyConstructorParameter* param);

	void doTakeOff();

	void doLanding();

	void activateRecovery();

	bool isAttackableBy(CreatureObject* object);

	void sendPlayerTo(PlayerCreature* player, TicketObject* ticket);

	int getArrivalTime();

	long long getLandingTime();

	void getArrivalPoint(float& x, float& y, float& z);

	void setArrivalPoint(float x, float y, float z);

	void setStarport(bool st);

	void setPlanet(const String& plan);

	void setCity(const String& cit);

	void setTax(unsigned int t);

	String getPlanet();

	String getCity();

	unsigned int getTax();

	bool isStarport();

	bool isShuttleCreature();

	ShuttleCreature* _this;

	operator const ShuttleCreature*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~ShuttleCreatureImplementation();

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

	friend class ShuttleCreature;
};

class ShuttleCreatureAdapter : public NonPlayerCreatureObjectAdapter {
public:
	ShuttleCreatureAdapter(ShuttleCreatureImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void doTakeOff();

	void doLanding();

	void activateRecovery();

	bool isAttackableBy(CreatureObject* object);

	void sendPlayerTo(PlayerCreature* player, TicketObject* ticket);

	int getArrivalTime();

	long long getLandingTime();

	void setArrivalPoint(float x, float y, float z);

	void setStarport(bool st);

	void setPlanet(const String& plan);

	void setCity(const String& cit);

	void setTax(unsigned int t);

	String getPlanet();

	String getCity();

	unsigned int getTax();

	bool isStarport();

	bool isShuttleCreature();

protected:
	String _param0_setPlanet__String_;
	String _param0_setCity__String_;
};

class ShuttleCreatureHelper : public DistributedObjectClassHelper, public Singleton<ShuttleCreatureHelper> {
	static ShuttleCreatureHelper* staticInitializer;

public:
	ShuttleCreatureHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ShuttleCreatureHelper>;
};

} // namespace shuttle
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::shuttle;

#endif /*SHUTTLECREATURE_H_*/
