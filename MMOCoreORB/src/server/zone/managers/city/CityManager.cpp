/*
 *	server/zone/managers/city/CityManager.cpp generated by engine3 IDL compiler 0.60
 */

#include "CityManager.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/building/city/CityHallObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/chat/StringIdChatParameter.h"

/*
 *	CityManagerStub
 */

enum {RPC_LOADLUACONFIG__ = 6,RPC_CREATENEWCITY__CITYHALLOBJECT_CREATUREOBJECT_STRING_,RPC_CHANGECITYNAME__CITYHALLOBJECT_CREATUREOBJECT_STRING_,RPC_VALIDATECITYNAME__STRING_,RPC_HANDLECITYADVANCEMENT__CITYHALLOBJECT_,RPC_EXPANDCITY__CITYHALLOBJECT_,RPC_CONTRACTCITY__CITYHALLOBJECT_,RPC_DESTROYCITY__CITYHALLOBJECT_,RPC_DECLARECITIZENSHIP__CITYHALLOBJECT_CREATUREOBJECT_BOOL_,RPC_REVOKECITIZENSHIP__CITYHALLOBJECT_CREATUREOBJECT_BOOL_,RPC_ADDMILITIAMEMBER__CITYHALLOBJECT_CREATUREOBJECT_STRING_,RPC_REMOVEMILITIAMEMBER__CITYHALLOBJECT_CREATUREOBJECT_LONG_,RPC_CHECKCITIESCAPPEDATRANK__BYTE_,RPC_GETCITIESALLOWED__BYTE_,RPC_ADDCITY__CITYHALLOBJECT_,RPC_GETTOTALCITIES__};

CityManager::CityManager(Zone* zne) : ManagedService(DummyConstructorParameter::instance()) {
	CityManagerImplementation* _implementation = new CityManagerImplementation(zne);
	_impl = _implementation;
	_impl->_setStub(this);
}

CityManager::CityManager(DummyConstructorParameter* param) : ManagedService(param) {
}

CityManager::~CityManager() {
}



void CityManager::loadLuaConfig() {
	CityManagerImplementation* _implementation = static_cast<CityManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_LOADLUACONFIG__);

		method.executeWithVoidReturn();
	} else
		_implementation->loadLuaConfig();
}

void CityManager::createNewCity(CityHallObject* city, CreatureObject* player, const String& name) {
	CityManagerImplementation* _implementation = static_cast<CityManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CREATENEWCITY__CITYHALLOBJECT_CREATUREOBJECT_STRING_);
		method.addObjectParameter(city);
		method.addObjectParameter(player);
		method.addAsciiParameter(name);

		method.executeWithVoidReturn();
	} else
		_implementation->createNewCity(city, player, name);
}

void CityManager::changeCityName(CityHallObject* city, CreatureObject* player, const String& name) {
	CityManagerImplementation* _implementation = static_cast<CityManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CHANGECITYNAME__CITYHALLOBJECT_CREATUREOBJECT_STRING_);
		method.addObjectParameter(city);
		method.addObjectParameter(player);
		method.addAsciiParameter(name);

		method.executeWithVoidReturn();
	} else
		_implementation->changeCityName(city, player, name);
}

bool CityManager::validateCityName(const String& name) {
	CityManagerImplementation* _implementation = static_cast<CityManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_VALIDATECITYNAME__STRING_);
		method.addAsciiParameter(name);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->validateCityName(name);
}

void CityManager::sendMailToMayor(CityHallObject* city, const String& sendername, const UnicodeString& subject, StringIdChatParameter& body) {
	CityManagerImplementation* _implementation = static_cast<CityManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->sendMailToMayor(city, sendername, subject, body);
}

void CityManager::sendMailToAllCitizens(CityHallObject* city, const String& sendername, const UnicodeString& subject, StringIdChatParameter& body) {
	CityManagerImplementation* _implementation = static_cast<CityManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->sendMailToAllCitizens(city, sendername, subject, body);
}

void CityManager::handleCityAdvancement(CityHallObject* city) {
	CityManagerImplementation* _implementation = static_cast<CityManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLECITYADVANCEMENT__CITYHALLOBJECT_);
		method.addObjectParameter(city);

		method.executeWithVoidReturn();
	} else
		_implementation->handleCityAdvancement(city);
}

void CityManager::expandCity(CityHallObject* city) {
	CityManagerImplementation* _implementation = static_cast<CityManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_EXPANDCITY__CITYHALLOBJECT_);
		method.addObjectParameter(city);

		method.executeWithVoidReturn();
	} else
		_implementation->expandCity(city);
}

void CityManager::contractCity(CityHallObject* city) {
	CityManagerImplementation* _implementation = static_cast<CityManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CONTRACTCITY__CITYHALLOBJECT_);
		method.addObjectParameter(city);

		method.executeWithVoidReturn();
	} else
		_implementation->contractCity(city);
}

void CityManager::destroyCity(CityHallObject* city) {
	CityManagerImplementation* _implementation = static_cast<CityManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DESTROYCITY__CITYHALLOBJECT_);
		method.addObjectParameter(city);

		method.executeWithVoidReturn();
	} else
		_implementation->destroyCity(city);
}

void CityManager::declareCitizenship(CityHallObject* city, CreatureObject* player, bool sendMail) {
	CityManagerImplementation* _implementation = static_cast<CityManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DECLARECITIZENSHIP__CITYHALLOBJECT_CREATUREOBJECT_BOOL_);
		method.addObjectParameter(city);
		method.addObjectParameter(player);
		method.addBooleanParameter(sendMail);

		method.executeWithVoidReturn();
	} else
		_implementation->declareCitizenship(city, player, sendMail);
}

void CityManager::revokeCitizenship(CityHallObject* city, CreatureObject* player, bool sendMail) {
	CityManagerImplementation* _implementation = static_cast<CityManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_REVOKECITIZENSHIP__CITYHALLOBJECT_CREATUREOBJECT_BOOL_);
		method.addObjectParameter(city);
		method.addObjectParameter(player);
		method.addBooleanParameter(sendMail);

		method.executeWithVoidReturn();
	} else
		_implementation->revokeCitizenship(city, player, sendMail);
}

void CityManager::addMilitiaMember(CityHallObject* city, CreatureObject* player, const String& citizenName) {
	CityManagerImplementation* _implementation = static_cast<CityManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDMILITIAMEMBER__CITYHALLOBJECT_CREATUREOBJECT_STRING_);
		method.addObjectParameter(city);
		method.addObjectParameter(player);
		method.addAsciiParameter(citizenName);

		method.executeWithVoidReturn();
	} else
		_implementation->addMilitiaMember(city, player, citizenName);
}

void CityManager::removeMilitiaMember(CityHallObject* city, CreatureObject* player, unsigned long long playerID) {
	CityManagerImplementation* _implementation = static_cast<CityManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_REMOVEMILITIAMEMBER__CITYHALLOBJECT_CREATUREOBJECT_LONG_);
		method.addObjectParameter(city);
		method.addObjectParameter(player);
		method.addUnsignedLongParameter(playerID);

		method.executeWithVoidReturn();
	} else
		_implementation->removeMilitiaMember(city, player, playerID);
}

bool CityManager::checkCitiesCappedAtRank(byte rank) {
	CityManagerImplementation* _implementation = static_cast<CityManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CHECKCITIESCAPPEDATRANK__BYTE_);
		method.addByteParameter(rank);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->checkCitiesCappedAtRank(rank);
}

byte CityManager::getCitiesAllowed(byte rank) {
	CityManagerImplementation* _implementation = static_cast<CityManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETCITIESALLOWED__BYTE_);
		method.addByteParameter(rank);

		return method.executeWithByteReturn();
	} else
		return _implementation->getCitiesAllowed(rank);
}

void CityManager::addCity(CityHallObject* city) {
	CityManagerImplementation* _implementation = static_cast<CityManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDCITY__CITYHALLOBJECT_);
		method.addObjectParameter(city);

		method.executeWithVoidReturn();
	} else
		_implementation->addCity(city);
}

int CityManager::getTotalCities() {
	CityManagerImplementation* _implementation = static_cast<CityManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETTOTALCITIES__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getTotalCities();
}

DistributedObjectServant* CityManager::_getImplementation() {

	_updated = true;
	return _impl;
}

void CityManager::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	CityManagerImplementation
 */

CityManagerImplementation::CityManagerImplementation(DummyConstructorParameter* param) : ManagedServiceImplementation(param) {
	_initializeImplementation();
}


CityManagerImplementation::~CityManagerImplementation() {
}


void CityManagerImplementation::finalize() {
}

void CityManagerImplementation::_initializeImplementation() {
	_setClassHelper(CityManagerHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void CityManagerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<CityManager*>(stub);
	ManagedServiceImplementation::_setStub(stub);
}

DistributedObjectStub* CityManagerImplementation::_getStub() {
	return _this;
}

CityManagerImplementation::operator const CityManager*() {
	return _this;
}

void CityManagerImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void CityManagerImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void CityManagerImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void CityManagerImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void CityManagerImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void CityManagerImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void CityManagerImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void CityManagerImplementation::_serializationHelperMethod() {
	ManagedServiceImplementation::_serializationHelperMethod();

	_setClassName("CityManager");

}

void CityManagerImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(CityManagerImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool CityManagerImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ManagedServiceImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "zone") {
		TypeInfo<ManagedWeakReference<Zone* > >::parseFromBinaryStream(&zone, stream);
		return true;
	}

	if (_name == "cities") {
		TypeInfo<VectorMap<unsigned long long, ManagedReference<CityHallObject* > > >::parseFromBinaryStream(&cities, stream);
		return true;
	}


	return false;
}

void CityManagerImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = CityManagerImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int CityManagerImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "zone";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedWeakReference<Zone* > >::toBinaryStream(&zone, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "cities";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<VectorMap<unsigned long long, ManagedReference<CityHallObject* > > >::toBinaryStream(&cities, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 2 + ManagedServiceImplementation::writeObjectMembers(stream);
}

CityManagerImplementation::CityManagerImplementation(Zone* zne) {
	_initializeImplementation();
	// server/zone/managers/city/CityManager.idl():  		Logger.setLoggingName("CityManager");
	Logger::setLoggingName("CityManager");
	// server/zone/managers/city/CityManager.idl():  		Logger.setLogging(false);
	Logger::setLogging(false);
	// server/zone/managers/city/CityManager.idl():  		Logger.setGlobalLogging(true);
	Logger::setGlobalLogging(true);
	// server/zone/managers/city/CityManager.idl():  		zone = zne;
	zone = zne;
	// server/zone/managers/city/CityManager.idl():  		cities.setNullValue(null);
	(&cities)->setNullValue(NULL);
	// server/zone/managers/city/CityManager.idl():  		cities.setInsertPlan(3);
	(&cities)->setInsertPlan(3);
	// server/zone/managers/city/CityManager.idl():  		configLoaded = false;
	configLoaded = false;
}

byte CityManagerImplementation::getCitiesAllowed(byte rank) {
	// server/zone/managers/city/CityManager.idl():  		return citiesAllowedPerRank.get(rank);
	return (&citiesAllowedPerRank)->get(rank);
}

void CityManagerImplementation::addCity(CityHallObject* city) {
	Locker _locker(_this);
	// server/zone/managers/city/CityManager.idl():  		cities.put(city.getObjectID(), city);
	(&cities)->put(city->getObjectID(), city);
}

int CityManagerImplementation::getTotalCities() {
	Locker _locker(_this);
	// server/zone/managers/city/CityManager.idl():  		return cities.size();
	return (&cities)->size();
}

/*
 *	CityManagerAdapter
 */

CityManagerAdapter::CityManagerAdapter(CityManager* obj) : ManagedServiceAdapter(obj) {
}

Packet* CityManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_LOADLUACONFIG__:
		loadLuaConfig();
		break;
	case RPC_CREATENEWCITY__CITYHALLOBJECT_CREATUREOBJECT_STRING_:
		createNewCity(static_cast<CityHallObject*>(inv->getObjectParameter()), static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getAsciiParameter(_param2_createNewCity__CityHallObject_CreatureObject_String_));
		break;
	case RPC_CHANGECITYNAME__CITYHALLOBJECT_CREATUREOBJECT_STRING_:
		changeCityName(static_cast<CityHallObject*>(inv->getObjectParameter()), static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getAsciiParameter(_param2_changeCityName__CityHallObject_CreatureObject_String_));
		break;
	case RPC_VALIDATECITYNAME__STRING_:
		resp->insertBoolean(validateCityName(inv->getAsciiParameter(_param0_validateCityName__String_)));
		break;
	case RPC_HANDLECITYADVANCEMENT__CITYHALLOBJECT_:
		handleCityAdvancement(static_cast<CityHallObject*>(inv->getObjectParameter()));
		break;
	case RPC_EXPANDCITY__CITYHALLOBJECT_:
		expandCity(static_cast<CityHallObject*>(inv->getObjectParameter()));
		break;
	case RPC_CONTRACTCITY__CITYHALLOBJECT_:
		contractCity(static_cast<CityHallObject*>(inv->getObjectParameter()));
		break;
	case RPC_DESTROYCITY__CITYHALLOBJECT_:
		destroyCity(static_cast<CityHallObject*>(inv->getObjectParameter()));
		break;
	case RPC_DECLARECITIZENSHIP__CITYHALLOBJECT_CREATUREOBJECT_BOOL_:
		declareCitizenship(static_cast<CityHallObject*>(inv->getObjectParameter()), static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getBooleanParameter());
		break;
	case RPC_REVOKECITIZENSHIP__CITYHALLOBJECT_CREATUREOBJECT_BOOL_:
		revokeCitizenship(static_cast<CityHallObject*>(inv->getObjectParameter()), static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getBooleanParameter());
		break;
	case RPC_ADDMILITIAMEMBER__CITYHALLOBJECT_CREATUREOBJECT_STRING_:
		addMilitiaMember(static_cast<CityHallObject*>(inv->getObjectParameter()), static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getAsciiParameter(_param2_addMilitiaMember__CityHallObject_CreatureObject_String_));
		break;
	case RPC_REMOVEMILITIAMEMBER__CITYHALLOBJECT_CREATUREOBJECT_LONG_:
		removeMilitiaMember(static_cast<CityHallObject*>(inv->getObjectParameter()), static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getUnsignedLongParameter());
		break;
	case RPC_CHECKCITIESCAPPEDATRANK__BYTE_:
		resp->insertBoolean(checkCitiesCappedAtRank(inv->getByteParameter()));
		break;
	case RPC_GETCITIESALLOWED__BYTE_:
		resp->insertByte(getCitiesAllowed(inv->getByteParameter()));
		break;
	case RPC_ADDCITY__CITYHALLOBJECT_:
		addCity(static_cast<CityHallObject*>(inv->getObjectParameter()));
		break;
	case RPC_GETTOTALCITIES__:
		resp->insertSignedInt(getTotalCities());
		break;
	default:
		return NULL;
	}

	return resp;
}

void CityManagerAdapter::loadLuaConfig() {
	(static_cast<CityManager*>(stub))->loadLuaConfig();
}

void CityManagerAdapter::createNewCity(CityHallObject* city, CreatureObject* player, const String& name) {
	(static_cast<CityManager*>(stub))->createNewCity(city, player, name);
}

void CityManagerAdapter::changeCityName(CityHallObject* city, CreatureObject* player, const String& name) {
	(static_cast<CityManager*>(stub))->changeCityName(city, player, name);
}

bool CityManagerAdapter::validateCityName(const String& name) {
	return (static_cast<CityManager*>(stub))->validateCityName(name);
}

void CityManagerAdapter::handleCityAdvancement(CityHallObject* city) {
	(static_cast<CityManager*>(stub))->handleCityAdvancement(city);
}

void CityManagerAdapter::expandCity(CityHallObject* city) {
	(static_cast<CityManager*>(stub))->expandCity(city);
}

void CityManagerAdapter::contractCity(CityHallObject* city) {
	(static_cast<CityManager*>(stub))->contractCity(city);
}

void CityManagerAdapter::destroyCity(CityHallObject* city) {
	(static_cast<CityManager*>(stub))->destroyCity(city);
}

void CityManagerAdapter::declareCitizenship(CityHallObject* city, CreatureObject* player, bool sendMail) {
	(static_cast<CityManager*>(stub))->declareCitizenship(city, player, sendMail);
}

void CityManagerAdapter::revokeCitizenship(CityHallObject* city, CreatureObject* player, bool sendMail) {
	(static_cast<CityManager*>(stub))->revokeCitizenship(city, player, sendMail);
}

void CityManagerAdapter::addMilitiaMember(CityHallObject* city, CreatureObject* player, const String& citizenName) {
	(static_cast<CityManager*>(stub))->addMilitiaMember(city, player, citizenName);
}

void CityManagerAdapter::removeMilitiaMember(CityHallObject* city, CreatureObject* player, unsigned long long playerID) {
	(static_cast<CityManager*>(stub))->removeMilitiaMember(city, player, playerID);
}

bool CityManagerAdapter::checkCitiesCappedAtRank(byte rank) {
	return (static_cast<CityManager*>(stub))->checkCitiesCappedAtRank(rank);
}

byte CityManagerAdapter::getCitiesAllowed(byte rank) {
	return (static_cast<CityManager*>(stub))->getCitiesAllowed(rank);
}

void CityManagerAdapter::addCity(CityHallObject* city) {
	(static_cast<CityManager*>(stub))->addCity(city);
}

int CityManagerAdapter::getTotalCities() {
	return (static_cast<CityManager*>(stub))->getTotalCities();
}

/*
 *	CityManagerHelper
 */

CityManagerHelper* CityManagerHelper::staticInitializer = CityManagerHelper::instance();

CityManagerHelper::CityManagerHelper() {
	className = "CityManager";

	Core::getObjectBroker()->registerClass(className, this);
}

void CityManagerHelper::finalizeHelper() {
	CityManagerHelper::finalize();
}

DistributedObject* CityManagerHelper::instantiateObject() {
	return new CityManager(DummyConstructorParameter::instance());
}

DistributedObjectServant* CityManagerHelper::instantiateServant() {
	return new CityManagerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* CityManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CityManagerAdapter(static_cast<CityManager*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

