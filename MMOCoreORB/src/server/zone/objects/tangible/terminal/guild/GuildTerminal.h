/*
 *	server/zone/objects/tangible/terminal/guild/GuildTerminal.h generated by engine3 IDL compiler 0.55
 */

#ifndef GUILDTERMINAL_H_
#define GUILDTERMINAL_H_

#include "engine/orb/DistributedObjectBroker.h"

class GuildManager;

class Terminal;

class Player;

#include "../Terminal.h"

class GuildTerminal : public Terminal {
public:
	GuildTerminal(GuildManager* guildmanager, unsigned long long objid, float x, float z, float y);

	int useObject(Player* player);

protected:
	GuildTerminal(DummyConstructorParameter* param);

	virtual ~GuildTerminal();

	friend class GuildTerminalHelper;
};

class GuildTerminalImplementation;

class GuildTerminalAdapter : public TerminalAdapter {
public:
	GuildTerminalAdapter(GuildTerminalImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int useObject(Player* player);

};

class GuildTerminalHelper : public DistributedObjectClassHelper, public Singleton<GuildTerminalHelper> {
	static GuildTerminalHelper* staticInitializer;

public:
	GuildTerminalHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<GuildTerminalHelper>;
};

#include "../TerminalImplementation.h"

class GuildTerminalServant : public TerminalImplementation {
public:
	GuildTerminal* _this;

public:
	GuildTerminalServant(unsigned int objCRC, unsigned long long objid, const UnicodeString& n, const String& tempn, float x, float z, float y, unsigned char TerminalType);
	virtual ~GuildTerminalServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*GUILDTERMINAL_H_*/
