/*
 *	server/zone/objects/player/sessions/admin/PlayerManagementSession.cpp generated by engine3 IDL compiler 0.60
 */

#include "PlayerManagementSession.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/player/PlayerObject.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/managers/player/PlayerManager.h"

#include "server/login/account/Account.h"

/*
 *	PlayerManagementSessionStub
 */

enum {RPC_INITIALIZESESSION__ = 6,RPC_CANCELSESSION__,RPC_CLEARSESSION__,RPC_ADDACCOUNTSUI__SUILISTBOX_,RPC_BAN__INT_INT_STRING_STRING_,RPC_GETPLAYERINFO__INT_STRING_,RPC_SENDACCOUNTINFO__,RPC_SENDBANDURATION__,RPC_PARSEBANDURATION__STRING_,RPC_SENDBANREASON__BOOL_,RPC_SETBANREASON__STRING_,RPC_SHOWBANSUMMARY__,RPC_SHOWUNBANSUMMARY__,RPC_COMPLETEBAN__,RPC_GETBANDURATION__INT_};

PlayerManagementSession::PlayerManagementSession(Account* account, CreatureObject* adm) : Facade(DummyConstructorParameter::instance()) {
	PlayerManagementSessionImplementation* _implementation = new PlayerManagementSessionImplementation(account, adm);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("PlayerManagementSession");
}

PlayerManagementSession::PlayerManagementSession(DummyConstructorParameter* param) : Facade(param) {
	_setClassName("PlayerManagementSession");
}

PlayerManagementSession::~PlayerManagementSession() {
}



int PlayerManagementSession::initializeSession() {
	PlayerManagementSessionImplementation* _implementation = static_cast<PlayerManagementSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZESESSION__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->initializeSession();
}

int PlayerManagementSession::cancelSession() {
	PlayerManagementSessionImplementation* _implementation = static_cast<PlayerManagementSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CANCELSESSION__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->cancelSession();
}

int PlayerManagementSession::clearSession() {
	PlayerManagementSessionImplementation* _implementation = static_cast<PlayerManagementSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CLEARSESSION__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->clearSession();
}

void PlayerManagementSession::addAccountSui(SuiListBox* box) {
	PlayerManagementSessionImplementation* _implementation = static_cast<PlayerManagementSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDACCOUNTSUI__SUILISTBOX_);
		method.addObjectParameter(box);

		method.executeWithVoidReturn();
	} else
		_implementation->addAccountSui(box);
}

void PlayerManagementSession::ban(const int tablevel, unsigned const int galaxy, const String& gname, const String& name) {
	PlayerManagementSessionImplementation* _implementation = static_cast<PlayerManagementSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_BAN__INT_INT_STRING_STRING_);
		method.addSignedIntParameter(tablevel);
		method.addUnsignedIntParameter(galaxy);
		method.addAsciiParameter(gname);
		method.addAsciiParameter(name);

		method.executeWithVoidReturn();
	} else
		_implementation->ban(tablevel, galaxy, gname, name);
}

void PlayerManagementSession::getPlayerInfo(const int tablevel, const String& firstName) {
	PlayerManagementSessionImplementation* _implementation = static_cast<PlayerManagementSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETPLAYERINFO__INT_STRING_);
		method.addSignedIntParameter(tablevel);
		method.addAsciiParameter(firstName);

		method.executeWithVoidReturn();
	} else
		_implementation->getPlayerInfo(tablevel, firstName);
}

void PlayerManagementSession::sendAccountInfo() {
	PlayerManagementSessionImplementation* _implementation = static_cast<PlayerManagementSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDACCOUNTINFO__);

		method.executeWithVoidReturn();
	} else
		_implementation->sendAccountInfo();
}

void PlayerManagementSession::sendBanDuration() {
	PlayerManagementSessionImplementation* _implementation = static_cast<PlayerManagementSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDBANDURATION__);

		method.executeWithVoidReturn();
	} else
		_implementation->sendBanDuration();
}

void PlayerManagementSession::parseBanDuration(const String& duration) {
	PlayerManagementSessionImplementation* _implementation = static_cast<PlayerManagementSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_PARSEBANDURATION__STRING_);
		method.addAsciiParameter(duration);

		method.executeWithVoidReturn();
	} else
		_implementation->parseBanDuration(duration);
}

void PlayerManagementSession::sendBanReason(bool unban) {
	PlayerManagementSessionImplementation* _implementation = static_cast<PlayerManagementSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDBANREASON__BOOL_);
		method.addBooleanParameter(unban);

		method.executeWithVoidReturn();
	} else
		_implementation->sendBanReason(unban);
}

void PlayerManagementSession::setBanReason(const String& reason) {
	PlayerManagementSessionImplementation* _implementation = static_cast<PlayerManagementSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETBANREASON__STRING_);
		method.addAsciiParameter(reason);

		method.executeWithVoidReturn();
	} else
		_implementation->setBanReason(reason);
}

void PlayerManagementSession::showBanSummary() {
	PlayerManagementSessionImplementation* _implementation = static_cast<PlayerManagementSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SHOWBANSUMMARY__);

		method.executeWithVoidReturn();
	} else
		_implementation->showBanSummary();
}

void PlayerManagementSession::showUnbanSummary() {
	PlayerManagementSessionImplementation* _implementation = static_cast<PlayerManagementSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SHOWUNBANSUMMARY__);

		method.executeWithVoidReturn();
	} else
		_implementation->showUnbanSummary();
}

void PlayerManagementSession::completeBan() {
	PlayerManagementSessionImplementation* _implementation = static_cast<PlayerManagementSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_COMPLETEBAN__);

		method.executeWithVoidReturn();
	} else
		_implementation->completeBan();
}

String PlayerManagementSession::getBanDuration(unsigned int timestamp) {
	PlayerManagementSessionImplementation* _implementation = static_cast<PlayerManagementSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETBANDURATION__INT_);
		method.addUnsignedIntParameter(timestamp);

		String _return_getBanDuration;
		method.executeWithAsciiReturn(_return_getBanDuration);
		return _return_getBanDuration;
	} else
		return _implementation->getBanDuration(timestamp);
}

DistributedObjectServant* PlayerManagementSession::_getImplementation() {

	_updated = true;
	return _impl;
}

void PlayerManagementSession::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	PlayerManagementSessionImplementation
 */

PlayerManagementSessionImplementation::PlayerManagementSessionImplementation(DummyConstructorParameter* param) : FacadeImplementation(param) {
	_initializeImplementation();
}


PlayerManagementSessionImplementation::~PlayerManagementSessionImplementation() {
}


void PlayerManagementSessionImplementation::finalize() {
}

void PlayerManagementSessionImplementation::_initializeImplementation() {
	_setClassHelper(PlayerManagementSessionHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void PlayerManagementSessionImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<PlayerManagementSession*>(stub);
	FacadeImplementation::_setStub(stub);
}

DistributedObjectStub* PlayerManagementSessionImplementation::_getStub() {
	return _this;
}

PlayerManagementSessionImplementation::operator const PlayerManagementSession*() {
	return _this;
}

void PlayerManagementSessionImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void PlayerManagementSessionImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void PlayerManagementSessionImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void PlayerManagementSessionImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void PlayerManagementSessionImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void PlayerManagementSessionImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void PlayerManagementSessionImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void PlayerManagementSessionImplementation::_serializationHelperMethod() {
	FacadeImplementation::_serializationHelperMethod();

	_setClassName("PlayerManagementSession");

}

void PlayerManagementSessionImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(PlayerManagementSessionImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool PlayerManagementSessionImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (FacadeImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "PlayerManagementSession.adminGhost") {
		TypeInfo<ManagedReference<PlayerObject* > >::parseFromBinaryStream(&adminGhost, stream);
		return true;
	}

	if (_name == "PlayerManagementSession.admin") {
		TypeInfo<ManagedReference<CreatureObject* > >::parseFromBinaryStream(&admin, stream);
		return true;
	}

	if (_name == "PlayerManagementSession.accountBox") {
		TypeInfo<ManagedReference<SuiListBox* > >::parseFromBinaryStream(&accountBox, stream);
		return true;
	}

	if (_name == "PlayerManagementSession.durationBox") {
		TypeInfo<ManagedReference<SuiInputBox* > >::parseFromBinaryStream(&durationBox, stream);
		return true;
	}

	if (_name == "PlayerManagementSession.reasonBox") {
		TypeInfo<ManagedReference<SuiInputBox* > >::parseFromBinaryStream(&reasonBox, stream);
		return true;
	}

	if (_name == "PlayerManagementSession.summaryBox") {
		TypeInfo<ManagedReference<SuiListBox* > >::parseFromBinaryStream(&summaryBox, stream);
		return true;
	}

	if (_name == "PlayerManagementSession.unbanSummaryBox") {
		TypeInfo<ManagedReference<SuiMessageBox* > >::parseFromBinaryStream(&unbanSummaryBox, stream);
		return true;
	}

	if (_name == "PlayerManagementSession.playerManager") {
		TypeInfo<ManagedReference<PlayerManager* > >::parseFromBinaryStream(&playerManager, stream);
		return true;
	}

	if (_name == "PlayerManagementSession.banType") {
		TypeInfo<int >::parseFromBinaryStream(&banType, stream);
		return true;
	}

	if (_name == "PlayerManagementSession.banMode") {
		TypeInfo<int >::parseFromBinaryStream(&banMode, stream);
		return true;
	}

	if (_name == "PlayerManagementSession.targetAccount") {
		TypeInfo<ManagedReference<Account* > >::parseFromBinaryStream(&targetAccount, stream);
		return true;
	}

	if (_name == "PlayerManagementSession.galaxyID") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&galaxyID, stream);
		return true;
	}

	if (_name == "PlayerManagementSession.galaxyName") {
		TypeInfo<String >::parseFromBinaryStream(&galaxyName, stream);
		return true;
	}

	if (_name == "PlayerManagementSession.banExpiration") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&banExpiration, stream);
		return true;
	}

	if (_name == "PlayerManagementSession.banReason") {
		TypeInfo<String >::parseFromBinaryStream(&banReason, stream);
		return true;
	}

	if (_name == "PlayerManagementSession.targetName") {
		TypeInfo<String >::parseFromBinaryStream(&targetName, stream);
		return true;
	}


	return false;
}

void PlayerManagementSessionImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = PlayerManagementSessionImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int PlayerManagementSessionImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = FacadeImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;
	_name = "PlayerManagementSession.adminGhost";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<PlayerObject* > >::toBinaryStream(&adminGhost, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "PlayerManagementSession.admin";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<CreatureObject* > >::toBinaryStream(&admin, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "PlayerManagementSession.accountBox";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<SuiListBox* > >::toBinaryStream(&accountBox, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "PlayerManagementSession.durationBox";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<SuiInputBox* > >::toBinaryStream(&durationBox, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "PlayerManagementSession.reasonBox";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<SuiInputBox* > >::toBinaryStream(&reasonBox, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "PlayerManagementSession.summaryBox";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<SuiListBox* > >::toBinaryStream(&summaryBox, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "PlayerManagementSession.unbanSummaryBox";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<SuiMessageBox* > >::toBinaryStream(&unbanSummaryBox, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "PlayerManagementSession.playerManager";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<PlayerManager* > >::toBinaryStream(&playerManager, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "PlayerManagementSession.banType";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&banType, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "PlayerManagementSession.banMode";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&banMode, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "PlayerManagementSession.targetAccount";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<Account* > >::toBinaryStream(&targetAccount, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "PlayerManagementSession.galaxyID";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned int >::toBinaryStream(&galaxyID, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "PlayerManagementSession.galaxyName";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&galaxyName, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "PlayerManagementSession.banExpiration";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<unsigned int >::toBinaryStream(&banExpiration, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "PlayerManagementSession.banReason";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&banReason, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "PlayerManagementSession.targetName";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&targetName, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 16;
}

PlayerManagementSessionImplementation::PlayerManagementSessionImplementation(Account* account, CreatureObject* adm) {
	_initializeImplementation();
	// server/zone/objects/player/sessions/admin/PlayerManagementSession.idl():  		targetAccount = account;
	targetAccount = account;
	// server/zone/objects/player/sessions/admin/PlayerManagementSession.idl():  		admin = adm;
	admin = adm;
	// server/zone/objects/player/sessions/admin/PlayerManagementSession.idl():  		adminGhost = admin.getPlayerObject();
	adminGhost = admin->getPlayerObject();
	// server/zone/objects/player/sessions/admin/PlayerManagementSession.idl():  		banMode = NONE;
	banMode = NONE;
	// server/zone/objects/player/sessions/admin/PlayerManagementSession.idl():  		galaxyID = 0;
	galaxyID = 0;
	// server/zone/objects/player/sessions/admin/PlayerManagementSession.idl():  		galaxyName = "";
	galaxyName = "";
	// server/zone/objects/player/sessions/admin/PlayerManagementSession.idl():  		accountBox = null;
	accountBox = NULL;
	// server/zone/objects/player/sessions/admin/PlayerManagementSession.idl():  		Logger.setLoggingName("PlayerManagementSession");
	Logger::setLoggingName("PlayerManagementSession");
	// server/zone/objects/player/sessions/admin/PlayerManagementSession.idl():  		Logger.setLogging(true);
	Logger::setLogging(true);
	// server/zone/objects/player/sessions/admin/PlayerManagementSession.idl():  		initializeSession();
	initializeSession();
}

int PlayerManagementSessionImplementation::cancelSession() {
	// server/zone/objects/player/sessions/admin/PlayerManagementSession.idl():  		clearSession(
	if (admin != NULL)	// server/zone/objects/player/sessions/admin/PlayerManagementSession.idl():  			admin.dropActiveSession(SessionFacadeType.PLAYERMANAGEMENT);
	admin->dropActiveSession(SessionFacadeType::PLAYERMANAGEMENT);
	// server/zone/objects/player/sessions/admin/PlayerManagementSession.idl():  		clearSession();
	clearSession();
	// server/zone/objects/player/sessions/admin/PlayerManagementSession.idl():  		return 0;
	return 0;
}

void PlayerManagementSessionImplementation::addAccountSui(SuiListBox* box) {
	// server/zone/objects/player/sessions/admin/PlayerManagementSession.idl():  		accountBox = box;
	accountBox = box;
}

/*
 *	PlayerManagementSessionAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


PlayerManagementSessionAdapter::PlayerManagementSessionAdapter(PlayerManagementSession* obj) : FacadeAdapter(obj) {
}

void PlayerManagementSessionAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZESESSION__:
		{
			resp->insertSignedInt(initializeSession());
		}
		break;
	case RPC_CANCELSESSION__:
		{
			resp->insertSignedInt(cancelSession());
		}
		break;
	case RPC_CLEARSESSION__:
		{
			resp->insertSignedInt(clearSession());
		}
		break;
	case RPC_ADDACCOUNTSUI__SUILISTBOX_:
		{
			addAccountSui(static_cast<SuiListBox*>(inv->getObjectParameter()));
		}
		break;
	case RPC_BAN__INT_INT_STRING_STRING_:
		{
			String gname; String name; 
			ban(inv->getSignedIntParameter(), inv->getUnsignedIntParameter(), inv->getAsciiParameter(gname), inv->getAsciiParameter(name));
		}
		break;
	case RPC_GETPLAYERINFO__INT_STRING_:
		{
			String firstName; 
			getPlayerInfo(inv->getSignedIntParameter(), inv->getAsciiParameter(firstName));
		}
		break;
	case RPC_SENDACCOUNTINFO__:
		{
			sendAccountInfo();
		}
		break;
	case RPC_SENDBANDURATION__:
		{
			sendBanDuration();
		}
		break;
	case RPC_PARSEBANDURATION__STRING_:
		{
			String duration; 
			parseBanDuration(inv->getAsciiParameter(duration));
		}
		break;
	case RPC_SENDBANREASON__BOOL_:
		{
			sendBanReason(inv->getBooleanParameter());
		}
		break;
	case RPC_SETBANREASON__STRING_:
		{
			String reason; 
			setBanReason(inv->getAsciiParameter(reason));
		}
		break;
	case RPC_SHOWBANSUMMARY__:
		{
			showBanSummary();
		}
		break;
	case RPC_SHOWUNBANSUMMARY__:
		{
			showUnbanSummary();
		}
		break;
	case RPC_COMPLETEBAN__:
		{
			completeBan();
		}
		break;
	case RPC_GETBANDURATION__INT_:
		{
			resp->insertAscii(getBanDuration(inv->getUnsignedIntParameter()));
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

int PlayerManagementSessionAdapter::initializeSession() {
	return (static_cast<PlayerManagementSession*>(stub))->initializeSession();
}

int PlayerManagementSessionAdapter::cancelSession() {
	return (static_cast<PlayerManagementSession*>(stub))->cancelSession();
}

int PlayerManagementSessionAdapter::clearSession() {
	return (static_cast<PlayerManagementSession*>(stub))->clearSession();
}

void PlayerManagementSessionAdapter::addAccountSui(SuiListBox* box) {
	(static_cast<PlayerManagementSession*>(stub))->addAccountSui(box);
}

void PlayerManagementSessionAdapter::ban(const int tablevel, unsigned const int galaxy, const String& gname, const String& name) {
	(static_cast<PlayerManagementSession*>(stub))->ban(tablevel, galaxy, gname, name);
}

void PlayerManagementSessionAdapter::getPlayerInfo(const int tablevel, const String& firstName) {
	(static_cast<PlayerManagementSession*>(stub))->getPlayerInfo(tablevel, firstName);
}

void PlayerManagementSessionAdapter::sendAccountInfo() {
	(static_cast<PlayerManagementSession*>(stub))->sendAccountInfo();
}

void PlayerManagementSessionAdapter::sendBanDuration() {
	(static_cast<PlayerManagementSession*>(stub))->sendBanDuration();
}

void PlayerManagementSessionAdapter::parseBanDuration(const String& duration) {
	(static_cast<PlayerManagementSession*>(stub))->parseBanDuration(duration);
}

void PlayerManagementSessionAdapter::sendBanReason(bool unban) {
	(static_cast<PlayerManagementSession*>(stub))->sendBanReason(unban);
}

void PlayerManagementSessionAdapter::setBanReason(const String& reason) {
	(static_cast<PlayerManagementSession*>(stub))->setBanReason(reason);
}

void PlayerManagementSessionAdapter::showBanSummary() {
	(static_cast<PlayerManagementSession*>(stub))->showBanSummary();
}

void PlayerManagementSessionAdapter::showUnbanSummary() {
	(static_cast<PlayerManagementSession*>(stub))->showUnbanSummary();
}

void PlayerManagementSessionAdapter::completeBan() {
	(static_cast<PlayerManagementSession*>(stub))->completeBan();
}

String PlayerManagementSessionAdapter::getBanDuration(unsigned int timestamp) {
	return (static_cast<PlayerManagementSession*>(stub))->getBanDuration(timestamp);
}

/*
 *	PlayerManagementSessionHelper
 */

PlayerManagementSessionHelper* PlayerManagementSessionHelper::staticInitializer = PlayerManagementSessionHelper::instance();

PlayerManagementSessionHelper::PlayerManagementSessionHelper() {
	className = "PlayerManagementSession";

	Core::getObjectBroker()->registerClass(className, this);
}

void PlayerManagementSessionHelper::finalizeHelper() {
	PlayerManagementSessionHelper::finalize();
}

DistributedObject* PlayerManagementSessionHelper::instantiateObject() {
	return new PlayerManagementSession(DummyConstructorParameter::instance());
}

DistributedObjectServant* PlayerManagementSessionHelper::instantiateServant() {
	return new PlayerManagementSessionImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* PlayerManagementSessionHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new PlayerManagementSessionAdapter(static_cast<PlayerManagementSession*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

