/*
 *	server/zone/objects/player/sui/inputbox/SuiInputBox.h generated by engine3 IDL compiler 0.60
 */

#ifndef SUIINPUTBOX_H_
#define SUIINPUTBOX_H_

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

#include "server/zone/packets/ui/SuiCreatePageMessage.h"

#include "engine/lua/LuaObject.h"

#include "engine/service/proto/BaseMessage.h"

#include "server/zone/objects/player/sui/SuiBox.h"

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sui {
namespace messagebox {

class SuiInputBox : public SuiBox {
public:
	static const int DEFAULT = 0;

	static const int FILTER = 1;

	SuiInputBox(PlayerCreature* player, unsigned int windowType, int inputtype = 0);

	BaseMessage* generateMessage();

	void setMaxInputSize(int size);

	void setDefaultInput(const String& text);

	bool isFilterBox();

	bool isInputBox();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	SuiInputBox(DummyConstructorParameter* param);

	virtual ~SuiInputBox();

	friend class SuiInputBoxHelper;
};

} // namespace messagebox
} // namespace sui
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sui::messagebox;

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sui {
namespace messagebox {

class SuiInputBoxImplementation : public SuiBoxImplementation {
protected:
	int maxInputSize;

	String defaultInput;

	int inputType;

public:
	static const int DEFAULT = 0;

	static const int FILTER = 1;

	SuiInputBoxImplementation(PlayerCreature* player, unsigned int windowType, int inputtype = 0);

	SuiInputBoxImplementation(DummyConstructorParameter* param);

	BaseMessage* generateMessage();

	void setMaxInputSize(int size);

	void setDefaultInput(const String& text);

	bool isFilterBox();

	bool isInputBox();

	SuiInputBox* _this;

	operator const SuiInputBox*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~SuiInputBoxImplementation();

	TransactionalObject* clone();

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

	friend class SuiInputBox;
	friend class TransactionalObjectHandle<SuiInputBoxImplementation*>;
};

class SuiInputBoxAdapter : public SuiBoxAdapter {
public:
	SuiInputBoxAdapter(SuiInputBoxImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	BaseMessage* generateMessage();

	void setMaxInputSize(int size);

	void setDefaultInput(const String& text);

	bool isFilterBox();

	bool isInputBox();

protected:
	String _param0_setDefaultInput__String_;
};

class SuiInputBoxHelper : public DistributedObjectClassHelper, public Singleton<SuiInputBoxHelper> {
	static SuiInputBoxHelper* staticInitializer;

public:
	SuiInputBoxHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<SuiInputBoxHelper>;
};

} // namespace messagebox
} // namespace sui
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sui::messagebox;

#endif /*SUIINPUTBOX_H_*/
