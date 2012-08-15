/*
 *	server/zone/objects/creature/buffs/Buff.h generated by engine3 IDL compiler 0.60
 */

#ifndef BUFF_H_
#define BUFF_H_

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

#include "engine/log/Logger.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace buffs {

class Buff : public ManagedObject {
public:
	Buff(CreatureObject* creo, unsigned int buffcrc, float duration, int bufftype);

	void initializeTransientMembers();

	void notifyLoadFromDatabase();

	void loadBuffDurationEvent(CreatureObject* creo);

	void init();

	void sendTo(CreatureObject* player);

	void sendDestroyTo(CreatureObject* player);

	void activate(bool applyModifiers);

	void deactivate(bool removeModifiers);

	void activate();

	void deactivate();

	VectorMap<String, int>* getSkillModifiers();

	void applyAttributeModifiers();

	void applySkillModifiers();

	void applyStates();

	void removeAttributeModifiers();

	void removeSkillModifiers();

	void removeStates();

	void clearBuffEvent();

	void setBuffEventNull();

	void scheduleBuffEvent();

	void parseAttributeModifierString(const String& modifierstring);

	void parseSkillModifierString(const String& modifierstring);

	String getAttributeModifierString();

	String getSkillModifierString();

	float getTimeLeft();

	void setAttributeModifier(byte attribute, int value);

	void setSkillModifier(const String& modname, int value);

	void addState(unsigned long long option);

	void setSpeedMultiplierMod(float multiplier);

	void setAccelerationMultiplierMod(float multiplier);

	void setFillAttributesOnBuff(bool val);

	String getBuffName();

	int getBuffCRC();

	float getBuffDuration();

	int getBuffType();

	int getAttributeModifierValue(byte attribute);

	int getSkillModifierValue(const String& modname);

	bool isActive();

	bool isSpiceBuff();

	bool isAttributeBuff();

	void setStartMessage(StringIdChatParameter& start);

	void setEndMessage(StringIdChatParameter& end);

	void setStartFlyText(const String& file, const String& aux, byte red, byte green, byte blue);

	void setEndFlyText(const String& file, const String& aux, byte red, byte green, byte blue);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	Buff(DummyConstructorParameter* param);

	virtual ~Buff();

	friend class BuffHelper;
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

class BuffImplementation : public ManagedObjectImplementation, public Logger {
protected:
	ManagedWeakReference<CreatureObject* > creature;

	Reference<BuffDurationEvent* > buffEvent;

	VectorMap<byte, int> attributeModifiers;

	VectorMap<String, int> skillModifiers;

	Vector<unsigned long long> states;

	String buffName;

	float buffDuration;

	unsigned int buffCRC;

	int buffType;

	bool fillAttributesOnBuff;

	StringIdChatParameter startMessage;

	StringIdChatParameter endMessage;

	String startFlyFile;

	String startFlyAux;

	byte startFlyRed;

	byte startFlyGreen;

	byte startFlyBlue;

	String endFlyFile;

	String endFlyAux;

	byte endFlyRed;

	byte endFlyGreen;

	byte endFlyBlue;

	Time nextExecutionTime;

public:
	BuffImplementation(CreatureObject* creo, unsigned int buffcrc, float duration, int bufftype);

	BuffImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void notifyLoadFromDatabase();

	void loadBuffDurationEvent(CreatureObject* creo);

	void init();

	virtual void sendTo(CreatureObject* player);

	virtual void sendDestroyTo(CreatureObject* player);

	virtual void activate(bool applyModifiers);

	virtual void deactivate(bool removeModifiers);

	virtual void activate();

	virtual void deactivate();

	VectorMap<String, int>* getSkillModifiers();

	virtual void applyAttributeModifiers();

	virtual void applySkillModifiers();

	virtual void applyStates();

	virtual void removeAttributeModifiers();

	virtual void removeSkillModifiers();

	virtual void removeStates();

	void clearBuffEvent();

	void setBuffEventNull();

	void scheduleBuffEvent();

	virtual void parseAttributeModifierString(const String& modifierstring);

	virtual void parseSkillModifierString(const String& modifierstring);

	virtual String getAttributeModifierString();

	virtual String getSkillModifierString();

	virtual float getTimeLeft();

	void setAttributeModifier(byte attribute, int value);

	void setSkillModifier(const String& modname, int value);

	void addState(unsigned long long option);

	void setSpeedMultiplierMod(float multiplier);

	void setAccelerationMultiplierMod(float multiplier);

	void setFillAttributesOnBuff(bool val);

	String getBuffName();

	int getBuffCRC();

	float getBuffDuration();

	int getBuffType();

	virtual int getAttributeModifierValue(byte attribute);

	virtual int getSkillModifierValue(const String& modname);

	bool isActive();

	bool isSpiceBuff();

	bool isAttributeBuff();

	void setStartMessage(StringIdChatParameter& start);

	void setEndMessage(StringIdChatParameter& end);

	void setStartFlyText(const String& file, const String& aux, byte red, byte green, byte blue);

	void setEndFlyText(const String& file, const String& aux, byte red, byte green, byte blue);

	WeakReference<Buff*> _this;

	operator const Buff*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~BuffImplementation();

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

	friend class Buff;
};

class BuffAdapter : public ManagedObjectAdapter {
public:
	BuffAdapter(Buff* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void notifyLoadFromDatabase();

	void loadBuffDurationEvent(CreatureObject* creo);

	void init();

	void sendTo(CreatureObject* player);

	void sendDestroyTo(CreatureObject* player);

	void activate(bool applyModifiers);

	void deactivate(bool removeModifiers);

	void activate();

	void deactivate();

	void applyAttributeModifiers();

	void applySkillModifiers();

	void applyStates();

	void removeAttributeModifiers();

	void removeSkillModifiers();

	void removeStates();

	void clearBuffEvent();

	void setBuffEventNull();

	void scheduleBuffEvent();

	void parseAttributeModifierString(const String& modifierstring);

	void parseSkillModifierString(const String& modifierstring);

	String getAttributeModifierString();

	String getSkillModifierString();

	float getTimeLeft();

	void setAttributeModifier(byte attribute, int value);

	void setSkillModifier(const String& modname, int value);

	void addState(unsigned long long option);

	void setSpeedMultiplierMod(float multiplier);

	void setAccelerationMultiplierMod(float multiplier);

	void setFillAttributesOnBuff(bool val);

	String getBuffName();

	int getBuffCRC();

	float getBuffDuration();

	int getBuffType();

	int getAttributeModifierValue(byte attribute);

	int getSkillModifierValue(const String& modname);

	bool isActive();

	bool isSpiceBuff();

	bool isAttributeBuff();

	void setStartFlyText(const String& file, const String& aux, byte red, byte green, byte blue);

	void setEndFlyText(const String& file, const String& aux, byte red, byte green, byte blue);

};

class BuffHelper : public DistributedObjectClassHelper, public Singleton<BuffHelper> {
	static BuffHelper* staticInitializer;

public:
	BuffHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<BuffHelper>;
};

} // namespace buffs
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::buffs;

#endif /*BUFF_H_*/
