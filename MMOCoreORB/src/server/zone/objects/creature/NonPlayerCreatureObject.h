/*
 *	server/zone/objects/creature/NonPlayerCreatureObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef NONPLAYERCREATUREOBJECT_H_
#define NONPLAYERCREATUREOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

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
namespace area {

class ActiveArea;

} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area;

#include "engine/core/ManagedObject.h"

#include "server/zone/objects/creature/AiAgent.h"

#include "engine/util/u3d/Coordinate.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {

class NonPlayerCreatureObject : public AiAgent {
public:
	NonPlayerCreatureObject();

	bool isNonPlayerCreature();

	void notifyPositionUpdate(QuadTreeEntry* entry);

	void doAwarenessCheck(Coordinate& start, unsigned long long time, CreatureObject* target);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	NonPlayerCreatureObject(DummyConstructorParameter* param);

	virtual ~NonPlayerCreatureObject();

	friend class NonPlayerCreatureObjectHelper;
};

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {
namespace objects {
namespace creature {

class NonPlayerCreatureObjectImplementation : public AiAgentImplementation {

public:
	NonPlayerCreatureObjectImplementation();

	NonPlayerCreatureObjectImplementation(DummyConstructorParameter* param);

	bool isNonPlayerCreature();

	void notifyPositionUpdate(QuadTreeEntry* entry);

	void doAwarenessCheck(Coordinate& start, unsigned long long time, CreatureObject* target);

	NonPlayerCreatureObject* _this;

	operator const NonPlayerCreatureObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~NonPlayerCreatureObjectImplementation();

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

	friend class NonPlayerCreatureObject;
};

class NonPlayerCreatureObjectAdapter : public AiAgentAdapter {
public:
	NonPlayerCreatureObjectAdapter(NonPlayerCreatureObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	bool isNonPlayerCreature();

};

class NonPlayerCreatureObjectHelper : public DistributedObjectClassHelper, public Singleton<NonPlayerCreatureObjectHelper> {
	static NonPlayerCreatureObjectHelper* staticInitializer;

public:
	NonPlayerCreatureObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<NonPlayerCreatureObjectHelper>;
};

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

#endif /*NONPLAYERCREATUREOBJECT_H_*/
