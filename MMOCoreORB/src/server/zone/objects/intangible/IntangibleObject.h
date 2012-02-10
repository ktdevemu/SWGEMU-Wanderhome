/*
 *	server/zone/objects/intangible/IntangibleObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef INTANGIBLEOBJECT_H_
#define INTANGIBLEOBJECT_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace templates {

class SharedObjectTemplate;

} // namespace templates
} // namespace zone
} // namespace server

using namespace server::zone::templates;

#include "server/zone/objects/scene/variables/ContainerPermissions.h"

#include "engine/lua/LuaObject.h"

#include "server/zone/objects/scene/SceneObject.h"

namespace server {
namespace zone {
namespace objects {
namespace intangible {

class IntangibleObject : public SceneObject {
public:
	IntangibleObject();

	void initializeTransientMembers();

	void loadTemplateData(SharedObjectTemplate* templateData);

	bool isIntangibleObject();

	void sendBaselinesTo(SceneObject* player);

	void updateStatus(int newStatus, bool notifyClient = true);

	unsigned int getStatus();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	IntangibleObject(DummyConstructorParameter* param);

	virtual ~IntangibleObject();

	friend class IntangibleObjectHelper;
};

} // namespace intangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::intangible;

namespace server {
namespace zone {
namespace objects {
namespace intangible {

class IntangibleObjectImplementation : public SceneObjectImplementation {
protected:
	unsigned int status;

public:
	IntangibleObjectImplementation();

	IntangibleObjectImplementation(DummyConstructorParameter* param);

	void finalize();

	void initializeTransientMembers();

	void loadTemplateData(SharedObjectTemplate* templateData);

	bool isIntangibleObject();

	void sendBaselinesTo(SceneObject* player);

	void updateStatus(int newStatus, bool notifyClient = true);

	unsigned int getStatus();

	WeakReference<IntangibleObject*> _this;

	operator const IntangibleObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~IntangibleObjectImplementation();

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

	friend class IntangibleObject;
};

class IntangibleObjectAdapter : public SceneObjectAdapter {
public:
	IntangibleObjectAdapter(IntangibleObject* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void finalize();

	void initializeTransientMembers();

	bool isIntangibleObject();

	void sendBaselinesTo(SceneObject* player);

	void updateStatus(int newStatus, bool notifyClient);

	unsigned int getStatus();

};

class IntangibleObjectHelper : public DistributedObjectClassHelper, public Singleton<IntangibleObjectHelper> {
	static IntangibleObjectHelper* staticInitializer;

public:
	IntangibleObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<IntangibleObjectHelper>;
};

} // namespace intangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::intangible;

#endif /*INTANGIBLEOBJECT_H_*/
