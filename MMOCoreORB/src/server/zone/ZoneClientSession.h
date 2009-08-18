/*
 *	server/zone/ZoneClientSession.h generated by engine3 IDL compiler 0.60
 */

#ifndef ZONECLIENTSESSION_H_
#define ZONECLIENTSESSION_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

namespace server {
namespace zone {

class ZoneServer;

} // namespace zone
} // namespace server

using namespace server::zone;

#include "engine/service/proto/BaseClientProxy.h"

#include "engine/service/proto/BasePacket.h"

#include "engine/service/DatagramServiceThread.h"

#include "system/net/SocketAddress.h"

#include "system/net/Socket.h"

#include "engine/core/ManagedObject.h"

#include "server/zone/objects/scene/SceneObject.h"

namespace server {
namespace zone {

class ZoneClientSession : public ManagedObject {
public:
	ZoneClientSession(DatagramServiceThread* serv, Socket* sock, SocketAddress* addr);

	void sendMessage(BasePacket* msg);

	void disconnect();

	void disconnect(bool doLock);

	void balancePacketCheckupTime();

	void resetPacketCheckupTime();

	void closeConnection(bool lockPlayer, bool doLock = true);

	void lock(bool doLock = true);

	void unlock(bool doLock = true);

	String getAddress();

	void setPlayer(SceneObject* playerCreature);

	void setSessionKey(unsigned int key);

	SceneObject* getPlayer();

	unsigned int getSessionKey();

protected:
	ZoneClientSession(DummyConstructorParameter* param);

	virtual ~ZoneClientSession();

	String _return_getAddress;

	friend class ZoneClientSessionHelper;
};

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class ZoneClientSessionImplementation : public ManagedObjectImplementation, public BaseClientProxy {
	ManagedReference<SceneObject* > player;

	unsigned int sessionKey;

	bool disconnecting;

public:
	ZoneClientSessionImplementation(DatagramServiceThread* serv, Socket* sock, SocketAddress* addr);

	void sendMessage(BasePacket* msg);

	void disconnect();

	void disconnect(bool doLock);

	void balancePacketCheckupTime();

	void resetPacketCheckupTime();

	void closeConnection(bool lockPlayer, bool doLock = true);

	void lock(bool doLock = true);

	void unlock(bool doLock = true);

	String getAddress();

	void setPlayer(SceneObject* playerCreature);

	void setSessionKey(unsigned int key);

	SceneObject* getPlayer();

	unsigned int getSessionKey();

	ZoneClientSession* _this;

	operator const ZoneClientSession*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~ZoneClientSessionImplementation();

	void _setStub(DistributedObjectStub* stub);

	void _serializationHelperMethod();

	friend class ZoneClientSession;
};

class ZoneClientSessionAdapter : public ManagedObjectAdapter {
public:
	ZoneClientSessionAdapter(ZoneClientSessionImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void sendMessage(BasePacket* msg);

	void disconnect();

	void disconnect(bool doLock);

	void balancePacketCheckupTime();

	void resetPacketCheckupTime();

	void closeConnection(bool lockPlayer, bool doLock);

	void lock(bool doLock);

	void unlock(bool doLock);

	String getAddress();

	void setPlayer(SceneObject* playerCreature);

	void setSessionKey(unsigned int key);

	SceneObject* getPlayer();

	unsigned int getSessionKey();

};

class ZoneClientSessionHelper : public DistributedObjectClassHelper, public Singleton<ZoneClientSessionHelper> {
	static ZoneClientSessionHelper* staticInitializer;

public:
	ZoneClientSessionHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ZoneClientSessionHelper>;
};

} // namespace zone
} // namespace server

using namespace server::zone;

#endif /*ZONECLIENTSESSION_H_*/
