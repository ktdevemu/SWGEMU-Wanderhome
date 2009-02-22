/*
 *	server/zone/objects/tangible/terminal/vendor/VendorTerminal.h generated by engine3 IDL compiler 0.55
 */

#ifndef VENDORTERMINAL_H_
#define VENDORTERMINAL_H_

#include "engine/orb/DistributedObjectBroker.h"

class BazaarManager;

class Player;

class Terminal;

#include "../Terminal.h"

class VendorTerminal : public Terminal {
public:
	VendorTerminal(BazaarManager* bazaarmanager, unsigned long long objid, float x, float z, float y);

	int useObject(Player* player);

protected:
	VendorTerminal(DummyConstructorParameter* param);

	virtual ~VendorTerminal();

	friend class VendorTerminalHelper;
};

class VendorTerminalImplementation;

class VendorTerminalAdapter : public TerminalAdapter {
public:
	VendorTerminalAdapter(VendorTerminalImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int useObject(Player* player);

};

class VendorTerminalHelper : public DistributedObjectClassHelper, public Singleton<VendorTerminalHelper> {
	static VendorTerminalHelper* staticInitializer;

public:
	VendorTerminalHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<VendorTerminalHelper>;
};

#include "../TerminalImplementation.h"

class VendorTerminalServant : public TerminalImplementation {
public:
	VendorTerminal* _this;

public:
	VendorTerminalServant(unsigned int objCRC, unsigned long long objid, const UnicodeString& n, const String& tempn, float x, float z, float y, unsigned char terminaltype);
	virtual ~VendorTerminalServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*VENDORTERMINAL_H_*/
