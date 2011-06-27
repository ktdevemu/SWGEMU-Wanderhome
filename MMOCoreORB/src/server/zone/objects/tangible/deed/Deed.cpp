/*
 *	server/zone/objects/tangible/deed/Deed.cpp generated by engine3 IDL compiler 0.60
 */

#include "Deed.h"

#include "server/zone/Zone.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/templates/SharedObjectTemplate.h"

#include "server/zone/objects/manufactureschematic/ManufactureSchematic.h"

/*
 *	DeedStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 6,RPC_SETGENERATEDOBJECTTEMPLATE__STRING_,RPC_GETGENERATEDOBJECTTEMPLATE__,RPC_ISDEEDOBJECT__};

Deed::Deed() : TangibleObject(DummyConstructorParameter::instance()) {
	DeedImplementation* _implementation = new DeedImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

Deed::Deed(DummyConstructorParameter* param) : TangibleObject(param) {
}

Deed::~Deed() {
}


void Deed::initializeTransientMembers() {
	DeedImplementation* _implementation = (DeedImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void Deed::loadTemplateData(SharedObjectTemplate* templateData) {
	DeedImplementation* _implementation = (DeedImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

void Deed::fillAttributeList(AttributeListMessage* alm, PlayerCreature* object) {
	DeedImplementation* _implementation = (DeedImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillAttributeList(alm, object);
}

void Deed::updateCraftingValues(ManufactureSchematic* schematic) {
	DeedImplementation* _implementation = (DeedImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->updateCraftingValues(schematic);
}

void Deed::setGeneratedObjectTemplate(const String& templ) {
	DeedImplementation* _implementation = (DeedImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETGENERATEDOBJECTTEMPLATE__STRING_);
		method.addAsciiParameter(templ);

		method.executeWithVoidReturn();
	} else
		_implementation->setGeneratedObjectTemplate(templ);
}

String Deed::getGeneratedObjectTemplate() {
	DeedImplementation* _implementation = (DeedImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETGENERATEDOBJECTTEMPLATE__);

		method.executeWithAsciiReturn(_return_getGeneratedObjectTemplate);
		return _return_getGeneratedObjectTemplate;
	} else
		return _implementation->getGeneratedObjectTemplate();
}

bool Deed::isDeedObject() {
	DeedImplementation* _implementation = (DeedImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISDEEDOBJECT__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isDeedObject();
}

DistributedObjectServant* Deed::_getImplementation() {

	_updated = true;
	return _impl;
}

void Deed::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	DeedImplementation
 */

DeedImplementation::DeedImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}


DeedImplementation::~DeedImplementation() {
}


void DeedImplementation::finalize() {
}

void DeedImplementation::_initializeImplementation() {
	_setClassHelper(DeedHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void DeedImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (Deed*) stub;
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* DeedImplementation::_getStub() {
	return _this;
}

DeedImplementation::operator const Deed*() {
	return _this;
}

void DeedImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void DeedImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void DeedImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void DeedImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void DeedImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void DeedImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void DeedImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void DeedImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("Deed");

}

void DeedImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(DeedImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool DeedImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (TangibleObjectImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "generatedObjectTemplate") {
		TypeInfo<String >::parseFromBinaryStream(&generatedObjectTemplate, stream);
		return true;
	}

	if (_name == "generated") {
		TypeInfo<bool >::parseFromBinaryStream(&generated, stream);
		return true;
	}


	return false;
}

void DeedImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = DeedImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int DeedImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "generatedObjectTemplate";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<String >::toBinaryStream(&generatedObjectTemplate, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "generated";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<bool >::toBinaryStream(&generated, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 2 + TangibleObjectImplementation::writeObjectMembers(stream);
}

DeedImplementation::DeedImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/deed/Deed.idl():  		Logger.setLoggingName("Deed");
	Logger::setLoggingName("Deed");
	// server/zone/objects/tangible/deed/Deed.idl():  		generated = false;
	generated = false;
}

void DeedImplementation::updateCraftingValues(ManufactureSchematic* schematic) {
	// server/zone/objects/tangible/deed/Deed.idl():  		error("Unhandled updateCraftingValues for this object type");
	error("Unhandled updateCraftingValues for this object type");
}

void DeedImplementation::setGeneratedObjectTemplate(const String& templ) {
	// server/zone/objects/tangible/deed/Deed.idl():  		generatedObjectTemplate = templ;
	generatedObjectTemplate = templ;
}

String DeedImplementation::getGeneratedObjectTemplate() {
	// server/zone/objects/tangible/deed/Deed.idl():  		return generatedObjectTemplate;
	return generatedObjectTemplate;
}

bool DeedImplementation::isDeedObject() {
	// server/zone/objects/tangible/deed/Deed.idl():  		return true;
	return true;
}

/*
 *	DeedAdapter
 */

DeedAdapter::DeedAdapter(DeedImplementation* obj) : TangibleObjectAdapter(obj) {
}

Packet* DeedAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		initializeTransientMembers();
		break;
	case RPC_SETGENERATEDOBJECTTEMPLATE__STRING_:
		setGeneratedObjectTemplate(inv->getAsciiParameter(_param0_setGeneratedObjectTemplate__String_));
		break;
	case RPC_GETGENERATEDOBJECTTEMPLATE__:
		resp->insertAscii(getGeneratedObjectTemplate());
		break;
	case RPC_ISDEEDOBJECT__:
		resp->insertBoolean(isDeedObject());
		break;
	default:
		return NULL;
	}

	return resp;
}

void DeedAdapter::initializeTransientMembers() {
	((DeedImplementation*) impl)->initializeTransientMembers();
}

void DeedAdapter::setGeneratedObjectTemplate(const String& templ) {
	((DeedImplementation*) impl)->setGeneratedObjectTemplate(templ);
}

String DeedAdapter::getGeneratedObjectTemplate() {
	return ((DeedImplementation*) impl)->getGeneratedObjectTemplate();
}

bool DeedAdapter::isDeedObject() {
	return ((DeedImplementation*) impl)->isDeedObject();
}

/*
 *	DeedHelper
 */

DeedHelper* DeedHelper::staticInitializer = DeedHelper::instance();

DeedHelper::DeedHelper() {
	className = "Deed";

	Core::getObjectBroker()->registerClass(className, this);
}

void DeedHelper::finalizeHelper() {
	DeedHelper::finalize();
}

DistributedObject* DeedHelper::instantiateObject() {
	return new Deed(DummyConstructorParameter::instance());
}

DistributedObjectServant* DeedHelper::instantiateServant() {
	return new DeedImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* DeedHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new DeedAdapter((DeedImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

