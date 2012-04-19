/*
 *	server/zone/objects/tangible/pharmaceutical/RangedStimPack.cpp generated by engine3 IDL compiler 0.60
 */

#include "RangedStimPack.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/objects/manufactureschematic/ManufactureSchematic.h"

/*
 *	RangedStimPackStub
 */

enum {RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,RPC_CALCULATEPOWER__CREATUREOBJECT_CREATUREOBJECT_BOOL_,RPC_GETRANGE__CREATUREOBJECT_,RPC_GETEFFECTIVENESS__,RPC_GETAREA__,RPC_ISAREA__,RPC_GETRANGEMOD__,RPC_ISRANGEDSTIMPACK__};

RangedStimPack::RangedStimPack() : StimPack(DummyConstructorParameter::instance()) {
	RangedStimPackImplementation* _implementation = new RangedStimPackImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("RangedStimPack");
}

RangedStimPack::RangedStimPack(DummyConstructorParameter* param) : StimPack(param) {
	_setClassName("RangedStimPack");
}

RangedStimPack::~RangedStimPack() {
}



void RangedStimPack::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	RangedStimPackImplementation* _implementation = static_cast<RangedStimPackImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->updateCraftingValues(values, firstUpdate);
}

void RangedStimPack::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	RangedStimPackImplementation* _implementation = static_cast<RangedStimPackImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillAttributeList(msg, object);
}

int RangedStimPack::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	RangedStimPackImplementation* _implementation = static_cast<RangedStimPackImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->handleObjectMenuSelect(player, selectedID);
}

void RangedStimPack::loadTemplateData(SharedObjectTemplate* templateData) {
	RangedStimPackImplementation* _implementation = static_cast<RangedStimPackImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

unsigned int RangedStimPack::calculatePower(CreatureObject* healer, CreatureObject* patient, bool applyBattleFatigue) {
	RangedStimPackImplementation* _implementation = static_cast<RangedStimPackImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CALCULATEPOWER__CREATUREOBJECT_CREATUREOBJECT_BOOL_);
		method.addObjectParameter(healer);
		method.addObjectParameter(patient);
		method.addBooleanParameter(applyBattleFatigue);

		return method.executeWithUnsignedIntReturn();
	} else
		return _implementation->calculatePower(healer, patient, applyBattleFatigue);
}

float RangedStimPack::getRange(CreatureObject* creature) {
	RangedStimPackImplementation* _implementation = static_cast<RangedStimPackImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETRANGE__CREATUREOBJECT_);
		method.addObjectParameter(creature);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getRange(creature);
}

float RangedStimPack::getEffectiveness() {
	RangedStimPackImplementation* _implementation = static_cast<RangedStimPackImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETEFFECTIVENESS__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getEffectiveness();
}

float RangedStimPack::getArea() {
	RangedStimPackImplementation* _implementation = static_cast<RangedStimPackImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETAREA__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getArea();
}

bool RangedStimPack::isArea() {
	RangedStimPackImplementation* _implementation = static_cast<RangedStimPackImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISAREA__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isArea();
}

float RangedStimPack::getRangeMod() {
	RangedStimPackImplementation* _implementation = static_cast<RangedStimPackImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETRANGEMOD__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getRangeMod();
}

bool RangedStimPack::isRangedStimPack() {
	RangedStimPackImplementation* _implementation = static_cast<RangedStimPackImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISRANGEDSTIMPACK__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isRangedStimPack();
}

DistributedObjectServant* RangedStimPack::_getImplementation() {

	_updated = true;
	return _impl;
}

void RangedStimPack::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	RangedStimPackImplementation
 */

RangedStimPackImplementation::RangedStimPackImplementation(DummyConstructorParameter* param) : StimPackImplementation(param) {
	_initializeImplementation();
}


RangedStimPackImplementation::~RangedStimPackImplementation() {
}


void RangedStimPackImplementation::finalize() {
}

void RangedStimPackImplementation::_initializeImplementation() {
	_setClassHelper(RangedStimPackHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void RangedStimPackImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<RangedStimPack*>(stub);
	StimPackImplementation::_setStub(stub);
}

DistributedObjectStub* RangedStimPackImplementation::_getStub() {
	return _this;
}

RangedStimPackImplementation::operator const RangedStimPack*() {
	return _this;
}

void RangedStimPackImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void RangedStimPackImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void RangedStimPackImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void RangedStimPackImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void RangedStimPackImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void RangedStimPackImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void RangedStimPackImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void RangedStimPackImplementation::_serializationHelperMethod() {
	StimPackImplementation::_serializationHelperMethod();

	_setClassName("RangedStimPack");

}

void RangedStimPackImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(RangedStimPackImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool RangedStimPackImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (StimPackImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "RangedStimPack.range") {
		TypeInfo<float >::parseFromBinaryStream(&range, stream);
		return true;
	}

	if (_name == "RangedStimPack.area") {
		TypeInfo<float >::parseFromBinaryStream(&area, stream);
		return true;
	}

	if (_name == "RangedStimPack.rangeMod") {
		TypeInfo<float >::parseFromBinaryStream(&rangeMod, stream);
		return true;
	}


	return false;
}

void RangedStimPackImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = RangedStimPackImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int RangedStimPackImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = StimPackImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;
	_name = "RangedStimPack.range";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&range, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "RangedStimPack.area";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&area, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "RangedStimPack.rangeMod";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&rangeMod, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 3;
}

RangedStimPackImplementation::RangedStimPackImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		setLoggingName("RangedStimPack");
	setLoggingName("RangedStimPack");
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		area = 0;
	area = 0;
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		range = 0;
	range = 0;
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		rangeMod = 0;
	rangeMod = 0;
}

void RangedStimPackImplementation::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		super.effectiveness = values.getCurrentValue("power");
	StimPackImplementation::effectiveness = values->getCurrentValue("power");
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		super.medicineUseRequired = values.getCurrentValue("skillmodmin");
	StimPackImplementation::medicineUseRequired = values->getCurrentValue("skillmodmin");
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		setUseCount(values.getCurrentValue("charges"));
	setUseCount(values->getCurrentValue("charges"));
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		range = values.getCurrentValue("range");
	range = values->getCurrentValue("range");
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  	}
	if (values->hasProperty("area")){
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  			area = values.getCurrentValue("area");
	area = values->getCurrentValue("area");
}
}

void RangedStimPackImplementation::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		msg.insertAttribute("examine_heal_damage_health", Math.getPrecision(super.effectiveness, 0));
	msg->insertAttribute("examine_heal_damage_health", Math::getPrecision(StimPackImplementation::effectiveness, 0));
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		msg.insertAttribute("examine_heal_damage_action", Math.getPrecision(super.effectiveness, 0));
	msg->insertAttribute("examine_heal_damage_action", Math::getPrecision(StimPackImplementation::effectiveness, 0));
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		msg.insertAttribute("examine_heal_range", Math.getPrecision(range, 0));
	msg->insertAttribute("examine_heal_range", Math::getPrecision(range, 0));
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		}
	if (isArea()){
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  			msg.insertAttribute("examine_heal_area", Math.getPrecision(area, 0));
	msg->insertAttribute("examine_heal_area", Math::getPrecision(area, 0));
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  			msg.insertAttribute("combat_healing_ability", super.medicineUseRequired);
	msg->insertAttribute("combat_healing_ability", StimPackImplementation::medicineUseRequired);
}

	else {
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  			msg.insertAttribute("combat_healing_ability", super.medicineUseRequired);
	msg->insertAttribute("combat_healing_ability", StimPackImplementation::medicineUseRequired);
}
}

int RangedStimPackImplementation::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		if 
	if (selectedID != 20)	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  			return 1;
	return 1;
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		}
	if (player->getSkillMod("combat_healing_ability") < StimPackImplementation::medicineUseRequired){
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  			player.sendSystemMessage("@error_message:insufficient_skill");
	player->sendSystemMessage("@error_message:insufficient_skill");
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  			return 0;
	return 0;
}

	else {
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  			string command = "/healdamage ";
	String command = "/healdamage ";
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  			player.sendExecuteConsoleCommand(command + String.valueOf(super.getObjectID()));
	player->sendExecuteConsoleCommand(command + String::valueOf(StimPackImplementation::getObjectID()));
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  			return 0;
	return 0;
}
}

void RangedStimPackImplementation::loadTemplateData(SharedObjectTemplate* templateData) {
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		super.loadTemplateData(templateData);
	StimPackImplementation::loadTemplateData(templateData);
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		RangedStimPackTemplate 
	if (!templateData->isRangedStimPackTemplate())	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  			return;
	return;
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		RangedStimPackTemplate stimPackTemplate = (RangedStimPackTemplate) templateData;
	RangedStimPackTemplate* stimPackTemplate = (RangedStimPackTemplate*) templateData;
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		super.effectiveness = stimPackTemplate.getEffectiveness();
	StimPackImplementation::effectiveness = stimPackTemplate->getEffectiveness();
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		super.medicineUseRequired = stimPackTemplate.getMedicineUse();
	StimPackImplementation::medicineUseRequired = stimPackTemplate->getMedicineUse();
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		area = stimPackTemplate.getArea();
	area = stimPackTemplate->getArea();
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		range = stimPackTemplate.getRange();
	range = stimPackTemplate->getRange();
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		rangeMod = stimPackTemplate.getRangeMod();
	rangeMod = stimPackTemplate->getRangeMod();
}

unsigned int RangedStimPackImplementation::calculatePower(CreatureObject* healer, CreatureObject* patient, bool applyBattleFatigue) {
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		float power = getEffectiveness();
	float power = getEffectiveness();
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		float 
	if (applyBattleFatigue){
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  			power = power - power * patient.calculateBFRatio();
	power = power - power * patient->calculateBFRatio();
}
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		float modSkill = (float) healer.getSkillMod("combat_medic_effectiveness");
	float modSkill = (float) healer->getSkillMod("combat_medic_effectiveness");
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		return (100 + modSkill) / 100 * power;
	return (100 + modSkill) / 100 * power;
}

float RangedStimPackImplementation::getRange(CreatureObject* creature) {
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		float modSkill = 0;
	float modSkill = 0;
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		float 
	if (creature != NULL){
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  			modSkill = creature.getSkillMod("healing_range");
	modSkill = creature->getSkillMod("healing_range");
}
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		float value = (100 + rangeMod * modSkill) / 100 * range;
	float value = (100 + rangeMod * modSkill) / 100 * range;
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		return value;
	return value;
}

float RangedStimPackImplementation::getEffectiveness() {
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		return super.effectiveness;
	return StimPackImplementation::effectiveness;
}

float RangedStimPackImplementation::getArea() {
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		return area;
	return area;
}

bool RangedStimPackImplementation::isArea() {
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		return area != 0;
	return area != 0;
}

float RangedStimPackImplementation::getRangeMod() {
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		return rangeMod;
	return rangeMod;
}

bool RangedStimPackImplementation::isRangedStimPack() {
	// server/zone/objects/tangible/pharmaceutical/RangedStimPack.idl():  		return true;
	return true;
}

/*
 *	RangedStimPackAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


RangedStimPackAdapter::RangedStimPackAdapter(RangedStimPack* obj) : StimPackAdapter(obj) {
}

void RangedStimPackAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_:
		resp->insertSignedInt(handleObjectMenuSelect(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getByteParameter()));
		break;
	case RPC_CALCULATEPOWER__CREATUREOBJECT_CREATUREOBJECT_BOOL_:
		resp->insertInt(calculatePower(static_cast<CreatureObject*>(inv->getObjectParameter()), static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getBooleanParameter()));
		break;
	case RPC_GETRANGE__CREATUREOBJECT_:
		resp->insertFloat(getRange(static_cast<CreatureObject*>(inv->getObjectParameter())));
		break;
	case RPC_GETEFFECTIVENESS__:
		resp->insertFloat(getEffectiveness());
		break;
	case RPC_GETAREA__:
		resp->insertFloat(getArea());
		break;
	case RPC_ISAREA__:
		resp->insertBoolean(isArea());
		break;
	case RPC_GETRANGEMOD__:
		resp->insertFloat(getRangeMod());
		break;
	case RPC_ISRANGEDSTIMPACK__:
		resp->insertBoolean(isRangedStimPack());
		break;
	default:
		throw Exception("Method does not exists");
	}
}

int RangedStimPackAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<RangedStimPack*>(stub))->handleObjectMenuSelect(player, selectedID);
}

unsigned int RangedStimPackAdapter::calculatePower(CreatureObject* healer, CreatureObject* patient, bool applyBattleFatigue) {
	return (static_cast<RangedStimPack*>(stub))->calculatePower(healer, patient, applyBattleFatigue);
}

float RangedStimPackAdapter::getRange(CreatureObject* creature) {
	return (static_cast<RangedStimPack*>(stub))->getRange(creature);
}

float RangedStimPackAdapter::getEffectiveness() {
	return (static_cast<RangedStimPack*>(stub))->getEffectiveness();
}

float RangedStimPackAdapter::getArea() {
	return (static_cast<RangedStimPack*>(stub))->getArea();
}

bool RangedStimPackAdapter::isArea() {
	return (static_cast<RangedStimPack*>(stub))->isArea();
}

float RangedStimPackAdapter::getRangeMod() {
	return (static_cast<RangedStimPack*>(stub))->getRangeMod();
}

bool RangedStimPackAdapter::isRangedStimPack() {
	return (static_cast<RangedStimPack*>(stub))->isRangedStimPack();
}

/*
 *	RangedStimPackHelper
 */

RangedStimPackHelper* RangedStimPackHelper::staticInitializer = RangedStimPackHelper::instance();

RangedStimPackHelper::RangedStimPackHelper() {
	className = "RangedStimPack";

	Core::getObjectBroker()->registerClass(className, this);
}

void RangedStimPackHelper::finalizeHelper() {
	RangedStimPackHelper::finalize();
}

DistributedObject* RangedStimPackHelper::instantiateObject() {
	return new RangedStimPack(DummyConstructorParameter::instance());
}

DistributedObjectServant* RangedStimPackHelper::instantiateServant() {
	return new RangedStimPackImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* RangedStimPackHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new RangedStimPackAdapter(static_cast<RangedStimPack*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

