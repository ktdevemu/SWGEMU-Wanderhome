/*
 * ComponentManager.cpp
 *
 *  Created on: 26/05/2011
 *      Author: victor
 */

#include "ComponentManager.h"

#include "server/zone/objects/player/components/PlayerContainerComponent.h"
#include "server/zone/objects/scene/components/ContainerComponent.h"
#include "server/zone/objects/tangible/components/LootContainerComponent.h"
#include "server/zone/objects/scene/components/ZoneComponent.h"
#include "server/zone/objects/scene/components/ObjectMenuComponent.h"
#include "server/zone/objects/player/components/PlayerZoneComponent.h"
#include "server/zone/objects/building/components/ShuttleZoneComponent.h"
#include "server/zone/objects/player/components/PlayerObjectMenuComponent.h"
#include "server/zone/objects/tangible/components/TangibleObjectMenuComponent.h"
#include "server/zone/objects/tangible/components/LootSchematicMenuComponent.h"
#include "server/zone/objects/tangible/components/BountyHunterDroidMenuComponent.h"
#include "server/zone/objects/tangible/components/CampKitMenuComponent.h"
#include "server/zone/objects/tangible/components/CampTerminalMenuComponent.h"
#include "server/zone/objects/tangible/components/InsuranceTerminalMenuComponent.h"
#include "server/zone/objects/tangible/components/BankTerminalMenuComponent.h"
#include "server/zone/objects/tangible/components/CloningTerminalMenuComponent.h"
#include "server/zone/objects/tangible/components/HologrindHolocronMenuComponent.h"
#include "server/zone/objects/tangible/components/DoorControlTerminalMenuComponent.h"
#include "server/zone/objects/tangible/components/ArtCrateMenuComponent.h"
#include "server/zone/ZoneContainerComponent.h"

ComponentManager::ComponentManager() {
	components.put("ContainerComponent", new ContainerComponent());
	components.put("PlayerContainerComponent", new PlayerContainerComponent());
	components.put("LootContainerComponent", new LootContainerComponent());

	components.put("ZoneComponent", new ZoneComponent());
	components.put("PlayerZoneComponent", new PlayerZoneComponent());
	components.put("ShuttleZoneComponent", new ShuttleZoneComponent());

	components.put("ObjectMenuComponent", new ObjectMenuComponent());
	components.put("TangibleObjectMenuComponent", new TangibleObjectMenuComponent());
	components.put("PlayerObjectMenuComponent", new PlayerObjectMenuComponent());

	components.put("LootSchematicMenuComponent", new LootSchematicMenuComponent());

	components.put("BountyHunterDroidMenuComponent", new BountyHunterDroidMenuComponent());

	components.put("CampKitMenuComponent", new CampKitMenuComponent());
	components.put("CampTerminalMenuComponent", new CampTerminalMenuComponent());

	components.put("InsuranceTerminalMenuComponent", new InsuranceTerminalMenuComponent());
	components.put("BankTerminalMenuComponent", new BankTerminalMenuComponent());
	components.put("CloningTerminalMenuComponent", new CloningTerminalMenuComponent());

	components.put("DoorControlTerminalMenuComponent", new DoorControlTerminalMenuComponent());
	components.put("ArtCrateMenuComponent", new ArtCrateMenuComponent());

	components.put("ZoneContainerComponent", new ZoneContainerComponent());

	components.put("HologrindHolocronMenuComponent", new HologrindHolocronMenuComponent());
}
