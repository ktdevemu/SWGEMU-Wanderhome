/*
Copyright (C) 2007 <SWGEmu>

This File is part of Core3.

This program is free software; you can redistribute
it and/or modify it under the terms of the GNU Lesser
General Public License as published by the Free Software
Foundation; either version 2 of the License,
or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the GNU Lesser General Public License for
more details.

You should have received a copy of the GNU Lesser General
Public License along with this program; if not, write to
the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

Linking Engine3 statically or dynamically with other modules
is making a combined work based on Engine3.
Thus, the terms and conditions of the GNU Lesser General Public License
cover the whole combination.

In addition, as a special exception, the copyright holders of Engine3
give you permission to combine Engine3 program with free software
programs or libraries that are released under the GNU LGPL and with
code included in the standard release of Core3 under the GNU LGPL
license (or modified versions of such code, with unchanged license).
You may copy and distribute such a system following the terms of the
GNU LGPL for Engine3 and the licenses of the other code concerned,
provided that you include the source code of that other code when
and as the GNU LGPL requires distribution of source code.

Note that people who make modified versions of Engine3 are not obligated
to grant this special exception for their modified versions;
it is their choice whether to do so. The GNU Lesser General Public License
gives permission to release a modified version without this exception;
this exception also makes it possible to release a modified version
which carries forward this exception.
*/

#ifndef FINDTARGETTASK_H_
#define FINDTARGETTASK_H_

#include "server/zone/objects/creature/CreatureObject.h"
#include "server/zone/objects/mission/BountyMissionObjective.h"

namespace server {
namespace zone {
namespace objects {
namespace mission {
namespace bountyhunterdroid {
namespace events {

class FindTargetTask : public Task, public Logger {
	ManagedReference<CreatureObject*> droid;
	ManagedReference<CreatureObject*> player;
	ManagedReference<BountyMissionObjective*> objective;
	int timeLeft;
	bool success;
	bool track;

	enum states { Init, DroidSent, Searching, Tracking, Completed};

	states state;

public:
	FindTargetTask(CreatureObject* droid, CreatureObject* player, BountyMissionObjective* objective, int timeLeft, bool success, bool track) :
		Logger("FindTargetTask") {
		this->droid = droid;
		this->player = player;
		this->objective = objective;
		this->timeLeft = timeLeft;
		this->success = success;
		this->track = track;
		state = Init;

		if (this->timeLeft < 20) {
			this->timeLeft = 20;
		}

		if (objective == NULL) {
			error("No objective.");
		}
	}

	void run() {
		switch(state) {
		case Init:
			droid->setPosture(CreaturePosture::SITTING, true);
			player->sendSystemMessage("@mission/mission_generic:seeker_droid_launched");
			reschedule(10 * 1000);
			timeLeft -= 10;
			state = DroidSent;
			break;
		case DroidSent:
			droid->destroyObjectFromWorld(true);
			state = Searching;
			reschedule(timeLeft * 1000);
			break;
		case Searching:
			if (success) {
				if (objective != NULL) {
					objective->updateMissionStatus(3);
				}
				StringIdChatParameter message("@mission/mission_generic:assassin_target_location");
				message.setDI(objective->getDistanceToTarget());
				message.setTO("mission/mission_generic", objective->getDirectionToTarget());
				player->sendSystemMessage(message);
				if (track) {
					reschedule(60 * 1000);
					state = Tracking;
				} else {
					state = Completed;
				}
			} else {
				int randomNumber = System::random(5) + 1;
				player->sendSystemMessage("@mission/mission_generic:target_not_found_" + String::valueOf(randomNumber));
				state = Completed;
			}
			break;
		case Tracking:
			player->sendSystemMessage("@mission/mission_generic:assassin_target_location");
			reschedule(60 * 1000);
			break;
		case Completed:
			break;
		default:
			error("Incorrect state.");
			break;
		}
	}
};

} // namespace events
} // namespace bountyhunterdroid
} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission::bountyhunterdroid::events;

#endif /* FINDTARGETTASK_H_ */
