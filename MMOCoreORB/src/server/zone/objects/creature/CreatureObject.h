/*
 *	server/zone/objects/creature/CreatureObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef CREATUREOBJECT_H_
#define CREATUREOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace scene {
namespace variables {

class ParameterizedStringId;

} // namespace variables
} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene::variables;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace professions {

class SkillBox;

} // namespace professions
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::professions;

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
namespace intangible {

class ControlDevice;

} // namespace intangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::intangible;

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
namespace buffs {

class Buff;

} // namespace buffs
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::buffs;

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

#include "server/zone/objects/scene/variables/DeltaVector.h"

#include "server/zone/objects/scene/variables/DeltaVectorMap.h"

#include "server/zone/objects/creature/variables/SkillBoxList.h"

#include "server/zone/objects/creature/variables/CommandQueueAction.h"

#include "server/zone/objects/creature/CreaturePosture.h"

#include "server/zone/objects/creature/CreatureState.h"

#include "server/zone/objects/creature/variables/CooldownTimerMap.h"

#include "server/zone/objects/creature/buffs/BuffList.h"

#include "server/zone/objects/creature/damageovertime/DamageOverTimeList.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "engine/core/ManagedObject.h"

#include "engine/lua/LuaObject.h"

#include "system/util/Vector.h"

#include "system/lang/Time.h"

#include "system/util/SortedVector.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {

class CreatureObject : public TangibleObject {
public:
	static const int HUMAN = 0;

	static const int RODIAN = 1;

	static const int TRANDOSHAN = 2;

	static const int MONCAL = 3;

	static const int WOOKIE = 4;

	static const int BOTHAN = 5;

	static const int TWILEK = 6;

	static const int ZABRAK = 7;

	static const int ITHORIAN = 0x21;

	static const int SULLUSTAN = 0x31;

	static const int MALE = 0;

	static const int FEMALE = 1;

	static const float DEFAULTRUNSPEED = 5.376;

	CreatureObject();

	void initializeMembers();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void initializeTransientMembers();

	void clearQueueAction(unsigned int actioncntr, float timer = 0, unsigned int tab1 = 0, unsigned int tab2 = 0);

	void sendBaselinesTo(SceneObject* player);

	void sendSystemMessage(const String& message);

	void sendSystemMessage(UnicodeString& message);

	void sendSystemMessage(const String& file, const String& stringid);

	void sendSystemMessage(ParameterizedStringId& stringid);

	void sendSlottedObjectsTo(SceneObject* player);

	void setCombatState();

	void clearCombatState(bool clearDefenders = true);

	void setPosture(int newPosture, bool notifyClient = true);

	void setRunSpeed(float newSpeed, bool notifyClient = true);

	void setHAM(int type, int value, bool notifyClient = true);

	int inflictDamage(TangibleObject* attacker, int damageType, int damage, bool destroy, bool notifyClient = true);

	bool hasDamage(int attribute);

	int healDamage(TangibleObject* healer, int damageType, int damage, bool notifyClient = true);

	void setBaseHAM(int type, int value, bool notifyClient = true);

	void setWounds(int type, int value, bool notifyClient = true);

	void addWounds(int type, int value, bool notifyClient = true);

	void setMaxHAM(int type, int value, bool notifyClient = true);

	void addMaxHAM(int type, int value, bool notifyClient = true);

	void setEncumbrance(int type, int value, bool notifyClient = true);

	void addEncumbrance(int type, int value, bool notifyClient = true);

	void setWeapon(WeaponObject* weao, bool notifyClient = false);

	int notifyObjectInserted(SceneObject* object);

	void setInstrumentID(int instrumentid, bool notifyClient = false);

	void setShockWounds(int newShock, bool notifyClient = true);

	void addShockWounds(int shockToAdd, bool notiyClient = true);

	void setTargetID(unsigned long long targetID, bool notifyClient = false);

	void setBankCredits(int credits, bool notifyClient = true);

	void addBuff(Buff* buff);

	void removeBuff(unsigned int buffcrc);

	void removeBuff(Buff* buff);

	void clearBuffs(bool updateclient);

	Buff* getBuff(unsigned int buffcrc);

	int addDotState(unsigned long long dotType, unsigned int strength, byte type, unsigned int duration, float potency, unsigned int defense);

	bool healDot(unsigned long long dotType, int reduction);

	bool hasBuff(unsigned int buffcrc);

	void notifySelfPositionUpdate();

	void notifyPostureChange(int newPosture);

	void updateToDatabaseAllObjects(bool startTask);

	void addBankCredits(int credits, bool notifyClient = true);

	void addCashCredits(int credits, bool notifyClient = true);

	void substractBankCredits(int credits);

	void substractCashCredits(int credits);

	bool verifyCashCredits(int credits);

	bool verifyBankCredits(int credits);

	void setCashCredits(int credits, bool notifyClient = true);

	void addSkillBox(SkillBox* skillBox, bool notifyClient = true);

	void addSkillBox(const String& skillBox, bool notifyClient = true);

	void removeSkillBox(SkillBox* skillBox, bool notifyClient = true);

	void removeSkillBox(const String& skillBox, bool notifyClient = true);

	void addSkillMod(const String& skillMod, long long value, bool notifyClient = true);

	void removeSkillMod(const String& skillMod, bool notifyCLient = true);

	void updateGroupInviterID(unsigned long long id, bool notifyClient = true);

	void updateGroup(GroupObject* group, bool notifyClient = true);

	void enqueueCommand(unsigned int actionCRC, unsigned int actionCount, unsigned long long targetID, const UnicodeString& arguments);

	void setMood(byte moodID, bool notifyClient = true);

	void setMoodString(const String& animation, bool notifyClient = true);

	void deleteQueueAction(unsigned int actionCount);

	bool setState(unsigned long long state, bool notifyClient = true);

	void clearState(unsigned long long state, bool notifyClient = true);

	void setControlDevice(ControlDevice* device);

	unsigned int getWearableMask();

	void setCreatureLink(CreatureObject* object, bool notifyClient = true);

	void executeObjectControllerAction(unsigned int actionCRC);

	void executeObjectControllerAction(unsigned int actionCRC, unsigned long long targetID, const UnicodeString& args);

	bool isAttackableBy(CreatureObject* object);

	void sendConversationStartTo(SceneObject* player);

	void selectConversationOption(int option, SceneObject* obj);

	bool canTreatInjuries();

	void dismount();

	float calculateBFRatio();

	void setDizziedState(int durationSeconds = 5);

	void setAimingState(int durationSeconds = 5);

	void setCoverState();

	void setBerserkedState(unsigned int duration);

	void setStunnedState(int durationSeconds = 5);

	void setBlindedState(int durationSeconds = 5);

	void setIntimidatedState(int durationSeconds = 15);

	void setSnaredState(int durationSeconds = 20);

	void setRootedState(int durationSeconds = 20);

	bool setNextAttackDelay(int del);

	void setMeditateState();

	void activateHAMRegeneration();

	void activateStateRecovery();

	bool hasAttackDelay();

	void updateLastSuccessfulCombatAction();

	void updateKnockdownRecovery();

	void queueDizzyFallEvent();

	void updateLastKnockdown();

	bool checkKnockdownRecovery();

	bool checkLastKnockdown();

	void updatePostureDownRecovery();

	void updatePostureUpRecovery();

	bool checkPostureDownRecovery();

	bool checkPostureUpRecovery();

	void updateCooldownTimer(const String& coooldownTimer, unsigned int miliSecondsToAdd = 0);

	bool checkCooldownRecovery(const String& cooldown);

	int canAddObject(SceneObject* object, String& errorDescription);

	void doAnimation(const String& animation);

	void doCombatAnimation(CreatureObject* defender, unsigned int animationCRC, byte hit);

	void playEffect(const String& file, const String& aux);

	void playEffect(const String& file);

	void showFlyText(const String& file, const String& uax, byte red, byte green, byte blue);

	void activateQueueAction();

	UnicodeString getCreatureName();

	bool isGroupped();

	int getBankCredits();

	int getCashCredits();

	int getBaseHAM(int idx);

	int getWounds(int idx);

	DeltaVector<int>* getWounds();

	int getHAM(int idx);

	DeltaVector<int>* getHAM();

	int getMaxHAM(int idx);

	DeltaVector<int>* getMaxHAM();

	int getEncumbrance(int idx);

	DeltaVector<int>* getEncumbrances();

	byte getPosture();

	byte getFactionRank();

	CreatureObject* getLinkedCreature();

	unsigned long long getCreatureLinkID();

	float getShockWounds();

	unsigned long long getStateBitmask();

	bool hasState(unsigned long long state);

	bool hasStates();

	unsigned long long getListenID();

	float getRunSpeed();

	float getWalkSpeed();

	float getTerrainNegotiation();

	float getRunAcceleration();

	float getWalkAcceleration();

	String getPerformanceAnimation();

	String getMoodString();

	unsigned long long getWeaponID();

	WeaponObject* getWeapon();

	unsigned long long getGroupID();

	unsigned long long getGroupInviterID();

	GroupObject* getGroup();

	unsigned long long getGroupInviteCounter();

	int getGuildID();

	unsigned long long getTargetID();

	byte getMoodID();

	float getSlopeModPercent();

	int getPerformanceCounter();

	int getInstrumentID();

	byte getFrozen();

	float getHeight();

	int getSpecies();

	DeltaVector<int>* getBaseHAM();

	SkillBoxList* getSkillBoxList();

	long long getSkillMod(const String& skillmod);

	bool hasSkillBox(const String& skillBox);

	DeltaVectorMap<String, long long>* getSkillModList();

	void setHeight(float heigh);

	bool isCreatureObject();

	bool isTrainerCreature();

	bool isSwimming();

	bool isRidingMount();

	ControlDevice* getControlDevice();

	float getSwimHeight();

	bool isIncapacitated();

	bool isDead();

	bool isKnockedDown();

	bool isKneeling();

	bool isProne();

	bool isStanding();

	bool isSitting();

	bool isSkillAnimating();

	bool isInCombat();

	bool isDizzied();

	bool isBerserked();

	bool isStunned();

	bool isBlinded();

	bool isIntimidated();

	bool isSnared();

	bool isRooted();

	bool isDiseased();

	bool isPoisoned();

	bool isBleeding();

	bool isOnFire();

	bool isMounted();

	bool isRidingCreature();

	bool isPeaced();

	bool isMeditating();

	bool isAiming();

	bool isInCover();

	bool isShuttleCreature();

	bool isNonPlayerCreature();

	bool isCreature();

	bool isAiAgent();

protected:
	CreatureObject(DummyConstructorParameter* param);

	virtual ~CreatureObject();

	String _return_getMoodString;
	String _return_getPerformanceAnimation;

	UnicodeString _return_getCreatureName;

	friend class CreatureObjectHelper;
};

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {
namespace objects {
namespace creature {

class CreatureObjectImplementation : public TangibleObjectImplementation {
protected:
	int bankCredits;

	int cashCredits;

	int gender;

	int species;

	DeltaVector<int> baseHAM;

	byte posture;

	byte factionRank;

	ManagedWeakReference<CreatureObject* > linkedCreature;

	ManagedWeakReference<ControlDevice* > controlDevice;

	float shockWounds;

	DeltaVector<int> wounds;

	unsigned long long stateBitmask;

	DeltaVector<int> encumbrances;

	float runSpeed;

	float walkSpeed;

	float terrainNegotiation;

	float runAcceleration;

	float walkAcceleration;

	float height;

	float swimHeight;

	float slopeModPercent;

	float slopeModAngle;

	unsigned long long listenToID;

	String performanceAnimation;

	String moodString;

	ManagedReference<WeaponObject* > weapon;

	ManagedReference<GroupObject* > group;

	unsigned long long groupInviterID;

	unsigned long long groupInviteCounter;

	int guildID;

	unsigned long long targetID;

	byte moodID;

	int performanceCounter;

	int instrumentID;

	DeltaVector<int> hamList;

	DeltaVector<int> maxHamList;

	byte frozen;

	String templateString;

	SkillBoxList skillBoxList;

	DeltaVectorMap<String, long long> skillModList;

	Vector<CommandQueueAction*> commandQueue;

	Time nextAction;

	CooldownTimerMap cooldownTimerMap;

	BuffList creatureBuffs;

	DamageOverTimeList damageOverTimeList;

	Time lastSuccessfulCombatAction;

public:
	static const int HUMAN = 0;

	static const int RODIAN = 1;

	static const int TRANDOSHAN = 2;

	static const int MONCAL = 3;

	static const int WOOKIE = 4;

	static const int BOTHAN = 5;

	static const int TWILEK = 6;

	static const int ZABRAK = 7;

	static const int ITHORIAN = 0x21;

	static const int SULLUSTAN = 0x31;

	static const int MALE = 0;

	static const int FEMALE = 1;

	static const float DEFAULTRUNSPEED = 5.376;

	CreatureObjectImplementation();

	CreatureObjectImplementation(DummyConstructorParameter* param);

	void initializeMembers();

	void finalize();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void initializeTransientMembers();

	void clearQueueAction(unsigned int actioncntr, float timer = 0, unsigned int tab1 = 0, unsigned int tab2 = 0);

	void sendBaselinesTo(SceneObject* player);

	void sendSystemMessage(const String& message);

	void sendSystemMessage(UnicodeString& message);

	void sendSystemMessage(const String& file, const String& stringid);

	void sendSystemMessage(ParameterizedStringId& stringid);

	void sendSlottedObjectsTo(SceneObject* player);

	void setCombatState();

	void clearCombatState(bool clearDefenders = true);

	virtual void setPosture(int newPosture, bool notifyClient = true);

	void setRunSpeed(float newSpeed, bool notifyClient = true);

	void setHAM(int type, int value, bool notifyClient = true);

	int inflictDamage(TangibleObject* attacker, int damageType, int damage, bool destroy, bool notifyClient = true);

	bool hasDamage(int attribute);

	int healDamage(TangibleObject* healer, int damageType, int damage, bool notifyClient = true);

	void setBaseHAM(int type, int value, bool notifyClient = true);

	void setWounds(int type, int value, bool notifyClient = true);

	void addWounds(int type, int value, bool notifyClient = true);

	void setMaxHAM(int type, int value, bool notifyClient = true);

	void addMaxHAM(int type, int value, bool notifyClient = true);

	void setEncumbrance(int type, int value, bool notifyClient = true);

	void addEncumbrance(int type, int value, bool notifyClient = true);

	void setWeapon(WeaponObject* weao, bool notifyClient = false);

	int notifyObjectInserted(SceneObject* object);

	void setInstrumentID(int instrumentid, bool notifyClient = false);

	void setShockWounds(int newShock, bool notifyClient = true);

	void addShockWounds(int shockToAdd, bool notiyClient = true);

	void setTargetID(unsigned long long targetID, bool notifyClient = false);

	void setBankCredits(int credits, bool notifyClient = true);

	void addBuff(Buff* buff);

	void removeBuff(unsigned int buffcrc);

	void removeBuff(Buff* buff);

	void clearBuffs(bool updateclient);

	Buff* getBuff(unsigned int buffcrc);

	int addDotState(unsigned long long dotType, unsigned int strength, byte type, unsigned int duration, float potency, unsigned int defense);

	bool healDot(unsigned long long dotType, int reduction);

	bool hasBuff(unsigned int buffcrc);

	void notifySelfPositionUpdate();

	void notifyPostureChange(int newPosture);

	void updateToDatabaseAllObjects(bool startTask);

	void addBankCredits(int credits, bool notifyClient = true);

	void addCashCredits(int credits, bool notifyClient = true);

	void substractBankCredits(int credits);

	void substractCashCredits(int credits);

	bool verifyCashCredits(int credits);

	bool verifyBankCredits(int credits);

	void setCashCredits(int credits, bool notifyClient = true);

	void addSkillBox(SkillBox* skillBox, bool notifyClient = true);

	void addSkillBox(const String& skillBox, bool notifyClient = true);

	void removeSkillBox(SkillBox* skillBox, bool notifyClient = true);

	void removeSkillBox(const String& skillBox, bool notifyClient = true);

	void addSkillMod(const String& skillMod, long long value, bool notifyClient = true);

	void removeSkillMod(const String& skillMod, bool notifyCLient = true);

	void updateGroupInviterID(unsigned long long id, bool notifyClient = true);

	void updateGroup(GroupObject* group, bool notifyClient = true);

	void enqueueCommand(unsigned int actionCRC, unsigned int actionCount, unsigned long long targetID, const UnicodeString& arguments);

	void setMood(byte moodID, bool notifyClient = true);

	void setMoodString(const String& animation, bool notifyClient = true);

	void deleteQueueAction(unsigned int actionCount);

	bool setState(unsigned long long state, bool notifyClient = true);

	void clearState(unsigned long long state, bool notifyClient = true);

	void setControlDevice(ControlDevice* device);

	unsigned int getWearableMask();

	void setCreatureLink(CreatureObject* object, bool notifyClient = true);

	void executeObjectControllerAction(unsigned int actionCRC);

	void executeObjectControllerAction(unsigned int actionCRC, unsigned long long targetID, const UnicodeString& args);

	bool isAttackableBy(CreatureObject* object);

	virtual void sendConversationStartTo(SceneObject* player);

	virtual void selectConversationOption(int option, SceneObject* obj);

	bool canTreatInjuries();

	void dismount();

	float calculateBFRatio();

	void setDizziedState(int durationSeconds = 5);

	void setAimingState(int durationSeconds = 5);

	void setCoverState();

	void setBerserkedState(unsigned int duration);

	void setStunnedState(int durationSeconds = 5);

	void setBlindedState(int durationSeconds = 5);

	void setIntimidatedState(int durationSeconds = 15);

	void setSnaredState(int durationSeconds = 20);

	void setRootedState(int durationSeconds = 20);

	bool setNextAttackDelay(int del);

	void setMeditateState();

	virtual void activateHAMRegeneration();

	virtual void activateStateRecovery();

	bool hasAttackDelay();

	void updateLastSuccessfulCombatAction();

	void updateKnockdownRecovery();

	void queueDizzyFallEvent();

	void updateLastKnockdown();

	bool checkKnockdownRecovery();

	bool checkLastKnockdown();

	void updatePostureDownRecovery();

	void updatePostureUpRecovery();

	bool checkPostureDownRecovery();

	bool checkPostureUpRecovery();

	void updateCooldownTimer(const String& coooldownTimer, unsigned int miliSecondsToAdd = 0);

	bool checkCooldownRecovery(const String& cooldown);

	int canAddObject(SceneObject* object, String& errorDescription);

	void doAnimation(const String& animation);

	void doCombatAnimation(CreatureObject* defender, unsigned int animationCRC, byte hit);

	void playEffect(const String& file, const String& aux);

	void playEffect(const String& file);

	void showFlyText(const String& file, const String& uax, byte red, byte green, byte blue);

	void activateQueueAction();

	UnicodeString getCreatureName();

	bool isGroupped();

	int getBankCredits();

	int getCashCredits();

	int getBaseHAM(int idx);

	int getWounds(int idx);

	DeltaVector<int>* getWounds();

	int getHAM(int idx);

	DeltaVector<int>* getHAM();

	int getMaxHAM(int idx);

	DeltaVector<int>* getMaxHAM();

	int getEncumbrance(int idx);

	DeltaVector<int>* getEncumbrances();

	byte getPosture();

	byte getFactionRank();

	CreatureObject* getLinkedCreature();

	unsigned long long getCreatureLinkID();

	float getShockWounds();

	unsigned long long getStateBitmask();

	bool hasState(unsigned long long state);

	bool hasStates();

	unsigned long long getListenID();

	float getRunSpeed();

	float getWalkSpeed();

	float getTerrainNegotiation();

	float getRunAcceleration();

	float getWalkAcceleration();

	String getPerformanceAnimation();

	String getMoodString();

	unsigned long long getWeaponID();

	WeaponObject* getWeapon();

	unsigned long long getGroupID();

	unsigned long long getGroupInviterID();

	GroupObject* getGroup();

	unsigned long long getGroupInviteCounter();

	int getGuildID();

	unsigned long long getTargetID();

	byte getMoodID();

	float getSlopeModPercent();

	int getPerformanceCounter();

	int getInstrumentID();

	byte getFrozen();

	float getHeight();

	int getSpecies();

	DeltaVector<int>* getBaseHAM();

	SkillBoxList* getSkillBoxList();

	long long getSkillMod(const String& skillmod);

	bool hasSkillBox(const String& skillBox);

	DeltaVectorMap<String, long long>* getSkillModList();

	void setHeight(float heigh);

	bool isCreatureObject();

	virtual bool isTrainerCreature();

	bool isSwimming();

	bool isRidingMount();

	ControlDevice* getControlDevice();

	float getSwimHeight();

	bool isIncapacitated();

	bool isDead();

	bool isKnockedDown();

	bool isKneeling();

	bool isProne();

	bool isStanding();

	bool isSitting();

	bool isSkillAnimating();

	bool isInCombat();

	bool isDizzied();

	bool isBerserked();

	bool isStunned();

	bool isBlinded();

	bool isIntimidated();

	bool isSnared();

	bool isRooted();

	bool isDiseased();

	bool isPoisoned();

	bool isBleeding();

	bool isOnFire();

	bool isMounted();

	bool isRidingCreature();

	bool isPeaced();

	bool isMeditating();

	bool isAiming();

	bool isInCover();

	virtual bool isShuttleCreature();

	virtual bool isNonPlayerCreature();

	virtual bool isCreature();

	virtual bool isAiAgent();

	CreatureObject* _this;

	operator const CreatureObject*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~CreatureObjectImplementation();

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

	friend class CreatureObject;
};

class CreatureObjectAdapter : public TangibleObjectAdapter {
public:
	CreatureObjectAdapter(CreatureObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeMembers();

	void finalize();

	void initializeTransientMembers();

	void clearQueueAction(unsigned int actioncntr, float timer, unsigned int tab1, unsigned int tab2);

	void sendBaselinesTo(SceneObject* player);

	void sendSystemMessage(const String& message);

	void sendSystemMessage(UnicodeString& message);

	void sendSystemMessage(const String& file, const String& stringid);

	void sendSlottedObjectsTo(SceneObject* player);

	void setCombatState();

	void clearCombatState(bool clearDefenders);

	void setPosture(int newPosture, bool notifyClient);

	void setRunSpeed(float newSpeed, bool notifyClient);

	void setHAM(int type, int value, bool notifyClient);

	int inflictDamage(TangibleObject* attacker, int damageType, int damage, bool destroy, bool notifyClient);

	bool hasDamage(int attribute);

	int healDamage(TangibleObject* healer, int damageType, int damage, bool notifyClient);

	void setBaseHAM(int type, int value, bool notifyClient);

	void setWounds(int type, int value, bool notifyClient);

	void addWounds(int type, int value, bool notifyClient);

	void setMaxHAM(int type, int value, bool notifyClient);

	void addMaxHAM(int type, int value, bool notifyClient);

	void setEncumbrance(int type, int value, bool notifyClient);

	void addEncumbrance(int type, int value, bool notifyClient);

	void setWeapon(WeaponObject* weao, bool notifyClient);

	int notifyObjectInserted(SceneObject* object);

	void setInstrumentID(int instrumentid, bool notifyClient);

	void setShockWounds(int newShock, bool notifyClient);

	void addShockWounds(int shockToAdd, bool notiyClient);

	void setTargetID(unsigned long long targetID, bool notifyClient);

	void setBankCredits(int credits, bool notifyClient);

	void addBuff(Buff* buff);

	void removeBuff(unsigned int buffcrc);

	void removeBuff(Buff* buff);

	void clearBuffs(bool updateclient);

	Buff* getBuff(unsigned int buffcrc);

	int addDotState(unsigned long long dotType, unsigned int strength, byte type, unsigned int duration, float potency, unsigned int defense);

	bool healDot(unsigned long long dotType, int reduction);

	bool hasBuff(unsigned int buffcrc);

	void notifySelfPositionUpdate();

	void notifyPostureChange(int newPosture);

	void updateToDatabaseAllObjects(bool startTask);

	void addBankCredits(int credits, bool notifyClient);

	void addCashCredits(int credits, bool notifyClient);

	void substractBankCredits(int credits);

	void substractCashCredits(int credits);

	bool verifyCashCredits(int credits);

	bool verifyBankCredits(int credits);

	void setCashCredits(int credits, bool notifyClient);

	void addSkillBox(const String& skillBox, bool notifyClient);

	void removeSkillBox(const String& skillBox, bool notifyClient);

	void addSkillMod(const String& skillMod, long long value, bool notifyClient);

	void removeSkillMod(const String& skillMod, bool notifyCLient);

	void updateGroupInviterID(unsigned long long id, bool notifyClient);

	void updateGroup(GroupObject* group, bool notifyClient);

	void enqueueCommand(unsigned int actionCRC, unsigned int actionCount, unsigned long long targetID, const UnicodeString& arguments);

	void setMood(byte moodID, bool notifyClient);

	void setMoodString(const String& animation, bool notifyClient);

	void deleteQueueAction(unsigned int actionCount);

	bool setState(unsigned long long state, bool notifyClient);

	void clearState(unsigned long long state, bool notifyClient);

	void setControlDevice(ControlDevice* device);

	unsigned int getWearableMask();

	void setCreatureLink(CreatureObject* object, bool notifyClient);

	void executeObjectControllerAction(unsigned int actionCRC);

	void executeObjectControllerAction(unsigned int actionCRC, unsigned long long targetID, const UnicodeString& args);

	bool isAttackableBy(CreatureObject* object);

	void sendConversationStartTo(SceneObject* player);

	void selectConversationOption(int option, SceneObject* obj);

	bool canTreatInjuries();

	void dismount();

	float calculateBFRatio();

	void setDizziedState(int durationSeconds);

	void setAimingState(int durationSeconds);

	void setCoverState();

	void setBerserkedState(unsigned int duration);

	void setStunnedState(int durationSeconds);

	void setBlindedState(int durationSeconds);

	void setIntimidatedState(int durationSeconds);

	void setSnaredState(int durationSeconds);

	void setRootedState(int durationSeconds);

	bool setNextAttackDelay(int del);

	void setMeditateState();

	void activateHAMRegeneration();

	void activateStateRecovery();

	bool hasAttackDelay();

	void updateLastSuccessfulCombatAction();

	void updateKnockdownRecovery();

	void queueDizzyFallEvent();

	void updateLastKnockdown();

	bool checkKnockdownRecovery();

	bool checkLastKnockdown();

	void updatePostureDownRecovery();

	void updatePostureUpRecovery();

	bool checkPostureDownRecovery();

	bool checkPostureUpRecovery();

	void updateCooldownTimer(const String& coooldownTimer, unsigned int miliSecondsToAdd);

	bool checkCooldownRecovery(const String& cooldown);

	int canAddObject(SceneObject* object, String& errorDescription);

	void doAnimation(const String& animation);

	void doCombatAnimation(CreatureObject* defender, unsigned int animationCRC, byte hit);

	void playEffect(const String& file, const String& aux);

	void playEffect(const String& file);

	void showFlyText(const String& file, const String& uax, byte red, byte green, byte blue);

	void activateQueueAction();

	UnicodeString getCreatureName();

	bool isGroupped();

	int getBankCredits();

	int getCashCredits();

	int getBaseHAM(int idx);

	int getWounds(int idx);

	int getHAM(int idx);

	int getMaxHAM(int idx);

	int getEncumbrance(int idx);

	byte getPosture();

	byte getFactionRank();

	CreatureObject* getLinkedCreature();

	unsigned long long getCreatureLinkID();

	float getShockWounds();

	unsigned long long getStateBitmask();

	bool hasState(unsigned long long state);

	bool hasStates();

	unsigned long long getListenID();

	float getRunSpeed();

	float getWalkSpeed();

	float getTerrainNegotiation();

	float getRunAcceleration();

	float getWalkAcceleration();

	String getPerformanceAnimation();

	String getMoodString();

	unsigned long long getWeaponID();

	WeaponObject* getWeapon();

	unsigned long long getGroupID();

	unsigned long long getGroupInviterID();

	GroupObject* getGroup();

	unsigned long long getGroupInviteCounter();

	int getGuildID();

	unsigned long long getTargetID();

	byte getMoodID();

	float getSlopeModPercent();

	int getPerformanceCounter();

	int getInstrumentID();

	byte getFrozen();

	float getHeight();

	int getSpecies();

	long long getSkillMod(const String& skillmod);

	bool hasSkillBox(const String& skillBox);

	void setHeight(float heigh);

	bool isCreatureObject();

	bool isTrainerCreature();

	bool isSwimming();

	bool isRidingMount();

	ControlDevice* getControlDevice();

	float getSwimHeight();

	bool isIncapacitated();

	bool isDead();

	bool isKnockedDown();

	bool isKneeling();

	bool isProne();

	bool isStanding();

	bool isSitting();

	bool isSkillAnimating();

	bool isInCombat();

	bool isDizzied();

	bool isBerserked();

	bool isStunned();

	bool isBlinded();

	bool isIntimidated();

	bool isSnared();

	bool isRooted();

	bool isDiseased();

	bool isPoisoned();

	bool isBleeding();

	bool isOnFire();

	bool isMounted();

	bool isRidingCreature();

	bool isPeaced();

	bool isMeditating();

	bool isAiming();

	bool isInCover();

	bool isShuttleCreature();

	bool isNonPlayerCreature();

	bool isCreature();

	bool isAiAgent();

protected:
	String _param0_sendSystemMessage__String_;
	UnicodeString _param0_sendSystemMessage__UnicodeString_;
	String _param0_sendSystemMessage__String_String_;
	String _param1_sendSystemMessage__String_String_;
	String _param0_addSkillBox__String_bool_;
	String _param0_removeSkillBox__String_bool_;
	String _param0_addSkillMod__String_long_bool_;
	String _param0_removeSkillMod__String_bool_;
	UnicodeString _param3_enqueueCommand__int_int_long_UnicodeString_;
	String _param0_setMoodString__String_bool_;
	UnicodeString _param2_executeObjectControllerAction__int_long_UnicodeString_;
	String _param0_updateCooldownTimer__String_int_;
	String _param0_checkCooldownRecovery__String_;
	String _param1_canAddObject__SceneObject_String_;
	String _param0_doAnimation__String_;
	String _param0_playEffect__String_String_;
	String _param1_playEffect__String_String_;
	String _param0_playEffect__String_;
	String _param0_showFlyText__String_String_byte_byte_byte_;
	String _param1_showFlyText__String_String_byte_byte_byte_;
	String _param0_getSkillMod__String_;
	String _param0_hasSkillBox__String_;
};

class CreatureObjectHelper : public DistributedObjectClassHelper, public Singleton<CreatureObjectHelper> {
	static CreatureObjectHelper* staticInitializer;

public:
	CreatureObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<CreatureObjectHelper>;
};

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

#endif /*CREATUREOBJECT_H_*/
