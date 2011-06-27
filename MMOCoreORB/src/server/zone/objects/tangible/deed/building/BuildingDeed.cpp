/*
 *	server/zone/objects/tangible/deed/building/BuildingDeed.cpp generated by engine3 IDL compiler 0.60
 */

#include "BuildingDeed.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

/*
 *	BuildingDeedStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__,RPC_HANDLEOBJECTMENUSELECT__PLAYERCREATURE_BYTE_,RPC_SETSURPLUSMAINTENANCE__INT_,RPC_GETSURPLUSMAINTENANCE__,RPC_ISBUILDINGDEED__};

BuildingDeed::BuildingDeed() : Deed(DummyConstructorParameter::instance()) {
	BuildingDeedImplementation* _implementation = new BuildingDeedImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

BuildingDeed::BuildingDeed(DummyConstructorParameter* param) : Deed(param) {
}

BuildingDeed::~BuildingDeed() {
}


void BuildingDeed::fillAttributeList(AttributeListMessage* alm, PlayerCreature* object) {
	BuildingDeedImplementation* _implementation = (BuildingDeedImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillAttributeList(alm, object);
}

void BuildingDeed::initializeTransientMembers() {
	BuildingDeedImplementation* _implementation = (BuildingDeedImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

int BuildingDeed::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	BuildingDeedImplementation* _implementation = (BuildingDeedImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEOBJECTMENUSELECT__PLAYERCREATURE_BYTE_);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->handleObjectMenuSelect(player, selectedID);
}

void BuildingDeed::setSurplusMaintenance(unsigned int surplusMaint) {
	BuildingDeedImplementation* _implementation = (BuildingDeedImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETSURPLUSMAINTENANCE__INT_);
		method.addUnsignedIntParameter(surplusMaint);

		method.executeWithVoidReturn();
	} else
		_implementation->setSurplusMaintenance(surplusMaint);
}

unsigned int BuildingDeed::getSurplusMaintenance() {
	BuildingDeedImplementation* _implementation = (BuildingDeedImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSURPLUSMAINTENANCE__);

		return method.executeWithUnsignedIntReturn();
	} else
		return _implementation->getSurplusMaintenance();
}

bool BuildingDeed::isBuildingDeed() {
	BuildingDeedImplementation* _implementation = (BuildingDeedImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISBUILDINGDEED__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isBuildingDeed();
}

DistributedObjectServant* BuildingDeed::_getImplementation() {

	_updated = true;
	return _impl;
}

void BuildingDeed::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	BuildingDeedImplementation
 */

BuildingDeedImplementation::BuildingDeedImplementation(DummyConstructorParameter* param) : DeedImplementation(param) {
	_initializeImplementation();
}


BuildingDeedImplementation::~BuildingDeedImplementation() {
}


void BuildingDeedImplementation::finalize() {
}

void BuildingDeedImplementation::_initializeImplementation() {
	_setClassHelper(BuildingDeedHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void BuildingDeedImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (BuildingDeed*) stub;
	DeedImplementation::_setStub(stub);
}

DistributedObjectStub* BuildingDeedImplementation::_getStub() {
	return _this;
}

BuildingDeedImplementation::operator const BuildingDeed*() {
	return _this;
}

void BuildingDeedImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void BuildingDeedImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void BuildingDeedImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void BuildingDeedImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void BuildingDeedImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void BuildingDeedImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void BuildingDeedImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void BuildingDeedImplementation::_serializationHelperMethod() {
	DeedImplementation::_serializationHelperMethod();

	_setClassName("BuildingDeed");

}

void BuildingDeedImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(BuildingDeedImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool BuildingDeedImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (DeedImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "surplusMaintenance") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&surplusMaintenance, stream);
		return true;
	}


	return false;
}

void BuildingDeedImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = BuildingDeedImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int BuildingDeedImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "surplusMaintenance";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&surplusMaintenance, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 1 + DeedImplementation::writeObjectMembers(stream);
}

BuildingDeedImplementation::BuildingDeedImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/deed/building/BuildingDeed.idl():  		Logger.setLoggingName("BuildingDeed");
	Logger::setLoggingName("BuildingDeed");
	// server/zone/objects/tangible/deed/building/BuildingDeed.idl():  		surplusMaintenance = 0;
	surplusMaintenance = 0;
}

void BuildingDeedImplementation::setSurplusMaintenance(unsigned int surplusMaint) {
	// server/zone/objects/tangible/deed/building/BuildingDeed.idl():  		surplusMaintenance = surplusMaint;
	surplusMaintenance = surplusMaint;
}

unsigned int BuildingDeedImplementation::getSurplusMaintenance() {
	// server/zone/objects/tangible/deed/building/BuildingDeed.idl():  		return surplusMaintenance;
	return surplusMaintenance;
}

bool BuildingDeedImplementation::isBuildingDeed() {
	// server/zone/objects/tangible/deed/building/BuildingDeed.idl():  		return true;
	return true;
}

/*
 *	BuildingDeedAdapter
 */

BuildingDeedAdapter::BuildingDeedAdapter(BuildingDeedImplementation* obj) : DeedAdapter(obj) {
}

Packet* BuildingDeedAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		initializeTransientMembers();
		break;
	case RPC_HANDLEOBJECTMENUSELECT__PLAYERCREATURE_BYTE_:
		resp->insertSignedInt(handleObjectMenuSelect((PlayerCreature*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	case RPC_SETSURPLUSMAINTENANCE__INT_:
		setSurplusMaintenance(inv->getUnsignedIntParameter());
		break;
	case RPC_GETSURPLUSMAINTENANCE__:
		resp->insertInt(getSurplusMaintenance());
		break;
	case RPC_ISBUILDINGDEED__:
		resp->insertBoolean(isBuildingDeed());
		break;
	default:
		return NULL;
	}

	return resp;
}

void BuildingDeedAdapter::initializeTransientMembers() {
	((BuildingDeedImplementation*) impl)->initializeTransientMembers();
}

int BuildingDeedAdapter::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	return ((BuildingDeedImplementation*) impl)->handleObjectMenuSelect(player, selectedID);
}

void BuildingDeedAdapter::setSurplusMaintenance(unsigned int surplusMaint) {
	((BuildingDeedImplementation*) impl)->setSurplusMaintenance(surplusMaint);
}

unsigned int BuildingDeedAdapter::getSurplusMaintenance() {
	return ((BuildingDeedImplementation*) impl)->getSurplusMaintenance();
}

bool BuildingDeedAdapter::isBuildingDeed() {
	return ((BuildingDeedImplementation*) impl)->isBuildingDeed();
}

/*
 *	BuildingDeedHelper
 */

BuildingDeedHelper* BuildingDeedHelper::staticInitializer = BuildingDeedHelper::instance();

BuildingDeedHelper::BuildingDeedHelper() {
	className = "BuildingDeed";

	Core::getObjectBroker()->registerClass(className, this);
}

void BuildingDeedHelper::finalizeHelper() {
	BuildingDeedHelper::finalize();
}

DistributedObject* BuildingDeedHelper::instantiateObject() {
	return new BuildingDeed(DummyConstructorParameter::instance());
}

DistributedObjectServant* BuildingDeedHelper::instantiateServant() {
	return new BuildingDeedImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* BuildingDeedHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new BuildingDeedAdapter((BuildingDeedImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

