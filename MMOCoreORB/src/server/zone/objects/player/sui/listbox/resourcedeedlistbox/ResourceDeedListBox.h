/*
 *	server/zone/objects/player/sui/listbox/resourcedeedlistbox/ResourceDeedListBox.h generated by engine3 IDL compiler 0.60
 */

#ifndef RESOURCEDEEDLISTBOX_H_
#define RESOURCEDEEDLISTBOX_H_

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
namespace objects {
namespace player {

class PlayerCreature;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

#include "engine/lua/LuaObject.h"

#include "engine/service/proto/BaseMessage.h"

#include "server/zone/objects/player/sui/listbox/SuiListBox.h"

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sui {
namespace listbox {
namespace resourcedeedlistbox {

class ResourceDeedListBox : public SuiListBox {
public:
	ResourceDeedListBox(PlayerCreature* player, unsigned int windowType, unsigned int listBoxType = 0);

	void initializeTransientMembers();

	void addBox(const String& name);

	int getBoxCount();

	String getBox(int index);

	void removeBox();

	String getCurrentBox();

	String getPreviousBox();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	ResourceDeedListBox(DummyConstructorParameter* param);

	virtual ~ResourceDeedListBox();

	String _return_getBox;
	String _return_getCurrentBox;
	String _return_getPreviousBox;

	friend class ResourceDeedListBoxHelper;
};

} // namespace resourcedeedlistbox
} // namespace listbox
} // namespace sui
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sui::listbox::resourcedeedlistbox;

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sui {
namespace listbox {
namespace resourcedeedlistbox {

class ResourceDeedListBoxImplementation : public SuiListBoxImplementation {
	Vector<String> boxes;

public:
	ResourceDeedListBoxImplementation(PlayerCreature* player, unsigned int windowType, unsigned int listBoxType = 0);

	ResourceDeedListBoxImplementation(DummyConstructorParameter* param);

	void finalize();

	void initializeTransientMembers();

	void addBox(const String& name);

	int getBoxCount();

	String getBox(int index);

	void removeBox();

	String getCurrentBox();

	String getPreviousBox();

	ResourceDeedListBox* _this;

	operator const ResourceDeedListBox*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~ResourceDeedListBoxImplementation();

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

	friend class ResourceDeedListBox;
};

class ResourceDeedListBoxAdapter : public SuiListBoxAdapter {
public:
	ResourceDeedListBoxAdapter(ResourceDeedListBoxImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void finalize();

	void initializeTransientMembers();

	void addBox(const String& name);

	int getBoxCount();

	String getBox(int index);

	void removeBox();

	String getCurrentBox();

	String getPreviousBox();

protected:
	String _param0_addBox__String_;
};

class ResourceDeedListBoxHelper : public DistributedObjectClassHelper, public Singleton<ResourceDeedListBoxHelper> {
	static ResourceDeedListBoxHelper* staticInitializer;

public:
	ResourceDeedListBoxHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ResourceDeedListBoxHelper>;
};

} // namespace resourcedeedlistbox
} // namespace listbox
} // namespace sui
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sui::listbox::resourcedeedlistbox;

#endif /*RESOURCEDEEDLISTBOX_H_*/
