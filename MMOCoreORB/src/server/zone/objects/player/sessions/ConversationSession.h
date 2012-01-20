/*
 *	server/zone/objects/player/sessions/ConversationSession.h generated by engine3 IDL compiler 0.60
 */

#ifndef CONVERSATIONSESSION_H_
#define CONVERSATIONSESSION_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace templates {
namespace mobile {

class ConversationScreen;

} // namespace mobile
} // namespace templates
} // namespace zone
} // namespace server

using namespace server::zone::templates::mobile;

#include "server/zone/objects/scene/SessionFacadeType.h"

#include "engine/util/Facade.h"

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sessions {

class ConversationSession : public Facade {
public:
	ConversationSession();

	void setLastConversationScreen(ConversationScreen* screen);

	ConversationScreen* getLastConversationScreen();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	ConversationSession(DummyConstructorParameter* param);

	virtual ~ConversationSession();

	friend class ConversationSessionHelper;
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

class ConversationSessionImplementation : public FacadeImplementation {
	Reference<ConversationScreen* > lastConversationScreen;

public:
	ConversationSessionImplementation();

	ConversationSessionImplementation(DummyConstructorParameter* param);

	void setLastConversationScreen(ConversationScreen* screen);

	ConversationScreen* getLastConversationScreen();

	WeakReference<ConversationSession*> _this;

	operator const ConversationSession*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~ConversationSessionImplementation();

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

	friend class ConversationSession;
};

class ConversationSessionAdapter : public FacadeAdapter {
public:
	ConversationSessionAdapter(ConversationSession* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

};

class ConversationSessionHelper : public DistributedObjectClassHelper, public Singleton<ConversationSessionHelper> {
	static ConversationSessionHelper* staticInitializer;

public:
	ConversationSessionHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ConversationSessionHelper>;
};

} // namespace sessions
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sessions;

#endif /*CONVERSATIONSESSION_H_*/
