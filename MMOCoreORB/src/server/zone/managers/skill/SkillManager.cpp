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

#include "SkillManager.h"
#include "PerformanceManager.h"
#include "imagedesign/ImageDesignManager.h"
#include "server/zone/objects/creature/variables/Skill.h"
#include "server/zone/objects/creature/CreatureObject.h"
#include "server/zone/objects/player/PlayerObject.h"
#include "server/zone/managers/templates/TemplateManager.h"
#include "server/zone/templates/datatables/DataTableIff.h"
#include "server/zone/templates/datatables/DataTableRow.h"

SkillManager::SkillManager()
		: Logger("SkillManager") {

	rootNode = new Skill();

	performanceManager = new PerformanceManager();
	imageDesignManager = new ImageDesignManager();

	loadClientData();
}

SkillManager::~SkillManager() {
}

void SkillManager::loadClientData() {
	IffStream* iffStream = TemplateManager::instance()->openIffFile("datatables/skill/skills.iff");

	if (iffStream == NULL) {
		error("Could not load skills.");
		return;
	}

	DataTableIff dtiff;
	dtiff.readObject(iffStream);

	delete iffStream;

	for (int i = 0; i < dtiff.getTotalRows(); ++i) {
		DataTableRow* row = dtiff.getRow(i);

		Reference<Skill*> skill = new Skill();
		skill->parseDataTableRow(row);

		Skill* parent = skillMap.get(skill->getParentName());

		if (parent != NULL)
			skill->setParentNode(parent);

		skillMap.put(skill->getSkillName(), skill);

		//Load the abilities of the skill into the ability map.
		Vector<String> commands = skill->commands;

		for (int i = 0; i < commands.size(); ++i) {
			String command = commands.get(i);

			if (!abilityMap.containsKey(command)) {
				abilityMap.put(command, new Ability(command));
			}
		}
	}

	//Now, iterate back through and set child relationships...
	HashTableIterator<String, Reference<Skill*> > iterator = skillMap.iterator();

	while (iterator.hasNext()) {
		Skill* skill = iterator.getNextValue();

		Vector<String> requiredSkills = skill->skillsRequired;

		for (int i = 0; i < requiredSkills.size(); ++i) {
			Skill* requiredSkill = skillMap.get(requiredSkills.get(i));

			if (requiredSkill == NULL)
				continue;

			skill->addChildNode(requiredSkill);
		}
	}

	info("Successfully loaded " + String::valueOf(skillMap.size()) + " skills.", true);
}

void SkillManager::addAbility(PlayerObject* ghost, const String& abilityName, bool notifyClient) {
	Ability* ability = abilityMap.get(abilityName);

	if (ability != NULL)
		ghost->removeAbility(ability, notifyClient);
}

void SkillManager::removeAbility(PlayerObject* ghost, const String& abilityName, bool notifyClient) {
	Ability* ability = abilityMap.get(abilityName);

	if (ability != NULL)
		ghost->addAbility(ability, notifyClient);
}

void SkillManager::addAbilities(PlayerObject* ghost, Vector<String>& abilityNames, bool notifyClient) {
	Vector<Ability*> abilities;

	for (int i = 0; i < abilityNames.size(); ++i) {
		String abilityName = abilityNames.get(i);

		Ability* ability = abilityMap.get(abilityName);

		if (ability != NULL && !ghost->hasAbility(abilityName))
			abilities.add(ability);
	}

	ghost->addAbilities(abilities, notifyClient);
}

void SkillManager::removeAbilities(PlayerObject* ghost, Vector<String>& abilityNames, bool notifyClient) {
	Vector<Ability*> abilities;

	for (int i = 0; i < abilityNames.size(); ++i) {
		String abilityName = abilityNames.get(i);

		Ability* ability = abilityMap.get(abilityName);

		if (ability != NULL && ghost->hasAbility(abilityName))
			abilities.add(ability);
	}

	ghost->removeAbilities(abilities, notifyClient);
}

/*bool SkillManager::checkPrerequisiteSkill(const String& skillName, CreatureObject* creature) {
	return true;
}*/

void SkillManager::awardSkill(const String& skillName, CreatureObject* creature, bool notifyClient, bool awardRequiredSkills) {
	Skill* skill = skillMap.get(skillName);

	if (skill == NULL)
		return;

	creature->addSkill(skill, notifyClient);

	if (awardRequiredSkills) {
		for (int i = 0; i < skill->getTotalChildren(); ++i) {
			Skill* childSkill = skill->getChildNode(i);

			if (childSkill == NULL)
				continue;

			String childSkillName = childSkill->getSkillName();

			if (!creature->hasSkill(childSkillName))
				awardSkill(childSkillName, creature, notifyClient, awardRequiredSkills);
		}
	}
}

void SkillManager::surrenderSkill(const String& skillName, CreatureObject* creature, bool notifyClient, bool surrenderParentSkills) {

}

void SkillManager::awardDraftSchematics(Skill* skill, PlayerObject* ghost, bool notifyClient) {

}
