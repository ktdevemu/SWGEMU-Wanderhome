/*
 *	server/zone/objects/mission/MissionObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "MissionObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/waypoint/WaypointObject.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/mission/MissionObserver.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/objects/mission/MissionObjective.h"

/*
 *	MissionObjectStub
 */

MissionObject::MissionObject() : IntangibleObject(DummyConstructorParameter::instance()) {
	_impl = new MissionObjectImplementation();
	_impl->_setStub(this);
}

MissionObject::MissionObject(DummyConstructorParameter* param) : IntangibleObject(param) {
}

MissionObject::~MissionObject() {
}


void MissionObject::createWaypoint() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->createWaypoint();
}

void MissionObject::destroyObjectFromDatabase(bool destroyContainedObjects) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addBooleanParameter(destroyContainedObjects);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->destroyObjectFromDatabase(destroyContainedObjects);
}

void MissionObject::updateToDatabaseAllObjects(bool startTask) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addBooleanParameter(startTask);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->updateToDatabaseAllObjects(startTask);
}

void MissionObject::setRefreshCounter(int ctr, bool notifyClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addSignedIntParameter(ctr);
		method.addBooleanParameter(notifyClient);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setRefreshCounter(ctr, notifyClient);
}

void MissionObject::setTypeCRC(unsigned int crc, bool notifyClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addUnsignedIntParameter(crc);
		method.addBooleanParameter(notifyClient);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setTypeCRC(crc, notifyClient);
}

void MissionObject::initializeTransientMembers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->initializeTransientMembers();
}

void MissionObject::sendBaselinesTo(SceneObject* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->sendBaselinesTo(player);
}

void MissionObject::setMissionDescription(const String& file, const String& id, bool notifyClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addAsciiParameter(file);
		method.addAsciiParameter(id);
		method.addBooleanParameter(notifyClient);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setMissionDescription(file, id, notifyClient);
}

void MissionObject::setMissionTitle(const String& file, const String& id, bool notifyClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addAsciiParameter(file);
		method.addAsciiParameter(id);
		method.addBooleanParameter(notifyClient);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setMissionTitle(file, id, notifyClient);
}

void MissionObject::setMissionTargetName(const String& target, bool notifyClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addAsciiParameter(target);
		method.addBooleanParameter(notifyClient);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setMissionTargetName(target, notifyClient);
}

void MissionObject::setMissionDifficulty(int difficulty, bool notifyClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addSignedIntParameter(difficulty);
		method.addBooleanParameter(notifyClient);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setMissionDifficulty(difficulty, notifyClient);
}

void MissionObject::setRewardCredits(int creds, bool notifyClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addSignedIntParameter(creds);
		method.addBooleanParameter(notifyClient);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setRewardCredits(creds, notifyClient);
}

void MissionObject::setTargetTemplateCRC(unsigned int crc, bool notifyClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addUnsignedIntParameter(crc);
		method.addBooleanParameter(notifyClient);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setTargetTemplateCRC(crc, notifyClient);
}

void MissionObject::setStartPosition(float posX, float posY, unsigned int planetCRC, bool notifyClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addFloatParameter(posX);
		method.addFloatParameter(posY);
		method.addUnsignedIntParameter(planetCRC);
		method.addBooleanParameter(notifyClient);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setStartPosition(posX, posY, planetCRC, notifyClient);
}

void MissionObject::abort() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->abort();
}

void MissionObject::setMissionObjective(MissionObjective* obj) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);
		method.addObjectParameter(obj);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setMissionObjective(obj);
}

float MissionObject::getStartPositionX() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);

		return method.executeWithFloatReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getStartPositionX();
}

float MissionObject::getStartPositionY() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);

		return method.executeWithFloatReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getStartPositionY();
}

unsigned int MissionObject::getStartPlanetCRC() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getStartPlanetCRC();
}

WaypointObject* MissionObject::getWaypointToMission() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);

		return (WaypointObject*) method.executeWithObjectReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getWaypointToMission();
}

unsigned int MissionObject::getTypeCRC() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getTypeCRC();
}

int MissionObject::getRewardCredits() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);

		return method.executeWithSignedIntReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getRewardCredits();
}

UnicodeString MissionObject::getCreatorName() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);

		method.executeWithUnicodeReturn(_return_getCreatorName);
		return _return_getCreatorName;
	} else
		return ((MissionObjectImplementation*) _impl)->getCreatorName();
}

int MissionObject::getDifficultyLevel() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);

		return method.executeWithSignedIntReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getDifficultyLevel();
}

StringId* MissionObject::getMissionDescription() {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((MissionObjectImplementation*) _impl)->getMissionDescription();
}

StringId* MissionObject::getMissionTitle() {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((MissionObjectImplementation*) _impl)->getMissionTitle();
}

String MissionObject::getTargetName() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);

		method.executeWithAsciiReturn(_return_getTargetName);
		return _return_getTargetName;
	} else
		return ((MissionObjectImplementation*) _impl)->getTargetName();
}

int MissionObject::getRefreshCounter() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);

		return method.executeWithSignedIntReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getRefreshCounter();
}

unsigned int MissionObject::getTargetTemplateCRC() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getTargetTemplateCRC();
}

bool MissionObject::isSurveyMission() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);

		return method.executeWithBooleanReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->isSurveyMission();
}

bool MissionObject::isMissionObject() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);

		return method.executeWithBooleanReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->isMissionObject();
}

/*
 *	MissionObjectImplementation
 */

MissionObjectImplementation::MissionObjectImplementation(DummyConstructorParameter* param) : IntangibleObjectImplementation(param) {
	_initializeImplementation();
}

MissionObjectImplementation::~MissionObjectImplementation() {
}


void MissionObjectImplementation::finalize() {
}

void MissionObjectImplementation::_initializeImplementation() {
	_setClassHelper(MissionObjectHelper::instance());

	_serializationHelperMethod();
}

void MissionObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (MissionObject*) stub;
	IntangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* MissionObjectImplementation::_getStub() {
	return _this;
}

MissionObjectImplementation::operator const MissionObject*() {
	return _this;
}

void MissionObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void MissionObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void MissionObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void MissionObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void MissionObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void MissionObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void MissionObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void MissionObjectImplementation::_serializationHelperMethod() {
	IntangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("MissionObject");

	addSerializableVariable("waypointToMission", &waypointToMission);
	addSerializableVariable("missionObjective", &missionObjective);
	addSerializableVariable("typeCRC", &typeCRC);
	addSerializableVariable("difficultyLevel", &difficultyLevel);
	addSerializableVariable("creatorName", &creatorName);
	addSerializableVariable("rewardCredits", &rewardCredits);
	addSerializableVariable("startPositionX", &startPositionX);
	addSerializableVariable("startPositionY", &startPositionY);
	addSerializableVariable("startPlanetCRC", &startPlanetCRC);
	addSerializableVariable("missionDescription", &missionDescription);
	addSerializableVariable("missionTitle", &missionTitle);
	addSerializableVariable("refreshCounter", &refreshCounter);
	addSerializableVariable("targetName", &targetName);
	addSerializableVariable("targetTemplateCRC", &targetTemplateCRC);
}

MissionObjectImplementation::MissionObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/mission/MissionObject.idl(98):  		typeCRC = SURVEY;
	typeCRC = SURVEY;
	// server/zone/objects/mission/MissionObject.idl(100):  		refreshCounter = 0;
	refreshCounter = 0;
	// server/zone/objects/mission/MissionObject.idl(102):  		targetTemplateCRC = 2640304325;
	targetTemplateCRC = 2640304325;
	// server/zone/objects/mission/MissionObject.idl(104):  		missionDescription.setStringId("mission/mission_npc_survey_neutral_easy", "m1o");
	(&missionDescription)->setStringId("mission/mission_npc_survey_neutral_easy", "m1o");
	// server/zone/objects/mission/MissionObject.idl(105):  		missionTitle.setStringId("mission/mission_npc_survey_neutral_easy", "m1t");
	(&missionTitle)->setStringId("mission/mission_npc_survey_neutral_easy", "m1t");
	// server/zone/objects/mission/MissionObject.idl(106):  		targetName = "Testing target name";
	targetName = "Testing target name";
	// server/zone/objects/mission/MissionObject.idl(107):  		difficultyLevel = 50;
	difficultyLevel = 50;
	// server/zone/objects/mission/MissionObject.idl(109):  		rewardCredits = 100;
	rewardCredits = 100;
	// server/zone/objects/mission/MissionObject.idl(111):  		startPositionX = 0;
	startPositionX = 0;
	// server/zone/objects/mission/MissionObject.idl(112):  		startPositionY = 0;
	startPositionY = 0;
	// server/zone/objects/mission/MissionObject.idl(113):  		startPlanetCRC = 0;
	startPlanetCRC = 0;
	// server/zone/objects/mission/MissionObject.idl(115):  		Logger.setLoggingName("MissionObject");
	Logger::setLoggingName("MissionObject");
}

void MissionObjectImplementation::abort() {
	// server/zone/objects/mission/MissionObject.idl(152):  	}
	if (missionObjective != NULL)	// server/zone/objects/mission/MissionObject.idl(153):  			missionObjective.abort();
	missionObjective->abort();
}

void MissionObjectImplementation::setMissionObjective(MissionObjective* obj) {
	// server/zone/objects/mission/MissionObject.idl(157):  		missionObjective = obj;
	missionObjective = obj;
}

float MissionObjectImplementation::getStartPositionX() {
	// server/zone/objects/mission/MissionObject.idl(161):  		return startPositionX;
	return startPositionX;
}

float MissionObjectImplementation::getStartPositionY() {
	// server/zone/objects/mission/MissionObject.idl(165):  		return startPositionY;
	return startPositionY;
}

unsigned int MissionObjectImplementation::getStartPlanetCRC() {
	// server/zone/objects/mission/MissionObject.idl(169):  		return startPlanetCRC;
	return startPlanetCRC;
}

WaypointObject* MissionObjectImplementation::getWaypointToMission() {
	// server/zone/objects/mission/MissionObject.idl(173):  		return waypointToMission;
	return waypointToMission;
}

unsigned int MissionObjectImplementation::getTypeCRC() {
	// server/zone/objects/mission/MissionObject.idl(181):  		return typeCRC;
	return typeCRC;
}

int MissionObjectImplementation::getRewardCredits() {
	// server/zone/objects/mission/MissionObject.idl(185):  		return rewardCredits;
	return rewardCredits;
}

UnicodeString MissionObjectImplementation::getCreatorName() {
	// server/zone/objects/mission/MissionObject.idl(189):  		return creatorName;
	return creatorName;
}

int MissionObjectImplementation::getDifficultyLevel() {
	// server/zone/objects/mission/MissionObject.idl(193):  		return difficultyLevel;
	return difficultyLevel;
}

StringId* MissionObjectImplementation::getMissionDescription() {
	// server/zone/objects/mission/MissionObject.idl(198):  		return missionDescription;
	return (&missionDescription);
}

StringId* MissionObjectImplementation::getMissionTitle() {
	// server/zone/objects/mission/MissionObject.idl(203):  		return missionTitle;
	return (&missionTitle);
}

String MissionObjectImplementation::getTargetName() {
	// server/zone/objects/mission/MissionObject.idl(207):  		return targetName;
	return targetName;
}

int MissionObjectImplementation::getRefreshCounter() {
	// server/zone/objects/mission/MissionObject.idl(211):  		return refreshCounter;
	return refreshCounter;
}

unsigned int MissionObjectImplementation::getTargetTemplateCRC() {
	// server/zone/objects/mission/MissionObject.idl(215):  		return targetTemplateCRC;
	return targetTemplateCRC;
}

bool MissionObjectImplementation::isSurveyMission() {
	// server/zone/objects/mission/MissionObject.idl(219):  		return typeCRC == this.SURVEY;
	return typeCRC == _this->SURVEY;
}

bool MissionObjectImplementation::isMissionObject() {
	// server/zone/objects/mission/MissionObject.idl(223):  		return true;
	return true;
}

/*
 *	MissionObjectAdapter
 */

MissionObjectAdapter::MissionObjectAdapter(MissionObjectImplementation* obj) : IntangibleObjectAdapter(obj) {
}

Packet* MissionObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		createWaypoint();
		break;
	case 7:
		destroyObjectFromDatabase(inv->getBooleanParameter());
		break;
	case 8:
		updateToDatabaseAllObjects(inv->getBooleanParameter());
		break;
	case 9:
		setRefreshCounter(inv->getSignedIntParameter(), inv->getBooleanParameter());
		break;
	case 10:
		setTypeCRC(inv->getUnsignedIntParameter(), inv->getBooleanParameter());
		break;
	case 11:
		initializeTransientMembers();
		break;
	case 12:
		sendBaselinesTo((SceneObject*) inv->getObjectParameter());
		break;
	case 13:
		setMissionDescription(inv->getAsciiParameter(_param0_setMissionDescription__String_String_bool_), inv->getAsciiParameter(_param1_setMissionDescription__String_String_bool_), inv->getBooleanParameter());
		break;
	case 14:
		setMissionTitle(inv->getAsciiParameter(_param0_setMissionTitle__String_String_bool_), inv->getAsciiParameter(_param1_setMissionTitle__String_String_bool_), inv->getBooleanParameter());
		break;
	case 15:
		setMissionTargetName(inv->getAsciiParameter(_param0_setMissionTargetName__String_bool_), inv->getBooleanParameter());
		break;
	case 16:
		setMissionDifficulty(inv->getSignedIntParameter(), inv->getBooleanParameter());
		break;
	case 17:
		setRewardCredits(inv->getSignedIntParameter(), inv->getBooleanParameter());
		break;
	case 18:
		setTargetTemplateCRC(inv->getUnsignedIntParameter(), inv->getBooleanParameter());
		break;
	case 19:
		setStartPosition(inv->getFloatParameter(), inv->getFloatParameter(), inv->getUnsignedIntParameter(), inv->getBooleanParameter());
		break;
	case 20:
		abort();
		break;
	case 21:
		setMissionObjective((MissionObjective*) inv->getObjectParameter());
		break;
	case 22:
		resp->insertFloat(getStartPositionX());
		break;
	case 23:
		resp->insertFloat(getStartPositionY());
		break;
	case 24:
		resp->insertInt(getStartPlanetCRC());
		break;
	case 25:
		resp->insertLong(getWaypointToMission()->_getObjectID());
		break;
	case 26:
		resp->insertInt(getTypeCRC());
		break;
	case 27:
		resp->insertSignedInt(getRewardCredits());
		break;
	case 28:
		resp->insertUnicode(getCreatorName());
		break;
	case 29:
		resp->insertSignedInt(getDifficultyLevel());
		break;
	case 30:
		resp->insertAscii(getTargetName());
		break;
	case 31:
		resp->insertSignedInt(getRefreshCounter());
		break;
	case 32:
		resp->insertInt(getTargetTemplateCRC());
		break;
	case 33:
		resp->insertBoolean(isSurveyMission());
		break;
	case 34:
		resp->insertBoolean(isMissionObject());
		break;
	default:
		return NULL;
	}

	return resp;
}

void MissionObjectAdapter::createWaypoint() {
	((MissionObjectImplementation*) impl)->createWaypoint();
}

void MissionObjectAdapter::destroyObjectFromDatabase(bool destroyContainedObjects) {
	((MissionObjectImplementation*) impl)->destroyObjectFromDatabase(destroyContainedObjects);
}

void MissionObjectAdapter::updateToDatabaseAllObjects(bool startTask) {
	((MissionObjectImplementation*) impl)->updateToDatabaseAllObjects(startTask);
}

void MissionObjectAdapter::setRefreshCounter(int ctr, bool notifyClient) {
	((MissionObjectImplementation*) impl)->setRefreshCounter(ctr, notifyClient);
}

void MissionObjectAdapter::setTypeCRC(unsigned int crc, bool notifyClient) {
	((MissionObjectImplementation*) impl)->setTypeCRC(crc, notifyClient);
}

void MissionObjectAdapter::initializeTransientMembers() {
	((MissionObjectImplementation*) impl)->initializeTransientMembers();
}

void MissionObjectAdapter::sendBaselinesTo(SceneObject* player) {
	((MissionObjectImplementation*) impl)->sendBaselinesTo(player);
}

void MissionObjectAdapter::setMissionDescription(const String& file, const String& id, bool notifyClient) {
	((MissionObjectImplementation*) impl)->setMissionDescription(file, id, notifyClient);
}

void MissionObjectAdapter::setMissionTitle(const String& file, const String& id, bool notifyClient) {
	((MissionObjectImplementation*) impl)->setMissionTitle(file, id, notifyClient);
}

void MissionObjectAdapter::setMissionTargetName(const String& target, bool notifyClient) {
	((MissionObjectImplementation*) impl)->setMissionTargetName(target, notifyClient);
}

void MissionObjectAdapter::setMissionDifficulty(int difficulty, bool notifyClient) {
	((MissionObjectImplementation*) impl)->setMissionDifficulty(difficulty, notifyClient);
}

void MissionObjectAdapter::setRewardCredits(int creds, bool notifyClient) {
	((MissionObjectImplementation*) impl)->setRewardCredits(creds, notifyClient);
}

void MissionObjectAdapter::setTargetTemplateCRC(unsigned int crc, bool notifyClient) {
	((MissionObjectImplementation*) impl)->setTargetTemplateCRC(crc, notifyClient);
}

void MissionObjectAdapter::setStartPosition(float posX, float posY, unsigned int planetCRC, bool notifyClient) {
	((MissionObjectImplementation*) impl)->setStartPosition(posX, posY, planetCRC, notifyClient);
}

void MissionObjectAdapter::abort() {
	((MissionObjectImplementation*) impl)->abort();
}

void MissionObjectAdapter::setMissionObjective(MissionObjective* obj) {
	((MissionObjectImplementation*) impl)->setMissionObjective(obj);
}

float MissionObjectAdapter::getStartPositionX() {
	return ((MissionObjectImplementation*) impl)->getStartPositionX();
}

float MissionObjectAdapter::getStartPositionY() {
	return ((MissionObjectImplementation*) impl)->getStartPositionY();
}

unsigned int MissionObjectAdapter::getStartPlanetCRC() {
	return ((MissionObjectImplementation*) impl)->getStartPlanetCRC();
}

WaypointObject* MissionObjectAdapter::getWaypointToMission() {
	return ((MissionObjectImplementation*) impl)->getWaypointToMission();
}

unsigned int MissionObjectAdapter::getTypeCRC() {
	return ((MissionObjectImplementation*) impl)->getTypeCRC();
}

int MissionObjectAdapter::getRewardCredits() {
	return ((MissionObjectImplementation*) impl)->getRewardCredits();
}

UnicodeString MissionObjectAdapter::getCreatorName() {
	return ((MissionObjectImplementation*) impl)->getCreatorName();
}

int MissionObjectAdapter::getDifficultyLevel() {
	return ((MissionObjectImplementation*) impl)->getDifficultyLevel();
}

String MissionObjectAdapter::getTargetName() {
	return ((MissionObjectImplementation*) impl)->getTargetName();
}

int MissionObjectAdapter::getRefreshCounter() {
	return ((MissionObjectImplementation*) impl)->getRefreshCounter();
}

unsigned int MissionObjectAdapter::getTargetTemplateCRC() {
	return ((MissionObjectImplementation*) impl)->getTargetTemplateCRC();
}

bool MissionObjectAdapter::isSurveyMission() {
	return ((MissionObjectImplementation*) impl)->isSurveyMission();
}

bool MissionObjectAdapter::isMissionObject() {
	return ((MissionObjectImplementation*) impl)->isMissionObject();
}

/*
 *	MissionObjectHelper
 */

MissionObjectHelper* MissionObjectHelper::staticInitializer = MissionObjectHelper::instance();

MissionObjectHelper::MissionObjectHelper() {
	className = "MissionObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void MissionObjectHelper::finalizeHelper() {
	MissionObjectHelper::finalize();
}

DistributedObject* MissionObjectHelper::instantiateObject() {
	return new MissionObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* MissionObjectHelper::instantiateServant() {
	return new MissionObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* MissionObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new MissionObjectAdapter((MissionObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

