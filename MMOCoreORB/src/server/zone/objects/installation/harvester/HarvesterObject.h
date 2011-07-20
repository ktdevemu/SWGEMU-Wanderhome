/*
 *	server/zone/objects/installation/harvester/HarvesterObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef HARVESTEROBJECT_H_
#define HARVESTEROBJECT_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace area {

class ActiveArea;

} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area;

#include "server/zone/objects/installation/InstallationObject.h"

namespace server {
namespace zone {
namespace objects {
namespace installation {
namespace harvester {

class HarvesterObject : public InstallationObject {
public:
	HarvesterObject();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void synchronizedUIListen(SceneObject* player, int value);

	void synchronizedUIStopListen(SceneObject* player, int value);

	void updateOperators();

	bool isHarvesterObject();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	HarvesterObject(DummyConstructorParameter* param);

	virtual ~HarvesterObject();

	friend class HarvesterObjectHelper;
};

} // namespace harvester
} // namespace installation
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::installation::harvester;

namespace server {
namespace zone {
namespace objects {
namespace installation {
namespace harvester {

class HarvesterObjectImplementation : public InstallationObjectImplementation {

public:
	HarvesterObjectImplementation();

	HarvesterObjectImplementation(DummyConstructorParameter* param);

	void loadTemplateData(SharedObjectTemplate* templateData);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void synchronizedUIListen(SceneObject* player, int value);

	void synchronizedUIStopListen(SceneObject* player, int value);

	void updateOperators();

	bool isHarvesterObject();

	WeakReference<HarvesterObject*> _this;

	operator const HarvesterObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~HarvesterObjectImplementation();

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
	bool readObjectMember(ObjectInputStream* stream, const String& name);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class HarvesterObject;
};

class HarvesterObjectAdapter : public InstallationObjectAdapter {
public:
	HarvesterObjectAdapter(HarvesterObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void synchronizedUIListen(SceneObject* player, int value);

	void synchronizedUIStopListen(SceneObject* player, int value);

	void updateOperators();

	bool isHarvesterObject();

};

class HarvesterObjectHelper : public DistributedObjectClassHelper, public Singleton<HarvesterObjectHelper> {
	static HarvesterObjectHelper* staticInitializer;

public:
	HarvesterObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<HarvesterObjectHelper>;
};

} // namespace harvester
} // namespace installation
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::installation::harvester;

#endif /*HARVESTEROBJECT_H_*/
