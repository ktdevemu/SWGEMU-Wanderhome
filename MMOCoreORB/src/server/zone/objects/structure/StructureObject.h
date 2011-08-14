/*
 *	server/zone/objects/structure/StructureObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef STRUCTUREOBJECT_H_
#define STRUCTUREOBJECT_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace structure {
namespace events {

class StructureMaintenanceTask;

} // namespace events
} // namespace structure
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::structure::events;

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
namespace templates {

class SharedObjectTemplate;

} // namespace templates
} // namespace zone
} // namespace server

using namespace server::zone::templates;

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

#include "server/zone/objects/structure/StructurePermissionList.h"

#include "server/zone/packets/ui/CreateClientPathMessage.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "engine/util/u3d/AABBTree.h"

#include "engine/util/u3d/AABBNode.h"

#include "engine/util/u3d/Vector3.h"

#include "system/lang/Time.h"

namespace server {
namespace zone {
namespace objects {
namespace structure {

class StructureObject : public TangibleObject {
public:
	StructureObject();

	void initializeTransientMembers();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void createChildObjects();

	int notifyStructurePlaced(CreatureObject* creature);

	bool checkRequisitesForPlacement(CreatureObject* player);

	void sendStatusTo(CreatureObject* player);

	void sendManageMaintenanceTo(CreatureObject* player);

	void sendChangeNamePromptTo(CreatureObject* player);

	String getTimeString(unsigned int timestamp);

	void scheduleMaintenanceExpirationEvent();

	bool isOnAdminList(const String& playerName);

	bool isOnEntryList(const String& playerName);

	bool isOnBanList(const String& playerName);

	bool isOnHopperList(const String& playerName);

	bool isOnPermissionList(const String& listName, const String& playerName);

	bool isOwnerOf(SceneObject* obj);

	bool isOwnerOf(unsigned long long oid);

	bool isOnAccessList(SceneObject* obj);

	bool isOnAccessList(unsigned long long oid);

	void sendPermissionListTo(CreatureObject* creature, const String& listName);

	bool hasPermissionList(const String& listName);

	bool isPermissionListFull(const String& listName);

	int togglePermission(const String& listName, const String& targetName);

	int grantPermission(const String& listName, const String& targetName);

	int revokePermission(const String& listName, const String& targetName);

	int revokeAllPermissions(const String& targetName);

	void createVendor(CreatureObject* player);

	int getRedeedCost();

	unsigned long long getOwnerObjectID();

	unsigned long long getDeedObjectID();

	int getLotSize();

	int getBaseMaintenanceRate();

	int getBasePowerRate();

	int getSurplusMaintenance();

	int getSurplusPower();

	bool isPublicStructure();

	bool isPrivateStructure();

	void setOwnerObjectID(unsigned long long objectID);

	void setDeedObjectID(unsigned long long deedID);

	void setBaseMaintenanceRate(int rate);

	void setBasePowerRate(int rate);

	void setSurplusMaintenance(int surplus);

	void addMaintenance(int add);

	void setSurplusPower(int surplus);

	void addPower(int add);

	void setPublicStructure(bool privacy);

	bool isStructureObject();

	bool isRedeedable();

	AABBTree* getAABBTree();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	StructureObject(DummyConstructorParameter* param);

	virtual ~StructureObject();

	String _return_getTimeString;

	friend class StructureObjectHelper;
};

} // namespace structure
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::structure;

namespace server {
namespace zone {
namespace objects {
namespace structure {

class StructureObjectImplementation : public TangibleObjectImplementation {
protected:
	Reference<StructureMaintenanceTask* > structureMaintenanceTask;

	StructurePermissionList structurePermissionList;

	Time maintenanceExpires;

	Time powerExpires;

	unsigned long long ownerObjectID;

	unsigned long long deedObjectID;

	int lotSize;

	int baseMaintenanceRate;

	int basePowerRate;

	float surplusMaintenance;

	float surplusPower;

public:
	StructureObjectImplementation();

	StructureObjectImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void finalize();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void createChildObjects();

	virtual int notifyStructurePlaced(CreatureObject* creature);

	virtual bool checkRequisitesForPlacement(CreatureObject* player);

	void sendStatusTo(CreatureObject* player);

	void sendManageMaintenanceTo(CreatureObject* player);

	virtual void sendChangeNamePromptTo(CreatureObject* player);

	String getTimeString(unsigned int timestamp);

	void scheduleMaintenanceExpirationEvent();

	bool isOnAdminList(const String& playerName);

	bool isOnEntryList(const String& playerName);

	bool isOnBanList(const String& playerName);

	bool isOnHopperList(const String& playerName);

	bool isOnPermissionList(const String& listName, const String& playerName);

	bool isOwnerOf(SceneObject* obj);

	bool isOwnerOf(unsigned long long oid);

	bool isOnAccessList(SceneObject* obj);

	bool isOnAccessList(unsigned long long oid);

	void sendPermissionListTo(CreatureObject* creature, const String& listName);

	bool hasPermissionList(const String& listName);

	bool isPermissionListFull(const String& listName);

	int togglePermission(const String& listName, const String& targetName);

	int grantPermission(const String& listName, const String& targetName);

	int revokePermission(const String& listName, const String& targetName);

	int revokeAllPermissions(const String& targetName);

	void createVendor(CreatureObject* player);

	int getRedeedCost();

	unsigned long long getOwnerObjectID();

	unsigned long long getDeedObjectID();

	int getLotSize();

	int getBaseMaintenanceRate();

	int getBasePowerRate();

	int getSurplusMaintenance();

	int getSurplusPower();

	virtual bool isPublicStructure();

	virtual bool isPrivateStructure();

	void setOwnerObjectID(unsigned long long objectID);

	void setDeedObjectID(unsigned long long deedID);

	void setBaseMaintenanceRate(int rate);

	void setBasePowerRate(int rate);

	void setSurplusMaintenance(int surplus);

	void addMaintenance(int add);

	void setSurplusPower(int surplus);

	void addPower(int add);

	virtual void setPublicStructure(bool privacy);

	bool isStructureObject();

	bool isRedeedable();

	AABBTree* getAABBTree();

	WeakReference<StructureObject*> _this;

	operator const StructureObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~StructureObjectImplementation();

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

	friend class StructureObject;
};

class StructureObjectAdapter : public TangibleObjectAdapter {
public:
	StructureObjectAdapter(StructureObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void finalize();

	void createChildObjects();

	int notifyStructurePlaced(CreatureObject* creature);

	bool checkRequisitesForPlacement(CreatureObject* player);

	void sendStatusTo(CreatureObject* player);

	void sendManageMaintenanceTo(CreatureObject* player);

	void sendChangeNamePromptTo(CreatureObject* player);

	String getTimeString(unsigned int timestamp);

	void scheduleMaintenanceExpirationEvent();

	bool isOnAdminList(const String& playerName);

	bool isOnEntryList(const String& playerName);

	bool isOnBanList(const String& playerName);

	bool isOnHopperList(const String& playerName);

	bool isOnPermissionList(const String& listName, const String& playerName);

	bool isOwnerOf(SceneObject* obj);

	bool isOwnerOf(unsigned long long oid);

	bool isOnAccessList(SceneObject* obj);

	bool isOnAccessList(unsigned long long oid);

	void sendPermissionListTo(CreatureObject* creature, const String& listName);

	bool hasPermissionList(const String& listName);

	bool isPermissionListFull(const String& listName);

	int togglePermission(const String& listName, const String& targetName);

	int grantPermission(const String& listName, const String& targetName);

	int revokePermission(const String& listName, const String& targetName);

	int revokeAllPermissions(const String& targetName);

	void createVendor(CreatureObject* player);

	int getRedeedCost();

	unsigned long long getOwnerObjectID();

	unsigned long long getDeedObjectID();

	int getLotSize();

	int getBaseMaintenanceRate();

	int getBasePowerRate();

	int getSurplusMaintenance();

	int getSurplusPower();

	bool isPublicStructure();

	bool isPrivateStructure();

	void setOwnerObjectID(unsigned long long objectID);

	void setDeedObjectID(unsigned long long deedID);

	void setBaseMaintenanceRate(int rate);

	void setBasePowerRate(int rate);

	void setSurplusMaintenance(int surplus);

	void addMaintenance(int add);

	void setSurplusPower(int surplus);

	void addPower(int add);

	void setPublicStructure(bool privacy);

	bool isStructureObject();

	bool isRedeedable();

protected:
	String _param0_isOnAdminList__String_;
	String _param0_isOnEntryList__String_;
	String _param0_isOnBanList__String_;
	String _param0_isOnHopperList__String_;
	String _param0_isOnPermissionList__String_String_;
	String _param1_isOnPermissionList__String_String_;
	String _param1_sendPermissionListTo__CreatureObject_String_;
	String _param0_hasPermissionList__String_;
	String _param0_isPermissionListFull__String_;
	String _param0_togglePermission__String_String_;
	String _param1_togglePermission__String_String_;
	String _param0_grantPermission__String_String_;
	String _param1_grantPermission__String_String_;
	String _param0_revokePermission__String_String_;
	String _param1_revokePermission__String_String_;
	String _param0_revokeAllPermissions__String_;
};

class StructureObjectHelper : public DistributedObjectClassHelper, public Singleton<StructureObjectHelper> {
	static StructureObjectHelper* staticInitializer;

public:
	StructureObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<StructureObjectHelper>;
};

} // namespace structure
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::structure;

#endif /*STRUCTUREOBJECT_H_*/
