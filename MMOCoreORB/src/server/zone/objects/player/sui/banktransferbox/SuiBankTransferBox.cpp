/*
 *	server/zone/objects/player/sui/banktransferbox/SuiBankTransferBox.cpp generated by engine3 IDL compiler 0.60
 */

#include "SuiBankTransferBox.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/player/PlayerCreature.h"

/*
 *	SuiBankTransferBoxStub
 */

SuiBankTransferBox::SuiBankTransferBox(SceneObject* bankObject, PlayerCreature* player, unsigned int windowtype) : SuiBox(DummyConstructorParameter::instance()) {
	SuiBankTransferBoxImplementation* _implementation = new SuiBankTransferBoxImplementation(bankObject, player, windowtype);
	_impl = _implementation;
	_impl->_setStub(this);
}

SuiBankTransferBox::SuiBankTransferBox(DummyConstructorParameter* param) : SuiBox(param) {
}

SuiBankTransferBox::~SuiBankTransferBox() {
}


void SuiBankTransferBox::addCash(int cash) {
	SuiBankTransferBoxImplementation* _implementation = (SuiBankTransferBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addSignedIntParameter(cash);

		method.executeWithVoidReturn();
	} else
		_implementation->addCash(cash);
}

void SuiBankTransferBox::addBank(int bank) {
	SuiBankTransferBoxImplementation* _implementation = (SuiBankTransferBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addSignedIntParameter(bank);

		method.executeWithVoidReturn();
	} else
		_implementation->addBank(bank);
}

SceneObject* SuiBankTransferBox::getBank() {
	SuiBankTransferBoxImplementation* _implementation = (SuiBankTransferBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		return (SceneObject*) method.executeWithObjectReturn();
	} else
		return _implementation->getBank();
}

BaseMessage* SuiBankTransferBox::generateMessage() {
	SuiBankTransferBoxImplementation* _implementation = (SuiBankTransferBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		return (BaseMessage*) method.executeWithObjectReturn();
	} else
		return _implementation->generateMessage();
}

bool SuiBankTransferBox::isBankTransferBox() {
	SuiBankTransferBoxImplementation* _implementation = (SuiBankTransferBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isBankTransferBox();
}

DistributedObjectServant* SuiBankTransferBox::_getImplementation() {

	_updated = true;
	return _impl;
}

void SuiBankTransferBox::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

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

	_serializationHelperMethod();
	_serializationHelperMethod();
}

void SuiBankTransferBoxImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (SuiBankTransferBox*) stub;
	SuiBoxImplementation::_setStub(stub);
}

DistributedObjectStub* SuiBankTransferBoxImplementation::_getStub() {
	return _this;
}

SuiBankTransferBoxImplementation::operator const SuiBankTransferBox*() {
	return _this;
}

void SuiBankTransferBoxImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void SuiBankTransferBoxImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void SuiBankTransferBoxImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void SuiBankTransferBoxImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void SuiBankTransferBoxImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void SuiBankTransferBoxImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void SuiBankTransferBoxImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
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

		uint16 _varSize = stream->readShort();

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

	if (_name == "lblFrom") {
		TypeInfo<String >::parseFromBinaryStream(&lblFrom, stream);
		return true;
	}

	if (_name == "lblStartingFrom") {
		TypeInfo<String >::parseFromBinaryStream(&lblStartingFrom, stream);
		return true;
	}

	if (_name == "lblInputFrom") {
		TypeInfo<String >::parseFromBinaryStream(&lblInputFrom, stream);
		return true;
	}

	if (_name == "lblTo") {
		TypeInfo<String >::parseFromBinaryStream(&lblTo, stream);
		return true;
	}

	if (_name == "lblStartingTo") {
		TypeInfo<String >::parseFromBinaryStream(&lblStartingTo, stream);
		return true;
	}

	if (_name == "lblInputTo") {
		TypeInfo<String >::parseFromBinaryStream(&lblInputTo, stream);
		return true;
	}

	if (_name == "convertRatioFrom") {
		TypeInfo<String >::parseFromBinaryStream(&convertRatioFrom, stream);
		return true;
	}

	if (_name == "convertRatioTo") {
		TypeInfo<String >::parseFromBinaryStream(&convertRatioTo, stream);
		return true;
	}

	if (_name == "bank") {
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
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "lblFrom";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<String >::toBinaryStream(&lblFrom, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "lblStartingFrom";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<String >::toBinaryStream(&lblStartingFrom, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "lblInputFrom";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<String >::toBinaryStream(&lblInputFrom, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "lblTo";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<String >::toBinaryStream(&lblTo, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "lblStartingTo";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<String >::toBinaryStream(&lblStartingTo, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "lblInputTo";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<String >::toBinaryStream(&lblInputTo, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "convertRatioFrom";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<String >::toBinaryStream(&convertRatioFrom, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "convertRatioTo";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<String >::toBinaryStream(&convertRatioTo, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "bank";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedReference<SceneObject* > >::toBinaryStream(&bank, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 9 + SuiBoxImplementation::writeObjectMembers(stream);
}

SuiBankTransferBoxImplementation::SuiBankTransferBoxImplementation(SceneObject* bankObject, PlayerCreature* player, unsigned int windowtype) : SuiBoxImplementation(player, windowtype, SuiBoxImplementation::BANKTRANSFERBOX) {
	_initializeImplementation();
	// server/zone/objects/player/sui/banktransferbox/SuiBankTransferBox.idl(72):  		bank = bankObject;
	bank = bankObject;
}

void SuiBankTransferBoxImplementation::addCash(int cash) {
	// server/zone/objects/player/sui/banktransferbox/SuiBankTransferBox.idl(77):  		lblFrom = "Cash";
	lblFrom = "Cash";
	// server/zone/objects/player/sui/banktransferbox/SuiBankTransferBox.idl(78):  		lblStartingFrom = String.valueOf(cash);
	lblStartingFrom = String::valueOf(cash);
	// server/zone/objects/player/sui/banktransferbox/SuiBankTransferBox.idl(80):  		lblInputFrom = lblStartingFrom;
	lblInputFrom = lblStartingFrom;
	// server/zone/objects/player/sui/banktransferbox/SuiBankTransferBox.idl(82):  		convertRatioFrom = "1";
	convertRatioFrom = "1";
}

void SuiBankTransferBoxImplementation::addBank(int bank) {
	// server/zone/objects/player/sui/banktransferbox/SuiBankTransferBox.idl(86):  		lblTo = "Bank";
	lblTo = "Bank";
	// server/zone/objects/player/sui/banktransferbox/SuiBankTransferBox.idl(88):  		lblStartingTo = String.valueOf(bank);
	lblStartingTo = String::valueOf(bank);
	// server/zone/objects/player/sui/banktransferbox/SuiBankTransferBox.idl(89):  		lblInputTo = lblStartingTo;
	lblInputTo = lblStartingTo;
	// server/zone/objects/player/sui/banktransferbox/SuiBankTransferBox.idl(90):  		convertRatioTo = "1";
	convertRatioTo = "1";
}

SceneObject* SuiBankTransferBoxImplementation::getBank() {
	// server/zone/objects/player/sui/banktransferbox/SuiBankTransferBox.idl(94):  		return bank;
	return bank;
}

bool SuiBankTransferBoxImplementation::isBankTransferBox() {
	// server/zone/objects/player/sui/banktransferbox/SuiBankTransferBox.idl(100):  		return true;
	return true;
}

/*
 *	SuiBankTransferBoxAdapter
 */

SuiBankTransferBoxAdapter::SuiBankTransferBoxAdapter(SuiBankTransferBoxImplementation* obj) : SuiBoxAdapter(obj) {
}

Packet* SuiBankTransferBoxAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		addCash(inv->getSignedIntParameter());
		break;
	case 7:
		addBank(inv->getSignedIntParameter());
		break;
	case 8:
		resp->insertLong(getBank()->_getObjectID());
		break;
	case 9:
		resp->insertLong(generateMessage()->_getObjectID());
		break;
	case 10:
		resp->insertBoolean(isBankTransferBox());
		break;
	default:
		return NULL;
	}

	return resp;
}

void SuiBankTransferBoxAdapter::addCash(int cash) {
	((SuiBankTransferBoxImplementation*) impl)->addCash(cash);
}

void SuiBankTransferBoxAdapter::addBank(int bank) {
	((SuiBankTransferBoxImplementation*) impl)->addBank(bank);
}

SceneObject* SuiBankTransferBoxAdapter::getBank() {
	return ((SuiBankTransferBoxImplementation*) impl)->getBank();
}

BaseMessage* SuiBankTransferBoxAdapter::generateMessage() {
	return ((SuiBankTransferBoxImplementation*) impl)->generateMessage();
}

bool SuiBankTransferBoxAdapter::isBankTransferBox() {
	return ((SuiBankTransferBoxImplementation*) impl)->isBankTransferBox();
}

/*
 *	SuiBankTransferBoxHelper
 */

SuiBankTransferBoxHelper* SuiBankTransferBoxHelper::staticInitializer = SuiBankTransferBoxHelper::instance();

SuiBankTransferBoxHelper::SuiBankTransferBoxHelper() {
	className = "SuiBankTransferBox";

	DistributedObjectBroker::instance()->registerClass(className, this);
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
	DistributedObjectAdapter* adapter = new SuiBankTransferBoxAdapter((SuiBankTransferBoxImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

