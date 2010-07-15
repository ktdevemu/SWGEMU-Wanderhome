/*
 *	server/zone/objects/tangible/TangibleObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "TangibleObject.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	TangibleObjectStub
 */

TangibleObject::TangibleObject() : SceneObject(DummyConstructorParameter::instance()) {
	_impl = new TangibleObjectImplementation();
	_impl->_setStub(this);
}

TangibleObject::TangibleObject(DummyConstructorParameter* param) : SceneObject(param) {
}

TangibleObject::~TangibleObject() {
}


void TangibleObject::loadTemplateData(SharedObjectTemplate* templateData) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((TangibleObjectImplementation*) _impl)->loadTemplateData(templateData);
}

void TangibleObject::initializeTransientMembers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->initializeTransientMembers();
}

void TangibleObject::setCustomObjectName(const UnicodeString& name, bool notifyClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addUnicodeParameter(name);
		method.addBooleanParameter(notifyClient);

		method.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->setCustomObjectName(name, notifyClient);
}

void TangibleObject::sendBaselinesTo(SceneObject* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->sendBaselinesTo(player);
}

void TangibleObject::synchronizedUIListen(SceneObject* player, int value) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(player);
		method.addSignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->synchronizedUIListen(player, value);
}

void TangibleObject::synchronizedUIStopListen(SceneObject* player, int value) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(player);
		method.addSignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->synchronizedUIStopListen(player, value);
}

void TangibleObject::setDefender(SceneObject* defender) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addObjectParameter(defender);

		method.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->setDefender(defender);
}

void TangibleObject::addDefender(SceneObject* defender) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addObjectParameter(defender);

		method.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->addDefender(defender);
}

void TangibleObject::removeDefender(SceneObject* defender) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addObjectParameter(defender);

		method.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->removeDefender(defender);
}

void TangibleObject::removeDefenders() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);

		method.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->removeDefenders();
}

void TangibleObject::setCombatState() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);

		method.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->setCombatState();
}

void TangibleObject::setUseCount(unsigned int newUseCount, bool notifyClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addUnsignedIntParameter(newUseCount);
		method.addBooleanParameter(notifyClient);

		method.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->setUseCount(newUseCount, notifyClient);
}

void TangibleObject::fillAttributeList(AttributeListMessage* msg, PlayerCreature* object) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((TangibleObjectImplementation*) _impl)->fillAttributeList(msg, object);
}

void TangibleObject::clearCombatState(bool clearDefenders) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addBooleanParameter(clearDefenders);

		method.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->clearCombatState(clearDefenders);
}

bool TangibleObject::hasDefender(SceneObject* defender) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addObjectParameter(defender);

		return method.executeWithBooleanReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->hasDefender(defender);
}

bool TangibleObject::isAttackableBy(CreatureObject* object) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addObjectParameter(object);

		return method.executeWithBooleanReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->isAttackableBy(object);
}

bool TangibleObject::isAggressiveTo(PlayerCreature* object) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);
		method.addObjectParameter(object);

		return method.executeWithBooleanReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->isAggressiveTo(object);
}

void TangibleObject::sendPvpStatusTo(PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->sendPvpStatusTo(player);
}

int TangibleObject::inflictDamage(TangibleObject* attacker, int damageType, int damage, bool destroy, bool notifyClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);
		method.addObjectParameter(attacker);
		method.addSignedIntParameter(damageType);
		method.addSignedIntParameter(damage);
		method.addBooleanParameter(destroy);
		method.addBooleanParameter(notifyClient);

		return method.executeWithSignedIntReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->inflictDamage(attacker, damageType, damage, destroy, notifyClient);
}

int TangibleObject::healDamage(TangibleObject* healer, int damageType, int damageToHeal, bool notifyClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);
		method.addObjectParameter(healer);
		method.addSignedIntParameter(damageType);
		method.addSignedIntParameter(damageToHeal);
		method.addBooleanParameter(notifyClient);

		return method.executeWithSignedIntReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->healDamage(healer, damageType, damageToHeal, notifyClient);
}

void TangibleObject::setConditionDamage(int condDamage, bool notifyClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);
		method.addSignedIntParameter(condDamage);
		method.addBooleanParameter(notifyClient);

		method.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->setConditionDamage(condDamage, notifyClient);
}

void TangibleObject::setCustomizationVariable(byte type, byte value, bool notifyClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);
		method.addByteParameter(type);
		method.addByteParameter(value);
		method.addBooleanParameter(notifyClient);

		method.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->setCustomizationVariable(type, value, notifyClient);
}

void TangibleObject::setOptionsBitmask(unsigned int bitmask, bool notifyClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);
		method.addUnsignedIntParameter(bitmask);
		method.addBooleanParameter(notifyClient);

		method.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->setOptionsBitmask(bitmask, notifyClient);
}

int TangibleObject::notifyObjectDestructionObservers(TangibleObject* attacker, int condition) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);
		method.addObjectParameter(attacker);
		method.addSignedIntParameter(condition);

		return method.executeWithSignedIntReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->notifyObjectDestructionObservers(attacker, condition);
}

byte TangibleObject::getUnknownByte() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);

		return method.executeWithByteReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getUnknownByte();
}

bool TangibleObject::isTicketCollector() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);

		return method.executeWithBooleanReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->isTicketCollector();
}

bool TangibleObject::isTicketObject() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);

		return method.executeWithBooleanReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->isTicketObject();
}

CustomizationVariables* TangibleObject::getCustomizationVariables() {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((TangibleObjectImplementation*) _impl)->getCustomizationVariables();
}

int TangibleObject::getUseCount() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);

		return method.executeWithSignedIntReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getUseCount();
}

int TangibleObject::getMaxCondition() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);

		return method.executeWithSignedIntReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getMaxCondition();
}

void TangibleObject::setMaxCondition(int maxCond) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);
		method.addSignedIntParameter(maxCond);

		method.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->setMaxCondition(maxCond);
}

int TangibleObject::getConditionDamage() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);

		return method.executeWithSignedIntReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getConditionDamage();
}

int TangibleObject::getVolume() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 35);

		return method.executeWithSignedIntReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getVolume();
}

float TangibleObject::getComplexity() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 36);

		return method.executeWithFloatReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getComplexity();
}

unsigned int TangibleObject::getOptionsBitmask() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 37);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getOptionsBitmask();
}

unsigned int TangibleObject::getPvpStatusBitmask() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 38);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getPvpStatusBitmask();
}

bool TangibleObject::isTangibleObject() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 39);

		return method.executeWithBooleanReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->isTangibleObject();
}

void TangibleObject::getCustomizationString(String& variables) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 40);
		method.addAsciiParameter(variables);

		method.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->getCustomizationString(variables);
}

DeltaVector<ManagedReference<SceneObject* > >* TangibleObject::getDefenderList() {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((TangibleObjectImplementation*) _impl)->getDefenderList();
}

bool TangibleObject::isDestroyed() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 41);

		return method.executeWithBooleanReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->isDestroyed();
}

unsigned int TangibleObject::getPlayerUseMask() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 42);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getPlayerUseMask();
}

int TangibleObject::getFaction() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 43);

		return method.executeWithSignedIntReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getFaction();
}

bool TangibleObject::isRebel() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 44);

		return method.executeWithBooleanReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->isRebel();
}

bool TangibleObject::isImperial() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 45);

		return method.executeWithBooleanReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->isImperial();
}

bool TangibleObject::isNeutral() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 46);

		return method.executeWithBooleanReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->isNeutral();
}

bool TangibleObject::isSliced() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 47);

		return method.executeWithBooleanReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->isSliced();
}

void TangibleObject::setCustomizationString(const String& vars) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 48);
		method.addAsciiParameter(vars);

		method.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->setCustomizationString(vars);
}

void TangibleObject::setCraftersName(String& name) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 49);
		method.addAsciiParameter(name);

		method.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->setCraftersName(name);
}

String TangibleObject::getCraftersName() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 50);

		method.executeWithAsciiReturn(_return_getCraftersName);
		return _return_getCraftersName;
	} else
		return ((TangibleObjectImplementation*) _impl)->getCraftersName();
}

void TangibleObject::setCraftersSerial(String& serial) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 51);
		method.addAsciiParameter(serial);

		method.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->setCraftersSerial(serial);
}

String TangibleObject::getCraftersSerial() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 52);

		method.executeWithAsciiReturn(_return_getCraftersSerial);
		return _return_getCraftersSerial;
	} else
		return ((TangibleObjectImplementation*) _impl)->getCraftersSerial();
}

/*
 *	TangibleObjectImplementation
 */

TangibleObjectImplementation::TangibleObjectImplementation(DummyConstructorParameter* param) : SceneObjectImplementation(param) {
	_initializeImplementation();
}

TangibleObjectImplementation::~TangibleObjectImplementation() {
}


void TangibleObjectImplementation::finalize() {
}

void TangibleObjectImplementation::_initializeImplementation() {
	_setClassHelper(TangibleObjectHelper::instance());

	_serializationHelperMethod();
}

void TangibleObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (TangibleObject*) stub;
	SceneObjectImplementation::_setStub(stub);
}

DistributedObjectStub* TangibleObjectImplementation::_getStub() {
	return _this;
}

TangibleObjectImplementation::operator const TangibleObject*() {
	return _this;
}

void TangibleObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void TangibleObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void TangibleObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void TangibleObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void TangibleObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void TangibleObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void TangibleObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void TangibleObjectImplementation::_serializationHelperMethod() {
	SceneObjectImplementation::_serializationHelperMethod();

	_setClassName("TangibleObject");

	addSerializableVariable("targetable", &targetable);
	addSerializableVariable("complexity", &complexity);
	addSerializableVariable("volume", &volume);
	addSerializableVariable("faction", &faction);
	addSerializableVariable("customizationVariables", &customizationVariables);
	addSerializableVariable("conditionDamage", &conditionDamage);
	addSerializableVariable("maxCondition", &maxCondition);
	addSerializableVariable("useCount", &useCount);
	addSerializableVariable("optionsBitmask", &optionsBitmask);
	addSerializableVariable("pvpStatusBitmask", &pvpStatusBitmask);
	addSerializableVariable("unknownByte", &unknownByte);
	addSerializableVariable("craftersName", &craftersName);
	addSerializableVariable("craftersSerial", &craftersSerial);
	addSerializableVariable("defenderList", &defenderList);
	addSerializableVariable("playerUseMask", &playerUseMask);
	addSerializableVariable("sliced", &sliced);
}

TangibleObjectImplementation::TangibleObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/TangibleObject.idl(135):  		faction = 0;
	faction = 0;
	// server/zone/objects/tangible/TangibleObject.idl(137):  		Logger.setLoggingName("TangibleObject");
	Logger::setLoggingName("TangibleObject");
}

void TangibleObjectImplementation::setCombatState() {
}

void TangibleObjectImplementation::clearCombatState(bool clearDefenders) {
	// server/zone/objects/tangible/TangibleObject.idl(254):  	}
	if (clearDefenders)	// server/zone/objects/tangible/TangibleObject.idl(255):  			removeDefenders();
	removeDefenders();
}

bool TangibleObjectImplementation::hasDefender(SceneObject* defender) {
	// server/zone/objects/tangible/TangibleObject.idl(265):  
	for (	// server/zone/objects/tangible/TangibleObject.idl(265):  		for (int i = 0;
	int i = 0;
	i < (&defenderList)->size();
 ++i) {
	// server/zone/objects/tangible/TangibleObject.idl(266):  		}
	if ((&defenderList)->get(i) == defender)	// server/zone/objects/tangible/TangibleObject.idl(267):  				return true;
	return true;
}
	// server/zone/objects/tangible/TangibleObject.idl(270):  		return false;
	return false;
}

bool TangibleObjectImplementation::isAttackableBy(CreatureObject* object) {
	// server/zone/objects/tangible/TangibleObject.idl(280):  		return false;
	return false;
}

bool TangibleObjectImplementation::isAggressiveTo(PlayerCreature* object) {
	// server/zone/objects/tangible/TangibleObject.idl(290):  		return false;
	return false;
}

byte TangibleObjectImplementation::getUnknownByte() {
	// server/zone/objects/tangible/TangibleObject.idl(334):  		return unknownByte;
	return unknownByte;
}

bool TangibleObjectImplementation::isTicketCollector() {
	// server/zone/objects/tangible/TangibleObject.idl(338):  		return false;
	return false;
}

bool TangibleObjectImplementation::isTicketObject() {
	// server/zone/objects/tangible/TangibleObject.idl(342):  		return false;
	return false;
}

CustomizationVariables* TangibleObjectImplementation::getCustomizationVariables() {
	// server/zone/objects/tangible/TangibleObject.idl(347):  		return customizationVariables;
	return (&customizationVariables);
}

int TangibleObjectImplementation::getUseCount() {
	// server/zone/objects/tangible/TangibleObject.idl(351):  		return useCount;
	return useCount;
}

int TangibleObjectImplementation::getMaxCondition() {
	// server/zone/objects/tangible/TangibleObject.idl(355):  		return maxCondition;
	return maxCondition;
}

void TangibleObjectImplementation::setMaxCondition(int maxCond) {
	// server/zone/objects/tangible/TangibleObject.idl(359):  		maxCondition = maxCond;
	maxCondition = maxCond;
}

int TangibleObjectImplementation::getConditionDamage() {
	// server/zone/objects/tangible/TangibleObject.idl(363):  		return conditionDamage;
	return conditionDamage;
}

int TangibleObjectImplementation::getVolume() {
	// server/zone/objects/tangible/TangibleObject.idl(367):  		return volume;
	return volume;
}

float TangibleObjectImplementation::getComplexity() {
	// server/zone/objects/tangible/TangibleObject.idl(371):  		return complexity;
	return complexity;
}

unsigned int TangibleObjectImplementation::getOptionsBitmask() {
	// server/zone/objects/tangible/TangibleObject.idl(375):  		return optionsBitmask;
	return optionsBitmask;
}

unsigned int TangibleObjectImplementation::getPvpStatusBitmask() {
	// server/zone/objects/tangible/TangibleObject.idl(379):  		return pvpStatusBitmask;
	return pvpStatusBitmask;
}

bool TangibleObjectImplementation::isTangibleObject() {
	// server/zone/objects/tangible/TangibleObject.idl(383):  		return true;
	return true;
}

void TangibleObjectImplementation::getCustomizationString(String& variables) {
	// server/zone/objects/tangible/TangibleObject.idl(387):  		customizationVariables.getData(variables);
	(&customizationVariables)->getData(variables);
}

DeltaVector<ManagedReference<SceneObject* > >* TangibleObjectImplementation::getDefenderList() {
	// server/zone/objects/tangible/TangibleObject.idl(392):  		return defenderList;
	return (&defenderList);
}

bool TangibleObjectImplementation::isDestroyed() {
	// server/zone/objects/tangible/TangibleObject.idl(396):  		return conditionDamage > maxCondition;
	return conditionDamage > maxCondition;
}

unsigned int TangibleObjectImplementation::getPlayerUseMask() {
	// server/zone/objects/tangible/TangibleObject.idl(400):  		return playerUseMask;
	return playerUseMask;
}

int TangibleObjectImplementation::getFaction() {
	// server/zone/objects/tangible/TangibleObject.idl(404):  		return faction;
	return faction;
}

bool TangibleObjectImplementation::isRebel() {
	// server/zone/objects/tangible/TangibleObject.idl(408):  		return faction == 0x16148850;
	return faction == 0x16148850;
}

bool TangibleObjectImplementation::isImperial() {
	// server/zone/objects/tangible/TangibleObject.idl(412):  		return faction == 0xDB4ACC54;
	return faction == 0xDB4ACC54;
}

bool TangibleObjectImplementation::isNeutral() {
	// server/zone/objects/tangible/TangibleObject.idl(416):  		return faction == 0;
	return faction == 0;
}

bool TangibleObjectImplementation::isSliced() {
	// server/zone/objects/tangible/TangibleObject.idl(420):  		return sliced;
	return sliced;
}

void TangibleObjectImplementation::setCustomizationString(const String& vars) {
	// server/zone/objects/tangible/TangibleObject.idl(424):  		customizationVariables.parseFromClientString(vars);
	(&customizationVariables)->parseFromClientString(vars);
}

void TangibleObjectImplementation::setCraftersName(String& name) {
	// server/zone/objects/tangible/TangibleObject.idl(428):  		craftersName = name;
	craftersName = name;
}

String TangibleObjectImplementation::getCraftersName() {
	// server/zone/objects/tangible/TangibleObject.idl(432):  		return craftersName;
	return craftersName;
}

void TangibleObjectImplementation::setCraftersSerial(String& serial) {
	// server/zone/objects/tangible/TangibleObject.idl(436):  		craftersSerial = serial;
	craftersSerial = serial;
}

String TangibleObjectImplementation::getCraftersSerial() {
	// server/zone/objects/tangible/TangibleObject.idl(440):  		return craftersSerial;
	return craftersSerial;
}

/*
 *	TangibleObjectAdapter
 */

TangibleObjectAdapter::TangibleObjectAdapter(TangibleObjectImplementation* obj) : SceneObjectAdapter(obj) {
}

Packet* TangibleObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		setCustomObjectName(inv->getUnicodeParameter(_param0_setCustomObjectName__UnicodeString_bool_), inv->getBooleanParameter());
		break;
	case 8:
		sendBaselinesTo((SceneObject*) inv->getObjectParameter());
		break;
	case 9:
		synchronizedUIListen((SceneObject*) inv->getObjectParameter(), inv->getSignedIntParameter());
		break;
	case 10:
		synchronizedUIStopListen((SceneObject*) inv->getObjectParameter(), inv->getSignedIntParameter());
		break;
	case 11:
		setDefender((SceneObject*) inv->getObjectParameter());
		break;
	case 12:
		addDefender((SceneObject*) inv->getObjectParameter());
		break;
	case 13:
		removeDefender((SceneObject*) inv->getObjectParameter());
		break;
	case 14:
		removeDefenders();
		break;
	case 15:
		setCombatState();
		break;
	case 16:
		setUseCount(inv->getUnsignedIntParameter(), inv->getBooleanParameter());
		break;
	case 17:
		clearCombatState(inv->getBooleanParameter());
		break;
	case 18:
		resp->insertBoolean(hasDefender((SceneObject*) inv->getObjectParameter()));
		break;
	case 19:
		resp->insertBoolean(isAttackableBy((CreatureObject*) inv->getObjectParameter()));
		break;
	case 20:
		resp->insertBoolean(isAggressiveTo((PlayerCreature*) inv->getObjectParameter()));
		break;
	case 21:
		sendPvpStatusTo((PlayerCreature*) inv->getObjectParameter());
		break;
	case 22:
		resp->insertSignedInt(inflictDamage((TangibleObject*) inv->getObjectParameter(), inv->getSignedIntParameter(), inv->getSignedIntParameter(), inv->getBooleanParameter(), inv->getBooleanParameter()));
		break;
	case 23:
		resp->insertSignedInt(healDamage((TangibleObject*) inv->getObjectParameter(), inv->getSignedIntParameter(), inv->getSignedIntParameter(), inv->getBooleanParameter()));
		break;
	case 24:
		setConditionDamage(inv->getSignedIntParameter(), inv->getBooleanParameter());
		break;
	case 25:
		setCustomizationVariable(inv->getByteParameter(), inv->getByteParameter(), inv->getBooleanParameter());
		break;
	case 26:
		setOptionsBitmask(inv->getUnsignedIntParameter(), inv->getBooleanParameter());
		break;
	case 27:
		resp->insertSignedInt(notifyObjectDestructionObservers((TangibleObject*) inv->getObjectParameter(), inv->getSignedIntParameter()));
		break;
	case 28:
		resp->insertByte(getUnknownByte());
		break;
	case 29:
		resp->insertBoolean(isTicketCollector());
		break;
	case 30:
		resp->insertBoolean(isTicketObject());
		break;
	case 31:
		resp->insertSignedInt(getUseCount());
		break;
	case 32:
		resp->insertSignedInt(getMaxCondition());
		break;
	case 33:
		setMaxCondition(inv->getSignedIntParameter());
		break;
	case 34:
		resp->insertSignedInt(getConditionDamage());
		break;
	case 35:
		resp->insertSignedInt(getVolume());
		break;
	case 36:
		resp->insertFloat(getComplexity());
		break;
	case 37:
		resp->insertInt(getOptionsBitmask());
		break;
	case 38:
		resp->insertInt(getPvpStatusBitmask());
		break;
	case 39:
		resp->insertBoolean(isTangibleObject());
		break;
	case 40:
		getCustomizationString(inv->getAsciiParameter(_param0_getCustomizationString__String_));
		break;
	case 41:
		resp->insertBoolean(isDestroyed());
		break;
	case 42:
		resp->insertInt(getPlayerUseMask());
		break;
	case 43:
		resp->insertSignedInt(getFaction());
		break;
	case 44:
		resp->insertBoolean(isRebel());
		break;
	case 45:
		resp->insertBoolean(isImperial());
		break;
	case 46:
		resp->insertBoolean(isNeutral());
		break;
	case 47:
		resp->insertBoolean(isSliced());
		break;
	case 48:
		setCustomizationString(inv->getAsciiParameter(_param0_setCustomizationString__String_));
		break;
	case 49:
		setCraftersName(inv->getAsciiParameter(_param0_setCraftersName__String_));
		break;
	case 50:
		resp->insertAscii(getCraftersName());
		break;
	case 51:
		setCraftersSerial(inv->getAsciiParameter(_param0_setCraftersSerial__String_));
		break;
	case 52:
		resp->insertAscii(getCraftersSerial());
		break;
	default:
		return NULL;
	}

	return resp;
}

void TangibleObjectAdapter::initializeTransientMembers() {
	((TangibleObjectImplementation*) impl)->initializeTransientMembers();
}

void TangibleObjectAdapter::setCustomObjectName(const UnicodeString& name, bool notifyClient) {
	((TangibleObjectImplementation*) impl)->setCustomObjectName(name, notifyClient);
}

void TangibleObjectAdapter::sendBaselinesTo(SceneObject* player) {
	((TangibleObjectImplementation*) impl)->sendBaselinesTo(player);
}

void TangibleObjectAdapter::synchronizedUIListen(SceneObject* player, int value) {
	((TangibleObjectImplementation*) impl)->synchronizedUIListen(player, value);
}

void TangibleObjectAdapter::synchronizedUIStopListen(SceneObject* player, int value) {
	((TangibleObjectImplementation*) impl)->synchronizedUIStopListen(player, value);
}

void TangibleObjectAdapter::setDefender(SceneObject* defender) {
	((TangibleObjectImplementation*) impl)->setDefender(defender);
}

void TangibleObjectAdapter::addDefender(SceneObject* defender) {
	((TangibleObjectImplementation*) impl)->addDefender(defender);
}

void TangibleObjectAdapter::removeDefender(SceneObject* defender) {
	((TangibleObjectImplementation*) impl)->removeDefender(defender);
}

void TangibleObjectAdapter::removeDefenders() {
	((TangibleObjectImplementation*) impl)->removeDefenders();
}

void TangibleObjectAdapter::setCombatState() {
	((TangibleObjectImplementation*) impl)->setCombatState();
}

void TangibleObjectAdapter::setUseCount(unsigned int newUseCount, bool notifyClient) {
	((TangibleObjectImplementation*) impl)->setUseCount(newUseCount, notifyClient);
}

void TangibleObjectAdapter::clearCombatState(bool clearDefenders) {
	((TangibleObjectImplementation*) impl)->clearCombatState(clearDefenders);
}

bool TangibleObjectAdapter::hasDefender(SceneObject* defender) {
	return ((TangibleObjectImplementation*) impl)->hasDefender(defender);
}

bool TangibleObjectAdapter::isAttackableBy(CreatureObject* object) {
	return ((TangibleObjectImplementation*) impl)->isAttackableBy(object);
}

bool TangibleObjectAdapter::isAggressiveTo(PlayerCreature* object) {
	return ((TangibleObjectImplementation*) impl)->isAggressiveTo(object);
}

void TangibleObjectAdapter::sendPvpStatusTo(PlayerCreature* player) {
	((TangibleObjectImplementation*) impl)->sendPvpStatusTo(player);
}

int TangibleObjectAdapter::inflictDamage(TangibleObject* attacker, int damageType, int damage, bool destroy, bool notifyClient) {
	return ((TangibleObjectImplementation*) impl)->inflictDamage(attacker, damageType, damage, destroy, notifyClient);
}

int TangibleObjectAdapter::healDamage(TangibleObject* healer, int damageType, int damageToHeal, bool notifyClient) {
	return ((TangibleObjectImplementation*) impl)->healDamage(healer, damageType, damageToHeal, notifyClient);
}

void TangibleObjectAdapter::setConditionDamage(int condDamage, bool notifyClient) {
	((TangibleObjectImplementation*) impl)->setConditionDamage(condDamage, notifyClient);
}

void TangibleObjectAdapter::setCustomizationVariable(byte type, byte value, bool notifyClient) {
	((TangibleObjectImplementation*) impl)->setCustomizationVariable(type, value, notifyClient);
}

void TangibleObjectAdapter::setOptionsBitmask(unsigned int bitmask, bool notifyClient) {
	((TangibleObjectImplementation*) impl)->setOptionsBitmask(bitmask, notifyClient);
}

int TangibleObjectAdapter::notifyObjectDestructionObservers(TangibleObject* attacker, int condition) {
	return ((TangibleObjectImplementation*) impl)->notifyObjectDestructionObservers(attacker, condition);
}

byte TangibleObjectAdapter::getUnknownByte() {
	return ((TangibleObjectImplementation*) impl)->getUnknownByte();
}

bool TangibleObjectAdapter::isTicketCollector() {
	return ((TangibleObjectImplementation*) impl)->isTicketCollector();
}

bool TangibleObjectAdapter::isTicketObject() {
	return ((TangibleObjectImplementation*) impl)->isTicketObject();
}

int TangibleObjectAdapter::getUseCount() {
	return ((TangibleObjectImplementation*) impl)->getUseCount();
}

int TangibleObjectAdapter::getMaxCondition() {
	return ((TangibleObjectImplementation*) impl)->getMaxCondition();
}

void TangibleObjectAdapter::setMaxCondition(int maxCond) {
	((TangibleObjectImplementation*) impl)->setMaxCondition(maxCond);
}

int TangibleObjectAdapter::getConditionDamage() {
	return ((TangibleObjectImplementation*) impl)->getConditionDamage();
}

int TangibleObjectAdapter::getVolume() {
	return ((TangibleObjectImplementation*) impl)->getVolume();
}

float TangibleObjectAdapter::getComplexity() {
	return ((TangibleObjectImplementation*) impl)->getComplexity();
}

unsigned int TangibleObjectAdapter::getOptionsBitmask() {
	return ((TangibleObjectImplementation*) impl)->getOptionsBitmask();
}

unsigned int TangibleObjectAdapter::getPvpStatusBitmask() {
	return ((TangibleObjectImplementation*) impl)->getPvpStatusBitmask();
}

bool TangibleObjectAdapter::isTangibleObject() {
	return ((TangibleObjectImplementation*) impl)->isTangibleObject();
}

void TangibleObjectAdapter::getCustomizationString(String& variables) {
	((TangibleObjectImplementation*) impl)->getCustomizationString(variables);
}

bool TangibleObjectAdapter::isDestroyed() {
	return ((TangibleObjectImplementation*) impl)->isDestroyed();
}

unsigned int TangibleObjectAdapter::getPlayerUseMask() {
	return ((TangibleObjectImplementation*) impl)->getPlayerUseMask();
}

int TangibleObjectAdapter::getFaction() {
	return ((TangibleObjectImplementation*) impl)->getFaction();
}

bool TangibleObjectAdapter::isRebel() {
	return ((TangibleObjectImplementation*) impl)->isRebel();
}

bool TangibleObjectAdapter::isImperial() {
	return ((TangibleObjectImplementation*) impl)->isImperial();
}

bool TangibleObjectAdapter::isNeutral() {
	return ((TangibleObjectImplementation*) impl)->isNeutral();
}

bool TangibleObjectAdapter::isSliced() {
	return ((TangibleObjectImplementation*) impl)->isSliced();
}

void TangibleObjectAdapter::setCustomizationString(const String& vars) {
	((TangibleObjectImplementation*) impl)->setCustomizationString(vars);
}

void TangibleObjectAdapter::setCraftersName(String& name) {
	((TangibleObjectImplementation*) impl)->setCraftersName(name);
}

String TangibleObjectAdapter::getCraftersName() {
	return ((TangibleObjectImplementation*) impl)->getCraftersName();
}

void TangibleObjectAdapter::setCraftersSerial(String& serial) {
	((TangibleObjectImplementation*) impl)->setCraftersSerial(serial);
}

String TangibleObjectAdapter::getCraftersSerial() {
	return ((TangibleObjectImplementation*) impl)->getCraftersSerial();
}

/*
 *	TangibleObjectHelper
 */

TangibleObjectHelper* TangibleObjectHelper::staticInitializer = TangibleObjectHelper::instance();

TangibleObjectHelper::TangibleObjectHelper() {
	className = "TangibleObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void TangibleObjectHelper::finalizeHelper() {
	TangibleObjectHelper::finalize();
}

DistributedObject* TangibleObjectHelper::instantiateObject() {
	return new TangibleObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* TangibleObjectHelper::instantiateServant() {
	return new TangibleObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* TangibleObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new TangibleObjectAdapter((TangibleObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

