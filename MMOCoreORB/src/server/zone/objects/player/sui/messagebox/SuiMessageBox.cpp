/*
 *	server/zone/objects/player/sui/messagebox/SuiMessageBox.cpp generated by engine3 IDL compiler 0.60
 */

#include "SuiMessageBox.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	SuiMessageBoxStub
 */

enum {RPC_GENERATEMESSAGE__ = 6,RPC_ISMESSAGEBOX__};

SuiMessageBox::SuiMessageBox(CreatureObject* player, unsigned int windowType) : SuiBox(DummyConstructorParameter::instance()) {
	SuiMessageBoxImplementation* _implementation = new SuiMessageBoxImplementation(player, windowType);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("SuiMessageBox");
}

SuiMessageBox::SuiMessageBox(DummyConstructorParameter* param) : SuiBox(param) {
	_setClassName("SuiMessageBox");
}

SuiMessageBox::~SuiMessageBox() {
}



BaseMessage* SuiMessageBox::generateMessage() {
	SuiMessageBoxImplementation* _implementation = static_cast<SuiMessageBoxImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GENERATEMESSAGE__);

		return static_cast<BaseMessage*>(method.executeWithObjectReturn());
	} else
		return _implementation->generateMessage();
}

bool SuiMessageBox::isMessageBox() {
	SuiMessageBoxImplementation* _implementation = static_cast<SuiMessageBoxImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISMESSAGEBOX__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isMessageBox();
}

DistributedObjectServant* SuiMessageBox::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* SuiMessageBox::_getImplementationForRead() {
	return _impl;
}

void SuiMessageBox::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	SuiMessageBoxImplementation
 */

SuiMessageBoxImplementation::SuiMessageBoxImplementation(DummyConstructorParameter* param) : SuiBoxImplementation(param) {
	_initializeImplementation();
}


SuiMessageBoxImplementation::~SuiMessageBoxImplementation() {
}


void SuiMessageBoxImplementation::finalize() {
}

void SuiMessageBoxImplementation::_initializeImplementation() {
	_setClassHelper(SuiMessageBoxHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void SuiMessageBoxImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<SuiMessageBox*>(stub);
	SuiBoxImplementation::_setStub(stub);
}

DistributedObjectStub* SuiMessageBoxImplementation::_getStub() {
	return _this.get();
}

SuiMessageBoxImplementation::operator const SuiMessageBox*() {
	return _this.get();
}

void SuiMessageBoxImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void SuiMessageBoxImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void SuiMessageBoxImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void SuiMessageBoxImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void SuiMessageBoxImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void SuiMessageBoxImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void SuiMessageBoxImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void SuiMessageBoxImplementation::_serializationHelperMethod() {
	SuiBoxImplementation::_serializationHelperMethod();

	_setClassName("SuiMessageBox");

}

void SuiMessageBoxImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(SuiMessageBoxImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool SuiMessageBoxImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (SuiBoxImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	}

	return false;
}

void SuiMessageBoxImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = SuiMessageBoxImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int SuiMessageBoxImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = SuiBoxImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;

	return _count + 0;
}

SuiMessageBoxImplementation::SuiMessageBoxImplementation(CreatureObject* player, unsigned int windowType) : SuiBoxImplementation(player, windowType, SuiBox::MESSAGEBOX) {
	_initializeImplementation();
	// server/zone/objects/player/sui/messagebox/SuiMessageBox.idl():  		;
}

bool SuiMessageBoxImplementation::isMessageBox() {
	// server/zone/objects/player/sui/messagebox/SuiMessageBox.idl():  		return true;
	return true;
}

/*
 *	SuiMessageBoxAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


SuiMessageBoxAdapter::SuiMessageBoxAdapter(SuiMessageBox* obj) : SuiBoxAdapter(obj) {
}

void SuiMessageBoxAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_GENERATEMESSAGE__:
		{
			resp->insertLong(generateMessage()->_getObjectID());
		}
		break;
	case RPC_ISMESSAGEBOX__:
		{
			resp->insertBoolean(isMessageBox());
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

BaseMessage* SuiMessageBoxAdapter::generateMessage() {
	return (static_cast<SuiMessageBox*>(stub))->generateMessage();
}

bool SuiMessageBoxAdapter::isMessageBox() {
	return (static_cast<SuiMessageBox*>(stub))->isMessageBox();
}

/*
 *	SuiMessageBoxHelper
 */

SuiMessageBoxHelper* SuiMessageBoxHelper::staticInitializer = SuiMessageBoxHelper::instance();

SuiMessageBoxHelper::SuiMessageBoxHelper() {
	className = "SuiMessageBox";

	Core::getObjectBroker()->registerClass(className, this);
}

void SuiMessageBoxHelper::finalizeHelper() {
	SuiMessageBoxHelper::finalize();
}

DistributedObject* SuiMessageBoxHelper::instantiateObject() {
	return new SuiMessageBox(DummyConstructorParameter::instance());
}

DistributedObjectServant* SuiMessageBoxHelper::instantiateServant() {
	return new SuiMessageBoxImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* SuiMessageBoxHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new SuiMessageBoxAdapter(static_cast<SuiMessageBox*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

