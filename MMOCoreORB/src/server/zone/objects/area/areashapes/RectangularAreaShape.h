/*
 *	server/zone/objects/area/areashapes/RectangularAreaShape.h generated by engine3 IDL compiler 0.60
 */

#ifndef RECTANGULARAREASHAPE_H_
#define RECTANGULARAREASHAPE_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace area {
namespace areashapes {

class CircularAreaShape;

} // namespace areashapes
} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area::areashapes;

#include "server/zone/objects/area/areashapes/AreaShape.h"

namespace server {
namespace zone {
namespace objects {
namespace area {
namespace areashapes {

class RectangularAreaShape : public AreaShape {
public:
	/** Constructor */
	RectangularAreaShape();

	/**
	 * Set the dimensions of the rectangle.
	 * @param h the height of the rectangle.
	 * @param w the width of the rectangle.
	 */
	void setDimensions(float h, float w);

	/**
	 * Get the height of the rectangle.
	 * @return height of the rectangle.
	 */
	float getHeight();

	/**
	 * Get the width of the rectangle.
	 * @return width of the rectangle.
	 */
	float getWidth();

	/**
	 * Check if the coordinate is within the area shape.
	 * @param x the x coordinate.
	 * @param y the y coordinate.
	 * @return true if the coordinate is within the area shape.
	 */
	bool containsPoint(float x, float y);

	/**
	 * Check if the coordinate is within the area shape.
	 * @param point the point to check if it is within the area shape.
	 * @return true if the coordinate is within the area shape.
	 */
	bool containsPoint(const Vector3& point);

	/**
	 * Generate a random position within the area.
	 * @return a random position within the area.
	 */
	Vector3 getRandomPosition();

	/**
	 * Generate a random position within the area with the supplied origin and radius as limits.
	 * @param origin the origin coordinate to generate the random position from.
	 * @param minDistance the minimum distance from the origin.
	 * @param maxDistance the maximum distance from the origin.
	 * @return a random position within the area.
	 */
	Vector3 getRandomPosition(const Vector3& origin, float minDistance, float maxDistance);

	/**
	 * Check if this is a circular area shape.
	 * @return true if it is a circular area shape.
	 */
	bool isCircularAreaShape();

	/**
	 * Check if this is a rectangular area shape.
	 * @return true if it is a rectangular area shape.
	 */
	bool isRectangularAreaShape();

	/**
	 * Check if this is a ring area shape.
	 * @return true if it is a ring area shape.
	 */
	bool isRingAreaShape();

	/**
	 * Check if this area shape intersects with the supplied area shape.
	 * @param areaShape the area shape to check for intersections with.s
	 * @return true if the area shapes intersects each other.
	 */
	bool intersectsWith(AreaShape* areaShape);

	/**
	 * Get the area of the areaShape.
	 * @return the area of the area shape.
	 */
	float getArea();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	RectangularAreaShape(DummyConstructorParameter* param);

	virtual ~RectangularAreaShape();

	friend class RectangularAreaShapeHelper;
};

} // namespace areashapes
} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area::areashapes;

namespace server {
namespace zone {
namespace objects {
namespace area {
namespace areashapes {

class RectangularAreaShapeImplementation : public AreaShapeImplementation {
protected:
	float height;

	float width;

public:
	RectangularAreaShapeImplementation();

	RectangularAreaShapeImplementation(DummyConstructorParameter* param);

	/**
	 * Set the dimensions of the rectangle.
	 * @param h the height of the rectangle.
	 * @param w the width of the rectangle.
	 */
	void setDimensions(float h, float w);

	/**
	 * Get the height of the rectangle.
	 * @return height of the rectangle.
	 */
	virtual float getHeight();

	/**
	 * Get the width of the rectangle.
	 * @return width of the rectangle.
	 */
	virtual float getWidth();

	/**
	 * Check if the coordinate is within the area shape.
	 * @param x the x coordinate.
	 * @param y the y coordinate.
	 * @return true if the coordinate is within the area shape.
	 */
	virtual bool containsPoint(float x, float y);

	/**
	 * Check if the coordinate is within the area shape.
	 * @param point the point to check if it is within the area shape.
	 * @return true if the coordinate is within the area shape.
	 */
	virtual bool containsPoint(const Vector3& point);

	/**
	 * Generate a random position within the area.
	 * @return a random position within the area.
	 */
	virtual Vector3 getRandomPosition();

	/**
	 * Generate a random position within the area with the supplied origin and radius as limits.
	 * @param origin the origin coordinate to generate the random position from.
	 * @param minDistance the minimum distance from the origin.
	 * @param maxDistance the maximum distance from the origin.
	 * @return a random position within the area.
	 */
	virtual Vector3 getRandomPosition(const Vector3& origin, float minDistance, float maxDistance);

	/**
	 * Check if this is a circular area shape.
	 * @return true if it is a circular area shape.
	 */
	virtual bool isCircularAreaShape();

	/**
	 * Check if this is a rectangular area shape.
	 * @return true if it is a rectangular area shape.
	 */
	virtual bool isRectangularAreaShape();

	/**
	 * Check if this is a ring area shape.
	 * @return true if it is a ring area shape.
	 */
	virtual bool isRingAreaShape();

	/**
	 * Check if this area shape intersects with the supplied area shape.
	 * @param areaShape the area shape to check for intersections with.s
	 * @return true if the area shapes intersects each other.
	 */
	virtual bool intersectsWith(AreaShape* areaShape);

private:
	/**
	 * Calculates the point in the area that has the shortest distance to the supplied
	 * position.
	 * @param position the position to find the closest point towards.
	 * @return the closest point inside the area.
	 */
	Vector3 getClosestPoint(const Vector3& position);

	/**
	 * Calculates the point in the area that has the longest distance to the supplied
	 * position.
	 * @param position the position to find the closest point towards.
	 * @return the farthest point inside the area.
	 */
	Vector3 getFarthestPoint(const Vector3& position);

public:
	/**
	 * Get the area of the areaShape.
	 * @return the area of the area shape.
	 */
	virtual float getArea();

	WeakReference<RectangularAreaShape*> _this;

	operator const RectangularAreaShape*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~RectangularAreaShapeImplementation();

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
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class RectangularAreaShape;
};

class RectangularAreaShapeAdapter : public AreaShapeAdapter {
public:
	RectangularAreaShapeAdapter(RectangularAreaShape* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void setDimensions(float h, float w);

	float getHeight();

	float getWidth();

	bool containsPoint(float x, float y);

	bool isCircularAreaShape();

	bool isRectangularAreaShape();

	bool isRingAreaShape();

	bool intersectsWith(AreaShape* areaShape);

	float getArea();

};

class RectangularAreaShapeHelper : public DistributedObjectClassHelper, public Singleton<RectangularAreaShapeHelper> {
	static RectangularAreaShapeHelper* staticInitializer;

public:
	RectangularAreaShapeHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<RectangularAreaShapeHelper>;
};

} // namespace areashapes
} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area::areashapes;

#endif /*RECTANGULARAREASHAPE_H_*/
