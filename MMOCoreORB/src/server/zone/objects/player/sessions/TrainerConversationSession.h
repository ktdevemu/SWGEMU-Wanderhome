/*
 *	server/zone/objects/player/sessions/TrainerConversationSession.h generated by engine3 IDL compiler 0.60
 */

#ifndef TRAINERCONVERSATIONSESSION_H_
#define TRAINERCONVERSATIONSESSION_H_

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

#include "server/zone/objects/scene/SessionFacadeType.h"

#include "server/zone/objects/player/sessions/ConversationSession.h"

#include "engine/util/Facade.h"

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sessions {

class TrainerConversationSession : public ConversationSession {
public:
	TrainerConversationSession(CreatureObject* npc);

	void clearTrainableSkills();

	void addTrainableSkill(String& skillName);

	String getTrainableSkills(int selectedOption);

	int getTrainableSkillsCount();

	void clearNextSkills();

	void addNextSkill(String& skillName);

	String getNextSkill(int selectedOption);

	int getNextSkillsCount();

	void setSelectedSkill(String& skillName);

	String getSelectedSkill();

	String getMasterSkill();

	void setMasterSkill(String& skillName);

	void addAdditionalMasterSkill(String& skillName);

	String getAdditionalMasterSkill(int selectedOption);

	int getAdditionalMasterSkillsCount();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	TrainerConversationSession(DummyConstructorParameter* param);

	virtual ~TrainerConversationSession();

	friend class TrainerConversationSessionHelper;
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

class TrainerConversationSessionImplementation : public ConversationSessionImplementation {
	Vector<String> trainableSkills;

	Vector<String> nextSkills;

	String masterSkill;

	Vector<String> additionalMasterSkills;

	String selectedSkill;

public:
	TrainerConversationSessionImplementation(CreatureObject* npc);

	TrainerConversationSessionImplementation(DummyConstructorParameter* param);

	void clearTrainableSkills();

	void addTrainableSkill(String& skillName);

	String getTrainableSkills(int selectedOption);

	int getTrainableSkillsCount();

	void clearNextSkills();

	void addNextSkill(String& skillName);

	String getNextSkill(int selectedOption);

	int getNextSkillsCount();

	void setSelectedSkill(String& skillName);

	String getSelectedSkill();

	String getMasterSkill();

	void setMasterSkill(String& skillName);

	void addAdditionalMasterSkill(String& skillName);

	String getAdditionalMasterSkill(int selectedOption);

	int getAdditionalMasterSkillsCount();

	WeakReference<TrainerConversationSession*> _this;

	operator const TrainerConversationSession*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~TrainerConversationSessionImplementation();

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

	friend class TrainerConversationSession;
};

class TrainerConversationSessionAdapter : public ConversationSessionAdapter {
public:
	TrainerConversationSessionAdapter(TrainerConversationSession* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void clearTrainableSkills();

	void addTrainableSkill(String& skillName);

	String getTrainableSkills(int selectedOption);

	int getTrainableSkillsCount();

	void clearNextSkills();

	void addNextSkill(String& skillName);

	String getNextSkill(int selectedOption);

	int getNextSkillsCount();

	void setSelectedSkill(String& skillName);

	String getSelectedSkill();

	String getMasterSkill();

	void setMasterSkill(String& skillName);

	void addAdditionalMasterSkill(String& skillName);

	String getAdditionalMasterSkill(int selectedOption);

	int getAdditionalMasterSkillsCount();

};

class TrainerConversationSessionHelper : public DistributedObjectClassHelper, public Singleton<TrainerConversationSessionHelper> {
	static TrainerConversationSessionHelper* staticInitializer;

public:
	TrainerConversationSessionHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<TrainerConversationSessionHelper>;
};

} // namespace sessions
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sessions;

#endif /*TRAINERCONVERSATIONSESSION_H_*/
