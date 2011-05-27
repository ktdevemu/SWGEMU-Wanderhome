/*
 * LuaSceneObject.h
 *
 *  Created on: 27/05/2011
 *      Author: victor
 */

#ifndef LUASCENEOBJECT_H_
#define LUASCENEOBJECT_H_

#include "engine/engine.h"

namespace server {
namespace zone {
namespace objects {
namespace scene {
	class SceneObject;

	class LuaSceneObject {
	public:
		// Constants
		static const char className[];
		static Luna<LuaSceneObject>::RegType Register[];

		// Initialize the pointer
		LuaSceneObject(lua_State *L);
		~LuaSceneObject();

		int _setObject(lua_State* L);
		// Methods we will need to use
		int getParent(lua_State* L);
		int getPositionX(lua_State* L);
		int getPositionZ(lua_State* L);
		int getPositionY(lua_State* L);
		int getObjectID(lua_State* L);
		int getParentID(lua_State* L);
		int isInRange(lua_State* L);
		int isInRangeWithObject(lua_State* L);
		int wlock(lua_State* L);
		int unlock(lua_State* L);
		int getServerObjectCRC(lua_State* L);

		int getDistanceTo(lua_State* L);


	private:
		// The pointer to the 'real object' defined in object.cc
		Reference<SceneObject*> realObject;
	};

}
}
}
}

using namespace server::zone::objects::scene;

#endif /* LUASCENEOBJECT_H_ */
