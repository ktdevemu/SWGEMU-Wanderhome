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
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

#include "server/zone/objects/scene/variables/DeltaVector.h"

#include "server/zone/objects/scene/variables/DeltaVectorMap.h"

#include "server/zone/objects/creature/variables/SkillBoxList.h"

#include "server/zone/objects/creature/variables/CommandQueueAction.h"

#include "server/zone/objects/creature/CreaturePosture.h"

#include "server/zone/objects/creature/CreatureState.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "engine/core/ManagedObject.h"

#include "engine/lua/LuaObject.h"

#include "system/util/Vector.h"

#include "system/lang/Time.h"

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

	CreatureObject();

	void loadTemplateData(LuaObject* templateData);

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

	void setHAM(int type, int value, bool notifyClient = true);

	void setBaseHAM(int type, int value, bool notifyClient = true);

	void setWounds(int type, int value, bool notifyClient = true);

	void setMaxHAM(int type, int value, bool notifyClient = true);

	void setEncumbrance(int type, int value, bool notifyClient = true);

	void setWeapon(WeaponObject* weao, bool notifyClient = false);

	void setInstrumentID(int instrumentid, bool notifyClient = false);

	void setTargetID(unsigned long long targetID, bool notifyClient = false);

	void setBankCredits(int credits, bool notifyClient = true);

	void addBankCredits(int credits, bool notifyClient = true);

	void substractBankCredits(int credits);

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

	void deleteQueueAction(unsigned int actionCount);

	void setState(unsigned long long state, bool notifyClient = true);

	void clearState(unsigned long long state, bool notifyClient = true);

	unsigned int getWearableMask();

	int canAddObject(SceneObject* object);

	int onPositionUpdate();

	void activateQueueAction();

	UnicodeString getCreatureName();

	bool isRebel();

	bool isImperial();

	bool isNeurtral();

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

	unsigned long long getCreatureLinkID();

	float getShockWounds();

	bool isBlinded();

	bool isStunned();

	bool isAiming();

	unsigned long long getStateBitmask();

	bool hasState(unsigned long long state);

	unsigned long long getListenID();

	float getRunSpeed();

	float getWalkSpeed();

	float getTerrainNegotiation();

	float getRunAcceleration();

	float getWalkAcceleration();

	int getLevel();

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

	int getFaction();

	DeltaVector<int>* getBaseHAM();

	SkillBoxList* getSkillBoxList();

	long long getSkillMod(const String& skillmod);

	DeltaVectorMap<String, long long>* getSkillModList();

	void setHeight(float heigh);

	bool isKneeling();

	bool isProne();

	bool isInCover();

	bool isBerserked();

protected:
	CreatureObject(DummyConstructorParameter* param);

	virtual ~CreatureObject();

	TransactionalObject* clone();

	String _return_getMoodString;
	String _return_getPerformanceAnimation;

	UnicodeString _return_getCreatureName;

	friend class CreatureObjectHelper;
	friend class TransactionalObjectHandle<CreatureObject>;
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

	int faction;

	DeltaVector<int> baseHAM;

	byte posture;

	byte factionRank;

	unsigned long long creatureLinkID;

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

	short level;

	String performanceAnimation;

	String moodString;

	ManagedReference<WeaponObject > weapon;

	ManagedReference<GroupObject > group;

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

	CreatureObjectImplementation();

	CreatureObjectImplementation(DummyConstructorParameter* param);

	void finalize();

	void loadTemplateData(LuaObject* templateData);

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

	void setHAM(int type, int value, bool notifyClient = true);

	void setBaseHAM(int type, int value, bool notifyClient = true);

	void setWounds(int type, int value, bool notifyClient = true);

	void setMaxHAM(int type, int value, bool notifyClient = true);

	void setEncumbrance(int type, int value, bool notifyClient = true);

	void setWeapon(WeaponObject* weao, bool notifyClient = false);

	void setInstrumentID(int instrumentid, bool notifyClient = false);

	void setTargetID(unsigned long long targetID, bool notifyClient = false);

	void setBankCredits(int credits, bool notifyClient = true);

	void addBankCredits(int credits, bool notifyClient = true);

	void substractBankCredits(int credits);

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

	void deleteQueueAction(unsigned int actionCount);

	void setState(unsigned long long state, bool notifyClient = true);

	void clearState(unsigned long long state, bool notifyClient = true);

	unsigned int getWearableMask();

	int canAddObject(SceneObject* object);

	int onPositionUpdate();

	void activateQueueAction();

	UnicodeString getCreatureName();

	bool isRebel();

	bool isImperial();

	bool isNeurtral();

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

	unsigned long long getCreatureLinkID();

	float getShockWounds();

	bool isBlinded();

	bool isStunned();

	bool isAiming();

	unsigned long long getStateBitmask();

	bool hasState(unsigned long long state);

	unsigned long long getListenID();

	float getRunSpeed();

	float getWalkSpeed();

	float getTerrainNegotiation();

	float getRunAcceleration();

	float getWalkAcceleration();

	int getLevel();

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

	int getFaction();

	DeltaVector<int>* getBaseHAM();

	SkillBoxList* getSkillBoxList();

	long long getSkillMod(const String& skillmod);

	DeltaVectorMap<String, long long>* getSkillModList();

	void setHeight(float heigh);

	bool isKneeling();

	bool isProne();

	bool isInCover();

	bool isBerserked();

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

	void setHAM(int type, int value, bool notifyClient);

	void setBaseHAM(int type, int value, bool notifyClient);

	void setWounds(int type, int value, bool notifyClient);

	void setMaxHAM(int type, int value, bool notifyClient);

	void setEncumbrance(int type, int value, bool notifyClient);

	void setWeapon(WeaponObject* weao, bool notifyClient);

	void setInstrumentID(int instrumentid, bool notifyClient);

	void setTargetID(unsigned long long targetID, bool notifyClient);

	void setBankCredits(int credits, bool notifyClient);

	void addBankCredits(int credits, bool notifyClient);

	void substractBankCredits(int credits);

	void setCashCredits(int credits, bool notifyClient);

	void addSkillBox(const String& skillBox, bool notifyClient);

	void removeSkillBox(const String& skillBox, bool notifyClient);

	void addSkillMod(const String& skillMod, long long value, bool notifyClient);

	void removeSkillMod(const String& skillMod, bool notifyCLient);

	void updateGroupInviterID(unsigned long long id, bool notifyClient);

	void updateGroup(GroupObject* group, bool notifyClient);

	void enqueueCommand(unsigned int actionCRC, unsigned int actionCount, unsigned long long targetID, const UnicodeString& arguments);

	void setMood(byte moodID, bool notifyClient);

	void deleteQueueAction(unsigned int actionCount);

	void setState(unsigned long long state, bool notifyClient);

	void clearState(unsigned long long state, bool notifyClient);

	unsigned int getWearableMask();

	int canAddObject(SceneObject* object);

	int onPositionUpdate();

	void activateQueueAction();

	UnicodeString getCreatureName();

	bool isRebel();

	bool isImperial();

	bool isNeurtral();

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

	unsigned long long getCreatureLinkID();

	float getShockWounds();

	bool isBlinded();

	bool isStunned();

	bool isAiming();

	unsigned long long getStateBitmask();

	bool hasState(unsigned long long state);

	unsigned long long getListenID();

	float getRunSpeed();

	float getWalkSpeed();

	float getTerrainNegotiation();

	float getRunAcceleration();

	float getWalkAcceleration();

	int getLevel();

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

	int getFaction();

	long long getSkillMod(const String& skillmod);

	void setHeight(float heigh);

	bool isKneeling();

	bool isProne();

	bool isInCover();

	bool isBerserked();

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
	String _param0_getSkillMod__String_;
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
