/*
 *	server/zone/objects/tangible/sign/SignObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "SignObject.h"

#include "server/zone/Zone.h"

/*
 *	SignObjectStub
 */

SignObject::SignObject() : TangibleObject(DummyConstructorParameter::instance()) {
	_impl = new SignObjectImplementation();
	_impl->_setStub(this);
}

SignObject::SignObject(DummyConstructorParameter* param) : TangibleObject(param) {
}

SignObject::~SignObject() {
}


/*
 *	SignObjectImplementation
 */

SignObjectImplementation::SignObjectImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}


SignObjectImplementation::~SignObjectImplementation() {
}


void SignObjectImplementation::finalize() {
}

void SignObjectImplementation::_initializeImplementation() {
	_setClassHelper(SignObjectHelper::instance());

	_serializationHelperMethod();
}

void SignObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (SignObject*) stub;
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* SignObjectImplementation::_getStub() {
	return _this;
}

SignObjectImplementation::operator const SignObject*() {
	return _this;
}

void SignObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void SignObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void SignObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void SignObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void SignObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void SignObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void SignObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void SignObjectImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("SignObject");

}

SignObjectImplementation::SignObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/sign/SignObject.idl(53):  		Logger.setLoggingName("SignObject");
	Logger::setLoggingName("SignObject");
}

/*
 *	SignObjectAdapter
 */

SignObjectAdapter::SignObjectAdapter(SignObjectImplementation* obj) : TangibleObjectAdapter(obj) {
}

Packet* SignObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	default:
		return NULL;
	}

	return resp;
}

/*
 *	SignObjectHelper
 */

SignObjectHelper* SignObjectHelper::staticInitializer = SignObjectHelper::instance();

SignObjectHelper::SignObjectHelper() {
	className = "SignObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void SignObjectHelper::finalizeHelper() {
	SignObjectHelper::finalize();
}

DistributedObject* SignObjectHelper::instantiateObject() {
	return new SignObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* SignObjectHelper::instantiateServant() {
	return new SignObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* SignObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new SignObjectAdapter((SignObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

