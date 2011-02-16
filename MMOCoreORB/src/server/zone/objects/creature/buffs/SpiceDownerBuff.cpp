/*
 *	server/zone/objects/creature/buffs/SpiceDownerBuff.cpp generated by engine3 IDL compiler 0.60
 */

#include "SpiceDownerBuff.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/creature/buffs/BuffDurationEvent.h"

/*
 *	SpiceDownerBuffStub
 */

SpiceDownerBuff::SpiceDownerBuff(CreatureObject* creo, const String& name, unsigned int buffCRC, int duration) : Buff(DummyConstructorParameter::instance()) {
	SpiceDownerBuffImplementation* _implementation = new SpiceDownerBuffImplementation(creo, name, buffCRC, duration);
	_impl = _implementation;
	_impl->_setStub(this);
}

SpiceDownerBuff::SpiceDownerBuff(DummyConstructorParameter* param) : Buff(param) {
}

SpiceDownerBuff::~SpiceDownerBuff() {
}


void SpiceDownerBuff::activate(bool applyModifiers) {
	SpiceDownerBuffImplementation* _implementation = (SpiceDownerBuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addBooleanParameter(applyModifiers);

		method.executeWithVoidReturn();
	} else
		_implementation->activate(applyModifiers);
}

void SpiceDownerBuff::deactivate(bool applyModifiers) {
	SpiceDownerBuffImplementation* _implementation = (SpiceDownerBuffImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addBooleanParameter(applyModifiers);

		method.executeWithVoidReturn();
	} else
		_implementation->deactivate(applyModifiers);
}

DistributedObjectServant* SpiceDownerBuff::_getImplementation() {

	_updated = true;
	return _impl;
}

void SpiceDownerBuff::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	SpiceDownerBuffImplementation
 */

SpiceDownerBuffImplementation::SpiceDownerBuffImplementation(DummyConstructorParameter* param) : BuffImplementation(param) {
	_initializeImplementation();
}


SpiceDownerBuffImplementation::~SpiceDownerBuffImplementation() {
}


void SpiceDownerBuffImplementation::finalize() {
}

void SpiceDownerBuffImplementation::_initializeImplementation() {
	_setClassHelper(SpiceDownerBuffHelper::instance());

	_serializationHelperMethod();
	_serializationHelperMethod();
}

void SpiceDownerBuffImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (SpiceDownerBuff*) stub;
	BuffImplementation::_setStub(stub);
}

DistributedObjectStub* SpiceDownerBuffImplementation::_getStub() {
	return _this;
}

SpiceDownerBuffImplementation::operator const SpiceDownerBuff*() {
	return _this;
}

void SpiceDownerBuffImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void SpiceDownerBuffImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void SpiceDownerBuffImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void SpiceDownerBuffImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void SpiceDownerBuffImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void SpiceDownerBuffImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void SpiceDownerBuffImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void SpiceDownerBuffImplementation::_serializationHelperMethod() {
	BuffImplementation::_serializationHelperMethod();

	_setClassName("SpiceDownerBuff");

}

void SpiceDownerBuffImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(SpiceDownerBuffImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool SpiceDownerBuffImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (BuffImplementation::readObjectMember(stream, _name))
		return true;


	return false;
}

void SpiceDownerBuffImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = SpiceDownerBuffImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int SpiceDownerBuffImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;

	return 0 + BuffImplementation::writeObjectMembers(stream);
}

SpiceDownerBuffImplementation::SpiceDownerBuffImplementation(CreatureObject* creo, const String& name, unsigned int buffCRC, int duration) : BuffImplementation(creo, buffCRC, duration, BuffType::SPICE) {
	_initializeImplementation();
	// server/zone/objects/creature/buffs/SpiceDownerBuff.idl(64):  		super.buffName = name;
	BuffImplementation::buffName = name;
}

void SpiceDownerBuffImplementation::activate(bool applyModifiers) {
	// server/zone/objects/creature/buffs/SpiceDownerBuff.idl(68):  		super.creature.sendSystemMessage("spice/spice", super.buffName + "_downer");
	BuffImplementation::creature.getForUpdate()->sendSystemMessage("spice/spice", BuffImplementation::buffName + "_downer");
	// server/zone/objects/creature/buffs/SpiceDownerBuff.idl(70):  
	if (BuffImplementation::creature.getForUpdate()->hasBuff(BuffCRC::FOOD_REDUCE_SPICE_DOWNTIME)){
	// server/zone/objects/creature/buffs/SpiceDownerBuff.idl(71):  			Buff buff = super.creature.getBuff(BuffCRC.FOOD_REDUCE_SPICE_DOWNTIME);
	Buff* buff = BuffImplementation::creature.getForUpdate()->getBuff(BuffCRC::FOOD_REDUCE_SPICE_DOWNTIME);
	// server/zone/objects/creature/buffs/SpiceDownerBuff.idl(73):  
	if (buff != NULL){
	// server/zone/objects/creature/buffs/SpiceDownerBuff.idl(74):  				super.buffDuration = super.buffDuration * (100.0 - buff.getSkillModifierValue("reduce_spice_downtime")) / 100.0;
	BuffImplementation::buffDuration = BuffImplementation::buffDuration * (100.0 - buff->getSkillModifierValue("reduce_spice_downtime")) / 100.0;
	// server/zone/objects/creature/buffs/SpiceDownerBuff.idl(76):  				super.creature.removeBuff(buff);
	BuffImplementation::creature.getForUpdate()->removeBuff(buff);
}

	else {
}
	// server/zone/objects/creature/buffs/SpiceDownerBuff.idl(81):  			super.activate(applyModifiers);
	BuffImplementation::activate(applyModifiers);
}

	else {
	// server/zone/objects/creature/buffs/SpiceDownerBuff.idl(83):  			super.activate(applyModifiers);
	BuffImplementation::activate(applyModifiers);
}
}

void SpiceDownerBuffImplementation::deactivate(bool applyModifiers) {
	// server/zone/objects/creature/buffs/SpiceDownerBuff.idl(88):  		super.creature.sendSystemMessage("spice/spice", super.buffName + "_done");
	BuffImplementation::creature.getForUpdate()->sendSystemMessage("spice/spice", BuffImplementation::buffName + "_done");
	// server/zone/objects/creature/buffs/SpiceDownerBuff.idl(90):  		super.deactivate(applyModifiers);
	BuffImplementation::deactivate(applyModifiers);
}

/*
 *	SpiceDownerBuffAdapter
 */

SpiceDownerBuffAdapter::SpiceDownerBuffAdapter(SpiceDownerBuffImplementation* obj) : BuffAdapter(obj) {
}

Packet* SpiceDownerBuffAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		activate(inv->getBooleanParameter());
		break;
	case 7:
		deactivate(inv->getBooleanParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void SpiceDownerBuffAdapter::activate(bool applyModifiers) {
	((SpiceDownerBuffImplementation*) impl)->activate(applyModifiers);
}

void SpiceDownerBuffAdapter::deactivate(bool applyModifiers) {
	((SpiceDownerBuffImplementation*) impl)->deactivate(applyModifiers);
}

/*
 *	SpiceDownerBuffHelper
 */

SpiceDownerBuffHelper* SpiceDownerBuffHelper::staticInitializer = SpiceDownerBuffHelper::instance();

SpiceDownerBuffHelper::SpiceDownerBuffHelper() {
	className = "SpiceDownerBuff";

	Core::getObjectBroker()->registerClass(className, this);
}

void SpiceDownerBuffHelper::finalizeHelper() {
	SpiceDownerBuffHelper::finalize();
}

DistributedObject* SpiceDownerBuffHelper::instantiateObject() {
	return new SpiceDownerBuff(DummyConstructorParameter::instance());
}

DistributedObjectServant* SpiceDownerBuffHelper::instantiateServant() {
	return new SpiceDownerBuffImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* SpiceDownerBuffHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new SpiceDownerBuffAdapter((SpiceDownerBuffImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

