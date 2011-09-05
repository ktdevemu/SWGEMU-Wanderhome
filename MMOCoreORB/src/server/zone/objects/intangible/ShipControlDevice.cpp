/*
 *	server/zone/objects/intangible/ShipControlDevice.cpp generated by engine3 IDL compiler 0.60
 */

#include "ShipControlDevice.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

/*
 *	ShipControlDeviceStub
 */

enum {RPC_STOREOBJECT__CREATUREOBJECT_ = 6,RPC_GENERATEOBJECT__CREATUREOBJECT_,RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,};

ShipControlDevice::ShipControlDevice() : ControlDevice(DummyConstructorParameter::instance()) {
	ShipControlDeviceImplementation* _implementation = new ShipControlDeviceImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

ShipControlDevice::ShipControlDevice(DummyConstructorParameter* param) : ControlDevice(param) {
}

ShipControlDevice::~ShipControlDevice() {
}


void ShipControlDevice::storeObject(CreatureObject* player) {
	ShipControlDeviceImplementation* _implementation = (ShipControlDeviceImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_STOREOBJECT__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->storeObject(player);
}

void ShipControlDevice::generateObject(CreatureObject* player) {
	ShipControlDeviceImplementation* _implementation = (ShipControlDeviceImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GENERATEOBJECT__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->generateObject(player);
}

int ShipControlDevice::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	ShipControlDeviceImplementation* _implementation = (ShipControlDeviceImplementation*) _getImplementation();
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

void ShipControlDevice::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player) {
	ShipControlDeviceImplementation* _implementation = (ShipControlDeviceImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillObjectMenuResponse(menuResponse, player);
}

DistributedObjectServant* ShipControlDevice::_getImplementation() {

	_updated = true;
	return _impl;
}

void ShipControlDevice::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	ShipControlDeviceImplementation
 */

ShipControlDeviceImplementation::ShipControlDeviceImplementation(DummyConstructorParameter* param) : ControlDeviceImplementation(param) {
	_initializeImplementation();
}


ShipControlDeviceImplementation::~ShipControlDeviceImplementation() {
}


void ShipControlDeviceImplementation::finalize() {
}

void ShipControlDeviceImplementation::_initializeImplementation() {
	_setClassHelper(ShipControlDeviceHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void ShipControlDeviceImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (ShipControlDevice*) stub;
	ControlDeviceImplementation::_setStub(stub);
}

DistributedObjectStub* ShipControlDeviceImplementation::_getStub() {
	return _this;
}

ShipControlDeviceImplementation::operator const ShipControlDevice*() {
	return _this;
}

void ShipControlDeviceImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void ShipControlDeviceImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void ShipControlDeviceImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void ShipControlDeviceImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void ShipControlDeviceImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void ShipControlDeviceImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void ShipControlDeviceImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void ShipControlDeviceImplementation::_serializationHelperMethod() {
	ControlDeviceImplementation::_serializationHelperMethod();

	_setClassName("ShipControlDevice");

}

void ShipControlDeviceImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(ShipControlDeviceImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool ShipControlDeviceImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ControlDeviceImplementation::readObjectMember(stream, _name))
		return true;


	return false;
}

void ShipControlDeviceImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ShipControlDeviceImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ShipControlDeviceImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;

	return 0 + ControlDeviceImplementation::writeObjectMembers(stream);
}

ShipControlDeviceImplementation::ShipControlDeviceImplementation() {
	_initializeImplementation();
	// server/zone/objects/intangible/ShipControlDevice.idl():  		Logger.setLoggingName("ShipControlDevice");
	Logger::setLoggingName("ShipControlDevice");
}

int ShipControlDeviceImplementation::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	// server/zone/objects/intangible/ShipControlDevice.idl():  		Logger.info("selected call");
	Logger::info("selected call");
	// server/zone/objects/intangible/ShipControlDevice.idl():  		return 
	if (selectedID == RadialOptions::VEHICLE_GENERATE){
	// server/zone/objects/intangible/ShipControlDevice.idl():  		}
	if (ControlDeviceImplementation::controlledObject.getForUpdate() == NULL){
	// server/zone/objects/intangible/ShipControlDevice.idl():  				Logger.error("null controlled object in vehicle control device");
	Logger::error("null controlled object in vehicle control device");
	// server/zone/objects/intangible/ShipControlDevice.idl():  				return 1;
	return 1;
}

	else 	// server/zone/objects/intangible/ShipControlDevice.idl():  		}
	if (player->getParent() == NULL){
	// server/zone/objects/intangible/ShipControlDevice.idl():  				this.generateObject(player);
	_this->generateObject(player);
}
}

	else 	// server/zone/objects/intangible/ShipControlDevice.idl():  		return 
	if (selectedID == RadialOptions::VEHICLE_STORE){
	// server/zone/objects/intangible/ShipControlDevice.idl():  			}
	if (ControlDeviceImplementation::controlledObject.getForUpdate() == NULL){
	// server/zone/objects/intangible/ShipControlDevice.idl():  				Logger.error("null controlled object in vehicle control device");
	Logger::error("null controlled object in vehicle control device");
	// server/zone/objects/intangible/ShipControlDevice.idl():  				return 1;
	return 1;
}

	else {
	// server/zone/objects/intangible/ShipControlDevice.idl():  				}
	if (ControlDeviceImplementation::status == 1 && !ControlDeviceImplementation::controlledObject.getForUpdate()->isInQuadTree()){
	// server/zone/objects/intangible/ShipControlDevice.idl():  					this.generateObject(player);
	_this->generateObject(player);
}

	else {
	// server/zone/objects/intangible/ShipControlDevice.idl():  					this.storeObject(player);
	_this->storeObject(player);
}
}
}
	// server/zone/objects/intangible/ShipControlDevice.idl():  		return 0;
	return 0;
}

/*
 *	ShipControlDeviceAdapter
 */

ShipControlDeviceAdapter::ShipControlDeviceAdapter(ShipControlDeviceImplementation* obj) : ControlDeviceAdapter(obj) {
}

Packet* ShipControlDeviceAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_STOREOBJECT__CREATUREOBJECT_:
		storeObject((CreatureObject*) inv->getObjectParameter());
		break;
	case RPC_GENERATEOBJECT__CREATUREOBJECT_:
		generateObject((CreatureObject*) inv->getObjectParameter());
		break;
	case RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_:
		resp->insertSignedInt(handleObjectMenuSelect((CreatureObject*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	default:
		return NULL;
	}

	return resp;
}

void ShipControlDeviceAdapter::storeObject(CreatureObject* player) {
	((ShipControlDeviceImplementation*) impl)->storeObject(player);
}

void ShipControlDeviceAdapter::generateObject(CreatureObject* player) {
	((ShipControlDeviceImplementation*) impl)->generateObject(player);
}

int ShipControlDeviceAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return ((ShipControlDeviceImplementation*) impl)->handleObjectMenuSelect(player, selectedID);
}

/*
 *	ShipControlDeviceHelper
 */

ShipControlDeviceHelper* ShipControlDeviceHelper::staticInitializer = ShipControlDeviceHelper::instance();

ShipControlDeviceHelper::ShipControlDeviceHelper() {
	className = "ShipControlDevice";

	Core::getObjectBroker()->registerClass(className, this);
}

void ShipControlDeviceHelper::finalizeHelper() {
	ShipControlDeviceHelper::finalize();
}

DistributedObject* ShipControlDeviceHelper::instantiateObject() {
	return new ShipControlDevice(DummyConstructorParameter::instance());
}

DistributedObjectServant* ShipControlDeviceHelper::instantiateServant() {
	return new ShipControlDeviceImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ShipControlDeviceHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ShipControlDeviceAdapter((ShipControlDeviceImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

