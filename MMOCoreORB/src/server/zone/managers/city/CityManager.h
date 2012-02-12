/*
 *	server/zone/managers/city/CityManager.h generated by engine3 IDL compiler 0.60
 */

#ifndef CITYMANAGER_H_
#define CITYMANAGER_H_

#include "engine/core/Core.h"

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
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace chat {

class StringIdChatParameter;

} // namespace chat
} // namespace server

using namespace server::chat;

namespace server {
namespace zone {
namespace objects {
namespace region {

class CityRegion;

} // namespace region
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::region;

#include "engine/core/ManagedService.h"

#include "engine/log/Logger.h"

#include "system/util/SortedVector.h"

#include "system/util/VectorMap.h"

namespace server {
namespace zone {
namespace managers {
namespace city {

class CityManager : public ManagedService {
public:
	static const byte NEWCITY = 0;

	static const byte OUTPOST = 1;

	static const byte VILLAGE = 2;

	static const byte TOWNSHIP = 3;

	static const byte CITY = 4;

	static const byte METROPOLIS = 5;

	CityManager(Zone* zne);

	void loadLuaConfig();

	bool validateCityName(const String& name);

	CityRegion* createCity(CreatureObject* mayor, const String& cityName, float x, float y);

	byte getCitiesAllowed(byte rank);

	int getTotalCities();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	CityManager(DummyConstructorParameter* param);

	virtual ~CityManager();

	friend class CityManagerHelper;
};

} // namespace city
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::city;

namespace server {
namespace zone {
namespace managers {
namespace city {

class CityManagerImplementation : public ManagedServiceImplementation, public Logger {
	ManagedWeakReference<Zone* > zone;

public:
	static Vector<unsigned short> radiusPerRank;

	static Vector<byte> citizensPerRank;

	static int cityUpdateInterval;

	static int newCityGracePeriod;

	VectorMap<String, ManagedReference<CityRegion* > > cities;

private:
	Vector<byte> citiesAllowedPerRank;

	bool configLoaded;

public:
	static const byte NEWCITY = 0;

	static const byte OUTPOST = 1;

	static const byte VILLAGE = 2;

	static const byte TOWNSHIP = 3;

	static const byte CITY = 4;

	static const byte METROPOLIS = 5;

	CityManagerImplementation(Zone* zne);

	CityManagerImplementation(DummyConstructorParameter* param);

	void loadLuaConfig();

	bool validateCityName(const String& name);

	CityRegion* createCity(CreatureObject* mayor, const String& cityName, float x, float y);

	byte getCitiesAllowed(byte rank);

	int getTotalCities();

	WeakReference<CityManager*> _this;

	operator const CityManager*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~CityManagerImplementation();

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

	friend class CityManager;
};

class CityManagerAdapter : public ManagedServiceAdapter {
public:
	CityManagerAdapter(CityManager* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void loadLuaConfig();

	bool validateCityName(const String& name);

	CityRegion* createCity(CreatureObject* mayor, const String& cityName, float x, float y);

	byte getCitiesAllowed(byte rank);

	int getTotalCities();

protected:
	String _param0_validateCityName__String_;
	String _param1_createCity__CreatureObject_String_float_float_;
};

class CityManagerHelper : public DistributedObjectClassHelper, public Singleton<CityManagerHelper> {
	static CityManagerHelper* staticInitializer;

public:
	CityManagerHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<CityManagerHelper>;
};

} // namespace city
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::city;

#endif /*CITYMANAGER_H_*/
