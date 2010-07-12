/*
 *	server/zone/objects/creature/NonPlayerCreatureObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "NonPlayerCreatureObject.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/creature/events/CreatureThinkEvent.h"

#include "server/zone/objects/creature/events/CreatureMoveEvent.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/objects/player/PlayerCreature.h"

/*
 *	NonPlayerCreatureObjectStub
 */

NonPlayerCreatureObject::NonPlayerCreatureObject() : CreatureObject(DummyConstructorParameter::instance()) {
	_impl = new NonPlayerCreatureObjectImplementation();
	_impl->_setStub(this);
}

NonPlayerCreatureObject::NonPlayerCreatureObject(DummyConstructorParameter* param) : CreatureObject(param) {
}

NonPlayerCreatureObject::~NonPlayerCreatureObject() {
}


void NonPlayerCreatureObject::initializeTransientMembers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((NonPlayerCreatureObjectImplementation*) _impl)->initializeTransientMembers();
}

void NonPlayerCreatureObject::activateRecovery() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		((NonPlayerCreatureObjectImplementation*) _impl)->activateRecovery();
}

void NonPlayerCreatureObject::activateMovementEvent() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		method.executeWithVoidReturn();
	} else
		((NonPlayerCreatureObjectImplementation*) _impl)->activateMovementEvent();
}

void NonPlayerCreatureObject::doRecovery() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		method.executeWithVoidReturn();
	} else
		((NonPlayerCreatureObjectImplementation*) _impl)->doRecovery();
}

void NonPlayerCreatureObject::doMovement() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		method.executeWithVoidReturn();
	} else
		((NonPlayerCreatureObjectImplementation*) _impl)->doMovement();
}

void NonPlayerCreatureObject::fillAttributeList(AttributeListMessage* msg, PlayerCreature* object) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addObjectParameter(msg);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		((NonPlayerCreatureObjectImplementation*) _impl)->fillAttributeList(msg, object);
}

void NonPlayerCreatureObject::setNextPosition(float x, float z, float y, SceneObject* cell) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addFloatParameter(x);
		method.addFloatParameter(z);
		method.addFloatParameter(y);
		method.addObjectParameter(cell);

		method.executeWithVoidReturn();
	} else
		((NonPlayerCreatureObjectImplementation*) _impl)->setNextPosition(x, z, y, cell);
}

void NonPlayerCreatureObject::updateCurrentPosition(PatrolPoint* point) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((NonPlayerCreatureObjectImplementation*) _impl)->updateCurrentPosition(point);
}

void NonPlayerCreatureObject::broadcastNextPositionUpdate(PatrolPoint* point) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((NonPlayerCreatureObjectImplementation*) _impl)->broadcastNextPositionUpdate(point);
}

void NonPlayerCreatureObject::clearPatrolPoints() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		method.executeWithVoidReturn();
	} else
		((NonPlayerCreatureObjectImplementation*) _impl)->clearPatrolPoints();
}

void NonPlayerCreatureObject::loadTemplateData(SharedObjectTemplate* templateData) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((NonPlayerCreatureObjectImplementation*) _impl)->loadTemplateData(templateData);
}

int NonPlayerCreatureObject::inflictDamage(TangibleObject* attacker, int damageType, int damage, bool destroy, bool notifyClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addObjectParameter(attacker);
		method.addSignedIntParameter(damageType);
		method.addSignedIntParameter(damage);
		method.addBooleanParameter(destroy);
		method.addBooleanParameter(notifyClient);

		return method.executeWithSignedIntReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->inflictDamage(attacker, damageType, damage, destroy, notifyClient);
}

int NonPlayerCreatureObject::notifyObjectDestructionObservers(TangibleObject* attacker, int condition) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addObjectParameter(attacker);
		method.addSignedIntParameter(condition);

		return method.executeWithSignedIntReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->notifyObjectDestructionObservers(attacker, condition);
}

void NonPlayerCreatureObject::activatePostureRecovery() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);

		method.executeWithVoidReturn();
	} else
		((NonPlayerCreatureObjectImplementation*) _impl)->activatePostureRecovery();
}

bool NonPlayerCreatureObject::isAttackableBy(CreatureObject* object) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addObjectParameter(object);

		return method.executeWithBooleanReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->isAttackableBy(object);
}

bool NonPlayerCreatureObject::isNonPlayerCreature() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);

		return method.executeWithBooleanReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->isNonPlayerCreature();
}

void NonPlayerCreatureObject::setFollowObject(SceneObject* obj) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addObjectParameter(obj);

		method.executeWithVoidReturn();
	} else
		((NonPlayerCreatureObjectImplementation*) _impl)->setFollowObject(obj);
}

float NonPlayerCreatureObject::getKinetic() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);

		return method.executeWithFloatReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getKinetic();
}

float NonPlayerCreatureObject::getEnergy() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);

		return method.executeWithFloatReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getEnergy();
}

float NonPlayerCreatureObject::getElectricity() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);

		return method.executeWithFloatReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getElectricity();
}

float NonPlayerCreatureObject::getStun() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);

		return method.executeWithFloatReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getStun();
}

float NonPlayerCreatureObject::getBlast() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);

		return method.executeWithFloatReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getBlast();
}

float NonPlayerCreatureObject::getHeat() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);

		return method.executeWithFloatReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getHeat();
}

float NonPlayerCreatureObject::getCold() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);

		return method.executeWithFloatReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getCold();
}

float NonPlayerCreatureObject::getAcid() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);

		return method.executeWithFloatReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getAcid();
}

float NonPlayerCreatureObject::getLightSaber() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);

		return method.executeWithFloatReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getLightSaber();
}

bool NonPlayerCreatureObject::isStalker() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);

		return method.executeWithBooleanReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->isStalker();
}

bool NonPlayerCreatureObject::isBaby() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);

		return method.executeWithBooleanReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->isBaby();
}

bool NonPlayerCreatureObject::isKiller() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);

		return method.executeWithBooleanReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->isKiller();
}

float NonPlayerCreatureObject::getTame() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);

		return method.executeWithFloatReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getTame();
}

String NonPlayerCreatureObject::getMeatType() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);

		method.executeWithAsciiReturn(_return_getMeatType);
		return _return_getMeatType;
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getMeatType();
}

String NonPlayerCreatureObject::getBoneType() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);

		method.executeWithAsciiReturn(_return_getBoneType);
		return _return_getBoneType;
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getBoneType();
}

String NonPlayerCreatureObject::getHideType() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 35);

		method.executeWithAsciiReturn(_return_getHideType);
		return _return_getHideType;
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getHideType();
}

float NonPlayerCreatureObject::getMilk() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 36);

		return method.executeWithFloatReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getMilk();
}

float NonPlayerCreatureObject::getHideMax() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 37);

		return method.executeWithFloatReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getHideMax();
}

float NonPlayerCreatureObject::getBoneMax() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 38);

		return method.executeWithFloatReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getBoneMax();
}

float NonPlayerCreatureObject::getMeatMax() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 39);

		return method.executeWithFloatReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getMeatMax();
}

unsigned int NonPlayerCreatureObject::getFerocity() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 40);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getFerocity();
}

unsigned int NonPlayerCreatureObject::getArmor() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 41);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getArmor();
}

PatrolPoint* NonPlayerCreatureObject::getHomeLocation() {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->getHomeLocation();
}

bool NonPlayerCreatureObject::hasOrganics() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 42);

		return method.executeWithBooleanReturn();
	} else
		return ((NonPlayerCreatureObjectImplementation*) _impl)->hasOrganics();
}

/*
 *	NonPlayerCreatureObjectImplementation
 */

NonPlayerCreatureObjectImplementation::NonPlayerCreatureObjectImplementation(DummyConstructorParameter* param) : CreatureObjectImplementation(param) {
	_initializeImplementation();
}

NonPlayerCreatureObjectImplementation::~NonPlayerCreatureObjectImplementation() {
}


void NonPlayerCreatureObjectImplementation::finalize() {
}

void NonPlayerCreatureObjectImplementation::_initializeImplementation() {
	_setClassHelper(NonPlayerCreatureObjectHelper::instance());

	_serializationHelperMethod();
}

void NonPlayerCreatureObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (NonPlayerCreatureObject*) stub;
	CreatureObjectImplementation::_setStub(stub);
}

DistributedObjectStub* NonPlayerCreatureObjectImplementation::_getStub() {
	return _this;
}

NonPlayerCreatureObjectImplementation::operator const NonPlayerCreatureObject*() {
	return _this;
}

void NonPlayerCreatureObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void NonPlayerCreatureObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void NonPlayerCreatureObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void NonPlayerCreatureObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void NonPlayerCreatureObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void NonPlayerCreatureObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void NonPlayerCreatureObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void NonPlayerCreatureObjectImplementation::_serializationHelperMethod() {
	CreatureObjectImplementation::_serializationHelperMethod();

	_setClassName("NonPlayerCreatureObject");

	addSerializableVariable("thinkEvent", &thinkEvent);
	addSerializableVariable("moveEvent", &moveEvent);
	addSerializableVariable("skillCommands", &skillCommands);
	addSerializableVariable("patrolPoints", &patrolPoints);
	addSerializableVariable("homeLocation", &homeLocation);
	addSerializableVariable("nextStepPosition", &nextStepPosition);
	addSerializableVariable("baby", &baby);
	addSerializableVariable("currentSpeed", &currentSpeed);
	addSerializableVariable("followObject", &followObject);
}

NonPlayerCreatureObjectImplementation::NonPlayerCreatureObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(91):  		Logger.setLoggingName("NonPlayerCreatureObject");
	Logger::setLoggingName("NonPlayerCreatureObject");
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(92):  		Logger.setLogging(false);
	Logger::setLogging(false);
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(93):  		Logger.setGlobalLogging(true);
	Logger::setGlobalLogging(true);
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(95):  		baby = false;
	baby = false;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(97):  		currentSpeed = 0;
	currentSpeed = 0;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(99):  		npcTemplate = null;
	npcTemplate = NULL;
}

void NonPlayerCreatureObjectImplementation::clearPatrolPoints() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(128):  		patrolPoints.removeAll();
	(&patrolPoints)->removeAll();
}

bool NonPlayerCreatureObjectImplementation::isAttackableBy(CreatureObject* object) {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(165):  		if 
	if (object == _this)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(166):  			return false;
	return false;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(168):  		return 
	if (_this->isDead())	// server/zone/objects/creature/NonPlayerCreatureObject.idl(169):  			return false;
	return false;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(171):  true;
	return true;
}

bool NonPlayerCreatureObjectImplementation::isNonPlayerCreature() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(175):  		return true;
	return true;
}

void NonPlayerCreatureObjectImplementation::setFollowObject(SceneObject* obj) {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(179):  	}
	if (followObject != obj){
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(180):  			clearPatrolPoints();
	clearPatrolPoints();
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(182):  			followObject = obj;
	followObject = obj;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(184):  			activateMovementEvent();
	activateMovementEvent();
}
}

float NonPlayerCreatureObjectImplementation::getKinetic() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(189):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(190):  			return 0;
	return 0;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(192):  npcTemplate.getKinetic();
	return npcTemplate->getKinetic();
}

float NonPlayerCreatureObjectImplementation::getEnergy() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(196):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(197):  			return 0;
	return 0;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(199):  npcTemplate.getEnergy();
	return npcTemplate->getEnergy();
}

float NonPlayerCreatureObjectImplementation::getElectricity() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(203):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(204):  			return 0;
	return 0;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(206):  npcTemplate.getElectricity();
	return npcTemplate->getElectricity();
}

float NonPlayerCreatureObjectImplementation::getStun() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(210):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(211):  			return 0;
	return 0;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(213):  npcTemplate.getStun();
	return npcTemplate->getStun();
}

float NonPlayerCreatureObjectImplementation::getBlast() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(217):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(218):  			return 0;
	return 0;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(220):  npcTemplate.getBlast();
	return npcTemplate->getBlast();
}

float NonPlayerCreatureObjectImplementation::getHeat() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(224):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(225):  			return 0;
	return 0;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(227):  npcTemplate.getHeat();
	return npcTemplate->getHeat();
}

float NonPlayerCreatureObjectImplementation::getCold() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(231):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(232):  			return 0;
	return 0;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(234):  npcTemplate.getCold();
	return npcTemplate->getCold();
}

float NonPlayerCreatureObjectImplementation::getAcid() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(238):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(239):  			return 0;
	return 0;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(241):  npcTemplate.getAcid();
	return npcTemplate->getAcid();
}

float NonPlayerCreatureObjectImplementation::getLightSaber() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(245):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(246):  			return 0;
	return 0;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(248):  npcTemplate.getLightSaber();
	return npcTemplate->getLightSaber();
}

bool NonPlayerCreatureObjectImplementation::isStalker() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(252):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(253):  			return false;
	return false;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(255):  npcTemplate.isStalker();
	return npcTemplate->isStalker();
}

bool NonPlayerCreatureObjectImplementation::isBaby() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(259):  		return baby;
	return baby;
}

bool NonPlayerCreatureObjectImplementation::isKiller() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(263):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(264):  			return false;
	return false;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(266):  npcTemplate.isKiller();
	return npcTemplate->isKiller();
}

float NonPlayerCreatureObjectImplementation::getTame() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(270):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(271):  			return 0;
	return 0;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(273):  npcTemplate.getTame();
	return npcTemplate->getTame();
}

String NonPlayerCreatureObjectImplementation::getMeatType() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(277):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(278):  			return "";
	return "";
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(280):  npcTemplate.getMeatType();
	return npcTemplate->getMeatType();
}

String NonPlayerCreatureObjectImplementation::getBoneType() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(284):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(285):  			return "";
	return "";
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(287):  npcTemplate.getBoneType();
	return npcTemplate->getBoneType();
}

String NonPlayerCreatureObjectImplementation::getHideType() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(291):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(292):  			return "";
	return "";
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(294):  npcTemplate.getHideType();
	return npcTemplate->getHideType();
}

float NonPlayerCreatureObjectImplementation::getMilk() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(298):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(299):  			return 0;
	return 0;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(301):  npcTemplate.getMilk();
	return npcTemplate->getMilk();
}

float NonPlayerCreatureObjectImplementation::getHideMax() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(305):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(306):  			return 0;
	return 0;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(308):  npcTemplate.getHideMax();
	return npcTemplate->getHideMax();
}

float NonPlayerCreatureObjectImplementation::getBoneMax() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(312):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(313):  			return 0;
	return 0;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(315):  npcTemplate.getBoneMax();
	return npcTemplate->getBoneMax();
}

float NonPlayerCreatureObjectImplementation::getMeatMax() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(319):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(320):  			return 0;
	return 0;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(322):  npcTemplate.getMeatMax();
	return npcTemplate->getMeatMax();
}

unsigned int NonPlayerCreatureObjectImplementation::getFerocity() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(326):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(327):  			return 0;
	return 0;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(329):  npcTemplate.getFerocity();
	return npcTemplate->getFerocity();
}

unsigned int NonPlayerCreatureObjectImplementation::getArmor() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(333):  		return 
	if (npcTemplate == NULL)	// server/zone/objects/creature/NonPlayerCreatureObject.idl(334):  			return 0;
	return 0;
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(336):  npcTemplate.getArmor();
	return npcTemplate->getArmor();
}

PatrolPoint* NonPlayerCreatureObjectImplementation::getHomeLocation() {
	// server/zone/objects/creature/NonPlayerCreatureObject.idl(341):  		return homeLocation;
	return (&homeLocation);
}

/*
 *	NonPlayerCreatureObjectAdapter
 */

NonPlayerCreatureObjectAdapter::NonPlayerCreatureObjectAdapter(NonPlayerCreatureObjectImplementation* obj) : CreatureObjectAdapter(obj) {
}

Packet* NonPlayerCreatureObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
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
		doRecovery();
		break;
	case 10:
		doMovement();
		break;
	case 11:
		fillAttributeList((AttributeListMessage*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter());
		break;
	case 12:
		setNextPosition(inv->getFloatParameter(), inv->getFloatParameter(), inv->getFloatParameter(), (SceneObject*) inv->getObjectParameter());
		break;
	case 13:
		clearPatrolPoints();
		break;
	case 14:
		resp->insertSignedInt(inflictDamage((TangibleObject*) inv->getObjectParameter(), inv->getSignedIntParameter(), inv->getSignedIntParameter(), inv->getBooleanParameter(), inv->getBooleanParameter()));
		break;
	case 15:
		resp->insertSignedInt(notifyObjectDestructionObservers((TangibleObject*) inv->getObjectParameter(), inv->getSignedIntParameter()));
		break;
	case 16:
		activatePostureRecovery();
		break;
	case 17:
		resp->insertBoolean(isAttackableBy((CreatureObject*) inv->getObjectParameter()));
		break;
	case 18:
		resp->insertBoolean(isNonPlayerCreature());
		break;
	case 19:
		setFollowObject((SceneObject*) inv->getObjectParameter());
		break;
	case 20:
		resp->insertFloat(getKinetic());
		break;
	case 21:
		resp->insertFloat(getEnergy());
		break;
	case 22:
		resp->insertFloat(getElectricity());
		break;
	case 23:
		resp->insertFloat(getStun());
		break;
	case 24:
		resp->insertFloat(getBlast());
		break;
	case 25:
		resp->insertFloat(getHeat());
		break;
	case 26:
		resp->insertFloat(getCold());
		break;
	case 27:
		resp->insertFloat(getAcid());
		break;
	case 28:
		resp->insertFloat(getLightSaber());
		break;
	case 29:
		resp->insertBoolean(isStalker());
		break;
	case 30:
		resp->insertBoolean(isBaby());
		break;
	case 31:
		resp->insertBoolean(isKiller());
		break;
	case 32:
		resp->insertFloat(getTame());
		break;
	case 33:
		resp->insertAscii(getMeatType());
		break;
	case 34:
		resp->insertAscii(getBoneType());
		break;
	case 35:
		resp->insertAscii(getHideType());
		break;
	case 36:
		resp->insertFloat(getMilk());
		break;
	case 37:
		resp->insertFloat(getHideMax());
		break;
	case 38:
		resp->insertFloat(getBoneMax());
		break;
	case 39:
		resp->insertFloat(getMeatMax());
		break;
	case 40:
		resp->insertInt(getFerocity());
		break;
	case 41:
		resp->insertInt(getArmor());
		break;
	case 42:
		resp->insertBoolean(hasOrganics());
		break;
	default:
		return NULL;
	}

	return resp;
}

void NonPlayerCreatureObjectAdapter::initializeTransientMembers() {
	((NonPlayerCreatureObjectImplementation*) impl)->initializeTransientMembers();
}

void NonPlayerCreatureObjectAdapter::activateRecovery() {
	((NonPlayerCreatureObjectImplementation*) impl)->activateRecovery();
}

void NonPlayerCreatureObjectAdapter::activateMovementEvent() {
	((NonPlayerCreatureObjectImplementation*) impl)->activateMovementEvent();
}

void NonPlayerCreatureObjectAdapter::doRecovery() {
	((NonPlayerCreatureObjectImplementation*) impl)->doRecovery();
}

void NonPlayerCreatureObjectAdapter::doMovement() {
	((NonPlayerCreatureObjectImplementation*) impl)->doMovement();
}

void NonPlayerCreatureObjectAdapter::fillAttributeList(AttributeListMessage* msg, PlayerCreature* object) {
	((NonPlayerCreatureObjectImplementation*) impl)->fillAttributeList(msg, object);
}

void NonPlayerCreatureObjectAdapter::setNextPosition(float x, float z, float y, SceneObject* cell) {
	((NonPlayerCreatureObjectImplementation*) impl)->setNextPosition(x, z, y, cell);
}

void NonPlayerCreatureObjectAdapter::clearPatrolPoints() {
	((NonPlayerCreatureObjectImplementation*) impl)->clearPatrolPoints();
}

int NonPlayerCreatureObjectAdapter::inflictDamage(TangibleObject* attacker, int damageType, int damage, bool destroy, bool notifyClient) {
	return ((NonPlayerCreatureObjectImplementation*) impl)->inflictDamage(attacker, damageType, damage, destroy, notifyClient);
}

int NonPlayerCreatureObjectAdapter::notifyObjectDestructionObservers(TangibleObject* attacker, int condition) {
	return ((NonPlayerCreatureObjectImplementation*) impl)->notifyObjectDestructionObservers(attacker, condition);
}

void NonPlayerCreatureObjectAdapter::activatePostureRecovery() {
	((NonPlayerCreatureObjectImplementation*) impl)->activatePostureRecovery();
}

bool NonPlayerCreatureObjectAdapter::isAttackableBy(CreatureObject* object) {
	return ((NonPlayerCreatureObjectImplementation*) impl)->isAttackableBy(object);
}

bool NonPlayerCreatureObjectAdapter::isNonPlayerCreature() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->isNonPlayerCreature();
}

void NonPlayerCreatureObjectAdapter::setFollowObject(SceneObject* obj) {
	((NonPlayerCreatureObjectImplementation*) impl)->setFollowObject(obj);
}

float NonPlayerCreatureObjectAdapter::getKinetic() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getKinetic();
}

float NonPlayerCreatureObjectAdapter::getEnergy() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getEnergy();
}

float NonPlayerCreatureObjectAdapter::getElectricity() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getElectricity();
}

float NonPlayerCreatureObjectAdapter::getStun() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getStun();
}

float NonPlayerCreatureObjectAdapter::getBlast() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getBlast();
}

float NonPlayerCreatureObjectAdapter::getHeat() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getHeat();
}

float NonPlayerCreatureObjectAdapter::getCold() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getCold();
}

float NonPlayerCreatureObjectAdapter::getAcid() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getAcid();
}

float NonPlayerCreatureObjectAdapter::getLightSaber() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getLightSaber();
}

bool NonPlayerCreatureObjectAdapter::isStalker() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->isStalker();
}

bool NonPlayerCreatureObjectAdapter::isBaby() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->isBaby();
}

bool NonPlayerCreatureObjectAdapter::isKiller() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->isKiller();
}

float NonPlayerCreatureObjectAdapter::getTame() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getTame();
}

String NonPlayerCreatureObjectAdapter::getMeatType() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getMeatType();
}

String NonPlayerCreatureObjectAdapter::getBoneType() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getBoneType();
}

String NonPlayerCreatureObjectAdapter::getHideType() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getHideType();
}

float NonPlayerCreatureObjectAdapter::getMilk() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getMilk();
}

float NonPlayerCreatureObjectAdapter::getHideMax() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getHideMax();
}

float NonPlayerCreatureObjectAdapter::getBoneMax() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getBoneMax();
}

float NonPlayerCreatureObjectAdapter::getMeatMax() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getMeatMax();
}

unsigned int NonPlayerCreatureObjectAdapter::getFerocity() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getFerocity();
}

unsigned int NonPlayerCreatureObjectAdapter::getArmor() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->getArmor();
}

bool NonPlayerCreatureObjectAdapter::hasOrganics() {
	return ((NonPlayerCreatureObjectImplementation*) impl)->hasOrganics();
}

/*
 *	NonPlayerCreatureObjectHelper
 */

NonPlayerCreatureObjectHelper* NonPlayerCreatureObjectHelper::staticInitializer = NonPlayerCreatureObjectHelper::instance();

NonPlayerCreatureObjectHelper::NonPlayerCreatureObjectHelper() {
	className = "NonPlayerCreatureObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void NonPlayerCreatureObjectHelper::finalizeHelper() {
	NonPlayerCreatureObjectHelper::finalize();
}

DistributedObject* NonPlayerCreatureObjectHelper::instantiateObject() {
	return new NonPlayerCreatureObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* NonPlayerCreatureObjectHelper::instantiateServant() {
	return new NonPlayerCreatureObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* NonPlayerCreatureObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new NonPlayerCreatureObjectAdapter((NonPlayerCreatureObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

