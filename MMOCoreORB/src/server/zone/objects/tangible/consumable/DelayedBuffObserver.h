/*
 *	server/zone/objects/tangible/consumable/DelayedBuffObserver.h generated by engine3 IDL compiler 0.60
 */

#ifndef DELAYEDBUFFOBSERVER_H_
#define DELAYEDBUFFOBSERVER_H_

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
namespace objects {
namespace creature {
namespace buffs {

class DelayedBuff;

} // namespace buffs
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::buffs;

#include "engine/core/ManagedObject.h"

#include "engine/util/Observer.h"

#include "engine/util/Observable.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace consumable {

class DelayedBuffObserver : public Observer {
public:
	DelayedBuffObserver(DelayedBuff* b);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	DelayedBuffObserver(DummyConstructorParameter* param);

	virtual ~DelayedBuffObserver();

	friend class DelayedBuffObserverHelper;
};

} // namespace consumable
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::consumable;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace consumable {

class DelayedBuffObserverImplementation : public ObserverImplementation, public Logger {
protected:
	ManagedReference<DelayedBuff* > buff;

public:
	DelayedBuffObserverImplementation(DelayedBuff* b);

	DelayedBuffObserverImplementation(DummyConstructorParameter* param);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	WeakReference<DelayedBuffObserver*> _this;

	operator const DelayedBuffObserver*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~DelayedBuffObserverImplementation();

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

	friend class DelayedBuffObserver;
};

class DelayedBuffObserverAdapter : public ObserverAdapter {
public:
	DelayedBuffObserverAdapter(DelayedBuffObserver* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

};

class DelayedBuffObserverHelper : public DistributedObjectClassHelper, public Singleton<DelayedBuffObserverHelper> {
	static DelayedBuffObserverHelper* staticInitializer;

public:
	DelayedBuffObserverHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<DelayedBuffObserverHelper>;
};

} // namespace consumable
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::consumable;

#endif /*DELAYEDBUFFOBSERVER_H_*/
