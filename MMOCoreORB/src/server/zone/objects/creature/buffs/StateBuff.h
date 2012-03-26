/*
 *	server/zone/objects/creature/buffs/StateBuff.h generated by engine3 IDL compiler 0.60
 */

#ifndef STATEBUFF_H_
#define STATEBUFF_H_

#include "engine/core/Core.h"

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

#include "server/zone/objects/creature/buffs/BuffType.h"

#include "engine/core/ManagedObject.h"

#include "server/zone/objects/creature/buffs/Buff.h"

#include "system/lang/Long.h"

#include "system/lang/String.h"

#include "engine/log/Logger.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace buffs {

class StateBuff : public Buff {
public:
	StateBuff(CreatureObject* creo, unsigned long long buffState, int duration);

	void activate(bool applyModifiers);

	void deactivate(bool removeModifiers);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	StateBuff(DummyConstructorParameter* param);

	virtual ~StateBuff();

	friend class StateBuffHelper;
};

} // namespace buffs
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::buffs;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace buffs {

class StateBuffImplementation : public BuffImplementation {
protected:
	unsigned long long stateApplied;

public:
	StateBuffImplementation(CreatureObject* creo, unsigned long long buffState, int duration);

	StateBuffImplementation(DummyConstructorParameter* param);

	void activate(bool applyModifiers);

	void deactivate(bool removeModifiers);

	WeakReference<StateBuff*> _this;

	operator const StateBuff*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~StateBuffImplementation();

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

	friend class StateBuff;
};

class StateBuffAdapter : public BuffAdapter {
public:
	StateBuffAdapter(StateBuff* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void activate(bool applyModifiers);

	void deactivate(bool removeModifiers);

};

class StateBuffHelper : public DistributedObjectClassHelper, public Singleton<StateBuffHelper> {
	static StateBuffHelper* staticInitializer;

public:
	StateBuffHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<StateBuffHelper>;
};

} // namespace buffs
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::buffs;

#endif /*STATEBUFF_H_*/
