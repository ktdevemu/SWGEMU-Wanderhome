/*
 *	server/zone/objects/tangible/component/armor/ArmorComponent.cpp generated by engine3 IDL compiler 0.60
 */

#include "ArmorComponent.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

/*
 *	ArmorComponentStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 6,RPC_SETKINETIC__FLOAT_,RPC_SETENERGY__FLOAT_,RPC_SETELECTRICITY__FLOAT_,RPC_SETSTUN__FLOAT_,RPC_SETBLAST__FLOAT_,RPC_SETHEAT__FLOAT_,RPC_SETCOLD__FLOAT_,RPC_SETACID__FLOAT_,RPC_SETLIGHTSABER__FLOAT_};

ArmorComponent::ArmorComponent() : Component(DummyConstructorParameter::instance()) {
	ArmorComponentImplementation* _implementation = new ArmorComponentImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("ArmorComponent");
}

ArmorComponent::ArmorComponent(DummyConstructorParameter* param) : Component(param) {
	_setClassName("ArmorComponent");
}

ArmorComponent::~ArmorComponent() {
}



void ArmorComponent::initializeTransientMembers() {
	ArmorComponentImplementation* _implementation = static_cast<ArmorComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void ArmorComponent::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	ArmorComponentImplementation* _implementation = static_cast<ArmorComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->updateCraftingValues(values, firstUpdate);
}

void ArmorComponent::setKinetic(float value) {
	ArmorComponentImplementation* _implementation = static_cast<ArmorComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETKINETIC__FLOAT_);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setKinetic(value);
}

void ArmorComponent::setEnergy(float value) {
	ArmorComponentImplementation* _implementation = static_cast<ArmorComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETENERGY__FLOAT_);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setEnergy(value);
}

void ArmorComponent::setElectricity(float value) {
	ArmorComponentImplementation* _implementation = static_cast<ArmorComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETELECTRICITY__FLOAT_);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setElectricity(value);
}

void ArmorComponent::setStun(float value) {
	ArmorComponentImplementation* _implementation = static_cast<ArmorComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETSTUN__FLOAT_);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setStun(value);
}

void ArmorComponent::setBlast(float value) {
	ArmorComponentImplementation* _implementation = static_cast<ArmorComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETBLAST__FLOAT_);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setBlast(value);
}

void ArmorComponent::setHeat(float value) {
	ArmorComponentImplementation* _implementation = static_cast<ArmorComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETHEAT__FLOAT_);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setHeat(value);
}

void ArmorComponent::setCold(float value) {
	ArmorComponentImplementation* _implementation = static_cast<ArmorComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETCOLD__FLOAT_);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setCold(value);
}

void ArmorComponent::setAcid(float value) {
	ArmorComponentImplementation* _implementation = static_cast<ArmorComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETACID__FLOAT_);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setAcid(value);
}

void ArmorComponent::setLightSaber(float value) {
	ArmorComponentImplementation* _implementation = static_cast<ArmorComponentImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETLIGHTSABER__FLOAT_);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setLightSaber(value);
}

DistributedObjectServant* ArmorComponent::_getImplementation() {

	_updated = true;
	return _impl;
}

void ArmorComponent::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	ArmorComponentImplementation
 */

ArmorComponentImplementation::ArmorComponentImplementation(DummyConstructorParameter* param) : ComponentImplementation(param) {
	_initializeImplementation();
}


ArmorComponentImplementation::~ArmorComponentImplementation() {
}


void ArmorComponentImplementation::finalize() {
}

void ArmorComponentImplementation::_initializeImplementation() {
	_setClassHelper(ArmorComponentHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void ArmorComponentImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<ArmorComponent*>(stub);
	ComponentImplementation::_setStub(stub);
}

DistributedObjectStub* ArmorComponentImplementation::_getStub() {
	return _this.get();
}

ArmorComponentImplementation::operator const ArmorComponent*() {
	return _this.get();
}

void ArmorComponentImplementation::lock(bool doLock) {
	_this.get()->lock(doLock);
}

void ArmorComponentImplementation::lock(ManagedObject* obj) {
	_this.get()->lock(obj);
}

void ArmorComponentImplementation::rlock(bool doLock) {
	_this.get()->rlock(doLock);
}

void ArmorComponentImplementation::wlock(bool doLock) {
	_this.get()->wlock(doLock);
}

void ArmorComponentImplementation::wlock(ManagedObject* obj) {
	_this.get()->wlock(obj);
}

void ArmorComponentImplementation::unlock(bool doLock) {
	_this.get()->unlock(doLock);
}

void ArmorComponentImplementation::runlock(bool doLock) {
	_this.get()->runlock(doLock);
}

void ArmorComponentImplementation::_serializationHelperMethod() {
	ComponentImplementation::_serializationHelperMethod();

	_setClassName("ArmorComponent");

}

void ArmorComponentImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(ArmorComponentImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool ArmorComponentImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ComponentImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "ArmorComponent.kinetic") {
		TypeInfo<float >::parseFromBinaryStream(&kinetic, stream);
		return true;
	}

	if (_name == "ArmorComponent.energy") {
		TypeInfo<float >::parseFromBinaryStream(&energy, stream);
		return true;
	}

	if (_name == "ArmorComponent.electricity") {
		TypeInfo<float >::parseFromBinaryStream(&electricity, stream);
		return true;
	}

	if (_name == "ArmorComponent.stun") {
		TypeInfo<float >::parseFromBinaryStream(&stun, stream);
		return true;
	}

	if (_name == "ArmorComponent.blast") {
		TypeInfo<float >::parseFromBinaryStream(&blast, stream);
		return true;
	}

	if (_name == "ArmorComponent.heat") {
		TypeInfo<float >::parseFromBinaryStream(&heat, stream);
		return true;
	}

	if (_name == "ArmorComponent.cold") {
		TypeInfo<float >::parseFromBinaryStream(&cold, stream);
		return true;
	}

	if (_name == "ArmorComponent.acid") {
		TypeInfo<float >::parseFromBinaryStream(&acid, stream);
		return true;
	}

	if (_name == "ArmorComponent.lightSaber") {
		TypeInfo<float >::parseFromBinaryStream(&lightSaber, stream);
		return true;
	}


	return false;
}

void ArmorComponentImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ArmorComponentImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ArmorComponentImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ComponentImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;
	_name = "ArmorComponent.kinetic";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&kinetic, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "ArmorComponent.energy";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&energy, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "ArmorComponent.electricity";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&electricity, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "ArmorComponent.stun";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&stun, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "ArmorComponent.blast";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&blast, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "ArmorComponent.heat";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&heat, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "ArmorComponent.cold";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&cold, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "ArmorComponent.acid";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&acid, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "ArmorComponent.lightSaber";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&lightSaber, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 9;
}

ArmorComponentImplementation::ArmorComponentImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		Logger.setLoggingName("ArmorComponent");
	Logger::setLoggingName("ArmorComponent");
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		kinetic = 0;
	kinetic = 0;
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		energy = 0;
	energy = 0;
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		electricity = 0;
	electricity = 0;
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		stun = 0;
	stun = 0;
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		blast = 0;
	blast = 0;
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		heat = 0;
	heat = 0;
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		cold = 0;
	cold = 0;
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		acid = 0;
	acid = 0;
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		lightSaber = 0;
	lightSaber = 0;
}

void ArmorComponentImplementation::setKinetic(float value) {
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		kinetic = value;
	kinetic = value;
}

void ArmorComponentImplementation::setEnergy(float value) {
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		energy = value;
	energy = value;
}

void ArmorComponentImplementation::setElectricity(float value) {
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		electricity = value;
	electricity = value;
}

void ArmorComponentImplementation::setStun(float value) {
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		stun = value;
	stun = value;
}

void ArmorComponentImplementation::setBlast(float value) {
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		blast = value;
	blast = value;
}

void ArmorComponentImplementation::setHeat(float value) {
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		heat = value;
	heat = value;
}

void ArmorComponentImplementation::setCold(float value) {
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		cold = value;
	cold = value;
}

void ArmorComponentImplementation::setAcid(float value) {
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		acid = value;
	acid = value;
}

void ArmorComponentImplementation::setLightSaber(float value) {
	// server/zone/objects/tangible/component/armor/ArmorComponent.idl():  		lightSaber = value;
	lightSaber = value;
}

/*
 *	ArmorComponentAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


ArmorComponentAdapter::ArmorComponentAdapter(ArmorComponent* obj) : ComponentAdapter(obj) {
}

void ArmorComponentAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			initializeTransientMembers();
		}
		break;
	case RPC_SETKINETIC__FLOAT_:
		{
			setKinetic(inv->getFloatParameter());
		}
		break;
	case RPC_SETENERGY__FLOAT_:
		{
			setEnergy(inv->getFloatParameter());
		}
		break;
	case RPC_SETELECTRICITY__FLOAT_:
		{
			setElectricity(inv->getFloatParameter());
		}
		break;
	case RPC_SETSTUN__FLOAT_:
		{
			setStun(inv->getFloatParameter());
		}
		break;
	case RPC_SETBLAST__FLOAT_:
		{
			setBlast(inv->getFloatParameter());
		}
		break;
	case RPC_SETHEAT__FLOAT_:
		{
			setHeat(inv->getFloatParameter());
		}
		break;
	case RPC_SETCOLD__FLOAT_:
		{
			setCold(inv->getFloatParameter());
		}
		break;
	case RPC_SETACID__FLOAT_:
		{
			setAcid(inv->getFloatParameter());
		}
		break;
	case RPC_SETLIGHTSABER__FLOAT_:
		{
			setLightSaber(inv->getFloatParameter());
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

void ArmorComponentAdapter::initializeTransientMembers() {
	(static_cast<ArmorComponent*>(stub))->initializeTransientMembers();
}

void ArmorComponentAdapter::setKinetic(float value) {
	(static_cast<ArmorComponent*>(stub))->setKinetic(value);
}

void ArmorComponentAdapter::setEnergy(float value) {
	(static_cast<ArmorComponent*>(stub))->setEnergy(value);
}

void ArmorComponentAdapter::setElectricity(float value) {
	(static_cast<ArmorComponent*>(stub))->setElectricity(value);
}

void ArmorComponentAdapter::setStun(float value) {
	(static_cast<ArmorComponent*>(stub))->setStun(value);
}

void ArmorComponentAdapter::setBlast(float value) {
	(static_cast<ArmorComponent*>(stub))->setBlast(value);
}

void ArmorComponentAdapter::setHeat(float value) {
	(static_cast<ArmorComponent*>(stub))->setHeat(value);
}

void ArmorComponentAdapter::setCold(float value) {
	(static_cast<ArmorComponent*>(stub))->setCold(value);
}

void ArmorComponentAdapter::setAcid(float value) {
	(static_cast<ArmorComponent*>(stub))->setAcid(value);
}

void ArmorComponentAdapter::setLightSaber(float value) {
	(static_cast<ArmorComponent*>(stub))->setLightSaber(value);
}

/*
 *	ArmorComponentHelper
 */

ArmorComponentHelper* ArmorComponentHelper::staticInitializer = ArmorComponentHelper::instance();

ArmorComponentHelper::ArmorComponentHelper() {
	className = "ArmorComponent";

	Core::getObjectBroker()->registerClass(className, this);
}

void ArmorComponentHelper::finalizeHelper() {
	ArmorComponentHelper::finalize();
}

DistributedObject* ArmorComponentHelper::instantiateObject() {
	return new ArmorComponent(DummyConstructorParameter::instance());
}

DistributedObjectServant* ArmorComponentHelper::instantiateServant() {
	return new ArmorComponentImplementation();
}

DistributedObjectAdapter* ArmorComponentHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ArmorComponentAdapter(static_cast<ArmorComponent*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

