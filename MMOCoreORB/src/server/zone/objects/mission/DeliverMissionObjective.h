/*
 *	server/zone/objects/mission/DeliverMissionObjective.h generated by engine3 IDL compiler 0.60
 */

#ifndef DELIVERMISSIONOBJECTIVE_H_
#define DELIVERMISSIONOBJECTIVE_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace mission {

class MissionObject;

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

namespace server {
namespace zone {
namespace objects {
namespace mission {

class MissionObserver;

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

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
namespace creature {

class AiAgent;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

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
namespace objects {
namespace tangible {

class TangibleObject;

} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible;

namespace server {
namespace zone {
namespace templates {

class SharedObjectTemplate;

} // namespace templates
} // namespace zone
} // namespace server

using namespace server::zone::templates;

namespace server {
namespace zone {
namespace objects {
namespace area {

class MissionSpawnActiveArea;

} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area;

#include "server/zone/templates/TemplateReference.h"

#include "server/zone/managers/mission/spawnmaps/NpcSpawnPoint.h"

#include "engine/util/Observer.h"

#include "engine/util/Observable.h"

#include "server/zone/objects/mission/MissionObjective.h"

namespace server {
namespace zone {
namespace objects {
namespace mission {

class DeliverMissionObjective : public MissionObjective {
public:
	static const int INITSTATUS = 0;

	static const int PICKEDUPSTATUS = 1;

	static const int DELIVEREDSTATUS = 2;

	DeliverMissionObjective(MissionObject* mission);

	void initializeTransientMembers();

	TangibleObject* getItem();

	int getObjectiveStatus();

	void activate();

	bool activateWithResult();

	void abort();

	void complete();

	void despawnNpcs();

	void updateMissionStatus(CreatureObject* player);

	bool updateMissionTarget(CreatureObject* player);

	NpcSpawnPoint* getTargetSpawnPoint();

	NpcSpawnPoint* getDestinationSpawnPoint();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	DeliverMissionObjective(DummyConstructorParameter* param);

	virtual ~DeliverMissionObjective();

	friend class DeliverMissionObjectiveHelper;
};

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

namespace server {
namespace zone {
namespace objects {
namespace mission {

class DeliverMissionObjectiveImplementation : public MissionObjectiveImplementation {
protected:
	ManagedReference<AiAgent* > target;

	ManagedReference<AiAgent* > destination;

	ManagedReference<TangibleObject* > item;

	Reference<NpcSpawnPoint* > targetSpawnPoint;

	Reference<NpcSpawnPoint* > destinationSpawnPoint;

	int objectiveStatus;

public:
	static const int INITSTATUS = 0;

	static const int PICKEDUPSTATUS = 1;

	static const int DELIVEREDSTATUS = 2;

	DeliverMissionObjectiveImplementation(MissionObject* mission);

	DeliverMissionObjectiveImplementation(DummyConstructorParameter* param);

	void finalize();

	void initializeTransientMembers();

	TangibleObject* getItem();

	int getObjectiveStatus();

	virtual void activate();

	bool activateWithResult();

	virtual void abort();

	virtual void complete();

	void despawnNpcs();

	virtual void updateMissionStatus(CreatureObject* player);

	virtual bool updateMissionTarget(CreatureObject* player);

	NpcSpawnPoint* getTargetSpawnPoint();

	NpcSpawnPoint* getDestinationSpawnPoint();

	WeakReference<DeliverMissionObjective*> _this;

	operator const DeliverMissionObjective*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~DeliverMissionObjectiveImplementation();

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

	friend class DeliverMissionObjective;
};

class DeliverMissionObjectiveAdapter : public MissionObjectiveAdapter {
public:
	DeliverMissionObjectiveAdapter(DeliverMissionObjective* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void finalize();

	void initializeTransientMembers();

	TangibleObject* getItem();

	int getObjectiveStatus();

	void activate();

	bool activateWithResult();

	void abort();

	void complete();

	void despawnNpcs();

	void updateMissionStatus(CreatureObject* player);

	bool updateMissionTarget(CreatureObject* player);

	NpcSpawnPoint* getTargetSpawnPoint();

	NpcSpawnPoint* getDestinationSpawnPoint();

};

class DeliverMissionObjectiveHelper : public DistributedObjectClassHelper, public Singleton<DeliverMissionObjectiveHelper> {
	static DeliverMissionObjectiveHelper* staticInitializer;

public:
	DeliverMissionObjectiveHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<DeliverMissionObjectiveHelper>;
};

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

#endif /*DELIVERMISSIONOBJECTIVE_H_*/
