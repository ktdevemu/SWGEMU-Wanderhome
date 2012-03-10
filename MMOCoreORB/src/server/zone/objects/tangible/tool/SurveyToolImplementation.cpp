/*
Copyright (C) 2010 <SWGEmu>

This File is part of Core3.

This program is free software; you can redistribute
it and/or modify it under the terms of the GNU Lesser
General Public License as published by the Free Software
Foundation; either version 3 of the License,
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

#include "engine/engine.h"

#include "SurveyTool.h"
#include "server/zone/Zone.h"
#include "server/zone/managers/resource/ResourceManager.h"
#include "server/zone/managers/resource/resourcespawner/SampleTask.h"
#include "server/zone/objects/creature/CreatureObject.h"
#include "server/zone/objects/player/PlayerObject.h"
#include "server/zone/objects/creature/CreatureAttribute.h"
#include "server/zone/objects/player/sui/listbox/SuiListBox.h"
#include "server/zone/objects/player/sui/messagebox/SuiMessageBox.h"
#include "server/zone/objects/player/sui/SuiWindowType.h"
#include "server/zone/packets/object/ObjectMenuResponse.h"
#include "server/zone/packets/resource/ResourceListForSurveyMessage.h"
#include "server/zone/packets/scene/PlayClientEffectLocMessage.h"
#include "server/zone/templates/tangible/tool/SurveyToolTemplate.h"
#include "server/zone/objects/waypoint/WaypointObject.h"
#include "server/zone/managers/terrain/TerrainManager.h"
#include "server/zone/managers/planet/PlanetManager.h"
#include "server/zone/objects/area/ActiveArea.h"
#include "server/zone/objects/tangible/tool/sui/SurveyToolSetRangeSuiCallback.h"

void SurveyToolImplementation::loadTemplateData(SharedObjectTemplate* templateData) {
	TangibleObjectImplementation::loadTemplateData(templateData);

	SurveyToolTemplate* surveyToolData = dynamic_cast<SurveyToolTemplate*>(templateData);

	if (surveyToolData == NULL) {
		throw Exception("invalid template for SurveyTool");
	}

	type = surveyToolData->getToolType();
	surveyType = surveyToolData->getSurveyType();
	surveyAnimation = surveyToolData->getSurveyAnimation();
	sampleAnimation = surveyToolData->getSampleAnimation();
}

void SurveyToolImplementation::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player) {
	TangibleObjectImplementation::fillObjectMenuResponse(menuResponse, player);
	menuResponse->addRadialMenuItem(135, 3, "@sui:tool_options");
	menuResponse->addRadialMenuItemToRadialID(135,133, 3, "@sui:survey_range");
}

int SurveyToolImplementation::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	PlayerObject* playerObject = player->getPlayerObject();

	if (!playerObject->hasAbility("survey")) {
		player->sendSystemMessage("@error_message:insufficient_skill");
		return 0;
	}

	if (selectedID == 20) { // use object

		playerObject->setSurveyTool(_this);

		if (getRange(player) > 0)
			sendResourceListTo(player);
		else
			sendRangeSui(player);

		return 0;
	}

	if (selectedID == 133) { // Set Tool Range

		playerObject->setSurveyTool(_this);

		sendRangeSui(player);

		return 0;
	}

	return 1;
}

int SurveyToolImplementation::getRange(CreatureObject* player) {

	int surveyMod = player->getSkillMod("surveying");
	int rangeBasedOnSkill = getSkillBasedRange(surveyMod);

	if (range > rangeBasedOnSkill)
		setRange(rangeBasedOnSkill);

	return range;
}

int SurveyToolImplementation::getSkillBasedRange(int skillLevel) {

	if(skillLevel >= 125)
		return 1024;
	else if(skillLevel >= 115)
		return 512;
	else if(skillLevel >= 110)
		return 448;
	else if(skillLevel >= 105)
		return 384;
	else if(skillLevel >= 100)
		return 320;
	else if(skillLevel >= 75)
		return 256;
	else if(skillLevel >= 55)
		return 192;
	else if(skillLevel >= 35)
		return 128;
	else if(skillLevel >= 20)
		return 64;

	return 0;
}

void SurveyToolImplementation::sendRangeSui(CreatureObject* player) {
	int surveyMod = player->getSkillMod("surveying");

	ManagedReference<SuiListBox*> suiToolRangeBox = new SuiListBox(player, SuiWindowType::SURVEY_TOOL_RANGE, 0);
	suiToolRangeBox->setCallback(new SurveyToolSetRangeSuiCallback(server->getZoneServer()));

	suiToolRangeBox->setPromptTitle("@base_player:swg");
	suiToolRangeBox->setPromptText("@survey:select_range");

	if (surveyMod >= 20)
		suiToolRangeBox->addMenuItem("64m x 3pts", 0);

	if (surveyMod >= 35)
		suiToolRangeBox->addMenuItem("128m x 4pts", 1);

	if (surveyMod >= 55)
		suiToolRangeBox->addMenuItem("192m x 4pts", 2);

	if (surveyMod >= 75)
		suiToolRangeBox->addMenuItem("256m x 5pts", 3);

	if (surveyMod >= 100)
		suiToolRangeBox->addMenuItem("320m x 5pts", 4);


	/// The options below are not true to pre-cu
	if (surveyMod >= 105)
		suiToolRangeBox->addMenuItem("384m x 5pts", 5);

	if (surveyMod >= 110)
		suiToolRangeBox->addMenuItem("448m x 5pts", 6);

	if (surveyMod >= 115)
		suiToolRangeBox->addMenuItem("512m x 5pts", 7);

	if (surveyMod >= 125)
		suiToolRangeBox->addMenuItem("1024m x 1024m", 8);


	player->getPlayerObject()->addSuiBox(suiToolRangeBox);
	player->sendMessage(suiToolRangeBox->generateMessage());
}

void SurveyToolImplementation::surveyCnodeMinigameSui(CreatureObject* player) {
	int surveyMod = player->getSkillMod("surveying");

	ManagedReference<SuiListBox*> suiConcMinigameBox = new SuiListBox(
			player, SuiWindowType::SURVEY_TOOL_CONCENTRATED_MINIGAME, 0);

	suiConcMinigameBox->setPromptTitle("@survey:cnode_t");
	suiConcMinigameBox->setPromptText("@survey:cnode_d");

	suiConcMinigameBox->addMenuItem("@survey:cnode_1", 0);
	suiConcMinigameBox->addMenuItem("@survey:cnode_2", 1);

	suiConcMinigameBox->setCancelButton(true, "Cancel");

	player->getPlayerObject()->addSuiBox(suiConcMinigameBox);
	player->sendMessage(suiConcMinigameBox->generateMessage());
}

void SurveyToolImplementation::surveyGnodeMinigameSui(CreatureObject* player) {
	int surveyMod = player->getSkillMod("surveying");

	ManagedReference<SuiListBox*> suiConcMinigameBox = new SuiListBox(
			player, SuiWindowType::SURVEY_TOOL_CONCENTRATED_MINIGAME2, 0);

	suiConcMinigameBox->setPromptTitle("@survey:gnode_t");
	suiConcMinigameBox->setPromptText("@survey:gnode_d");

	suiConcMinigameBox->addMenuItem("@survey:gnode_1", 0);
	suiConcMinigameBox->addMenuItem("@survey:gnode_2", 1);

	suiConcMinigameBox->setCancelButton(true, "Cancel");

	player->getPlayerObject()->addSuiBox(suiConcMinigameBox);
	player->sendMessage(suiConcMinigameBox->generateMessage());
}

void SurveyToolImplementation::setRange(int r) {
	range = r;  /// Distance the tool checks during survey
	points = 3; /// Number of grid points in survey SUI 3x3 to 5x5

	if (range >= 128) {
		points = 4;
	}

	if (range >= 255) {
		points = 5;
	}

	if (range >= 320) {
		points = 5;
	}

	if (range >= 384) {
		points = 6;
	}
}

void SurveyToolImplementation::sendResourceListTo(CreatureObject* player) {

	ManagedReference<ResourceManager* > resourceManager =
			player->getZoneServer()->getResourceManager();

	if (resourceManager == NULL) {
		info("ResourceManager is NULL in SurveyToolImplementation::sendResourceListTo");
		return;
	}

	resourceManager->sendResourceListForSurvey(player, type, surveyType);
}

void SurveyToolImplementation::sendSurveyTo(CreatureObject* player, const String& resname) {

	ManagedReference<ResourceManager* > resourceManager =
			player->getZoneServer()->getResourceManager();

	if (resourceManager == NULL) {
		info("ResourceManager is NULL in SurveyToolImplementation::sendSurveyTo");
		return;
	}

	if (player->getParent() != NULL && player->getParent()->isCellObject()) {
		player->sendSystemMessage("@error_message:survey_in_structure"); //You cannot perform survey-related actions inside a structure.
		return;
	}

	if (player->isSwimming()) {
		player->sendSystemMessage("@error_message:survey_swimming");
		return;
	}

	if (player->isMounted()) {
		if(player->isInWater()) {
			player->sendSystemMessage("@error_message:survey_cant");
			return;
		}
	} else {
		if(player->getPosture() != CreaturePosture::UPRIGHT) {
			player->sendSystemMessage("@error_message:survey_standing");
			return;
		}
	}

	if (player->getHAM(CreatureAttribute::MIND) < 100) {
		player->setPosture(CreaturePosture::UPRIGHT, true);
		player->sendSystemMessage("@error_message:survey_mind"); //You are exhausted. You nee to clear your head before you can survey again.
		return;
	}

	lastResourceSurveyName = resname;

	PlayClientEffectLoc* effect = new PlayClientEffectLoc(surveyAnimation,
			player->getZone()->getZoneName(),
			player->getPositionX(), player->getPositionZ(),
			player->getPositionY());

	player->broadcastMessage(effect, true);

	resourceManager->sendSurvey(player, resname);
}

void SurveyToolImplementation::sendSampleTo(CreatureObject* player, const String& resname) {
	ManagedReference<ResourceManager* > resourceManager =
			player->getZoneServer()->getResourceManager();

	if (resourceManager == NULL) {
		info("ResourceManager is NULL in SurveyToolImplementation::sendSampleTo");
		return;
	}

	if (player->getParent() != NULL && player->getParent()->isCellObject()) {
		player->sendSystemMessage("@error_message:survey_in_structure"); //You cannot perform survey-related actions inside a structure.
		return;
	}

	if (player->isSwimming()) {
		player->sendSystemMessage("@error_message:survey_swimming");
		return;
	}

	if (player->isMounted()) {
		player->sendSystemMessage("@error_message:survey_on_mount");
		return;
	}

	if (player->getHAM(CreatureAttribute::ACTION) < 200) {
		player->setPosture(CreaturePosture::UPRIGHT, true);
		player->sendSystemMessage("@error_message:survey_mind"); //You are exhausted. You nee to clear your head before you can survey again.
		return;
	}

	if(!resname.isEmpty() && !canSampleRadioactive()) {
		ManagedReference<ResourceSpawn* > resourceSpawn = resourceManager->getResourceSpawn(resname);
		if (resourceSpawn == NULL) {
			return;
		}

		if(resourceSpawn->isType("radioactive") && !canSampleRadioactive()) {
			sendRadioactiveWarning(player);
			return;
		}
	}

	// Player must be kneeling to sample
	if (!player->isKneeling()) {
		player->setPosture(CreaturePosture::CROUCHED, true);
	}

		// Send sample start message
	if(!isInUse()) {
		StringIdChatParameter message("survey","start_sampling");
		message.setTO(resname);
		player->sendSystemMessage(message);
		setInUse(true);
	}

	if (!doGamble && richSampleLocation == NULL && System::random(20) == 7) {

		if(System::random(1) == 1)
			surveyCnodeMinigameSui(player);
		else
			surveyGnodeMinigameSui(player);

	} else {

		if (!resname.isEmpty())
			lastResourceSampleName = resname;

		if (!lastResourceSampleName.isEmpty())
			resourceManager->sendSample(player, lastResourceSampleName,
					sampleAnimation);
	}
}

void SurveyToolImplementation::sendRadioactiveWarning(CreatureObject* player) {

	ManagedReference<SuiMessageBox* > messageBox = new SuiMessageBox(player, SuiWindowType::SAMPLE_RADIOACTIVE_CONFIRM);
	messageBox->setPromptTitle("Confirm Radioactive Sample");
	messageBox->setPromptText("Sampling a radioactive material will result in harmful effects. Are you sure you wish to continue?");
	messageBox->setCancelButton(true, "");

	player->getPlayerObject()->addSuiBox(messageBox);
	player->sendMessage(messageBox->generateMessage());

}

void SurveyToolImplementation::consentRadioactiveSample(CreatureObject* player) {
	radioactiveOk = true;

	StringBuffer buffer;
	buffer << "You have chosen to override safety measures and may now sample ";

	if(lastResourceSurveyName != "")
		buffer << lastResourceSurveyName;
	else
		buffer << "the chosen radioactive";

	player->sendSystemMessage(buffer.toString());
}

void SurveyToolImplementation::surveyCnodeMinigame(CreatureObject* player, int value) {

	if(value == 0) {

		// Add sampletask
		Reference<SampleTask*> sampleTask = new SampleTask(player, _this.get());
		player->addPendingTask("sample", sampleTask, 18000);

		return;
	}

	richSampleLocation = new Coordinate(player->getPositionX(), player->getPositionZ(), player->getPositionY());
	richSampleLocation->randomizePosition(50);

	ManagedReference<WaypointObject*> newwaypoint = NULL;

	PlayerObject* ghost = player->getPlayerObject();

	// Get previous survey waypoint
	ManagedReference<WaypointObject*> waypoint = ghost->getSurveyWaypoint();

	// Create new waypoint
	if (waypoint == NULL)
		newwaypoint = cast<WaypointObject*>( player->getZoneServer()->createObject(0xc456e788, 1));
	else {
		player->getPlayerObject()->removeWaypoint(waypoint->getObjectID(), true);
		newwaypoint = waypoint.get();
	}

	// Update new waypoint
	newwaypoint->setCustomObjectName(UnicodeString("Resource Survey"), false);
	newwaypoint->setPlanetCRC(player->getZone()->getZoneCRC());
	newwaypoint->setPosition(richSampleLocation->getPositionX(), 0, richSampleLocation->getPositionY());
	newwaypoint->setColor(WaypointObject::COLOR_BLUE);
	newwaypoint->setSpecialTypeID(WaypointObject::SPECIALTYPE_RESOURCE);
	newwaypoint->setActive(true);

	ghost->addWaypoint(newwaypoint, false, true); // Should second argument be true, and waypoints with the same name thus remove their old version?
	player->sendSystemMessage("@survey:node_waypoint");

	// Player must be kneeling to sample
	if (!player->isStanding())
		player->setPosture(CreaturePosture::UPRIGHT, true);
}

void SurveyToolImplementation::surveyGnodeMinigame(CreatureObject* player, int value) {

	if(value == 1) {

		if(player->getHAM(CreatureAttribute::ACTION) < 300) {
			player->sendSystemMessage("@survey:gamble_no_action");
			return;
		}

		player->inflictDamage(player, CreatureAttribute::ACTION, 300, false, true);
		doGamble = true;
	}

	// Add sampletask
	Reference<SampleTask*> sampleTask = new SampleTask(player, _this.get());
	player->addPendingTask("sample", sampleTask, 18000);

}
