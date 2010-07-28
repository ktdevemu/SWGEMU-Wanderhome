/*
 *	server/zone/objects/tangible/wearables/ArmorObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "ArmorObject.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/manufactureschematic/ManufactureSchematic.h"

/*
 *	ArmorObjectStub
 */

ArmorObject::ArmorObject() : WearableObject(DummyConstructorParameter::instance()) {
	_impl = new ArmorObjectImplementation();
	_impl->_setStub(this);
}

ArmorObject::ArmorObject(DummyConstructorParameter* param) : WearableObject(param) {
}

ArmorObject::~ArmorObject() {
}


void ArmorObject::initializeTransientMembers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((ArmorObjectImplementation*) _impl)->initializeTransientMembers();
}

void ArmorObject::loadTemplateData(SharedObjectTemplate* templateData) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((ArmorObjectImplementation*) _impl)->loadTemplateData(templateData);
}

void ArmorObject::fillAttributeList(AttributeListMessage* msg, PlayerCreature* object) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((ArmorObjectImplementation*) _impl)->fillAttributeList(msg, object);
}

void ArmorObject::updateCraftingValues(ManufactureSchematic* schematic) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(schematic);

		method.executeWithVoidReturn();
	} else
		((ArmorObjectImplementation*) _impl)->updateCraftingValues(schematic);
}

bool ArmorObject::isSpecial(const String& special) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addAsciiParameter(special);

		return method.executeWithBooleanReturn();
	} else
		return ((ArmorObjectImplementation*) _impl)->isSpecial(special);
}

bool ArmorObject::isVulnerable(const String& vulnerability) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addAsciiParameter(vulnerability);

		return method.executeWithBooleanReturn();
	} else
		return ((ArmorObjectImplementation*) _impl)->isVulnerable(vulnerability);
}

bool ArmorObject::isArmorObject() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		return method.executeWithBooleanReturn();
	} else
		return ((ArmorObjectImplementation*) _impl)->isArmorObject();
}

void ArmorObject::setRating(int rate) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addSignedIntParameter(rate);

		method.executeWithVoidReturn();
	} else
		((ArmorObjectImplementation*) _impl)->setRating(rate);
}

int ArmorObject::getRating() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		return method.executeWithSignedIntReturn();
	} else
		return ((ArmorObjectImplementation*) _impl)->getRating();
}

float ArmorObject::getKinetic() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		return method.executeWithFloatReturn();
	} else
		return ((ArmorObjectImplementation*) _impl)->getKinetic();
}

void ArmorObject::setKinetic(float value) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		((ArmorObjectImplementation*) _impl)->setKinetic(value);
}

float ArmorObject::getEnergy() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);

		return method.executeWithFloatReturn();
	} else
		return ((ArmorObjectImplementation*) _impl)->getEnergy();
}

void ArmorObject::setEnergy(float value) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		((ArmorObjectImplementation*) _impl)->setEnergy(value);
}

float ArmorObject::getElectricity() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);

		return method.executeWithFloatReturn();
	} else
		return ((ArmorObjectImplementation*) _impl)->getElectricity();
}

void ArmorObject::setElectricity(float value) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		((ArmorObjectImplementation*) _impl)->setElectricity(value);
}

float ArmorObject::getStun() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);

		return method.executeWithFloatReturn();
	} else
		return ((ArmorObjectImplementation*) _impl)->getStun();
}

void ArmorObject::setStun(float value) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		((ArmorObjectImplementation*) _impl)->setStun(value);
}

float ArmorObject::getBlast() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);

		return method.executeWithFloatReturn();
	} else
		return ((ArmorObjectImplementation*) _impl)->getBlast();
}

void ArmorObject::setBlast(float value) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		((ArmorObjectImplementation*) _impl)->setBlast(value);
}

float ArmorObject::getHeat() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);

		return method.executeWithFloatReturn();
	} else
		return ((ArmorObjectImplementation*) _impl)->getHeat();
}

void ArmorObject::setHeat(float value) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		((ArmorObjectImplementation*) _impl)->setHeat(value);
}

float ArmorObject::getCold() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);

		return method.executeWithFloatReturn();
	} else
		return ((ArmorObjectImplementation*) _impl)->getCold();
}

void ArmorObject::setCold(float value) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		((ArmorObjectImplementation*) _impl)->setCold(value);
}

float ArmorObject::getAcid() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);

		return method.executeWithFloatReturn();
	} else
		return ((ArmorObjectImplementation*) _impl)->getAcid();
}

void ArmorObject::setAcid(float value) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		((ArmorObjectImplementation*) _impl)->setAcid(value);
}

float ArmorObject::getLightSaber() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);

		return method.executeWithFloatReturn();
	} else
		return ((ArmorObjectImplementation*) _impl)->getLightSaber();
}

void ArmorObject::setLightSaber(float value) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		((ArmorObjectImplementation*) _impl)->setLightSaber(value);
}

int ArmorObject::getHealthEncumbrance() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);

		return method.executeWithSignedIntReturn();
	} else
		return ((ArmorObjectImplementation*) _impl)->getHealthEncumbrance();
}

void ArmorObject::setHealthEncumbrance(int encumber) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);
		method.addSignedIntParameter(encumber);

		method.executeWithVoidReturn();
	} else
		((ArmorObjectImplementation*) _impl)->setHealthEncumbrance(encumber);
}

int ArmorObject::getActionEncumbrance() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);

		return method.executeWithSignedIntReturn();
	} else
		return ((ArmorObjectImplementation*) _impl)->getActionEncumbrance();
}

void ArmorObject::setActionEncumbrance(int encumber) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);
		method.addSignedIntParameter(encumber);

		method.executeWithVoidReturn();
	} else
		((ArmorObjectImplementation*) _impl)->setActionEncumbrance(encumber);
}

int ArmorObject::getMindEncumbrance() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 35);

		return method.executeWithSignedIntReturn();
	} else
		return ((ArmorObjectImplementation*) _impl)->getMindEncumbrance();
}

void ArmorObject::setMindEncumbrance(int encumber) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 36);
		method.addSignedIntParameter(encumber);

		method.executeWithVoidReturn();
	} else
		((ArmorObjectImplementation*) _impl)->setMindEncumbrance(encumber);
}

/*
 *	ArmorObjectImplementation
 */

ArmorObjectImplementation::ArmorObjectImplementation(DummyConstructorParameter* param) : WearableObjectImplementation(param) {
	_initializeImplementation();
}

ArmorObjectImplementation::~ArmorObjectImplementation() {
}


void ArmorObjectImplementation::finalize() {
}

void ArmorObjectImplementation::_initializeImplementation() {
	_setClassHelper(ArmorObjectHelper::instance());

	_serializationHelperMethod();
}

void ArmorObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (ArmorObject*) stub;
	WearableObjectImplementation::_setStub(stub);
}

DistributedObjectStub* ArmorObjectImplementation::_getStub() {
	return _this;
}

ArmorObjectImplementation::operator const ArmorObject*() {
	return _this;
}

void ArmorObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void ArmorObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void ArmorObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void ArmorObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void ArmorObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void ArmorObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void ArmorObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void ArmorObjectImplementation::_serializationHelperMethod() {
	WearableObjectImplementation::_serializationHelperMethod();

	_setClassName("ArmorObject");

	addSerializableVariable("healthEncumbrance", &healthEncumbrance);
	addSerializableVariable("actionEncumbrance", &actionEncumbrance);
	addSerializableVariable("mindEncumbrance", &mindEncumbrance);
	addSerializableVariable("rating", &rating);
	addSerializableVariable("kinetic", &kinetic);
	addSerializableVariable("energy", &energy);
	addSerializableVariable("electricity", &electricity);
	addSerializableVariable("stun", &stun);
	addSerializableVariable("blast", &blast);
	addSerializableVariable("heat", &heat);
	addSerializableVariable("cold", &cold);
	addSerializableVariable("acid", &acid);
	addSerializableVariable("lightSaber", &lightSaber);
	addSerializableVariable("specialResistsVector", &specialResistsVector);
	addSerializableVariable("vulnerabilitesVector", &vulnerabilitesVector);
	addSerializableVariable("specialBase", &specialBase);
}

ArmorObjectImplementation::ArmorObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/wearables/ArmorObject.idl(82):  		healthEncumbrance = 100;
	healthEncumbrance = 100;
	// server/zone/objects/tangible/wearables/ArmorObject.idl(83):  		actionEncumbrance = 100;
	actionEncumbrance = 100;
	// server/zone/objects/tangible/wearables/ArmorObject.idl(84):  		mindEncumbrance = 100;
	mindEncumbrance = 100;
	// server/zone/objects/tangible/wearables/ArmorObject.idl(86):  		rating = LIGHT;
	rating = LIGHT;
	// server/zone/objects/tangible/wearables/ArmorObject.idl(88):  		kinetic = 0;
	kinetic = 0;
	// server/zone/objects/tangible/wearables/ArmorObject.idl(89):  		energy = 0;
	energy = 0;
	// server/zone/objects/tangible/wearables/ArmorObject.idl(90):  		electricity = 0;
	electricity = 0;
	// server/zone/objects/tangible/wearables/ArmorObject.idl(91):  		stun = 0;
	stun = 0;
	// server/zone/objects/tangible/wearables/ArmorObject.idl(92):  		blast = 0;
	blast = 0;
	// server/zone/objects/tangible/wearables/ArmorObject.idl(93):  		heat = 0;
	heat = 0;
	// server/zone/objects/tangible/wearables/ArmorObject.idl(94):  		cold = 0;
	cold = 0;
	// server/zone/objects/tangible/wearables/ArmorObject.idl(95):  		acid = 0;
	acid = 0;
	// server/zone/objects/tangible/wearables/ArmorObject.idl(96):  		lightSaber = 0;
	lightSaber = 0;
	// server/zone/objects/tangible/wearables/ArmorObject.idl(102):  		Logger.setLoggingName("ArmorObject");
	Logger::setLoggingName("ArmorObject");
}

bool ArmorObjectImplementation::isSpecial(const String& special) {
	// server/zone/objects/tangible/wearables/ArmorObject.idl(133):  		return specialResistsVector.contains(special);
	return (&specialResistsVector)->contains(special);
}

bool ArmorObjectImplementation::isVulnerable(const String& vulnerability) {
	// server/zone/objects/tangible/wearables/ArmorObject.idl(137):  		return vulnerabilitesVector.contains(vulnerability);
	return (&vulnerabilitesVector)->contains(vulnerability);
}

bool ArmorObjectImplementation::isArmorObject() {
	// server/zone/objects/tangible/wearables/ArmorObject.idl(141):  		return true;
	return true;
}

void ArmorObjectImplementation::setRating(int rate) {
	// server/zone/objects/tangible/wearables/ArmorObject.idl(146):  		rating = rate;
	rating = rate;
}

int ArmorObjectImplementation::getRating() {
	// server/zone/objects/tangible/wearables/ArmorObject.idl(150):  		return rating;
	return rating;
}

float ArmorObjectImplementation::getKinetic() {
	// server/zone/objects/tangible/wearables/ArmorObject.idl(154):  		return kinetic;
	return kinetic;
}

void ArmorObjectImplementation::setKinetic(float value) {
	// server/zone/objects/tangible/wearables/ArmorObject.idl(158):  		kinetic = value;
	kinetic = value;
}

float ArmorObjectImplementation::getEnergy() {
	// server/zone/objects/tangible/wearables/ArmorObject.idl(162):  		return energy;
	return energy;
}

void ArmorObjectImplementation::setEnergy(float value) {
	// server/zone/objects/tangible/wearables/ArmorObject.idl(166):  		energy = value;
	energy = value;
}

float ArmorObjectImplementation::getElectricity() {
	// server/zone/objects/tangible/wearables/ArmorObject.idl(170):  		return electricity;
	return electricity;
}

void ArmorObjectImplementation::setElectricity(float value) {
	// server/zone/objects/tangible/wearables/ArmorObject.idl(174):  		electricity = value;
	electricity = value;
}

float ArmorObjectImplementation::getStun() {
	// server/zone/objects/tangible/wearables/ArmorObject.idl(178):  		return stun;
	return stun;
}

void ArmorObjectImplementation::setStun(float value) {
	// server/zone/objects/tangible/wearables/ArmorObject.idl(182):  		stun = value;
	stun = value;
}

float ArmorObjectImplementation::getBlast() {
	// server/zone/objects/tangible/wearables/ArmorObject.idl(186):  		return blast;
	return blast;
}

void ArmorObjectImplementation::setBlast(float value) {
	// server/zone/objects/tangible/wearables/ArmorObject.idl(190):  		blast = value;
	blast = value;
}

float ArmorObjectImplementation::getHeat() {
	// server/zone/objects/tangible/wearables/ArmorObject.idl(194):  		return heat;
	return heat;
}

void ArmorObjectImplementation::setHeat(float value) {
	// server/zone/objects/tangible/wearables/ArmorObject.idl(198):  		heat = value;
	heat = value;
}

float ArmorObjectImplementation::getCold() {
	// server/zone/objects/tangible/wearables/ArmorObject.idl(202):  		return cold;
	return cold;
}

void ArmorObjectImplementation::setCold(float value) {
	// server/zone/objects/tangible/wearables/ArmorObject.idl(206):  		cold = value;
	cold = value;
}

float ArmorObjectImplementation::getAcid() {
	// server/zone/objects/tangible/wearables/ArmorObject.idl(210):  		return acid;
	return acid;
}

void ArmorObjectImplementation::setAcid(float value) {
	// server/zone/objects/tangible/wearables/ArmorObject.idl(214):  		acid = value;
	acid = value;
}

float ArmorObjectImplementation::getLightSaber() {
	// server/zone/objects/tangible/wearables/ArmorObject.idl(218):  		return lightSaber;
	return lightSaber;
}

void ArmorObjectImplementation::setLightSaber(float value) {
	// server/zone/objects/tangible/wearables/ArmorObject.idl(222):  		lightSaber = value;
	lightSaber = value;
}

int ArmorObjectImplementation::getHealthEncumbrance() {
	// server/zone/objects/tangible/wearables/ArmorObject.idl(226):  		return healthEncumbrance;
	return healthEncumbrance;
}

void ArmorObjectImplementation::setHealthEncumbrance(int encumber) {
	// server/zone/objects/tangible/wearables/ArmorObject.idl(230):  		healthEncumbrance = encumber;
	healthEncumbrance = encumber;
}

int ArmorObjectImplementation::getActionEncumbrance() {
	// server/zone/objects/tangible/wearables/ArmorObject.idl(234):  		return actionEncumbrance;
	return actionEncumbrance;
}

void ArmorObjectImplementation::setActionEncumbrance(int encumber) {
	// server/zone/objects/tangible/wearables/ArmorObject.idl(238):  		actionEncumbrance = encumber;
	actionEncumbrance = encumber;
}

int ArmorObjectImplementation::getMindEncumbrance() {
	// server/zone/objects/tangible/wearables/ArmorObject.idl(242):  		return mindEncumbrance;
	return mindEncumbrance;
}

void ArmorObjectImplementation::setMindEncumbrance(int encumber) {
	// server/zone/objects/tangible/wearables/ArmorObject.idl(246):  		mindEncumbrance = encumber;
	mindEncumbrance = encumber;
}

/*
 *	ArmorObjectAdapter
 */

ArmorObjectAdapter::ArmorObjectAdapter(ArmorObjectImplementation* obj) : WearableObjectAdapter(obj) {
}

Packet* ArmorObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		updateCraftingValues((ManufactureSchematic*) inv->getObjectParameter());
		break;
	case 8:
		resp->insertBoolean(isSpecial(inv->getAsciiParameter(_param0_isSpecial__String_)));
		break;
	case 9:
		resp->insertBoolean(isVulnerable(inv->getAsciiParameter(_param0_isVulnerable__String_)));
		break;
	case 10:
		resp->insertBoolean(isArmorObject());
		break;
	case 11:
		setRating(inv->getSignedIntParameter());
		break;
	case 12:
		resp->insertSignedInt(getRating());
		break;
	case 13:
		resp->insertFloat(getKinetic());
		break;
	case 14:
		setKinetic(inv->getFloatParameter());
		break;
	case 15:
		resp->insertFloat(getEnergy());
		break;
	case 16:
		setEnergy(inv->getFloatParameter());
		break;
	case 17:
		resp->insertFloat(getElectricity());
		break;
	case 18:
		setElectricity(inv->getFloatParameter());
		break;
	case 19:
		resp->insertFloat(getStun());
		break;
	case 20:
		setStun(inv->getFloatParameter());
		break;
	case 21:
		resp->insertFloat(getBlast());
		break;
	case 22:
		setBlast(inv->getFloatParameter());
		break;
	case 23:
		resp->insertFloat(getHeat());
		break;
	case 24:
		setHeat(inv->getFloatParameter());
		break;
	case 25:
		resp->insertFloat(getCold());
		break;
	case 26:
		setCold(inv->getFloatParameter());
		break;
	case 27:
		resp->insertFloat(getAcid());
		break;
	case 28:
		setAcid(inv->getFloatParameter());
		break;
	case 29:
		resp->insertFloat(getLightSaber());
		break;
	case 30:
		setLightSaber(inv->getFloatParameter());
		break;
	case 31:
		resp->insertSignedInt(getHealthEncumbrance());
		break;
	case 32:
		setHealthEncumbrance(inv->getSignedIntParameter());
		break;
	case 33:
		resp->insertSignedInt(getActionEncumbrance());
		break;
	case 34:
		setActionEncumbrance(inv->getSignedIntParameter());
		break;
	case 35:
		resp->insertSignedInt(getMindEncumbrance());
		break;
	case 36:
		setMindEncumbrance(inv->getSignedIntParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void ArmorObjectAdapter::initializeTransientMembers() {
	((ArmorObjectImplementation*) impl)->initializeTransientMembers();
}

void ArmorObjectAdapter::updateCraftingValues(ManufactureSchematic* schematic) {
	((ArmorObjectImplementation*) impl)->updateCraftingValues(schematic);
}

bool ArmorObjectAdapter::isSpecial(const String& special) {
	return ((ArmorObjectImplementation*) impl)->isSpecial(special);
}

bool ArmorObjectAdapter::isVulnerable(const String& vulnerability) {
	return ((ArmorObjectImplementation*) impl)->isVulnerable(vulnerability);
}

bool ArmorObjectAdapter::isArmorObject() {
	return ((ArmorObjectImplementation*) impl)->isArmorObject();
}

void ArmorObjectAdapter::setRating(int rate) {
	((ArmorObjectImplementation*) impl)->setRating(rate);
}

int ArmorObjectAdapter::getRating() {
	return ((ArmorObjectImplementation*) impl)->getRating();
}

float ArmorObjectAdapter::getKinetic() {
	return ((ArmorObjectImplementation*) impl)->getKinetic();
}

void ArmorObjectAdapter::setKinetic(float value) {
	((ArmorObjectImplementation*) impl)->setKinetic(value);
}

float ArmorObjectAdapter::getEnergy() {
	return ((ArmorObjectImplementation*) impl)->getEnergy();
}

void ArmorObjectAdapter::setEnergy(float value) {
	((ArmorObjectImplementation*) impl)->setEnergy(value);
}

float ArmorObjectAdapter::getElectricity() {
	return ((ArmorObjectImplementation*) impl)->getElectricity();
}

void ArmorObjectAdapter::setElectricity(float value) {
	((ArmorObjectImplementation*) impl)->setElectricity(value);
}

float ArmorObjectAdapter::getStun() {
	return ((ArmorObjectImplementation*) impl)->getStun();
}

void ArmorObjectAdapter::setStun(float value) {
	((ArmorObjectImplementation*) impl)->setStun(value);
}

float ArmorObjectAdapter::getBlast() {
	return ((ArmorObjectImplementation*) impl)->getBlast();
}

void ArmorObjectAdapter::setBlast(float value) {
	((ArmorObjectImplementation*) impl)->setBlast(value);
}

float ArmorObjectAdapter::getHeat() {
	return ((ArmorObjectImplementation*) impl)->getHeat();
}

void ArmorObjectAdapter::setHeat(float value) {
	((ArmorObjectImplementation*) impl)->setHeat(value);
}

float ArmorObjectAdapter::getCold() {
	return ((ArmorObjectImplementation*) impl)->getCold();
}

void ArmorObjectAdapter::setCold(float value) {
	((ArmorObjectImplementation*) impl)->setCold(value);
}

float ArmorObjectAdapter::getAcid() {
	return ((ArmorObjectImplementation*) impl)->getAcid();
}

void ArmorObjectAdapter::setAcid(float value) {
	((ArmorObjectImplementation*) impl)->setAcid(value);
}

float ArmorObjectAdapter::getLightSaber() {
	return ((ArmorObjectImplementation*) impl)->getLightSaber();
}

void ArmorObjectAdapter::setLightSaber(float value) {
	((ArmorObjectImplementation*) impl)->setLightSaber(value);
}

int ArmorObjectAdapter::getHealthEncumbrance() {
	return ((ArmorObjectImplementation*) impl)->getHealthEncumbrance();
}

void ArmorObjectAdapter::setHealthEncumbrance(int encumber) {
	((ArmorObjectImplementation*) impl)->setHealthEncumbrance(encumber);
}

int ArmorObjectAdapter::getActionEncumbrance() {
	return ((ArmorObjectImplementation*) impl)->getActionEncumbrance();
}

void ArmorObjectAdapter::setActionEncumbrance(int encumber) {
	((ArmorObjectImplementation*) impl)->setActionEncumbrance(encumber);
}

int ArmorObjectAdapter::getMindEncumbrance() {
	return ((ArmorObjectImplementation*) impl)->getMindEncumbrance();
}

void ArmorObjectAdapter::setMindEncumbrance(int encumber) {
	((ArmorObjectImplementation*) impl)->setMindEncumbrance(encumber);
}

/*
 *	ArmorObjectHelper
 */

ArmorObjectHelper* ArmorObjectHelper::staticInitializer = ArmorObjectHelper::instance();

ArmorObjectHelper::ArmorObjectHelper() {
	className = "ArmorObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void ArmorObjectHelper::finalizeHelper() {
	ArmorObjectHelper::finalize();
}

DistributedObject* ArmorObjectHelper::instantiateObject() {
	return new ArmorObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* ArmorObjectHelper::instantiateServant() {
	return new ArmorObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ArmorObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ArmorObjectAdapter((ArmorObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

