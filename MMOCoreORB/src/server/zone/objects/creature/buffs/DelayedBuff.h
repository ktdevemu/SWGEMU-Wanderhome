/*
 *	server/zone/objects/creature/buffs/DelayedBuff.h generated by engine3 IDL compiler 0.60
 */

#ifndef DELAYEDBUFF_H_
#define DELAYEDBUFF_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

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
namespace creature {
namespace buffs {

class BuffDurationEvent;

} // namespace buffs
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::buffs;

#include "server/zone/ZoneProcessServer.h"

#include "server/zone/objects/creature/buffs/BuffType.h"

#include "server/chat/StringIdChatParameter.h"

#include "engine/core/ManagedObject.h"

#include "system/util/VectorMap.h"

#include "system/lang/ref/Reference.h"

#include "system/lang/Time.h"

#include "server/zone/objects/creature/buffs/Buff.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace buffs {

class DelayedBuff : public Buff {
public:
	DelayedBuff(CreatureObject* creo, unsigned int buffcrc, int duration);

	void activate();

	void deactivate();

	void useCharge(CreatureObject* creature);

	void setUsesRemaining(int uses);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	DelayedBuff(DummyConstructorParameter* param);

	virtual ~DelayedBuff();

	friend class DelayedBuffHelper;
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

class DelayedBuffImplementation : public BuffImplementation {
protected:
	int usesRemaining;

public:
	DelayedBuffImplementation(CreatureObject* creo, unsigned int buffcrc, int duration);

	DelayedBuffImplementation(DummyConstructorParameter* param);

	void activate();

	void deactivate();

	void useCharge(CreatureObject* creature);

	void setUsesRemaining(int uses);

	WeakReference<DelayedBuff*> _this;

	operator const DelayedBuff*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~DelayedBuffImplementation();

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

	friend class DelayedBuff;
};

class DelayedBuffAdapter : public BuffAdapter {
public:
	DelayedBuffAdapter(DelayedBuffImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void activate();

	void deactivate();

	void useCharge(CreatureObject* creature);

	void setUsesRemaining(int uses);

};

class DelayedBuffHelper : public DistributedObjectClassHelper, public Singleton<DelayedBuffHelper> {
	static DelayedBuffHelper* staticInitializer;

public:
	DelayedBuffHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<DelayedBuffHelper>;
};

} // namespace buffs
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::buffs;

#endif /*DELAYEDBUFF_H_*/
