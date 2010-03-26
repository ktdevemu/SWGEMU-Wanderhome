/*
 *	server/zone/objects/tangible/tool/CraftingTool.cpp generated by engine3 IDL compiler 0.60
 */

#include "CraftingTool.h"

#include "server/zone/objects/scene/SceneObject.h"

/*
 *	CraftingToolStub
 */

CraftingTool::CraftingTool() : ToolTangibleObject(DummyConstructorParameter::instance()) {
	_impl = new CraftingToolImplementation();
	_impl->_setStub(this);
}

CraftingTool::CraftingTool(DummyConstructorParameter* param) : ToolTangibleObject(param) {
}

CraftingTool::~CraftingTool() {
}


void CraftingTool::initializeTransientMembers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((CraftingToolImplementation*) _impl)->initializeTransientMembers();
}

/*
 *	CraftingToolImplementation
 */

CraftingToolImplementation::CraftingToolImplementation(DummyConstructorParameter* param) : ToolTangibleObjectImplementation(param) {
	_initializeImplementation();
}

CraftingToolImplementation::~CraftingToolImplementation() {
}


void CraftingToolImplementation::finalize() {
}

void CraftingToolImplementation::_initializeImplementation() {
	_setClassHelper(CraftingToolHelper::instance());

	_serializationHelperMethod();
}

void CraftingToolImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (CraftingTool*) stub;
	ToolTangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* CraftingToolImplementation::_getStub() {
	return _this;
}

CraftingToolImplementation::operator const CraftingTool*() {
	return _this;
}

void CraftingToolImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void CraftingToolImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void CraftingToolImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void CraftingToolImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void CraftingToolImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void CraftingToolImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void CraftingToolImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void CraftingToolImplementation::_serializationHelperMethod() {
	ToolTangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("CraftingTool");

}

CraftingToolImplementation::CraftingToolImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/tool/CraftingTool.idl(53):  		Logger.setLoggingName("CraftingTool");
	Logger::setLoggingName("CraftingTool");
}

void CraftingToolImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/tool/CraftingTool.idl(57):  		super.initializeTransientMembers();
	ToolTangibleObjectImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/tool/CraftingTool.idl(59):  		Logger.setLoggingName("CraftingTool");
	Logger::setLoggingName("CraftingTool");
}

/*
 *	CraftingToolAdapter
 */

CraftingToolAdapter::CraftingToolAdapter(CraftingToolImplementation* obj) : ToolTangibleObjectAdapter(obj) {
}

Packet* CraftingToolAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	default:
		return NULL;
	}

	return resp;
}

void CraftingToolAdapter::initializeTransientMembers() {
	((CraftingToolImplementation*) impl)->initializeTransientMembers();
}

/*
 *	CraftingToolHelper
 */

CraftingToolHelper* CraftingToolHelper::staticInitializer = CraftingToolHelper::instance();

CraftingToolHelper::CraftingToolHelper() {
	className = "CraftingTool";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void CraftingToolHelper::finalizeHelper() {
	CraftingToolHelper::finalize();
}

DistributedObject* CraftingToolHelper::instantiateObject() {
	return new CraftingTool(DummyConstructorParameter::instance());
}

DistributedObjectServant* CraftingToolHelper::instantiateServant() {
	return new CraftingToolImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* CraftingToolHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CraftingToolAdapter((CraftingToolImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

