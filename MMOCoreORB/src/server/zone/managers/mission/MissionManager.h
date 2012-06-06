/*
 *	server/zone/managers/mission/MissionManager.h generated by engine3 IDL compiler 0.60
 */

#ifndef MISSIONMANAGER_H_
#define MISSIONMANAGER_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {

class ZoneServer;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class ZoneProcessServer;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace objects {
namespace mission {

class MissionObject;

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace terminal {
namespace mission {

class MissionTerminal;

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
namespace managers {
namespace stringid {

class StringIdManager;

} // namespace stringid
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::stringid;

namespace server {
namespace zone {
namespace managers {
namespace creature {

class LairSpawn;

} // namespace creature
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::creature;

namespace server {
namespace zone {
namespace templates {
namespace mobile {

class CreatureTemplate;

} // namespace mobile
} // namespace templates
} // namespace zone
} // namespace server

using namespace server::zone::templates::mobile;

#include "server/zone/managers/mission/LairObjectsToSpawnMap.h"

#include "server/zone/managers/mission/BountyTargetListElement.h"

#include "server/zone/managers/mission/spawnmaps/MissionNpcSpawnMap.h"

#include "server/zone/managers/mission/spawnmaps/NpcSpawnPoint.h"

#include "system/util/SortedVector.h"

#include "engine/util/Observer.h"

#include "system/thread/Mutex.h"

namespace server {
namespace zone {
namespace managers {
namespace mission {

class MissionManager : public Observer {
public:
	unsigned static const int UNKNOWN_TARGET = 0xB911DA26;

	MissionManager(ZoneServer* srv, ZoneProcessServer* impl);

	void loadLuaSettings();

	void handleMissionListRequest(MissionTerminal* missionTerminal, CreatureObject* player, int counter);

	void handleMissionAccept(MissionTerminal* missionTerminal, MissionObject* mission, CreatureObject* player);

	void handleMissionAbort(MissionObject* mission, CreatureObject* player);

	void removeMission(MissionObject* mission, CreatureObject* player);

	void populateMissionList(MissionTerminal* missionTerminal, CreatureObject* player, int counter);

	bool randomGenericDeliverMission(CreatureObject* player, MissionObject* mission, bool inTownMission, const int faction);

	void randomizeGenericBountyMission(CreatureObject* player, MissionObject* mission, const int faction);

	void randomizeGenericCraftingMission(CreatureObject* player, MissionObject* mission, const int faction);

	void randomizeGenericDeliverMission(CreatureObject* player, MissionObject* mission, const int faction);

	void randomizeGenericDestroyMission(CreatureObject* player, MissionObject* mission, const int faction);

	void randomizeGenericEntertainerMission(CreatureObject* player, MissionObject* mission, const int faction, const int missionType);

	void randomizeGenericHuntingMission(CreatureObject* player, MissionObject* mission, const int faction);

	void randomizeGenericReconMission(CreatureObject* player, MissionObject* mission, const int faction);

	void randomizeGenericSurveyMission(CreatureObject* player, MissionObject* mission, const int faction);

	void randomizeSurveyMission(CreatureObject* player, MissionObject* mission);

	void randomizeDestroyMission(CreatureObject* player, MissionObject* mission);

	void randomizeBountyMission(CreatureObject* player, MissionObject* mission);

	void randomizeDeliverMission(CreatureObject* player, MissionObject* mission);

	void randomizeCraftingMission(CreatureObject* player, MissionObject* mission);

	void randomizeHuntingMission(CreatureObject* player, MissionObject* mission);

	void randomizeReconMission(CreatureObject* player, MissionObject* mission);

	void randomizeImperialDestroyMission(CreatureObject* player, MissionObject* mission);

	void randomizeImperialDeliverMission(CreatureObject* player, MissionObject* mission);

	void randomizeImperialCraftingMission(CreatureObject* player, MissionObject* mission);

	void randomizeImperialReconMission(CreatureObject* player, MissionObject* mission);

	void randomizeRebelDestroyMission(CreatureObject* player, MissionObject* mission);

	void randomizeRebelDeliverMission(CreatureObject* player, MissionObject* mission);

	void randomizeRebelCraftingMission(CreatureObject* player, MissionObject* mission);

	void randomizeRebelReconMission(CreatureObject* player, MissionObject* mission);

	void createMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, CreatureObject* player);

	void createSurveyMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, CreatureObject* player);

	void createDestroyMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, CreatureObject* player);

	void createDeliverMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, CreatureObject* player);

	void createEntertainerMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, CreatureObject* player);

	void createHuntingMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, CreatureObject* player);

	void createReconMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, CreatureObject* player);

	void createBountyMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, CreatureObject* player);

	void createCraftingMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, CreatureObject* player);

	NpcSpawnPoint* getRandomFreeNpcSpawnPoint(unsigned const int planetCRC, const float x, const float y, const int spawnType);

	void returnSpawnPoint(NpcSpawnPoint* spawnPoint);

	void createSpawnPoint(CreatureObject* player, const String& spawnTypes);

	LairSpawn* getRandomLairSpawn(CreatureObject* player);

	Vector3 getRandomBountyTargetPosition(CreatureObject* player);

	MissionObject* getBountyHunterMission(CreatureObject* player);

	String getDeliveryMissionFileName(const int faction);

	int getDeliverMissionNumberOfMissions(const int faction);

	int getDeliverMissionSpawnType(const int faction);

	void addPlayerToBountyList(unsigned long long targetId, int reward);

	void removePlayerFromBountyList(unsigned long long targetId);

	void updatePlayerBountyReward(unsigned long long targetId, int reward);

	void addBountyHunterToPlayerBounty(unsigned long long targetId, unsigned long long bountyHunterId);

	void removeBountyHunterFromPlayerBounty(unsigned long long targetId, unsigned long long bountyHunterId);

	BountyTargetListElement* getRandomPlayerBounty(CreatureObject* player);

	void completePlayerBounty(unsigned long long targetId, unsigned long long bountyHunter);

	void failPlayerBountyMission(unsigned long long bountyHunter);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	MissionManager(DummyConstructorParameter* param);

	virtual ~MissionManager();

	friend class MissionManagerHelper;
};

} // namespace mission
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::mission;

namespace server {
namespace zone {
namespace managers {
namespace mission {

class MissionManagerImplementation : public ObserverImplementation, public Logger {
protected:
	ManagedReference<ZoneServer* > server;

private:
	ManagedReference<ZoneProcessServer* > processor;

protected:
	MissionNpcSpawnMap missionNpcSpawnMap;

	Vector<String> craftingMissionItems;

	Vector<String> bhTargetZones;

	VectorMap<unsigned int, Vector<String>*> bhTargetsAtMissionLevel;

	VectorMap<unsigned long long, BountyTargetListElement*> playerBountyList;

	Mutex playerBountyListMutex;

	bool enableFactionalCraftingMissions;

	bool enableFactionalReconMissions;

	bool enableFactionalEntertainerMissions;

public:
	unsigned static const int UNKNOWN_TARGET = 0xB911DA26;

	MissionManagerImplementation(ZoneServer* srv, ZoneProcessServer* impl);

	MissionManagerImplementation(DummyConstructorParameter* param);

	void loadLuaSettings();

	void handleMissionListRequest(MissionTerminal* missionTerminal, CreatureObject* player, int counter);

	void handleMissionAccept(MissionTerminal* missionTerminal, MissionObject* mission, CreatureObject* player);

	void handleMissionAbort(MissionObject* mission, CreatureObject* player);

	void removeMission(MissionObject* mission, CreatureObject* player);

	void populateMissionList(MissionTerminal* missionTerminal, CreatureObject* player, int counter);

	bool randomGenericDeliverMission(CreatureObject* player, MissionObject* mission, bool inTownMission, const int faction);

	void randomizeGenericBountyMission(CreatureObject* player, MissionObject* mission, const int faction);

	void randomizeGenericCraftingMission(CreatureObject* player, MissionObject* mission, const int faction);

	void randomizeGenericDeliverMission(CreatureObject* player, MissionObject* mission, const int faction);

	void randomizeGenericDestroyMission(CreatureObject* player, MissionObject* mission, const int faction);

	void randomizeGenericEntertainerMission(CreatureObject* player, MissionObject* mission, const int faction, const int missionType);

	void randomizeGenericHuntingMission(CreatureObject* player, MissionObject* mission, const int faction);

	void randomizeGenericReconMission(CreatureObject* player, MissionObject* mission, const int faction);

	void randomizeGenericSurveyMission(CreatureObject* player, MissionObject* mission, const int faction);

	void randomizeSurveyMission(CreatureObject* player, MissionObject* mission);

	void randomizeDestroyMission(CreatureObject* player, MissionObject* mission);

	void randomizeBountyMission(CreatureObject* player, MissionObject* mission);

	void randomizeDeliverMission(CreatureObject* player, MissionObject* mission);

	void randomizeCraftingMission(CreatureObject* player, MissionObject* mission);

	void randomizeHuntingMission(CreatureObject* player, MissionObject* mission);

	void randomizeReconMission(CreatureObject* player, MissionObject* mission);

	void randomizeImperialDestroyMission(CreatureObject* player, MissionObject* mission);

	void randomizeImperialDeliverMission(CreatureObject* player, MissionObject* mission);

	void randomizeImperialCraftingMission(CreatureObject* player, MissionObject* mission);

	void randomizeImperialReconMission(CreatureObject* player, MissionObject* mission);

	void randomizeRebelDestroyMission(CreatureObject* player, MissionObject* mission);

	void randomizeRebelDeliverMission(CreatureObject* player, MissionObject* mission);

	void randomizeRebelCraftingMission(CreatureObject* player, MissionObject* mission);

	void randomizeRebelReconMission(CreatureObject* player, MissionObject* mission);

	void createMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, CreatureObject* player);

	void createSurveyMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, CreatureObject* player);

	void createDestroyMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, CreatureObject* player);

	void createDeliverMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, CreatureObject* player);

	void createEntertainerMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, CreatureObject* player);

	void createHuntingMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, CreatureObject* player);

	void createReconMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, CreatureObject* player);

	void createBountyMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, CreatureObject* player);

	void createCraftingMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, CreatureObject* player);

	NpcSpawnPoint* getRandomFreeNpcSpawnPoint(unsigned const int planetCRC, const float x, const float y, const int spawnType);

	void returnSpawnPoint(NpcSpawnPoint* spawnPoint);

	void createSpawnPoint(CreatureObject* player, const String& spawnTypes);

	LairSpawn* getRandomLairSpawn(CreatureObject* player);

	Vector3 getRandomBountyTargetPosition(CreatureObject* player);

	MissionObject* getBountyHunterMission(CreatureObject* player);

	String getDeliveryMissionFileName(const int faction);

	int getDeliverMissionNumberOfMissions(const int faction);

	int getDeliverMissionSpawnType(const int faction);

	void addPlayerToBountyList(unsigned long long targetId, int reward);

	void removePlayerFromBountyList(unsigned long long targetId);

	void updatePlayerBountyReward(unsigned long long targetId, int reward);

	void addBountyHunterToPlayerBounty(unsigned long long targetId, unsigned long long bountyHunterId);

	void removeBountyHunterFromPlayerBounty(unsigned long long targetId, unsigned long long bountyHunterId);

	BountyTargetListElement* getRandomPlayerBounty(CreatureObject* player);

	void completePlayerBounty(unsigned long long targetId, unsigned long long bountyHunter);

	void failPlayerBountyMission(unsigned long long bountyHunter);

	WeakReference<MissionManager*> _this;

	operator const MissionManager*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~MissionManagerImplementation();

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

	friend class MissionManager;
};

class MissionManagerAdapter : public ObserverAdapter {
public:
	MissionManagerAdapter(MissionManager* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void loadLuaSettings();

	void handleMissionListRequest(MissionTerminal* missionTerminal, CreatureObject* player, int counter);

	void handleMissionAccept(MissionTerminal* missionTerminal, MissionObject* mission, CreatureObject* player);

	void handleMissionAbort(MissionObject* mission, CreatureObject* player);

	void removeMission(MissionObject* mission, CreatureObject* player);

	void populateMissionList(MissionTerminal* missionTerminal, CreatureObject* player, int counter);

	bool randomGenericDeliverMission(CreatureObject* player, MissionObject* mission, bool inTownMission, const int faction);

	void randomizeGenericBountyMission(CreatureObject* player, MissionObject* mission, const int faction);

	void randomizeGenericCraftingMission(CreatureObject* player, MissionObject* mission, const int faction);

	void randomizeGenericDeliverMission(CreatureObject* player, MissionObject* mission, const int faction);

	void randomizeGenericDestroyMission(CreatureObject* player, MissionObject* mission, const int faction);

	void randomizeGenericEntertainerMission(CreatureObject* player, MissionObject* mission, const int faction, const int missionType);

	void randomizeGenericHuntingMission(CreatureObject* player, MissionObject* mission, const int faction);

	void randomizeGenericReconMission(CreatureObject* player, MissionObject* mission, const int faction);

	void randomizeGenericSurveyMission(CreatureObject* player, MissionObject* mission, const int faction);

	void randomizeSurveyMission(CreatureObject* player, MissionObject* mission);

	void randomizeDestroyMission(CreatureObject* player, MissionObject* mission);

	void randomizeBountyMission(CreatureObject* player, MissionObject* mission);

	void randomizeDeliverMission(CreatureObject* player, MissionObject* mission);

	void randomizeCraftingMission(CreatureObject* player, MissionObject* mission);

	void randomizeHuntingMission(CreatureObject* player, MissionObject* mission);

	void randomizeReconMission(CreatureObject* player, MissionObject* mission);

	void randomizeImperialDestroyMission(CreatureObject* player, MissionObject* mission);

	void randomizeImperialDeliverMission(CreatureObject* player, MissionObject* mission);

	void randomizeImperialCraftingMission(CreatureObject* player, MissionObject* mission);

	void randomizeImperialReconMission(CreatureObject* player, MissionObject* mission);

	void randomizeRebelDestroyMission(CreatureObject* player, MissionObject* mission);

	void randomizeRebelDeliverMission(CreatureObject* player, MissionObject* mission);

	void randomizeRebelCraftingMission(CreatureObject* player, MissionObject* mission);

	void randomizeRebelReconMission(CreatureObject* player, MissionObject* mission);

	void createMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, CreatureObject* player);

	void createSurveyMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, CreatureObject* player);

	void createDestroyMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, CreatureObject* player);

	void createDeliverMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, CreatureObject* player);

	void createEntertainerMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, CreatureObject* player);

	void createHuntingMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, CreatureObject* player);

	void createReconMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, CreatureObject* player);

	void createBountyMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, CreatureObject* player);

	void createCraftingMissionObjectives(MissionObject* mission, MissionTerminal* missionTerminal, CreatureObject* player);

	NpcSpawnPoint* getRandomFreeNpcSpawnPoint(unsigned const int planetCRC, const float x, const float y, const int spawnType);

	void returnSpawnPoint(NpcSpawnPoint* spawnPoint);

	void createSpawnPoint(CreatureObject* player, const String& spawnTypes);

	MissionObject* getBountyHunterMission(CreatureObject* player);

	String getDeliveryMissionFileName(const int faction);

	int getDeliverMissionNumberOfMissions(const int faction);

	int getDeliverMissionSpawnType(const int faction);

	void addPlayerToBountyList(unsigned long long targetId, int reward);

	void removePlayerFromBountyList(unsigned long long targetId);

	void updatePlayerBountyReward(unsigned long long targetId, int reward);

	void addBountyHunterToPlayerBounty(unsigned long long targetId, unsigned long long bountyHunterId);

	void removeBountyHunterFromPlayerBounty(unsigned long long targetId, unsigned long long bountyHunterId);

	BountyTargetListElement* getRandomPlayerBounty(CreatureObject* player);

	void completePlayerBounty(unsigned long long targetId, unsigned long long bountyHunter);

	void failPlayerBountyMission(unsigned long long bountyHunter);

};

class MissionManagerHelper : public DistributedObjectClassHelper, public Singleton<MissionManagerHelper> {
	static MissionManagerHelper* staticInitializer;

public:
	MissionManagerHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<MissionManagerHelper>;
};

} // namespace mission
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::mission;

#endif /*MISSIONMANAGER_H_*/
