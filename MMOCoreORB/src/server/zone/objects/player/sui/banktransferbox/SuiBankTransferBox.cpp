/*
 *	server/zone/objects/player/sui/banktransferbox/SuiBankTransferBox.cpp generated by engine3 IDL compiler 0.60
 */

#include "SuiBankTransferBox.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	SuiBankTransferBoxStub
 */

enum {RPC_ADDCASH__INT_ = 6,RPC_ADDBANK__INT_,RPC_GETBANK__,RPC_GENERATEMESSAGE__,RPC_ISBANKTRANSFERBOX__};

SuiBankTransferBox::SuiBankTransferBox(SceneObject* bankObject, CreatureObject* player, unsigned int windowtype) : SuiBox(DummyConstructorParameter::instance()) {
	SuiBankTransferBoxImplementation* _implementation = new SuiBankTransferBoxImplementation(bankObject, player, windowtype);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("SuiBankTransferBox");
}

SuiBankTransferBox::SuiBankTransferBox(DummyConstructorParameter* param) : SuiBox(param) {
	_setClassName("SuiBankTransferBox");
}

SuiBankTransferBox::~SuiBankTransferBox() {
}



void SuiBankTransferBox::addCash(int cash) {
	SuiBankTransferBoxImplementation* _implementation = static_cast<SuiBankTransferBoxImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDCASH__INT_);
		method.addSignedIntParameter(cash);

		method.executeWithVoidReturn();
	} else
		_implementation->addCash(cash);
}

void SuiBankTransferBox::addBank(int bank) {
	SuiBankTransferBoxImplementation* _implementation = static_cast<SuiBankTransferBoxImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDBANK__INT_);
		method.addSignedIntParameter(bank);

		method.executeWithVoidReturn();
	} else
		_implementation->addBank(bank);
}

SceneObject* SuiBankTransferBox::getBank() {
	SuiBankTransferBoxImplementation* _implementation = static_cast<SuiBankTransferBoxImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETBANK__);

		return static_cast<SceneObject*>(method.executeWithObjectReturn());
	} else
		return _implementation->getBank();
}

BaseMessage* SuiBankTransferBox::generateMessage() {
	SuiBankTransferBoxImplementation* _implementation = static_cast<SuiBankTransferBoxImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GENERATEMESSAGE__);

		return static_cast<BaseMessage*>(method.executeWithObjectReturn());
	} else
		return _implementation->generateMessage();
}

bool SuiBankTransferBox::isBankTransferBox() {
	SuiBankTransferBoxImplementation* _implementation = static_cast<SuiBankTransferBoxImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISBANKTRANSFERBOX__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isBankTransferBox();
}

DistributedObjectServant* SuiBankTransferBox::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

void SuiBankTransferBox::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	SuiBankTransferBoxImplementation
 */

SuiBankTransferBoxImplementation::SuiBankTransferBoxImplementation(DummyConstructorParameter* param) : SuiBoxImplementation(param) {
	_initializeImplementation();
}


SuiBankTransferBoxImplementation::~SuiBankTransferBoxImplementation() {
}


void SuiBankTransferBoxImplementation::finalize() {
}

void SuiBankTransferBoxImplementation::_initializeImplementation() {
	_setClassHelper(SuiBankTransferBoxHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void SuiBankTransferBoxImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<SuiBankTransferBox*>(stub);
	SuiBoxImplementation::_setStub(stub);
}

DistributedObjectStub* SuiBankTransferBoxImplementation::_getStub() {
	return _this.get();
}

SuiBankTransferBoxImplementation::operator const SuiBankTransferBox*() {
	return _this.get();
}

void SuiBankTransferBoxImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void SuiBankTransferBoxImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void SuiBankTransferBoxImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void SuiBankTransferBoxImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void SuiBankTransferBoxImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void SuiBankTransferBoxImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void SuiBankTransferBoxImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void SuiBankTransferBoxImplementation::_serializationHelperMethod() {
	SuiBoxImplementation::_serializationHelperMethod();

	_setClassName("SuiBankTransferBox");

}

void SuiBankTransferBoxImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(SuiBankTransferBoxImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool SuiBankTransferBoxImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (SuiBoxImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "SuiBankTransferBox.lblFrom") {
		TypeInfo<String >::parseFromBinaryStream(&lblFrom, stream);
		return true;
	}

	if (_name == "SuiBankTransferBox.lblStartingFrom") {
		TypeInfo<String >::parseFromBinaryStream(&lblStartingFrom, stream);
		return true;
	}

	if (_name == "SuiBankTransferBox.lblInputFrom") {
		TypeInfo<String >::parseFromBinaryStream(&lblInputFrom, stream);
		return true;
	}

	if (_name == "SuiBankTransferBox.lblTo") {
		TypeInfo<String >::parseFromBinaryStream(&lblTo, stream);
		return true;
	}

	if (_name == "SuiBankTransferBox.lblStartingTo") {
		TypeInfo<String >::parseFromBinaryStream(&lblStartingTo, stream);
		return true;
	}

	if (_name == "SuiBankTransferBox.lblInputTo") {
		TypeInfo<String >::parseFromBinaryStream(&lblInputTo, stream);
		return true;
	}

	if (_name == "SuiBankTransferBox.convertRatioFrom") {
		TypeInfo<String >::parseFromBinaryStream(&convertRatioFrom, stream);
		return true;
	}

	if (_name == "SuiBankTransferBox.convertRatioTo") {
		TypeInfo<String >::parseFromBinaryStream(&convertRatioTo, stream);
		return true;
	}

	if (_name == "SuiBankTransferBox.bank") {
		TypeInfo<ManagedReference<SceneObject* > >::parseFromBinaryStream(&bank, stream);
		return true;
	}


	return false;
}

void SuiBankTransferBoxImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = SuiBankTransferBoxImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int SuiBankTransferBoxImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = SuiBoxImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;
	_name = "SuiBankTransferBox.lblFrom";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&lblFrom, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "SuiBankTransferBox.lblStartingFrom";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&lblStartingFrom, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "SuiBankTransferBox.lblInputFrom";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&lblInputFrom, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "SuiBankTransferBox.lblTo";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&lblTo, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "SuiBankTransferBox.lblStartingTo";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&lblStartingTo, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "SuiBankTransferBox.lblInputTo";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&lblInputTo, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "SuiBankTransferBox.convertRatioFrom";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&convertRatioFrom, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "SuiBankTransferBox.convertRatioTo";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&convertRatioTo, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "SuiBankTransferBox.bank";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<SceneObject* > >::toBinaryStream(&bank, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 9;
}

SuiBankTransferBoxImplementation::SuiBankTransferBoxImplementation(SceneObject* bankObject, CreatureObject* player, unsigned int windowtype) : SuiBoxImplementation(player, windowtype, SuiBoxImplementation::BANKTRANSFERBOX) {
	_initializeImplementation();
	// server/zone/objects/player/sui/banktransferbox/SuiBankTransferBox.idl():  		bank = bankObject;
	bank = bankObject;
}

void SuiBankTransferBoxImplementation::addCash(int cash) {
	// server/zone/objects/player/sui/banktransferbox/SuiBankTransferBox.idl():  		lblFrom = "Cash";
	lblFrom = "Cash";
	// server/zone/objects/player/sui/banktransferbox/SuiBankTransferBox.idl():  		lblStartingFrom = String.valueOf(cash);
	lblStartingFrom = String::valueOf(cash);
	// server/zone/objects/player/sui/banktransferbox/SuiBankTransferBox.idl():  		lblInputFrom = lblStartingFrom;
	lblInputFrom = lblStartingFrom;
	// server/zone/objects/player/sui/banktransferbox/SuiBankTransferBox.idl():  		convertRatioFrom = "1";
	convertRatioFrom = "1";
}

void SuiBankTransferBoxImplementation::addBank(int bank) {
	// server/zone/objects/player/sui/banktransferbox/SuiBankTransferBox.idl():  		lblTo = "Bank";
	lblTo = "Bank";
	// server/zone/objects/player/sui/banktransferbox/SuiBankTransferBox.idl():  		lblStartingTo = String.valueOf(bank);
	lblStartingTo = String::valueOf(bank);
	// server/zone/objects/player/sui/banktransferbox/SuiBankTransferBox.idl():  		lblInputTo = lblStartingTo;
	lblInputTo = lblStartingTo;
	// server/zone/objects/player/sui/banktransferbox/SuiBankTransferBox.idl():  		convertRatioTo = "1";
	convertRatioTo = "1";
}

SceneObject* SuiBankTransferBoxImplementation::getBank() {
	// server/zone/objects/player/sui/banktransferbox/SuiBankTransferBox.idl():  		return bank;
	return bank;
}

bool SuiBankTransferBoxImplementation::isBankTransferBox() {
	// server/zone/objects/player/sui/banktransferbox/SuiBankTransferBox.idl():  		return true;
	return true;
}

/*
 *	SuiBankTransferBoxAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


SuiBankTransferBoxAdapter::SuiBankTransferBoxAdapter(SuiBankTransferBox* obj) : SuiBoxAdapter(obj) {
}

void SuiBankTransferBoxAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_ADDCASH__INT_:
		{
			addCash(inv->getSignedIntParameter());
		}
		break;
	case RPC_ADDBANK__INT_:
		{
			addBank(inv->getSignedIntParameter());
		}
		break;
	case RPC_GETBANK__:
		{
			resp->insertLong(getBank()->_getObjectID());
		}
		break;
	case RPC_GENERATEMESSAGE__:
		{
			resp->insertLong(generateMessage()->_getObjectID());
		}
		break;
	case RPC_ISBANKTRANSFERBOX__:
		{
			resp->insertBoolean(isBankTransferBox());
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

void SuiBankTransferBoxAdapter::addCash(int cash) {
	(static_cast<SuiBankTransferBox*>(stub))->addCash(cash);
}

void SuiBankTransferBoxAdapter::addBank(int bank) {
	(static_cast<SuiBankTransferBox*>(stub))->addBank(bank);
}

SceneObject* SuiBankTransferBoxAdapter::getBank() {
	return (static_cast<SuiBankTransferBox*>(stub))->getBank();
}

BaseMessage* SuiBankTransferBoxAdapter::generateMessage() {
	return (static_cast<SuiBankTransferBox*>(stub))->generateMessage();
}

bool SuiBankTransferBoxAdapter::isBankTransferBox() {
	return (static_cast<SuiBankTransferBox*>(stub))->isBankTransferBox();
}

/*
 *	SuiBankTransferBoxHelper
 */

SuiBankTransferBoxHelper* SuiBankTransferBoxHelper::staticInitializer = SuiBankTransferBoxHelper::instance();

SuiBankTransferBoxHelper::SuiBankTransferBoxHelper() {
	className = "SuiBankTransferBox";

	Core::getObjectBroker()->registerClass(className, this);
}

void SuiBankTransferBoxHelper::finalizeHelper() {
	SuiBankTransferBoxHelper::finalize();
}

DistributedObject* SuiBankTransferBoxHelper::instantiateObject() {
	return new SuiBankTransferBox(DummyConstructorParameter::instance());
}

DistributedObjectServant* SuiBankTransferBoxHelper::instantiateServant() {
	return new SuiBankTransferBoxImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* SuiBankTransferBoxHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new SuiBankTransferBoxAdapter(static_cast<SuiBankTransferBox*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

