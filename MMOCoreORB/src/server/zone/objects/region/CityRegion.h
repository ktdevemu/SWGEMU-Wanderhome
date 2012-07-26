/*
 *	server/zone/objects/region/CityRegion.h generated by engine3 IDL compiler 0.60
 */

#ifndef CITYREGION_H_
#define CITYREGION_H_

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
namespace region {

class Region;

} // namespace region
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::region;

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
namespace structure {

class StructureObject;

} // namespace structure
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::structure;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace managers {
namespace city {

class CityManager;

} // namespace city
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::city;

#include "server/zone/managers/planet/PlanetTravelPoint.h"

#include "server/chat/StringIdChatParameter.h"

#include "server/zone/ZoneReference.h"

#include "server/zone/objects/scene/variables/StringId.h"

#include "system/lang/Time.h"

#include "server/zone/objects/region/CitizenList.h"

#include "server/zone/objects/region/events/CityUpdateEvent.h"

#include "server/zone/objects/region/CityStructureInventory.h"

#include "system/thread/atomic/AtomicInteger.h"

namespace server {
namespace zone {
namespace objects {
namespace region {

class CityRegion : public ManagedObject {
public:
	static const byte RANK_CLIENT = 0;

	static const byte RANK_OUTPOST = 1;

	static const byte RANK_VILLAGE = 2;

	static const byte RANK_TOWNSHIP = 3;

	static const byte RANK_CITY = 4;

	static const byte RANK_METROPOLIS = 5;

	static const byte TAX_PROPERTY = 0;

	static const byte TAX_INCOME = 1;

	static const byte TAX_SALES = 2;

	static const byte TAX_TRAVEL = 3;

	static const byte TAX_GARAGE = 4;

	CityRegion();

	void initialize();

	void initializeTransientMembers();

	void notifyLoadFromDatabase();

	void notifyEnter(SceneObject* object);

	void notifyExit(SceneObject* object);

	Region* addRegion(float x, float y, float radius, bool persistent);

	void rescheduleUpdateEvent(unsigned int seconds);

	void destroyActiveAreas();

	void addMilitiaMember(unsigned long long objectid);

	void removeMilitiaMember(unsigned long long objectid);

	bool isMilitiaMember(unsigned long long objectid);

	void addZoningRights(unsigned long long objectid, unsigned int duration = 86400);

	void removeZoningRights(unsigned long long objectid);

	bool hasZoningRights(unsigned long long objectid);

	bool containsPoint(float x, float y);

	Time* getNextUpdateTime();

	int getCurrentPlayerCount();

	void addCitizen(unsigned long long citizenID);

	void removeCitizen(unsigned long long citizenID);

	void addBannedPlayer(unsigned long long playerid);

	void removeBannedPlayer(unsigned long long playerid);

	bool isCitizen(unsigned long long citizenID);

	int getTimeToUpdate();

	int getCitizenCount();

	byte getCityRank();

	bool isBanned(unsigned long long playerID);

	CitizenList* getCitizenList();

	CitizenList* getMilitiaMembers();

	CitizenList* getBannedPlayers();

	bool isRegistered();

	Zone* getZone();

	String getRegionName();

	unsigned long long getMayorID();

	float getPositionX();

	float getPositionY();

	float getRadius();

	Region* getRegion(int idx);

	int getRegionsCount();

	int getStructuresCount();

	String getCitySpecialization();

	int getCityTreasury();

	bool isMayor(unsigned long long objectid);

	bool isZoningEnabled();

	bool isClientRegion();

	StructureObject* getCityHall();

	void setZone(Zone* zne);

	void setCustomRegionName(const String& name);

	void setCitySpecialization(const String& spec);

	void setRegionName(const String& fullPath);

	void setCityTreasury(int val);

	int addToCityTreasury(int val);

	int subtractFromCityTreasury(int val);

	int getMaxWithdrawal();

	Vector<ManagedReference<TangibleObject* > >* getVendorsInCity();

	void setRegionName(const StringId& name);

	void setCityRank(byte rank);

	void setMayorID(unsigned long long id);

	void setRegistered(bool val);

	void setZoningEnabled(bool val);

	void setRadius(float rad);

	void setCityHall(StructureObject* building);

	void removeShuttleInstallation();

	bool hasShuttleInstallation();

	void setShuttleID(unsigned long long id);

	int getMissionTerminalCount();

	int getDecorationCount();

	int getSkillTrainerCount();

	void addMissionTerminal(SceneObject* mt);

	void addDecoration(SceneObject* deco);

	void addSkillTrainer(SceneObject* trainer);

	void removeMissionTerminal(SceneObject* mt);

	void removeDecoration(SceneObject* deco);

	void removeSkillTrainers(SceneObject* trainer);

	void addBazaar(TangibleObject* ter);

	TangibleObject* getBazaar(int idx);

	int getBazaarCount();

	void removeAllSkillTrainers();

	void removeAllTerminals();

	void updateMilitia();

	void addStructure(StructureObject* structure);

	void removeStructure(StructureObject* structure);

	bool hasUniqueStructure(unsigned int crc);

	void destroyAllStructuresForRank(byte rank);

	void addCandidate(unsigned long long candidateoid);

	void setMayoralVote(unsigned long long voteroid, unsigned long long candidateoid);

	int getCandidateVotes(unsigned long long candidateoid);

	VectorMap<unsigned long long, int>* getCandidates();

	VectorMap<unsigned long long, unsigned long long>* getMayoralVotes();

	void resetCandidates();

	void resetMayoralVotes();

	void removeCandidate(unsigned long long candidateoid);

	bool isCandidate(unsigned long long candidateoid);

	bool isVotingPeriodOver();

	bool isVotingPeriod();

	void resetVotingPeriod();

	bool isLoaded();

	void setLoaded();

	void applySpecializationModifiers(CreatureObject* creature);

	void removeSpecializationModifiers(CreatureObject* creature);

	int getPropertyTax();

	int getIncomeTax();

	int getSalesTax();

	int getTravelTax();

	int getGarageTax();

	int getTax(int tax);

	void setTax(int tax, int value);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	CityRegion(DummyConstructorParameter* param);

	virtual ~CityRegion();

	friend class CityRegionHelper;
};

} // namespace region
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::region;

namespace server {
namespace zone {
namespace objects {
namespace region {

class CityRegionImplementation : public ManagedObjectImplementation, public Logger {
protected:
	ManagedReference<StructureObject* > cityHall;

	StringId regionName;

	VectorMap<unsigned long long, int> candidates;

	VectorMap<unsigned long long, unsigned long long> mayoralVotes;

	AtomicInteger currentPlayers;

	String customRegionName;

	ZoneReference zone;

	SortedVector<ManagedReference<Region* > > regions;

	VectorMap<unsigned long long, unsigned int> zoningRights;

	CitizenList militiaMembers;

	CitizenList citizenList;

	CitizenList bannedList;

	SortedVector<ManagedReference<StructureObject* > > structures;

	SortedVector<ManagedReference<SceneObject* > > cityMissionTerminals;

	SortedVector<ManagedReference<SceneObject* > > cityDecorations;

	SortedVector<ManagedReference<SceneObject* > > citySkillTrainers;

	VectorMap<unsigned long long, ManagedReference<TangibleObject* > > bazaars;

	byte cityRank;

	int cityTreasury;

	unsigned long long mayorID;

	bool zoningEnabled;

	bool registered;

	bool hasShuttle;

	unsigned long long shuttleID;

	bool loaded;

	Vector<int> taxes;

	Time nextUpdateTime;

	Time nextInauguration;

	Reference<CityUpdateEvent* > cityUpdateEvent;

	String citySpecialization;

public:
	static const byte RANK_CLIENT = 0;

	static const byte RANK_OUTPOST = 1;

	static const byte RANK_VILLAGE = 2;

	static const byte RANK_TOWNSHIP = 3;

	static const byte RANK_CITY = 4;

	static const byte RANK_METROPOLIS = 5;

	static const byte TAX_PROPERTY = 0;

	static const byte TAX_INCOME = 1;

	static const byte TAX_SALES = 2;

	static const byte TAX_TRAVEL = 3;

	static const byte TAX_GARAGE = 4;

	CityRegionImplementation();

	CityRegionImplementation(DummyConstructorParameter* param);

	void initialize();

	void initializeTransientMembers();

	void notifyLoadFromDatabase();

	void notifyEnter(SceneObject* object);

	void notifyExit(SceneObject* object);

	Region* addRegion(float x, float y, float radius, bool persistent);

	void rescheduleUpdateEvent(unsigned int seconds);

	void destroyActiveAreas();

	void addMilitiaMember(unsigned long long objectid);

	void removeMilitiaMember(unsigned long long objectid);

	bool isMilitiaMember(unsigned long long objectid);

	void addZoningRights(unsigned long long objectid, unsigned int duration = 86400);

	void removeZoningRights(unsigned long long objectid);

	bool hasZoningRights(unsigned long long objectid);

	bool containsPoint(float x, float y);

	Time* getNextUpdateTime();

	int getCurrentPlayerCount();

	void addCitizen(unsigned long long citizenID);

	void removeCitizen(unsigned long long citizenID);

	void addBannedPlayer(unsigned long long playerid);

	void removeBannedPlayer(unsigned long long playerid);

	bool isCitizen(unsigned long long citizenID);

	int getTimeToUpdate();

	int getCitizenCount();

	byte getCityRank();

	bool isBanned(unsigned long long playerID);

	CitizenList* getCitizenList();

	CitizenList* getMilitiaMembers();

	CitizenList* getBannedPlayers();

	bool isRegistered();

	Zone* getZone();

	String getRegionName();

	unsigned long long getMayorID();

	float getPositionX();

	float getPositionY();

	float getRadius();

	Region* getRegion(int idx);

	int getRegionsCount();

	int getStructuresCount();

	String getCitySpecialization();

	int getCityTreasury();

	bool isMayor(unsigned long long objectid);

	bool isZoningEnabled();

	bool isClientRegion();

	StructureObject* getCityHall();

	void setZone(Zone* zne);

	void setCustomRegionName(const String& name);

	void setCitySpecialization(const String& spec);

	void setRegionName(const String& fullPath);

	void setCityTreasury(int val);

	int addToCityTreasury(int val);

	int subtractFromCityTreasury(int val);

	int getMaxWithdrawal();

	Vector<ManagedReference<TangibleObject* > >* getVendorsInCity();

	void setRegionName(const StringId& name);

	void setCityRank(byte rank);

	void setMayorID(unsigned long long id);

	void setRegistered(bool val);

	void setZoningEnabled(bool val);

	void setRadius(float rad);

	void setCityHall(StructureObject* building);

	void removeShuttleInstallation();

	bool hasShuttleInstallation();

	void setShuttleID(unsigned long long id);

	int getMissionTerminalCount();

	int getDecorationCount();

	int getSkillTrainerCount();

	void addMissionTerminal(SceneObject* mt);

	void addDecoration(SceneObject* deco);

	void addSkillTrainer(SceneObject* trainer);

	void removeMissionTerminal(SceneObject* mt);

	void removeDecoration(SceneObject* deco);

	void removeSkillTrainers(SceneObject* trainer);

	void addBazaar(TangibleObject* ter);

	TangibleObject* getBazaar(int idx);

	int getBazaarCount();

	void removeAllSkillTrainers();

	void removeAllTerminals();

	void updateMilitia();

	void addStructure(StructureObject* structure);

	void removeStructure(StructureObject* structure);

	bool hasUniqueStructure(unsigned int crc);

	void destroyAllStructuresForRank(byte rank);

	void addCandidate(unsigned long long candidateoid);

	void setMayoralVote(unsigned long long voteroid, unsigned long long candidateoid);

	int getCandidateVotes(unsigned long long candidateoid);

	VectorMap<unsigned long long, int>* getCandidates();

	VectorMap<unsigned long long, unsigned long long>* getMayoralVotes();

	void resetCandidates();

	void resetMayoralVotes();

	void removeCandidate(unsigned long long candidateoid);

	bool isCandidate(unsigned long long candidateoid);

	bool isVotingPeriodOver();

	bool isVotingPeriod();

	void resetVotingPeriod();

	bool isLoaded();

	void setLoaded();

	void applySpecializationModifiers(CreatureObject* creature);

	void removeSpecializationModifiers(CreatureObject* creature);

	int getPropertyTax();

	int getIncomeTax();

	int getSalesTax();

	int getTravelTax();

	int getGarageTax();

	int getTax(int tax);

	void setTax(int tax, int value);

	WeakReference<CityRegion*> _this;

	operator const CityRegion*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~CityRegionImplementation();

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

	friend class CityRegion;
};

class CityRegionAdapter : public ManagedObjectAdapter {
public:
	CityRegionAdapter(CityRegion* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initialize();

	void initializeTransientMembers();

	void notifyLoadFromDatabase();

	void notifyEnter(SceneObject* object);

	void notifyExit(SceneObject* object);

	Region* addRegion(float x, float y, float radius, bool persistent);

	void rescheduleUpdateEvent(unsigned int seconds);

	void destroyActiveAreas();

	void addMilitiaMember(unsigned long long objectid);

	void removeMilitiaMember(unsigned long long objectid);

	bool isMilitiaMember(unsigned long long objectid);

	void addZoningRights(unsigned long long objectid, unsigned int duration);

	void removeZoningRights(unsigned long long objectid);

	bool hasZoningRights(unsigned long long objectid);

	bool containsPoint(float x, float y);

	int getCurrentPlayerCount();

	void addCitizen(unsigned long long citizenID);

	void removeCitizen(unsigned long long citizenID);

	void addBannedPlayer(unsigned long long playerid);

	void removeBannedPlayer(unsigned long long playerid);

	bool isCitizen(unsigned long long citizenID);

	int getTimeToUpdate();

	int getCitizenCount();

	byte getCityRank();

	bool isBanned(unsigned long long playerID);

	bool isRegistered();

	Zone* getZone();

	String getRegionName();

	unsigned long long getMayorID();

	float getPositionX();

	float getPositionY();

	float getRadius();

	Region* getRegion(int idx);

	int getRegionsCount();

	int getStructuresCount();

	String getCitySpecialization();

	int getCityTreasury();

	bool isMayor(unsigned long long objectid);

	bool isZoningEnabled();

	bool isClientRegion();

	StructureObject* getCityHall();

	void setZone(Zone* zne);

	void setCustomRegionName(const String& name);

	void setCitySpecialization(const String& spec);

	void setRegionName(const String& fullPath);

	void setCityTreasury(int val);

	int addToCityTreasury(int val);

	int subtractFromCityTreasury(int val);

	int getMaxWithdrawal();

	void setCityRank(byte rank);

	void setMayorID(unsigned long long id);

	void setRegistered(bool val);

	void setZoningEnabled(bool val);

	void setRadius(float rad);

	void setCityHall(StructureObject* building);

	void removeShuttleInstallation();

	bool hasShuttleInstallation();

	void setShuttleID(unsigned long long id);

	int getMissionTerminalCount();

	int getDecorationCount();

	int getSkillTrainerCount();

	void addMissionTerminal(SceneObject* mt);

	void addDecoration(SceneObject* deco);

	void addSkillTrainer(SceneObject* trainer);

	void removeMissionTerminal(SceneObject* mt);

	void removeDecoration(SceneObject* deco);

	void removeSkillTrainers(SceneObject* trainer);

	void addBazaar(TangibleObject* ter);

	TangibleObject* getBazaar(int idx);

	int getBazaarCount();

	void removeAllSkillTrainers();

	void removeAllTerminals();

	void updateMilitia();

	void addStructure(StructureObject* structure);

	void removeStructure(StructureObject* structure);

	bool hasUniqueStructure(unsigned int crc);

	void destroyAllStructuresForRank(byte rank);

	void addCandidate(unsigned long long candidateoid);

	void setMayoralVote(unsigned long long voteroid, unsigned long long candidateoid);

	int getCandidateVotes(unsigned long long candidateoid);

	void resetCandidates();

	void resetMayoralVotes();

	void removeCandidate(unsigned long long candidateoid);

	bool isCandidate(unsigned long long candidateoid);

	bool isVotingPeriodOver();

	bool isVotingPeriod();

	void resetVotingPeriod();

	bool isLoaded();

	void setLoaded();

	void applySpecializationModifiers(CreatureObject* creature);

	void removeSpecializationModifiers(CreatureObject* creature);

	int getPropertyTax();

	int getIncomeTax();

	int getSalesTax();

	int getTravelTax();

	int getGarageTax();

	int getTax(int tax);

	void setTax(int tax, int value);

};

class CityRegionHelper : public DistributedObjectClassHelper, public Singleton<CityRegionHelper> {
	static CityRegionHelper* staticInitializer;

public:
	CityRegionHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<CityRegionHelper>;
};

} // namespace region
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::region;

#endif /*CITYREGION_H_*/
