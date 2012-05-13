/*
 *	server/zone/objects/player/sessions/PlayerTeachSession.h generated by engine3 IDL compiler 0.60
 */

#ifndef PLAYERTEACHSESSION_H_
#define PLAYERTEACHSESSION_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

#include "engine/core/ManagedObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/scene/SessionFacadeType.h"

#include "system/util/SortedVector.h"

#include "engine/log/Logger.h"

#include "engine/core/ManagedReference.h"

#include "engine/util/Facade.h"

#include "system/lang/ref/Reference.h"

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sessions {

class PlayerTeachSession : public Facade {
public:
	PlayerTeachSession(CreatureObject* creature);

	void addTeachableSkill(const String& skillbox);

	void dropTeachableSkill(const String& skillbox);

	String getTeachableSkill(int skillbox);

	int getTeachableSkillsSize();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	PlayerTeachSession(DummyConstructorParameter* param);

	virtual ~PlayerTeachSession();

	friend class PlayerTeachSessionHelper;
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

class PlayerTeachSessionImplementation : public FacadeImplementation {
protected:
	SortedVector<String> teachableSkills;

public:
	PlayerTeachSessionImplementation(CreatureObject* creature);

	PlayerTeachSessionImplementation(DummyConstructorParameter* param);

	void addTeachableSkill(const String& skillbox);

	void dropTeachableSkill(const String& skillbox);

	String getTeachableSkill(int skillbox);

	int getTeachableSkillsSize();

	WeakReference<PlayerTeachSession*> _this;

	operator const PlayerTeachSession*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~PlayerTeachSessionImplementation();

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

	friend class PlayerTeachSession;
};

class PlayerTeachSessionAdapter : public FacadeAdapter {
public:
	PlayerTeachSessionAdapter(PlayerTeachSession* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void addTeachableSkill(const String& skillbox);

	void dropTeachableSkill(const String& skillbox);

	String getTeachableSkill(int skillbox);

	int getTeachableSkillsSize();

};

class PlayerTeachSessionHelper : public DistributedObjectClassHelper, public Singleton<PlayerTeachSessionHelper> {
	static PlayerTeachSessionHelper* staticInitializer;

public:
	PlayerTeachSessionHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<PlayerTeachSessionHelper>;
};

} // namespace sessions
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sessions;

#endif /*PLAYERTEACHSESSION_H_*/
