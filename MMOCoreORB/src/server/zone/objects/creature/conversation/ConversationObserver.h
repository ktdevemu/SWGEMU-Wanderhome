/*
 *	server/zone/objects/creature/conversation/ConversationObserver.h generated by engine3 IDL compiler 0.60
 */

#ifndef CONVERSATIONOBSERVER_H_
#define CONVERSATIONOBSERVER_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

#include "server/zone/templates/mobile/ConversationTemplate.h"

#include "server/zone/templates/mobile/ConversationScreen.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/creature/conversation/screenhandlers/ScreenHandler.h"

#include "engine/util/Observer.h"

#include "engine/util/Observable.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace conversation {

class ConversationObserver : public Observer {
public:
	ConversationObserver(ConversationTemplate* conversationTemplate);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	ConversationScreen* getNextConversationScreen(CreatureObject* conversingPlayer, int selectedOption);

	ConversationScreen* runScreenHandlers(CreatureObject* conversingPlayer, CreatureObject* conversingNPC, int selectedOption, ConversationScreen* conversationScreen);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	ConversationObserver(DummyConstructorParameter* param);

	virtual ~ConversationObserver();

	friend class ConversationObserverHelper;
};

} // namespace conversation
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::conversation;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace conversation {

class ConversationObserverImplementation : public ObserverImplementation, public Logger {
protected:
	Reference<ConversationTemplate* > conversationTemplate;

private:
	VectorMap<String, ScreenHandler*> screenHandlers;

public:
	ConversationObserverImplementation(ConversationTemplate* conversationTemplate);

	ConversationObserverImplementation(DummyConstructorParameter* param);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

private:
	ConversationScreen* getInitialScreen();

	ConversationScreen* getConversationScreen(const String& screenName);

protected:
	virtual void createConversationSession(CreatureObject* conversingPlayer);

	void registerScreenHandler(const String& screenId, ScreenHandler* screenHandler);

	void removeScreenHandler(const String& screenId);

private:
	void cancelConversationSession(CreatureObject* conversingPlayer);

public:
	virtual ConversationScreen* getNextConversationScreen(CreatureObject* conversingPlayer, int selectedOption);

	virtual ConversationScreen* runScreenHandlers(CreatureObject* conversingPlayer, CreatureObject* conversingNPC, int selectedOption, ConversationScreen* conversationScreen);

private:
	void sendConversationScreenToPlayer(CreatureObject* conversingPlayer, CreatureObject* conversingNPC, ConversationScreen* conversationScreen);

public:
	WeakReference<ConversationObserver*> _this;

	operator const ConversationObserver*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~ConversationObserverImplementation();

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

	friend class ConversationObserver;
};

class ConversationObserverAdapter : public ObserverAdapter {
public:
	ConversationObserverAdapter(ConversationObserver* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

};

class ConversationObserverHelper : public DistributedObjectClassHelper, public Singleton<ConversationObserverHelper> {
	static ConversationObserverHelper* staticInitializer;

public:
	ConversationObserverHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ConversationObserverHelper>;
};

} // namespace conversation
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::conversation;

#endif /*CONVERSATIONOBSERVER_H_*/
