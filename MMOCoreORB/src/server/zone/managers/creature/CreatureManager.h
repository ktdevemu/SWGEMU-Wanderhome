/*
 *	server/zone/managers/creature/CreatureManager.h generated by engine3 IDL compiler 0.55
 */

#ifndef CREATUREMANAGER_H_
#define CREATUREMANAGER_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/util/Coordinate.h"

class Zone;

#include "server/zone/ZoneProcessServerImplementation.h"

class Creature;

class CreatureObject;

class CreatureGroup;

class LairObject;

class TrainerCreature;

class RecruiterCreature;

class ShuttleCreature;

class CreatureManager : public DistributedObjectStub {
public:
	CreatureManager(Zone* zone, ZoneProcessServerImplementation* processor);

	void init();

	void loadCreatures();

	void start();

	void stop();

	void loadTrainers();

	void loadRecruiters();

	void loadBlueFrogs();

	void load(Creature* creature);

	void unloadCreature(Creature* creature);

	bool verifyCreatureSpawn(String& name);

	Creature* spawnCreature(unsigned int objcrc, unsigned long long cellid, float x, float y, int bitmask = 0, bool baby = false, bool doLock = true, float height = 1);

	TrainerCreature* spawnTrainer(const String& profession, const String& stfname, const String& name, int objCrc, unsigned long long cell, float x, float y, float z, float oy, float ow, bool doLock = true);

	ShuttleCreature* spawnShuttle(const String& Planet, const String& City, Coordinate* playerSpawnPoint, unsigned long long cellid, float x, float y, float z, int tax = 0, bool starport = false, bool doLock = true);

	RecruiterCreature* spawnRecruiter(float x, float y, float oY, float oW, unsigned char type = 1, unsigned long long cellid = 0, bool doLock = true);

	LairObject* spawnLair(const String& type, float x, float y, float z, bool doLock = true);

	unsigned int getCreatureCrc(String& name);

	bool hotLoadCreature(String& name);

	void registerFunctions();

	void registerGlobals();

	void loadCreatureFile();

	Creature* getCreature(unsigned long long oid);

	void addCreature(Creature* creature);

	void setGlobalNPCRegen(float value);

	float getGlobalNPCRegen();

protected:
	CreatureManager(DummyConstructorParameter* param);

	virtual ~CreatureManager();

	friend class CreatureManagerHelper;
};

class CreatureManagerImplementation;

class CreatureManagerAdapter : public DistributedObjectAdapter {
public:
	CreatureManagerAdapter(CreatureManagerImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void init();

	void loadCreatures();

	void start();

	void stop();

	void loadTrainers();

	void loadRecruiters();

	void loadBlueFrogs();

	void load(Creature* creature);

	void unloadCreature(Creature* creature);

	bool verifyCreatureSpawn(String& name);

	Creature* spawnCreature(unsigned int objcrc, unsigned long long cellid, float x, float y, int bitmask, bool baby, bool doLock, float height);

	TrainerCreature* spawnTrainer(const String& profession, const String& stfname, const String& name, int objCrc, unsigned long long cell, float x, float y, float z, float oy, float ow, bool doLock);

	ShuttleCreature* spawnShuttle(const String& Planet, const String& City, Coordinate* playerSpawnPoint, unsigned long long cellid, float x, float y, float z, int tax, bool starport, bool doLock);

	RecruiterCreature* spawnRecruiter(float x, float y, float oY, float oW, unsigned char type, unsigned long long cellid, bool doLock);

	LairObject* spawnLair(const String& type, float x, float y, float z, bool doLock);

	unsigned int getCreatureCrc(String& name);

	bool hotLoadCreature(String& name);

	void registerFunctions();

	void registerGlobals();

	void loadCreatureFile();

	Creature* getCreature(unsigned long long oid);

	void addCreature(Creature* creature);

	void setGlobalNPCRegen(float value);

	float getGlobalNPCRegen();

protected:
	String _param0_verifyCreatureSpawn__String_;
	String _param0_spawnTrainer__String_String_String_int_long_float_float_float_float_float_bool_;
	String _param1_spawnTrainer__String_String_String_int_long_float_float_float_float_float_bool_;
	String _param2_spawnTrainer__String_String_String_int_long_float_float_float_float_float_bool_;
	String _param0_spawnShuttle__String_String_Coordinate_long_float_float_float_int_bool_bool_;
	String _param1_spawnShuttle__String_String_Coordinate_long_float_float_float_int_bool_bool_;
	String _param0_spawnLair__String_float_float_float_bool_;
	String _param0_getCreatureCrc__String_;
	String _param0_hotLoadCreature__String_;
};

class CreatureManagerHelper : public DistributedObjectClassHelper, public Singleton<CreatureManagerHelper> {
	static CreatureManagerHelper* staticInitializer;

public:
	CreatureManagerHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<CreatureManagerHelper>;
};

class CreatureManagerServant : public DistributedObjectServant {
public:
	CreatureManager* _this;

public:
	CreatureManagerServant();
	virtual ~CreatureManagerServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*CREATUREMANAGER_H_*/
