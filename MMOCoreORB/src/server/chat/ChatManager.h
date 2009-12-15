/*
 *	server/chat/ChatManager.h generated by engine3 IDL compiler 0.60
 */

#ifndef CHATMANAGER_H_
#define CHATMANAGER_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

namespace server {
namespace zone {

class ZoneServer;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace chat {
namespace room {

class ChatRoom;

} // namespace room
} // namespace chat
} // namespace server

using namespace server::chat::room;

namespace server {
namespace chat {
namespace room {

class ChatRoomMap;

} // namespace room
} // namespace chat
} // namespace server

using namespace server::chat::room;

namespace server {
namespace zone {
namespace objects {
namespace player {

class PlayerCreature;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

namespace server {
namespace zone {
namespace packets {
namespace object {

class StfParameter;

} // namespace object
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::object;

namespace server {
namespace zone {
namespace managers {
namespace player {

class PlayerMap;

} // namespace player
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::player;

namespace server {
namespace zone {
namespace managers {
namespace player {

class PlayerManager;

} // namespace player
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::player;

namespace server {
namespace zone {
namespace objects {
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {
namespace packets {
namespace chat {

class ChatRoomList;

} // namespace chat
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::chat;

namespace server {
namespace zone {
namespace packets {
namespace chat {

class ChatInstantMessageToCharacter;

} // namespace chat
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::chat;

#include "engine/core/ManagedObject.h"

#include "engine/service/proto/BaseMessage.h"

#include "system/util/VectorMap.h"

namespace server {
namespace chat {

class ChatManager : public ManagedObject {
public:
	ChatManager(ZoneServer* serv, int initsize);

	void initiateRooms();

	void destroyRooms();

	void addRoom(ChatRoom* channel);

	void removeRoom(ChatRoom* channel);

	void populateRoomListMessage(ChatRoom* channel, ChatRoomList* msg);

	void sendRoomList(PlayerCreature* player);

	void addPlayer(PlayerCreature* player);

	PlayerCreature* getPlayer(const String& name);

	PlayerCreature* removePlayer(const String& name);

	void broadcastMessage(CreatureObject* player, const UnicodeString& message, unsigned long long target = 0, unsigned int moodid = 0, unsigned int mood2 = 0);

	void handleSpatialChatInternalMessage(PlayerCreature* player, const UnicodeString& args);

	void handleChatInstantMessageToCharacter(ChatInstantMessageToCharacter* message);

	unsigned long long getNextRoomID();

protected:
	ChatManager(DummyConstructorParameter* param);

	virtual ~ChatManager();

	friend class ChatManagerHelper;
};

} // namespace chat
} // namespace server

using namespace server::chat;

namespace server {
namespace chat {

class ChatManagerImplementation : public ManagedObjectImplementation {
	ManagedReference<ZoneServer* > server;

	ManagedReference<PlayerManager* > playerManager;

	PlayerMap* playerMap;

	VectorMap<String, ManagedReference<ChatRoom* > > gameRooms;

	ManagedReference<ChatRoom* > groupRoom;

	ManagedReference<ChatRoom* > guildRoom;

	ChatRoomMap* roomMap;

	unsigned long long roomID;

	bool mute;

public:
	ChatManagerImplementation(ZoneServer* serv, int initsize);

	ChatManagerImplementation(DummyConstructorParameter* param);

	void initiateRooms();

	void destroyRooms();

	void addRoom(ChatRoom* channel);

	void removeRoom(ChatRoom* channel);

	void populateRoomListMessage(ChatRoom* channel, ChatRoomList* msg);

	void sendRoomList(PlayerCreature* player);

	void addPlayer(PlayerCreature* player);

	PlayerCreature* getPlayer(const String& name);

	PlayerCreature* removePlayer(const String& name);

	void broadcastMessage(CreatureObject* player, const UnicodeString& message, unsigned long long target = 0, unsigned int moodid = 0, unsigned int mood2 = 0);

	void handleSpatialChatInternalMessage(PlayerCreature* player, const UnicodeString& args);

	void handleChatInstantMessageToCharacter(ChatInstantMessageToCharacter* message);

	unsigned long long getNextRoomID();

	ChatManager* _this;

	operator const ChatManager*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~ChatManagerImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();

	friend class ChatManager;
};

class ChatManagerAdapter : public ManagedObjectAdapter {
public:
	ChatManagerAdapter(ChatManagerImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initiateRooms();

	void destroyRooms();

	void addRoom(ChatRoom* channel);

	void removeRoom(ChatRoom* channel);

	void populateRoomListMessage(ChatRoom* channel, ChatRoomList* msg);

	void sendRoomList(PlayerCreature* player);

	void addPlayer(PlayerCreature* player);

	PlayerCreature* getPlayer(const String& name);

	PlayerCreature* removePlayer(const String& name);

	void broadcastMessage(CreatureObject* player, const UnicodeString& message, unsigned long long target, unsigned int moodid, unsigned int mood2);

	void handleSpatialChatInternalMessage(PlayerCreature* player, const UnicodeString& args);

	unsigned long long getNextRoomID();

protected:
	String _param0_getPlayer__String_;
	String _param0_removePlayer__String_;
	UnicodeString _param1_broadcastMessage__CreatureObject_UnicodeString_long_int_int_;
	UnicodeString _param1_handleSpatialChatInternalMessage__PlayerCreature_UnicodeString_;
};

class ChatManagerHelper : public DistributedObjectClassHelper, public Singleton<ChatManagerHelper> {
	static ChatManagerHelper* staticInitializer;

public:
	ChatManagerHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ChatManagerHelper>;
};

} // namespace chat
} // namespace server

using namespace server::chat;

#endif /*CHATMANAGER_H_*/
