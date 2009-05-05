/*
 *	server/zone/objects/tangible/deed/vehicledeed/VehicleDeed.h generated by engine3 IDL compiler 0.55
 */

#ifndef VEHICLEDEED_H_
#define VEHICLEDEED_H_

#include "engine/orb/DistributedObjectBroker.h"

class DeedObject;

class CreatureObject;

class Player;

class SceneObject;

#include "../DeedObject.h"

class VehicleDeed : public DeedObject {
public:
	VehicleDeed(CreatureObject* creature, unsigned int objcrc, const UnicodeString& customname, const String& stfname);

	VehicleDeed(unsigned long long objid, unsigned int objcrc, const UnicodeString& customname, const String& stfname);

	int useObject(Player* player);

	SceneObject* generateObject(Player* player);

	void parseItemAttributes();

	void setTargetConditionMax(unsigned int condmax);

	unsigned int getTargetConditionMax();

protected:
	VehicleDeed(DummyConstructorParameter* param);

	virtual ~VehicleDeed();

	friend class VehicleDeedHelper;
};

class VehicleDeedImplementation;

class VehicleDeedAdapter : public DeedObjectAdapter {
public:
	VehicleDeedAdapter(VehicleDeedImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int useObject(Player* player);

	SceneObject* generateObject(Player* player);

	void parseItemAttributes();

	void setTargetConditionMax(unsigned int condmax);

	unsigned int getTargetConditionMax();

};

class VehicleDeedHelper : public DistributedObjectClassHelper, public Singleton<VehicleDeedHelper> {
	static VehicleDeedHelper* staticInitializer;

public:
	VehicleDeedHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<VehicleDeedHelper>;
};

#include "../DeedObjectImplementation.h"

class VehicleDeedServant : public DeedObjectImplementation {
public:
	VehicleDeed* _this;

public:
	VehicleDeedServant(CreatureObject* creature, unsigned int objcrc, const UnicodeString& customname, const String& stfname);
	VehicleDeedServant(unsigned long long objid, unsigned int objcrc, const UnicodeString& customname, const String& stfname);
	virtual ~VehicleDeedServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*VEHICLEDEED_H_*/
