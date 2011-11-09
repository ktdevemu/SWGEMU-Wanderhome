/*
 *	server/zone/objects/creature/buffs/SpiceBuff.cpp generated by engine3 IDL compiler 0.60
 */

#include "SpiceBuff.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/creature/buffs/BuffDurationEvent.h"

#include "server/zone/objects/creature/buffs/SpiceDownerBuff.h"

/*
 *	SpiceBuffStub
 */

enum {RPC_ACTIVATE__BOOL_ = 6,RPC_DEACTIVATE__BOOL_,RPC_SETDOWNERATTRIBUTES__CREATUREOBJECT_BUFF_};

SpiceBuff::SpiceBuff(CreatureObject* creo, const String& name, unsigned int buffCRC, int duration) : Buff(DummyConstructorParameter::instance()) {
	SpiceBuffImplementation* _implementation = new SpiceBuffImplementation(creo, name, buffCRC, duration);
	_impl = _implementation;
	_impl->_setStub(this);
}

SpiceBuff::SpiceBuff(DummyConstructorParameter* param) : Buff(param) {
}

SpiceBuff::~SpiceBuff() {
}



void SpiceBuff::activate(bool applyModifiers) {
	SpiceBuffImplementation* _implementation = static_cast<SpiceBuffImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ACTIVATE__BOOL_);
		method.addBooleanParameter(applyModifiers);

		method.executeWithVoidReturn();
	} else
		_implementation->activate(applyModifiers);
}

void SpiceBuff::deactivate(bool removeModifiers) {
	SpiceBuffImplementation* _implementation = static_cast<SpiceBuffImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DEACTIVATE__BOOL_);
		method.addBooleanParameter(removeModifiers);

		method.executeWithVoidReturn();
	} else
		_implementation->deactivate(removeModifiers);
}

void SpiceBuff::setDownerAttributes(CreatureObject* creature, Buff* buff) {
	SpiceBuffImplementation* _implementation = static_cast<SpiceBuffImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETDOWNERATTRIBUTES__CREATUREOBJECT_BUFF_);
		method.addObjectParameter(creature);
		method.addObjectParameter(buff);

		method.executeWithVoidReturn();
	} else
		_implementation->setDownerAttributes(creature, buff);
}

DistributedObjectServant* SpiceBuff::_getImplementation() {

	_updated = true;
	return _impl;
}

void SpiceBuff::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	SpiceBuffImplementation
 */

SpiceBuffImplementation::SpiceBuffImplementation(DummyConstructorParameter* param) : BuffImplementation(param) {
	_initializeImplementation();
}


SpiceBuffImplementation::~SpiceBuffImplementation() {
}


void SpiceBuffImplementation::finalize() {
}

void SpiceBuffImplementation::_initializeImplementation() {
	_setClassHelper(SpiceBuffHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void SpiceBuffImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<SpiceBuff*>(stub);
	BuffImplementation::_setStub(stub);
}

DistributedObjectStub* SpiceBuffImplementation::_getStub() {
	return _this;
}

SpiceBuffImplementation::operator const SpiceBuff*() {
	return _this;
}

void SpiceBuffImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void SpiceBuffImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void SpiceBuffImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void SpiceBuffImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void SpiceBuffImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void SpiceBuffImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void SpiceBuffImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void SpiceBuffImplementation::_serializationHelperMethod() {
	BuffImplementation::_serializationHelperMethod();

	_setClassName("SpiceBuff");

}

void SpiceBuffImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(SpiceBuffImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool SpiceBuffImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (BuffImplementation::readObjectMember(stream, _name))
		return true;


	return false;
}

void SpiceBuffImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = SpiceBuffImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int SpiceBuffImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;

	return 0 + BuffImplementation::writeObjectMembers(stream);
}

SpiceBuffImplementation::SpiceBuffImplementation(CreatureObject* creo, const String& name, unsigned int buffCRC, int duration) : BuffImplementation(creo, buffCRC, duration, BuffType::SPICE) {
	_initializeImplementation();
	// server/zone/objects/creature/buffs/SpiceBuff.idl():  		super.buffName = name;
	BuffImplementation::buffName = name;
	// server/zone/objects/creature/buffs/SpiceBuff.idl():  		Logger.setLoggingName("SpiceBuff " + name);
	Logger::setLoggingName("SpiceBuff " + name);
}

void SpiceBuffImplementation::activate(bool applyModifiers) {
	// server/zone/objects/creature/buffs/SpiceBuff.idl():  		super.creature.sendSystemMessage("spice/spice", super.buffName + "_consume");
	BuffImplementation::creature.getForUpdate()->sendSystemMessage("spice/spice", BuffImplementation::buffName + "_consume");
	// server/zone/objects/creature/buffs/SpiceBuff.idl():  		super.activate(true);
	BuffImplementation::activate(true);
}

/*
 *	SpiceBuffAdapter
 */

SpiceBuffAdapter::SpiceBuffAdapter(SpiceBuff* obj) : BuffAdapter(obj) {
}

Packet* SpiceBuffAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_ACTIVATE__BOOL_:
		activate(inv->getBooleanParameter());
		break;
	case RPC_DEACTIVATE__BOOL_:
		deactivate(inv->getBooleanParameter());
		break;
	case RPC_SETDOWNERATTRIBUTES__CREATUREOBJECT_BUFF_:
		setDownerAttributes(static_cast<CreatureObject*>(inv->getObjectParameter()), static_cast<Buff*>(inv->getObjectParameter()));
		break;
	default:
		return NULL;
	}

	return resp;
}

void SpiceBuffAdapter::activate(bool applyModifiers) {
	(static_cast<SpiceBuff*>(stub))->activate(applyModifiers);
}

void SpiceBuffAdapter::deactivate(bool removeModifiers) {
	(static_cast<SpiceBuff*>(stub))->deactivate(removeModifiers);
}

void SpiceBuffAdapter::setDownerAttributes(CreatureObject* creature, Buff* buff) {
	(static_cast<SpiceBuff*>(stub))->setDownerAttributes(creature, buff);
}

/*
 *	SpiceBuffHelper
 */

SpiceBuffHelper* SpiceBuffHelper::staticInitializer = SpiceBuffHelper::instance();

SpiceBuffHelper::SpiceBuffHelper() {
	className = "SpiceBuff";

	Core::getObjectBroker()->registerClass(className, this);
}

void SpiceBuffHelper::finalizeHelper() {
	SpiceBuffHelper::finalize();
}

DistributedObject* SpiceBuffHelper::instantiateObject() {
	return new SpiceBuff(DummyConstructorParameter::instance());
}

DistributedObjectServant* SpiceBuffHelper::instantiateServant() {
	return new SpiceBuffImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* SpiceBuffHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new SpiceBuffAdapter(static_cast<SpiceBuff*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

