/*
 *	server/zone/ZoneClientSession.h generated by engine3 IDL compiler 0.60
 */

#ifndef ZONECLIENTSESSION_H_
#define ZONECLIENTSESSION_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {

class ZoneServer;

} // namespace zone
} // namespace server

using namespace server::zone;

#include "engine/service/proto/BaseClientProxy.h"

#include "engine/service/proto/BasePacket.h"

#include "engine/core/ManagedObject.h"

#include "system/net/SocketAddress.h"

#include "system/net/Socket.h"

#include "engine/service/proto/events/BaseClientNetStatusCheckupEvent.h"

#include "engine/service/proto/events/BaseClientCleanupEvent.h"

#include "engine/service/proto/events/BaseClientNetStatusRequestEvent.h"

#include "engine/service/proto/events/BaseClientEvent.h"

namespace server {
namespace zone {

class ZoneClientSession : public ManagedObject {
public:
	ZoneClientSession(Socket* sock, SocketAddress* addr);

	void disconnect();

	void disconnect(bool doLock);

	void sendMessage(BasePacket* msg);

	void balancePacketCheckupTime();

	void resetPacketCheckupTime();

	void closeConnection(bool lockPlayer, bool doLock = true);

	void lock(bool doLock = true);

	void unlock(bool doLock = true);

	void info(const String& msg, bool force = false);

	void error(const String& msg);

	void acquire();

	void release();

	String getAddress();

	void setPlayer(SceneObject* playerCreature);

	void setSessionKey(unsigned int key);

	void setAccountID(unsigned int id);

	SceneObject* getPlayer();

	unsigned int getSessionKey();

	unsigned int getAccountID();

protected:
	ZoneClientSession(DummyConstructorParameter* param);

	virtual ~ZoneClientSession();

	void _acquire();

	void _release();

	String _return_getAddress;

	friend class ZoneClientSessionHelper;
};

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class ZoneClientSessionImplementation : public ManagedObjectImplementation, public BaseClientProxy {
protected:
	ManagedWeakReference<SceneObject* > player;

	unsigned int sessionKey;

	unsigned int accountID;

private:
	bool disconnecting;

public:
	ZoneClientSessionImplementation(Socket* sock, SocketAddress* addr);

	ZoneClientSessionImplementation(DummyConstructorParameter* param);

	void disconnect();

	void disconnect(bool doLock);

	void sendMessage(BasePacket* msg);

	void balancePacketCheckupTime();

	void resetPacketCheckupTime();

	void closeConnection(bool lockPlayer, bool doLock = true);

	void lock(bool doLock = true);

	void unlock(bool doLock = true);

	void info(const String& msg, bool force = false);

	void error(const String& msg);

	void acquire();

	void release();

	String getAddress();

	void setPlayer(SceneObject* playerCreature);

	void setSessionKey(unsigned int key);

	void setAccountID(unsigned int id);

	SceneObject* getPlayer();

	unsigned int getSessionKey();

	unsigned int getAccountID();

	ZoneClientSession* _this;

	operator const ZoneClientSession*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~ZoneClientSessionImplementation();

	TransactionalObject* clone();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void _serializationHelperMethod();

	friend class ZoneClientSession;
	friend class TransactionalObjectHandle<ZoneClientSessionImplementation*>;
};

class ZoneClientSessionAdapter : public ManagedObjectAdapter {
public:
	ZoneClientSessionAdapter(ZoneClientSessionImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void disconnect();

	void disconnect(bool doLock);

	void sendMessage(BasePacket* msg);

	void balancePacketCheckupTime();

	void resetPacketCheckupTime();

	void closeConnection(bool lockPlayer, bool doLock);

	void lock(bool doLock);

	void unlock(bool doLock);

	void info(const String& msg, bool force);

	void error(const String& msg);

	void acquire();

	void release();

	String getAddress();

	void setPlayer(SceneObject* playerCreature);

	void setSessionKey(unsigned int key);

	void setAccountID(unsigned int id);

	SceneObject* getPlayer();

	unsigned int getSessionKey();

	unsigned int getAccountID();

protected:
	String _param0_info__String_bool_;
	String _param0_error__String_;
};

class ZoneClientSessionHelper : public DistributedObjectClassHelper, public Singleton<ZoneClientSessionHelper> {
	static ZoneClientSessionHelper* staticInitializer;

public:
	ZoneClientSessionHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ZoneClientSessionHelper>;
};

} // namespace zone
} // namespace server

using namespace server::zone;

#endif /*ZONECLIENTSESSION_H_*/
