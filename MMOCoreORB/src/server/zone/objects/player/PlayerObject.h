/*
 *	server/zone/objects/player/PlayerObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef PLAYEROBJECT_H_
#define PLAYEROBJECT_H_

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
namespace objects {
namespace creature {
namespace commands {

class QueueCommand;

} // namespace commands
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::commands;

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
namespace structure {

class StructureObject;

} // namespace structure
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::structure;

namespace server {
namespace zone {

class ZoneClientSession;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace objects {
namespace waypoint {

class WaypointObject;

} // namespace waypoint
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::waypoint;

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
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace chat {
namespace room {

class ChatRoom;

} // namespace room
} // namespace chat
} // namespace server

using namespace server::chat::room;

namespace server {
namespace zone {
namespace objects {
namespace building {

class BuildingObject;

} // namespace building
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::building;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace tool {

class SurveyTool;

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
namespace tool {

class CraftingTool;

} // namespace tool
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::tool;

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace events {

class PlayerDisconnectEvent;

} // namespace events
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::events;

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace events {

class PlayerRecoveryEvent;

} // namespace events
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::events;

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sui {

class SuiBox;

} // namespace sui
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sui;

#include "server/zone/objects/creature/professions/Certification.h"

#include "server/zone/objects/draftschematic/DraftSchematic.h"

#include "server/zone/objects/manufactureschematic/ManufactureSchematic.h"

#include "server/zone/objects/scene/variables/DeltaVectorMap.h"

#include "server/zone/objects/scene/variables/DeltaVector.h"

#include "server/zone/objects/player/variables/WaypointList.h"

#include "server/zone/objects/creature/professions/Skill.h"

#include "server/zone/objects/player/variables/SkillList.h"

#include "server/zone/objects/player/variables/FriendList.h"

#include "server/zone/objects/player/variables/IgnoreList.h"

#include "server/zone/objects/player/variables/SchematicList.h"

#include "server/zone/objects/player/variables/FactionStandingList.h"

#include "server/zone/objects/player/badges/Badges.h"

#include "server/zone/objects/player/TradeContainer.h"

#include "server/zone/objects/player/ValidatedPosition.h"

#include "engine/lua/LuaObject.h"

#include "server/zone/objects/intangible/IntangibleObject.h"

#include "system/util/Vector.h"

#include "system/util/VectorMap.h"

#include "engine/service/proto/BasePacket.h"

#include "engine/service/proto/BaseMessage.h"

#include "system/util/SortedVector.h"

namespace server {
namespace zone {
namespace objects {
namespace player {

class PlayerObject : public IntangibleObject {
public:
	static const int LFG = 1;

	static const int NEWBIEHELPER = 2;

	static const int ROLEPLAYER = 4;

	static const int AFK = 0x80;

	static const int LD = 0x100;

	static const int FACTIONRANK = 0x200;

	static const int ANONYMOUS = 0x80000000;

	static const int NORMALPLAYER = 0;

	static const int CSR = 1;

	static const int DEV = 2;

	static const int ONLINE = 1;

	static const int OFFLINE = 2;

	static const int LINKDEAD = 3;

	static const int LOGGINGIN = 4;

	static const int LOGGINGOUT = 5;

	static const int LOADING = 6;

	PlayerObject();

	void notifyLoadFromDatabase();

	void unload();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void initializeTransientMembers();

	void sendBaselinesTo(SceneObject* player);

	void sendMessage(BasePacket* msg);

	void addOwnedStructure(StructureObject* obj);

	void removeOwnedStructure(StructureObject* obj);

	int getTotalOwnedStructureCount();

	int getLotsRemaining();

	void notifySceneReady();

	int addExperience(const String& xpType, int xp, bool notifyClient = true);

	void removeExperience(const String& xpType, bool notifyClient = true);

	void addWaypoint(WaypointObject* waypoint, bool checkName, bool notifyClient = true);

	void setWaypoint(WaypointObject* waypoint, bool notifyClient = true);

	void addWaypoint(const String& planet, float positionX, float positionY, bool notifyClient = true);

	void removeWaypoint(unsigned long long waypointID, bool notifyClient = true);

	void addSkills(Vector<String>& skills, bool notifyClient = true);

	void addSkills(Vector<Certification*>& skills, bool notifyClient = true);

	void removeSkills(Vector<String>& skills, bool notifyClient = true);

	void removeSkills(Vector<Certification*>& skills, bool notifyClient = true);

	void addSchematics(Vector<ManagedReference<DraftSchematic* > >& schematics, bool notifyClient = true);

	void removeSchematics(Vector<ManagedReference<DraftSchematic* > >& schematics, bool notifyClient = true);

	void addSchematic(DraftSchematic* schematic, bool notifyClient = true);

	void removeSchematic(DraftSchematic* schematic, bool notifyClient = true);

	void setLanguageID(byte language, bool notifyClient = true);

	void addFriend(const String& name, bool notifyClient = true);

	void removeFriend(const String& name, bool notifyClient = true);

	void addIgnore(const String& name, bool notifyClient = true);

	void removeIgnore(const String& name, bool notifyClient = true);

	void setTitle(const String& characterTitle, bool notifyClient = true);

	void setFoodFilling(int newValue, bool notifyClient = true);

	void setDrinkFilling(int newValue, bool notifyClient = true);

	void increaseFactionStanding(const String& factionName, float amount);

	void decreaseFactionStanding(const String& factionName, float amount);

	float getFactionStanding(const String& factionName);

	WaypointObject* getSurveyWaypoint();

	void activateRecovery();

	void doRecovery();

	void disconnect(bool closeClient, bool doLock);

	void reload(ZoneClientSession* client);

	void setOffline();

	void setLinkDead();

	void setOnline();

	void setLoggingOut();

	void sendBadgesResponseTo(CreatureObject* player);

	void logout(bool doLock);

	FactionStandingList* getFactionStandingList();

	void setLastNpcConvStr(const String& conv);

	void setLastNpcConvMessStr(const String& mess);

	String getLastNpcConvStr();

	String getLastNpcConvMessStr();

	String getLastNpcConvOption(int idx);

	void addLastNpcConvOptions(const String& option);

	int countLastNpcConvOptions();

	void clearLastNpcConvOptions();

	void setConversatingCreature(CreatureObject* creature);

	CreatureObject* getConversatingCreature();

	SortedVector<unsigned long long>* getPersistentMessages();

	void addPersistentMessage(unsigned long long id);

	void dropPersistentMessage(unsigned long long id);

	void unloadSpawnedChildren();

	void addToConsentList(const String& name);

	bool hasInConsentList(const String& name);

	void removeFromConsentList(const String& name);

	String getConsentName(int i);

	int getConsentListSize();

	String getFactionRank();

	void setFactionRank(const String& rank);

	void setCommandMessageString(unsigned int actionCRC, String& message);

	void removeCommandMessageString(unsigned int actionCRC);

	BuildingObject* getDeclaredResidence();

	void setDeclaredResidence(BuildingObject* residence);

	void setCloningFacility(BuildingObject* cloningfac);

	BuildingObject* getCloningFacility();

	void notifyOnline();

	void doDigest();

	bool isDigesting();

	String getSavedTerrainName();

	void setSavedParentID(unsigned long long id);

	void setSavedTerrainName(const String& name);

	unsigned long long getSavedParentID();

	unsigned int getNewSuiBoxID(unsigned int type);

	bool hasSuiBox(unsigned int boxID);

	SuiBox* getSuiBox(unsigned int boxID);

	void removeSuiBox(unsigned int boxID, bool closeWindowToClient = false);

	void removeSuiBoxType(unsigned int windowType);

	bool hasSuiBoxWindowType(unsigned int windowType);

	void closeSuiWindowType(unsigned int windowType);

	SuiBox* getSuiBoxFromWindowType(unsigned int windowType);

	void addSuiBox(SuiBox* sui);

	bool isFirstIncapacitationExpired();

	void resetIncapacitationCounter();

	void resetFirstIncapacitationTime();

	void updateIncapacitationCounter();

	bool isFirstIncapacitation();

	byte getIncapacitationCounter();

	void addToDuelList(CreatureObject* targetPlayer);

	void removeFromDuelList(CreatureObject* targetPlayer);

	CreatureObject* getDuelListObject(int index);

	bool requestedDuelTo(CreatureObject* targetPlayer);

	bool isDuelListEmpty();

	int getDuelListSize();

	UnicodeString getBiography();

	void notifyOffline();

	void setBadge(unsigned int badge);

	void awardBadge(unsigned int badge);

	void setSurveyTool(SurveyTool* tool);

	SurveyTool* getSurveyTool();

	CraftingTool* getLastCraftingToolUsed();

	void setLastCraftingToolUsed(CraftingTool* tool);

	void setTeleporting(bool val);

	int getNumBadges();

	int getBadgeTypeCount(byte type);

	bool hasFriend(const String& name);

	bool isIgnoring(const String& name);

	void addReverseFriend(const String& name);

	void removeReverseFriend(const String& name);

	void sendFriendLists();

	bool hasWaypoint(unsigned long long objectID);

	bool hasSkill(const String& skill);

	bool hasCommandMessageString(unsigned int actionCRC);

	unsigned int getCharacterBitmask();

	String getTitle();

	unsigned int getAdminLevel();

	void setAdminLevel(unsigned int adminlvl);

	void setBiography(const UnicodeString& bio);

	bool isDeveloper();

	bool isCSR();

	bool isPrivileged();

	void setCharacterBitmask(unsigned int bitmask);

	bool setCharacterBit(unsigned int bit, bool notifyClient = false);

	bool clearCharacterBit(unsigned int bit, bool notifyClient = false);

	void toggleCharacterBit(unsigned int bit);

	VectorMap<String, int>* getXpTypeCapList();

	DeltaVectorMap<String, int>* getExperienceList();

	int getForcePower();

	int getForcePowerMax();

	WaypointList* getWaypointList();

	SkillList* getSkills();

	SchematicList* getSchematics();

	DraftSchematic* getSchematic(int i);

	Vector<ManagedReference<DraftSchematic* > > filterSchematicList(CreatureObject* player, Vector<unsigned int>* enabledTabs, int complexityLevel);

	int getFoodFilling();

	int getFoodFillingMax();

	int getDrinkFilling();

	int getDrinkFillingMax();

	int getJediState();

	byte getLanguageID();

	DeltaVector<String>* getFriendList();

	bool isTeleporting();

	void addChatRoom(ChatRoom* room);

	void removeChatRoom(ChatRoom* room);

	void clearTradeContainer();

	TradeContainer* getTradeContainer();

	DeltaVector<String>* getIgnoreList();

	int getExperience(const String& xp);

	String getCommandMessageString(unsigned int actionCRC);

	bool hasBadge(unsigned int badge);

	void clearDisconnectEvent();

	void clearRecoveryEvent();

	bool isOnline();

	bool isOffline();

	bool isLoading();

	bool isLinkDead();

	bool isLoggingIn();

	bool isLoggingOut();

	void setSkillPoints(int points);

	void addSkillPoints(int points);

	int getSkillPoints();

	ValidatedPosition* getLastValidatedPosition();

	void updateLastValidatedPosition();

	void setSpawnedBlueFrog();

	bool hasSpawnedBlueFrog();

	unsigned int getAccountID();

	unsigned long long getServerMovementTimeDelta();

	Time* getServerMovementTimeStamp();

	void setClientLastMovementStamp(unsigned int stamp);

	void updateServerLastMovementStamp();

	void setAccountID(unsigned int id);

	int getFactionStatus();

	unsigned int getClientLastMovementStamp();

	void setTeachingOrLearning(bool value);

	bool isTeachingOrLearning();

	int getCenteredBonus();

	void setCenteredBonus(int bonus);

	bool isInvisible();

	void setInvisible(bool invis);

	void setHologrindMask(unsigned int mask);

	unsigned int getHologrindMask();

	byte getRaceID();

	void setRaceID(byte race);

	void setMaximumLots(byte lots);

	byte getMaximumLots();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	PlayerObject(DummyConstructorParameter* param);

	virtual ~PlayerObject();

	String _return_getCommandMessageString;
	String _return_getConsentName;
	String _return_getFactionRank;
	String _return_getLastNpcConvMessStr;
	String _return_getLastNpcConvOption;
	String _return_getLastNpcConvStr;
	String _return_getSavedTerrainName;
	String _return_getTitle;

	UnicodeString _return_getBiography;

	friend class PlayerObjectHelper;
};

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

namespace server {
namespace zone {
namespace objects {
namespace player {

class PlayerObjectImplementation : public IntangibleObjectImplementation {
protected:
	unsigned int characterBitmask;

	String title;

	String savedTerrainName;

	unsigned long long savedParentID;

	Badges badges;

	int forcePower;

	int forcePowerMax;

	int foodFilling;

	int foodFillingMax;

	int drinkFilling;

	int drinkFillingMax;

	bool teleporting;

	SortedVector<ManagedReference<StructureObject* > > ownedStructures;

	byte maximumLots;

	int jediState;

	unsigned int adminLevel;

	byte languageID;

	VectorMap<String, int> xpTypeCapList;

	VectorMap<unsigned int, String> commandMessageStrings;

	DeltaVectorMap<String, int> experienceList;

	WaypointList waypointList;

	SkillList skillList;

	FriendList friendList;

	IgnoreList ignoreList;

	FactionStandingList factionStandingList;

	SchematicList schematicList;

	byte incapacitationCounter;

	unsigned int suiBoxNextID;

	VectorMap<unsigned int, ManagedReference<SuiBox* > > suiBoxes;

	SortedVector<ManagedReference<ChatRoom* > > chatRooms;

	TradeContainer tradeContainer;

	SortedVector<ManagedReference<CreatureObject* > > duelList;

	ManagedWeakReference<BuildingObject* > declaredResidence;

	ManagedWeakReference<BuildingObject* > cloningFacility;

	ManagedWeakReference<SurveyTool* > surveyTool;

	ManagedReference<CraftingTool* > lastCraftingToolUsed;

	SortedVector<unsigned long long> persistentMessages;

	UnicodeString biography;

	SortedVector<String> consentList;

	String lastNpcConvoMessage;

	String lastNpcConvo;

	Vector<String> lastNpcConvoOptions;

	ManagedWeakReference<CreatureObject* > conversatingCreature;

	Reference<PlayerDisconnectEvent*> disconnectEvent;

	Reference<PlayerRecoveryEvent*> recoveryEvent;

	Time logoutTimeStamp;

	int onlineStatus;

	int skillPoints;

	bool teachingOrLearning;

	int pvpRating;

	int factionStatus;

	bool spawnedBlueFrog;

	int centeredBonus;

	bool invisible;

	unsigned int holoMask;

	unsigned int clientLastMovementStamp;

	Time serverLastMovementStamp;

	ValidatedPosition lastValidatedPosition;

	unsigned int accountID;

	byte raceID;

public:
	static const int LFG = 1;

	static const int NEWBIEHELPER = 2;

	static const int ROLEPLAYER = 4;

	static const int AFK = 0x80;

	static const int LD = 0x100;

	static const int FACTIONRANK = 0x200;

	static const int ANONYMOUS = 0x80000000;

	static const int NORMALPLAYER = 0;

	static const int CSR = 1;

	static const int DEV = 2;

	static const int ONLINE = 1;

	static const int OFFLINE = 2;

	static const int LINKDEAD = 3;

	static const int LOGGINGIN = 4;

	static const int LOGGINGOUT = 5;

	static const int LOADING = 6;

	PlayerObjectImplementation();

	PlayerObjectImplementation(DummyConstructorParameter* param);

	void finalize();

	void notifyLoadFromDatabase();

	void unload();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void initializeTransientMembers();

	void sendBaselinesTo(SceneObject* player);

	void sendMessage(BasePacket* msg);

	void addOwnedStructure(StructureObject* obj);

	void removeOwnedStructure(StructureObject* obj);

	int getTotalOwnedStructureCount();

	int getLotsRemaining();

	void notifySceneReady();

	int addExperience(const String& xpType, int xp, bool notifyClient = true);

	void removeExperience(const String& xpType, bool notifyClient = true);

	void addWaypoint(WaypointObject* waypoint, bool checkName, bool notifyClient = true);

	void setWaypoint(WaypointObject* waypoint, bool notifyClient = true);

	void addWaypoint(const String& planet, float positionX, float positionY, bool notifyClient = true);

	void removeWaypoint(unsigned long long waypointID, bool notifyClient = true);

	void addSkills(Vector<String>& skills, bool notifyClient = true);

	void addSkills(Vector<Certification*>& skills, bool notifyClient = true);

	void removeSkills(Vector<String>& skills, bool notifyClient = true);

	void removeSkills(Vector<Certification*>& skills, bool notifyClient = true);

	void addSchematics(Vector<ManagedReference<DraftSchematic* > >& schematics, bool notifyClient = true);

	void removeSchematics(Vector<ManagedReference<DraftSchematic* > >& schematics, bool notifyClient = true);

	void addSchematic(DraftSchematic* schematic, bool notifyClient = true);

	void removeSchematic(DraftSchematic* schematic, bool notifyClient = true);

	void setLanguageID(byte language, bool notifyClient = true);

	void addFriend(const String& name, bool notifyClient = true);

	void removeFriend(const String& name, bool notifyClient = true);

	void addIgnore(const String& name, bool notifyClient = true);

	void removeIgnore(const String& name, bool notifyClient = true);

	void setTitle(const String& characterTitle, bool notifyClient = true);

	void setFoodFilling(int newValue, bool notifyClient = true);

	void setDrinkFilling(int newValue, bool notifyClient = true);

	void increaseFactionStanding(const String& factionName, float amount);

	void decreaseFactionStanding(const String& factionName, float amount);

	float getFactionStanding(const String& factionName);

	WaypointObject* getSurveyWaypoint();

	void activateRecovery();

	void doRecovery();

	void disconnect(bool closeClient, bool doLock);

	void reload(ZoneClientSession* client);

	void setOffline();

	void setLinkDead();

	void setOnline();

	void setLoggingOut();

	void sendBadgesResponseTo(CreatureObject* player);

	void logout(bool doLock);

	FactionStandingList* getFactionStandingList();

	void setLastNpcConvStr(const String& conv);

	void setLastNpcConvMessStr(const String& mess);

	String getLastNpcConvStr();

	String getLastNpcConvMessStr();

	String getLastNpcConvOption(int idx);

	void addLastNpcConvOptions(const String& option);

	int countLastNpcConvOptions();

	void clearLastNpcConvOptions();

	void setConversatingCreature(CreatureObject* creature);

	CreatureObject* getConversatingCreature();

	SortedVector<unsigned long long>* getPersistentMessages();

	void addPersistentMessage(unsigned long long id);

	void dropPersistentMessage(unsigned long long id);

	void unloadSpawnedChildren();

	void addToConsentList(const String& name);

	bool hasInConsentList(const String& name);

	void removeFromConsentList(const String& name);

	String getConsentName(int i);

	int getConsentListSize();

	String getFactionRank();

	void setFactionRank(const String& rank);

	void setCommandMessageString(unsigned int actionCRC, String& message);

	void removeCommandMessageString(unsigned int actionCRC);

	BuildingObject* getDeclaredResidence();

	void setDeclaredResidence(BuildingObject* residence);

	void setCloningFacility(BuildingObject* cloningfac);

	BuildingObject* getCloningFacility();

	void notifyOnline();

	void doDigest();

	bool isDigesting();

	String getSavedTerrainName();

	void setSavedParentID(unsigned long long id);

	void setSavedTerrainName(const String& name);

	unsigned long long getSavedParentID();

	unsigned int getNewSuiBoxID(unsigned int type);

	bool hasSuiBox(unsigned int boxID);

	SuiBox* getSuiBox(unsigned int boxID);

	void removeSuiBox(unsigned int boxID, bool closeWindowToClient = false);

	void removeSuiBoxType(unsigned int windowType);

	bool hasSuiBoxWindowType(unsigned int windowType);

	void closeSuiWindowType(unsigned int windowType);

	SuiBox* getSuiBoxFromWindowType(unsigned int windowType);

	void addSuiBox(SuiBox* sui);

	bool isFirstIncapacitationExpired();

	void resetIncapacitationCounter();

	void resetFirstIncapacitationTime();

	void updateIncapacitationCounter();

	bool isFirstIncapacitation();

	byte getIncapacitationCounter();

	void addToDuelList(CreatureObject* targetPlayer);

	void removeFromDuelList(CreatureObject* targetPlayer);

	CreatureObject* getDuelListObject(int index);

	bool requestedDuelTo(CreatureObject* targetPlayer);

	bool isDuelListEmpty();

	int getDuelListSize();

	UnicodeString getBiography();

	void notifyOffline();

	void setBadge(unsigned int badge);

	void awardBadge(unsigned int badge);

	void setSurveyTool(SurveyTool* tool);

	SurveyTool* getSurveyTool();

	CraftingTool* getLastCraftingToolUsed();

	void setLastCraftingToolUsed(CraftingTool* tool);

	void setTeleporting(bool val);

	int getNumBadges();

	int getBadgeTypeCount(byte type);

	bool hasFriend(const String& name);

	bool isIgnoring(const String& name);

	void addReverseFriend(const String& name);

	void removeReverseFriend(const String& name);

	void sendFriendLists();

	bool hasWaypoint(unsigned long long objectID);

	bool hasSkill(const String& skill);

	bool hasCommandMessageString(unsigned int actionCRC);

	unsigned int getCharacterBitmask();

	String getTitle();

	unsigned int getAdminLevel();

	void setAdminLevel(unsigned int adminlvl);

	void setBiography(const UnicodeString& bio);

	bool isDeveloper();

	bool isCSR();

	bool isPrivileged();

	void setCharacterBitmask(unsigned int bitmask);

	bool setCharacterBit(unsigned int bit, bool notifyClient = false);

	bool clearCharacterBit(unsigned int bit, bool notifyClient = false);

	void toggleCharacterBit(unsigned int bit);

	VectorMap<String, int>* getXpTypeCapList();

	DeltaVectorMap<String, int>* getExperienceList();

	int getForcePower();

	int getForcePowerMax();

	WaypointList* getWaypointList();

	SkillList* getSkills();

	SchematicList* getSchematics();

	DraftSchematic* getSchematic(int i);

	Vector<ManagedReference<DraftSchematic* > > filterSchematicList(CreatureObject* player, Vector<unsigned int>* enabledTabs, int complexityLevel);

	int getFoodFilling();

	int getFoodFillingMax();

	int getDrinkFilling();

	int getDrinkFillingMax();

	int getJediState();

	byte getLanguageID();

	DeltaVector<String>* getFriendList();

	bool isTeleporting();

	void addChatRoom(ChatRoom* room);

	void removeChatRoom(ChatRoom* room);

	void clearTradeContainer();

	TradeContainer* getTradeContainer();

	DeltaVector<String>* getIgnoreList();

	int getExperience(const String& xp);

	String getCommandMessageString(unsigned int actionCRC);

	bool hasBadge(unsigned int badge);

	void clearDisconnectEvent();

	void clearRecoveryEvent();

	bool isOnline();

	bool isOffline();

	bool isLoading();

	bool isLinkDead();

	bool isLoggingIn();

	bool isLoggingOut();

	void setSkillPoints(int points);

	void addSkillPoints(int points);

	int getSkillPoints();

	ValidatedPosition* getLastValidatedPosition();

	void updateLastValidatedPosition();

	void setSpawnedBlueFrog();

	bool hasSpawnedBlueFrog();

	unsigned int getAccountID();

	unsigned long long getServerMovementTimeDelta();

	Time* getServerMovementTimeStamp();

	void setClientLastMovementStamp(unsigned int stamp);

	void updateServerLastMovementStamp();

	void setAccountID(unsigned int id);

	int getFactionStatus();

	unsigned int getClientLastMovementStamp();

	void setTeachingOrLearning(bool value);

	bool isTeachingOrLearning();

	int getCenteredBonus();

	void setCenteredBonus(int bonus);

	bool isInvisible();

	void setInvisible(bool invis);

	void setHologrindMask(unsigned int mask);

	unsigned int getHologrindMask();

	byte getRaceID();

	void setRaceID(byte race);

	void setMaximumLots(byte lots);

	byte getMaximumLots();

	WeakReference<PlayerObject*> _this;

	operator const PlayerObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~PlayerObjectImplementation();

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

	friend class PlayerObject;
};

class PlayerObjectAdapter : public IntangibleObjectAdapter {
public:
	PlayerObjectAdapter(PlayerObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void finalize();

	void notifyLoadFromDatabase();

	void unload();

	void initializeTransientMembers();

	void sendBaselinesTo(SceneObject* player);

	void sendMessage(BasePacket* msg);

	void addOwnedStructure(StructureObject* obj);

	void removeOwnedStructure(StructureObject* obj);

	int getTotalOwnedStructureCount();

	int getLotsRemaining();

	void notifySceneReady();

	int addExperience(const String& xpType, int xp, bool notifyClient);

	void removeExperience(const String& xpType, bool notifyClient);

	void addWaypoint(WaypointObject* waypoint, bool checkName, bool notifyClient);

	void setWaypoint(WaypointObject* waypoint, bool notifyClient);

	void addWaypoint(const String& planet, float positionX, float positionY, bool notifyClient);

	void removeWaypoint(unsigned long long waypointID, bool notifyClient);

	void setLanguageID(byte language, bool notifyClient);

	void addFriend(const String& name, bool notifyClient);

	void removeFriend(const String& name, bool notifyClient);

	void addIgnore(const String& name, bool notifyClient);

	void removeIgnore(const String& name, bool notifyClient);

	void setTitle(const String& characterTitle, bool notifyClient);

	void setFoodFilling(int newValue, bool notifyClient);

	void setDrinkFilling(int newValue, bool notifyClient);

	void increaseFactionStanding(const String& factionName, float amount);

	void decreaseFactionStanding(const String& factionName, float amount);

	float getFactionStanding(const String& factionName);

	WaypointObject* getSurveyWaypoint();

	void activateRecovery();

	void doRecovery();

	void disconnect(bool closeClient, bool doLock);

	void reload(ZoneClientSession* client);

	void setOffline();

	void setLinkDead();

	void setOnline();

	void setLoggingOut();

	void sendBadgesResponseTo(CreatureObject* player);

	void logout(bool doLock);

	void setLastNpcConvStr(const String& conv);

	void setLastNpcConvMessStr(const String& mess);

	String getLastNpcConvStr();

	String getLastNpcConvMessStr();

	String getLastNpcConvOption(int idx);

	void addLastNpcConvOptions(const String& option);

	int countLastNpcConvOptions();

	void clearLastNpcConvOptions();

	void setConversatingCreature(CreatureObject* creature);

	CreatureObject* getConversatingCreature();

	void addPersistentMessage(unsigned long long id);

	void dropPersistentMessage(unsigned long long id);

	void unloadSpawnedChildren();

	void addToConsentList(const String& name);

	bool hasInConsentList(const String& name);

	void removeFromConsentList(const String& name);

	String getConsentName(int i);

	int getConsentListSize();

	void setCommandMessageString(unsigned int actionCRC, String& message);

	void removeCommandMessageString(unsigned int actionCRC);

	BuildingObject* getDeclaredResidence();

	void setDeclaredResidence(BuildingObject* residence);

	void setCloningFacility(BuildingObject* cloningfac);

	BuildingObject* getCloningFacility();

	void notifyOnline();

	void doDigest();

	bool isDigesting();

	String getSavedTerrainName();

	void setSavedParentID(unsigned long long id);

	void setSavedTerrainName(const String& name);

	unsigned long long getSavedParentID();

	unsigned int getNewSuiBoxID(unsigned int type);

	bool hasSuiBox(unsigned int boxID);

	SuiBox* getSuiBox(unsigned int boxID);

	void removeSuiBox(unsigned int boxID, bool closeWindowToClient);

	void removeSuiBoxType(unsigned int windowType);

	bool hasSuiBoxWindowType(unsigned int windowType);

	void closeSuiWindowType(unsigned int windowType);

	SuiBox* getSuiBoxFromWindowType(unsigned int windowType);

	void addSuiBox(SuiBox* sui);

	bool isFirstIncapacitationExpired();

	void resetIncapacitationCounter();

	void resetFirstIncapacitationTime();

	void updateIncapacitationCounter();

	bool isFirstIncapacitation();

	byte getIncapacitationCounter();

	void addToDuelList(CreatureObject* targetPlayer);

	void removeFromDuelList(CreatureObject* targetPlayer);

	CreatureObject* getDuelListObject(int index);

	bool requestedDuelTo(CreatureObject* targetPlayer);

	bool isDuelListEmpty();

	int getDuelListSize();

	UnicodeString getBiography();

	void notifyOffline();

	void setBadge(unsigned int badge);

	void awardBadge(unsigned int badge);

	void setSurveyTool(SurveyTool* tool);

	SurveyTool* getSurveyTool();

	CraftingTool* getLastCraftingToolUsed();

	void setLastCraftingToolUsed(CraftingTool* tool);

	void setTeleporting(bool val);

	int getNumBadges();

	int getBadgeTypeCount(byte type);

	bool hasFriend(const String& name);

	bool isIgnoring(const String& name);

	void addReverseFriend(const String& name);

	void removeReverseFriend(const String& name);

	void sendFriendLists();

	bool hasWaypoint(unsigned long long objectID);

	bool hasCommandMessageString(unsigned int actionCRC);

	unsigned int getCharacterBitmask();

	String getTitle();

	unsigned int getAdminLevel();

	void setAdminLevel(unsigned int adminlvl);

	void setBiography(const UnicodeString& bio);

	bool isDeveloper();

	bool isCSR();

	bool isPrivileged();

	void setCharacterBitmask(unsigned int bitmask);

	bool setCharacterBit(unsigned int bit, bool notifyClient);

	bool clearCharacterBit(unsigned int bit, bool notifyClient);

	void toggleCharacterBit(unsigned int bit);

	int getForcePower();

	int getForcePowerMax();

	DraftSchematic* getSchematic(int i);

	int getFoodFilling();

	int getFoodFillingMax();

	int getDrinkFilling();

	int getDrinkFillingMax();

	int getJediState();

	byte getLanguageID();

	bool isTeleporting();

	void addChatRoom(ChatRoom* room);

	void removeChatRoom(ChatRoom* room);

	int getExperience(const String& xp);

	String getCommandMessageString(unsigned int actionCRC);

	bool hasBadge(unsigned int badge);

	void clearDisconnectEvent();

	void clearRecoveryEvent();

	bool isOnline();

	bool isOffline();

	bool isLoading();

	bool isLinkDead();

	bool isLoggingIn();

	bool isLoggingOut();

	void setSkillPoints(int points);

	void addSkillPoints(int points);

	int getSkillPoints();

	void updateLastValidatedPosition();

	void setSpawnedBlueFrog();

	bool hasSpawnedBlueFrog();

	unsigned int getAccountID();

	unsigned long long getServerMovementTimeDelta();

	void setClientLastMovementStamp(unsigned int stamp);

	void updateServerLastMovementStamp();

	void setAccountID(unsigned int id);

	int getFactionStatus();

	unsigned int getClientLastMovementStamp();

	void setTeachingOrLearning(bool value);

	int getCenteredBonus();

	void setCenteredBonus(int bonus);

	bool isInvisible();

	void setInvisible(bool invis);

	void setHologrindMask(unsigned int mask);

	unsigned int getHologrindMask();

	byte getRaceID();

	void setRaceID(byte race);

	void setMaximumLots(byte lots);

	byte getMaximumLots();

protected:
	String _param0_addExperience__String_int_bool_;
	String _param0_removeExperience__String_bool_;
	String _param0_addWaypoint__String_float_float_bool_;
	String _param0_addFriend__String_bool_;
	String _param0_removeFriend__String_bool_;
	String _param0_addIgnore__String_bool_;
	String _param0_removeIgnore__String_bool_;
	String _param0_setTitle__String_bool_;
	String _param0_increaseFactionStanding__String_float_;
	String _param0_decreaseFactionStanding__String_float_;
	String _param0_getFactionStanding__String_;
	String _param0_setLastNpcConvStr__String_;
	String _param0_setLastNpcConvMessStr__String_;
	String _param0_addLastNpcConvOptions__String_;
	String _param0_addToConsentList__String_;
	String _param0_hasInConsentList__String_;
	String _param0_removeFromConsentList__String_;
	String _param1_setCommandMessageString__int_String_;
	String _param0_setSavedTerrainName__String_;
	String _param0_hasFriend__String_;
	String _param0_isIgnoring__String_;
	String _param0_addReverseFriend__String_;
	String _param0_removeReverseFriend__String_;
	UnicodeString _param0_setBiography__UnicodeString_;
	String _param0_getExperience__String_;
};

class PlayerObjectHelper : public DistributedObjectClassHelper, public Singleton<PlayerObjectHelper> {
	static PlayerObjectHelper* staticInitializer;

public:
	PlayerObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<PlayerObjectHelper>;
};

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

#endif /*PLAYEROBJECT_H_*/
