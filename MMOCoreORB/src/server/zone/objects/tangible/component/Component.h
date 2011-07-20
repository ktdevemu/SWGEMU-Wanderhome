/*
 *	server/zone/objects/tangible/component/Component.h generated by engine3 IDL compiler 0.60
 */

#ifndef COMPONENT_H_
#define COMPONENT_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

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
namespace packets {
namespace object {

class ObjectMenuResponse;

} // namespace object
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::object;

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "engine/lua/LuaObject.h"

#include "system/util/VectorMap.h"

#include "system/util/Vector.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace component {

class Component : public TangibleObject {
public:
	Component();

	void initializeTransientMembers();

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	bool isComponent();

	void generateLootStats(const String& lootstring, int level);

	bool compare(Component* inCmpo);

	bool hasKey(const String& key);

	void updateCraftingValues(ManufactureSchematic* schematic);

	void addProperty(const String& attributeName, const float value, const int precision, const String& craftingTitle, const bool hidden);

	float getAttributeValue(String& attributeName);

	int getAttributePrecision(String& attributeName);

	String getAttributeTitle(String& attributeName);

	bool getAttributeHidden(String& attributeName);

	void setPropertyToHidden(const String& property);

	void addProperty(const String& attribute, const float value, const int precision, const String& title);

	int getPropertyCount();

	String getProperty(const int j);

	bool changeAttributeValue(String& property, float value);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	Component(DummyConstructorParameter* param);

	virtual ~Component();

	String _return_getAttributeTitle;
	String _return_getProperty;

	friend class ComponentHelper;
};

} // namespace component
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::component;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace component {

class ComponentImplementation : public TangibleObjectImplementation {
protected:
	VectorMap<String, float> attributeMap;

	VectorMap<String, int> precisionMap;

	VectorMap<String, String> titleMap;

	VectorMap<String, bool> hiddenMap;

	Vector<String> keyList;

public:
	ComponentImplementation();

	ComponentImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	bool isComponent();

	void generateLootStats(const String& lootstring, int level);

	bool compare(Component* inCmpo);

	bool hasKey(const String& key);

	void updateCraftingValues(ManufactureSchematic* schematic);

	void addProperty(const String& attributeName, const float value, const int precision, const String& craftingTitle, const bool hidden);

	float getAttributeValue(String& attributeName);

	int getAttributePrecision(String& attributeName);

	String getAttributeTitle(String& attributeName);

	bool getAttributeHidden(String& attributeName);

	void setPropertyToHidden(const String& property);

	void addProperty(const String& attribute, const float value, const int precision, const String& title);

	int getPropertyCount();

	String getProperty(const int j);

	bool changeAttributeValue(String& property, float value);

	WeakReference<Component*> _this;

	operator const Component*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~ComponentImplementation();

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

	friend class Component;
};

class ComponentAdapter : public TangibleObjectAdapter {
public:
	ComponentAdapter(ComponentImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	bool isComponent();

	void generateLootStats(const String& lootstring, int level);

	bool compare(Component* inCmpo);

	bool hasKey(const String& key);

	void updateCraftingValues(ManufactureSchematic* schematic);

	void addProperty(const String& attributeName, const float value, const int precision, const String& craftingTitle, const bool hidden);

	float getAttributeValue(String& attributeName);

	int getAttributePrecision(String& attributeName);

	String getAttributeTitle(String& attributeName);

	bool getAttributeHidden(String& attributeName);

	void setPropertyToHidden(const String& property);

	void addProperty(const String& attribute, const float value, const int precision, const String& title);

	int getPropertyCount();

	String getProperty(const int j);

	bool changeAttributeValue(String& property, float value);

protected:
	String _param0_generateLootStats__String_int_;
	String _param0_hasKey__String_;
	String _param0_addProperty__String_float_int_String_bool_;
	String _param3_addProperty__String_float_int_String_bool_;
	String _param0_getAttributeValue__String_;
	String _param0_getAttributePrecision__String_;
	String _param0_getAttributeTitle__String_;
	String _param0_getAttributeHidden__String_;
	String _param0_setPropertyToHidden__String_;
	String _param0_addProperty__String_float_int_String_;
	String _param3_addProperty__String_float_int_String_;
	String _param0_changeAttributeValue__String_float_;
};

class ComponentHelper : public DistributedObjectClassHelper, public Singleton<ComponentHelper> {
	static ComponentHelper* staticInitializer;

public:
	ComponentHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ComponentHelper>;
};

} // namespace component
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::component;

#endif /*COMPONENT_H_*/
