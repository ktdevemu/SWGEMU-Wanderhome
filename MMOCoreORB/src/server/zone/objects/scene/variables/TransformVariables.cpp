/*
 *	server/zone/objects/scene/variables/TransformVariables.cpp generated by engine3 IDL compiler 0.55
 */

#include "TransformVariables.h"

#include "TransformVariablesImplementation.h"

/*
 *	TransformVariablesStub
 */

TransformVariables::TransformVariables() : ManagedObject(DummyConstructorParameter::instance()) {
	_impl = new TransformVariablesImplementation();
	_impl->_setStub(this);
}

TransformVariables::TransformVariables(DummyConstructorParameter* param) : ManagedObject(param) {
}

TransformVariables::~TransformVariables() {
}

void TransformVariables::setDirectionAngle(unsigned char angle) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addUnsignedCharParameter(angle);

		method.executeWithVoidReturn();
	} else
		((TransformVariablesImplementation*) _impl)->setDirectionAngle(angle);
}

void TransformVariables::setMovementCounter(unsigned int counter) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addUnsignedIntParameter(counter);

		method.executeWithVoidReturn();
	} else
		((TransformVariablesImplementation*) _impl)->setMovementCounter(counter);
}

void TransformVariables::setMovementStamp(unsigned int stamp) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addUnsignedIntParameter(stamp);

		method.executeWithVoidReturn();
	} else
		((TransformVariablesImplementation*) _impl)->setMovementStamp(stamp);
}

void TransformVariables::setDirection(float x, float z, float y, float w) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addFloatParameter(x);
		method.addFloatParameter(z);
		method.addFloatParameter(y);
		method.addFloatParameter(w);

		method.executeWithVoidReturn();
	} else
		((TransformVariablesImplementation*) _impl)->setDirection(x, z, y, w);
}

unsigned int TransformVariables::getMovementCounter() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((TransformVariablesImplementation*) _impl)->getMovementCounter();
}

float TransformVariables::getPositionX() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		return method.executeWithFloatReturn();
	} else
		return ((TransformVariablesImplementation*) _impl)->getPositionX();
}

float TransformVariables::getPositionZ() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		return method.executeWithFloatReturn();
	} else
		return ((TransformVariablesImplementation*) _impl)->getPositionZ();
}

float TransformVariables::getPositionY() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		return method.executeWithFloatReturn();
	} else
		return ((TransformVariablesImplementation*) _impl)->getPositionY();
}

float TransformVariables::getPreviousPositionX() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);

		return method.executeWithFloatReturn();
	} else
		return ((TransformVariablesImplementation*) _impl)->getPreviousPositionX();
}

float TransformVariables::getPreviousPositionZ() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);

		return method.executeWithFloatReturn();
	} else
		return ((TransformVariablesImplementation*) _impl)->getPreviousPositionZ();
}

float TransformVariables::getPreviousPositionY() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);

		return method.executeWithFloatReturn();
	} else
		return ((TransformVariablesImplementation*) _impl)->getPreviousPositionY();
}

int TransformVariables::getDirectionAngle() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);

		return method.executeWithSignedIntReturn();
	} else
		return ((TransformVariablesImplementation*) _impl)->getDirectionAngle();
}

void TransformVariables::initializePosition(float x, float z, float y) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addFloatParameter(x);
		method.addFloatParameter(z);
		method.addFloatParameter(y);

		method.executeWithVoidReturn();
	} else
		((TransformVariablesImplementation*) _impl)->initializePosition(x, z, y);
}

float TransformVariables::getDirectionX() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);

		return method.executeWithFloatReturn();
	} else
		return ((TransformVariablesImplementation*) _impl)->getDirectionX();
}

float TransformVariables::getDirectionZ() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);

		return method.executeWithFloatReturn();
	} else
		return ((TransformVariablesImplementation*) _impl)->getDirectionZ();
}

float TransformVariables::getDirectionY() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);

		return method.executeWithFloatReturn();
	} else
		return ((TransformVariablesImplementation*) _impl)->getDirectionY();
}

float TransformVariables::getDirectionW() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);

		return method.executeWithFloatReturn();
	} else
		return ((TransformVariablesImplementation*) _impl)->getDirectionW();
}

/*
 *	TransformVariablesAdapter
 */

TransformVariablesAdapter::TransformVariablesAdapter(TransformVariablesImplementation* obj) : ManagedObjectAdapter(obj) {
}

Packet* TransformVariablesAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		setDirectionAngle(inv->getUnsignedCharParameter());
		break;
	case 7:
		setMovementCounter(inv->getUnsignedIntParameter());
		break;
	case 8:
		setMovementStamp(inv->getUnsignedIntParameter());
		break;
	case 9:
		setDirection(inv->getFloatParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getFloatParameter());
		break;
	case 10:
		resp->insertInt(getMovementCounter());
		break;
	case 11:
		resp->insertFloat(getPositionX());
		break;
	case 12:
		resp->insertFloat(getPositionZ());
		break;
	case 13:
		resp->insertFloat(getPositionY());
		break;
	case 14:
		resp->insertFloat(getPreviousPositionX());
		break;
	case 15:
		resp->insertFloat(getPreviousPositionZ());
		break;
	case 16:
		resp->insertFloat(getPreviousPositionY());
		break;
	case 17:
		resp->insertSignedInt(getDirectionAngle());
		break;
	case 18:
		initializePosition(inv->getFloatParameter(), inv->getFloatParameter(), inv->getFloatParameter());
		break;
	case 19:
		resp->insertFloat(getDirectionX());
		break;
	case 20:
		resp->insertFloat(getDirectionZ());
		break;
	case 21:
		resp->insertFloat(getDirectionY());
		break;
	case 22:
		resp->insertFloat(getDirectionW());
		break;
	default:
		return NULL;
	}

	return resp;
}

void TransformVariablesAdapter::setDirectionAngle(unsigned char angle) {
	return ((TransformVariablesImplementation*) impl)->setDirectionAngle(angle);
}

void TransformVariablesAdapter::setMovementCounter(unsigned int counter) {
	return ((TransformVariablesImplementation*) impl)->setMovementCounter(counter);
}

void TransformVariablesAdapter::setMovementStamp(unsigned int stamp) {
	return ((TransformVariablesImplementation*) impl)->setMovementStamp(stamp);
}

void TransformVariablesAdapter::setDirection(float x, float z, float y, float w) {
	return ((TransformVariablesImplementation*) impl)->setDirection(x, z, y, w);
}

unsigned int TransformVariablesAdapter::getMovementCounter() {
	return ((TransformVariablesImplementation*) impl)->getMovementCounter();
}

float TransformVariablesAdapter::getPositionX() {
	return ((TransformVariablesImplementation*) impl)->getPositionX();
}

float TransformVariablesAdapter::getPositionZ() {
	return ((TransformVariablesImplementation*) impl)->getPositionZ();
}

float TransformVariablesAdapter::getPositionY() {
	return ((TransformVariablesImplementation*) impl)->getPositionY();
}

float TransformVariablesAdapter::getPreviousPositionX() {
	return ((TransformVariablesImplementation*) impl)->getPreviousPositionX();
}

float TransformVariablesAdapter::getPreviousPositionZ() {
	return ((TransformVariablesImplementation*) impl)->getPreviousPositionZ();
}

float TransformVariablesAdapter::getPreviousPositionY() {
	return ((TransformVariablesImplementation*) impl)->getPreviousPositionY();
}

int TransformVariablesAdapter::getDirectionAngle() {
	return ((TransformVariablesImplementation*) impl)->getDirectionAngle();
}

void TransformVariablesAdapter::initializePosition(float x, float z, float y) {
	return ((TransformVariablesImplementation*) impl)->initializePosition(x, z, y);
}

float TransformVariablesAdapter::getDirectionX() {
	return ((TransformVariablesImplementation*) impl)->getDirectionX();
}

float TransformVariablesAdapter::getDirectionZ() {
	return ((TransformVariablesImplementation*) impl)->getDirectionZ();
}

float TransformVariablesAdapter::getDirectionY() {
	return ((TransformVariablesImplementation*) impl)->getDirectionY();
}

float TransformVariablesAdapter::getDirectionW() {
	return ((TransformVariablesImplementation*) impl)->getDirectionW();
}

/*
 *	TransformVariablesHelper
 */

TransformVariablesHelper* TransformVariablesHelper::staticInitializer = TransformVariablesHelper::instance();

TransformVariablesHelper::TransformVariablesHelper() {
	className = "TransformVariables";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void TransformVariablesHelper::finalizeHelper() {
	TransformVariablesHelper::finalize();
}

DistributedObject* TransformVariablesHelper::instantiateObject() {
	return new TransformVariables(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* TransformVariablesHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new TransformVariablesAdapter((TransformVariablesImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	TransformVariablesServant
 */

TransformVariablesServant::TransformVariablesServant() : ManagedObjectImplementation() {
	_classHelper = TransformVariablesHelper::instance();
}

TransformVariablesServant::~TransformVariablesServant() {
}

void TransformVariablesServant::_setStub(DistributedObjectStub* stub) {
	_this = (TransformVariables*) stub;
	ManagedObjectServant::_setStub(stub);
}

DistributedObjectStub* TransformVariablesServant::_getStub() {
	return _this;
}

