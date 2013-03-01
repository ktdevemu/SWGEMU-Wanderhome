/*
 *	server/zone/objects/creature/aigroup/LairGroup.h generated by engine3 IDL compiler 0.60
 */

#ifndef LAIRGROUP_H_
#define LAIRGROUP_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

#include "server/zone/objects/creature/aigroup/AiGroup.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace aigroup {

class LairGroup : public AiGroup {
public:
	LairGroup();

	bool isLairGroup();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	LairGroup(DummyConstructorParameter* param);

	virtual ~LairGroup();

	friend class LairGroupHelper;
};

} // namespace aigroup
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::aigroup;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace aigroup {

class LairGroupImplementation : public AiGroupImplementation {

public:
	LairGroupImplementation();

	LairGroupImplementation(DummyConstructorParameter* param);

	bool isLairGroup();

	WeakReference<LairGroup*> _this;

	operator const LairGroup*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~LairGroupImplementation();

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
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class LairGroup;
};

class LairGroupAdapter : public AiGroupAdapter {
public:
	LairGroupAdapter(LairGroup* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	bool isLairGroup();

};

class LairGroupHelper : public DistributedObjectClassHelper, public Singleton<LairGroupHelper> {
	static LairGroupHelper* staticInitializer;

public:
	LairGroupHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<LairGroupHelper>;
};

} // namespace aigroup
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::aigroup;

#endif /*LAIRGROUP_H_*/
