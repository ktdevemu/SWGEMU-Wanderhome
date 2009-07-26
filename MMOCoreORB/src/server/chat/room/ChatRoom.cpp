/*
 *	server/chat/room/ChatRoom.cpp generated by engine3 IDL compiler 0.60
 */

#include "ChatRoom.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/objects/player/PlayerCreature.h"

/*
 *	ChatRoomStub
 */

ChatRoom::ChatRoom(ZoneServer* server, const String& name, unsigned int cid) : ManagedObject(DummyConstructorParameter::instance()) {
	_impl = new ChatRoomImplementation(server, name, cid);
	_impl->_setStub(this);

	((ChatRoomImplementation*) _impl)->_serializationHelperMethod();
}

ChatRoom::ChatRoom(ZoneServer* server, ChatRoom* parent, const String& name, unsigned int cid) : ManagedObject(DummyConstructorParameter::instance()) {
	_impl = new ChatRoomImplementation(server, parent, name, cid);
	_impl->_setStub(this);

	((ChatRoomImplementation*) _impl)->_serializationHelperMethod();
}

ChatRoom::ChatRoom(DummyConstructorParameter* param) : ManagedObject(param) {
}

ChatRoom::~ChatRoom() {
}

void ChatRoom::wlock() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((ChatRoomImplementation*) _impl)->wlock();
}

void ChatRoom::unlock() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		((ChatRoomImplementation*) _impl)->unlock();
}

void ChatRoom::sendTo(PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((ChatRoomImplementation*) _impl)->sendTo(player);
}

void ChatRoom::sendDestroyTo(PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((ChatRoomImplementation*) _impl)->sendDestroyTo(player);
}

void ChatRoom::addSubRoom(ChatRoom* channel) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(channel);

		method.executeWithVoidReturn();
	} else
		((ChatRoomImplementation*) _impl)->addSubRoom(channel);
}

void ChatRoom::removeSubRoom(ChatRoom* channel) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addObjectParameter(channel);

		method.executeWithVoidReturn();
	} else
		((ChatRoomImplementation*) _impl)->removeSubRoom(channel);
}

ChatRoom* ChatRoom::getSubRoom(int i) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addSignedIntParameter(i);

		return (ChatRoom*) method.executeWithObjectReturn();
	} else
		return ((ChatRoomImplementation*) _impl)->getSubRoom(i);
}

ChatRoom* ChatRoom::getSubRoom(const String& name) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addAsciiParameter(name);

		return (ChatRoom*) method.executeWithObjectReturn();
	} else
		return ((ChatRoomImplementation*) _impl)->getSubRoom(name);
}

void ChatRoom::addPlayer(PlayerCreature* player, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addObjectParameter(player);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((ChatRoomImplementation*) _impl)->addPlayer(player, doLock);
}

void ChatRoom::removePlayer(PlayerCreature* player, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addObjectParameter(player);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((ChatRoomImplementation*) _impl)->removePlayer(player, doLock);
}

void ChatRoom::removePlayer(const String& player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addAsciiParameter(player);

		method.executeWithVoidReturn();
	} else
		((ChatRoomImplementation*) _impl)->removePlayer(player);
}

void ChatRoom::broadcastMessage(BaseMessage* msg) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addObjectParameter(msg);

		method.executeWithVoidReturn();
	} else
		((ChatRoomImplementation*) _impl)->broadcastMessage(msg);
}

void ChatRoom::broadcastMessages(Vector<BaseMessage* >* messages) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((ChatRoomImplementation*) _impl)->broadcastMessages(messages);
}

bool ChatRoom::hasPlayer(PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addObjectParameter(player);

		return method.executeWithBooleanReturn();
	} else
		return ((ChatRoomImplementation*) _impl)->hasPlayer(player);
}

bool ChatRoom::hasPlayer(const String& name) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addAsciiParameter(name);

		return method.executeWithBooleanReturn();
	} else
		return ((ChatRoomImplementation*) _impl)->hasPlayer(name);
}

void ChatRoom::removeAllPlayers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);

		method.executeWithVoidReturn();
	} else
		((ChatRoomImplementation*) _impl)->removeAllPlayers();
}

void ChatRoom::setPrivate() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);

		method.executeWithVoidReturn();
	} else
		((ChatRoomImplementation*) _impl)->setPrivate();
}

void ChatRoom::setPublic() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);

		method.executeWithVoidReturn();
	} else
		((ChatRoomImplementation*) _impl)->setPublic();
}

bool ChatRoom::isPublic() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);

		return method.executeWithBooleanReturn();
	} else
		return ((ChatRoomImplementation*) _impl)->isPublic();
}

bool ChatRoom::isPrivate() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);

		return method.executeWithBooleanReturn();
	} else
		return ((ChatRoomImplementation*) _impl)->isPrivate();
}

PlayerCreature* ChatRoom::getPlayer(int idx) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);
		method.addSignedIntParameter(idx);

		return (PlayerCreature*) method.executeWithObjectReturn();
	} else
		return ((ChatRoomImplementation*) _impl)->getPlayer(idx);
}

int ChatRoom::getPlayerSize() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);

		return method.executeWithSignedIntReturn();
	} else
		return ((ChatRoomImplementation*) _impl)->getPlayerSize();
}

void ChatRoom::setName(const String& Name) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);
		method.addAsciiParameter(Name);

		method.executeWithVoidReturn();
	} else
		((ChatRoomImplementation*) _impl)->setName(Name);
}

String ChatRoom::getName() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);

		method.executeWithAsciiReturn(_return_getName);
		return _return_getName;
	} else
		return ((ChatRoomImplementation*) _impl)->getName();
}

String ChatRoom::getFullPath() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);

		method.executeWithAsciiReturn(_return_getFullPath);
		return _return_getFullPath;
	} else
		return ((ChatRoomImplementation*) _impl)->getFullPath();
}

String ChatRoom::getOwner() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);

		method.executeWithAsciiReturn(_return_getOwner);
		return _return_getOwner;
	} else
		return ((ChatRoomImplementation*) _impl)->getOwner();
}

String ChatRoom::getCreator() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);

		method.executeWithAsciiReturn(_return_getCreator);
		return _return_getCreator;
	} else
		return ((ChatRoomImplementation*) _impl)->getCreator();
}

UnicodeString ChatRoom::getTitle() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);

		method.executeWithUnicodeReturn(_return_getTitle);
		return _return_getTitle;
	} else
		return ((ChatRoomImplementation*) _impl)->getTitle();
}

String ChatRoom::getServerName() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);

		method.executeWithAsciiReturn(_return_getServerName);
		return _return_getServerName;
	} else
		return ((ChatRoomImplementation*) _impl)->getServerName();
}

void ChatRoom::setOwner(const String& Owner) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);
		method.addAsciiParameter(Owner);

		method.executeWithVoidReturn();
	} else
		((ChatRoomImplementation*) _impl)->setOwner(Owner);
}

void ChatRoom::setCreator(const String& Creator) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 35);
		method.addAsciiParameter(Creator);

		method.executeWithVoidReturn();
	} else
		((ChatRoomImplementation*) _impl)->setCreator(Creator);
}

void ChatRoom::setTitle(const String& Title) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 36);
		method.addAsciiParameter(Title);

		method.executeWithVoidReturn();
	} else
		((ChatRoomImplementation*) _impl)->setTitle(Title);
}

unsigned int ChatRoom::getRoomID() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 37);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((ChatRoomImplementation*) _impl)->getRoomID();
}

int ChatRoom::getSubRoomsSize() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 38);

		return method.executeWithSignedIntReturn();
	} else
		return ((ChatRoomImplementation*) _impl)->getSubRoomsSize();
}

ChatRoom* ChatRoom::getParent() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 39);

		return (ChatRoom*) method.executeWithObjectReturn();
	} else
		return ((ChatRoomImplementation*) _impl)->getParent();
}

int ChatRoom::compareTo(ChatRoom* obj) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 40);
		method.addObjectParameter(obj);

		return method.executeWithSignedIntReturn();
	} else
		return ((ChatRoomImplementation*) _impl)->compareTo(obj);
}

/*
 *	ChatRoomImplementation
 */

ChatRoomImplementation::~ChatRoomImplementation() {
}

void ChatRoomImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (ChatRoom*) stub;
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* ChatRoomImplementation::_getStub() {
	return _this;
}

ChatRoomImplementation::operator const ChatRoom*() {
	return _this;
}

void ChatRoomImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	addSerializableVariable("server", server);
	addSerializableVariable("name", &name);
	addSerializableVariable("fullPath", &fullPath);
	addSerializableVariable("owner", &owner);
	addSerializableVariable("creator", &creator);
	addSerializableVariable("title", &title);
	addSerializableVariable("roomID", &roomID);
	addSerializableVariable("parent", parent);
	addSerializableVariable("isPublicRoom", &isPublicRoom);
}

void ChatRoomImplementation::setPrivate() {
	// server/chat/room/ChatRoom.idl(103):  isPublicRoom = false;
	isPublicRoom = false;
}

void ChatRoomImplementation::setPublic() {
	// server/chat/room/ChatRoom.idl(107):  isPublicRoom = true;
	isPublicRoom = true;
}

bool ChatRoomImplementation::isPublic() {
	// server/chat/room/ChatRoom.idl(111):  return isPublicRoom == true;
	return isPublicRoom == true;
}

bool ChatRoomImplementation::isPrivate() {
	// server/chat/room/ChatRoom.idl(115):  return isPublicRoom == false;
	return isPublicRoom == false;
}

PlayerCreature* ChatRoomImplementation::getPlayer(int idx) {
	// server/chat/room/ChatRoom.idl(119):  return playerList.get(idx);
	return playerList->get(idx);
}

int ChatRoomImplementation::getPlayerSize() {
	// server/chat/room/ChatRoom.idl(123):  return playerList.size();
	return playerList->size();
}

void ChatRoomImplementation::setName(const String& Name) {
	// server/chat/room/ChatRoom.idl(127):  name = Name;
	name = Name;
}

String ChatRoomImplementation::getName() {
	// server/chat/room/ChatRoom.idl(131):  return name;
	return name;
}

String ChatRoomImplementation::getFullPath() {
	// server/chat/room/ChatRoom.idl(135):  return fullPath;
	return fullPath;
}

String ChatRoomImplementation::getOwner() {
	// server/chat/room/ChatRoom.idl(139):  return owner;
	return owner;
}

String ChatRoomImplementation::getCreator() {
	// server/chat/room/ChatRoom.idl(143):  return creator;
	return creator;
}

UnicodeString ChatRoomImplementation::getTitle() {
	// server/chat/room/ChatRoom.idl(147):  return title;
	return title;
}

void ChatRoomImplementation::setOwner(const String& Owner) {
	// server/chat/room/ChatRoom.idl(153):  owner = Owner;
	owner = Owner;
}

void ChatRoomImplementation::setCreator(const String& Creator) {
	// server/chat/room/ChatRoom.idl(157):  creator = Creator;
	creator = Creator;
}

void ChatRoomImplementation::setTitle(const String& Title) {
	// server/chat/room/ChatRoom.idl(161):  title = Title;
	title = Title;
}

unsigned int ChatRoomImplementation::getRoomID() {
	// server/chat/room/ChatRoom.idl(165):  return roomID;
	return roomID;
}

int ChatRoomImplementation::getSubRoomsSize() {
	// server/chat/room/ChatRoom.idl(169):  return subRooms.size();
	return subRooms->size();
}

ChatRoom* ChatRoomImplementation::getParent() {
	// server/chat/room/ChatRoom.idl(173):  return parent;
	return parent;
}

int ChatRoomImplementation::compareTo(ChatRoom* obj) {
	// server/chat/room/ChatRoom.idl(177):  
	if (roomID < obj->getRoomID())	// server/chat/room/ChatRoom.idl(178):  return 1;
	return 1;

	else 	// server/chat/room/ChatRoom.idl(179):  
	if (roomID > obj->getRoomID())	// server/chat/room/ChatRoom.idl(180):  return -1;
	return -1;

	else 	// server/chat/room/ChatRoom.idl(183):  return 0;
	return 0;
}

/*
 *	ChatRoomAdapter
 */

ChatRoomAdapter::ChatRoomAdapter(ChatRoomImplementation* obj) : ManagedObjectAdapter(obj) {
}

Packet* ChatRoomAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		wlock();
		break;
	case 7:
		unlock();
		break;
	case 8:
		sendTo((PlayerCreature*) inv->getObjectParameter());
		break;
	case 9:
		sendDestroyTo((PlayerCreature*) inv->getObjectParameter());
		break;
	case 10:
		addSubRoom((ChatRoom*) inv->getObjectParameter());
		break;
	case 11:
		removeSubRoom((ChatRoom*) inv->getObjectParameter());
		break;
	case 12:
		resp->insertLong(getSubRoom(inv->getSignedIntParameter())->_getObjectID());
		break;
	case 13:
		resp->insertLong(getSubRoom(inv->getAsciiParameter(_param0_getSubRoom__String_))->_getObjectID());
		break;
	case 14:
		addPlayer((PlayerCreature*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 15:
		removePlayer((PlayerCreature*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 16:
		removePlayer(inv->getAsciiParameter(_param0_removePlayer__String_));
		break;
	case 17:
		broadcastMessage((BaseMessage*) inv->getObjectParameter());
		break;
	case 18:
		resp->insertBoolean(hasPlayer((PlayerCreature*) inv->getObjectParameter()));
		break;
	case 19:
		resp->insertBoolean(hasPlayer(inv->getAsciiParameter(_param0_hasPlayer__String_)));
		break;
	case 20:
		removeAllPlayers();
		break;
	case 21:
		setPrivate();
		break;
	case 22:
		setPublic();
		break;
	case 23:
		resp->insertBoolean(isPublic());
		break;
	case 24:
		resp->insertBoolean(isPrivate());
		break;
	case 25:
		resp->insertLong(getPlayer(inv->getSignedIntParameter())->_getObjectID());
		break;
	case 26:
		resp->insertSignedInt(getPlayerSize());
		break;
	case 27:
		setName(inv->getAsciiParameter(_param0_setName__String_));
		break;
	case 28:
		resp->insertAscii(getName());
		break;
	case 29:
		resp->insertAscii(getFullPath());
		break;
	case 30:
		resp->insertAscii(getOwner());
		break;
	case 31:
		resp->insertAscii(getCreator());
		break;
	case 32:
		resp->insertUnicode(getTitle());
		break;
	case 33:
		resp->insertAscii(getServerName());
		break;
	case 34:
		setOwner(inv->getAsciiParameter(_param0_setOwner__String_));
		break;
	case 35:
		setCreator(inv->getAsciiParameter(_param0_setCreator__String_));
		break;
	case 36:
		setTitle(inv->getAsciiParameter(_param0_setTitle__String_));
		break;
	case 37:
		resp->insertInt(getRoomID());
		break;
	case 38:
		resp->insertSignedInt(getSubRoomsSize());
		break;
	case 39:
		resp->insertLong(getParent()->_getObjectID());
		break;
	case 40:
		resp->insertSignedInt(compareTo((ChatRoom*) inv->getObjectParameter()));
		break;
	default:
		return NULL;
	}

	return resp;
}

void ChatRoomAdapter::wlock() {
	return ((ChatRoomImplementation*) impl)->wlock();
}

void ChatRoomAdapter::unlock() {
	return ((ChatRoomImplementation*) impl)->unlock();
}

void ChatRoomAdapter::sendTo(PlayerCreature* player) {
	return ((ChatRoomImplementation*) impl)->sendTo(player);
}

void ChatRoomAdapter::sendDestroyTo(PlayerCreature* player) {
	return ((ChatRoomImplementation*) impl)->sendDestroyTo(player);
}

void ChatRoomAdapter::addSubRoom(ChatRoom* channel) {
	return ((ChatRoomImplementation*) impl)->addSubRoom(channel);
}

void ChatRoomAdapter::removeSubRoom(ChatRoom* channel) {
	return ((ChatRoomImplementation*) impl)->removeSubRoom(channel);
}

ChatRoom* ChatRoomAdapter::getSubRoom(int i) {
	return ((ChatRoomImplementation*) impl)->getSubRoom(i);
}

ChatRoom* ChatRoomAdapter::getSubRoom(const String& name) {
	return ((ChatRoomImplementation*) impl)->getSubRoom(name);
}

void ChatRoomAdapter::addPlayer(PlayerCreature* player, bool doLock) {
	return ((ChatRoomImplementation*) impl)->addPlayer(player, doLock);
}

void ChatRoomAdapter::removePlayer(PlayerCreature* player, bool doLock) {
	return ((ChatRoomImplementation*) impl)->removePlayer(player, doLock);
}

void ChatRoomAdapter::removePlayer(const String& player) {
	return ((ChatRoomImplementation*) impl)->removePlayer(player);
}

void ChatRoomAdapter::broadcastMessage(BaseMessage* msg) {
	return ((ChatRoomImplementation*) impl)->broadcastMessage(msg);
}

bool ChatRoomAdapter::hasPlayer(PlayerCreature* player) {
	return ((ChatRoomImplementation*) impl)->hasPlayer(player);
}

bool ChatRoomAdapter::hasPlayer(const String& name) {
	return ((ChatRoomImplementation*) impl)->hasPlayer(name);
}

void ChatRoomAdapter::removeAllPlayers() {
	return ((ChatRoomImplementation*) impl)->removeAllPlayers();
}

void ChatRoomAdapter::setPrivate() {
	return ((ChatRoomImplementation*) impl)->setPrivate();
}

void ChatRoomAdapter::setPublic() {
	return ((ChatRoomImplementation*) impl)->setPublic();
}

bool ChatRoomAdapter::isPublic() {
	return ((ChatRoomImplementation*) impl)->isPublic();
}

bool ChatRoomAdapter::isPrivate() {
	return ((ChatRoomImplementation*) impl)->isPrivate();
}

PlayerCreature* ChatRoomAdapter::getPlayer(int idx) {
	return ((ChatRoomImplementation*) impl)->getPlayer(idx);
}

int ChatRoomAdapter::getPlayerSize() {
	return ((ChatRoomImplementation*) impl)->getPlayerSize();
}

void ChatRoomAdapter::setName(const String& Name) {
	return ((ChatRoomImplementation*) impl)->setName(Name);
}

String ChatRoomAdapter::getName() {
	return ((ChatRoomImplementation*) impl)->getName();
}

String ChatRoomAdapter::getFullPath() {
	return ((ChatRoomImplementation*) impl)->getFullPath();
}

String ChatRoomAdapter::getOwner() {
	return ((ChatRoomImplementation*) impl)->getOwner();
}

String ChatRoomAdapter::getCreator() {
	return ((ChatRoomImplementation*) impl)->getCreator();
}

UnicodeString ChatRoomAdapter::getTitle() {
	return ((ChatRoomImplementation*) impl)->getTitle();
}

String ChatRoomAdapter::getServerName() {
	return ((ChatRoomImplementation*) impl)->getServerName();
}

void ChatRoomAdapter::setOwner(const String& Owner) {
	return ((ChatRoomImplementation*) impl)->setOwner(Owner);
}

void ChatRoomAdapter::setCreator(const String& Creator) {
	return ((ChatRoomImplementation*) impl)->setCreator(Creator);
}

void ChatRoomAdapter::setTitle(const String& Title) {
	return ((ChatRoomImplementation*) impl)->setTitle(Title);
}

unsigned int ChatRoomAdapter::getRoomID() {
	return ((ChatRoomImplementation*) impl)->getRoomID();
}

int ChatRoomAdapter::getSubRoomsSize() {
	return ((ChatRoomImplementation*) impl)->getSubRoomsSize();
}

ChatRoom* ChatRoomAdapter::getParent() {
	return ((ChatRoomImplementation*) impl)->getParent();
}

int ChatRoomAdapter::compareTo(ChatRoom* obj) {
	return ((ChatRoomImplementation*) impl)->compareTo(obj);
}

/*
 *	ChatRoomHelper
 */

ChatRoomHelper* ChatRoomHelper::staticInitializer = ChatRoomHelper::instance();

ChatRoomHelper::ChatRoomHelper() {
	className = "ChatRoom";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void ChatRoomHelper::finalizeHelper() {
	ChatRoomHelper::finalize();
}

DistributedObject* ChatRoomHelper::instantiateObject() {
	return new ChatRoom(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ChatRoomHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ChatRoomAdapter((ChatRoomImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

