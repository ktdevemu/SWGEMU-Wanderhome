/*
 *	server/zone/managers/player/PlayerManager.h generated by engine3 IDL compiler 0.60
 */

#ifndef PLAYERMANAGER_H_
#define PLAYERMANAGER_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace managers {
namespace objectcontroller {

class ObjectController;

} // namespace objectcontroller
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::objectcontroller;

namespace server {
namespace zone {
namespace objects {
namespace group {

class GroupObject;

} // namespace group
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::group;

namespace server {
namespace zone {

class ZoneProcessServer;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace managers {
namespace object {

class ObjectManager;

} // namespace object
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::object;

namespace server {
namespace zone {
namespace packets {

class MessageCallback;

} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets;

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

class ZoneServer;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace wearables {

class ArmorObject;

} // namespace wearables
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::wearables;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace weapon {

class WeaponObject;

} // namespace weapon
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::weapon;

namespace server {
namespace zone {
namespace objects {
namespace player {

class PlayerObject;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

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
namespace objects {
namespace creature {

class AiAgent;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace tool {

class CraftingStation;

} // namespace tool
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::tool;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace threat {

class ThreatMap;

} // namespace threat
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::threat;

#include "server/zone/managers/player/StartingLocationList.h"

#include "server/zone/managers/player/StartingLocation.h"

#include "server/zone/objects/player/ValidatedPosition.h"

#include "server/zone/managers/player/StartingItemList.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/managers/player/PlayerMap.h"

#include "server/zone/managers/player/CharacterNameMap.h"

#include "engine/log/Logger.h"

#include "engine/lua/Lua.h"

#include "system/util/VectorMap.h"

#include "system/util/SortedVector.h"

#include "engine/core/ManagedObject.h"

#include "engine/util/Observer.h"

#include "engine/util/Observable.h"

#include "engine/util/u3d/Vector3.h"

namespace server {
namespace zone {
namespace managers {
namespace player {

class PlayerManager : public Observer {
public:
	PlayerManager(ZoneServer* zoneServer, ZoneProcessServer* impl);

	void loadNameMap();

	int getHighestBadgeIndex();

	void sendStartingLocationsTo(CreatureObject* player);

	StartingLocation* getStartingLocation(const String& city);

	bool kickUser(const String& name, const String& admin);

	bool createPlayer(MessageCallback* callback);

	bool checkPlayerName(MessageCallback* callback);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	int notifyDestruction(TangibleObject* destructor, TangibleObject* destructedObject, int condition);

	void killPlayer(TangibleObject* attacker, CreatureObject* player, int typeofdeath = 0);

	byte calculateIncapacitationTimer(CreatureObject* player, int condition);

	bool checkEncumbrancies(CreatureObject* player, ArmorObject* armor);

	void applyEncumbrancies(CreatureObject* player, ArmorObject* armor);

	void removeEncumbrancies(CreatureObject* player, ArmorObject* armor);

	void awardBadge(PlayerObject* ghost, unsigned int badge);

	void setExperienceMultiplier(float globalMultiplier);

	void awardExperience(CreatureObject* player, const String& xpType, int amount, bool sendSystemMessage = true, float localMultiplier = 1.0f);

	SortedVector<ManagedReference<SceneObject* > > getInsurableItems(CreatureObject* player, bool onlyInsurable = true);

	void handleAbortTradeMessage(CreatureObject* player);

	void handleAddItemToTradeWindow(CreatureObject* player, unsigned long long itemID);

	void handleGiveMoneyMessage(CreatureObject* player, unsigned int value);

	void handleAcceptTransactionMessage(CreatureObject* player);

	void handleUnAcceptTransactionMessage(CreatureObject* player);

	void handleVerifyTradeMessage(CreatureObject* player);

	bool checkTradeItems(CreatureObject* player, CreatureObject* receiver);

	SceneObject* getInRangeStructureWithAdminRights(CreatureObject* creature, unsigned long long targetID = 0);

	StructureObject* getInRangeOwnedStructure(CreatureObject* creature, float range = 128);

	void sendBattleFatigueMessage(CreatureObject* player, CreatureObject* target);

	void stopWatch(CreatureObject* creature, unsigned long long entid, bool doSendPackets = true, bool forced = false, bool doLock = true, bool outOfRange = false);

	void stopListen(CreatureObject* creature, unsigned long long entid, bool doSendPackets = true, bool forced = false, bool doLock = true, bool outOfRange = false);

	void startWatch(CreatureObject* creature, unsigned long long entid);

	void startListen(CreatureObject* creature, unsigned long long entid);

	void lootAll(CreatureObject* player, AiAgent* creature);

	int healEnhance(CreatureObject* enhancer, CreatureObject* patient, byte attribute, int buffvalue, float duration);

	void disseminateExperience(TangibleObject* destructedObject, ThreatMap* threatMap);

	bool squadLeaderCheck(CreatureObject* player, GroupObject* group);

	int calculatePlayerLevel(CreatureObject* player);

	void awardSquadLeaderExperience(GroupObject* group, int amount, TangibleObject* source);

	void sendLoginMessage(CreatureObject* player);

	void resendLoginMessageToAll();

	void sendActivateCloneRequest(CreatureObject* player, int typeofdeath = 0);

	void sendPlayerToCloner(CreatureObject* player, unsigned long long clonerID, int typeofdeath = 0);

	bool checkExistentNameInDatabase(const String& firstName);

	TangibleObject* createHairObject(const String& hairObjectFile, const String& hairCustomization);

	bool createAllPlayerObjects(CreatureObject* player);

	void createDefaultPlayerItems(CreatureObject* player, const String& profession, const String& templateFile);

	void createTutorialBuilding(CreatureObject* player);

	void createSkippedTutorialBuilding(CreatureObject* player);

	int checkSpeedHackFirstTest(CreatureObject* player, float parsedSpeed, ValidatedPosition& teleportPosition, float errorMultiplier = 1);

	int checkSpeedHackSecondTest(CreatureObject* player, float newX, float newZ, float newY, unsigned int newStamp, SceneObject* newParent = NULL);

	bool existsName(const String& name);

	unsigned long long getObjectID(const String& name);

	CreatureObject* getPlayer(const String& name);

	void updateAdminLevel(CreatureObject* player, const String& targetName, int adminLevel = 1);

	void generateHologrindSkills(CreatureObject* player);

	void addPlayer(CreatureObject* player);

	String getBadgeKey(int idx);

	CraftingStation* getNearbyCraftingStation(CreatureObject* player, int type);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	PlayerManager(DummyConstructorParameter* param);

	virtual ~PlayerManager();

	String _return_getBadgeKey;

	friend class PlayerManagerHelper;
};

} // namespace player
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::player;

namespace server {
namespace zone {
namespace managers {
namespace player {

class PlayerManagerImplementation : public ObserverImplementation, public Logger {
	ManagedReference<ZoneProcessServer* > processor;

	VectorMap<int, String> badgeMap;

	int highestBadgeIndex;

	ManagedWeakReference<ZoneServer* > server;

	Reference<PlayerMap* > playerMap;

	Reference<CharacterNameMap* > nameMap;

	float globalExpMultiplier;

public:
	Reference<StartingItemList* > startingItemList;

private:
	StartingLocationList startingLocationList;

public:
	PlayerManagerImplementation(ZoneServer* zoneServer, ZoneProcessServer* impl);

	PlayerManagerImplementation(DummyConstructorParameter* param);

	void loadNameMap();

private:
	void loadStartingItems();

	void loadStartingLocations();

	void loadBadgeMap();

public:
	int getHighestBadgeIndex();

	void finalize();

	void sendStartingLocationsTo(CreatureObject* player);

	StartingLocation* getStartingLocation(const String& city);

	bool kickUser(const String& name, const String& admin);

	bool createPlayer(MessageCallback* callback);

	bool checkPlayerName(MessageCallback* callback);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	int notifyDestruction(TangibleObject* destructor, TangibleObject* destructedObject, int condition);

	void killPlayer(TangibleObject* attacker, CreatureObject* player, int typeofdeath = 0);

	byte calculateIncapacitationTimer(CreatureObject* player, int condition);

	bool checkEncumbrancies(CreatureObject* player, ArmorObject* armor);

	void applyEncumbrancies(CreatureObject* player, ArmorObject* armor);

	void removeEncumbrancies(CreatureObject* player, ArmorObject* armor);

	void awardBadge(PlayerObject* ghost, unsigned int badge);

	void setExperienceMultiplier(float globalMultiplier);

	void awardExperience(CreatureObject* player, const String& xpType, int amount, bool sendSystemMessage = true, float localMultiplier = 1.0f);

	SortedVector<ManagedReference<SceneObject* > > getInsurableItems(CreatureObject* player, bool onlyInsurable = true);

	void handleAbortTradeMessage(CreatureObject* player);

	void handleAddItemToTradeWindow(CreatureObject* player, unsigned long long itemID);

	void handleGiveMoneyMessage(CreatureObject* player, unsigned int value);

	void handleAcceptTransactionMessage(CreatureObject* player);

	void handleUnAcceptTransactionMessage(CreatureObject* player);

	void handleVerifyTradeMessage(CreatureObject* player);

	bool checkTradeItems(CreatureObject* player, CreatureObject* receiver);

	SceneObject* getInRangeStructureWithAdminRights(CreatureObject* creature, unsigned long long targetID = 0);

	StructureObject* getInRangeOwnedStructure(CreatureObject* creature, float range = 128);

	void sendBattleFatigueMessage(CreatureObject* player, CreatureObject* target);

	void stopWatch(CreatureObject* creature, unsigned long long entid, bool doSendPackets = true, bool forced = false, bool doLock = true, bool outOfRange = false);

	void stopListen(CreatureObject* creature, unsigned long long entid, bool doSendPackets = true, bool forced = false, bool doLock = true, bool outOfRange = false);

	void startWatch(CreatureObject* creature, unsigned long long entid);

	void startListen(CreatureObject* creature, unsigned long long entid);

	void lootAll(CreatureObject* player, AiAgent* creature);

	int healEnhance(CreatureObject* enhancer, CreatureObject* patient, byte attribute, int buffvalue, float duration);

	void disseminateExperience(TangibleObject* destructedObject, ThreatMap* threatMap);

	bool squadLeaderCheck(CreatureObject* player, GroupObject* group);

	int calculatePlayerLevel(CreatureObject* player);

	void awardSquadLeaderExperience(GroupObject* group, int amount, TangibleObject* source);

	void sendLoginMessage(CreatureObject* player);

	void resendLoginMessageToAll();

	void sendActivateCloneRequest(CreatureObject* player, int typeofdeath = 0);

	void sendPlayerToCloner(CreatureObject* player, unsigned long long clonerID, int typeofdeath = 0);

	bool checkExistentNameInDatabase(const String& firstName);

	TangibleObject* createHairObject(const String& hairObjectFile, const String& hairCustomization);

	bool createAllPlayerObjects(CreatureObject* player);

	void createDefaultPlayerItems(CreatureObject* player, const String& profession, const String& templateFile);

	void createTutorialBuilding(CreatureObject* player);

	void createSkippedTutorialBuilding(CreatureObject* player);

	int checkSpeedHackFirstTest(CreatureObject* player, float parsedSpeed, ValidatedPosition& teleportPosition, float errorMultiplier = 1);

	int checkSpeedHackSecondTest(CreatureObject* player, float newX, float newZ, float newY, unsigned int newStamp, SceneObject* newParent = NULL);

	bool existsName(const String& name);

	unsigned long long getObjectID(const String& name);

	CreatureObject* getPlayer(const String& name);

	void updateAdminLevel(CreatureObject* player, const String& targetName, int adminLevel = 1);

	void generateHologrindSkills(CreatureObject* player);

	void addPlayer(CreatureObject* player);

	String getBadgeKey(int idx);

	CraftingStation* getNearbyCraftingStation(CreatureObject* player, int type);

	WeakReference<PlayerManager*> _this;

	operator const PlayerManager*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~PlayerManagerImplementation();

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

	friend class PlayerManager;
};

class PlayerManagerAdapter : public ObserverAdapter {
public:
	PlayerManagerAdapter(PlayerManager* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void loadNameMap();

	int getHighestBadgeIndex();

	void finalize();

	bool kickUser(const String& name, const String& admin);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	int notifyDestruction(TangibleObject* destructor, TangibleObject* destructedObject, int condition);

	void killPlayer(TangibleObject* attacker, CreatureObject* player, int typeofdeath);

	byte calculateIncapacitationTimer(CreatureObject* player, int condition);

	bool checkEncumbrancies(CreatureObject* player, ArmorObject* armor);

	void applyEncumbrancies(CreatureObject* player, ArmorObject* armor);

	void removeEncumbrancies(CreatureObject* player, ArmorObject* armor);

	void awardBadge(PlayerObject* ghost, unsigned int badge);

	void setExperienceMultiplier(float globalMultiplier);

	void awardExperience(CreatureObject* player, const String& xpType, int amount, bool sendSystemMessage, float localMultiplier);

	void handleAbortTradeMessage(CreatureObject* player);

	void handleAddItemToTradeWindow(CreatureObject* player, unsigned long long itemID);

	void handleGiveMoneyMessage(CreatureObject* player, unsigned int value);

	void handleAcceptTransactionMessage(CreatureObject* player);

	void handleUnAcceptTransactionMessage(CreatureObject* player);

	void handleVerifyTradeMessage(CreatureObject* player);

	bool checkTradeItems(CreatureObject* player, CreatureObject* receiver);

	SceneObject* getInRangeStructureWithAdminRights(CreatureObject* creature, unsigned long long targetID);

	StructureObject* getInRangeOwnedStructure(CreatureObject* creature, float range);

	void sendBattleFatigueMessage(CreatureObject* player, CreatureObject* target);

	void stopWatch(CreatureObject* creature, unsigned long long entid, bool doSendPackets, bool forced, bool doLock, bool outOfRange);

	void stopListen(CreatureObject* creature, unsigned long long entid, bool doSendPackets, bool forced, bool doLock, bool outOfRange);

	void startWatch(CreatureObject* creature, unsigned long long entid);

	void startListen(CreatureObject* creature, unsigned long long entid);

	void lootAll(CreatureObject* player, AiAgent* creature);

	int healEnhance(CreatureObject* enhancer, CreatureObject* patient, byte attribute, int buffvalue, float duration);

	bool squadLeaderCheck(CreatureObject* player, GroupObject* group);

	int calculatePlayerLevel(CreatureObject* player);

	void awardSquadLeaderExperience(GroupObject* group, int amount, TangibleObject* source);

	void sendLoginMessage(CreatureObject* player);

	void resendLoginMessageToAll();

	void sendActivateCloneRequest(CreatureObject* player, int typeofdeath);

	void sendPlayerToCloner(CreatureObject* player, unsigned long long clonerID, int typeofdeath);

	bool checkExistentNameInDatabase(const String& firstName);

	TangibleObject* createHairObject(const String& hairObjectFile, const String& hairCustomization);

	bool createAllPlayerObjects(CreatureObject* player);

	void createDefaultPlayerItems(CreatureObject* player, const String& profession, const String& templateFile);

	void createTutorialBuilding(CreatureObject* player);

	void createSkippedTutorialBuilding(CreatureObject* player);

	int checkSpeedHackSecondTest(CreatureObject* player, float newX, float newZ, float newY, unsigned int newStamp, SceneObject* newParent);

	bool existsName(const String& name);

	unsigned long long getObjectID(const String& name);

	CreatureObject* getPlayer(const String& name);

	void updateAdminLevel(CreatureObject* player, const String& targetName, int adminLevel);

	void generateHologrindSkills(CreatureObject* player);

	void addPlayer(CreatureObject* player);

	String getBadgeKey(int idx);

	CraftingStation* getNearbyCraftingStation(CreatureObject* player, int type);

protected:
	String _param0_kickUser__String_String_;
	String _param1_kickUser__String_String_;
	String _param1_awardExperience__CreatureObject_String_int_bool_float_;
	String _param0_checkExistentNameInDatabase__String_;
	String _param0_createHairObject__String_String_;
	String _param1_createHairObject__String_String_;
	String _param1_createDefaultPlayerItems__CreatureObject_String_String_;
	String _param2_createDefaultPlayerItems__CreatureObject_String_String_;
	String _param0_existsName__String_;
	String _param0_getObjectID__String_;
	String _param0_getPlayer__String_;
	String _param1_updateAdminLevel__CreatureObject_String_int_;
};

class PlayerManagerHelper : public DistributedObjectClassHelper, public Singleton<PlayerManagerHelper> {
	static PlayerManagerHelper* staticInitializer;

public:
	PlayerManagerHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<PlayerManagerHelper>;
};

} // namespace player
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::player;

#endif /*PLAYERMANAGER_H_*/
