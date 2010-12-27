/*
 *	server/zone/objects/tangible/tool/SurveyTool.h generated by engine3 IDL compiler 0.60
 */

#ifndef SURVEYTOOL_H_
#define SURVEYTOOL_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace player {

class PlayerCreature;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

namespace server {
namespace zone {
namespace packets {
namespace object {

class ObjectMenuResponse;

} // namespace object
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::object;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace objects {
namespace manufactureschematic {

class ManufactureSchematic;

} // namespace manufactureschematic
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::manufactureschematic;

#include "server/zone/objects/tangible/tool/ToolTangibleObject.h"

#include "engine/lua/LuaObject.h"

#include "engine/util/Coordinate.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace tool {

class SurveyTool : public ToolTangibleObject {
public:
	static const int SOLAR = 1;

	static const int CHEMICAL = 2;

	static const int FLORA = 3;

	static const int GAS = 4;

	static const int GEOTHERMAL = 5;

	static const int MINERAL = 6;

	static const int WATER = 7;

	static const int WIND = 8;

	static const int FUSION = 9;

	static const int CREATURE = -1;

	SurveyTool();

	void initializeTransientMembers();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player);

	void updateCraftingValues(ManufactureSchematic* schematic);

	void setRange(int r);

	int getRange();

	int getPoints();

	bool canSampleRadioactive();

	bool tryGamble();

	void clearGamble();

	void consentRadioactiveSample(PlayerCreature* player);

	void sendRadioactiveWarning(PlayerCreature* player);

	void sendRangeSui(PlayerCreature* player);

	void surveyCnodeMinigameSui(PlayerCreature* player);

	void surveyCnodeMinigame(PlayerCreature* player, int value);

	Coordinate* getRichSampleLocation();

	void clearRichSampleLocation();

	void setInUse(bool use);

	bool isInUse();

	void surveyGnodeMinigameSui(PlayerCreature* player);

	void surveyGnodeMinigame(PlayerCreature* player, int value);

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	void sendResourceListTo(PlayerCreature* player);

	void sendSurveyTo(PlayerCreature* player, const String& resname);

	void sendSampleTo(PlayerCreature* player, const String& resname);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	SurveyTool(DummyConstructorParameter* param);

	virtual ~SurveyTool();

	friend class SurveyToolHelper;
};

} // namespace tool
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::tool;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace tool {

class SurveyToolImplementation : public ToolTangibleObjectImplementation {
protected:
	int range;

	int points;

	int type;

	String surveyType;

	String surveyAnimation;

	String sampleAnimation;

	String lastResourceSampleName;

	String lastResourceSurveyName;

	bool radioactiveOk;

	Coordinate* richSampleLocation;

	bool doGamble;

	bool inUse;

public:
	static const int SOLAR = 1;

	static const int CHEMICAL = 2;

	static const int FLORA = 3;

	static const int GAS = 4;

	static const int GEOTHERMAL = 5;

	static const int MINERAL = 6;

	static const int WATER = 7;

	static const int WIND = 8;

	static const int FUSION = 9;

	static const int CREATURE = -1;

	SurveyToolImplementation();

	SurveyToolImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player);

	void updateCraftingValues(ManufactureSchematic* schematic);

	void setRange(int r);

	int getRange();

	int getPoints();

	bool canSampleRadioactive();

	bool tryGamble();

	void clearGamble();

	void consentRadioactiveSample(PlayerCreature* player);

	void sendRadioactiveWarning(PlayerCreature* player);

	void sendRangeSui(PlayerCreature* player);

	void surveyCnodeMinigameSui(PlayerCreature* player);

	void surveyCnodeMinigame(PlayerCreature* player, int value);

	Coordinate* getRichSampleLocation();

	void clearRichSampleLocation();

	void setInUse(bool use);

	bool isInUse();

	void surveyGnodeMinigameSui(PlayerCreature* player);

	void surveyGnodeMinigame(PlayerCreature* player, int value);

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	void sendResourceListTo(PlayerCreature* player);

	void sendSurveyTo(PlayerCreature* player, const String& resname);

	void sendSampleTo(PlayerCreature* player, const String& resname);

	SurveyTool* _this;

	operator const SurveyTool*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~SurveyToolImplementation();

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

	friend class SurveyTool;
};

class SurveyToolAdapter : public ToolTangibleObjectAdapter {
public:
	SurveyToolAdapter(SurveyToolImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void setRange(int r);

	int getRange();

	int getPoints();

	bool canSampleRadioactive();

	bool tryGamble();

	void clearGamble();

	void consentRadioactiveSample(PlayerCreature* player);

	void sendRadioactiveWarning(PlayerCreature* player);

	void sendRangeSui(PlayerCreature* player);

	void surveyCnodeMinigameSui(PlayerCreature* player);

	void surveyCnodeMinigame(PlayerCreature* player, int value);

	void clearRichSampleLocation();

	void setInUse(bool use);

	bool isInUse();

	void surveyGnodeMinigameSui(PlayerCreature* player);

	void surveyGnodeMinigame(PlayerCreature* player, int value);

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	void sendResourceListTo(PlayerCreature* player);

	void sendSurveyTo(PlayerCreature* player, const String& resname);

	void sendSampleTo(PlayerCreature* player, const String& resname);

protected:
	String _param1_sendSurveyTo__PlayerCreature_String_;
	String _param1_sendSampleTo__PlayerCreature_String_;
};

class SurveyToolHelper : public DistributedObjectClassHelper, public Singleton<SurveyToolHelper> {
	static SurveyToolHelper* staticInitializer;

public:
	SurveyToolHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<SurveyToolHelper>;
};

} // namespace tool
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::tool;

#endif /*SURVEYTOOL_H_*/
