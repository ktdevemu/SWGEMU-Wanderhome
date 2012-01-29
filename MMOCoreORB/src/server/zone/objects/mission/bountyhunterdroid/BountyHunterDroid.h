/*
 * BountyHunterDroid.h
 *
 *  Created on: Jan 20, 2012
 *      Author: loshult
 */

#ifndef BOUNTYHUNTERDROID_H_
#define BOUNTYHUNTERDROID_H_

#include "server/zone/objects/scene/SceneObject.h"
#include "server/zone/objects/mission/MissionObject.h"
#include "server/zone/objects/creature/CreatureObject.h"
#include "server/zone/objects/creature/AiAgent.h"
#include "engine/log/Logger.h"
#include "server/zone/objects/mission/bountyhunterdroid/events/FindTargetTask.h"

namespace server {
namespace zone {
namespace objects {
namespace mission {
namespace bountyhunterdroid {

/**
 * Class implementing the functionality of the bounty hunter droids.
 */
class BountyHunterDroid : public Logger, public Object {
public:

	static const int CALLDROID = 0;
	static const int TRANSMITBIOLOGICALSIGNATURE = 1;
	static const int FINDTARGET = 2;
	static const int FINDANDTRACKTARGET = 3;

	BountyHunterDroid() :
		Logger("BountyHunterDroid") {
	}

	Task* performAction(int action, SceneObject* droidObject, CreatureObject* player, MissionObject* mission);

private:
	FindTargetTask* findTarget(SceneObject* sceneObject, CreatureObject* player, MissionObject* mission, bool track);
};

} // namespace bountyhunterdroid
} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission::bountyhunterdroid;

#endif /* BOUNTYHUNTERDROID_H_ */
