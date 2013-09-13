/*
 *	server/zone/objects/area/areashapes/RingAreaShape.cpp generated by engine3 IDL compiler 0.60
 */

#include "RingAreaShape.h"

#include "server/zone/objects/area/areashapes/CircularAreaShape.h"

/*
 *	RingAreaShapeStub
 */

enum {RPC_SETINNERRADIUS__FLOAT_ = 6,RPC_SETOUTERRADIUS__FLOAT_,RPC_GETINNERRADIUS__,RPC_GETINNERRADIUS2__,RPC_GETOUTERRADIUS__,RPC_GETOUTERRADIUS2__,RPC_CONTAINSPOINT__FLOAT_FLOAT_,RPC_ISRINGAREASHAPE__,RPC_ISCIRCULARAREASHAPE__,RPC_ISRECTANGULARAREASHAPE__,RPC_INTERSECTSWITH__AREASHAPE_,RPC_GETAREA__};

RingAreaShape::RingAreaShape() : AreaShape(DummyConstructorParameter::instance()) {
	RingAreaShapeImplementation* _implementation = new RingAreaShapeImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("RingAreaShape");
}

RingAreaShape::RingAreaShape(DummyConstructorParameter* param) : AreaShape(param) {
	_setClassName("RingAreaShape");
}

RingAreaShape::~RingAreaShape() {
}



void RingAreaShape::setInnerRadius(float r) {
	RingAreaShapeImplementation* _implementation = static_cast<RingAreaShapeImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETINNERRADIUS__FLOAT_);
		method.addFloatParameter(r);

		method.executeWithVoidReturn();
	} else
		_implementation->setInnerRadius(r);
}

void RingAreaShape::setOuterRadius(float r) {
	RingAreaShapeImplementation* _implementation = static_cast<RingAreaShapeImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETOUTERRADIUS__FLOAT_);
		method.addFloatParameter(r);

		method.executeWithVoidReturn();
	} else
		_implementation->setOuterRadius(r);
}

float RingAreaShape::getInnerRadius() {
	RingAreaShapeImplementation* _implementation = static_cast<RingAreaShapeImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETINNERRADIUS__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getInnerRadius();
}

float RingAreaShape::getInnerRadius2() {
	RingAreaShapeImplementation* _implementation = static_cast<RingAreaShapeImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETINNERRADIUS2__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getInnerRadius2();
}

float RingAreaShape::getOuterRadius() {
	RingAreaShapeImplementation* _implementation = static_cast<RingAreaShapeImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETOUTERRADIUS__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getOuterRadius();
}

float RingAreaShape::getOuterRadius2() {
	RingAreaShapeImplementation* _implementation = static_cast<RingAreaShapeImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETOUTERRADIUS2__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getOuterRadius2();
}

bool RingAreaShape::containsPoint(float x, float y) {
	RingAreaShapeImplementation* _implementation = static_cast<RingAreaShapeImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CONTAINSPOINT__FLOAT_FLOAT_);
		method.addFloatParameter(x);
		method.addFloatParameter(y);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->containsPoint(x, y);
}

bool RingAreaShape::containsPoint(const Vector3& point) {
	RingAreaShapeImplementation* _implementation = static_cast<RingAreaShapeImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->containsPoint(point);
}

Vector3 RingAreaShape::getRandomPosition() {
	RingAreaShapeImplementation* _implementation = static_cast<RingAreaShapeImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getRandomPosition();
}

Vector3 RingAreaShape::getRandomPosition(const Vector3& origin, float minDistance, float maxDistance) {
	RingAreaShapeImplementation* _implementation = static_cast<RingAreaShapeImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getRandomPosition(origin, minDistance, maxDistance);
}

bool RingAreaShape::isRingAreaShape() {
	RingAreaShapeImplementation* _implementation = static_cast<RingAreaShapeImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISRINGAREASHAPE__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isRingAreaShape();
}

bool RingAreaShape::isCircularAreaShape() {
	RingAreaShapeImplementation* _implementation = static_cast<RingAreaShapeImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISCIRCULARAREASHAPE__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isCircularAreaShape();
}

bool RingAreaShape::isRectangularAreaShape() {
	RingAreaShapeImplementation* _implementation = static_cast<RingAreaShapeImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISRECTANGULARAREASHAPE__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isRectangularAreaShape();
}

bool RingAreaShape::intersectsWith(AreaShape* areaShape) {
	RingAreaShapeImplementation* _implementation = static_cast<RingAreaShapeImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INTERSECTSWITH__AREASHAPE_);
		method.addObjectParameter(areaShape);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->intersectsWith(areaShape);
}

float RingAreaShape::getArea() {
	RingAreaShapeImplementation* _implementation = static_cast<RingAreaShapeImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETAREA__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getArea();
}

DistributedObjectServant* RingAreaShape::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* RingAreaShape::_getImplementationForRead() {
	return _impl;
}

void RingAreaShape::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	RingAreaShapeImplementation
 */

RingAreaShapeImplementation::RingAreaShapeImplementation(DummyConstructorParameter* param) : AreaShapeImplementation(param) {
	_initializeImplementation();
}


RingAreaShapeImplementation::~RingAreaShapeImplementation() {
}


void RingAreaShapeImplementation::finalize() {
}

void RingAreaShapeImplementation::_initializeImplementation() {
	_setClassHelper(RingAreaShapeHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void RingAreaShapeImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<RingAreaShape*>(stub);
	AreaShapeImplementation::_setStub(stub);
}

DistributedObjectStub* RingAreaShapeImplementation::_getStub() {
	return _this.get();
}

RingAreaShapeImplementation::operator const RingAreaShape*() {
	return _this.get();
}

void RingAreaShapeImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void RingAreaShapeImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void RingAreaShapeImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void RingAreaShapeImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void RingAreaShapeImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void RingAreaShapeImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void RingAreaShapeImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void RingAreaShapeImplementation::_serializationHelperMethod() {
	AreaShapeImplementation::_serializationHelperMethod();

	_setClassName("RingAreaShape");

}

void RingAreaShapeImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(RingAreaShapeImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool RingAreaShapeImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (AreaShapeImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xab1d82: //RingAreaShape.innerRadius
		TypeInfo<float >::parseFromBinaryStream(&innerRadius, stream);
		return true;

	case 0xd7f60429: //RingAreaShape.outerRadius
		TypeInfo<float >::parseFromBinaryStream(&outerRadius, stream);
		return true;

	case 0xc75a94b5: //RingAreaShape.innerRadius2
		TypeInfo<float >::parseFromBinaryStream(&innerRadius2, stream);
		return true;

	case 0x959f2459: //RingAreaShape.outerRadius2
		TypeInfo<float >::parseFromBinaryStream(&outerRadius2, stream);
		return true;

	}

	return false;
}

void RingAreaShapeImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = RingAreaShapeImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int RingAreaShapeImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = AreaShapeImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0xab1d82; //RingAreaShape.innerRadius
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&innerRadius, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xd7f60429; //RingAreaShape.outerRadius
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&outerRadius, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xc75a94b5; //RingAreaShape.innerRadius2
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&innerRadius2, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x959f2459; //RingAreaShape.outerRadius2
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&outerRadius2, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 4;
}

RingAreaShapeImplementation::RingAreaShapeImplementation() : AreaShapeImplementation() {
	_initializeImplementation();
	// server/zone/objects/area/areashapes/RingAreaShape.idl():  		innerRadius = 0;
	innerRadius = 0;
	// server/zone/objects/area/areashapes/RingAreaShape.idl():  		outerRadius = 0;
	outerRadius = 0;
	// server/zone/objects/area/areashapes/RingAreaShape.idl():  		innerRadius2 = 0;
	innerRadius2 = 0;
	// server/zone/objects/area/areashapes/RingAreaShape.idl():  		outerRadius2 = 0;
	outerRadius2 = 0;
}

void RingAreaShapeImplementation::setInnerRadius(float r) {
	// server/zone/objects/area/areashapes/RingAreaShape.idl():  		innerRadius = r;
	innerRadius = r;
	// server/zone/objects/area/areashapes/RingAreaShape.idl():  		innerRadius2 = r * r;
	innerRadius2 = r * r;
}

void RingAreaShapeImplementation::setOuterRadius(float r) {
	// server/zone/objects/area/areashapes/RingAreaShape.idl():  		outerRadius = r;
	outerRadius = r;
	// server/zone/objects/area/areashapes/RingAreaShape.idl():  		outerRadius2 = r * r;
	outerRadius2 = r * r;
}

float RingAreaShapeImplementation::getInnerRadius() {
	// server/zone/objects/area/areashapes/RingAreaShape.idl():  		return innerRadius;
	return innerRadius;
}

float RingAreaShapeImplementation::getInnerRadius2() {
	// server/zone/objects/area/areashapes/RingAreaShape.idl():  		return innerRadius2;
	return innerRadius2;
}

float RingAreaShapeImplementation::getOuterRadius() {
	// server/zone/objects/area/areashapes/RingAreaShape.idl():  		return outerRadius;
	return outerRadius;
}

float RingAreaShapeImplementation::getOuterRadius2() {
	// server/zone/objects/area/areashapes/RingAreaShape.idl():  		return outerRadius2;
	return outerRadius2;
}

bool RingAreaShapeImplementation::isRingAreaShape() {
	// server/zone/objects/area/areashapes/RingAreaShape.idl():  		return true;
	return true;
}

bool RingAreaShapeImplementation::isCircularAreaShape() {
	// server/zone/objects/area/areashapes/RingAreaShape.idl():  		return false;
	return false;
}

bool RingAreaShapeImplementation::isRectangularAreaShape() {
	// server/zone/objects/area/areashapes/RingAreaShape.idl():  		return false;
	return false;
}

/*
 *	RingAreaShapeAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


RingAreaShapeAdapter::RingAreaShapeAdapter(RingAreaShape* obj) : AreaShapeAdapter(obj) {
}

void RingAreaShapeAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_SETINNERRADIUS__FLOAT_:
		{
			setInnerRadius(inv->getFloatParameter());
		}
		break;
	case RPC_SETOUTERRADIUS__FLOAT_:
		{
			setOuterRadius(inv->getFloatParameter());
		}
		break;
	case RPC_GETINNERRADIUS__:
		{
			resp->insertFloat(getInnerRadius());
		}
		break;
	case RPC_GETINNERRADIUS2__:
		{
			resp->insertFloat(getInnerRadius2());
		}
		break;
	case RPC_GETOUTERRADIUS__:
		{
			resp->insertFloat(getOuterRadius());
		}
		break;
	case RPC_GETOUTERRADIUS2__:
		{
			resp->insertFloat(getOuterRadius2());
		}
		break;
	case RPC_CONTAINSPOINT__FLOAT_FLOAT_:
		{
			resp->insertBoolean(containsPoint(inv->getFloatParameter(), inv->getFloatParameter()));
		}
		break;
	case RPC_ISRINGAREASHAPE__:
		{
			resp->insertBoolean(isRingAreaShape());
		}
		break;
	case RPC_ISCIRCULARAREASHAPE__:
		{
			resp->insertBoolean(isCircularAreaShape());
		}
		break;
	case RPC_ISRECTANGULARAREASHAPE__:
		{
			resp->insertBoolean(isRectangularAreaShape());
		}
		break;
	case RPC_INTERSECTSWITH__AREASHAPE_:
		{
			resp->insertBoolean(intersectsWith(static_cast<AreaShape*>(inv->getObjectParameter())));
		}
		break;
	case RPC_GETAREA__:
		{
			resp->insertFloat(getArea());
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

void RingAreaShapeAdapter::setInnerRadius(float r) {
	(static_cast<RingAreaShape*>(stub))->setInnerRadius(r);
}

void RingAreaShapeAdapter::setOuterRadius(float r) {
	(static_cast<RingAreaShape*>(stub))->setOuterRadius(r);
}

float RingAreaShapeAdapter::getInnerRadius() {
	return (static_cast<RingAreaShape*>(stub))->getInnerRadius();
}

float RingAreaShapeAdapter::getInnerRadius2() {
	return (static_cast<RingAreaShape*>(stub))->getInnerRadius2();
}

float RingAreaShapeAdapter::getOuterRadius() {
	return (static_cast<RingAreaShape*>(stub))->getOuterRadius();
}

float RingAreaShapeAdapter::getOuterRadius2() {
	return (static_cast<RingAreaShape*>(stub))->getOuterRadius2();
}

bool RingAreaShapeAdapter::containsPoint(float x, float y) {
	return (static_cast<RingAreaShape*>(stub))->containsPoint(x, y);
}

bool RingAreaShapeAdapter::isRingAreaShape() {
	return (static_cast<RingAreaShape*>(stub))->isRingAreaShape();
}

bool RingAreaShapeAdapter::isCircularAreaShape() {
	return (static_cast<RingAreaShape*>(stub))->isCircularAreaShape();
}

bool RingAreaShapeAdapter::isRectangularAreaShape() {
	return (static_cast<RingAreaShape*>(stub))->isRectangularAreaShape();
}

bool RingAreaShapeAdapter::intersectsWith(AreaShape* areaShape) {
	return (static_cast<RingAreaShape*>(stub))->intersectsWith(areaShape);
}

float RingAreaShapeAdapter::getArea() {
	return (static_cast<RingAreaShape*>(stub))->getArea();
}

/*
 *	RingAreaShapeHelper
 */

RingAreaShapeHelper* RingAreaShapeHelper::staticInitializer = RingAreaShapeHelper::instance();

RingAreaShapeHelper::RingAreaShapeHelper() {
	className = "RingAreaShape";

	Core::getObjectBroker()->registerClass(className, this);
}

void RingAreaShapeHelper::finalizeHelper() {
	RingAreaShapeHelper::finalize();
}

DistributedObject* RingAreaShapeHelper::instantiateObject() {
	return new RingAreaShape(DummyConstructorParameter::instance());
}

DistributedObjectServant* RingAreaShapeHelper::instantiateServant() {
	return new RingAreaShapeImplementation();
}

DistributedObjectAdapter* RingAreaShapeHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new RingAreaShapeAdapter(static_cast<RingAreaShape*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

