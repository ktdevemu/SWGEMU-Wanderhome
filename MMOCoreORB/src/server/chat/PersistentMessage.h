/*
 *	server/chat/PersistentMessage.h generated by engine3 IDL compiler 0.60
 */

#ifndef PERSISTENTMESSAGE_H_
#define PERSISTENTMESSAGE_H_

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

#include "server/chat/ChatParameter.h"

#include "server/chat/StringIdChatParameterVector.h"

#include "server/chat/WaypointChatParameter.h"

#include "server/chat/WaypointChatParameterVector.h"

#include "server/chat/StringIdChatParameter.h"

#include "engine/core/ManagedObject.h"

#include "system/lang/System.h"

#include "system/util/Vector.h"

namespace server {
namespace chat {

class PersistentMessage : public ManagedObject {
public:
	static const byte NEW = 0x4E;

	static const byte READ = 0x52;

	static const byte UNREAD = 0x55;

	PersistentMessage();

	void sendTo(CreatureObject* player, bool sendBody = true);

	StringIdChatParameterVector* getStringIdParameters();

	WaypointChatParameterVector* getWaypointParameters();

	int getMailID();

	unsigned long long getObjectID();

	String getSenderName();

	unsigned long long getReceiverObjectID();

	byte getStatus();

	int getTimeStamp();

	UnicodeString getBody();

	UnicodeString getSubject();

	void setSenderName(const String& name);

	void setReceiverObjectID(unsigned long long oid);

	void setStatus(byte stat);

	void setTimeStamp(int stamp);

	void setBody(const UnicodeString& message);

	void setSubject(const UnicodeString& subj);

	bool isNew();

	bool isRead();

	bool isUnread();

	void addStringIdParameter(StringIdChatParameter& param);

	void addWaypointParameter(WaypointChatParameter& param);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	PersistentMessage(DummyConstructorParameter* param);

	virtual ~PersistentMessage();

	String _return_getSenderName;

	UnicodeString _return_getBody;

	UnicodeString _return_getSubject;

	friend class PersistentMessageHelper;
};

} // namespace chat
} // namespace server

using namespace server::chat;

namespace server {
namespace chat {

class PersistentMessageImplementation : public ManagedObjectImplementation {
protected:
	String senderName;

	UnicodeString subject;

	UnicodeString body;

	unsigned int timeStamp;

	byte status;

	unsigned long long receiverObjectID;

	StringIdChatParameterVector stringIdParameters;

	WaypointChatParameterVector waypointParameters;

public:
	static const byte NEW = 0x4E;

	static const byte READ = 0x52;

	static const byte UNREAD = 0x55;

	PersistentMessageImplementation();

	PersistentMessageImplementation(DummyConstructorParameter* param);

	virtual void sendTo(CreatureObject* player, bool sendBody = true);

	StringIdChatParameterVector* getStringIdParameters();

	WaypointChatParameterVector* getWaypointParameters();

	int getMailID();

	unsigned long long getObjectID();

	String getSenderName();

	unsigned long long getReceiverObjectID();

	byte getStatus();

	int getTimeStamp();

	UnicodeString getBody();

	UnicodeString getSubject();

	void setSenderName(const String& name);

	void setReceiverObjectID(unsigned long long oid);

	void setStatus(byte stat);

	void setTimeStamp(int stamp);

	void setBody(const UnicodeString& message);

	void setSubject(const UnicodeString& subj);

	bool isNew();

	bool isRead();

	bool isUnread();

	void addStringIdParameter(StringIdChatParameter& param);

	void addWaypointParameter(WaypointChatParameter& param);

	WeakReference<PersistentMessage*> _this;

	operator const PersistentMessage*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~PersistentMessageImplementation();

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

	friend class PersistentMessage;
};

class PersistentMessageAdapter : public ManagedObjectAdapter {
public:
	PersistentMessageAdapter(PersistentMessageImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void sendTo(CreatureObject* player, bool sendBody);

	int getMailID();

	unsigned long long getObjectID();

	String getSenderName();

	unsigned long long getReceiverObjectID();

	byte getStatus();

	int getTimeStamp();

	UnicodeString getBody();

	UnicodeString getSubject();

	void setSenderName(const String& name);

	void setReceiverObjectID(unsigned long long oid);

	void setStatus(byte stat);

	void setTimeStamp(int stamp);

	void setBody(const UnicodeString& message);

	void setSubject(const UnicodeString& subj);

	bool isNew();

	bool isRead();

	bool isUnread();

protected:
	String _param0_setSenderName__String_;
	UnicodeString _param0_setBody__UnicodeString_;
	UnicodeString _param0_setSubject__UnicodeString_;
};

class PersistentMessageHelper : public DistributedObjectClassHelper, public Singleton<PersistentMessageHelper> {
	static PersistentMessageHelper* staticInitializer;

public:
	PersistentMessageHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<PersistentMessageHelper>;
};

} // namespace chat
} // namespace server

using namespace server::chat;

#endif /*PERSISTENTMESSAGE_H_*/
