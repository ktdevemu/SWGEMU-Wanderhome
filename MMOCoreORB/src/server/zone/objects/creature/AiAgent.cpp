/*
 *	server/zone/objects/creature/AiAgent.cpp generated by engine3 IDL compiler 0.60
 */

#include "AiAgent.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/creature/events/AiThinkEvent.h"

#include "server/zone/objects/creature/events/AiMoveEvent.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/objects/tangible/weapon/WeaponObject.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/templates/SharedObjectTemplate.h"

#include "server/zone/objects/creature/events/DespawnCreatureOnPlayerDissappear.h"

/*
 *	AiAgentStub
 */

AiAgent::AiAgent() : CreatureObject(DummyConstructorParameter::instance()) {
	_impl = new AiAgentImplementation();
	_impl->_setStub(this);
}

AiAgent::AiAgent(DummyConstructorParameter* param) : CreatureObject(param) {
}

AiAgent::~AiAgent() {
}


void AiAgent::initializeTransientMembers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((AiAgentImplementation*) _impl)->initializeTransientMembers();
}

void AiAgent::activateRecovery() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		((AiAgentImplementation*) _impl)->activateRecovery();
}

void AiAgent::activateMovementEvent() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		method.executeWithVoidReturn();
	} else
		((AiAgentImplementation*) _impl)->activateMovementEvent();
}

bool AiAgent::tryRetreat() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		return method.executeWithBooleanReturn();
	} else
		return ((AiAgentImplementation*) _impl)->tryRetreat();
}

void AiAgent::doRecovery() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		method.executeWithVoidReturn();
	} else
		((AiAgentImplementation*) _impl)->doRecovery();
}

void AiAgent::doMovement() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		method.executeWithVoidReturn();
	} else
		((AiAgentImplementation*) _impl)->doMovement();
}

void AiAgent::checkNewAngle() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		method.executeWithVoidReturn();
	} else
		((AiAgentImplementation*) _impl)->checkNewAngle();
}

void AiAgent::fillAttributeList(AttributeListMessage* msg, PlayerCreature* object) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addObjectParameter(msg);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		((AiAgentImplementation*) _impl)->fillAttributeList(msg, object);
}

void AiAgent::setNextPosition(float x, float z, float y, SceneObject* cell) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addFloatParameter(x);
		method.addFloatParameter(z);
		method.addFloatParameter(y);
		method.addObjectParameter(cell);

		method.executeWithVoidReturn();
	} else
		((AiAgentImplementation*) _impl)->setNextPosition(x, z, y, cell);
}

void AiAgent::updateCurrentPosition(PatrolPoint* point) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((AiAgentImplementation*) _impl)->updateCurrentPosition(point);
}

void AiAgent::broadcastNextPositionUpdate(PatrolPoint* point) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((AiAgentImplementation*) _impl)->broadcastNextPositionUpdate(point);
}

void AiAgent::clearPatrolPoints() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);

		method.executeWithVoidReturn();
	} else
		((AiAgentImplementation*) _impl)->clearPatrolPoints();
}

void AiAgent::notifyInsert(QuadTreeEntry* entry) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((AiAgentImplementation*) _impl)->notifyInsert(entry);
}

void AiAgent::notifyDissapear(QuadTreeEntry* entry) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((AiAgentImplementation*) _impl)->notifyDissapear(entry);
}

void AiAgent::notifyPositionUpdate(QuadTreeEntry* obj) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((AiAgentImplementation*) _impl)->notifyPositionUpdate(obj);
}

void AiAgent::loadTemplateData(SharedObjectTemplate* templateData) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((AiAgentImplementation*) _impl)->loadTemplateData(templateData);
}

int AiAgent::inflictDamage(TangibleObject* attacker, int damageType, int damage, bool destroy, bool notifyClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addObjectParameter(attacker);
		method.addSignedIntParameter(damageType);
		method.addSignedIntParameter(damage);
		method.addBooleanParameter(destroy);
		method.addBooleanParameter(notifyClient);

		return method.executeWithSignedIntReturn();
	} else
		return ((AiAgentImplementation*) _impl)->inflictDamage(attacker, damageType, damage, destroy, notifyClient);
}

int AiAgent::notifyObjectDestructionObservers(TangibleObject* attacker, int condition) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addObjectParameter(attacker);
		method.addSignedIntParameter(condition);

		return method.executeWithSignedIntReturn();
	} else
		return ((AiAgentImplementation*) _impl)->notifyObjectDestructionObservers(attacker, condition);
}

void AiAgent::activatePostureRecovery() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);

		method.executeWithVoidReturn();
	} else
		((AiAgentImplementation*) _impl)->activatePostureRecovery();
}

void AiAgent::clearCombatState(bool clearDefenders) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addBooleanParameter(clearDefenders);

		method.executeWithVoidReturn();
	} else
		((AiAgentImplementation*) _impl)->clearCombatState(clearDefenders);
}

void AiAgent::setDefender(SceneObject* defender) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);
		method.addObjectParameter(defender);

		method.executeWithVoidReturn();
	} else
		((AiAgentImplementation*) _impl)->setDefender(defender);
}

void AiAgent::addDefender(SceneObject* defender) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);
		method.addObjectParameter(defender);

		method.executeWithVoidReturn();
	} else
		((AiAgentImplementation*) _impl)->addDefender(defender);
}

void AiAgent::removeDefender(SceneObject* defender) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);
		method.addObjectParameter(defender);

		method.executeWithVoidReturn();
	} else
		((AiAgentImplementation*) _impl)->removeDefender(defender);
}

void AiAgent::setDespawnOnNoPlayerInRange(bool val) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);
		method.addBooleanParameter(val);

		method.executeWithVoidReturn();
	} else
		((AiAgentImplementation*) _impl)->setDespawnOnNoPlayerInRange(val);
}

void AiAgent::setHomeLocation(float x, float z, float y, SceneObject* cell) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);
		method.addFloatParameter(x);
		method.addFloatParameter(z);
		method.addFloatParameter(y);
		method.addObjectParameter(cell);

		method.executeWithVoidReturn();
	} else
		((AiAgentImplementation*) _impl)->setHomeLocation(x, z, y, cell);
}

bool AiAgent::isAttackableBy(CreatureObject* object) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);
		method.addObjectParameter(object);

		return method.executeWithBooleanReturn();
	} else
		return ((AiAgentImplementation*) _impl)->isAttackableBy(object);
}

void AiAgent::setFollowObject(SceneObject* obj) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);
		method.addObjectParameter(obj);

		method.executeWithVoidReturn();
	} else
		((AiAgentImplementation*) _impl)->setFollowObject(obj);
}

bool AiAgent::isRetreating() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);

		return method.executeWithBooleanReturn();
	} else
		return ((AiAgentImplementation*) _impl)->isRetreating();
}

void AiAgent::clearDespawnEvent() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);

		method.executeWithVoidReturn();
	} else
		((AiAgentImplementation*) _impl)->clearDespawnEvent();
}

float AiAgent::getKinetic() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);

		return method.executeWithFloatReturn();
	} else
		return ((AiAgentImplementation*) _impl)->getKinetic();
}

float AiAgent::getEnergy() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);

		return method.executeWithFloatReturn();
	} else
		return ((AiAgentImplementation*) _impl)->getEnergy();
}

float AiAgent::getElectricity() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);

		return method.executeWithFloatReturn();
	} else
		return ((AiAgentImplementation*) _impl)->getElectricity();
}

float AiAgent::getStun() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);

		return method.executeWithFloatReturn();
	} else
		return ((AiAgentImplementation*) _impl)->getStun();
}

float AiAgent::getBlast() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);

		return method.executeWithFloatReturn();
	} else
		return ((AiAgentImplementation*) _impl)->getBlast();
}

float AiAgent::getHeat() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);

		return method.executeWithFloatReturn();
	} else
		return ((AiAgentImplementation*) _impl)->getHeat();
}

float AiAgent::getCold() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 35);

		return method.executeWithFloatReturn();
	} else
		return ((AiAgentImplementation*) _impl)->getCold();
}

float AiAgent::getAcid() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 36);

		return method.executeWithFloatReturn();
	} else
		return ((AiAgentImplementation*) _impl)->getAcid();
}

float AiAgent::getLightSaber() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 37);

		return method.executeWithFloatReturn();
	} else
		return ((AiAgentImplementation*) _impl)->getLightSaber();
}

bool AiAgent::isStalker() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 38);

		return method.executeWithBooleanReturn();
	} else
		return ((AiAgentImplementation*) _impl)->isStalker();
}

bool AiAgent::isBaby() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 39);

		return method.executeWithBooleanReturn();
	} else
		return ((AiAgentImplementation*) _impl)->isBaby();
}

bool AiAgent::isKiller() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 40);

		return method.executeWithBooleanReturn();
	} else
		return ((AiAgentImplementation*) _impl)->isKiller();
}

float AiAgent::getTame() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 41);

		return method.executeWithFloatReturn();
	} else
		return ((AiAgentImplementation*) _impl)->getTame();
}

String AiAgent::getMeatType() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 42);

		method.executeWithAsciiReturn(_return_getMeatType);
		return _return_getMeatType;
	} else
		return ((AiAgentImplementation*) _impl)->getMeatType();
}

String AiAgent::getBoneType() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 43);

		method.executeWithAsciiReturn(_return_getBoneType);
		return _return_getBoneType;
	} else
		return ((AiAgentImplementation*) _impl)->getBoneType();
}

String AiAgent::getHideType() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 44);

		method.executeWithAsciiReturn(_return_getHideType);
		return _return_getHideType;
	} else
		return ((AiAgentImplementation*) _impl)->getHideType();
}

float AiAgent::getMilk() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 45);

		return method.executeWithFloatReturn();
	} else
		return ((AiAgentImplementation*) _impl)->getMilk();
}

float AiAgent::getHideMax() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 46);

		return method.executeWithFloatReturn();
	} else
		return ((AiAgentImplementation*) _impl)->getHideMax();
}

float AiAgent::getBoneMax() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 47);

		return method.executeWithFloatReturn();
	} else
		return ((AiAgentImplementation*) _impl)->getBoneMax();
}

float AiAgent::getMeatMax() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 48);

		return method.executeWithFloatReturn();
	} else
		return ((AiAgentImplementation*) _impl)->getMeatMax();
}

unsigned int AiAgent::getFerocity() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 49);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((AiAgentImplementation*) _impl)->getFerocity();
}

unsigned int AiAgent::getArmor() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 50);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((AiAgentImplementation*) _impl)->getArmor();
}

bool AiAgent::getDespawnOnNoPlayerInRange() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 51);

		return method.executeWithBooleanReturn();
	} else
		return ((AiAgentImplementation*) _impl)->getDespawnOnNoPlayerInRange();
}

int AiAgent::getNumberOfPlayersInRange() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 52);

		return method.executeWithSignedIntReturn();
	} else
		return ((AiAgentImplementation*) _impl)->getNumberOfPlayersInRange();
}

DamageMap* AiAgent::getDamageMap() {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((AiAgentImplementation*) _impl)->getDamageMap();
}

PatrolPoint* AiAgent::getHomeLocation() {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((AiAgentImplementation*) _impl)->getHomeLocation();
}

bool AiAgent::hasOrganics() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 53);

		return method.executeWithBooleanReturn();
	} else
		return ((AiAgentImplementation*) _impl)->hasOrganics();
}

bool AiAgent::isAiAgent() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 54);

		return method.executeWithBooleanReturn();
	} else
		return ((AiAgentImplementation*) _impl)->isAiAgent();
}

/*
 *	AiAgentImplementation
 */

AiAgentImplementation::AiAgentImplementation(DummyConstructorParameter* param) : CreatureObjectImplementation(param) {
	_initializeImplementation();
}

AiAgentImplementation::~AiAgentImplementation() {
}


void AiAgentImplementation::finalize() {
}

void AiAgentImplementation::_initializeImplementation() {
	_setClassHelper(AiAgentHelper::instance());

	_serializationHelperMethod();
}

void AiAgentImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (AiAgent*) stub;
	CreatureObjectImplementation::_setStub(stub);
}

DistributedObjectStub* AiAgentImplementation::_getStub() {
	return _this;
}

AiAgentImplementation::operator const AiAgent*() {
	return _this;
}

void AiAgentImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void AiAgentImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void AiAgentImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void AiAgentImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void AiAgentImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void AiAgentImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void AiAgentImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void AiAgentImplementation::_serializationHelperMethod() {
	CreatureObjectImplementation::_serializationHelperMethod();

	_setClassName("AiAgent");

	addSerializableVariable("thinkEvent", &thinkEvent);
	addSerializableVariable("moveEvent", &moveEvent);
	addSerializableVariable("skillCommands", &skillCommands);
	addSerializableVariable("patrolPoints", &patrolPoints);
	addSerializableVariable("homeLocation", &homeLocation);
	addSerializableVariable("nextStepPosition", &nextStepPosition);
	addSerializableVariable("damageMap", &damageMap);
	addSerializableVariable("baby", &baby);
	addSerializableVariable("currentSpeed", &currentSpeed);
	addSerializableVariable("despawnOnNoPlayerInRange", &despawnOnNoPlayerInRange);
	addSerializableVariable("followObject", &followObject);
	addSerializableVariable("numberOfPlayersInRange", &numberOfPlayersInRange);
}

AiAgentImplementation::AiAgentImplementation() {
	_initializeImplementation();
	// server/zone/objects/creature/AiAgent.idl(109):  		baby = false;
	baby = false;
	// server/zone/objects/creature/AiAgent.idl(111):  		currentSpeed = 0;
	currentSpeed = 0;
	// server/zone/objects/creature/AiAgent.idl(113):  		despawnOnNoPlayerInRange = true;
	despawnOnNoPlayerInRange = true;
	// server/zone/objects/creature/AiAgent.idl(114):  		numberOfPlayersInRange = 0;
	numberOfPlayersInRange = 0;
	// server/zone/objects/creature/AiAgent.idl(116):  		npcTemplate = null;
	npcTemplate = NULL;
	// server/zone/objects/creature/AiAgent.idl(118):  		Logger.setLoggingName("AiAgent");
	Logger::setLoggingName("AiAgent");
	// server/zone/objects/creature/AiAgent.idl(119):  		Logger.setLogging(false);
	Logger::setLogging(false);
	// server/zone/objects/creature/AiAgent.idl(120):  		Logger.setGlobalLogging(true);
	Logger::setGlobalLogging(true);
}

void AiAgentImplementation::clearPatrolPoints() {
	// server/zone/objects/creature/AiAgent.idl(153):  		patrolPoints.removeAll();
	(&patrolPoints)->removeAll();
}

void AiAgentImplementation::setHomeLocation(float x, float z, float y, SceneObject* cell) {
	// server/zone/objects/creature/AiAgent.idl(227):  		homeLocation.setPosition(x, z, y);
	(&homeLocation)->setPosition(x, z, y);
	// server/zone/objects/creature/AiAgent.idl(228):  		homeLocation.setCell(cell);
	(&homeLocation)->setCell(cell);
	// server/zone/objects/creature/AiAgent.idl(229):  		homeLocation.setReached(true);
	(&homeLocation)->setReached(true);
}

bool AiAgentImplementation::isAttackableBy(CreatureObject* object) {
	// server/zone/objects/creature/AiAgent.idl(239):  		if 
	if (object == _this)	// server/zone/objects/creature/AiAgent.idl(240):  			return false;
	return false;
	// server/zone/objects/creature/AiAgent.idl(242):  		if 
	if (_this->isRetreating())	// server/zone/objects/creature/AiAgent.idl(243):  			return false;
	return false;
	// server/zone/objects/creature/AiAgent.idl(245):  		return 
	if (_this->isDead())	// server/zone/objects/creature/AiAgent.idl(246):  			return false;
	return false;
	// server/zone/objects/creature/AiAgent.idl(248):  true;
	return true;
}

void AiAgentImplementation::setFollowObject(SceneObject* obj) {
	// server/zone/objects/creature/AiAgent.idl(252):  	}
	if (followObject != obj){
	// server/zone/objects/creature/AiAgent.idl(253):  			clearPatrolPoints();
	clearPatrolPoints();
	// server/zone/objects/creature/AiAgent.idl(255):  			followObject = obj;
	followObject = obj;
	// server/zone/objects/creature/AiAgent.idl(257):  			activateMovementEvent();
	activateMovementEvent();
}
}

bool AiAgentImplementation::isRetreating() {
	// server/zone/objects/creature/AiAgent.idl(262):  		return !homeLocation.isReached();
	return !(&homeLocation)->isReached();
}

float AiAgentImplementation::getKinetic() {
	// server/zone/objects/creature/AiAgent.idl(268):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/AiAgent.idl(269):  			return 0;
	return 0;
	// server/zone/objects/creature/AiAgent.idl(271):  npcTemplate.getKinetic();
	return npcTemplate->getKinetic();
}

float AiAgentImplementation::getEnergy() {
	// server/zone/objects/creature/AiAgent.idl(275):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/AiAgent.idl(276):  			return 0;
	return 0;
	// server/zone/objects/creature/AiAgent.idl(278):  npcTemplate.getEnergy();
	return npcTemplate->getEnergy();
}

float AiAgentImplementation::getElectricity() {
	// server/zone/objects/creature/AiAgent.idl(282):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/AiAgent.idl(283):  			return 0;
	return 0;
	// server/zone/objects/creature/AiAgent.idl(285):  npcTemplate.getElectricity();
	return npcTemplate->getElectricity();
}

float AiAgentImplementation::getStun() {
	// server/zone/objects/creature/AiAgent.idl(289):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/AiAgent.idl(290):  			return 0;
	return 0;
	// server/zone/objects/creature/AiAgent.idl(292):  npcTemplate.getStun();
	return npcTemplate->getStun();
}

float AiAgentImplementation::getBlast() {
	// server/zone/objects/creature/AiAgent.idl(296):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/AiAgent.idl(297):  			return 0;
	return 0;
	// server/zone/objects/creature/AiAgent.idl(299):  npcTemplate.getBlast();
	return npcTemplate->getBlast();
}

float AiAgentImplementation::getHeat() {
	// server/zone/objects/creature/AiAgent.idl(303):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/AiAgent.idl(304):  			return 0;
	return 0;
	// server/zone/objects/creature/AiAgent.idl(306):  npcTemplate.getHeat();
	return npcTemplate->getHeat();
}

float AiAgentImplementation::getCold() {
	// server/zone/objects/creature/AiAgent.idl(310):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/AiAgent.idl(311):  			return 0;
	return 0;
	// server/zone/objects/creature/AiAgent.idl(313):  npcTemplate.getCold();
	return npcTemplate->getCold();
}

float AiAgentImplementation::getAcid() {
	// server/zone/objects/creature/AiAgent.idl(317):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/AiAgent.idl(318):  			return 0;
	return 0;
	// server/zone/objects/creature/AiAgent.idl(320):  npcTemplate.getAcid();
	return npcTemplate->getAcid();
}

float AiAgentImplementation::getLightSaber() {
	// server/zone/objects/creature/AiAgent.idl(324):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/AiAgent.idl(325):  			return 0;
	return 0;
	// server/zone/objects/creature/AiAgent.idl(327):  npcTemplate.getLightSaber();
	return npcTemplate->getLightSaber();
}

bool AiAgentImplementation::isStalker() {
	// server/zone/objects/creature/AiAgent.idl(331):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/AiAgent.idl(332):  			return false;
	return false;
	// server/zone/objects/creature/AiAgent.idl(334):  npcTemplate.isStalker();
	return npcTemplate->isStalker();
}

bool AiAgentImplementation::isBaby() {
	// server/zone/objects/creature/AiAgent.idl(338):  		return baby;
	return baby;
}

bool AiAgentImplementation::isKiller() {
	// server/zone/objects/creature/AiAgent.idl(342):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/AiAgent.idl(343):  			return false;
	return false;
	// server/zone/objects/creature/AiAgent.idl(345):  npcTemplate.isKiller();
	return npcTemplate->isKiller();
}

float AiAgentImplementation::getTame() {
	// server/zone/objects/creature/AiAgent.idl(349):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/AiAgent.idl(350):  			return 0;
	return 0;
	// server/zone/objects/creature/AiAgent.idl(352):  npcTemplate.getTame();
	return npcTemplate->getTame();
}

String AiAgentImplementation::getMeatType() {
	// server/zone/objects/creature/AiAgent.idl(356):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/AiAgent.idl(357):  			return "";
	return "";
	// server/zone/objects/creature/AiAgent.idl(359):  npcTemplate.getMeatType();
	return npcTemplate->getMeatType();
}

String AiAgentImplementation::getBoneType() {
	// server/zone/objects/creature/AiAgent.idl(363):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/AiAgent.idl(364):  			return "";
	return "";
	// server/zone/objects/creature/AiAgent.idl(366):  npcTemplate.getBoneType();
	return npcTemplate->getBoneType();
}

String AiAgentImplementation::getHideType() {
	// server/zone/objects/creature/AiAgent.idl(370):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/AiAgent.idl(371):  			return "";
	return "";
	// server/zone/objects/creature/AiAgent.idl(373):  npcTemplate.getHideType();
	return npcTemplate->getHideType();
}

float AiAgentImplementation::getMilk() {
	// server/zone/objects/creature/AiAgent.idl(377):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/AiAgent.idl(378):  			return 0;
	return 0;
	// server/zone/objects/creature/AiAgent.idl(380):  npcTemplate.getMilk();
	return npcTemplate->getMilk();
}

float AiAgentImplementation::getHideMax() {
	// server/zone/objects/creature/AiAgent.idl(384):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/AiAgent.idl(385):  			return 0;
	return 0;
	// server/zone/objects/creature/AiAgent.idl(387):  npcTemplate.getHideMax();
	return npcTemplate->getHideMax();
}

float AiAgentImplementation::getBoneMax() {
	// server/zone/objects/creature/AiAgent.idl(391):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/AiAgent.idl(392):  			return 0;
	return 0;
	// server/zone/objects/creature/AiAgent.idl(394):  npcTemplate.getBoneMax();
	return npcTemplate->getBoneMax();
}

float AiAgentImplementation::getMeatMax() {
	// server/zone/objects/creature/AiAgent.idl(398):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/AiAgent.idl(399):  			return 0;
	return 0;
	// server/zone/objects/creature/AiAgent.idl(401):  npcTemplate.getMeatMax();
	return npcTemplate->getMeatMax();
}

unsigned int AiAgentImplementation::getFerocity() {
	// server/zone/objects/creature/AiAgent.idl(405):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/AiAgent.idl(406):  			return 0;
	return 0;
	// server/zone/objects/creature/AiAgent.idl(408):  npcTemplate.getFerocity();
	return npcTemplate->getFerocity();
}

unsigned int AiAgentImplementation::getArmor() {
	// server/zone/objects/creature/AiAgent.idl(412):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/AiAgent.idl(413):  			return 0;
	return 0;
	// server/zone/objects/creature/AiAgent.idl(415):  npcTemplate.getArmor();
	return npcTemplate->getArmor();
}

bool AiAgentImplementation::getDespawnOnNoPlayerInRange() {
	// server/zone/objects/creature/AiAgent.idl(419):  		return despawnOnNoPlayerInRange;
	return despawnOnNoPlayerInRange;
}

int AiAgentImplementation::getNumberOfPlayersInRange() {
	// server/zone/objects/creature/AiAgent.idl(423):  		return numberOfPlayersInRange;
	return numberOfPlayersInRange;
}

DamageMap* AiAgentImplementation::getDamageMap() {
	// server/zone/objects/creature/AiAgent.idl(428):  		return damageMap;
	return (&damageMap);
}

PatrolPoint* AiAgentImplementation::getHomeLocation() {
	// server/zone/objects/creature/AiAgent.idl(433):  		return homeLocation;
	return (&homeLocation);
}

bool AiAgentImplementation::isAiAgent() {
	// server/zone/objects/creature/AiAgent.idl(439):  		return true;
	return true;
}

/*
 *	AiAgentAdapter
 */

AiAgentAdapter::AiAgentAdapter(AiAgentImplementation* obj) : CreatureObjectAdapter(obj) {
}

Packet* AiAgentAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		activateRecovery();
		break;
	case 8:
		activateMovementEvent();
		break;
	case 9:
		resp->insertBoolean(tryRetreat());
		break;
	case 10:
		doRecovery();
		break;
	case 11:
		doMovement();
		break;
	case 12:
		checkNewAngle();
		break;
	case 13:
		fillAttributeList((AttributeListMessage*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter());
		break;
	case 14:
		setNextPosition(inv->getFloatParameter(), inv->getFloatParameter(), inv->getFloatParameter(), (SceneObject*) inv->getObjectParameter());
		break;
	case 15:
		clearPatrolPoints();
		break;
	case 16:
		resp->insertSignedInt(inflictDamage((TangibleObject*) inv->getObjectParameter(), inv->getSignedIntParameter(), inv->getSignedIntParameter(), inv->getBooleanParameter(), inv->getBooleanParameter()));
		break;
	case 17:
		resp->insertSignedInt(notifyObjectDestructionObservers((TangibleObject*) inv->getObjectParameter(), inv->getSignedIntParameter()));
		break;
	case 18:
		activatePostureRecovery();
		break;
	case 19:
		clearCombatState(inv->getBooleanParameter());
		break;
	case 20:
		setDefender((SceneObject*) inv->getObjectParameter());
		break;
	case 21:
		addDefender((SceneObject*) inv->getObjectParameter());
		break;
	case 22:
		removeDefender((SceneObject*) inv->getObjectParameter());
		break;
	case 23:
		setDespawnOnNoPlayerInRange(inv->getBooleanParameter());
		break;
	case 24:
		setHomeLocation(inv->getFloatParameter(), inv->getFloatParameter(), inv->getFloatParameter(), (SceneObject*) inv->getObjectParameter());
		break;
	case 25:
		resp->insertBoolean(isAttackableBy((CreatureObject*) inv->getObjectParameter()));
		break;
	case 26:
		setFollowObject((SceneObject*) inv->getObjectParameter());
		break;
	case 27:
		resp->insertBoolean(isRetreating());
		break;
	case 28:
		clearDespawnEvent();
		break;
	case 29:
		resp->insertFloat(getKinetic());
		break;
	case 30:
		resp->insertFloat(getEnergy());
		break;
	case 31:
		resp->insertFloat(getElectricity());
		break;
	case 32:
		resp->insertFloat(getStun());
		break;
	case 33:
		resp->insertFloat(getBlast());
		break;
	case 34:
		resp->insertFloat(getHeat());
		break;
	case 35:
		resp->insertFloat(getCold());
		break;
	case 36:
		resp->insertFloat(getAcid());
		break;
	case 37:
		resp->insertFloat(getLightSaber());
		break;
	case 38:
		resp->insertBoolean(isStalker());
		break;
	case 39:
		resp->insertBoolean(isBaby());
		break;
	case 40:
		resp->insertBoolean(isKiller());
		break;
	case 41:
		resp->insertFloat(getTame());
		break;
	case 42:
		resp->insertAscii(getMeatType());
		break;
	case 43:
		resp->insertAscii(getBoneType());
		break;
	case 44:
		resp->insertAscii(getHideType());
		break;
	case 45:
		resp->insertFloat(getMilk());
		break;
	case 46:
		resp->insertFloat(getHideMax());
		break;
	case 47:
		resp->insertFloat(getBoneMax());
		break;
	case 48:
		resp->insertFloat(getMeatMax());
		break;
	case 49:
		resp->insertInt(getFerocity());
		break;
	case 50:
		resp->insertInt(getArmor());
		break;
	case 51:
		resp->insertBoolean(getDespawnOnNoPlayerInRange());
		break;
	case 52:
		resp->insertSignedInt(getNumberOfPlayersInRange());
		break;
	case 53:
		resp->insertBoolean(hasOrganics());
		break;
	case 54:
		resp->insertBoolean(isAiAgent());
		break;
	default:
		return NULL;
	}

	return resp;
}

void AiAgentAdapter::initializeTransientMembers() {
	((AiAgentImplementation*) impl)->initializeTransientMembers();
}

void AiAgentAdapter::activateRecovery() {
	((AiAgentImplementation*) impl)->activateRecovery();
}

void AiAgentAdapter::activateMovementEvent() {
	((AiAgentImplementation*) impl)->activateMovementEvent();
}

bool AiAgentAdapter::tryRetreat() {
	return ((AiAgentImplementation*) impl)->tryRetreat();
}

void AiAgentAdapter::doRecovery() {
	((AiAgentImplementation*) impl)->doRecovery();
}

void AiAgentAdapter::doMovement() {
	((AiAgentImplementation*) impl)->doMovement();
}

void AiAgentAdapter::checkNewAngle() {
	((AiAgentImplementation*) impl)->checkNewAngle();
}

void AiAgentAdapter::fillAttributeList(AttributeListMessage* msg, PlayerCreature* object) {
	((AiAgentImplementation*) impl)->fillAttributeList(msg, object);
}

void AiAgentAdapter::setNextPosition(float x, float z, float y, SceneObject* cell) {
	((AiAgentImplementation*) impl)->setNextPosition(x, z, y, cell);
}

void AiAgentAdapter::clearPatrolPoints() {
	((AiAgentImplementation*) impl)->clearPatrolPoints();
}

int AiAgentAdapter::inflictDamage(TangibleObject* attacker, int damageType, int damage, bool destroy, bool notifyClient) {
	return ((AiAgentImplementation*) impl)->inflictDamage(attacker, damageType, damage, destroy, notifyClient);
}

int AiAgentAdapter::notifyObjectDestructionObservers(TangibleObject* attacker, int condition) {
	return ((AiAgentImplementation*) impl)->notifyObjectDestructionObservers(attacker, condition);
}

void AiAgentAdapter::activatePostureRecovery() {
	((AiAgentImplementation*) impl)->activatePostureRecovery();
}

void AiAgentAdapter::clearCombatState(bool clearDefenders) {
	((AiAgentImplementation*) impl)->clearCombatState(clearDefenders);
}

void AiAgentAdapter::setDefender(SceneObject* defender) {
	((AiAgentImplementation*) impl)->setDefender(defender);
}

void AiAgentAdapter::addDefender(SceneObject* defender) {
	((AiAgentImplementation*) impl)->addDefender(defender);
}

void AiAgentAdapter::removeDefender(SceneObject* defender) {
	((AiAgentImplementation*) impl)->removeDefender(defender);
}

void AiAgentAdapter::setDespawnOnNoPlayerInRange(bool val) {
	((AiAgentImplementation*) impl)->setDespawnOnNoPlayerInRange(val);
}

void AiAgentAdapter::setHomeLocation(float x, float z, float y, SceneObject* cell) {
	((AiAgentImplementation*) impl)->setHomeLocation(x, z, y, cell);
}

bool AiAgentAdapter::isAttackableBy(CreatureObject* object) {
	return ((AiAgentImplementation*) impl)->isAttackableBy(object);
}

void AiAgentAdapter::setFollowObject(SceneObject* obj) {
	((AiAgentImplementation*) impl)->setFollowObject(obj);
}

bool AiAgentAdapter::isRetreating() {
	return ((AiAgentImplementation*) impl)->isRetreating();
}

void AiAgentAdapter::clearDespawnEvent() {
	((AiAgentImplementation*) impl)->clearDespawnEvent();
}

float AiAgentAdapter::getKinetic() {
	return ((AiAgentImplementation*) impl)->getKinetic();
}

float AiAgentAdapter::getEnergy() {
	return ((AiAgentImplementation*) impl)->getEnergy();
}

float AiAgentAdapter::getElectricity() {
	return ((AiAgentImplementation*) impl)->getElectricity();
}

float AiAgentAdapter::getStun() {
	return ((AiAgentImplementation*) impl)->getStun();
}

float AiAgentAdapter::getBlast() {
	return ((AiAgentImplementation*) impl)->getBlast();
}

float AiAgentAdapter::getHeat() {
	return ((AiAgentImplementation*) impl)->getHeat();
}

float AiAgentAdapter::getCold() {
	return ((AiAgentImplementation*) impl)->getCold();
}

float AiAgentAdapter::getAcid() {
	return ((AiAgentImplementation*) impl)->getAcid();
}

float AiAgentAdapter::getLightSaber() {
	return ((AiAgentImplementation*) impl)->getLightSaber();
}

bool AiAgentAdapter::isStalker() {
	return ((AiAgentImplementation*) impl)->isStalker();
}

bool AiAgentAdapter::isBaby() {
	return ((AiAgentImplementation*) impl)->isBaby();
}

bool AiAgentAdapter::isKiller() {
	return ((AiAgentImplementation*) impl)->isKiller();
}

float AiAgentAdapter::getTame() {
	return ((AiAgentImplementation*) impl)->getTame();
}

String AiAgentAdapter::getMeatType() {
	return ((AiAgentImplementation*) impl)->getMeatType();
}

String AiAgentAdapter::getBoneType() {
	return ((AiAgentImplementation*) impl)->getBoneType();
}

String AiAgentAdapter::getHideType() {
	return ((AiAgentImplementation*) impl)->getHideType();
}

float AiAgentAdapter::getMilk() {
	return ((AiAgentImplementation*) impl)->getMilk();
}

float AiAgentAdapter::getHideMax() {
	return ((AiAgentImplementation*) impl)->getHideMax();
}

float AiAgentAdapter::getBoneMax() {
	return ((AiAgentImplementation*) impl)->getBoneMax();
}

float AiAgentAdapter::getMeatMax() {
	return ((AiAgentImplementation*) impl)->getMeatMax();
}

unsigned int AiAgentAdapter::getFerocity() {
	return ((AiAgentImplementation*) impl)->getFerocity();
}

unsigned int AiAgentAdapter::getArmor() {
	return ((AiAgentImplementation*) impl)->getArmor();
}

bool AiAgentAdapter::getDespawnOnNoPlayerInRange() {
	return ((AiAgentImplementation*) impl)->getDespawnOnNoPlayerInRange();
}

int AiAgentAdapter::getNumberOfPlayersInRange() {
	return ((AiAgentImplementation*) impl)->getNumberOfPlayersInRange();
}

bool AiAgentAdapter::hasOrganics() {
	return ((AiAgentImplementation*) impl)->hasOrganics();
}

bool AiAgentAdapter::isAiAgent() {
	return ((AiAgentImplementation*) impl)->isAiAgent();
}

/*
 *	AiAgentHelper
 */

AiAgentHelper* AiAgentHelper::staticInitializer = AiAgentHelper::instance();

AiAgentHelper::AiAgentHelper() {
	className = "AiAgent";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void AiAgentHelper::finalizeHelper() {
	AiAgentHelper::finalize();
}

DistributedObject* AiAgentHelper::instantiateObject() {
	return new AiAgent(DummyConstructorParameter::instance());
}

DistributedObjectServant* AiAgentHelper::instantiateServant() {
	return new AiAgentImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* AiAgentHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new AiAgentAdapter((AiAgentImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

