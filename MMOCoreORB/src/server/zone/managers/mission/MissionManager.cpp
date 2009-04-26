/*
 *	server/zone/managers/mission/MissionManager.cpp generated by engine3 IDL compiler 0.55
 */

#include "MissionManager.h"

#include "MissionManagerImplementation.h"

#include "../../objects/player/Player.h"

#include "../../objects/mission/MissionObject.h"

#include "../../objects/tangible/TangibleObject.h"

#include "server/zone/ZoneServer.h"

/*
 *	MissionManagerStub
 */

MissionManager::MissionManager(ZoneServer* zs, ZoneProcessServerImplementation* ps) {
	_impl = new MissionManagerImplementation(zs, ps);
	_impl->_setStub(this);
}

MissionManager::MissionManager(DummyConstructorParameter* param) {
	_impl = NULL;
}

MissionManager::~MissionManager() {
}

void MissionManager::init() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->init();
}

void MissionManager::unloadManager() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->unloadManager();
}

void MissionManager::removeMissions() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->removeMissions();
}

MissionObject* MissionManager::poolMission(MissionObject* miso, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(miso);
		method.addBooleanParameter(doLock);

		return (MissionObject*) method.executeWithObjectReturn();
	} else
		return ((MissionManagerImplementation*) _impl)->poolMission(miso, doLock);
}

void MissionManager::instanceMission(Player* player, MissionObject* misoCopy, const String& objectives, bool isNew) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(player);
		method.addObjectParameter(misoCopy);
		method.addAsciiParameter(objectives);
		method.addBooleanParameter(isNew);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->instanceMission(player, misoCopy, objectives, isNew);
}

void MissionManager::setupHardcodeMissions() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->setupHardcodeMissions();
}

void MissionManager::sendTerminalData(Player* player, int termBitmask, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addObjectParameter(player);
		method.addSignedIntParameter(termBitmask);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->sendTerminalData(player, termBitmask, doLock);
}

void MissionManager::sendMission(Player* player, String& tKey, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addObjectParameter(player);
		method.addAsciiParameter(tKey);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->sendMission(player, tKey, doLock);
}

void MissionManager::doMissionAccept(Player* player, unsigned long long oid, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addObjectParameter(player);
		method.addUnsignedLongParameter(oid);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->doMissionAccept(player, oid, doLock);
}

void MissionManager::doMissionComplete(Player* player, const String& tKey, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addObjectParameter(player);
		method.addAsciiParameter(tKey);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->doMissionComplete(player, tKey, doLock);
}

void MissionManager::doMissionAbort(Player* player, unsigned long long oid, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addObjectParameter(player);
		method.addUnsignedLongParameter(oid);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->doMissionAbort(player, oid, doLock);
}

void MissionManager::doMissionAbort(Player* player, const String& tKey, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addObjectParameter(player);
		method.addAsciiParameter(tKey);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->doMissionAbort(player, tKey, doLock);
}

bool MissionManager::evalMission(Player* player, const String& tKey, String& retSay) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addObjectParameter(player);
		method.addAsciiParameter(tKey);
		method.addAsciiParameter(retSay);

		return method.executeWithBooleanReturn();
	} else
		return ((MissionManagerImplementation*) _impl)->evalMission(player, tKey, retSay);
}

bool MissionManager::evalMission(Player* player, MissionObject* miso) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addObjectParameter(player);
		method.addObjectParameter(miso);

		return method.executeWithBooleanReturn();
	} else
		return ((MissionManagerImplementation*) _impl)->evalMission(player, miso);
}

void MissionManager::loadPlayerMissions(Player* player, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);
		method.addObjectParameter(player);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->loadPlayerMissions(player, doLock);
}

void MissionManager::savePlayerMission(Player* player, MissionObject* miso) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);
		method.addObjectParameter(player);
		method.addObjectParameter(miso);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->savePlayerMission(player, miso);
}

void MissionManager::savePlayerKeys(Player* player, const String& curMisoKeys, const String& finMisoKeys) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);
		method.addObjectParameter(player);
		method.addAsciiParameter(curMisoKeys);
		method.addAsciiParameter(finMisoKeys);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->savePlayerKeys(player, curMisoKeys, finMisoKeys);
}

void MissionManager::clearPlayerMissions(Player* target, bool lockTarget) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);
		method.addObjectParameter(target);
		method.addBooleanParameter(lockTarget);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->clearPlayerMissions(target, lockTarget);
}

void MissionManager::loadMissionScripts() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->loadMissionScripts();
}

void MissionManager::registerFunctions() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->registerFunctions();
}

void MissionManager::registerGlobals() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->registerGlobals();
}

/*
 *	MissionManagerAdapter
 */

MissionManagerAdapter::MissionManagerAdapter(MissionManagerImplementation* obj) : DistributedObjectAdapter((DistributedObjectServant*) obj) {
}

Packet* MissionManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		init();
		break;
	case 7:
		unloadManager();
		break;
	case 8:
		removeMissions();
		break;
	case 9:
		resp->insertLong(poolMission((MissionObject*) inv->getObjectParameter(), inv->getBooleanParameter())->_getObjectID());
		break;
	case 10:
		instanceMission((Player*) inv->getObjectParameter(), (MissionObject*) inv->getObjectParameter(), inv->getAsciiParameter(_param2_instanceMission__Player_MissionObject_String_bool_), inv->getBooleanParameter());
		break;
	case 11:
		setupHardcodeMissions();
		break;
	case 12:
		sendTerminalData((Player*) inv->getObjectParameter(), inv->getSignedIntParameter(), inv->getBooleanParameter());
		break;
	case 13:
		sendMission((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_sendMission__Player_String_bool_), inv->getBooleanParameter());
		break;
	case 14:
		doMissionAccept((Player*) inv->getObjectParameter(), inv->getUnsignedLongParameter(), inv->getBooleanParameter());
		break;
	case 15:
		doMissionComplete((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_doMissionComplete__Player_String_bool_), inv->getBooleanParameter());
		break;
	case 16:
		doMissionAbort((Player*) inv->getObjectParameter(), inv->getUnsignedLongParameter(), inv->getBooleanParameter());
		break;
	case 17:
		doMissionAbort((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_doMissionAbort__Player_String_bool_), inv->getBooleanParameter());
		break;
	case 18:
		resp->insertBoolean(evalMission((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_evalMission__Player_String_String_), inv->getAsciiParameter(_param2_evalMission__Player_String_String_)));
		break;
	case 19:
		resp->insertBoolean(evalMission((Player*) inv->getObjectParameter(), (MissionObject*) inv->getObjectParameter()));
		break;
	case 20:
		loadPlayerMissions((Player*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 21:
		savePlayerMission((Player*) inv->getObjectParameter(), (MissionObject*) inv->getObjectParameter());
		break;
	case 22:
		savePlayerKeys((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_savePlayerKeys__Player_String_String_), inv->getAsciiParameter(_param2_savePlayerKeys__Player_String_String_));
		break;
	case 23:
		clearPlayerMissions((Player*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 24:
		loadMissionScripts();
		break;
	case 25:
		registerFunctions();
		break;
	case 26:
		registerGlobals();
		break;
	default:
		return NULL;
	}

	return resp;
}

void MissionManagerAdapter::init() {
	return ((MissionManagerImplementation*) impl)->init();
}

void MissionManagerAdapter::unloadManager() {
	return ((MissionManagerImplementation*) impl)->unloadManager();
}

void MissionManagerAdapter::removeMissions() {
	return ((MissionManagerImplementation*) impl)->removeMissions();
}

MissionObject* MissionManagerAdapter::poolMission(MissionObject* miso, bool doLock) {
	return ((MissionManagerImplementation*) impl)->poolMission(miso, doLock);
}

void MissionManagerAdapter::instanceMission(Player* player, MissionObject* misoCopy, const String& objectives, bool isNew) {
	return ((MissionManagerImplementation*) impl)->instanceMission(player, misoCopy, objectives, isNew);
}

void MissionManagerAdapter::setupHardcodeMissions() {
	return ((MissionManagerImplementation*) impl)->setupHardcodeMissions();
}

void MissionManagerAdapter::sendTerminalData(Player* player, int termBitmask, bool doLock) {
	return ((MissionManagerImplementation*) impl)->sendTerminalData(player, termBitmask, doLock);
}

void MissionManagerAdapter::sendMission(Player* player, String& tKey, bool doLock) {
	return ((MissionManagerImplementation*) impl)->sendMission(player, tKey, doLock);
}

void MissionManagerAdapter::doMissionAccept(Player* player, unsigned long long oid, bool doLock) {
	return ((MissionManagerImplementation*) impl)->doMissionAccept(player, oid, doLock);
}

void MissionManagerAdapter::doMissionComplete(Player* player, const String& tKey, bool doLock) {
	return ((MissionManagerImplementation*) impl)->doMissionComplete(player, tKey, doLock);
}

void MissionManagerAdapter::doMissionAbort(Player* player, unsigned long long oid, bool doLock) {
	return ((MissionManagerImplementation*) impl)->doMissionAbort(player, oid, doLock);
}

void MissionManagerAdapter::doMissionAbort(Player* player, const String& tKey, bool doLock) {
	return ((MissionManagerImplementation*) impl)->doMissionAbort(player, tKey, doLock);
}

bool MissionManagerAdapter::evalMission(Player* player, const String& tKey, String& retSay) {
	return ((MissionManagerImplementation*) impl)->evalMission(player, tKey, retSay);
}

bool MissionManagerAdapter::evalMission(Player* player, MissionObject* miso) {
	return ((MissionManagerImplementation*) impl)->evalMission(player, miso);
}

void MissionManagerAdapter::loadPlayerMissions(Player* player, bool doLock) {
	return ((MissionManagerImplementation*) impl)->loadPlayerMissions(player, doLock);
}

void MissionManagerAdapter::savePlayerMission(Player* player, MissionObject* miso) {
	return ((MissionManagerImplementation*) impl)->savePlayerMission(player, miso);
}

void MissionManagerAdapter::savePlayerKeys(Player* player, const String& curMisoKeys, const String& finMisoKeys) {
	return ((MissionManagerImplementation*) impl)->savePlayerKeys(player, curMisoKeys, finMisoKeys);
}

void MissionManagerAdapter::clearPlayerMissions(Player* target, bool lockTarget) {
	return ((MissionManagerImplementation*) impl)->clearPlayerMissions(target, lockTarget);
}

void MissionManagerAdapter::loadMissionScripts() {
	return ((MissionManagerImplementation*) impl)->loadMissionScripts();
}

void MissionManagerAdapter::registerFunctions() {
	return ((MissionManagerImplementation*) impl)->registerFunctions();
}

void MissionManagerAdapter::registerGlobals() {
	return ((MissionManagerImplementation*) impl)->registerGlobals();
}

/*
 *	MissionManagerHelper
 */

MissionManagerHelper* MissionManagerHelper::staticInitializer = MissionManagerHelper::instance();

MissionManagerHelper::MissionManagerHelper() {
	className = "MissionManager";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void MissionManagerHelper::finalizeHelper() {
	MissionManagerHelper::finalize();
}

DistributedObject* MissionManagerHelper::instantiateObject() {
	return new MissionManager(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* MissionManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new MissionManagerAdapter((MissionManagerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	MissionManagerServant
 */

MissionManagerServant::MissionManagerServant() {
	_classHelper = MissionManagerHelper::instance();
}

MissionManagerServant::~MissionManagerServant() {
}

void MissionManagerServant::_setStub(DistributedObjectStub* stub) {
	_this = (MissionManager*) stub;
}

DistributedObjectStub* MissionManagerServant::_getStub() {
	return _this;
}

