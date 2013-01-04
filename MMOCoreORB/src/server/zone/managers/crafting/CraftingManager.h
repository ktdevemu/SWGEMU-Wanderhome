/*
 *	server/zone/managers/crafting/CraftingManager.h generated by engine3 IDL compiler 0.60
 */

#ifndef CRAFTINGMANAGER_H_
#define CRAFTINGMANAGER_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

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
namespace manufactureschematic {

class ManufactureSchematic;

} // namespace manufactureschematic
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::manufactureschematic;

namespace server {
namespace zone {
namespace objects {
namespace draftschematic {

class DraftSchematic;

} // namespace draftschematic
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::draftschematic;

#include "server/zone/managers/crafting/schematicmap/SchematicMap.h"

#include "server/zone/objects/manufactureschematic/craftingvalues/CraftingValues.h"

#include "system/util/VectorMap.h"

#include "engine/lua/Lua.h"

#include "system/util/Vector.h"

#include "server/zone/managers/ZoneManager.h"

namespace server {
namespace zone {
namespace managers {
namespace crafting {

class CraftingManager : public ZoneManager {
public:
	static const short RESOURCECOMBINE = 0x00;

	static const short LINEARCOMBINE = 0x01;

	static const short PERCENTAGECOMBINE = 0x02;

	static const short BITSETCOMBINE = 0x03;

	static const short OVERRIDECOMBINE = 0x04;

	static const short CR = 1;

	static const short CD = 2;

	static const short DR = 3;

	static const short HR = 4;

	static const short FL = 5;

	static const short MA = 6;

	static const short PE = 7;

	static const short OQ = 8;

	static const short SR = 9;

	static const short UT = 10;

	static const short AMAZINGSUCCESS = 0;

	static const short GREATSUCCESS = 1;

	static const short GOODSUCCESS = 2;

	static const short MODERATESUCCESS = 3;

	static const short SUCCESS = 4;

	static const short MARGINALSUCCESS = 5;

	static const short OK = 6;

	static const short BARELYSUCCESSFUL = 7;

	static const short CRITICALFAILURE = 8;

	CraftingManager();

	void initialize();

	void awardSchematicGroup(PlayerObject* playerObject, Vector<String>& schematicgroups, bool updateClient = false);

	void removeSchematicGroup(PlayerObject* playerObject, Vector<String>& schematicgroups, bool updateClient = false);

	DraftSchematic* getSchematic(unsigned int schematicID);

	void sendDraftSlotsTo(CreatureObject* player, unsigned int schematicID);

	void sendResourceWeightsTo(CreatureObject* player, unsigned int schematicID);

	int calculateAssemblySuccess(CreatureObject* player, DraftSchematic* draftSchematic, float effectiveness);

	float calculateAssemblyValueModifier(int assemblyResult);

	void experimentRow(CraftingValues* craftingValues, int rowEffected, int pointsAttempted, float failure, int experimentationResult);

	float getAssemblyPercentage(float value);

	int calculateExperimentationFailureRate(CreatureObject* player, ManufactureSchematic* manufactureSchematic, int pointsUsed);

	int calculateExperimentationSuccess(CreatureObject* player, DraftSchematic* draftSchematic, float effectiveness);

	float calculateExperimentationValueModifier(int experimentationResult, int pointsAttempted);

	float getWeightedValue(ManufactureSchematic* manufactureSchematic, int type);

	String generateSerial();

	String checkBioSkillMods(const String& property);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	CraftingManager(DummyConstructorParameter* param);

	virtual ~CraftingManager();

	friend class CraftingManagerHelper;
};

} // namespace crafting
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::crafting;

namespace server {
namespace zone {
namespace managers {
namespace crafting {

class CraftingManagerImplementation : public ZoneManagerImplementation {
	Reference<SchematicMap* > schematicMap;

public:
	static const short RESOURCECOMBINE = 0x00;

	static const short LINEARCOMBINE = 0x01;

	static const short PERCENTAGECOMBINE = 0x02;

	static const short BITSETCOMBINE = 0x03;

	static const short OVERRIDECOMBINE = 0x04;

	static const short CR = 1;

	static const short CD = 2;

	static const short DR = 3;

	static const short HR = 4;

	static const short FL = 5;

	static const short MA = 6;

	static const short PE = 7;

	static const short OQ = 8;

	static const short SR = 9;

	static const short UT = 10;

	static const short AMAZINGSUCCESS = 0;

	static const short GREATSUCCESS = 1;

	static const short GOODSUCCESS = 2;

	static const short MODERATESUCCESS = 3;

	static const short SUCCESS = 4;

	static const short MARGINALSUCCESS = 5;

	static const short OK = 6;

	static const short BARELYSUCCESSFUL = 7;

	static const short CRITICALFAILURE = 8;

private:
	SortedVector<String> bioMods;

public:
	CraftingManagerImplementation();

	CraftingManagerImplementation(DummyConstructorParameter* param);

	void initialize();

	void awardSchematicGroup(PlayerObject* playerObject, Vector<String>& schematicgroups, bool updateClient = false);

	void removeSchematicGroup(PlayerObject* playerObject, Vector<String>& schematicgroups, bool updateClient = false);

	DraftSchematic* getSchematic(unsigned int schematicID);

	void sendDraftSlotsTo(CreatureObject* player, unsigned int schematicID);

	void sendResourceWeightsTo(CreatureObject* player, unsigned int schematicID);

	int calculateAssemblySuccess(CreatureObject* player, DraftSchematic* draftSchematic, float effectiveness);

	float calculateAssemblyValueModifier(int assemblyResult);

	void experimentRow(CraftingValues* craftingValues, int rowEffected, int pointsAttempted, float failure, int experimentationResult);

	float getAssemblyPercentage(float value);

	int calculateExperimentationFailureRate(CreatureObject* player, ManufactureSchematic* manufactureSchematic, int pointsUsed);

	int calculateExperimentationSuccess(CreatureObject* player, DraftSchematic* draftSchematic, float effectiveness);

	float calculateExperimentationValueModifier(int experimentationResult, int pointsAttempted);

	float getWeightedValue(ManufactureSchematic* manufactureSchematic, int type);

	String generateSerial();

private:
	bool loadBioSkillMods();

public:
	String checkBioSkillMods(const String& property);

	WeakReference<CraftingManager*> _this;

	operator const CraftingManager*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~CraftingManagerImplementation();

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

	friend class CraftingManager;
};

class CraftingManagerAdapter : public ZoneManagerAdapter {
public:
	CraftingManagerAdapter(CraftingManager* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	DraftSchematic* getSchematic(unsigned int schematicID);

	void sendDraftSlotsTo(CreatureObject* player, unsigned int schematicID);

	void sendResourceWeightsTo(CreatureObject* player, unsigned int schematicID);

	int calculateAssemblySuccess(CreatureObject* player, DraftSchematic* draftSchematic, float effectiveness);

	float calculateAssemblyValueModifier(int assemblyResult);

	float getAssemblyPercentage(float value);

	int calculateExperimentationFailureRate(CreatureObject* player, ManufactureSchematic* manufactureSchematic, int pointsUsed);

	int calculateExperimentationSuccess(CreatureObject* player, DraftSchematic* draftSchematic, float effectiveness);

	float calculateExperimentationValueModifier(int experimentationResult, int pointsAttempted);

	float getWeightedValue(ManufactureSchematic* manufactureSchematic, int type);

	String generateSerial();

	String checkBioSkillMods(const String& property);

};

class CraftingManagerHelper : public DistributedObjectClassHelper, public Singleton<CraftingManagerHelper> {
	static CraftingManagerHelper* staticInitializer;

public:
	CraftingManagerHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<CraftingManagerHelper>;
};

} // namespace crafting
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::crafting;

#endif /*CRAFTINGMANAGER_H_*/
