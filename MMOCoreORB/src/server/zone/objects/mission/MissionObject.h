/*
 *	server/zone/objects/mission/MissionObject.h generated by engine3 IDL compiler 0.55
 */

#ifndef MISSIONOBJECT_H_
#define MISSIONOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

class SceneObject;

class Player;

class TangibleObject;

class MissionObjective;

#include "../scene/SceneObject.h"

class MissionObject : public SceneObject {
public:
	MissionObject(unsigned long long oid, Player* owner = NULL);

	void init();

	void assetSetup();

	void assetPart(bool award);

	void sendTo(Player* player, bool doClose = true);

	void sendDeltaTo(Player* player);

	void doLinkToPlayer(Player* player);

	void sendDestroyTo(Player* player);

	void setOwner(Player* player);

	Player* getOwner();

	void setDBKey(const String& tdbk);

	String& getDBKey();

	void applyTerminalMask(int tam);

	int getTerminalMask();

	String& getStatusStr();

	void addDeliverItem(TangibleObject* item);

	TangibleObject* getDeliverItem(unsigned long long oid);

	void removeDeliverItem(SceneObject* item);

	void addAwardItem(TangibleObject* item);

	TangibleObject* getAwardItem(unsigned long long oid);

	void removeAwardItem(SceneObject* item);

	void setObjectiveDefaults(const String& od);

	String& getObjectiveDefaults();

	bool isInstantComplete();

	void setInstantComplete(bool temp);

	bool isComplete();

	bool isFailure();

	void addObjective(MissionObjective* mo, bool doLock = true);

	void spawnObjectives(const String& objectives, bool doLock = true);

	void serializeObjectives(String& ret, bool doLock = true);

	int updateStatus(int type, unsigned int objCrc, const String& str, String& updateStr, int increment, bool doLock = true);

	void checkComplete(bool doLock = false);

	void setTypeStr(const String& tstr);

	String& getTypeStr();

	void setDescKey(int tdk);

	unsigned int getDescKey();

	void setTitleKey(int ttk);

	unsigned int getTitleKey();

	void setDifficultyLevel(unsigned int tdlv);

	unsigned int getDifficultyLevel();

	void setDestX(float tdx);

	float getDestX();

	void setDestY(float tdy);

	float getDestY();

	void setDestPlanetCrc(unsigned int tpc);

	unsigned int getDestPlanetCrc();

	void setCreatorName(const UnicodeString& tcn);

	UnicodeString& getCreatorName();

	void setReward(unsigned int tr);

	unsigned int getReward();

	void setTargetX(float ttx);

	float getTargetX();

	void setTargetY(float tty);

	float getTargetY();

	void setTargetPlanetCrc(unsigned int tpc);

	unsigned int getTargetPlanetCrc();

	void setTargetName(const String& tds);

	String& getTargetName();

	void setDepictedObjCrc(unsigned int tsdc);

	unsigned int getDepictedObjCrc();

	void setDescriptionStf(const String& tds);

	String& getDescriptionStf();

	void setDescription(const String& tds);

	String& getDescription();

	void setTitleStf(const String& tts);

	String& getTitleStf();

	void setTitle(const String& tts);

	String& getTitle();

	void setRefreshCount(unsigned int trc);

	unsigned int getRefreshCount();

	void setTypeCrc(unsigned int ttc);

	unsigned int getTypeCrc();

protected:
	MissionObject(DummyConstructorParameter* param);

	virtual ~MissionObject();

	String _return_getDBKey;
	String _return_getDescription;
	String _return_getDescriptionStf;
	String _return_getObjectiveDefaults;
	String _return_getStatusStr;
	String _return_getTargetName;
	String _return_getTitle;
	String _return_getTitleStf;
	String _return_getTypeStr;

	UnicodeString _return_getCreatorName;

	friend class MissionObjectHelper;
};

class MissionObjectImplementation;

class MissionObjectAdapter : public SceneObjectAdapter {
public:
	MissionObjectAdapter(MissionObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void init();

	void assetSetup();

	void assetPart(bool award);

	void sendTo(Player* player, bool doClose);

	void sendDeltaTo(Player* player);

	void doLinkToPlayer(Player* player);

	void sendDestroyTo(Player* player);

	void setOwner(Player* player);

	Player* getOwner();

	void setDBKey(const String& tdbk);

	String& getDBKey();

	void applyTerminalMask(int tam);

	int getTerminalMask();

	String& getStatusStr();

	void addDeliverItem(TangibleObject* item);

	TangibleObject* getDeliverItem(unsigned long long oid);

	void removeDeliverItem(SceneObject* item);

	void addAwardItem(TangibleObject* item);

	TangibleObject* getAwardItem(unsigned long long oid);

	void removeAwardItem(SceneObject* item);

	void setObjectiveDefaults(const String& od);

	String& getObjectiveDefaults();

	bool isInstantComplete();

	void setInstantComplete(bool temp);

	bool isComplete();

	bool isFailure();

	void addObjective(MissionObjective* mo, bool doLock);

	void spawnObjectives(const String& objectives, bool doLock);

	void serializeObjectives(String& ret, bool doLock);

	int updateStatus(int type, unsigned int objCrc, const String& str, String& updateStr, int increment, bool doLock);

	void checkComplete(bool doLock);

	void setTypeStr(const String& tstr);

	String& getTypeStr();

	void setDescKey(int tdk);

	unsigned int getDescKey();

	void setTitleKey(int ttk);

	unsigned int getTitleKey();

	void setDifficultyLevel(unsigned int tdlv);

	unsigned int getDifficultyLevel();

	void setDestX(float tdx);

	float getDestX();

	void setDestY(float tdy);

	float getDestY();

	void setDestPlanetCrc(unsigned int tpc);

	unsigned int getDestPlanetCrc();

	void setCreatorName(const UnicodeString& tcn);

	UnicodeString& getCreatorName();

	void setReward(unsigned int tr);

	unsigned int getReward();

	void setTargetX(float ttx);

	float getTargetX();

	void setTargetY(float tty);

	float getTargetY();

	void setTargetPlanetCrc(unsigned int tpc);

	unsigned int getTargetPlanetCrc();

	void setTargetName(const String& tds);

	String& getTargetName();

	void setDepictedObjCrc(unsigned int tsdc);

	unsigned int getDepictedObjCrc();

	void setDescriptionStf(const String& tds);

	String& getDescriptionStf();

	void setDescription(const String& tds);

	String& getDescription();

	void setTitleStf(const String& tts);

	String& getTitleStf();

	void setTitle(const String& tts);

	String& getTitle();

	void setRefreshCount(unsigned int trc);

	unsigned int getRefreshCount();

	void setTypeCrc(unsigned int ttc);

	unsigned int getTypeCrc();

protected:
	String _param0_setDBKey__String_;
	String _param0_setObjectiveDefaults__String_;
	String _param0_spawnObjectives__String_bool_;
	String _param0_serializeObjectives__String_bool_;
	String _param2_updateStatus__int_int_String_String_int_bool_;
	String _param3_updateStatus__int_int_String_String_int_bool_;
	String _param0_setTypeStr__String_;
	UnicodeString _param0_setCreatorName__UnicodeString_;
	String _param0_setTargetName__String_;
	String _param0_setDescriptionStf__String_;
	String _param0_setDescription__String_;
	String _param0_setTitleStf__String_;
	String _param0_setTitle__String_;
};

class MissionObjectHelper : public DistributedObjectClassHelper, public Singleton<MissionObjectHelper> {
	static MissionObjectHelper* staticInitializer;

public:
	MissionObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<MissionObjectHelper>;
};

#include "../scene/SceneObjectImplementation.h"

class MissionObjectServant : public SceneObjectImplementation {
public:
	MissionObject* _this;

public:
	MissionObjectServant(unsigned long long oid, int type);
	virtual ~MissionObjectServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*MISSIONOBJECT_H_*/
