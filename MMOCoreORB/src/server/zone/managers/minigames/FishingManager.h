/*
 *	server/zone/managers/minigames/FishingManager.h generated by engine3 IDL compiler 0.60
 */

#ifndef FISHINGMANAGER_H_
#define FISHINGMANAGER_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

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

class ZoneServer;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

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
namespace fishing {

class FishingPoleObject;

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

class FishingBaitObject;

} // namespace fishing
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::fishing;

namespace server {
namespace zone {
namespace managers {
namespace minigames {
namespace events {

class FishingEvent;

} // namespace events
} // namespace minigames
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::minigames::events;

namespace server {
namespace zone {
namespace managers {
namespace minigames {
namespace events {

class FishingSplashEvent;

} // namespace events
} // namespace minigames
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::minigames::events;

#include "server/zone/objects/scene/SceneObjectObserver.h"

#include "server/zone/objects/scene/CloseContainerObserver.h"

#include "engine/core/ManagedObject.h"

#include "engine/log/Logger.h"

#include "engine/lua/Lua.h"

#include "system/util/VectorMap.h"

#include "system/lang/ref/Reference.h"

namespace server {
namespace zone {
namespace managers {
namespace minigames {

class FishingManager : public ManagedObject {
public:
	static const int NOTFISHING = 0;

	static const int WAITING = 1;

	static const int SNAGGED = 2;

	static const int NIBBLE = 3;

	static const int BITE = 4;

	static const int CATCH = 5;

	static const int REELING = 6;

	static const int REELGAME = 7;

	static const int BLACKFISH = 0;

	static const int BLOWFISH = 1;

	static const int BLUEFISH = 2;

	static const int FAA = 3;

	static const int LAA = 4;

	static const int RAY = 5;

	static const int STRIPED = 6;

	static const int FRESH = 0;

	static const int SOGGY = 4;

	static const int MUSH = 7;

	static const int DONOTHING = 0;

	static const int TUGUP = 1;

	static const int TUGRIGHT = 2;

	static const int TUGLEFT = 3;

	static const int REEL = 4;

	static const int STOPFISHING = 5;

	static const int NOEVENT = 0;

	static const int PROCEED = 20;

	static const int MISHAP = 40;

	FishingManager(ZoneServer* server);

	void initializeBaitStatus();

	void initializeProperty();

	void initializeAction();

	void initializeState();

	void initializeFishType();

	void initializeLoot();

	void initializeColor();

	int notify(SceneObject* sceneObject);

	void checkFishingOnPositionUpdate(PlayerCreature* player);

	int notifyCloseContainer(PlayerCreature* player, SceneObject* container);

	int checkLocation(PlayerCreature* player, int quality, float& x, float& y, float& z);

	int startFishing(PlayerCreature* player);

	void stopFishing(PlayerCreature* player, unsigned int boxID, bool rem);

	void fishingStep(PlayerCreature* player, int nextAction, SceneObject* marker, int fish, unsigned int boxID, String& moodString);

	void success(PlayerCreature* player, int fish, SceneObject* marker, unsigned int boxID);

	String getTime();

	void sendReward(PlayerCreature* player, SceneObject* marker, SceneObject* loot);

	unsigned int createWindow(PlayerCreature* player, unsigned int boxID);

	void closeMenu(PlayerCreature* player, unsigned int boxID);

	int vegetation(SceneObject* marker);

	int density(SceneObject* marker);

	int getFish(PlayerCreature* player);

	int getNextAction(PlayerCreature* player);

	void setNextAction(PlayerCreature* player, int next);

	FishingPoleObject* getPole(PlayerCreature* player);

	FishingBaitObject* getBait(PlayerCreature* player);

	unsigned int getFishBoxID(PlayerCreature* player);

	void setFishBoxID(PlayerCreature* player, unsigned int boxID);

	int getFishingState(PlayerCreature* player);

	void setFishingState(PlayerCreature* player, int state);

	SceneObject* getFishMarker(PlayerCreature* player);

	void setFishMarker(PlayerCreature* player, SceneObject* marker);

	void cheat(PlayerCreature* player, int value);

	void freeBait(PlayerCreature* player);

	void fishingProceed(PlayerCreature* player, int nextAction, SceneObject* marker, int fish, unsigned int boxID, int newstate, bool notifyClient, String& moodString);

	void mishapEvent(const String& text, PlayerCreature* player, unsigned int boxID, bool losebait, String& moodString);

	bool loseBait(PlayerCreature* player);

	void animate(PlayerCreature* player, int nextAction);

	SceneObject* createMarker(float x, float y, float z, Zone* zone);

	void createSplash(float x, float y, float z, Zone* zone, PlayerCreature* player);

	bool checkUpdateMarker(PlayerCreature* player, float& x, float& y, float& z);

	SceneObject* updateMarker(PlayerCreature* player, SceneObject* marker, bool notifyPlayer);

	void removeMarker(PlayerCreature* player, SceneObject* container);

	void removeSplash(SceneObject* splash);

	void createFishingSplashEvent(PlayerCreature* player, ZoneServer* zoneServer, SceneObject* splash);

	void createFishingEvent(PlayerCreature* player, int nextAction, ZoneServer* zoneServer, SceneObject* marker, int sum, unsigned int boxID, int state, String& moodString);

	void stopFishingEvent(PlayerCreature* player);

	FishingEvent* getFishingEvent(PlayerCreature* player);

protected:
	FishingManager(DummyConstructorParameter* param);

	virtual ~FishingManager();

	String _return_getTime;

	friend class FishingManagerHelper;
};

} // namespace minigames
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::minigames;

namespace server {
namespace zone {
namespace managers {
namespace minigames {

class FishingManagerImplementation : public ManagedObjectImplementation, public Logger, public SceneObjectObserver, public CloseContainerObserver {
protected:
	ManagedReference<ZoneServer* > zoneServer;

	Vector<String> miscLoot;

	Vector<String> rareLoot;

	Vector<int> color;

	Vector<String> fishType;

	Vector<String> state;

	Vector<String> action;

	Vector<String> property;

	Vector<String> baitStatus;

public:
	static const int NOTFISHING = 0;

	static const int WAITING = 1;

	static const int SNAGGED = 2;

	static const int NIBBLE = 3;

	static const int BITE = 4;

	static const int CATCH = 5;

	static const int REELING = 6;

	static const int REELGAME = 7;

	static const int BLACKFISH = 0;

	static const int BLOWFISH = 1;

	static const int BLUEFISH = 2;

	static const int FAA = 3;

	static const int LAA = 4;

	static const int RAY = 5;

	static const int STRIPED = 6;

	static const int FRESH = 0;

	static const int SOGGY = 4;

	static const int MUSH = 7;

	static const int DONOTHING = 0;

	static const int TUGUP = 1;

	static const int TUGRIGHT = 2;

	static const int TUGLEFT = 3;

	static const int REEL = 4;

	static const int STOPFISHING = 5;

	static const int NOEVENT = 0;

	static const int PROCEED = 20;

	static const int MISHAP = 40;

	FishingManagerImplementation(ZoneServer* server);

	FishingManagerImplementation(DummyConstructorParameter* param);

	void initializeBaitStatus();

	void initializeProperty();

	void initializeAction();

	void initializeState();

	void initializeFishType();

	void initializeLoot();

	void initializeColor();

	int notify(SceneObject* sceneObject);

	void checkFishingOnPositionUpdate(PlayerCreature* player);

	int notifyCloseContainer(PlayerCreature* player, SceneObject* container);

	int checkLocation(PlayerCreature* player, int quality, float& x, float& y, float& z);

	int startFishing(PlayerCreature* player);

	void stopFishing(PlayerCreature* player, unsigned int boxID, bool rem);

	void fishingStep(PlayerCreature* player, int nextAction, SceneObject* marker, int fish, unsigned int boxID, String& moodString);

	void success(PlayerCreature* player, int fish, SceneObject* marker, unsigned int boxID);

	String getTime();

	void sendReward(PlayerCreature* player, SceneObject* marker, SceneObject* loot);

	unsigned int createWindow(PlayerCreature* player, unsigned int boxID);

	void closeMenu(PlayerCreature* player, unsigned int boxID);

	int vegetation(SceneObject* marker);

	int density(SceneObject* marker);

	int getFish(PlayerCreature* player);

	int getNextAction(PlayerCreature* player);

	void setNextAction(PlayerCreature* player, int next);

	FishingPoleObject* getPole(PlayerCreature* player);

	FishingBaitObject* getBait(PlayerCreature* player);

	unsigned int getFishBoxID(PlayerCreature* player);

	void setFishBoxID(PlayerCreature* player, unsigned int boxID);

	int getFishingState(PlayerCreature* player);

	void setFishingState(PlayerCreature* player, int state);

	SceneObject* getFishMarker(PlayerCreature* player);

	void setFishMarker(PlayerCreature* player, SceneObject* marker);

	void cheat(PlayerCreature* player, int value);

	void freeBait(PlayerCreature* player);

	void fishingProceed(PlayerCreature* player, int nextAction, SceneObject* marker, int fish, unsigned int boxID, int newstate, bool notifyClient, String& moodString);

	void mishapEvent(const String& text, PlayerCreature* player, unsigned int boxID, bool losebait, String& moodString);

	bool loseBait(PlayerCreature* player);

	void animate(PlayerCreature* player, int nextAction);

	SceneObject* createMarker(float x, float y, float z, Zone* zone);

	void createSplash(float x, float y, float z, Zone* zone, PlayerCreature* player);

	bool checkUpdateMarker(PlayerCreature* player, float& x, float& y, float& z);

	SceneObject* updateMarker(PlayerCreature* player, SceneObject* marker, bool notifyPlayer);

	void removeMarker(PlayerCreature* player, SceneObject* container);

	void removeSplash(SceneObject* splash);

	void createFishingSplashEvent(PlayerCreature* player, ZoneServer* zoneServer, SceneObject* splash);

	void createFishingEvent(PlayerCreature* player, int nextAction, ZoneServer* zoneServer, SceneObject* marker, int sum, unsigned int boxID, int state, String& moodString);

	void stopFishingEvent(PlayerCreature* player);

	FishingEvent* getFishingEvent(PlayerCreature* player);

	FishingManager* _this;

	operator const FishingManager*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~FishingManagerImplementation();

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

	friend class FishingManager;
};

class FishingManagerAdapter : public ManagedObjectAdapter {
public:
	FishingManagerAdapter(FishingManagerImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeBaitStatus();

	void initializeProperty();

	void initializeAction();

	void initializeState();

	void initializeFishType();

	void initializeLoot();

	void initializeColor();

	int notify(SceneObject* sceneObject);

	void checkFishingOnPositionUpdate(PlayerCreature* player);

	int notifyCloseContainer(PlayerCreature* player, SceneObject* container);

	int startFishing(PlayerCreature* player);

	void stopFishing(PlayerCreature* player, unsigned int boxID, bool rem);

	void fishingStep(PlayerCreature* player, int nextAction, SceneObject* marker, int fish, unsigned int boxID, String& moodString);

	void success(PlayerCreature* player, int fish, SceneObject* marker, unsigned int boxID);

	String getTime();

	void sendReward(PlayerCreature* player, SceneObject* marker, SceneObject* loot);

	unsigned int createWindow(PlayerCreature* player, unsigned int boxID);

	void closeMenu(PlayerCreature* player, unsigned int boxID);

	int vegetation(SceneObject* marker);

	int density(SceneObject* marker);

	int getFish(PlayerCreature* player);

	int getNextAction(PlayerCreature* player);

	void setNextAction(PlayerCreature* player, int next);

	FishingPoleObject* getPole(PlayerCreature* player);

	FishingBaitObject* getBait(PlayerCreature* player);

	unsigned int getFishBoxID(PlayerCreature* player);

	void setFishBoxID(PlayerCreature* player, unsigned int boxID);

	int getFishingState(PlayerCreature* player);

	void setFishingState(PlayerCreature* player, int state);

	SceneObject* getFishMarker(PlayerCreature* player);

	void setFishMarker(PlayerCreature* player, SceneObject* marker);

	void cheat(PlayerCreature* player, int value);

	void freeBait(PlayerCreature* player);

	void fishingProceed(PlayerCreature* player, int nextAction, SceneObject* marker, int fish, unsigned int boxID, int newstate, bool notifyClient, String& moodString);

	void mishapEvent(const String& text, PlayerCreature* player, unsigned int boxID, bool losebait, String& moodString);

	bool loseBait(PlayerCreature* player);

	void animate(PlayerCreature* player, int nextAction);

	SceneObject* createMarker(float x, float y, float z, Zone* zone);

	void createSplash(float x, float y, float z, Zone* zone, PlayerCreature* player);

	SceneObject* updateMarker(PlayerCreature* player, SceneObject* marker, bool notifyPlayer);

	void removeMarker(PlayerCreature* player, SceneObject* container);

	void removeSplash(SceneObject* splash);

	void createFishingSplashEvent(PlayerCreature* player, ZoneServer* zoneServer, SceneObject* splash);

	void createFishingEvent(PlayerCreature* player, int nextAction, ZoneServer* zoneServer, SceneObject* marker, int sum, unsigned int boxID, int state, String& moodString);

	void stopFishingEvent(PlayerCreature* player);

protected:
	String _param5_fishingStep__PlayerCreature_int_SceneObject_int_int_String_;
	String _param7_fishingProceed__PlayerCreature_int_SceneObject_int_int_int_bool_String_;
	String _param0_mishapEvent__String_PlayerCreature_int_bool_String_;
	String _param4_mishapEvent__String_PlayerCreature_int_bool_String_;
	String _param7_createFishingEvent__PlayerCreature_int_ZoneServer_SceneObject_int_int_int_String_;
};

class FishingManagerHelper : public DistributedObjectClassHelper, public Singleton<FishingManagerHelper> {
	static FishingManagerHelper* staticInitializer;

public:
	FishingManagerHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<FishingManagerHelper>;
};

} // namespace minigames
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::minigames;

#endif /*FISHINGMANAGER_H_*/
