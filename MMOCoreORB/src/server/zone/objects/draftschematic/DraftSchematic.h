/*
 *	server/zone/objects/draftschematic/DraftSchematic.h generated by engine3 IDL compiler 0.60
 */

#ifndef DRAFTSCHEMATIC_H_
#define DRAFTSCHEMATIC_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

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
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

#include "server/zone/packets/object/ObjectControllerMessage.h"

#include "server/zone/templates/intangible/DraftSchematicObjectTemplate.h"

#include "server/zone/objects/draftschematic/draftslot/DraftSlot.h"

#include "server/zone/objects/draftschematic/resourceweight/ResourceWeight.h"

#include "engine/service/proto/BaseMessage.h"

#include "server/zone/objects/intangible/IntangibleObject.h"

#include "system/util/Vector.h"

namespace server {
namespace zone {
namespace objects {
namespace draftschematic {

class DraftSchematic : public IntangibleObject {
public:
	DraftSchematic();

	void initializeTransientMembers();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	void sendBaselinesTo(SceneObject* player);

	void sendDraftSlotsTo(CreatureObject* player);

	void sendResourceWeightsTo(CreatureObject* player);

	SceneObject* createManufactureSchematic(SceneObject* craftingTool = NULL);

	void setGroupName(String& name);

	String getGroupName();

	int getDraftSlotCount();

	bool isValidDraftSchematic();

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

	String getCustomName();

	unsigned int getTanoCRC();

	int getTemplateListSize();

	String getTemplate(int i);

	DraftSchematicObjectTemplate* getDraftSchematicTemplate();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	DraftSchematic(DummyConstructorParameter* param);

	virtual ~DraftSchematic();

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
	String groupName;

	Reference<DraftSchematicObjectTemplate* > schematicTemplate;

public:
	DraftSchematicImplementation();

	DraftSchematicImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	void sendBaselinesTo(SceneObject* player);

	void sendDraftSlotsTo(CreatureObject* player);

private:
	void insertIngredients(ObjectControllerMessage* msg);

public:
	void sendResourceWeightsTo(CreatureObject* player);

	SceneObject* createManufactureSchematic(SceneObject* craftingTool = NULL);

	void setGroupName(String& name);

	String getGroupName();

	int getDraftSlotCount();

	bool isValidDraftSchematic();

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

	String getCustomName();

	unsigned int getTanoCRC();

	int getTemplateListSize();

	String getTemplate(int i);

	DraftSchematicObjectTemplate* getDraftSchematicTemplate();

	WeakReference<DraftSchematic*> _this;

	operator const DraftSchematic*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
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
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class DraftSchematic;
};

class DraftSchematicAdapter : public IntangibleObjectAdapter {
public:
	DraftSchematicAdapter(DraftSchematic* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void sendBaselinesTo(SceneObject* player);

	void sendDraftSlotsTo(CreatureObject* player);

	void sendResourceWeightsTo(CreatureObject* player);

	SceneObject* createManufactureSchematic(SceneObject* craftingTool);

	void setGroupName(String& name);

	String getGroupName();

	int getDraftSlotCount();

	bool isValidDraftSchematic();

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

	int getTemplateListSize();

	String getTemplate(int i);

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
