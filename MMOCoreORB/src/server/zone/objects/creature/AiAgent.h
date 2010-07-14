/*
 *	server/zone/objects/creature/AiAgent.h generated by engine3 IDL compiler 0.60
 */

#ifndef AIAGENT_H_
#define AIAGENT_H_

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
namespace creature {
namespace events {

class AiThinkEvent;

} // namespace events
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::events;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace events {

class AiMoveEvent;

} // namespace events
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::events;

namespace server {
namespace zone {
namespace packets {
namespace scene {

class AttributeListMessage;

} // namespace scene
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::scene;

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
namespace creature {
namespace events {

class DespawnCreatureOnPlayerDissappear;

} // namespace events
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::events;

#include "server/zone/templates/tangible/NonPlayerCreatureObjectTemplate.h"

#include "server/zone/objects/creature/PatrolPointsVector.h"

#include "server/zone/objects/creature/PatrolPoint.h"

#include "server/zone/objects/creature/DamageMap.h"

#include "server/zone/templates/SharedObjectTemplate.h"

#include "engine/lua/LuaObject.h"

#include "system/util/Vector.h"

#include "system/lang/Time.h"

#include "system/util/SortedVector.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "system/lang/ref/Reference.h"

#include "engine/core/ManagedObject.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {

class AiAgent : public CreatureObject {
public:
	static const int UPDATEMOVEMENTINTERVAL = 250;

	AiAgent();

	void initializeTransientMembers();

	void activateRecovery();

	void activateMovementEvent();

	void retreat();

	void doRecovery();

	void doMovement();

	void checkNewAngle();

	void fillAttributeList(AttributeListMessage* msg, PlayerCreature* object);

	void setNextPosition(float x, float z, float y, SceneObject* cell = NULL);

	void updateCurrentPosition(PatrolPoint* point);

	void broadcastNextPositionUpdate(PatrolPoint* point);

	void clearPatrolPoints();

	void notifyInsert(QuadTreeEntry* entry);

	void notifyDissapear(QuadTreeEntry* entry);

	void notifyPositionUpdate(QuadTreeEntry* obj);

	void loadTemplateData(SharedObjectTemplate* templateData);

	int inflictDamage(TangibleObject* attacker, int damageType, int damage, bool destroy, bool notifyClient = true);

	int notifyObjectDestructionObservers(TangibleObject* attacker, int condition);

	void activatePostureRecovery();

	void clearCombatState(bool clearDefenders = true);

	void setDefender(SceneObject* defender);

	void addDefender(SceneObject* defender);

	void removeDefender(SceneObject* defender);

	bool isAttackableBy(CreatureObject* object);

	void setFollowObject(SceneObject* obj);

	void clearDespawnEvent();

	DamageMap* getDamageMap();

	float getKinetic();

	float getEnergy();

	float getElectricity();

	float getStun();

	float getBlast();

	float getHeat();

	float getCold();

	float getAcid();

	float getLightSaber();

	bool isStalker();

	bool isBaby();

	bool isKiller();

	float getTame();

	String getMeatType();

	String getBoneType();

	String getHideType();

	float getMilk();

	float getHideMax();

	float getBoneMax();

	float getMeatMax();

	unsigned int getFerocity();

	unsigned int getArmor();

	int getNumberOfPlayersInRange();

	PatrolPoint* getHomeLocation();

	void setDespawnOnNoPlayerInRange(bool val);

	bool hasOrganics();

	bool isAiAgent();

protected:
	AiAgent(DummyConstructorParameter* param);

	virtual ~AiAgent();

	String _return_getBoneType;
	String _return_getHideType;
	String _return_getMeatType;

	friend class AiAgentHelper;
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

class AiAgentImplementation : public CreatureObjectImplementation {
protected:
	Reference<AiThinkEvent*> thinkEvent;

	Reference<AiMoveEvent*> moveEvent;

	Vector<String> skillCommands;

	PatrolPointsVector patrolPoints;

	PatrolPoint homeLocation;

	PatrolPoint nextStepPosition;

	DamageMap damageMap;

	NonPlayerCreatureObjectTemplate* npcTemplate;

	bool baby;

	float currentSpeed;

	bool despawnOnNoPlayerInRange;

	ManagedWeakReference<SceneObject* > followObject;

	int numberOfPlayersInRange;

	Reference<DespawnCreatureOnPlayerDissappear*> despawnEvent;

public:
	static const int UPDATEMOVEMENTINTERVAL = 250;

	AiAgentImplementation();

	AiAgentImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	virtual void activateRecovery();

	virtual void activateMovementEvent();

	void retreat();

	void doRecovery();

	void doMovement();

	void checkNewAngle();

	void fillAttributeList(AttributeListMessage* msg, PlayerCreature* object);

	void setNextPosition(float x, float z, float y, SceneObject* cell = NULL);

	void updateCurrentPosition(PatrolPoint* point);

	void broadcastNextPositionUpdate(PatrolPoint* point);

	void clearPatrolPoints();

	void notifyInsert(QuadTreeEntry* entry);

	void notifyDissapear(QuadTreeEntry* entry);

	void notifyPositionUpdate(QuadTreeEntry* obj);

	void loadTemplateData(SharedObjectTemplate* templateData);

	int inflictDamage(TangibleObject* attacker, int damageType, int damage, bool destroy, bool notifyClient = true);

	int notifyObjectDestructionObservers(TangibleObject* attacker, int condition);

	void activatePostureRecovery();

	void clearCombatState(bool clearDefenders = true);

	void setDefender(SceneObject* defender);

	void addDefender(SceneObject* defender);

	void removeDefender(SceneObject* defender);

	bool isAttackableBy(CreatureObject* object);

	void setFollowObject(SceneObject* obj);

	void clearDespawnEvent();

	DamageMap* getDamageMap();

	float getKinetic();

	float getEnergy();

	float getElectricity();

	float getStun();

	float getBlast();

	float getHeat();

	float getCold();

	float getAcid();

	float getLightSaber();

	bool isStalker();

	bool isBaby();

	bool isKiller();

	float getTame();

	String getMeatType();

	String getBoneType();

	String getHideType();

	float getMilk();

	float getHideMax();

	float getBoneMax();

	float getMeatMax();

	unsigned int getFerocity();

	unsigned int getArmor();

	int getNumberOfPlayersInRange();

	PatrolPoint* getHomeLocation();

	void setDespawnOnNoPlayerInRange(bool val);

	bool hasOrganics();

	bool isAiAgent();

	AiAgent* _this;

	operator const AiAgent*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~AiAgentImplementation();

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

	friend class AiAgent;
};

class AiAgentAdapter : public CreatureObjectAdapter {
public:
	AiAgentAdapter(AiAgentImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void activateRecovery();

	void activateMovementEvent();

	void retreat();

	void doRecovery();

	void doMovement();

	void checkNewAngle();

	void fillAttributeList(AttributeListMessage* msg, PlayerCreature* object);

	void setNextPosition(float x, float z, float y, SceneObject* cell);

	void clearPatrolPoints();

	int inflictDamage(TangibleObject* attacker, int damageType, int damage, bool destroy, bool notifyClient);

	int notifyObjectDestructionObservers(TangibleObject* attacker, int condition);

	void activatePostureRecovery();

	void clearCombatState(bool clearDefenders);

	void setDefender(SceneObject* defender);

	void addDefender(SceneObject* defender);

	void removeDefender(SceneObject* defender);

	bool isAttackableBy(CreatureObject* object);

	void setFollowObject(SceneObject* obj);

	void clearDespawnEvent();

	float getKinetic();

	float getEnergy();

	float getElectricity();

	float getStun();

	float getBlast();

	float getHeat();

	float getCold();

	float getAcid();

	float getLightSaber();

	bool isStalker();

	bool isBaby();

	bool isKiller();

	float getTame();

	String getMeatType();

	String getBoneType();

	String getHideType();

	float getMilk();

	float getHideMax();

	float getBoneMax();

	float getMeatMax();

	unsigned int getFerocity();

	unsigned int getArmor();

	int getNumberOfPlayersInRange();

	void setDespawnOnNoPlayerInRange(bool val);

	bool hasOrganics();

	bool isAiAgent();

};

class AiAgentHelper : public DistributedObjectClassHelper, public Singleton<AiAgentHelper> {
	static AiAgentHelper* staticInitializer;

public:
	AiAgentHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<AiAgentHelper>;
};

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

#endif /*AIAGENT_H_*/
