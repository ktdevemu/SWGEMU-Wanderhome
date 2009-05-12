/*
 *	server/zone/objects/structure/building/BuildingObject.h generated by engine3 IDL compiler 0.55
 */

#ifndef BUILDINGOBJECT_H_
#define BUILDINGOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

class CellObject;

class SceneObject;

class Player;

#include "engine/util/QuadTreeEntry.h"

#include "../../scene/SceneObject.h"

class BuildingObject : public SceneObject {
public:
	BuildingObject(unsigned long long objid, unsigned char buildingtype = 1, bool staticbuilding = false);

	void serialize();

	void deserialize();

	void notifyInsertToZone(SceneObject* object);

	void sendPermissionListTo(Player* player, const String& listname);

	void sendConfirmDestroyTo(Player* player);

	void setPermissionsList(const String& permissionsString);

	void modifyPermissionList(Player* player, const String& listname, const String& entryname, bool add = true);

	void addCell(CellObject* cell);

	void addSceneObject(SceneObject* sceneobject);

	void setAttributes(String& attributeString);

	String& getAttributes();

	void parseItemAttributes();

	void setBuildingType(unsigned char type);

	void setPublicStructure(bool pub);

	unsigned char getBuildingType();

	unsigned int getCellCount();

	CellObject* getCell(int index);

	bool containsCell(unsigned long long cellid);

	bool isCloningFacility();

	bool isOwnedBy(Player* player);

	bool isOnAdminList(Player* player);

	bool isOnEntryList(Player* player);

	bool isOnHopperList(Player* player);

	bool isOnBanList(Player* player);

	void setSize(float minx, float miny, float maxx, float maxy);

	void insert(QuadTreeEntry* obj);

	void remove(QuadTreeEntry* obj);

	void removeAll();

	bool update(QuadTreeEntry* obj);

	void inRange(QuadTreeEntry* obj, float range);

protected:
	BuildingObject(DummyConstructorParameter* param);

	virtual ~BuildingObject();

	String _return_getAttributes;

	friend class BuildingObjectHelper;
};

class BuildingObjectImplementation;

class BuildingObjectAdapter : public SceneObjectAdapter {
public:
	BuildingObjectAdapter(BuildingObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void serialize();

	void deserialize();

	void notifyInsertToZone(SceneObject* object);

	void sendPermissionListTo(Player* player, const String& listname);

	void sendConfirmDestroyTo(Player* player);

	void setPermissionsList(const String& permissionsString);

	void modifyPermissionList(Player* player, const String& listname, const String& entryname, bool add);

	void addCell(CellObject* cell);

	void addSceneObject(SceneObject* sceneobject);

	void setAttributes(String& attributeString);

	String& getAttributes();

	void parseItemAttributes();

	void setBuildingType(unsigned char type);

	void setPublicStructure(bool pub);

	unsigned char getBuildingType();

	unsigned int getCellCount();

	CellObject* getCell(int index);

	bool containsCell(unsigned long long cellid);

	bool isCloningFacility();

	bool isOwnedBy(Player* player);

	bool isOnAdminList(Player* player);

	bool isOnEntryList(Player* player);

	bool isOnHopperList(Player* player);

	bool isOnBanList(Player* player);

	void setSize(float minx, float miny, float maxx, float maxy);

	void insert(QuadTreeEntry* obj);

	void remove(QuadTreeEntry* obj);

	void removeAll();

	bool update(QuadTreeEntry* obj);

	void inRange(QuadTreeEntry* obj, float range);

protected:
	String _param1_sendPermissionListTo__Player_String_;
	String _param0_setPermissionsList__String_;
	String _param1_modifyPermissionList__Player_String_String_bool_;
	String _param2_modifyPermissionList__Player_String_String_bool_;
	String _param0_setAttributes__String_;
};

class BuildingObjectHelper : public DistributedObjectClassHelper, public Singleton<BuildingObjectHelper> {
	static BuildingObjectHelper* staticInitializer;

public:
	BuildingObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<BuildingObjectHelper>;
};

#include "../../scene/SceneObjectImplementation.h"

class BuildingObjectServant : public SceneObjectImplementation {
public:
	BuildingObject* _this;

public:
	BuildingObjectServant(unsigned long long objid, int type);
	virtual ~BuildingObjectServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*BUILDINGOBJECT_H_*/
