/*
 *	server/zone/objects/area/CampSiteActiveArea.cpp generated by engine3 IDL compiler 0.60
 */

#include "CampSiteActiveArea.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/objects/area/events/CampDespawnEvent.h"

/*
 *	CampSiteActiveAreaStub
 */

enum {RPC_NOTIFYENTER__SCENEOBJECT_ = 6};

CampSiteActiveArea::CampSiteActiveArea() : ActiveArea(DummyConstructorParameter::instance()) {
	CampSiteActiveAreaImplementation* _implementation = new CampSiteActiveAreaImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

CampSiteActiveArea::CampSiteActiveArea(DummyConstructorParameter* param) : ActiveArea(param) {
}

CampSiteActiveArea::~CampSiteActiveArea() {
}


void CampSiteActiveArea::notifyEnter(SceneObject* player) {
	CampSiteActiveAreaImplementation* _implementation = (CampSiteActiveAreaImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYENTER__SCENEOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->notifyEnter(player);
}

DistributedObjectServant* CampSiteActiveArea::_getImplementation() {

	_updated = true;
	return _impl;
}

void CampSiteActiveArea::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	CampSiteActiveAreaImplementation
 */

CampSiteActiveAreaImplementation::CampSiteActiveAreaImplementation(DummyConstructorParameter* param) : ActiveAreaImplementation(param) {
	_initializeImplementation();
}


CampSiteActiveAreaImplementation::~CampSiteActiveAreaImplementation() {
}


void CampSiteActiveAreaImplementation::finalize() {
}

void CampSiteActiveAreaImplementation::_initializeImplementation() {
	_setClassHelper(CampSiteActiveAreaHelper::instance());

	_serializationHelperMethod();
	_serializationHelperMethod();
}

void CampSiteActiveAreaImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (CampSiteActiveArea*) stub;
	ActiveAreaImplementation::_setStub(stub);
}

DistributedObjectStub* CampSiteActiveAreaImplementation::_getStub() {
	return _this;
}

CampSiteActiveAreaImplementation::operator const CampSiteActiveArea*() {
	return _this;
}

void CampSiteActiveAreaImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void CampSiteActiveAreaImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void CampSiteActiveAreaImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void CampSiteActiveAreaImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void CampSiteActiveAreaImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void CampSiteActiveAreaImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void CampSiteActiveAreaImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void CampSiteActiveAreaImplementation::_serializationHelperMethod() {
	ActiveAreaImplementation::_serializationHelperMethod();

	_setClassName("CampSiteActiveArea");

}

void CampSiteActiveAreaImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(CampSiteActiveAreaImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool CampSiteActiveAreaImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ActiveAreaImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "spawnedObject") {
		TypeInfo<ManagedReference<SceneObject* > >::parseFromBinaryStream(&spawnedObject, stream);
		return true;
	}

	if (_name == "currentXP") {
		TypeInfo<float >::parseFromBinaryStream(&currentXP, stream);
		return true;
	}

	if (_name == "campType") {
		TypeInfo<byte >::parseFromBinaryStream(&campType, stream);
		return true;
	}

	if (_name == "aggroMod") {
		TypeInfo<byte >::parseFromBinaryStream(&aggroMod, stream);
		return true;
	}

	if (_name == "areaRange") {
		TypeInfo<float >::parseFromBinaryStream(&areaRange, stream);
		return true;
	}

	if (_name == "campObjects") {
		TypeInfo<Vector<ManagedReference<SceneObject* > > >::parseFromBinaryStream(&campObjects, stream);
		return true;
	}

	if (_name == "visitors") {
		TypeInfo<CampVisitorList >::parseFromBinaryStream(&visitors, stream);
		return true;
	}

	if (_name == "abandoned") {
		TypeInfo<bool >::parseFromBinaryStream(&abandoned, stream);
		return true;
	}

	if (_name == "despawnEvent") {
		TypeInfo<Reference<CampDespawnEvent* > >::parseFromBinaryStream(&despawnEvent, stream);
		return true;
	}

	if (_name == "maxXP") {
		TypeInfo<int >::parseFromBinaryStream(&maxXP, stream);
		return true;
	}

	if (_name == "campModifier") {
		TypeInfo<byte >::parseFromBinaryStream(&campModifier, stream);
		return true;
	}

	if (_name == "duration") {
		TypeInfo<int >::parseFromBinaryStream(&duration, stream);
		return true;
	}

	if (_name == "campOwner") {
		TypeInfo<ManagedReference<PlayerCreature* > >::parseFromBinaryStream(&campOwner, stream);
		return true;
	}

	if (_name == "placementTime") {
		TypeInfo<Time >::parseFromBinaryStream(&placementTime, stream);
		return true;
	}


	return false;
}

void CampSiteActiveAreaImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = CampSiteActiveAreaImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int CampSiteActiveAreaImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "spawnedObject";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedReference<SceneObject* > >::toBinaryStream(&spawnedObject, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "currentXP";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<float >::toBinaryStream(&currentXP, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "campType";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<byte >::toBinaryStream(&campType, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "aggroMod";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<byte >::toBinaryStream(&aggroMod, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "areaRange";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<float >::toBinaryStream(&areaRange, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "campObjects";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<Vector<ManagedReference<SceneObject* > > >::toBinaryStream(&campObjects, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "visitors";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<CampVisitorList >::toBinaryStream(&visitors, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "abandoned";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<bool >::toBinaryStream(&abandoned, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "despawnEvent";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<Reference<CampDespawnEvent* > >::toBinaryStream(&despawnEvent, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "maxXP";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&maxXP, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "campModifier";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<byte >::toBinaryStream(&campModifier, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "duration";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&duration, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "campOwner";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedReference<PlayerCreature* > >::toBinaryStream(&campOwner, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "placementTime";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<Time >::toBinaryStream(&placementTime, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 14 + ActiveAreaImplementation::writeObjectMembers(stream);
}

CampSiteActiveAreaImplementation::CampSiteActiveAreaImplementation() {
	_initializeImplementation();
	// server/zone/objects/area/CampSiteActiveArea.idl():  		currentXP = 0;
	currentXP = 0;
	// server/zone/objects/area/CampSiteActiveArea.idl():  		campType = 0;
	campType = 0;
	// server/zone/objects/area/CampSiteActiveArea.idl():  		aggroMod = 0;
	aggroMod = 0;
	// server/zone/objects/area/CampSiteActiveArea.idl():  		areaRange = 0;
	areaRange = 0;
	// server/zone/objects/area/CampSiteActiveArea.idl():  		abandoned = false;
	abandoned = false;
	// server/zone/objects/area/CampSiteActiveArea.idl():  		maxXP = 0;
	maxXP = 0;
	// server/zone/objects/area/CampSiteActiveArea.idl():  		campModifier = 0;
	campModifier = 0;
	// server/zone/objects/area/CampSiteActiveArea.idl():  		duration = 0;
	duration = 0;
	// server/zone/objects/area/CampSiteActiveArea.idl():  		Logger.setLoggingName("CampsiteActiveArea");
	Logger::setLoggingName("CampsiteActiveArea");
}

void CampSiteActiveAreaImplementation::notifyEnter(SceneObject* player) {
	// server/zone/objects/area/CampSiteActiveArea.idl():  	}
	if (!player->isPlayerCreature())	// server/zone/objects/area/CampSiteActiveArea.idl():  			return;
	return;
}

/*
 *	CampSiteActiveAreaAdapter
 */

CampSiteActiveAreaAdapter::CampSiteActiveAreaAdapter(CampSiteActiveAreaImplementation* obj) : ActiveAreaAdapter(obj) {
}

Packet* CampSiteActiveAreaAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_NOTIFYENTER__SCENEOBJECT_:
		notifyEnter((SceneObject*) inv->getObjectParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void CampSiteActiveAreaAdapter::notifyEnter(SceneObject* player) {
	((CampSiteActiveAreaImplementation*) impl)->notifyEnter(player);
}

/*
 *	CampSiteActiveAreaHelper
 */

CampSiteActiveAreaHelper* CampSiteActiveAreaHelper::staticInitializer = CampSiteActiveAreaHelper::instance();

CampSiteActiveAreaHelper::CampSiteActiveAreaHelper() {
	className = "CampSiteActiveArea";

	Core::getObjectBroker()->registerClass(className, this);
}

void CampSiteActiveAreaHelper::finalizeHelper() {
	CampSiteActiveAreaHelper::finalize();
}

DistributedObject* CampSiteActiveAreaHelper::instantiateObject() {
	return new CampSiteActiveArea(DummyConstructorParameter::instance());
}

DistributedObjectServant* CampSiteActiveAreaHelper::instantiateServant() {
	return new CampSiteActiveAreaImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* CampSiteActiveAreaHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CampSiteActiveAreaAdapter((CampSiteActiveAreaImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

