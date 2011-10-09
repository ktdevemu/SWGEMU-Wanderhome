/*
 *	server/zone/objects/tangible/tool/smuggler/PrecisionLaserKnife.cpp generated by engine3 IDL compiler 0.60
 */

#include "PrecisionLaserKnife.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/objects/manufactureschematic/ManufactureSchematic.h"

/*
 *	PrecisionLaserKnifeStub
 */

enum {RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_ = 6,RPC_UPDATECRAFTINGVALUES__MANUFACTURESCHEMATIC_,RPC_UPDATECHARGES__INT_,RPC_USECHARGE__CREATUREOBJECT_,RPC_GETCHARGES__};

PrecisionLaserKnife::PrecisionLaserKnife() : SlicingTool(DummyConstructorParameter::instance()) {
	PrecisionLaserKnifeImplementation* _implementation = new PrecisionLaserKnifeImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

PrecisionLaserKnife::PrecisionLaserKnife(DummyConstructorParameter* param) : SlicingTool(param) {
}

PrecisionLaserKnife::~PrecisionLaserKnife() {
}



int PrecisionLaserKnife::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	PrecisionLaserKnifeImplementation* _implementation = static_cast<PrecisionLaserKnifeImplementation*>(_getImplementation());
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

void PrecisionLaserKnife::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	PrecisionLaserKnifeImplementation* _implementation = static_cast<PrecisionLaserKnifeImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillAttributeList(msg, object);
}

void PrecisionLaserKnife::updateCraftingValues(ManufactureSchematic* schematic) {
	PrecisionLaserKnifeImplementation* _implementation = static_cast<PrecisionLaserKnifeImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_UPDATECRAFTINGVALUES__MANUFACTURESCHEMATIC_);
		method.addObjectParameter(schematic);

		method.executeWithVoidReturn();
	} else
		_implementation->updateCraftingValues(schematic);
}

void PrecisionLaserKnife::updateCharges(int val) {
	PrecisionLaserKnifeImplementation* _implementation = static_cast<PrecisionLaserKnifeImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_UPDATECHARGES__INT_);
		method.addSignedIntParameter(val);

		method.executeWithVoidReturn();
	} else
		_implementation->updateCharges(val);
}

void PrecisionLaserKnife::useCharge(CreatureObject* player) {
	PrecisionLaserKnifeImplementation* _implementation = static_cast<PrecisionLaserKnifeImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_USECHARGE__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->useCharge(player);
}

int PrecisionLaserKnife::getCharges() {
	PrecisionLaserKnifeImplementation* _implementation = static_cast<PrecisionLaserKnifeImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETCHARGES__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getCharges();
}

DistributedObjectServant* PrecisionLaserKnife::_getImplementation() {

	_updated = true;
	return _impl;
}

void PrecisionLaserKnife::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	PrecisionLaserKnifeImplementation
 */

PrecisionLaserKnifeImplementation::PrecisionLaserKnifeImplementation(DummyConstructorParameter* param) : SlicingToolImplementation(param) {
	_initializeImplementation();
}


PrecisionLaserKnifeImplementation::~PrecisionLaserKnifeImplementation() {
}


void PrecisionLaserKnifeImplementation::finalize() {
}

void PrecisionLaserKnifeImplementation::_initializeImplementation() {
	_setClassHelper(PrecisionLaserKnifeHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void PrecisionLaserKnifeImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<PrecisionLaserKnife*>(stub);
	SlicingToolImplementation::_setStub(stub);
}

DistributedObjectStub* PrecisionLaserKnifeImplementation::_getStub() {
	return _this;
}

PrecisionLaserKnifeImplementation::operator const PrecisionLaserKnife*() {
	return _this;
}

void PrecisionLaserKnifeImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void PrecisionLaserKnifeImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void PrecisionLaserKnifeImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void PrecisionLaserKnifeImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void PrecisionLaserKnifeImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void PrecisionLaserKnifeImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void PrecisionLaserKnifeImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void PrecisionLaserKnifeImplementation::_serializationHelperMethod() {
	SlicingToolImplementation::_serializationHelperMethod();

	_setClassName("PrecisionLaserKnife");

}

void PrecisionLaserKnifeImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(PrecisionLaserKnifeImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool PrecisionLaserKnifeImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (SlicingToolImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "charges") {
		TypeInfo<int >::parseFromBinaryStream(&charges, stream);
		return true;
	}


	return false;
}

void PrecisionLaserKnifeImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = PrecisionLaserKnifeImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int PrecisionLaserKnifeImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "charges";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&charges, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 1 + SlicingToolImplementation::writeObjectMembers(stream);
}

PrecisionLaserKnifeImplementation::PrecisionLaserKnifeImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/tool/smuggler/PrecisionLaserKnife.idl():  		setLoggingName("SlicingTool");
	setLoggingName("SlicingTool");
	// server/zone/objects/tangible/tool/smuggler/PrecisionLaserKnife.idl():  		charges = 10;
	charges = 10;
}

void PrecisionLaserKnifeImplementation::updateCraftingValues(ManufactureSchematic* schematic) {
	// server/zone/objects/tangible/tool/smuggler/PrecisionLaserKnife.idl():  		super.setUseCount(charges);
	SlicingToolImplementation::setUseCount(charges);
}

void PrecisionLaserKnifeImplementation::useCharge(CreatureObject* player) {
	// server/zone/objects/tangible/tool/smuggler/PrecisionLaserKnife.idl():  		decreaseUseCount(
	if (player == NULL)	// server/zone/objects/tangible/tool/smuggler/PrecisionLaserKnife.idl():  			return;
	return;
	// server/zone/objects/tangible/tool/smuggler/PrecisionLaserKnife.idl():  		decreaseUseCount();
	decreaseUseCount();
	// server/zone/objects/tangible/tool/smuggler/PrecisionLaserKnife.idl():  		updateCharges(getUseCount());
	updateCharges(getUseCount());
	// server/zone/objects/tangible/tool/smuggler/PrecisionLaserKnife.idl():  			player.sendSystemMessage("@slicing/slicing:used_knife");
	if (charges < 1)	// server/zone/objects/tangible/tool/smuggler/PrecisionLaserKnife.idl():  			player.sendSystemMessage("@slicing/slicing:used_up_knife");
	player->sendSystemMessage("@slicing/slicing:used_up_knife");

	else 	// server/zone/objects/tangible/tool/smuggler/PrecisionLaserKnife.idl():  			player.sendSystemMessage("@slicing/slicing:used_knife");
	player->sendSystemMessage("@slicing/slicing:used_knife");
}

int PrecisionLaserKnifeImplementation::getCharges() {
	// server/zone/objects/tangible/tool/smuggler/PrecisionLaserKnife.idl():  		return charges;
	return charges;
}

/*
 *	PrecisionLaserKnifeAdapter
 */

PrecisionLaserKnifeAdapter::PrecisionLaserKnifeAdapter(PrecisionLaserKnifeImplementation* obj) : SlicingToolAdapter(obj) {
}

Packet* PrecisionLaserKnifeAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_:
		resp->insertSignedInt(handleObjectMenuSelect(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getByteParameter()));
		break;
	case RPC_UPDATECRAFTINGVALUES__MANUFACTURESCHEMATIC_:
		updateCraftingValues(static_cast<ManufactureSchematic*>(inv->getObjectParameter()));
		break;
	case RPC_UPDATECHARGES__INT_:
		updateCharges(inv->getSignedIntParameter());
		break;
	case RPC_USECHARGE__CREATUREOBJECT_:
		useCharge(static_cast<CreatureObject*>(inv->getObjectParameter()));
		break;
	case RPC_GETCHARGES__:
		resp->insertSignedInt(getCharges());
		break;
	default:
		return NULL;
	}

	return resp;
}

int PrecisionLaserKnifeAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<PrecisionLaserKnifeImplementation*>(impl))->handleObjectMenuSelect(player, selectedID);
}

void PrecisionLaserKnifeAdapter::updateCraftingValues(ManufactureSchematic* schematic) {
	(static_cast<PrecisionLaserKnifeImplementation*>(impl))->updateCraftingValues(schematic);
}

void PrecisionLaserKnifeAdapter::updateCharges(int val) {
	(static_cast<PrecisionLaserKnifeImplementation*>(impl))->updateCharges(val);
}

void PrecisionLaserKnifeAdapter::useCharge(CreatureObject* player) {
	(static_cast<PrecisionLaserKnifeImplementation*>(impl))->useCharge(player);
}

int PrecisionLaserKnifeAdapter::getCharges() {
	return (static_cast<PrecisionLaserKnifeImplementation*>(impl))->getCharges();
}

/*
 *	PrecisionLaserKnifeHelper
 */

PrecisionLaserKnifeHelper* PrecisionLaserKnifeHelper::staticInitializer = PrecisionLaserKnifeHelper::instance();

PrecisionLaserKnifeHelper::PrecisionLaserKnifeHelper() {
	className = "PrecisionLaserKnife";

	Core::getObjectBroker()->registerClass(className, this);
}

void PrecisionLaserKnifeHelper::finalizeHelper() {
	PrecisionLaserKnifeHelper::finalize();
}

DistributedObject* PrecisionLaserKnifeHelper::instantiateObject() {
	return new PrecisionLaserKnife(DummyConstructorParameter::instance());
}

DistributedObjectServant* PrecisionLaserKnifeHelper::instantiateServant() {
	return new PrecisionLaserKnifeImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* PrecisionLaserKnifeHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new PrecisionLaserKnifeAdapter(static_cast<PrecisionLaserKnifeImplementation*>(obj->_getImplementation()));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

