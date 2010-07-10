/*
 *	server/zone/objects/tangible/tool/CraftingTool.h generated by engine3 IDL compiler 0.60
 */

#ifndef CRAFTINGTOOL_H_
#define CRAFTINGTOOL_H_

#include "engine/orb/DistributedObjectBroker.h"

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

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

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

#include "server/zone/objects/draftschematic/DraftSchematic.h"

#include "server/zone/objects/manufactureschematic/ManufactureSchematic.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/objects/tangible/tool/CraftingStation.h"

#include "server/zone/objects/tangible/tool/ToolTangibleObject.h"

#include "engine/lua/LuaObject.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace tool {

class CraftingTool : public ToolTangibleObject {
public:
	static const int CLOTHING = 1;

	static const int FOOD = 2;

	static const int GENERIC = 3;

	static const int JEDI = 4;

	static const int SPACE = 5;

	static const int STRUCTURE = 6;

	static const int WEAPON = 7;

	CraftingTool();

	void initializeTransientMembers();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player);

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	void fillAttributeList(AttributeListMessage* msg, PlayerCreature* object);

	bool isCraftingTool();

	int getToolType();

	Vector<unsigned int>* getToolTabs();

	void requestCraftingSession(PlayerCreature* player, CraftingStation* craftingStation = NULL);

	void cancelCraftingSession(PlayerCreature* player);

	void selectDraftSchematic(PlayerCreature* player, int index);

	void synchronizedUIListenForSchematic(PlayerCreature* player);

protected:
	CraftingTool(DummyConstructorParameter* param);

	virtual ~CraftingTool();

	friend class CraftingToolHelper;
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

class CraftingToolImplementation : public ToolTangibleObjectImplementation {
protected:
	int type;

	float effectiveness;

	String status;

	Vector<unsigned int> enabledTabs;

	ManagedReference<CraftingStation* > craftingStation;

	int state;

	int insertCounter;

	ManagedReference<ManufactureSchematic* > manufactureSchematic;

	ManagedReference<TangibleObject* > prototype;

public:
	static const int CLOTHING = 1;

	static const int FOOD = 2;

	static const int GENERIC = 3;

	static const int JEDI = 4;

	static const int SPACE = 5;

	static const int STRUCTURE = 6;

	static const int WEAPON = 7;

	CraftingToolImplementation();

	CraftingToolImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player);

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	void fillAttributeList(AttributeListMessage* msg, PlayerCreature* object);

	bool isCraftingTool();

	int getToolType();

	Vector<unsigned int>* getToolTabs();

	void requestCraftingSession(PlayerCreature* player, CraftingStation* craftingStation = NULL);

private:
	void sendStart(PlayerCreature* player);

public:
	void cancelCraftingSession(PlayerCreature* player);

private:
	void locateCraftingStation(PlayerCreature* player, int toolType);

public:
	void selectDraftSchematic(PlayerCreature* player, int index);

	void synchronizedUIListenForSchematic(PlayerCreature* player);

	CraftingTool* _this;

	operator const CraftingTool*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~CraftingToolImplementation();

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

	friend class CraftingTool;
};

class CraftingToolAdapter : public ToolTangibleObjectAdapter {
public:
	CraftingToolAdapter(CraftingToolImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	bool isCraftingTool();

	int getToolType();

};

class CraftingToolHelper : public DistributedObjectClassHelper, public Singleton<CraftingToolHelper> {
	static CraftingToolHelper* staticInitializer;

public:
	CraftingToolHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<CraftingToolHelper>;
};

} // namespace tool
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::tool;

#endif /*CRAFTINGTOOL_H_*/
