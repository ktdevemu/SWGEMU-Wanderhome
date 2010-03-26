/*
 *	server/zone/managers/bazaar/BazaarManager.h generated by engine3 IDL compiler 0.60
 */

#ifndef BAZAARMANAGER_H_
#define BAZAARMANAGER_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {

class ZoneServer;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace managers {
namespace object {

class ObjectManager;

} // namespace object
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::object;

namespace server {
namespace zone {

class ZoneServer;

} // namespace zone
} // namespace server

using namespace server::zone;

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
namespace managers {
namespace bazaar {

class BazaarAuctionsMap;

} // namespace bazaar
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::bazaar;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace terminal {
namespace bazaar {

class BazaarTerminal;

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
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

#include "server/zone/packets/auction/AuctionQueryHeadersResponseMessage.h"

#include "engine/log/Logger.h"

#include "engine/core/ManagedObject.h"

namespace server {
namespace zone {
namespace managers {
namespace bazaar {

class BazaarManager : public ManagedObject {
public:
	static const int MAXPRICE = 20000;

	static const int MAXSALES = 20;

	static const int SALESFEE = 5;

	static const int CHECKEVERY = 2;

	BazaarManager(ZoneServer* server);

	void initialize();

	void checkAuctions();

	void addSaleItem(PlayerCreature* player, unsigned long long objectid, unsigned long long bazaarid, const UnicodeString& description, int price, unsigned int duration, bool auction);

	AuctionItem* createAuctionItem(PlayerCreature* player, SceneObject* objectToSell, BazaarTerminal* terminal, const UnicodeString& description, int price, unsigned int duration, bool auction);

	int checkSaleItem(PlayerCreature* player, SceneObject* object, int price);

	void getItemAttributes(PlayerCreature* player, unsigned long long objectid);

	void getBazaarData(PlayerCreature* player, int extent, unsigned long long bazaarObjectid, int screen, unsigned int category, int count, int offset);

	void getAllBazaarData(PlayerCreature* player, BazaarTerminal* terminal, int screen, unsigned int category, int count, int offset);

	void getPlanetBazaarData(PlayerCreature* player, BazaarTerminal* terminal, int screen, unsigned int category, int count, int offset);

	void getRegionBazaarData(PlayerCreature* player, BazaarTerminal* terminal, int screen, unsigned int category, int count, int offset);

	int checkRetrieve(PlayerCreature* player, unsigned long long objectIdToRetrieve, BazaarTerminal* terminal);

	void retrieveItem(PlayerCreature* player, unsigned long long objectid, unsigned long long bazaarid);

	void buyItem(PlayerCreature* player, unsigned long long objectid, int price1, int price2);

	void doAuctionBid(PlayerCreature* player, AuctionItem* item, int price1, int price2);

	void doInstantBuy(PlayerCreature* player, AuctionItem* item, int price1, int price2);

	int checkBidAuction(PlayerCreature* player, AuctionItem* item, int price1, int price2);

	AuctionQueryHeadersResponseMessage* fillAuctionQueryHeadersResponseMessage(PlayerCreature* player, VectorMap<unsigned long long, ManagedReference<AuctionItem* > >* items, int screen, unsigned int category, int count, int offset);

protected:
	BazaarManager(DummyConstructorParameter* param);

	virtual ~BazaarManager();

	friend class BazaarManagerHelper;
};

} // namespace bazaar
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::bazaar;

namespace server {
namespace zone {
namespace managers {
namespace bazaar {

class BazaarManagerImplementation : public ManagedObjectImplementation, public Logger {
protected:
	ManagedReference<BazaarAuctionsMap* > auctionMap;

	ManagedWeakReference<ZoneServer* > zoneServer;

public:
	static const int MAXPRICE = 20000;

	static const int MAXSALES = 20;

	static const int SALESFEE = 5;

	static const int CHECKEVERY = 2;

	BazaarManagerImplementation(ZoneServer* server);

	BazaarManagerImplementation(DummyConstructorParameter* param);

	void initialize();

	void checkAuctions();

	void addSaleItem(PlayerCreature* player, unsigned long long objectid, unsigned long long bazaarid, const UnicodeString& description, int price, unsigned int duration, bool auction);

	AuctionItem* createAuctionItem(PlayerCreature* player, SceneObject* objectToSell, BazaarTerminal* terminal, const UnicodeString& description, int price, unsigned int duration, bool auction);

	int checkSaleItem(PlayerCreature* player, SceneObject* object, int price);

	void getItemAttributes(PlayerCreature* player, unsigned long long objectid);

	void getBazaarData(PlayerCreature* player, int extent, unsigned long long bazaarObjectid, int screen, unsigned int category, int count, int offset);

	void getAllBazaarData(PlayerCreature* player, BazaarTerminal* terminal, int screen, unsigned int category, int count, int offset);

	void getPlanetBazaarData(PlayerCreature* player, BazaarTerminal* terminal, int screen, unsigned int category, int count, int offset);

	void getRegionBazaarData(PlayerCreature* player, BazaarTerminal* terminal, int screen, unsigned int category, int count, int offset);

private:
	void refundAuction(AuctionItem* item);

public:
	int checkRetrieve(PlayerCreature* player, unsigned long long objectIdToRetrieve, BazaarTerminal* terminal);

	void retrieveItem(PlayerCreature* player, unsigned long long objectid, unsigned long long bazaarid);

	void buyItem(PlayerCreature* player, unsigned long long objectid, int price1, int price2);

	void doAuctionBid(PlayerCreature* player, AuctionItem* item, int price1, int price2);

	void doInstantBuy(PlayerCreature* player, AuctionItem* item, int price1, int price2);

	int checkBidAuction(PlayerCreature* player, AuctionItem* item, int price1, int price2);

	AuctionQueryHeadersResponseMessage* fillAuctionQueryHeadersResponseMessage(PlayerCreature* player, VectorMap<unsigned long long, ManagedReference<AuctionItem* > >* items, int screen, unsigned int category, int count, int offset);

	BazaarManager* _this;

	operator const BazaarManager*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~BazaarManagerImplementation();

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

	friend class BazaarManager;
};

class BazaarManagerAdapter : public ManagedObjectAdapter {
public:
	BazaarManagerAdapter(BazaarManagerImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initialize();

	void checkAuctions();

	void addSaleItem(PlayerCreature* player, unsigned long long objectid, unsigned long long bazaarid, const UnicodeString& description, int price, unsigned int duration, bool auction);

	AuctionItem* createAuctionItem(PlayerCreature* player, SceneObject* objectToSell, BazaarTerminal* terminal, const UnicodeString& description, int price, unsigned int duration, bool auction);

	int checkSaleItem(PlayerCreature* player, SceneObject* object, int price);

	void getItemAttributes(PlayerCreature* player, unsigned long long objectid);

	void getBazaarData(PlayerCreature* player, int extent, unsigned long long bazaarObjectid, int screen, unsigned int category, int count, int offset);

	void getAllBazaarData(PlayerCreature* player, BazaarTerminal* terminal, int screen, unsigned int category, int count, int offset);

	void getPlanetBazaarData(PlayerCreature* player, BazaarTerminal* terminal, int screen, unsigned int category, int count, int offset);

	void getRegionBazaarData(PlayerCreature* player, BazaarTerminal* terminal, int screen, unsigned int category, int count, int offset);

	int checkRetrieve(PlayerCreature* player, unsigned long long objectIdToRetrieve, BazaarTerminal* terminal);

	void retrieveItem(PlayerCreature* player, unsigned long long objectid, unsigned long long bazaarid);

	void buyItem(PlayerCreature* player, unsigned long long objectid, int price1, int price2);

	void doAuctionBid(PlayerCreature* player, AuctionItem* item, int price1, int price2);

	void doInstantBuy(PlayerCreature* player, AuctionItem* item, int price1, int price2);

	int checkBidAuction(PlayerCreature* player, AuctionItem* item, int price1, int price2);

protected:
	UnicodeString _param3_addSaleItem__PlayerCreature_long_long_UnicodeString_int_int_bool_;
	UnicodeString _param3_createAuctionItem__PlayerCreature_SceneObject_BazaarTerminal_UnicodeString_int_int_bool_;
};

class BazaarManagerHelper : public DistributedObjectClassHelper, public Singleton<BazaarManagerHelper> {
	static BazaarManagerHelper* staticInitializer;

public:
	BazaarManagerHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<BazaarManagerHelper>;
};

} // namespace bazaar
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::bazaar;

#endif /*BAZAARMANAGER_H_*/
