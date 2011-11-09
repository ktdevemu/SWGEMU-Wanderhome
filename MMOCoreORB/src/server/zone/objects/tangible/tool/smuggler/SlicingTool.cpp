/*
 *	server/zone/objects/tangible/tool/smuggler/SlicingTool.cpp generated by engine3 IDL compiler 0.60
 */

#include "SlicingTool.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/objects/manufactureschematic/ManufactureSchematic.h"

/*
 *	SlicingToolStub
 */

enum {RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_ = 6,RPC_UPDATECRAFTINGVALUES__MANUFACTURESCHEMATIC_,RPC_CALCULATESUCCESSRATE__,RPC_GETEFFECTIVENESS__};

SlicingTool::SlicingTool() : TangibleObject(DummyConstructorParameter::instance()) {
	SlicingToolImplementation* _implementation = new SlicingToolImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

SlicingTool::SlicingTool(DummyConstructorParameter* param) : TangibleObject(param) {
}

SlicingTool::~SlicingTool() {
}



int SlicingTool::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	SlicingToolImplementation* _implementation = static_cast<SlicingToolImplementation*>(_getImplementation());
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

void SlicingTool::loadTemplateData(SharedObjectTemplate* templateData) {
	SlicingToolImplementation* _implementation = static_cast<SlicingToolImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

void SlicingTool::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	SlicingToolImplementation* _implementation = static_cast<SlicingToolImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillAttributeList(msg, object);
}

void SlicingTool::updateCraftingValues(ManufactureSchematic* schematic) {
	SlicingToolImplementation* _implementation = static_cast<SlicingToolImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_UPDATECRAFTINGVALUES__MANUFACTURESCHEMATIC_);
		method.addObjectParameter(schematic);

		method.executeWithVoidReturn();
	} else
		_implementation->updateCraftingValues(schematic);
}

bool SlicingTool::calculateSuccessRate() {
	SlicingToolImplementation* _implementation = static_cast<SlicingToolImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CALCULATESUCCESSRATE__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->calculateSuccessRate();
}

float SlicingTool::getEffectiveness() {
	SlicingToolImplementation* _implementation = static_cast<SlicingToolImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETEFFECTIVENESS__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getEffectiveness();
}

DistributedObjectServant* SlicingTool::_getImplementation() {

	_updated = true;
	return _impl;
}

void SlicingTool::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	SlicingToolImplementation
 */

SlicingToolImplementation::SlicingToolImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}


SlicingToolImplementation::~SlicingToolImplementation() {
}


void SlicingToolImplementation::finalize() {
}

void SlicingToolImplementation::_initializeImplementation() {
	_setClassHelper(SlicingToolHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void SlicingToolImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<SlicingTool*>(stub);
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* SlicingToolImplementation::_getStub() {
	return _this;
}

SlicingToolImplementation::operator const SlicingTool*() {
	return _this;
}

void SlicingToolImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void SlicingToolImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void SlicingToolImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void SlicingToolImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void SlicingToolImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void SlicingToolImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void SlicingToolImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void SlicingToolImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("SlicingTool");

}

void SlicingToolImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(SlicingToolImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool SlicingToolImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (TangibleObjectImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "effectiveness") {
		TypeInfo<float >::parseFromBinaryStream(&effectiveness, stream);
		return true;
	}


	return false;
}

void SlicingToolImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = SlicingToolImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int SlicingToolImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "effectiveness";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<float >::toBinaryStream(&effectiveness, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 1 + TangibleObjectImplementation::writeObjectMembers(stream);
}

SlicingToolImplementation::SlicingToolImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/tool/smuggler/SlicingTool.idl():  		setLoggingName("SlicingTool");
	setLoggingName("SlicingTool");
	// server/zone/objects/tangible/tool/smuggler/SlicingTool.idl():  		effectiveness = 0;
	effectiveness = 0;
}

float SlicingToolImplementation::getEffectiveness() {
	// server/zone/objects/tangible/tool/smuggler/SlicingTool.idl():  		return effectiveness;
	return effectiveness;
}

/*
 *	SlicingToolAdapter
 */

SlicingToolAdapter::SlicingToolAdapter(SlicingTool* obj) : TangibleObjectAdapter(obj) {
}

Packet* SlicingToolAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_:
		resp->insertSignedInt(handleObjectMenuSelect(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getByteParameter()));
		break;
	case RPC_UPDATECRAFTINGVALUES__MANUFACTURESCHEMATIC_:
		updateCraftingValues(static_cast<ManufactureSchematic*>(inv->getObjectParameter()));
		break;
	case RPC_CALCULATESUCCESSRATE__:
		resp->insertBoolean(calculateSuccessRate());
		break;
	case RPC_GETEFFECTIVENESS__:
		resp->insertFloat(getEffectiveness());
		break;
	default:
		return NULL;
	}

	return resp;
}

int SlicingToolAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<SlicingTool*>(stub))->handleObjectMenuSelect(player, selectedID);
}

void SlicingToolAdapter::updateCraftingValues(ManufactureSchematic* schematic) {
	(static_cast<SlicingTool*>(stub))->updateCraftingValues(schematic);
}

bool SlicingToolAdapter::calculateSuccessRate() {
	return (static_cast<SlicingTool*>(stub))->calculateSuccessRate();
}

float SlicingToolAdapter::getEffectiveness() {
	return (static_cast<SlicingTool*>(stub))->getEffectiveness();
}

/*
 *	SlicingToolHelper
 */

SlicingToolHelper* SlicingToolHelper::staticInitializer = SlicingToolHelper::instance();

SlicingToolHelper::SlicingToolHelper() {
	className = "SlicingTool";

	Core::getObjectBroker()->registerClass(className, this);
}

void SlicingToolHelper::finalizeHelper() {
	SlicingToolHelper::finalize();
}

DistributedObject* SlicingToolHelper::instantiateObject() {
	return new SlicingTool(DummyConstructorParameter::instance());
}

DistributedObjectServant* SlicingToolHelper::instantiateServant() {
	return new SlicingToolImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* SlicingToolHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new SlicingToolAdapter(static_cast<SlicingTool*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

