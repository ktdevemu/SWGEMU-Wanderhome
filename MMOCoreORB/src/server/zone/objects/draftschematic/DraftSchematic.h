/*
 *	server/zone/objects/draftschematic/DraftSchematic.h generated by engine3 IDL compiler 0.60
 */

#ifndef DRAFTSCHEMATIC_H_
#define DRAFTSCHEMATIC_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace packets {
namespace scene {

class AttributeListMessage;

} // namespace scene
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::scene;

namespace server {
namespace zone {
namespace templates {

class SharedObjectTemplate;

} // namespace templates
} // namespace zone
} // namespace server

using namespace server::zone::templates;

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
namespace objects {
namespace area {

class ActiveArea;

} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area;

#include "server/zone/packets/object/ObjectControllerMessage.h"

#include "server/zone/templates/intangible/DraftSchematicObjectTemplate.h"

#include "server/zone/objects/draftschematic/draftslot/DraftSlot.h"

#include "server/zone/objects/draftschematic/resourceweight/ResourceWeight.h"

#include "engine/service/proto/BaseMessage.h"

#include "server/zone/objects/intangible/IntangibleObject.h"

namespace server {
namespace zone {
namespace objects {
namespace draftschematic {

class DraftSchematic : public IntangibleObject {
public:
	DraftSchematic();

	void initializeTransientMembers();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void fillAttributeList(AttributeListMessage* msg, PlayerCreature* object);

	void sendBaselinesTo(SceneObject* player);

	void sendDraftSlotsTo(PlayerCreature* player);

	void sendResourceWeightsTo(PlayerCreature* player);

	SceneObject* createManufactureSchematic(SceneObject* craftingTool);

	void setSchematicID(unsigned int id);

	unsigned int getSchematicID();

	int getDraftSlotCount();

	DraftSlot* getDraftSlot(int i);

	int getResourceWeightCount();

	ResourceWeight* getResourceWeight(int i);

	float getComplexity();

	unsigned int getToolTab();

	float getSize();

	String getXpType();

	int getXpAmount();

	String getAssemblySkill();

	String getExperimentationSkill();

	String getCustomizationSkill();

	Vector<byte>* getCustomizationOptions();

	Vector<String>* getCustomizationStringNames();

	Vector<byte>* getCustomizationDefaultValues();

	String getCustomName();

	unsigned int getTanoCRC();

	String getGroupName();

	int getUseCount();

	void setUseCount(int count);

	void decreaseUseCount(int count = 1);

	void increaseUseCount(int count);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	DraftSchematic(DummyConstructorParameter* param);

	virtual ~DraftSchematic();

	String _return_getAssemblySkill;
	String _return_getCustomName;
	String _return_getCustomizationSkill;
	String _return_getExperimentationSkill;
	String _return_getGroupName;
	String _return_getXpType;

	friend class DraftSchematicHelper;
};

} // namespace draftschematic
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::draftschematic;

namespace server {
namespace zone {
namespace objects {
namespace draftschematic {

class DraftSchematicImplementation : public IntangibleObjectImplementation {
	unsigned int schematicID;

	DraftSchematicObjectTemplate* schematicTemplate;

	int useCount;

public:
	DraftSchematicImplementation();

	DraftSchematicImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void fillAttributeList(AttributeListMessage* msg, PlayerCreature* object);

	void sendBaselinesTo(SceneObject* player);

	void sendDraftSlotsTo(PlayerCreature* player);

private:
	void insertIngredients(ObjectControllerMessage* msg);

public:
	void sendResourceWeightsTo(PlayerCreature* player);

	SceneObject* createManufactureSchematic(SceneObject* craftingTool);

	void setSchematicID(unsigned int id);

	unsigned int getSchematicID();

	int getDraftSlotCount();

	DraftSlot* getDraftSlot(int i);

	int getResourceWeightCount();

	ResourceWeight* getResourceWeight(int i);

	float getComplexity();

	unsigned int getToolTab();

	float getSize();

	String getXpType();

	int getXpAmount();

	String getAssemblySkill();

	String getExperimentationSkill();

	String getCustomizationSkill();

	Vector<byte>* getCustomizationOptions();

	Vector<String>* getCustomizationStringNames();

	Vector<byte>* getCustomizationDefaultValues();

	String getCustomName();

	unsigned int getTanoCRC();

	String getGroupName();

	int getUseCount();

	void setUseCount(int count);

	void decreaseUseCount(int count = 1);

	void increaseUseCount(int count);

	DraftSchematic* _this;

	operator const DraftSchematic*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~DraftSchematicImplementation();

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

	friend class DraftSchematic;
};

class DraftSchematicAdapter : public IntangibleObjectAdapter {
public:
	DraftSchematicAdapter(DraftSchematicImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void sendBaselinesTo(SceneObject* player);

	void sendDraftSlotsTo(PlayerCreature* player);

	void sendResourceWeightsTo(PlayerCreature* player);

	SceneObject* createManufactureSchematic(SceneObject* craftingTool);

	void setSchematicID(unsigned int id);

	unsigned int getSchematicID();

	int getDraftSlotCount();

	int getResourceWeightCount();

	float getComplexity();

	unsigned int getToolTab();

	float getSize();

	String getXpType();

	int getXpAmount();

	String getAssemblySkill();

	String getExperimentationSkill();

	String getCustomizationSkill();

	String getCustomName();

	unsigned int getTanoCRC();

	String getGroupName();

	int getUseCount();

	void setUseCount(int count);

	void decreaseUseCount(int count);

	void increaseUseCount(int count);

};

class DraftSchematicHelper : public DistributedObjectClassHelper, public Singleton<DraftSchematicHelper> {
	static DraftSchematicHelper* staticInitializer;

public:
	DraftSchematicHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<DraftSchematicHelper>;
};

} // namespace draftschematic
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::draftschematic;

#endif /*DRAFTSCHEMATIC_H_*/
