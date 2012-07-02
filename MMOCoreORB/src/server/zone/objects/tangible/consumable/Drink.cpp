/*
 *	server/zone/objects/tangible/consumable/Drink.cpp generated by engine3 IDL compiler 0.60
 */

#include "Drink.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

/*
 *	DrinkStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 6,RPC_INITIALIZEPRIVATEDATA__};

Drink::Drink() : Consumable(DummyConstructorParameter::instance()) {
	DrinkImplementation* _implementation = new DrinkImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("Drink");
}

Drink::Drink(DummyConstructorParameter* param) : Consumable(param) {
	_setClassName("Drink");
}

Drink::~Drink() {
}



void Drink::initializeTransientMembers() {
	DrinkImplementation* _implementation = static_cast<DrinkImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void Drink::initializePrivateData() {
	DrinkImplementation* _implementation = static_cast<DrinkImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZEPRIVATEDATA__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializePrivateData();
}

DistributedObjectServant* Drink::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

void Drink::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	DrinkImplementation
 */

DrinkImplementation::DrinkImplementation(DummyConstructorParameter* param) : ConsumableImplementation(param) {
	_initializeImplementation();
}


DrinkImplementation::~DrinkImplementation() {
}


void DrinkImplementation::finalize() {
}

void DrinkImplementation::_initializeImplementation() {
	_setClassHelper(DrinkHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void DrinkImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<Drink*>(stub);
	ConsumableImplementation::_setStub(stub);
}

DistributedObjectStub* DrinkImplementation::_getStub() {
	return _this.get();
}

DrinkImplementation::operator const Drink*() {
	return _this.get();
}

void DrinkImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void DrinkImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void DrinkImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void DrinkImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void DrinkImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void DrinkImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void DrinkImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void DrinkImplementation::_serializationHelperMethod() {
	ConsumableImplementation::_serializationHelperMethod();

	_setClassName("Drink");

}

void DrinkImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(DrinkImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool DrinkImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ConsumableImplementation::readObjectMember(stream, _name))
		return true;


	return false;
}

void DrinkImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = DrinkImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int DrinkImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ConsumableImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;

	return _count + 0;
}

DrinkImplementation::DrinkImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/consumable/Drink.idl():  		Logger.setLoggingName("Drink");
	Logger::setLoggingName("Drink");
	// server/zone/objects/tangible/consumable/Drink.idl():  		initializePrivateData();
	initializePrivateData();
}

void DrinkImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/consumable/Drink.idl():  		super.initializeTransientMembers();
	ConsumableImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/consumable/Drink.idl():  		Logger.setLoggingName("Drink");
	Logger::setLoggingName("Drink");
}

void DrinkImplementation::initializePrivateData() {
	// server/zone/objects/tangible/consumable/Drink.idl():  		super.consumableType = super.DRINK;
	ConsumableImplementation::consumableType = ConsumableImplementation::DRINK;
}

/*
 *	DrinkAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


DrinkAdapter::DrinkAdapter(Drink* obj) : ConsumableAdapter(obj) {
}

void DrinkAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			initializeTransientMembers();
		}
		break;
	case RPC_INITIALIZEPRIVATEDATA__:
		{
			initializePrivateData();
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

void DrinkAdapter::initializeTransientMembers() {
	(static_cast<Drink*>(stub))->initializeTransientMembers();
}

void DrinkAdapter::initializePrivateData() {
	(static_cast<Drink*>(stub))->initializePrivateData();
}

/*
 *	DrinkHelper
 */

DrinkHelper* DrinkHelper::staticInitializer = DrinkHelper::instance();

DrinkHelper::DrinkHelper() {
	className = "Drink";

	Core::getObjectBroker()->registerClass(className, this);
}

void DrinkHelper::finalizeHelper() {
	DrinkHelper::finalize();
}

DistributedObject* DrinkHelper::instantiateObject() {
	return new Drink(DummyConstructorParameter::instance());
}

DistributedObjectServant* DrinkHelper::instantiateServant() {
	return new DrinkImplementation();
}

DistributedObjectAdapter* DrinkHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new DrinkAdapter(static_cast<Drink*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

