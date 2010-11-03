/*
 *	server/zone/objects/tangible/terminal/bazaar/BazaarTerminal.h generated by engine3 IDL compiler 0.60
 */

#ifndef BAZAARTERMINAL_H_
#define BAZAARTERMINAL_H_

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

class ObjectMenuResponse;

} // namespace object
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::object;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace terminal {
namespace bazaar {

class AuctionItem;

} // namespace bazaar
} // namespace terminal
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::terminal::bazaar;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

#include "server/zone/objects/tangible/terminal/Terminal.h"

#include "system/util/VectorMap.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace terminal {
namespace bazaar {

class BazaarTerminal : public Terminal {
public:
	BazaarTerminal();

	void initializeTransientMembers();

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	void addAuction(AuctionItem* item);

	void dropAuction(unsigned long long auctionItemID);

	VectorMap<unsigned long long, ManagedReference<AuctionItem* > >* getAuctions();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	BazaarTerminal(DummyConstructorParameter* param);

	virtual ~BazaarTerminal();

	friend class BazaarTerminalHelper;
};

} // namespace bazaar
} // namespace terminal
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::terminal::bazaar;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace terminal {
namespace bazaar {

class BazaarTerminalImplementation : public TerminalImplementation {
protected:
	VectorMap<unsigned long long, ManagedReference<AuctionItem* > > auctions;

public:
	BazaarTerminalImplementation();

	BazaarTerminalImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	void addAuction(AuctionItem* item);

	void dropAuction(unsigned long long auctionItemID);

	VectorMap<unsigned long long, ManagedReference<AuctionItem* > >* getAuctions();

	BazaarTerminal* _this;

	operator const BazaarTerminal*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~BazaarTerminalImplementation();

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

	friend class BazaarTerminal;
};

class BazaarTerminalAdapter : public TerminalAdapter {
public:
	BazaarTerminalAdapter(BazaarTerminalImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	void addAuction(AuctionItem* item);

	void dropAuction(unsigned long long auctionItemID);

};

class BazaarTerminalHelper : public DistributedObjectClassHelper, public Singleton<BazaarTerminalHelper> {
	static BazaarTerminalHelper* staticInitializer;

public:
	BazaarTerminalHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<BazaarTerminalHelper>;
};

} // namespace bazaar
} // namespace terminal
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::terminal::bazaar;

#endif /*BAZAARTERMINAL_H_*/
