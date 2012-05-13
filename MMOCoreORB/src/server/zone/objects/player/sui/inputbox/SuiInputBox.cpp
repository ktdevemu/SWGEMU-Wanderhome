/*
 *	server/zone/objects/player/sui/inputbox/SuiInputBox.cpp generated by engine3 IDL compiler 0.60
 */

#include "SuiInputBox.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	SuiInputBoxStub
 */

enum {RPC_GENERATEMESSAGE__ = 6,RPC_SETMAXINPUTSIZE__INT_,RPC_SETDEFAULTINPUT__STRING_,RPC_ISFILTERBOX__,RPC_ISINPUTBOX__};

SuiInputBox::SuiInputBox(CreatureObject* player, unsigned int windowType, int inputtype) : SuiBox(DummyConstructorParameter::instance()) {
	SuiInputBoxImplementation* _implementation = new SuiInputBoxImplementation(player, windowType, inputtype);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("SuiInputBox");
}

SuiInputBox::SuiInputBox(DummyConstructorParameter* param) : SuiBox(param) {
	_setClassName("SuiInputBox");
}

SuiInputBox::~SuiInputBox() {
}



BaseMessage* SuiInputBox::generateMessage() {
	SuiInputBoxImplementation* _implementation = static_cast<SuiInputBoxImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GENERATEMESSAGE__);

		return static_cast<BaseMessage*>(method.executeWithObjectReturn());
	} else
		return _implementation->generateMessage();
}

void SuiInputBox::setMaxInputSize(int size) {
	SuiInputBoxImplementation* _implementation = static_cast<SuiInputBoxImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETMAXINPUTSIZE__INT_);
		method.addSignedIntParameter(size);

		method.executeWithVoidReturn();
	} else
		_implementation->setMaxInputSize(size);
}

void SuiInputBox::setDefaultInput(const String& text) {
	SuiInputBoxImplementation* _implementation = static_cast<SuiInputBoxImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETDEFAULTINPUT__STRING_);
		method.addAsciiParameter(text);

		method.executeWithVoidReturn();
	} else
		_implementation->setDefaultInput(text);
}

bool SuiInputBox::isFilterBox() {
	SuiInputBoxImplementation* _implementation = static_cast<SuiInputBoxImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISFILTERBOX__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isFilterBox();
}

bool SuiInputBox::isInputBox() {
	SuiInputBoxImplementation* _implementation = static_cast<SuiInputBoxImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISINPUTBOX__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isInputBox();
}

DistributedObjectServant* SuiInputBox::_getImplementation() {

	_updated = true;
	return _impl;
}

void SuiInputBox::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	SuiInputBoxImplementation
 */

SuiInputBoxImplementation::SuiInputBoxImplementation(DummyConstructorParameter* param) : SuiBoxImplementation(param) {
	_initializeImplementation();
}


SuiInputBoxImplementation::~SuiInputBoxImplementation() {
}


void SuiInputBoxImplementation::finalize() {
}

void SuiInputBoxImplementation::_initializeImplementation() {
	_setClassHelper(SuiInputBoxHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void SuiInputBoxImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<SuiInputBox*>(stub);
	SuiBoxImplementation::_setStub(stub);
}

DistributedObjectStub* SuiInputBoxImplementation::_getStub() {
	return _this;
}

SuiInputBoxImplementation::operator const SuiInputBox*() {
	return _this;
}

void SuiInputBoxImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void SuiInputBoxImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void SuiInputBoxImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void SuiInputBoxImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void SuiInputBoxImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void SuiInputBoxImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void SuiInputBoxImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void SuiInputBoxImplementation::_serializationHelperMethod() {
	SuiBoxImplementation::_serializationHelperMethod();

	_setClassName("SuiInputBox");

}

void SuiInputBoxImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(SuiInputBoxImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool SuiInputBoxImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (SuiBoxImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "SuiInputBox.maxInputSize") {
		TypeInfo<int >::parseFromBinaryStream(&maxInputSize, stream);
		return true;
	}

	if (_name == "SuiInputBox.defaultInput") {
		TypeInfo<String >::parseFromBinaryStream(&defaultInput, stream);
		return true;
	}

	if (_name == "SuiInputBox.inputType") {
		TypeInfo<int >::parseFromBinaryStream(&inputType, stream);
		return true;
	}


	return false;
}

void SuiInputBoxImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = SuiInputBoxImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int SuiInputBoxImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = SuiBoxImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;
	_name = "SuiInputBox.maxInputSize";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&maxInputSize, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "SuiInputBox.defaultInput";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&defaultInput, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "SuiInputBox.inputType";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&inputType, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 3;
}

SuiInputBoxImplementation::SuiInputBoxImplementation(CreatureObject* player, unsigned int windowType, int inputtype) : SuiBoxImplementation(player, windowType, SuiBox::INPUTBOX) {
	_initializeImplementation();
	// server/zone/objects/player/sui/inputbox/SuiInputBox.idl():  		maxInputSize = 25;
	maxInputSize = 25;
	// server/zone/objects/player/sui/inputbox/SuiInputBox.idl():  		inputType = inputtype;
	inputType = inputtype;
}

void SuiInputBoxImplementation::setMaxInputSize(int size) {
	// server/zone/objects/player/sui/inputbox/SuiInputBox.idl():  		maxInputSize = size;
	maxInputSize = size;
}

void SuiInputBoxImplementation::setDefaultInput(const String& text) {
	// server/zone/objects/player/sui/inputbox/SuiInputBox.idl():  		defaultInput = text;
	defaultInput = text;
}

bool SuiInputBoxImplementation::isFilterBox() {
	// server/zone/objects/player/sui/inputbox/SuiInputBox.idl():  		return inputType == FILTER;
	return inputType == FILTER;
}

bool SuiInputBoxImplementation::isInputBox() {
	// server/zone/objects/player/sui/inputbox/SuiInputBox.idl():  		return true;
	return true;
}

/*
 *	SuiInputBoxAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


SuiInputBoxAdapter::SuiInputBoxAdapter(SuiInputBox* obj) : SuiBoxAdapter(obj) {
}

void SuiInputBoxAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_GENERATEMESSAGE__:
		{
			resp->insertLong(generateMessage()->_getObjectID());
		}
		break;
	case RPC_SETMAXINPUTSIZE__INT_:
		{
			setMaxInputSize(inv->getSignedIntParameter());
		}
		break;
	case RPC_SETDEFAULTINPUT__STRING_:
		{
			String text; 
			setDefaultInput(inv->getAsciiParameter(text));
		}
		break;
	case RPC_ISFILTERBOX__:
		{
			resp->insertBoolean(isFilterBox());
		}
		break;
	case RPC_ISINPUTBOX__:
		{
			resp->insertBoolean(isInputBox());
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

BaseMessage* SuiInputBoxAdapter::generateMessage() {
	return (static_cast<SuiInputBox*>(stub))->generateMessage();
}

void SuiInputBoxAdapter::setMaxInputSize(int size) {
	(static_cast<SuiInputBox*>(stub))->setMaxInputSize(size);
}

void SuiInputBoxAdapter::setDefaultInput(const String& text) {
	(static_cast<SuiInputBox*>(stub))->setDefaultInput(text);
}

bool SuiInputBoxAdapter::isFilterBox() {
	return (static_cast<SuiInputBox*>(stub))->isFilterBox();
}

bool SuiInputBoxAdapter::isInputBox() {
	return (static_cast<SuiInputBox*>(stub))->isInputBox();
}

/*
 *	SuiInputBoxHelper
 */

SuiInputBoxHelper* SuiInputBoxHelper::staticInitializer = SuiInputBoxHelper::instance();

SuiInputBoxHelper::SuiInputBoxHelper() {
	className = "SuiInputBox";

	Core::getObjectBroker()->registerClass(className, this);
}

void SuiInputBoxHelper::finalizeHelper() {
	SuiInputBoxHelper::finalize();
}

DistributedObject* SuiInputBoxHelper::instantiateObject() {
	return new SuiInputBox(DummyConstructorParameter::instance());
}

DistributedObjectServant* SuiInputBoxHelper::instantiateServant() {
	return new SuiInputBoxImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* SuiInputBoxHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new SuiInputBoxAdapter(static_cast<SuiInputBox*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

