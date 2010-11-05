/*
 *	server/zone/managers/guild/GuildManager.cpp generated by engine3 IDL compiler 0.60
 */

#include "GuildManager.h"

#include "server/zone/ZoneProcessServer.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/objects/guild/GuildObject.h"

#include "server/zone/objects/tangible/terminal/guild/GuildTerminal.h"

#include "server/zone/objects/player/PlayerCreature.h"

/*
 *	GuildManagerStub
 */

GuildManager::GuildManager(ZoneServer* serv, ZoneProcessServer* proc) : ManagedService(DummyConstructorParameter::instance()) {
	GuildManagerImplementation* _implementation = new GuildManagerImplementation(serv, proc);
	_impl = _implementation;
	_impl->_setStub(this);
}

GuildManager::GuildManager(DummyConstructorParameter* param) : ManagedService(param) {
}

GuildManager::~GuildManager() {
}


void GuildManager::sendGuildListTo(PlayerCreature* player, const String& guildFilter) {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(player);
		method.addAsciiParameter(guildFilter);

		method.executeWithVoidReturn();
	} else
		_implementation->sendGuildListTo(player, guildFilter);
}

void GuildManager::addPendingGuild(unsigned long long playerID, const String& guildName) {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addUnsignedLongParameter(playerID);
		method.addAsciiParameter(guildName);

		method.executeWithVoidReturn();
	} else
		_implementation->addPendingGuild(playerID, guildName);
}

void GuildManager::removePendingGuild(unsigned long long playerID) {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addUnsignedLongParameter(playerID);

		method.executeWithVoidReturn();
	} else
		_implementation->removePendingGuild(playerID);
}

String GuildManager::getPendingGuildName(unsigned long long playerID) {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addUnsignedLongParameter(playerID);

		method.executeWithAsciiReturn(_return_getPendingGuildName);
		return _return_getPendingGuildName;
	} else
		return _implementation->getPendingGuildName(playerID);
}

void GuildManager::addSponsoredPlayer(unsigned long long playerID, GuildObject* guild) {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addUnsignedLongParameter(playerID);
		method.addObjectParameter(guild);

		method.executeWithVoidReturn();
	} else
		_implementation->addSponsoredPlayer(playerID, guild);
}

void GuildManager::removeSponsoredPlayer(unsigned long long playerID) {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addUnsignedLongParameter(playerID);

		method.executeWithVoidReturn();
	} else
		_implementation->removeSponsoredPlayer(playerID);
}

bool GuildManager::isCreatingGuild(unsigned long long playerID) {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addUnsignedLongParameter(playerID);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isCreatingGuild(playerID);
}

bool GuildManager::isSponsoredPlayer(unsigned long long playerID) {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addUnsignedLongParameter(playerID);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isSponsoredPlayer(playerID);
}

GuildObject* GuildManager::getSponsoredGuild(unsigned long long playerID) {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addUnsignedLongParameter(playerID);

		return (GuildObject*) method.executeWithObjectReturn();
	} else
		return _implementation->getSponsoredGuild(playerID);
}

void GuildManager::sendBaselinesTo(PlayerCreature* player) {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendBaselinesTo(player);
}

void GuildManager::loadGuilds() {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);

		method.executeWithVoidReturn();
	} else
		_implementation->loadGuilds();
}

void GuildManager::sendGuildCreateNameTo(PlayerCreature* player, GuildTerminal* guildTerminal) {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addObjectParameter(player);
		method.addObjectParameter(guildTerminal);

		method.executeWithVoidReturn();
	} else
		_implementation->sendGuildCreateNameTo(player, guildTerminal);
}

void GuildManager::sendGuildCreateAbbrevTo(PlayerCreature* player, GuildTerminal* guildTerminal) {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addObjectParameter(player);
		method.addObjectParameter(guildTerminal);

		method.executeWithVoidReturn();
	} else
		_implementation->sendGuildCreateAbbrevTo(player, guildTerminal);
}

void GuildManager::sendGuildInformationTo(PlayerCreature* player, GuildObject* guild, GuildTerminal* guildTerminal) {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addObjectParameter(player);
		method.addObjectParameter(guild);
		method.addObjectParameter(guildTerminal);

		method.executeWithVoidReturn();
	} else
		_implementation->sendGuildInformationTo(player, guild, guildTerminal);
}

void GuildManager::sendGuildMemberListTo(PlayerCreature* player, GuildObject* guild, GuildTerminal* guildTerminal) {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);
		method.addObjectParameter(player);
		method.addObjectParameter(guild);
		method.addObjectParameter(guildTerminal);

		method.executeWithVoidReturn();
	} else
		_implementation->sendGuildMemberListTo(player, guild, guildTerminal);
}

void GuildManager::sendGuildMemberOptionsTo(PlayerCreature* player, GuildObject* guild, unsigned long long memberID, GuildTerminal* guildTerminal) {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);
		method.addObjectParameter(player);
		method.addObjectParameter(guild);
		method.addUnsignedLongParameter(memberID);
		method.addObjectParameter(guildTerminal);

		method.executeWithVoidReturn();
	} else
		_implementation->sendGuildMemberOptionsTo(player, guild, memberID, guildTerminal);
}

void GuildManager::sendGuildDisbandConfirmTo(PlayerCreature* player, GuildObject* guild, GuildTerminal* guildTerminal) {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);
		method.addObjectParameter(player);
		method.addObjectParameter(guild);
		method.addObjectParameter(guildTerminal);

		method.executeWithVoidReturn();
	} else
		_implementation->sendGuildDisbandConfirmTo(player, guild, guildTerminal);
}

void GuildManager::sendGuildSponsoredListTo(PlayerCreature* player, GuildObject* guild, GuildTerminal* guildTerminal) {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);
		method.addObjectParameter(player);
		method.addObjectParameter(guild);
		method.addObjectParameter(guildTerminal);

		method.executeWithVoidReturn();
	} else
		_implementation->sendGuildSponsoredListTo(player, guild, guildTerminal);
}

void GuildManager::sendGuildSponsoredOptionsTo(PlayerCreature* player, GuildObject* guild, unsigned long long playerID, GuildTerminal* guildTerminal) {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);
		method.addObjectParameter(player);
		method.addObjectParameter(guild);
		method.addUnsignedLongParameter(playerID);
		method.addObjectParameter(guildTerminal);

		method.executeWithVoidReturn();
	} else
		_implementation->sendGuildSponsoredOptionsTo(player, guild, playerID, guildTerminal);
}

void GuildManager::sendGuildSponsorTo(PlayerCreature* player, GuildObject* guild, GuildTerminal* guildTerminal) {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);
		method.addObjectParameter(player);
		method.addObjectParameter(guild);
		method.addObjectParameter(guildTerminal);

		method.executeWithVoidReturn();
	} else
		_implementation->sendGuildSponsorTo(player, guild, guildTerminal);
}

void GuildManager::sendGuildSponsorVerifyTo(PlayerCreature* player, PlayerCreature* target) {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);
		method.addObjectParameter(player);
		method.addObjectParameter(target);

		method.executeWithVoidReturn();
	} else
		_implementation->sendGuildSponsorVerifyTo(player, target);
}

void GuildManager::sendGuildKickPromptTo(PlayerCreature* player, PlayerCreature* target) {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);
		method.addObjectParameter(player);
		method.addObjectParameter(target);

		method.executeWithVoidReturn();
	} else
		_implementation->sendGuildKickPromptTo(player, target);
}

void GuildManager::sendGuildSetTitleTo(PlayerCreature* player, PlayerCreature* target) {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);
		method.addObjectParameter(player);
		method.addObjectParameter(target);

		method.executeWithVoidReturn();
	} else
		_implementation->sendGuildSetTitleTo(player, target);
}

void GuildManager::sendMemberPermissionsTo(PlayerCreature* player, PlayerCreature* target) {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);
		method.addObjectParameter(player);
		method.addObjectParameter(target);

		method.executeWithVoidReturn();
	} else
		_implementation->sendMemberPermissionsTo(player, target);
}

bool GuildManager::validateGuildName(PlayerCreature* player, const String& guildName) {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);
		method.addObjectParameter(player);
		method.addAsciiParameter(guildName);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->validateGuildName(player, guildName);
}

bool GuildManager::validateGuildAbbrev(PlayerCreature* player, const String& guildAbbrev) {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);
		method.addObjectParameter(player);
		method.addAsciiParameter(guildAbbrev);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->validateGuildAbbrev(player, guildAbbrev);
}

bool GuildManager::guildNameExists(const String& guildName) {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);
		method.addAsciiParameter(guildName);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->guildNameExists(guildName);
}

bool GuildManager::guildAbbrevExists(const String& guildAbbrev) {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);
		method.addAsciiParameter(guildAbbrev);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->guildAbbrevExists(guildAbbrev);
}

GuildObject* GuildManager::createGuild(PlayerCreature* player, GuildTerminal* guildTerminal, const String& guildName, const String& guildAbbrev) {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);
		method.addObjectParameter(player);
		method.addObjectParameter(guildTerminal);
		method.addAsciiParameter(guildName);
		method.addAsciiParameter(guildAbbrev);

		return (GuildObject*) method.executeWithObjectReturn();
	} else
		return _implementation->createGuild(player, guildTerminal, guildName, guildAbbrev);
}

bool GuildManager::disbandGuild(PlayerCreature* player, GuildTerminal* guildTerminal) {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 35);
		method.addObjectParameter(player);
		method.addObjectParameter(guildTerminal);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->disbandGuild(player, guildTerminal);
}

void GuildManager::sponsorPlayer(PlayerCreature* player, GuildTerminal* guildTerminal, const String& playerName) {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 36);
		method.addObjectParameter(player);
		method.addObjectParameter(guildTerminal);
		method.addAsciiParameter(playerName);

		method.executeWithVoidReturn();
	} else
		_implementation->sponsorPlayer(player, guildTerminal, playerName);
}

void GuildManager::acceptSponsorshipRequest(PlayerCreature* player, PlayerCreature* target) {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 37);
		method.addObjectParameter(player);
		method.addObjectParameter(target);

		method.executeWithVoidReturn();
	} else
		_implementation->acceptSponsorshipRequest(player, target);
}

void GuildManager::acceptSponsoredPlayer(PlayerCreature* player, unsigned long long targetID) {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 38);
		method.addObjectParameter(player);
		method.addUnsignedLongParameter(targetID);

		method.executeWithVoidReturn();
	} else
		_implementation->acceptSponsoredPlayer(player, targetID);
}

void GuildManager::kickMember(PlayerCreature* player, PlayerCreature* target) {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 39);
		method.addObjectParameter(player);
		method.addObjectParameter(target);

		method.executeWithVoidReturn();
	} else
		_implementation->kickMember(player, target);
}

void GuildManager::leaveGuild(PlayerCreature* player, GuildObject* guild) {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 40);
		method.addObjectParameter(player);
		method.addObjectParameter(guild);

		method.executeWithVoidReturn();
	} else
		_implementation->leaveGuild(player, guild);
}

void GuildManager::setMemberTitle(PlayerCreature* player, PlayerCreature* target, const String& title) {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 41);
		method.addObjectParameter(player);
		method.addObjectParameter(target);
		method.addAsciiParameter(title);

		method.executeWithVoidReturn();
	} else
		_implementation->setMemberTitle(player, target, title);
}

void GuildManager::setAllegianceTo(PlayerCreature* player, unsigned long long targetID, GuildTerminal* guildTerminal) {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 42);
		method.addObjectParameter(player);
		method.addUnsignedLongParameter(targetID);
		method.addObjectParameter(guildTerminal);

		method.executeWithVoidReturn();
	} else
		_implementation->setAllegianceTo(player, targetID, guildTerminal);
}

void GuildManager::sendGuildMail(const String& subject, ParameterizedStringId& body, GuildObject* guild) {
	GuildManagerImplementation* _implementation = (GuildManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->sendGuildMail(subject, body, guild);
}

DistributedObjectServant* GuildManager::_getImplementation() {

	_updated = true;
	return _impl;
}

void GuildManager::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	GuildManagerImplementation
 */

GuildManagerImplementation::GuildManagerImplementation(DummyConstructorParameter* param) : ManagedServiceImplementation(param) {
	_initializeImplementation();
}


GuildManagerImplementation::~GuildManagerImplementation() {
}


void GuildManagerImplementation::finalize() {
}

void GuildManagerImplementation::_initializeImplementation() {
	_setClassHelper(GuildManagerHelper::instance());

	_serializationHelperMethod();
}

void GuildManagerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (GuildManager*) stub;
	ManagedServiceImplementation::_setStub(stub);
}

DistributedObjectStub* GuildManagerImplementation::_getStub() {
	return _this;
}

GuildManagerImplementation::operator const GuildManager*() {
	return _this;
}

void GuildManagerImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void GuildManagerImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void GuildManagerImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void GuildManagerImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void GuildManagerImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void GuildManagerImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void GuildManagerImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void GuildManagerImplementation::_serializationHelperMethod() {
	ManagedServiceImplementation::_serializationHelperMethod();

	_setClassName("GuildManager");

	addSerializableVariable("guildList", &guildList);
	addSerializableVariable("requiredMembers", &requiredMembers);
	addSerializableVariable("maximumMembers", &maximumMembers);
	addSerializableVariable("guildUpdateInterval", &guildUpdateInterval);
}

GuildManagerImplementation::GuildManagerImplementation(ZoneServer* serv, ZoneProcessServer* proc) {
	_initializeImplementation();
	// server/zone/managers/guild/GuildManager.idl(77):  		Logger.setLoggingName("GuildManager");
	Logger::setLoggingName("GuildManager");
	// server/zone/managers/guild/GuildManager.idl(78):  		Logger.setLogging(true);
	Logger::setLogging(true);
	// server/zone/managers/guild/GuildManager.idl(79):  		Logger.setGlobalLogging(true);
	Logger::setGlobalLogging(true);
	// server/zone/managers/guild/GuildManager.idl(81):  		pendingGuilds.setNoDuplicateInsertPlan();
	(&pendingGuilds)->setNoDuplicateInsertPlan();
	// server/zone/managers/guild/GuildManager.idl(83):  		sponsoredPlayers.setNoDuplicateInsertPlan();
	(&sponsoredPlayers)->setNoDuplicateInsertPlan();
	// server/zone/managers/guild/GuildManager.idl(84):  		sponsoredPlayers.setNullValue(null);
	(&sponsoredPlayers)->setNullValue(NULL);
	// server/zone/managers/guild/GuildManager.idl(86):  		server = serv;
	server = serv;
	// server/zone/managers/guild/GuildManager.idl(87):  		processor = proc;
	processor = proc;
	// server/zone/managers/guild/GuildManager.idl(89):  		requiredMembers = 5;
	requiredMembers = 5;
	// server/zone/managers/guild/GuildManager.idl(90):  		maximumMembers = 500;
	maximumMembers = 500;
	// server/zone/managers/guild/GuildManager.idl(91):  		guildUpdateInterval = 1440;
	guildUpdateInterval = 1440;
}

void GuildManagerImplementation::addPendingGuild(unsigned long long playerID, const String& guildName) {
	Locker _locker(_this);
	// server/zone/managers/guild/GuildManager.idl(97):  		pendingGuilds.put(playerID, guildName);
	(&pendingGuilds)->put(playerID, guildName);
}

void GuildManagerImplementation::removePendingGuild(unsigned long long playerID) {
	Locker _locker(_this);
	// server/zone/managers/guild/GuildManager.idl(101):  		pendingGuilds.drop(playerID);
	(&pendingGuilds)->drop(playerID);
}

String GuildManagerImplementation::getPendingGuildName(unsigned long long playerID) {
	Locker _locker(_this);
	// server/zone/managers/guild/GuildManager.idl(105):  		return pendingGuilds.get(playerID);
	return (&pendingGuilds)->get(playerID);
}

void GuildManagerImplementation::addSponsoredPlayer(unsigned long long playerID, GuildObject* guild) {
	Locker _locker(_this);
	// server/zone/managers/guild/GuildManager.idl(109):  		sponsoredPlayers.put(playerID, guild);
	(&sponsoredPlayers)->put(playerID, guild);
}

void GuildManagerImplementation::removeSponsoredPlayer(unsigned long long playerID) {
	Locker _locker(_this);
	// server/zone/managers/guild/GuildManager.idl(113):  		sponsoredPlayers.drop(playerID);
	(&sponsoredPlayers)->drop(playerID);
}

bool GuildManagerImplementation::isCreatingGuild(unsigned long long playerID) {
	Locker _locker(_this);
	// server/zone/managers/guild/GuildManager.idl(117):  		return pendingGuilds.contains(playerID);
	return (&pendingGuilds)->contains(playerID);
}

bool GuildManagerImplementation::isSponsoredPlayer(unsigned long long playerID) {
	Locker _locker(_this);
	// server/zone/managers/guild/GuildManager.idl(121):  		return sponsoredPlayers.contains(playerID);
	return (&sponsoredPlayers)->contains(playerID);
}

GuildObject* GuildManagerImplementation::getSponsoredGuild(unsigned long long playerID) {
	Locker _locker(_this);
	// server/zone/managers/guild/GuildManager.idl(125):  		return sponsoredPlayers.get(playerID);
	return (&sponsoredPlayers)->get(playerID);
}

/*
 *	GuildManagerAdapter
 */

GuildManagerAdapter::GuildManagerAdapter(GuildManagerImplementation* obj) : ManagedServiceAdapter(obj) {
}

Packet* GuildManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		sendGuildListTo((PlayerCreature*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_sendGuildListTo__PlayerCreature_String_));
		break;
	case 7:
		addPendingGuild(inv->getUnsignedLongParameter(), inv->getAsciiParameter(_param1_addPendingGuild__long_String_));
		break;
	case 8:
		removePendingGuild(inv->getUnsignedLongParameter());
		break;
	case 9:
		resp->insertAscii(getPendingGuildName(inv->getUnsignedLongParameter()));
		break;
	case 10:
		addSponsoredPlayer(inv->getUnsignedLongParameter(), (GuildObject*) inv->getObjectParameter());
		break;
	case 11:
		removeSponsoredPlayer(inv->getUnsignedLongParameter());
		break;
	case 12:
		resp->insertBoolean(isCreatingGuild(inv->getUnsignedLongParameter()));
		break;
	case 13:
		resp->insertBoolean(isSponsoredPlayer(inv->getUnsignedLongParameter()));
		break;
	case 14:
		resp->insertLong(getSponsoredGuild(inv->getUnsignedLongParameter())->_getObjectID());
		break;
	case 15:
		sendBaselinesTo((PlayerCreature*) inv->getObjectParameter());
		break;
	case 16:
		loadGuilds();
		break;
	case 17:
		sendGuildCreateNameTo((PlayerCreature*) inv->getObjectParameter(), (GuildTerminal*) inv->getObjectParameter());
		break;
	case 18:
		sendGuildCreateAbbrevTo((PlayerCreature*) inv->getObjectParameter(), (GuildTerminal*) inv->getObjectParameter());
		break;
	case 19:
		sendGuildInformationTo((PlayerCreature*) inv->getObjectParameter(), (GuildObject*) inv->getObjectParameter(), (GuildTerminal*) inv->getObjectParameter());
		break;
	case 20:
		sendGuildMemberListTo((PlayerCreature*) inv->getObjectParameter(), (GuildObject*) inv->getObjectParameter(), (GuildTerminal*) inv->getObjectParameter());
		break;
	case 21:
		sendGuildMemberOptionsTo((PlayerCreature*) inv->getObjectParameter(), (GuildObject*) inv->getObjectParameter(), inv->getUnsignedLongParameter(), (GuildTerminal*) inv->getObjectParameter());
		break;
	case 22:
		sendGuildDisbandConfirmTo((PlayerCreature*) inv->getObjectParameter(), (GuildObject*) inv->getObjectParameter(), (GuildTerminal*) inv->getObjectParameter());
		break;
	case 23:
		sendGuildSponsoredListTo((PlayerCreature*) inv->getObjectParameter(), (GuildObject*) inv->getObjectParameter(), (GuildTerminal*) inv->getObjectParameter());
		break;
	case 24:
		sendGuildSponsoredOptionsTo((PlayerCreature*) inv->getObjectParameter(), (GuildObject*) inv->getObjectParameter(), inv->getUnsignedLongParameter(), (GuildTerminal*) inv->getObjectParameter());
		break;
	case 25:
		sendGuildSponsorTo((PlayerCreature*) inv->getObjectParameter(), (GuildObject*) inv->getObjectParameter(), (GuildTerminal*) inv->getObjectParameter());
		break;
	case 26:
		sendGuildSponsorVerifyTo((PlayerCreature*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter());
		break;
	case 27:
		sendGuildKickPromptTo((PlayerCreature*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter());
		break;
	case 28:
		sendGuildSetTitleTo((PlayerCreature*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter());
		break;
	case 29:
		sendMemberPermissionsTo((PlayerCreature*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter());
		break;
	case 30:
		resp->insertBoolean(validateGuildName((PlayerCreature*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_validateGuildName__PlayerCreature_String_)));
		break;
	case 31:
		resp->insertBoolean(validateGuildAbbrev((PlayerCreature*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_validateGuildAbbrev__PlayerCreature_String_)));
		break;
	case 32:
		resp->insertBoolean(guildNameExists(inv->getAsciiParameter(_param0_guildNameExists__String_)));
		break;
	case 33:
		resp->insertBoolean(guildAbbrevExists(inv->getAsciiParameter(_param0_guildAbbrevExists__String_)));
		break;
	case 34:
		resp->insertLong(createGuild((PlayerCreature*) inv->getObjectParameter(), (GuildTerminal*) inv->getObjectParameter(), inv->getAsciiParameter(_param2_createGuild__PlayerCreature_GuildTerminal_String_String_), inv->getAsciiParameter(_param3_createGuild__PlayerCreature_GuildTerminal_String_String_))->_getObjectID());
		break;
	case 35:
		resp->insertBoolean(disbandGuild((PlayerCreature*) inv->getObjectParameter(), (GuildTerminal*) inv->getObjectParameter()));
		break;
	case 36:
		sponsorPlayer((PlayerCreature*) inv->getObjectParameter(), (GuildTerminal*) inv->getObjectParameter(), inv->getAsciiParameter(_param2_sponsorPlayer__PlayerCreature_GuildTerminal_String_));
		break;
	case 37:
		acceptSponsorshipRequest((PlayerCreature*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter());
		break;
	case 38:
		acceptSponsoredPlayer((PlayerCreature*) inv->getObjectParameter(), inv->getUnsignedLongParameter());
		break;
	case 39:
		kickMember((PlayerCreature*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter());
		break;
	case 40:
		leaveGuild((PlayerCreature*) inv->getObjectParameter(), (GuildObject*) inv->getObjectParameter());
		break;
	case 41:
		setMemberTitle((PlayerCreature*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter(), inv->getAsciiParameter(_param2_setMemberTitle__PlayerCreature_PlayerCreature_String_));
		break;
	case 42:
		setAllegianceTo((PlayerCreature*) inv->getObjectParameter(), inv->getUnsignedLongParameter(), (GuildTerminal*) inv->getObjectParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void GuildManagerAdapter::sendGuildListTo(PlayerCreature* player, const String& guildFilter) {
	((GuildManagerImplementation*) impl)->sendGuildListTo(player, guildFilter);
}

void GuildManagerAdapter::addPendingGuild(unsigned long long playerID, const String& guildName) {
	((GuildManagerImplementation*) impl)->addPendingGuild(playerID, guildName);
}

void GuildManagerAdapter::removePendingGuild(unsigned long long playerID) {
	((GuildManagerImplementation*) impl)->removePendingGuild(playerID);
}

String GuildManagerAdapter::getPendingGuildName(unsigned long long playerID) {
	return ((GuildManagerImplementation*) impl)->getPendingGuildName(playerID);
}

void GuildManagerAdapter::addSponsoredPlayer(unsigned long long playerID, GuildObject* guild) {
	((GuildManagerImplementation*) impl)->addSponsoredPlayer(playerID, guild);
}

void GuildManagerAdapter::removeSponsoredPlayer(unsigned long long playerID) {
	((GuildManagerImplementation*) impl)->removeSponsoredPlayer(playerID);
}

bool GuildManagerAdapter::isCreatingGuild(unsigned long long playerID) {
	return ((GuildManagerImplementation*) impl)->isCreatingGuild(playerID);
}

bool GuildManagerAdapter::isSponsoredPlayer(unsigned long long playerID) {
	return ((GuildManagerImplementation*) impl)->isSponsoredPlayer(playerID);
}

GuildObject* GuildManagerAdapter::getSponsoredGuild(unsigned long long playerID) {
	return ((GuildManagerImplementation*) impl)->getSponsoredGuild(playerID);
}

void GuildManagerAdapter::sendBaselinesTo(PlayerCreature* player) {
	((GuildManagerImplementation*) impl)->sendBaselinesTo(player);
}

void GuildManagerAdapter::loadGuilds() {
	((GuildManagerImplementation*) impl)->loadGuilds();
}

void GuildManagerAdapter::sendGuildCreateNameTo(PlayerCreature* player, GuildTerminal* guildTerminal) {
	((GuildManagerImplementation*) impl)->sendGuildCreateNameTo(player, guildTerminal);
}

void GuildManagerAdapter::sendGuildCreateAbbrevTo(PlayerCreature* player, GuildTerminal* guildTerminal) {
	((GuildManagerImplementation*) impl)->sendGuildCreateAbbrevTo(player, guildTerminal);
}

void GuildManagerAdapter::sendGuildInformationTo(PlayerCreature* player, GuildObject* guild, GuildTerminal* guildTerminal) {
	((GuildManagerImplementation*) impl)->sendGuildInformationTo(player, guild, guildTerminal);
}

void GuildManagerAdapter::sendGuildMemberListTo(PlayerCreature* player, GuildObject* guild, GuildTerminal* guildTerminal) {
	((GuildManagerImplementation*) impl)->sendGuildMemberListTo(player, guild, guildTerminal);
}

void GuildManagerAdapter::sendGuildMemberOptionsTo(PlayerCreature* player, GuildObject* guild, unsigned long long memberID, GuildTerminal* guildTerminal) {
	((GuildManagerImplementation*) impl)->sendGuildMemberOptionsTo(player, guild, memberID, guildTerminal);
}

void GuildManagerAdapter::sendGuildDisbandConfirmTo(PlayerCreature* player, GuildObject* guild, GuildTerminal* guildTerminal) {
	((GuildManagerImplementation*) impl)->sendGuildDisbandConfirmTo(player, guild, guildTerminal);
}

void GuildManagerAdapter::sendGuildSponsoredListTo(PlayerCreature* player, GuildObject* guild, GuildTerminal* guildTerminal) {
	((GuildManagerImplementation*) impl)->sendGuildSponsoredListTo(player, guild, guildTerminal);
}

void GuildManagerAdapter::sendGuildSponsoredOptionsTo(PlayerCreature* player, GuildObject* guild, unsigned long long playerID, GuildTerminal* guildTerminal) {
	((GuildManagerImplementation*) impl)->sendGuildSponsoredOptionsTo(player, guild, playerID, guildTerminal);
}

void GuildManagerAdapter::sendGuildSponsorTo(PlayerCreature* player, GuildObject* guild, GuildTerminal* guildTerminal) {
	((GuildManagerImplementation*) impl)->sendGuildSponsorTo(player, guild, guildTerminal);
}

void GuildManagerAdapter::sendGuildSponsorVerifyTo(PlayerCreature* player, PlayerCreature* target) {
	((GuildManagerImplementation*) impl)->sendGuildSponsorVerifyTo(player, target);
}

void GuildManagerAdapter::sendGuildKickPromptTo(PlayerCreature* player, PlayerCreature* target) {
	((GuildManagerImplementation*) impl)->sendGuildKickPromptTo(player, target);
}

void GuildManagerAdapter::sendGuildSetTitleTo(PlayerCreature* player, PlayerCreature* target) {
	((GuildManagerImplementation*) impl)->sendGuildSetTitleTo(player, target);
}

void GuildManagerAdapter::sendMemberPermissionsTo(PlayerCreature* player, PlayerCreature* target) {
	((GuildManagerImplementation*) impl)->sendMemberPermissionsTo(player, target);
}

bool GuildManagerAdapter::validateGuildName(PlayerCreature* player, const String& guildName) {
	return ((GuildManagerImplementation*) impl)->validateGuildName(player, guildName);
}

bool GuildManagerAdapter::validateGuildAbbrev(PlayerCreature* player, const String& guildAbbrev) {
	return ((GuildManagerImplementation*) impl)->validateGuildAbbrev(player, guildAbbrev);
}

bool GuildManagerAdapter::guildNameExists(const String& guildName) {
	return ((GuildManagerImplementation*) impl)->guildNameExists(guildName);
}

bool GuildManagerAdapter::guildAbbrevExists(const String& guildAbbrev) {
	return ((GuildManagerImplementation*) impl)->guildAbbrevExists(guildAbbrev);
}

GuildObject* GuildManagerAdapter::createGuild(PlayerCreature* player, GuildTerminal* guildTerminal, const String& guildName, const String& guildAbbrev) {
	return ((GuildManagerImplementation*) impl)->createGuild(player, guildTerminal, guildName, guildAbbrev);
}

bool GuildManagerAdapter::disbandGuild(PlayerCreature* player, GuildTerminal* guildTerminal) {
	return ((GuildManagerImplementation*) impl)->disbandGuild(player, guildTerminal);
}

void GuildManagerAdapter::sponsorPlayer(PlayerCreature* player, GuildTerminal* guildTerminal, const String& playerName) {
	((GuildManagerImplementation*) impl)->sponsorPlayer(player, guildTerminal, playerName);
}

void GuildManagerAdapter::acceptSponsorshipRequest(PlayerCreature* player, PlayerCreature* target) {
	((GuildManagerImplementation*) impl)->acceptSponsorshipRequest(player, target);
}

void GuildManagerAdapter::acceptSponsoredPlayer(PlayerCreature* player, unsigned long long targetID) {
	((GuildManagerImplementation*) impl)->acceptSponsoredPlayer(player, targetID);
}

void GuildManagerAdapter::kickMember(PlayerCreature* player, PlayerCreature* target) {
	((GuildManagerImplementation*) impl)->kickMember(player, target);
}

void GuildManagerAdapter::leaveGuild(PlayerCreature* player, GuildObject* guild) {
	((GuildManagerImplementation*) impl)->leaveGuild(player, guild);
}

void GuildManagerAdapter::setMemberTitle(PlayerCreature* player, PlayerCreature* target, const String& title) {
	((GuildManagerImplementation*) impl)->setMemberTitle(player, target, title);
}

void GuildManagerAdapter::setAllegianceTo(PlayerCreature* player, unsigned long long targetID, GuildTerminal* guildTerminal) {
	((GuildManagerImplementation*) impl)->setAllegianceTo(player, targetID, guildTerminal);
}

/*
 *	GuildManagerHelper
 */

GuildManagerHelper* GuildManagerHelper::staticInitializer = GuildManagerHelper::instance();

GuildManagerHelper::GuildManagerHelper() {
	className = "GuildManager";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void GuildManagerHelper::finalizeHelper() {
	GuildManagerHelper::finalize();
}

DistributedObject* GuildManagerHelper::instantiateObject() {
	return new GuildManager(DummyConstructorParameter::instance());
}

DistributedObjectServant* GuildManagerHelper::instantiateServant() {
	return new GuildManagerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* GuildManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new GuildManagerAdapter((GuildManagerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

