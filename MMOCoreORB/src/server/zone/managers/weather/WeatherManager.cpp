/*
 *	server/zone/managers/weather/WeatherManager.cpp generated by engine3 IDL compiler 0.60
 */

#include "WeatherManager.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/managers/weather/events/WeatherChangeEvent.h"

#include "server/zone/managers/weather/events/SandstormTickEvent.h"

/*
 *	WeatherManagerStub
 */

enum {RPC_INITIALIZE__,RPC_GENERATENEWWEATHER__,RPC_WEATHERTRANSITION__,RPC_SENDWEATHERPACKET__CREATUREOBJECT_,RPC_SANDSTORMTICK__,RPC_ENABLEWEATHER__CREATUREOBJECT_,RPC_DISABLEWEATHER__CREATUREOBJECT_,RPC_CHANGEWEATHER__CREATUREOBJECT_INT_,RPC_WEATHERINFO__CREATUREOBJECT_,RPC_SETWEATHERID__INT_,RPC_GETWEATHERID__,RPC_ISWEATHERENABLED__,RPC_SETWEATHERENABLED__BOOL_,RPC_SETWINDX__FLOAT_,RPC_SETWINDY__FLOAT_,RPC_GETWINDX__,RPC_GETWINDY__};

WeatherManager::WeatherManager(Zone* planet) : ManagedService(DummyConstructorParameter::instance()) {
	WeatherManagerImplementation* _implementation = new WeatherManagerImplementation(planet);
	_impl = _implementation;
	_impl->_setStub(this);
}

WeatherManager::WeatherManager(DummyConstructorParameter* param) : ManagedService(param) {
}

WeatherManager::~WeatherManager() {
}


void WeatherManager::initialize() {
	WeatherManagerImplementation* _implementation = (WeatherManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZE__);

		method.executeWithVoidReturn();
	} else
		_implementation->initialize();
}

void WeatherManager::generateNewWeather() {
	WeatherManagerImplementation* _implementation = (WeatherManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GENERATENEWWEATHER__);

		method.executeWithVoidReturn();
	} else
		_implementation->generateNewWeather();
}

void WeatherManager::weatherTransition() {
	WeatherManagerImplementation* _implementation = (WeatherManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_WEATHERTRANSITION__);

		method.executeWithVoidReturn();
	} else
		_implementation->weatherTransition();
}

void WeatherManager::sendWeatherPacket(CreatureObject* player) {
	WeatherManagerImplementation* _implementation = (WeatherManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDWEATHERPACKET__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendWeatherPacket(player);
}

void WeatherManager::sandstormTick() {
	WeatherManagerImplementation* _implementation = (WeatherManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SANDSTORMTICK__);

		method.executeWithVoidReturn();
	} else
		_implementation->sandstormTick();
}

void WeatherManager::enableWeather(CreatureObject* player) {
	WeatherManagerImplementation* _implementation = (WeatherManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ENABLEWEATHER__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->enableWeather(player);
}

void WeatherManager::disableWeather(CreatureObject* player) {
	WeatherManagerImplementation* _implementation = (WeatherManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DISABLEWEATHER__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->disableWeather(player);
}

void WeatherManager::changeWeather(CreatureObject* player, int newWeather) {
	WeatherManagerImplementation* _implementation = (WeatherManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CHANGEWEATHER__CREATUREOBJECT_INT_);
		method.addObjectParameter(player);
		method.addSignedIntParameter(newWeather);

		method.executeWithVoidReturn();
	} else
		_implementation->changeWeather(player, newWeather);
}

void WeatherManager::weatherInfo(CreatureObject* player) {
	WeatherManagerImplementation* _implementation = (WeatherManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_WEATHERINFO__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->weatherInfo(player);
}

void WeatherManager::setWeatherID(unsigned int value) {
	WeatherManagerImplementation* _implementation = (WeatherManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETWEATHERID__INT_);
		method.addUnsignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setWeatherID(value);
}

unsigned int WeatherManager::getWeatherID() {
	WeatherManagerImplementation* _implementation = (WeatherManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETWEATHERID__);

		return method.executeWithUnsignedIntReturn();
	} else
		return _implementation->getWeatherID();
}

bool WeatherManager::isWeatherEnabled() {
	WeatherManagerImplementation* _implementation = (WeatherManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISWEATHERENABLED__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isWeatherEnabled();
}

void WeatherManager::setWeatherEnabled(bool value) {
	WeatherManagerImplementation* _implementation = (WeatherManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETWEATHERENABLED__BOOL_);
		method.addBooleanParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setWeatherEnabled(value);
}

void WeatherManager::setWindX(float value) {
	WeatherManagerImplementation* _implementation = (WeatherManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETWINDX__FLOAT_);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setWindX(value);
}

void WeatherManager::setWindY(float value) {
	WeatherManagerImplementation* _implementation = (WeatherManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETWINDY__FLOAT_);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setWindY(value);
}

float WeatherManager::getWindX() {
	WeatherManagerImplementation* _implementation = (WeatherManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETWINDX__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getWindX();
}

float WeatherManager::getWindY() {
	WeatherManagerImplementation* _implementation = (WeatherManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETWINDY__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getWindY();
}

DistributedObjectServant* WeatherManager::_getImplementation() {

	_updated = true;
	return _impl;
}

void WeatherManager::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	WeatherManagerImplementation
 */

WeatherManagerImplementation::WeatherManagerImplementation(DummyConstructorParameter* param) : ManagedServiceImplementation(param) {
	_initializeImplementation();
}


WeatherManagerImplementation::~WeatherManagerImplementation() {
}


void WeatherManagerImplementation::finalize() {
}

void WeatherManagerImplementation::_initializeImplementation() {
	_setClassHelper(WeatherManagerHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void WeatherManagerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (WeatherManager*) stub;
	ManagedServiceImplementation::_setStub(stub);
}

DistributedObjectStub* WeatherManagerImplementation::_getStub() {
	return _this;
}

WeatherManagerImplementation::operator const WeatherManager*() {
	return _this;
}

void WeatherManagerImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void WeatherManagerImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void WeatherManagerImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void WeatherManagerImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void WeatherManagerImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void WeatherManagerImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void WeatherManagerImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void WeatherManagerImplementation::_serializationHelperMethod() {
	ManagedServiceImplementation::_serializationHelperMethod();

	_setClassName("WeatherManager");

}

void WeatherManagerImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(WeatherManagerImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool WeatherManagerImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ManagedServiceImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "zone") {
		TypeInfo<ManagedWeakReference<Zone* > >::parseFromBinaryStream(&zone, stream);
		return true;
	}

	if (_name == "weatherEnabled") {
		TypeInfo<bool >::parseFromBinaryStream(&weatherEnabled, stream);
		return true;
	}

	if (_name == "weatherID") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&weatherID, stream);
		return true;
	}

	if (_name == "targetWeatherID") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&targetWeatherID, stream);
		return true;
	}

	if (_name == "levelZeroChance") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&levelZeroChance, stream);
		return true;
	}

	if (_name == "levelOneChance") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&levelOneChance, stream);
		return true;
	}

	if (_name == "levelTwoChance") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&levelTwoChance, stream);
		return true;
	}

	if (_name == "levelThreeChance") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&levelThreeChance, stream);
		return true;
	}

	if (_name == "levelFourChance") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&levelFourChance, stream);
		return true;
	}

	if (_name == "windChangeChance") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&windChangeChance, stream);
		return true;
	}

	if (_name == "newWeatherTimeMin") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&newWeatherTimeMin, stream);
		return true;
	}

	if (_name == "newWeatherTimeMax") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&newWeatherTimeMax, stream);
		return true;
	}

	if (_name == "transitionTimeMin") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&transitionTimeMin, stream);
		return true;
	}

	if (_name == "transitionTimeMax") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&transitionTimeMax, stream);
		return true;
	}

	if (_name == "sandstormEffectsEnabled") {
		TypeInfo<bool >::parseFromBinaryStream(&sandstormEffectsEnabled, stream);
		return true;
	}

	if (_name == "sandstormWounds") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&sandstormWounds, stream);
		return true;
	}

	if (_name == "sandstormWoundsMitigation") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&sandstormWoundsMitigation, stream);
		return true;
	}

	if (_name == "sandstormKnockdownChance") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&sandstormKnockdownChance, stream);
		return true;
	}

	if (_name == "sandstormKnockdownModifier") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&sandstormKnockdownModifier, stream);
		return true;
	}

	if (_name == "sandstormTickTime") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&sandstormTickTime, stream);
		return true;
	}

	if (_name == "windX") {
		TypeInfo<float >::parseFromBinaryStream(&windX, stream);
		return true;
	}

	if (_name == "windY") {
		TypeInfo<float >::parseFromBinaryStream(&windY, stream);
		return true;
	}


	return false;
}

void WeatherManagerImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = WeatherManagerImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int WeatherManagerImplementation::writeObjectMembers(ObjectOutputStream* stream) {
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

	_name = "weatherEnabled";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<bool >::toBinaryStream(&weatherEnabled, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "weatherID";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&weatherID, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "targetWeatherID";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&targetWeatherID, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "levelZeroChance";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&levelZeroChance, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "levelOneChance";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&levelOneChance, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "levelTwoChance";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&levelTwoChance, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "levelThreeChance";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&levelThreeChance, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "levelFourChance";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&levelFourChance, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "windChangeChance";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&windChangeChance, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "newWeatherTimeMin";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&newWeatherTimeMin, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "newWeatherTimeMax";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&newWeatherTimeMax, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "transitionTimeMin";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&transitionTimeMin, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "transitionTimeMax";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&transitionTimeMax, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "sandstormEffectsEnabled";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<bool >::toBinaryStream(&sandstormEffectsEnabled, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "sandstormWounds";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&sandstormWounds, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "sandstormWoundsMitigation";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&sandstormWoundsMitigation, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "sandstormKnockdownChance";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&sandstormKnockdownChance, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "sandstormKnockdownModifier";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&sandstormKnockdownModifier, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "sandstormTickTime";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&sandstormTickTime, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "windX";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<float >::toBinaryStream(&windX, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "windY";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<float >::toBinaryStream(&windY, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 22 + ManagedServiceImplementation::writeObjectMembers(stream);
}

WeatherManagerImplementation::WeatherManagerImplementation(Zone* planet) {
	_initializeImplementation();
	// server/zone/managers/weather/WeatherManager.idl():  		zone = planet;
	zone = planet;
}

void WeatherManagerImplementation::setWeatherID(unsigned int value) {
	// server/zone/managers/weather/WeatherManager.idl():  		weatherID = value;
	weatherID = value;
}

unsigned int WeatherManagerImplementation::getWeatherID() {
	// server/zone/managers/weather/WeatherManager.idl():  		return weatherID;
	return weatherID;
}

bool WeatherManagerImplementation::isWeatherEnabled() {
	// server/zone/managers/weather/WeatherManager.idl():  		return weatherEnabled;
	return weatherEnabled;
}

void WeatherManagerImplementation::setWeatherEnabled(bool value) {
	// server/zone/managers/weather/WeatherManager.idl():  		weatherEnabled = value;
	weatherEnabled = value;
}

void WeatherManagerImplementation::setWindX(float value) {
	// server/zone/managers/weather/WeatherManager.idl():  		windX = value;
	windX = value;
}

void WeatherManagerImplementation::setWindY(float value) {
	// server/zone/managers/weather/WeatherManager.idl():  		windY = value;
	windY = value;
}

float WeatherManagerImplementation::getWindX() {
	// server/zone/managers/weather/WeatherManager.idl():  		return windX;
	return windX;
}

float WeatherManagerImplementation::getWindY() {
	// server/zone/managers/weather/WeatherManager.idl():  		return windY;
	return windY;
}

/*
 *	WeatherManagerAdapter
 */

WeatherManagerAdapter::WeatherManagerAdapter(WeatherManagerImplementation* obj) : ManagedServiceAdapter(obj) {
}

Packet* WeatherManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_INITIALIZE__:
		initialize();
		break;
	case RPC_GENERATENEWWEATHER__:
		generateNewWeather();
		break;
	case RPC_WEATHERTRANSITION__:
		weatherTransition();
		break;
	case RPC_SENDWEATHERPACKET__CREATUREOBJECT_:
		sendWeatherPacket((CreatureObject*) inv->getObjectParameter());
		break;
	case RPC_SANDSTORMTICK__:
		sandstormTick();
		break;
	case RPC_ENABLEWEATHER__CREATUREOBJECT_:
		enableWeather((CreatureObject*) inv->getObjectParameter());
		break;
	case RPC_DISABLEWEATHER__CREATUREOBJECT_:
		disableWeather((CreatureObject*) inv->getObjectParameter());
		break;
	case RPC_CHANGEWEATHER__CREATUREOBJECT_INT_:
		changeWeather((CreatureObject*) inv->getObjectParameter(), inv->getSignedIntParameter());
		break;
	case RPC_WEATHERINFO__CREATUREOBJECT_:
		weatherInfo((CreatureObject*) inv->getObjectParameter());
		break;
	case RPC_SETWEATHERID__INT_:
		setWeatherID(inv->getUnsignedIntParameter());
		break;
	case RPC_GETWEATHERID__:
		resp->insertInt(getWeatherID());
		break;
	case RPC_ISWEATHERENABLED__:
		resp->insertBoolean(isWeatherEnabled());
		break;
	case RPC_SETWEATHERENABLED__BOOL_:
		setWeatherEnabled(inv->getBooleanParameter());
		break;
	case RPC_SETWINDX__FLOAT_:
		setWindX(inv->getFloatParameter());
		break;
	case RPC_SETWINDY__FLOAT_:
		setWindY(inv->getFloatParameter());
		break;
	case RPC_GETWINDX__:
		resp->insertFloat(getWindX());
		break;
	case RPC_GETWINDY__:
		resp->insertFloat(getWindY());
		break;
	default:
		return NULL;
	}

	return resp;
}

void WeatherManagerAdapter::initialize() {
	((WeatherManagerImplementation*) impl)->initialize();
}

void WeatherManagerAdapter::generateNewWeather() {
	((WeatherManagerImplementation*) impl)->generateNewWeather();
}

void WeatherManagerAdapter::weatherTransition() {
	((WeatherManagerImplementation*) impl)->weatherTransition();
}

void WeatherManagerAdapter::sendWeatherPacket(CreatureObject* player) {
	((WeatherManagerImplementation*) impl)->sendWeatherPacket(player);
}

void WeatherManagerAdapter::sandstormTick() {
	((WeatherManagerImplementation*) impl)->sandstormTick();
}

void WeatherManagerAdapter::enableWeather(CreatureObject* player) {
	((WeatherManagerImplementation*) impl)->enableWeather(player);
}

void WeatherManagerAdapter::disableWeather(CreatureObject* player) {
	((WeatherManagerImplementation*) impl)->disableWeather(player);
}

void WeatherManagerAdapter::changeWeather(CreatureObject* player, int newWeather) {
	((WeatherManagerImplementation*) impl)->changeWeather(player, newWeather);
}

void WeatherManagerAdapter::weatherInfo(CreatureObject* player) {
	((WeatherManagerImplementation*) impl)->weatherInfo(player);
}

void WeatherManagerAdapter::setWeatherID(unsigned int value) {
	((WeatherManagerImplementation*) impl)->setWeatherID(value);
}

unsigned int WeatherManagerAdapter::getWeatherID() {
	return ((WeatherManagerImplementation*) impl)->getWeatherID();
}

bool WeatherManagerAdapter::isWeatherEnabled() {
	return ((WeatherManagerImplementation*) impl)->isWeatherEnabled();
}

void WeatherManagerAdapter::setWeatherEnabled(bool value) {
	((WeatherManagerImplementation*) impl)->setWeatherEnabled(value);
}

void WeatherManagerAdapter::setWindX(float value) {
	((WeatherManagerImplementation*) impl)->setWindX(value);
}

void WeatherManagerAdapter::setWindY(float value) {
	((WeatherManagerImplementation*) impl)->setWindY(value);
}

float WeatherManagerAdapter::getWindX() {
	return ((WeatherManagerImplementation*) impl)->getWindX();
}

float WeatherManagerAdapter::getWindY() {
	return ((WeatherManagerImplementation*) impl)->getWindY();
}

/*
 *	WeatherManagerHelper
 */

WeatherManagerHelper* WeatherManagerHelper::staticInitializer = WeatherManagerHelper::instance();

WeatherManagerHelper::WeatherManagerHelper() {
	className = "WeatherManager";

	Core::getObjectBroker()->registerClass(className, this);
}

void WeatherManagerHelper::finalizeHelper() {
	WeatherManagerHelper::finalize();
}

DistributedObject* WeatherManagerHelper::instantiateObject() {
	return new WeatherManager(DummyConstructorParameter::instance());
}

DistributedObjectServant* WeatherManagerHelper::instantiateServant() {
	return new WeatherManagerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* WeatherManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new WeatherManagerAdapter((WeatherManagerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

