/*
 *	server/zone/objects/tangible/deed/playerhousedeed/PlayerHouseDeed.h generated by engine3 IDL compiler 0.55
 */

#ifndef PLAYERHOUSEDEED_H_
#define PLAYERHOUSEDEED_H_

#include "engine/orb/DistributedObjectBroker.h"

class DeedObject;

class TangibleObject;

class packets;

class Player;

class CreatureObject;

#include "../DeedObject.h"

class PlayerHouseDeed : public DeedObject {
public:
	PlayerHouseDeed(CreatureObject* creature, int tempCRC, const UnicodeString& n, const String& tempn);

	PlayerHouseDeed(unsigned long long oid, int tempCRC, const UnicodeString& n, const String& tempn);

	int getCellCount();

protected:
	PlayerHouseDeed(DummyConstructorParameter* param);

	virtual ~PlayerHouseDeed();

	friend class PlayerHouseDeedHelper;
};

class PlayerHouseDeedImplementation;

class PlayerHouseDeedAdapter : public DeedObjectAdapter {
public:
	PlayerHouseDeedAdapter(PlayerHouseDeedImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int getCellCount();

};

class PlayerHouseDeedHelper : public DistributedObjectClassHelper, public Singleton<PlayerHouseDeedHelper> {
	static PlayerHouseDeedHelper* staticInitializer;

public:
	PlayerHouseDeedHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<PlayerHouseDeedHelper>;
};

#include "../DeedObjectImplementation.h"

class PlayerHouseDeedServant : public DeedObjectImplementation {
public:
	PlayerHouseDeed* _this;

public:
	PlayerHouseDeedServant(CreatureObject* creature, int tempCRC, const UnicodeString& n, const String& tempn, int tp);
	PlayerHouseDeedServant(unsigned long long oid, int tempCRC, const UnicodeString& n, const String& tempn, int tp);
	virtual ~PlayerHouseDeedServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*PLAYERHOUSEDEED_H_*/
