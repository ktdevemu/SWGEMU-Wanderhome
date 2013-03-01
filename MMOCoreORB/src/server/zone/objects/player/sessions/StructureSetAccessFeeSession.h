/*
 *	server/zone/objects/player/sessions/StructureSetAccessFeeSession.h generated by engine3 IDL compiler 0.60
 */

#ifndef STRUCTURESETACCESSFEESESSION_H_
#define STRUCTURESETACCESSFEESESSION_H_

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
namespace player {

class PlayerObject;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

namespace server {
namespace zone {
namespace objects {
namespace building {

class BuildingObject;

} // namespace building
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::building;

#include "engine/core/ManagedObject.h"

#include "server/zone/objects/scene/SessionFacadeType.h"

#include "server/zone/objects/player/sui/inputbox/SuiInputBox.h"

#include "engine/log/Logger.h"

#include "engine/core/ManagedReference.h"

#include "engine/util/Facade.h"

#include "system/lang/ref/Reference.h"

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sessions {

class StructureSetAccessFeeSession : public Facade {
public:
	StructureSetAccessFeeSession(CreatureObject* play, BuildingObject* struc);

	int initializeSession();

	int cancelSession();

	int clearSession();

	void promptSetAccessFee();

	void setAccessFee(const int fee);

	void promptSetAccessDuration();

	void setAccessDuration(const int duration);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	StructureSetAccessFeeSession(DummyConstructorParameter* param);

	virtual ~StructureSetAccessFeeSession();

	friend class StructureSetAccessFeeSessionHelper;
};

} // namespace sessions
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sessions;

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sessions {

class StructureSetAccessFeeSessionImplementation : public FacadeImplementation {
protected:
	ManagedReference<PlayerObject* > playerGhost;

	ManagedReference<CreatureObject* > player;

	ManagedReference<BuildingObject* > structure;

	ManagedReference<SuiInputBox* > feeAmountBox;

	ManagedReference<SuiInputBox* > durationBox;

	int accessFee;

public:
	StructureSetAccessFeeSessionImplementation(CreatureObject* play, BuildingObject* struc);

	StructureSetAccessFeeSessionImplementation(DummyConstructorParameter* param);

	int initializeSession();

	int cancelSession();

	int clearSession();

	void promptSetAccessFee();

	void setAccessFee(const int fee);

	void promptSetAccessDuration();

	void setAccessDuration(const int duration);

	WeakReference<StructureSetAccessFeeSession*> _this;

	operator const StructureSetAccessFeeSession*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~StructureSetAccessFeeSessionImplementation();

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

	friend class StructureSetAccessFeeSession;
};

class StructureSetAccessFeeSessionAdapter : public FacadeAdapter {
public:
	StructureSetAccessFeeSessionAdapter(StructureSetAccessFeeSession* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int initializeSession();

	int cancelSession();

	int clearSession();

	void promptSetAccessFee();

	void setAccessFee(const int fee);

	void promptSetAccessDuration();

	void setAccessDuration(const int duration);

};

class StructureSetAccessFeeSessionHelper : public DistributedObjectClassHelper, public Singleton<StructureSetAccessFeeSessionHelper> {
	static StructureSetAccessFeeSessionHelper* staticInitializer;

public:
	StructureSetAccessFeeSessionHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<StructureSetAccessFeeSessionHelper>;
};

} // namespace sessions
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sessions;

#endif /*STRUCTURESETACCESSFEESESSION_H_*/
