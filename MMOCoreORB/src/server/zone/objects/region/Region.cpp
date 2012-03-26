/*
 *	server/zone/objects/region/Region.cpp generated by engine3 IDL compiler 0.60
 */

#include "Region.h"

#include "server/zone/objects/tangible/terminal/Terminal.h"

#include "server/zone/objects/tangible/terminal/vendor/bazaar/BazaarTerminal.h"

#include "server/zone/objects/region/CityRegion.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/scene/SceneObject.h"

/*
 *	RegionStub
 */

enum {RPC_SETCITYREGION__CITYREGION_ = 6,RPC_GETCITYREGION__,RPC_NOTIFYENTER__SCENEOBJECT_,RPC_NOTIFYEXIT__SCENEOBJECT_,RPC_ADDBAZAAR__BAZAARTERMINAL_,RPC_GETBAZAAR__INT_,RPC_GETBAZAARCOUNT__,RPC_ISREGION__};

Region::Region() : ActiveArea(DummyConstructorParameter::instance()) {
	RegionImplementation* _implementation = new RegionImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("Region");
}

Region::Region(DummyConstructorParameter* param) : ActiveArea(param) {
	_setClassName("Region");
}

Region::~Region() {
}



void Region::setCityRegion(CityRegion* city) {
	RegionImplementation* _implementation = static_cast<RegionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETCITYREGION__CITYREGION_);
		method.addObjectParameter(city);

		method.executeWithVoidReturn();
	} else
		_implementation->setCityRegion(city);
}

CityRegion* Region::getCityRegion() {
	RegionImplementation* _implementation = static_cast<RegionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETCITYREGION__);

		return static_cast<CityRegion*>(method.executeWithObjectReturn());
	} else
		return _implementation->getCityRegion();
}

void Region::notifyEnter(SceneObject* object) {
	RegionImplementation* _implementation = static_cast<RegionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYENTER__SCENEOBJECT_);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		_implementation->notifyEnter(object);
}

void Region::notifyExit(SceneObject* object) {
	RegionImplementation* _implementation = static_cast<RegionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYEXIT__SCENEOBJECT_);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		_implementation->notifyExit(object);
}

void Region::addBazaar(BazaarTerminal* ter) {
	RegionImplementation* _implementation = static_cast<RegionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDBAZAAR__BAZAARTERMINAL_);
		method.addObjectParameter(ter);

		method.executeWithVoidReturn();
	} else
		_implementation->addBazaar(ter);
}

BazaarTerminal* Region::getBazaar(int idx) {
	RegionImplementation* _implementation = static_cast<RegionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETBAZAAR__INT_);
		method.addSignedIntParameter(idx);

		return static_cast<BazaarTerminal*>(method.executeWithObjectReturn());
	} else
		return _implementation->getBazaar(idx);
}

int Region::getBazaarCount() {
	RegionImplementation* _implementation = static_cast<RegionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETBAZAARCOUNT__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getBazaarCount();
}

bool Region::isRegion() {
	RegionImplementation* _implementation = static_cast<RegionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISREGION__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isRegion();
}

DistributedObjectServant* Region::_getImplementation() {

	_updated = true;
	return _impl;
}

void Region::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	RegionImplementation
 */

RegionImplementation::RegionImplementation(DummyConstructorParameter* param) : ActiveAreaImplementation(param) {
	_initializeImplementation();
}


RegionImplementation::~RegionImplementation() {
}


void RegionImplementation::finalize() {
}

void RegionImplementation::_initializeImplementation() {
	_setClassHelper(RegionHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void RegionImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<Region*>(stub);
	ActiveAreaImplementation::_setStub(stub);
}

DistributedObjectStub* RegionImplementation::_getStub() {
	return _this;
}

RegionImplementation::operator const Region*() {
	return _this;
}

void RegionImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void RegionImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void RegionImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void RegionImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void RegionImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void RegionImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void RegionImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void RegionImplementation::_serializationHelperMethod() {
	ActiveAreaImplementation::_serializationHelperMethod();

	_setClassName("Region");

}

void RegionImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(RegionImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool RegionImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ActiveAreaImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "Region.bazaars") {
		TypeInfo<VectorMap<unsigned long long, ManagedReference<BazaarTerminal* > > >::parseFromBinaryStream(&bazaars, stream);
		return true;
	}

	if (_name == "Region.cityRegion") {
		TypeInfo<ManagedWeakReference<CityRegion* > >::parseFromBinaryStream(&cityRegion, stream);
		return true;
	}


	return false;
}

void RegionImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = RegionImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int RegionImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ActiveAreaImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "Region.bazaars";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<VectorMap<unsigned long long, ManagedReference<BazaarTerminal* > > >::toBinaryStream(&bazaars, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "Region.cityRegion";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedWeakReference<CityRegion* > >::toBinaryStream(&cityRegion, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return _count + 2;
}

RegionImplementation::RegionImplementation() : ActiveAreaImplementation() {
	_initializeImplementation();
	// server/zone/objects/region/Region.idl():  		bazaars.setNoDuplicateInsertPlan();
	(&bazaars)->setNoDuplicateInsertPlan();
	// server/zone/objects/region/Region.idl():  		bazaars.setNullValue(null);
	(&bazaars)->setNullValue(NULL);
}

void RegionImplementation::setCityRegion(CityRegion* city) {
	// server/zone/objects/region/Region.idl():  		cityRegion = city;
	cityRegion = city;
}

CityRegion* RegionImplementation::getCityRegion() {
	// server/zone/objects/region/Region.idl():  		return cityRegion;
	return cityRegion;
}

void RegionImplementation::notifyEnter(SceneObject* object) {
	// server/zone/objects/region/Region.idl():  		super.notifyEnter(object);
	ActiveAreaImplementation::notifyEnter(object);
	// server/zone/objects/region/Region.idl():  		cityRegion.
	if (cityRegion == NULL)	// server/zone/objects/region/Region.idl():  			return;
	return;
	// server/zone/objects/region/Region.idl():  		cityRegion.notifyEnter(object);
	cityRegion->notifyEnter(object);
}

void RegionImplementation::notifyExit(SceneObject* object) {
	// server/zone/objects/region/Region.idl():  		super.notifyExit(object);
	ActiveAreaImplementation::notifyExit(object);
	// server/zone/objects/region/Region.idl():  		cityRegion.
	if (cityRegion == NULL)	// server/zone/objects/region/Region.idl():  			return;
	return;
	// server/zone/objects/region/Region.idl():  		cityRegion.notifyExit(object);
	cityRegion->notifyExit(object);
}

void RegionImplementation::addBazaar(BazaarTerminal* ter) {
	// server/zone/objects/region/Region.idl():  		bazaars.put(ter.getObjectID(), ter);
	(&bazaars)->put(ter->getObjectID(), ter);
}

BazaarTerminal* RegionImplementation::getBazaar(int idx) {
	// server/zone/objects/region/Region.idl():  		return bazaars.get(idx);
	return (&bazaars)->get(idx);
}

int RegionImplementation::getBazaarCount() {
	// server/zone/objects/region/Region.idl():  		return bazaars.size();
	return (&bazaars)->size();
}

bool RegionImplementation::isRegion() {
	// server/zone/objects/region/Region.idl():  		return true;
	return true;
}

/*
 *	RegionAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


RegionAdapter::RegionAdapter(Region* obj) : ActiveAreaAdapter(obj) {
}

void RegionAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_SETCITYREGION__CITYREGION_:
		setCityRegion(static_cast<CityRegion*>(inv->getObjectParameter()));
		break;
	case RPC_GETCITYREGION__:
		resp->insertLong(getCityRegion()->_getObjectID());
		break;
	case RPC_NOTIFYENTER__SCENEOBJECT_:
		notifyEnter(static_cast<SceneObject*>(inv->getObjectParameter()));
		break;
	case RPC_NOTIFYEXIT__SCENEOBJECT_:
		notifyExit(static_cast<SceneObject*>(inv->getObjectParameter()));
		break;
	case RPC_ADDBAZAAR__BAZAARTERMINAL_:
		addBazaar(static_cast<BazaarTerminal*>(inv->getObjectParameter()));
		break;
	case RPC_GETBAZAAR__INT_:
		resp->insertLong(getBazaar(inv->getSignedIntParameter())->_getObjectID());
		break;
	case RPC_GETBAZAARCOUNT__:
		resp->insertSignedInt(getBazaarCount());
		break;
	case RPC_ISREGION__:
		resp->insertBoolean(isRegion());
		break;
	default:
		throw Exception("Method does not exists");
	}
}

void RegionAdapter::setCityRegion(CityRegion* city) {
	(static_cast<Region*>(stub))->setCityRegion(city);
}

CityRegion* RegionAdapter::getCityRegion() {
	return (static_cast<Region*>(stub))->getCityRegion();
}

void RegionAdapter::notifyEnter(SceneObject* object) {
	(static_cast<Region*>(stub))->notifyEnter(object);
}

void RegionAdapter::notifyExit(SceneObject* object) {
	(static_cast<Region*>(stub))->notifyExit(object);
}

void RegionAdapter::addBazaar(BazaarTerminal* ter) {
	(static_cast<Region*>(stub))->addBazaar(ter);
}

BazaarTerminal* RegionAdapter::getBazaar(int idx) {
	return (static_cast<Region*>(stub))->getBazaar(idx);
}

int RegionAdapter::getBazaarCount() {
	return (static_cast<Region*>(stub))->getBazaarCount();
}

bool RegionAdapter::isRegion() {
	return (static_cast<Region*>(stub))->isRegion();
}

/*
 *	RegionHelper
 */

RegionHelper* RegionHelper::staticInitializer = RegionHelper::instance();

RegionHelper::RegionHelper() {
	className = "Region";

	Core::getObjectBroker()->registerClass(className, this);
}

void RegionHelper::finalizeHelper() {
	RegionHelper::finalize();
}

DistributedObject* RegionHelper::instantiateObject() {
	return new Region(DummyConstructorParameter::instance());
}

DistributedObjectServant* RegionHelper::instantiateServant() {
	return new RegionImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* RegionHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new RegionAdapter(static_cast<Region*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

