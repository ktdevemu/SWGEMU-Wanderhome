/*
 *	server/zone/objects/tangible/pharmaceutical/StimPack.cpp generated by engine3 IDL compiler 0.60
 */

#include "StimPack.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/objects/manufactureschematic/ManufactureSchematic.h"

/*
 *	StimPackStub
 */

StimPack::StimPack() : PharmaceuticalObject(DummyConstructorParameter::instance()) {
	_impl = new StimPackImplementation();
	_impl->_setStub(this);
}

StimPack::StimPack(DummyConstructorParameter* param) : PharmaceuticalObject(param) {
}

StimPack::~StimPack() {
}


void StimPack::updateCraftingValues(ManufactureSchematic* schematic) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((StimPackImplementation*) _impl)->updateCraftingValues(schematic);
}

void StimPack::loadTemplateData(SharedObjectTemplate* templateData) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((StimPackImplementation*) _impl)->loadTemplateData(templateData);
}

unsigned int StimPack::calculatePower(CreatureObject* healer, CreatureObject* patient, bool applyBattleFatigue) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(healer);
		method.addObjectParameter(patient);
		method.addBooleanParameter(applyBattleFatigue);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((StimPackImplementation*) _impl)->calculatePower(healer, patient, applyBattleFatigue);
}

int StimPack::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return ((StimPackImplementation*) _impl)->handleObjectMenuSelect(player, selectedID);
}

void StimPack::fillAttributeList(AttributeListMessage* msg, PlayerCreature* object) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((StimPackImplementation*) _impl)->fillAttributeList(msg, object);
}

float StimPack::getEffectiveness() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		return method.executeWithFloatReturn();
	} else
		return ((StimPackImplementation*) _impl)->getEffectiveness();
}

bool StimPack::isStimPack() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		return method.executeWithBooleanReturn();
	} else
		return ((StimPackImplementation*) _impl)->isStimPack();
}

/*
 *	StimPackImplementation
 */

StimPackImplementation::StimPackImplementation(DummyConstructorParameter* param) : PharmaceuticalObjectImplementation(param) {
	_initializeImplementation();
}


StimPackImplementation::~StimPackImplementation() {
}


void StimPackImplementation::finalize() {
}

void StimPackImplementation::_initializeImplementation() {
	_setClassHelper(StimPackHelper::instance());

	_serializationHelperMethod();
}

void StimPackImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (StimPack*) stub;
	PharmaceuticalObjectImplementation::_setStub(stub);
}

DistributedObjectStub* StimPackImplementation::_getStub() {
	return _this;
}

StimPackImplementation::operator const StimPack*() {
	return _this;
}

void StimPackImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void StimPackImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void StimPackImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void StimPackImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void StimPackImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void StimPackImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void StimPackImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void StimPackImplementation::_serializationHelperMethod() {
	PharmaceuticalObjectImplementation::_serializationHelperMethod();

	_setClassName("StimPack");

	addSerializableVariable("effectiveness", &effectiveness);
}

StimPackImplementation::StimPackImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl(66):  		setLoggingName("StimPack");
	setLoggingName("StimPack");
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl(68):  		effectiveness = 0;
	effectiveness = 0;
}

void StimPackImplementation::updateCraftingValues(ManufactureSchematic* schematic) {
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl(73):  		CraftingValues craftingValues = schematic.getCraftingValues();
	CraftingValues* craftingValues = schematic->getCraftingValues();
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl(75):  		effectiveness = craftingValues.getCurrentValue("power");
	effectiveness = craftingValues->getCurrentValue("power");
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl(76):  		super.medicineUseRequired = craftingValues.getCurrentValue("skillmodmin");
	PharmaceuticalObjectImplementation::medicineUseRequired = craftingValues->getCurrentValue("skillmodmin");
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl(77):  		setUseCount(craftingValues.getCurrentValue("charges"));
	setUseCount(craftingValues->getCurrentValue("charges"));
}

void StimPackImplementation::loadTemplateData(SharedObjectTemplate* templateData) {
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl(88):  		super.loadTemplateData(templateData);
	PharmaceuticalObjectImplementation::loadTemplateData(templateData);
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl(90):  		StimPackTemplate 
	if (!templateData->isStimPackTemplate())	// server/zone/objects/tangible/pharmaceutical/StimPack.idl(91):  			return;
	return;
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl(93):  stimPackTemplate = (StimPackTemplate) templateData;
	StimPackTemplate* stimPackTemplate = (StimPackTemplate*) templateData;
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl(95):  		effectiveness = stimPackTemplate.getEffectiveness();
	effectiveness = stimPackTemplate->getEffectiveness();
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl(96):  		super.medicineUseRequired = stimPackTemplate.getMedicineUse();
	PharmaceuticalObjectImplementation::medicineUseRequired = stimPackTemplate->getMedicineUse();
}

unsigned int StimPackImplementation::calculatePower(CreatureObject* healer, CreatureObject* patient, bool applyBattleFatigue) {
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl(100):  		float power = getEffectiveness();
	float power = getEffectiveness();
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl(102):  		float 
	if (applyBattleFatigue){
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl(103):  			power = power - power * patient.calculateBFRatio();
	power = power - power * patient->calculateBFRatio();
}
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl(106):  modSkill = (float) healer.getSkillMod("healing_injury_treatment");
	float modSkill = (float) healer->getSkillMod("healing_injury_treatment");
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl(108):  		return (100 + modSkill) / 100 * power;
	return (100 + modSkill) / 100 * power;
}

int StimPackImplementation::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl(120):  		if 
	if (selectedID != 20)	// server/zone/objects/tangible/pharmaceutical/StimPack.idl(121):  			return 1;
	return 1;
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl(123):  
	if (player->getSkillMod("healing_ability") < PharmaceuticalObjectImplementation::medicineUseRequired){
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl(124):  			player.sendSystemMessage("error_message", "insufficient_skill");
	player->sendSystemMessage("error_message", "insufficient_skill");
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl(126):  			return 0;
	return 0;
}

	else {
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl(128):  			string command = "/healdamage ";
	String command = "/healdamage ";
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl(129):  			player.sendExecuteConsoleCommand(command + String.valueOf(super.getObjectID()));
	player->sendExecuteConsoleCommand(command + String::valueOf(PharmaceuticalObjectImplementation::getObjectID()));
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl(131):  			return 0;
	return 0;
}
}

void StimPackImplementation::fillAttributeList(AttributeListMessage* msg, PlayerCreature* object) {
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl(145):  		super.fillAttributeList(msg, object);
	PharmaceuticalObjectImplementation::fillAttributeList(msg, object);
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl(147):  		msg.insertAttribute("examine_heal_damage_health", Math.getPrecision(effectiveness, 0));
	msg->insertAttribute("examine_heal_damage_health", Math::getPrecision(effectiveness, 0));
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl(148):  		msg.insertAttribute("examine_heal_damage_action", Math.getPrecision(effectiveness, 0));
	msg->insertAttribute("examine_heal_damage_action", Math::getPrecision(effectiveness, 0));
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl(149):  		msg.insertAttribute("healing_ability", super.medicineUseRequired);
	msg->insertAttribute("healing_ability", PharmaceuticalObjectImplementation::medicineUseRequired);
}

float StimPackImplementation::getEffectiveness() {
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl(153):  		return effectiveness;
	return effectiveness;
}

bool StimPackImplementation::isStimPack() {
	// server/zone/objects/tangible/pharmaceutical/StimPack.idl(157):  		return true;
	return true;
}

/*
 *	StimPackAdapter
 */

StimPackAdapter::StimPackAdapter(StimPackImplementation* obj) : PharmaceuticalObjectAdapter(obj) {
}

Packet* StimPackAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		resp->insertInt(calculatePower((CreatureObject*) inv->getObjectParameter(), (CreatureObject*) inv->getObjectParameter(), inv->getBooleanParameter()));
		break;
	case 7:
		resp->insertSignedInt(handleObjectMenuSelect((PlayerCreature*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	case 8:
		resp->insertFloat(getEffectiveness());
		break;
	case 9:
		resp->insertBoolean(isStimPack());
		break;
	default:
		return NULL;
	}

	return resp;
}

unsigned int StimPackAdapter::calculatePower(CreatureObject* healer, CreatureObject* patient, bool applyBattleFatigue) {
	return ((StimPackImplementation*) impl)->calculatePower(healer, patient, applyBattleFatigue);
}

int StimPackAdapter::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	return ((StimPackImplementation*) impl)->handleObjectMenuSelect(player, selectedID);
}

float StimPackAdapter::getEffectiveness() {
	return ((StimPackImplementation*) impl)->getEffectiveness();
}

bool StimPackAdapter::isStimPack() {
	return ((StimPackImplementation*) impl)->isStimPack();
}

/*
 *	StimPackHelper
 */

StimPackHelper* StimPackHelper::staticInitializer = StimPackHelper::instance();

StimPackHelper::StimPackHelper() {
	className = "StimPack";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void StimPackHelper::finalizeHelper() {
	StimPackHelper::finalize();
}

DistributedObject* StimPackHelper::instantiateObject() {
	return new StimPack(DummyConstructorParameter::instance());
}

DistributedObjectServant* StimPackHelper::instantiateServant() {
	return new StimPackImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* StimPackHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new StimPackAdapter((StimPackImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

