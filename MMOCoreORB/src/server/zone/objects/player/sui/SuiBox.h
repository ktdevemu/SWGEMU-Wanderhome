/*
 *	server/zone/objects/player/sui/SuiBox.h generated by engine3 IDL compiler 0.60
 */

#ifndef SUIBOX_H_
#define SUIBOX_H_

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

#include "server/zone/objects/player/sui/SuiWindowType.h"

#include "engine/lua/LuaObject.h"

#include "system/io/StringTokenizer.h"

#include "engine/service/proto/BaseMessage.h"

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sui {

class SuiBox : public ManagedObject {
public:
	static const int INPUTBOX = 0;

	static const int LISTBOX = 1;

	static const int MESSAGEBOX = 2;

	static const int TRANSFERBOX = 3;

	static const int COLORPICKER = 4;

	static const int BANKTRANSFERBOX = 5;

	static const int BANKTIPCONFIRMBOX = 10;

	static const int SLICINGBOX = 20;

	SuiBox(PlayerCreature* play, unsigned int windowtype, unsigned int boxtype);

	void initialize();

	void initializeTransientMembers();

	void generateHeader(SuiCreatePageMessage* message);

	void generateBody(SuiCreatePageMessage* message);

	void generateFooter(SuiCreatePageMessage* message, int type = 0);

	BaseMessage* generateMessage();

	BaseMessage* generateCloseMessage();

	void addSetting(const String& optType, const String& variable, const String& setting, const String& value);

	void addHeader(const String& variable, const String& type);

	void clearOptions();

	int compareTo(SuiBox* obj);

	bool hasGeneratedMessage();

	void setPromptTitle(const String& name);

	void setPromptText(const String& name);

	String getPromptTitle();

	void setHandlerText(const String& text);

	void setUsingObjectID(unsigned long long oid);

	void setWindowType(unsigned int type);

	void setBoxType(int type);

	void setIntValue(int value);

	bool isInputBox();

	bool isListBox();

	bool isMessageBox();

	bool isTransferBox();

	bool isBankTransferBox();

	bool isSlicingBox();

	bool isCharacterBuilderBox();

	bool isColorPicker();

	void setCancelButton(bool value, const String& cancelText);

	void setOtherButton(bool value, const String& backText);

	void setOkButton(bool value, const String& okText);

	void setForceCloseDistance(float dist);

	void setForceCloseDisabled();

	unsigned long long getUsingObjectID();

	int getIntValue();

	PlayerCreature* getPlayer();

	unsigned int getBoxID();

	int getWindowType();

	SceneObject* getUsingObject();

	void setUsingObject(SceneObject* object);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	SuiBox(DummyConstructorParameter* param);

	virtual ~SuiBox();

	String _return_getPromptTitle;

	friend class SuiBoxHelper;
};

} // namespace sui
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sui;

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sui {

class SuiBoxImplementation : public ManagedObjectImplementation, public Logger {
protected:
	ManagedWeakReference<PlayerCreature* > player;

	unsigned int boxID;

	ManagedWeakReference<SceneObject* > usingObject;

	unsigned long long usingObjectID;

	String handlerStr;

	String cancelButtonText;

	bool cancelButton;

	String okButtonText;

	bool okButton;

	String otherButtonText;

	bool otherButton;

	String promptTitle;

	String promptText;

	int boxType;

	unsigned int windowType;

	int integerValue;

	float forceCloseDistance;

	Vector<String> headerSets;

	Vector<String> optionSets;

	int hdrOptCount;

	bool hasGenerated;

public:
	static const int INPUTBOX = 0;

	static const int LISTBOX = 1;

	static const int MESSAGEBOX = 2;

	static const int TRANSFERBOX = 3;

	static const int COLORPICKER = 4;

	static const int BANKTRANSFERBOX = 5;

	static const int BANKTIPCONFIRMBOX = 10;

	static const int SLICINGBOX = 20;

	SuiBoxImplementation(PlayerCreature* play, unsigned int windowtype, unsigned int boxtype);

	SuiBoxImplementation(DummyConstructorParameter* param);

	void initialize();

	void finalize();

	void initializeTransientMembers();

	void generateHeader(SuiCreatePageMessage* message);

	void generateBody(SuiCreatePageMessage* message);

	void generateFooter(SuiCreatePageMessage* message, int type = 0);

	virtual BaseMessage* generateMessage();

	BaseMessage* generateCloseMessage();

	void addSetting(const String& optType, const String& variable, const String& setting, const String& value);

	void addHeader(const String& variable, const String& type);

	void clearOptions();

	int compareTo(SuiBox* obj);

	bool hasGeneratedMessage();

	void setPromptTitle(const String& name);

	void setPromptText(const String& name);

	String getPromptTitle();

	void setHandlerText(const String& text);

	void setUsingObjectID(unsigned long long oid);

	void setWindowType(unsigned int type);

	void setBoxType(int type);

	void setIntValue(int value);

	virtual bool isInputBox();

	virtual bool isListBox();

	virtual bool isMessageBox();

	virtual bool isTransferBox();

	virtual bool isBankTransferBox();

	virtual bool isSlicingBox();

	virtual bool isCharacterBuilderBox();

	bool isColorPicker();

	void setCancelButton(bool value, const String& cancelText);

	void setOtherButton(bool value, const String& backText);

	void setOkButton(bool value, const String& okText);

	void setForceCloseDistance(float dist);

	void setForceCloseDisabled();

	unsigned long long getUsingObjectID();

	int getIntValue();

	PlayerCreature* getPlayer();

	unsigned int getBoxID();

	int getWindowType();

	SceneObject* getUsingObject();

	void setUsingObject(SceneObject* object);

	SuiBox* _this;

	operator const SuiBox*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~SuiBoxImplementation();

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

	friend class SuiBox;
};

class SuiBoxAdapter : public ManagedObjectAdapter {
public:
	SuiBoxAdapter(SuiBoxImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initialize();

	void finalize();

	void initializeTransientMembers();

	void generateHeader(SuiCreatePageMessage* message);

	void generateBody(SuiCreatePageMessage* message);

	void generateFooter(SuiCreatePageMessage* message, int type);

	BaseMessage* generateMessage();

	BaseMessage* generateCloseMessage();

	void addSetting(const String& optType, const String& variable, const String& setting, const String& value);

	void addHeader(const String& variable, const String& type);

	void clearOptions();

	int compareTo(SuiBox* obj);

	bool hasGeneratedMessage();

	void setPromptTitle(const String& name);

	void setPromptText(const String& name);

	String getPromptTitle();

	void setHandlerText(const String& text);

	void setUsingObjectID(unsigned long long oid);

	void setWindowType(unsigned int type);

	void setBoxType(int type);

	void setIntValue(int value);

	bool isInputBox();

	bool isListBox();

	bool isMessageBox();

	bool isTransferBox();

	bool isBankTransferBox();

	bool isSlicingBox();

	bool isCharacterBuilderBox();

	bool isColorPicker();

	void setCancelButton(bool value, const String& cancelText);

	void setOtherButton(bool value, const String& backText);

	void setOkButton(bool value, const String& okText);

	void setForceCloseDistance(float dist);

	void setForceCloseDisabled();

	unsigned long long getUsingObjectID();

	int getIntValue();

	PlayerCreature* getPlayer();

	unsigned int getBoxID();

	int getWindowType();

	SceneObject* getUsingObject();

	void setUsingObject(SceneObject* object);

protected:
	String _param0_addSetting__String_String_String_String_;
	String _param1_addSetting__String_String_String_String_;
	String _param2_addSetting__String_String_String_String_;
	String _param3_addSetting__String_String_String_String_;
	String _param0_addHeader__String_String_;
	String _param1_addHeader__String_String_;
	String _param0_setPromptTitle__String_;
	String _param0_setPromptText__String_;
	String _param0_setHandlerText__String_;
	String _param1_setCancelButton__bool_String_;
	String _param1_setOtherButton__bool_String_;
	String _param1_setOkButton__bool_String_;
};

class SuiBoxHelper : public DistributedObjectClassHelper, public Singleton<SuiBoxHelper> {
	static SuiBoxHelper* staticInitializer;

public:
	SuiBoxHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<SuiBoxHelper>;
};

} // namespace sui
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sui;

#endif /*SUIBOX_H_*/
