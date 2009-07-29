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

#ifndef COMMANDCONFIGMANAGER_H_
#define COMMANDCONFIGMANAGER_H_

#include "engine/engine.h"

#include "../../objects/player/commands/QueueCommand.h"

namespace server {
namespace zone {
class ZoneProcessServerImplementation;
}
}

using namespace server::zone;

namespace server {
namespace zone {
namespace managers {
namespace command {

class CommandList;

class CommandConfigManager : public Lua {
	static ZoneProcessServerImplementation* server;
	static CommandList* slashCommands;

public:
	CommandConfigManager(ZoneProcessServerImplementation* serv);

	void registerFunctions();
	void registerGlobals();

	bool loadSlashCommandsFile(CommandList* sCommands) {
		slashCommands = sCommands;
		info("Loading commands...");
		return runFile("scripts/commands/commands.lua");
	}

	//lua functions
	static int runSlashCommandsFile(lua_State* L);

	static void parseOptions(LuaObject& slashcommand, QueueCommand* command);
	static void parseAlternativeNames(String& alternativeNames, QueueCommand* slashCommand);
	static void parseSlashCommand(LuaObject &command, QueueCommand* slashCommand);

	// AddSlashCommand functions
	static int addActivateCloneSlashCommand(lua_State* L);
	static int addActivateQuestSlashCommand(lua_State* L);
	static int addAddAllowedPlayerSlashCommand(lua_State* L);
	static int addAddBannedPlayerSlashCommand(lua_State* L);
	static int addAddFriendSlashCommand(lua_State* L);
	static int addAddIgnoreSlashCommand(lua_State* L);
	static int addAddMapLocationSlashCommand(lua_State* L);
	static int addAddPowerSlashCommand(lua_State* L);
	static int addAdjustLotCountSlashCommand(lua_State* L);
	static int addAdrenalBoostSlashCommand(lua_State* L);
	static int addAiIgnoreSlashCommand(lua_State* L);
	static int addAimSlashCommand(lua_State* L);
	static int addAimedShotSlashCommand(lua_State* L);
	static int addAnonSlashCommand(lua_State* L);
	static int addApplyPowerupSlashCommand(lua_State* L);
	static int addAreaTauntSlashCommand(lua_State* L);
	static int addAreatrackSlashCommand(lua_State* L);
	static int addArmorBreakSlashCommand(lua_State* L);
	static int addAssignDroidSlashCommand(lua_State* L);
	static int addAssociateDroidControlDeviceWithShipSlashCommand(lua_State* L);
	static int addAttackSlashCommand(lua_State* L);
	static int addAuctionAcceptSlashCommand(lua_State* L);
	static int addAuctionBidSlashCommand(lua_State* L);
	static int addAuctionCancelSlashCommand(lua_State* L);
	static int addAuctionCreateSlashCommand(lua_State* L);
	static int addAuctionQuerySlashCommand(lua_State* L);
	static int addAuctionRetrieveSlashCommand(lua_State* L);
	static int addAuctionsaySlashCommand(lua_State* L);
	static int addAvoidIncapacitationSlashCommand(lua_State* L);
	static int addBactaInfusionSlashCommand(lua_State* L);
	static int addBactaJabSlashCommand(lua_State* L);
	static int addBactaShotSlashCommand(lua_State* L);
	static int addBactaSpraySlashCommand(lua_State* L);
	static int addBactaTossSlashCommand(lua_State* L);
	static int addBandageSlashCommand(lua_State* L);
	static int addBattlefieldStatusSlashCommand(lua_State* L);
	static int addBerserkSlashCommand(lua_State* L);
	static int addBetSlashCommand(lua_State* L);
	static int addBindingStrikeSlashCommand(lua_State* L);
	static int addBleedAttackSlashCommand(lua_State* L);
	static int addBlindAttackSlashCommand(lua_State* L);
	static int addBlindRecoverySlashCommand(lua_State* L);
	static int addBoardShuttleSlashCommand(lua_State* L);
	static int addBodyHitSlashCommand(lua_State* L);
	static int addBodyShotSlashCommand(lua_State* L);
	static int addBoostmoraleSlashCommand(lua_State* L);
	static int addBroadcastSlashCommand(lua_State* L);
	static int addBroadcastAreaSlashCommand(lua_State* L);
	static int addBroadcastGalaxySlashCommand(lua_State* L);
	static int addBroadcastPlanetSlashCommand(lua_State* L);
	static int addBurstRunSlashCommand(lua_State* L);
	static int addBurstShotSlashCommand(lua_State* L);
	static int addCancelCraftingSessionSlashCommand(lua_State* L);
	static int addCenterOfBeingSlashCommand(lua_State* L);
	static int addChangeBandMusicSlashCommand(lua_State* L);
	static int addChangeDanceSlashCommand(lua_State* L);
	static int addChangeMusicSlashCommand(lua_State* L);
	static int addChannelForceSlashCommand(lua_State* L);
	static int addChargeShotSlashCommand(lua_State* L);
	static int addCheckForceStatusSlashCommand(lua_State* L);
	static int addCitybanSlashCommand(lua_State* L);
	static int addCityInfoSlashCommand(lua_State* L);
	static int addCitypardonSlashCommand(lua_State* L);
	static int addClaimVeteranRewardSlashCommand(lua_State* L);
	static int addClearCompletedQuestSlashCommand(lua_State* L);
	static int addClearQueueSlashCommand(lua_State* L);
	static int addClearVeteranRewardSlashCommand(lua_State* L);
	static int addClientQualifiedForSkillSlashCommand(lua_State* L);
	static int addCloneSlashCommand(lua_State* L);
	static int addCloseContainerSlashCommand(lua_State* L);
	static int addCloseLotteryContainerSlashCommand(lua_State* L);
	static int addCobSlashCommand(lua_State* L);
	static int addColorlightsSlashCommand(lua_State* L);
	static int addCombatSlashCommand(lua_State* L);
	static int addCombatEscapeSlashCommand(lua_State* L);
	static int addCombatModeCheckSlashCommand(lua_State* L);
	static int addCombatSpamSlashCommand(lua_State* L);
	static int addCombatTargetSlashCommand(lua_State* L);
	static int addComboAttackSlashCommand(lua_State* L);
	static int addCompleteQuestSlashCommand(lua_State* L);
	static int addConcealSlashCommand(lua_State* L);
	static int addConcealShotSlashCommand(lua_State* L);
	static int addConcussionShotSlashCommand(lua_State* L);
	static int addConfusionShotSlashCommand(lua_State* L);
	static int addConsentSlashCommand(lua_State* L);
	static int addCorpseSlashCommand(lua_State* L);
	static int addCounterAttackSlashCommand(lua_State* L);
	static int addCountertoxinSlashCommand(lua_State* L);
	static int addCountertoxinSpraySlashCommand(lua_State* L);
	static int addCoupDeGraceSlashCommand(lua_State* L);
	static int addCoverSlashCommand(lua_State* L);
	static int addCoverchargeSlashCommand(lua_State* L);
	static int addCraftSlashCommand(lua_State* L);
	static int addCreateCreatureSlashCommand(lua_State* L);
	static int addCreateManfSchematicSlashCommand(lua_State* L);
	static int addCreateMissionElementSlashCommand(lua_State* L);
	static int addCreateNPCSlashCommand(lua_State* L);
	static int addCreatePrototypeSlashCommand(lua_State* L);
	static int addCreateSpawningElementSlashCommand(lua_State* L);
	static int addCreateSpawningElementWithDifficultySlashCommand(lua_State* L);
	static int addCreatureAreaAttackSlashCommand(lua_State* L);
	static int addCreatureAreaBleedingSlashCommand(lua_State* L);
	static int addCreatureAreaComboSlashCommand(lua_State* L);
	static int addCreatureAreaDiseaseSlashCommand(lua_State* L);
	static int addCreatureAreaKnockdownSlashCommand(lua_State* L);
	static int addCreatureAreaPoisonSlashCommand(lua_State* L);
	static int addCreatureBlindAttackSlashCommand(lua_State* L);
	static int addCreatureDizzyAttackSlashCommand(lua_State* L);
	static int addCreatureIntimidationAttackSlashCommand(lua_State* L);
	static int addCreatureKnockdownAttackSlashCommand(lua_State* L);
	static int addCreatureMeleeAttackSlashCommand(lua_State* L);
	static int addCreaturePostureDownAttackSlashCommand(lua_State* L);
	static int addCreaturePostureUpAttackSlashCommand(lua_State* L);
	static int addCreatureRangedAttackSlashCommand(lua_State* L);
	static int addCreatureStunAttackSlashCommand(lua_State* L);
	static int addCreditsSlashCommand(lua_State* L);
	static int addCrippleAttackSlashCommand(lua_State* L);
	static int addCripplingShotSlashCommand(lua_State* L);
	static int addCriticalShotSlashCommand(lua_State* L);
	static int addCriticalStrikeSlashCommand(lua_State* L);
	static int addCsAppendCommentSlashCommand(lua_State* L);
	static int addCsCancelTicketSlashCommand(lua_State* L);
	static int addCsConnectPlayerSlashCommand(lua_State* L);
	static int addCsCreateTicketSlashCommand(lua_State* L);
	static int addCsDisconnectPlayerSlashCommand(lua_State* L);
	static int addCsGetArticleSlashCommand(lua_State* L);
	static int addCsGetCommentsSlashCommand(lua_State* L);
	static int addCsGetTicketsSlashCommand(lua_State* L);
	static int addCsRequestCategoriesSlashCommand(lua_State* L);
	static int addCsSearchKnowledgeBaseSlashCommand(lua_State* L);
	static int addCuiConsentResponseSlashCommand(lua_State* L);
	static int addCustomizeDroidSlashCommand(lua_State* L);
	static int addCustomizeVehicleSlashCommand(lua_State* L);
	static int addCyborgBurstRunSlashCommand(lua_State* L);
	static int addCyborgCriticalSnipeSlashCommand(lua_State* L);
	static int addCyborgKickDownSlashCommand(lua_State* L);
	static int addCyborgLightningSlashCommand(lua_State* L);
	static int addCyborgReviveSlashCommand(lua_State* L);
	static int addCyborgStrengthBuffSlashCommand(lua_State* L);
	static int addCyborgSureShotSlashCommand(lua_State* L);
	static int addDatabaseSlashCommand(lua_State* L);
	static int addDazzleSlashCommand(lua_State* L);
	static int addDeactivateQuestSlashCommand(lua_State* L);
	static int addDeathBlowSlashCommand(lua_State* L);
	static int addDeathCountSlashCommand(lua_State* L);
	static int addDeclareOvertSlashCommand(lua_State* L);
	static int addDeclareresidenceSlashCommand(lua_State* L);
	static int addDeclineSlashCommand(lua_State* L);
	static int addDecontaminateSlashCommand(lua_State* L);
	static int addDefaultActionSlashCommand(lua_State* L);
	static int addDefaultAttackSlashCommand(lua_State* L);
	static int addDefuseMinefieldSlashCommand(lua_State* L);
	static int addDelegateFactionPointsSlashCommand(lua_State* L);
	static int addDenyServiceSlashCommand(lua_State* L);
	static int addDeployTrapSlashCommand(lua_State* L);
	static int addDestroySlashCommand(lua_State* L);
	static int addDestroystructureSlashCommand(lua_State* L);
	static int addDetonateDroidSlashCommand(lua_State* L);
	static int addDeuteriumTossSlashCommand(lua_State* L);
	static int addDiagnoseSlashCommand(lua_State* L);
	static int addDisarmingShotSlashCommand(lua_State* L);
	static int addDisbandSlashCommand(lua_State* L);
	static int addDiseaseInnoculationSlashCommand(lua_State* L);
	static int addDisinfectSlashCommand(lua_State* L);
	static int addDismissGroupMemberSlashCommand(lua_State* L);
	static int addDismountSlashCommand(lua_State* L);
	static int addDismountandstoreSlashCommand(lua_State* L);
	static int addDistractSlashCommand(lua_State* L);
	static int addDiveShotSlashCommand(lua_State* L);
	static int addDizzyAttackSlashCommand(lua_State* L);
	static int addDizzyRecoverySlashCommand(lua_State* L);
	static int addDominateMindSlashCommand(lua_State* L);
	static int addDragPlayerSlashCommand(lua_State* L);
	static int addDrainForceSlashCommand(lua_State* L);
	static int addDuelSlashCommand(lua_State* L);
	static int addDuelistStanceSlashCommand(lua_State* L);
	static int addDumpTargetInformationSlashCommand(lua_State* L);
	static int addDumpZoneInformationSlashCommand(lua_State* L);
	static int addEatSlashCommand(lua_State* L);
	static int addEditAppearanceSlashCommand(lua_State* L);
	static int addEditBankSlashCommand(lua_State* L);
	static int addEditBankAccountSlashCommand(lua_State* L);
	static int addEditStatsSlashCommand(lua_State* L);
	static int addElectrolyteDrainSlashCommand(lua_State* L);
	static int addEmboldenpetsSlashCommand(lua_State* L);
	static int addEmptyMailTargetSlashCommand(lua_State* L);
	static int addEndDuelSlashCommand(lua_State* L);
	static int addEndorphineInjectionSlashCommand(lua_State* L);
	static int addEnragepetsSlashCommand(lua_State* L);
	static int addEquilibriumSlashCommand(lua_State* L);
	static int addExecuteKnowledgeBaseMessageSlashCommand(lua_State* L);
	static int addExtinguishFireSlashCommand(lua_State* L);
	static int addExtractObjectSlashCommand(lua_State* L);
	static int addEyeShotSlashCommand(lua_State* L);
	static int addFactoryCrateSplitSlashCommand(lua_State* L);
	static int addFanShotSlashCommand(lua_State* L);
	static int addFeignDeathSlashCommand(lua_State* L);
	static int addFindSlashCommand(lua_State* L);
	static int addFindFriendSlashCommand(lua_State* L);
	static int addFindMyTrainerSlashCommand(lua_State* L);
	static int addFindObjectSlashCommand(lua_State* L);
	static int addFindPlayerSlashCommand(lua_State* L);
	static int addFirearmStrikeSlashCommand(lua_State* L);
	static int addFirejetSlashCommand(lua_State* L);
	static int addFishSlashCommand(lua_State* L);
	static int addFlashSpeederSlashCommand(lua_State* L);
	static int addFlourishSlashCommand(lua_State* L);
	static int addForageSlashCommand(lua_State* L);
	static int addForceAbsorbSlashCommand(lua_State* L);
	static int addForceArmorSlashCommand(lua_State* L);
	static int addForceAuraSlashCommand(lua_State* L);
	static int addForceBreachSlashCommand(lua_State* L);
	static int addForceChokeSlashCommand(lua_State* L);
	static int addForceCloakSlashCommand(lua_State* L);
	static int addForceCommandSlashCommand(lua_State* L);
	static int addForceCureDiseaseSlashCommand(lua_State* L);
	static int addForceCurePoisonSlashCommand(lua_State* L);
	static int addForceExtinguishSlashCommand(lua_State* L);
	static int addForceFeedbackSlashCommand(lua_State* L);
	static int addForceHealSlashCommand(lua_State* L);
	static int addForceHitSlashCommand(lua_State* L);
	static int addForceInfusionSlashCommand(lua_State* L);
	static int addForceIntimidateSlashCommand(lua_State* L);
	static int addForceKnockdownSlashCommand(lua_State* L);
	static int addForceLightningSlashCommand(lua_State* L);
	static int addForceLightningAreaSlashCommand(lua_State* L);
	static int addForceMeditateSlashCommand(lua_State* L);
	static int addForceOfWillSlashCommand(lua_State* L);
	static int addForceResistBleedingSlashCommand(lua_State* L);
	static int addForceResistDiseaseSlashCommand(lua_State* L);
	static int addForceResistPoisonSlashCommand(lua_State* L);
	static int addForceResistStatesSlashCommand(lua_State* L);
	static int addForceRunSlashCommand(lua_State* L);
	static int addForceSapSlashCommand(lua_State* L);
	static int addForceShieldSlashCommand(lua_State* L);
	static int addForceShockSlashCommand(lua_State* L);
	static int addForceSpeedSlashCommand(lua_State* L);
	static int addForceStrikeSlashCommand(lua_State* L);
	static int addForceSuppressionSlashCommand(lua_State* L);
	static int addForceThrowSlashCommand(lua_State* L);
	static int addForceValorSlashCommand(lua_State* L);
	static int addForceWaveSlashCommand(lua_State* L);
	static int addForceWeakenSlashCommand(lua_State* L);
	static int addForceWoundHealSlashCommand(lua_State* L);
	static int addFormupSlashCommand(lua_State* L);
	static int addFreezePlayerSlashCommand(lua_State* L);
	static int addFullAutoAreaSlashCommand(lua_State* L);
	//static int addGSlashCommand(lua_State* L);
	static int addGallopSlashCommand(lua_State* L);
	static int addGallopStopSlashCommand(lua_State* L);
	//static int addGcSlashCommand(lua_State* L);
	static int addGcwStatusSlashCommand(lua_State* L);
	static int addGenerateCraftedItemSlashCommand(lua_State* L);
	static int addGetAccountInfoSlashCommand(lua_State* L);
	static int addGetAttributesSlashCommand(lua_State* L);
	static int addGetAttributesBatchSlashCommand(lua_State* L);
	static int addGetFriendListSlashCommand(lua_State* L);
	static int addGetGameTimeSlashCommand(lua_State* L);
	static int addGetIgnoreListSlashCommand(lua_State* L);
	static int addGetMapLocationsSlashCommand(lua_State* L);
	static int addGetObjVarsSlashCommand(lua_State* L);
	static int addGetPlayerIdSlashCommand(lua_State* L);
	static int addGetPrototypeSlashCommand(lua_State* L);
	static int addGetRankSlashCommand(lua_State* L);
	static int addGetSpawnDelaysSlashCommand(lua_State* L);
	static int addGetStationNameSlashCommand(lua_State* L);
	static int addGetVeteranRewardTimeSlashCommand(lua_State* L);
	static int addGetVeteranRewardTimeCsSlashCommand(lua_State* L);
	static int addGiveItemSlashCommand(lua_State* L);
	static int addGiveMaintenanceToVendorSlashCommand(lua_State* L);
	static int addGivevendormaintSlashCommand(lua_State* L);
	static int addGmCreateClassResourceSlashCommand(lua_State* L);
	static int addGmCreateSpecificResourceSlashCommand(lua_State* L);
	static int addGmForceCommandSlashCommand(lua_State* L);
	static int addGmForceRankSlashCommand(lua_State* L);
	static int addGmFsVillageSlashCommand(lua_State* L);
	static int addGmJediStateSlashCommand(lua_State* L);
	static int addGmReviveSlashCommand(lua_State* L);
	static int addGmWeaponSlashCommand(lua_State* L);
	static int addGotoSlashCommand(lua_State* L);
	static int addGrantBadgeSlashCommand(lua_State* L);
	static int addGrantPadawanTrialsEligibilitySlashCommand(lua_State* L);
	static int addGrantSkillSlashCommand(lua_State* L);
	static int addGrantTitleSlashCommand(lua_State* L);
	static int addGrantZoningRightsSlashCommand(lua_State* L);
	static int addGroupChatSlashCommand(lua_State* L);
	static int addGroupLootSlashCommand(lua_State* L);
	//static int addGroupSaySlashCommand(lua_State* L);
	//static int addGsaySlashCommand(lua_State* L);
	//static int addGtellSlashCommand(lua_State* L);
	//static int addGuildSlashCommand(lua_State* L);
	static int addGuildRemoveSlashCommand(lua_State* L);
	static int addGuildsaySlashCommand(lua_State* L);
	static int addGuildstatusSlashCommand(lua_State* L);
	static int addHandleClientLoginSlashCommand(lua_State* L);
	static int addHarmfulSlashCommand(lua_State* L);
	static int addHarmlessSlashCommand(lua_State* L);
	static int addHarvestCorpseSlashCommand(lua_State* L);
	static int addHarvesterActivateSlashCommand(lua_State* L);
	static int addHarvesterDeactivateSlashCommand(lua_State* L);
	static int addHarvesterDiscardHopperSlashCommand(lua_State* L);
	static int addHarvesterGetResourceDataSlashCommand(lua_State* L);
	static int addHarvesterHarvestSlashCommand(lua_State* L);
	static int addHarvesterMakeCrateSlashCommand(lua_State* L);
	static int addHarvesterSelectResourceSlashCommand(lua_State* L);
	static int addHarvesterTakeSurveySlashCommand(lua_State* L);
	static int addHasVeteranRewardSlashCommand(lua_State* L);
	static int addHaveconsentSlashCommand(lua_State* L);
	static int addHeadHitSlashCommand(lua_State* L);
	static int addHeadShotSlashCommand(lua_State* L);
	static int addHealDroidDamageSlashCommand(lua_State* L);
	static int addHealDroidWoundSlashCommand(lua_State* L);
	static int addHealPetSlashCommand(lua_State* L);
	static int addHealStatesSlashCommand(lua_State* L);
	static int addHealWoundSlashCommand(lua_State* L);
	static int addHemorrhageSlashCommand(lua_State* L);
	static int addHoloEmoteSlashCommand(lua_State* L);
	static int addImagedesignSlashCommand(lua_State* L);
	static int addImpaleSlashCommand(lua_State* L);
	static int addInfectSlashCommand(lua_State* L);
	static int addInitializeComponentSlashCommand(lua_State* L);
	static int addInnateSlashCommand(lua_State* L);
	static int addInsertItemIntoShipComponentSlotSlashCommand(lua_State* L);
	static int addInstallMissionTerminalSlashCommand(lua_State* L);
	static int addInstallShipComponentSlashCommand(lua_State* L);
	static int addInsureSlashCommand(lua_State* L);
	static int addIntimidateSlashCommand(lua_State* L);
	static int addIntimidateShotSlashCommand(lua_State* L);
	static int addInviteSlashCommand(lua_State* L);
	static int addInvulnerableSlashCommand(lua_State* L);
	static int addItemmovebackSlashCommand(lua_State* L);
	static int addItemmovedownSlashCommand(lua_State* L);
	static int addItemmoveforwardSlashCommand(lua_State* L);
	static int addItemmoveupSlashCommand(lua_State* L);
	static int addItemrotateleftSlashCommand(lua_State* L);
	static int addItemrotaterightSlashCommand(lua_State* L);
	static int addJoinSlashCommand(lua_State* L);
	static int addJoinGameSlashCommand(lua_State* L);
	static int addKickSlashCommand(lua_State* L);
	static int addKillSlashCommand(lua_State* L);
	static int addKillPlayerSlashCommand(lua_State* L);
	static int addKipUpShotSlashCommand(lua_State* L);
	static int addKneecapShotSlashCommand(lua_State* L);
	static int addKneelSlashCommand(lua_State* L);
	static int addKnockdownRecoverySlashCommand(lua_State* L);
	static int addLagSlashCommand(lua_State* L);
	static int addLastDitchSlashCommand(lua_State* L);
	static int addLaunchFireworkSlashCommand(lua_State* L);
	static int addLeaveGameSlashCommand(lua_State* L);
	static int addLeaveGroupSlashCommand(lua_State* L);
	static int addLegHitSlashCommand(lua_State* L);
	static int addLegShotSlashCommand(lua_State* L);
	static int addLegSweepSlashCommand(lua_State* L);
	static int addLethalShotSlashCommand(lua_State* L);
	static int addLfgSlashCommand(lua_State* L);
	static int addListActiveQuestsSlashCommand(lua_State* L);
	static int addListCompletedQuestsSlashCommand(lua_State* L);
	static int addListenSlashCommand(lua_State* L);
	static int addListGuildsSlashCommand(lua_State* L);
	static int addLogoutServerSlashCommand(lua_State* L);
	static int addLootAllSlashCommand(lua_State* L);
	static int addLootSlashCommand(lua_State* L);
	static int addLootPlayerCorpseSlashCommand(lua_State* L);
	static int addLowBlowSlashCommand(lua_State* L);
	static int addLungeSlashCommand(lua_State* L);
	static int addMakeLeaderSlashCommand(lua_State* L);
	static int addMakeMasterLooterSlashCommand(lua_State* L);
	static int addMakeSurveySlashCommand(lua_State* L);
	static int addManufactureSlashCommand(lua_State* L);
	static int addMaskscentSlashCommand(lua_State* L);
	static int addMaxCombatAbilitySlashCommand(lua_State* L);
	static int addMaxStatsSlashCommand(lua_State* L);
	static int addMedicalForageSlashCommand(lua_State* L);
	static int addMeditateSlashCommand(lua_State* L);
	static int addMeleeAssaultSlashCommand(lua_State* L);
	static int addMeleeHitSlashCommand(lua_State* L);
	static int addMeleeStrikeSlashCommand(lua_State* L);
	static int addMindBlastSlashCommand(lua_State* L);
	static int addMoneySlashCommand(lua_State* L);
	static int addMountSlashCommand(lua_State* L);
	static int addMoveFurnitureSlashCommand(lua_State* L);
	static int addNameStructureSlashCommand(lua_State* L);
	static int addNeurotoxinSlashCommand(lua_State* L);
	static int addNewbiehelperSlashCommand(lua_State* L);
	static int addNewbieRequestStartingLocationsSlashCommand(lua_State* L);
	static int addNewbieSelectStartingLocationSlashCommand(lua_State* L);
	static int addNextCraftingStageSlashCommand(lua_State* L);
	static int addNpcSlashCommand(lua_State* L);
	static int addNpcConversationSelectSlashCommand(lua_State* L);
	static int addNpcConversationStartSlashCommand(lua_State* L);
	static int addNpcConversationStopSlashCommand(lua_State* L);
	static int addNutrientInjectionSlashCommand(lua_State* L);
	static int addObjectSlashCommand(lua_State* L);
	static int addObjvarSlashCommand(lua_State* L);
	static int addOpenContainerSlashCommand(lua_State* L);
	static int addOpenLotteryContainerSlashCommand(lua_State* L);
	static int addOverchargeShotSlashCommand(lua_State* L);
	static int addOverrideActiveMonthsSlashCommand(lua_State* L);
	static int addOverridePadawanTrialsEligibilitySlashCommand(lua_State* L);
	static int addOverwhelmingShotSlashCommand(lua_State* L);
	static int addPanicShotSlashCommand(lua_State* L);
	static int addParalyzeSlashCommand(lua_State* L);
	static int addParryRiposteSlashCommand(lua_State* L);
	static int addPauseDanceSlashCommand(lua_State* L);
	static int addPauseMusicSlashCommand(lua_State* L);
	static int addPaWithdrawSlashCommand(lua_State* L);
	static int addPaymaintenanceSlashCommand(lua_State* L);
	static int addPeaceSlashCommand(lua_State* L);
	static int addPermissionListModifySlashCommand(lua_State* L);
	static int addPistolWhipSlashCommand(lua_State* L);
	static int addPlaceBattlefieldStructureSlashCommand(lua_State* L);
	static int addPlacedShotSlashCommand(lua_State* L);
	static int addPlaceStructureSlashCommand(lua_State* L);
	static int addPlaceStructureModeSlashCommand(lua_State* L);
	static int addPlanetsaySlashCommand(lua_State* L);
	static int addPlanetwarpSlashCommand(lua_State* L);
	static int addPlanetwarpTargetSlashCommand(lua_State* L);
	static int addPointBlankAreaSlashCommand(lua_State* L);
	static int addPointBlankShotSlashCommand(lua_State* L);
	static int addPoisonInnoculationSlashCommand(lua_State* L);
	static int addPowerAttackSlashCommand(lua_State* L);
	static int addPowerBoostSlashCommand(lua_State* L);
	static int addProneSlashCommand(lua_State* L);
	static int addPurchaseReinforcementSlashCommand(lua_State* L);
	static int addPurchaseTicketSlashCommand(lua_State* L);
	static int addQuickDrawSlashCommand(lua_State* L);
	static int addRallySlashCommand(lua_State* L);
	static int addRangedShotSlashCommand(lua_State* L);
	static int addRapidFireSlashCommand(lua_State* L);
	static int addRecklessShotSlashCommand(lua_State* L);
	static int addReconnectToTransferServerSlashCommand(lua_State* L);
	static int addRecruitSkillTrainerSlashCommand(lua_State* L);
	static int addRegainConsciousnessSlashCommand(lua_State* L);
	static int addRegenerationSlashCommand(lua_State* L);
	static int addRegisterWithLocationSlashCommand(lua_State* L);
	static int addReloadSlashCommand(lua_State* L);
	static int addRemoteSlashCommand(lua_State* L);
	static int addRemoveAllowedPlayerSlashCommand(lua_State* L);
	static int addRemoveBannedPlayerSlashCommand(lua_State* L);
	static int addRemoveFriendSlashCommand(lua_State* L);
	static int addRemoveIgnoreSlashCommand(lua_State* L);
	static int addRepairBattlefieldStructureSlashCommand(lua_State* L);
	static int addRepairShipComponentInSlotSlashCommand(lua_State* L);
	static int addReportSlashCommand(lua_State* L);
	static int addRequestBadgesSlashCommand(lua_State* L);
	static int addRequestBiographySlashCommand(lua_State* L);
	static int addRequestCharacterMatchSlashCommand(lua_State* L);
	static int addRequestCharacterSheetInfoSlashCommand(lua_State* L);
	static int addRequestCoreSampleSlashCommand(lua_State* L);
	static int addRequestCraftingSessionSlashCommand(lua_State* L);
	static int addRequestDraftSlotsSlashCommand(lua_State* L);
	static int addRequestDraftSlotsBatchSlashCommand(lua_State* L);
	static int addRequestManfSchematicSlotsSlashCommand(lua_State* L);
	static int addRequestResourceWeightsSlashCommand(lua_State* L);
	static int addRequestResourceWeightsBatchSlashCommand(lua_State* L);
	static int addRequestSetStatMigrationDataSlashCommand(lua_State* L);
	static int addRequestStatMigrationDataSlashCommand(lua_State* L);
	static int addRequestStatMigrationStartSlashCommand(lua_State* L);
	static int addRequestStatMigrationStopSlashCommand(lua_State* L);
	static int addRequestStimpackSlashCommand(lua_State* L);
	static int addRequestSurveySlashCommand(lua_State* L);
	static int addRequestWaypointAtPositionSlashCommand(lua_State* L);
	static int addRescueSlashCommand(lua_State* L);
	static int addResendLoginMessageToAllSlashCommand(lua_State* L);
	static int addResetJediSlashCommand(lua_State* L);
	static int addResourceSlashCommand(lua_State* L);
	static int addResourceContainerSplitSlashCommand(lua_State* L);
	static int addResourceContainerTransferSlashCommand(lua_State* L);
	static int addResourceSetNameSlashCommand(lua_State* L);
	static int addRespecStatCommitSlashCommand(lua_State* L);
	static int addResSampleLoopSlashCommand(lua_State* L);
	static int addRestartConversionSlashCommand(lua_State* L);
	static int addRestartCraftingSessionSlashCommand(lua_State* L);
	static int addRestrainingShotSlashCommand(lua_State* L);
	static int addResuscitatePlayerSlashCommand(lua_State* L);
	static int addRetreatSlashCommand(lua_State* L);
	static int addRevivePlayerSlashCommand(lua_State* L);
	static int addRevokeBadgeSlashCommand(lua_State* L);
	static int addRevokeSkillSlashCommand(lua_State* L);
	static int addRolePlaySlashCommand(lua_State* L);
	static int addRollShotSlashCommand(lua_State* L);
	static int addRotateFurnitureSlashCommand(lua_State* L);
	static int addSaberArmorBreakSlashCommand(lua_State* L);
	static int addSaberBlindSlashCommand(lua_State* L);
	static int addSaberBodyHitSlashCommand(lua_State* L);
	static int addSaberDervishSlashCommand(lua_State* L);
	static int addSaberHeadHitSlashCommand(lua_State* L);
	static int addSaberHitSlashCommand(lua_State* L);
	static int addSaberLegHitSlashCommand(lua_State* L);
	static int addSaberPowerAttackSlashCommand(lua_State* L);
	static int addSaberSlashSlashCommand(lua_State* L);
	static int addSaberSpinAttackSlashCommand(lua_State* L);
	static int addSaberStrikeSlashCommand(lua_State* L);
	static int addSaberStunStrikeSlashCommand(lua_State* L);
	static int addSaberSweepSlashCommand(lua_State* L);
	static int addSaberSwipeSlashCommand(lua_State* L);
	static int addSaberThrowSlashCommand(lua_State* L);
	static int addSampleSlashCommand(lua_State* L);
	static int addSampleDNASlashCommand(lua_State* L);
	static int addScatterHitSlashCommand(lua_State* L);
	static int addScatterShotSlashCommand(lua_State* L);
	static int addScriptSlashCommand(lua_State* L);
	static int addSearchCorpseSlashCommand(lua_State* L);
	static int addSecretSpawnSpamSlashCommand(lua_State* L);
	static int addSeGogglesSlashCommand(lua_State* L);
	static int addSelectDraftSchematicSlashCommand(lua_State* L);
	static int addSerotoninInjectionSlashCommand(lua_State* L);
	static int addServerSlashCommand(lua_State* L);
	static int addServerDestroyObjectSlashCommand(lua_State* L);
	static int addServerSysGroupSlashCommand(lua_State* L);
	static int addSetBiographySlashCommand(lua_State* L);
	static int addSetBiographyAdminSlashCommand(lua_State* L);
	static int addSetBoostmoraleSlashCommand(lua_State* L);
	static int addSetChargeSlashCommand(lua_State* L);
	static int addSetCurrentSkillTitleSlashCommand(lua_State* L);
	static int addSetExperienceSlashCommand(lua_State* L);
	static int addSetFactionSlashCommand(lua_State* L);
	static int addSetFactionStandingSlashCommand(lua_State* L);
	static int addSetFirstNameSlashCommand(lua_State* L);
	static int addSetFormupSlashCommand(lua_State* L);
	static int addSetGodModeSlashCommand(lua_State* L);
	static int addSetGrievousAuthorizedSlashCommand(lua_State* L);
	static int addSetHueSlashCommand(lua_State* L);
	static int addSetIntimidateSlashCommand(lua_State* L);
	static int addSetLastNameSlashCommand(lua_State* L);
	static int addSetLoginMessageSlashCommand(lua_State* L);
	static int addSetLoginTitleSlashCommand(lua_State* L);
	static int addSetMatchMakingCharacterIdSlashCommand(lua_State* L);
	static int addSetMatchMakingPersonalIdSlashCommand(lua_State* L);
	static int addSetMaximumSpawnTimeSlashCommand(lua_State* L);
	static int addSetMinimumSpawnTimeSlashCommand(lua_State* L);
	static int addSetMoodSlashCommand(lua_State* L);
	static int addSetMoodInternalSlashCommand(lua_State* L);
	static int addSetNameSlashCommand(lua_State* L);
	static int addSetOwnerSlashCommand(lua_State* L);
	static int addSetPerformanceBuffTargetSlashCommand(lua_State* L);
	static int addSetpermissionSlashCommand(lua_State* L);
	static int addSetPlanetLimitSlashCommand(lua_State* L);
	static int addSetPlayerAppearanceSlashCommand(lua_State* L);
	static int addSetPlayerStateSlashCommand(lua_State* L);
	static int addSetprivacySlashCommand(lua_State* L);
	static int addSetPublicStateSlashCommand(lua_State* L);
	static int addSetRankSlashCommand(lua_State* L);
	static int addSetRetreatSlashCommand(lua_State* L);
	static int addSetSpeedSlashCommand(lua_State* L);
	static int addSetSpokenLanguageSlashCommand(lua_State* L);
	static int addSetSteadyaimSlashCommand(lua_State* L);
	static int addSetTEFSlashCommand(lua_State* L);
	static int addSetVeteranRewardSlashCommand(lua_State* L);
	static int addSetWarcrySlashCommand(lua_State* L);
	static int addSetWaypointActiveStatusSlashCommand(lua_State* L);
	static int addSetWaypointNameSlashCommand(lua_State* L);
	static int addShockSlashCommand(lua_State* L);
	static int addShowCouncilRankSlashCommand(lua_State* L);
	static int addShowDanceVisualsSlashCommand(lua_State* L);
	static int addShowFactionInformationSlashCommand(lua_State* L);
	static int addShowMusicianVisualsSlashCommand(lua_State* L);
	static int addShowPvPRatingSlashCommand(lua_State* L);
	static int addShowSpawnRegionSlashCommand(lua_State* L);
	static int addSitServerSlashCommand(lua_State* L);
	static int addSkillSlashCommand(lua_State* L);
	static int addSmokebombSlashCommand(lua_State* L);
	static int addSniperShotSlashCommand(lua_State* L);
	static int addSnoopSlashCommand(lua_State* L);
	static int addSocialSlashCommand(lua_State* L);
	static int addSocialInternalSlashCommand(lua_State* L);
	static int addSpatialChatSlashCommand(lua_State* L);
	static int addSpatialChatInternalSlashCommand(lua_State* L);
	static int addSpawnStatusSlashCommand(lua_State* L);
	static int addSpinAttackSlashCommand(lua_State* L);
	static int addSplitCreditsWithGroupSlashCommand(lua_State* L);
	static int addSpotlightSlashCommand(lua_State* L);
	static int addSprayShotSlashCommand(lua_State* L);
	static int addStabilizersSlashCommand(lua_State* L);
	static int addStandSlashCommand(lua_State* L);
	static int addStartBandSlashCommand(lua_State* L);
	static int addStartCitySpawnerSlashCommand(lua_State* L);
	static int addStartDanceSlashCommand(lua_State* L);
	static int addStartleShotSlashCommand(lua_State* L);
	static int addStartMusicSlashCommand(lua_State* L);
	static int addStartSpawnerSlashCommand(lua_State* L);
	static int addStartTargetSpawnerSlashCommand(lua_State* L);
	static int addStartTraceLoggingSlashCommand(lua_State* L);
	static int addStasisSlashCommand(lua_State* L);
	static int addStatSlashCommand(lua_State* L);
	static int addSteadyaimSlashCommand(lua_State* L);
	static int addStopBandSlashCommand(lua_State* L);
	static int addStopBleedingSlashCommand(lua_State* L);
	static int addStopCitySpawnerSlashCommand(lua_State* L);
	static int addStopCraftingSessionSlashCommand(lua_State* L);
	static int addStopDanceSlashCommand(lua_State* L);
	static int addStoplisteningSlashCommand(lua_State* L);
	static int addStopMusicSlashCommand(lua_State* L);
	static int addStoppingShotSlashCommand(lua_State* L);
	static int addStopSpawnerSlashCommand(lua_State* L);
	static int addStopTargetSpawnerSlashCommand(lua_State* L);
	static int addStopTraceLoggingSlashCommand(lua_State* L);
	static int addStopwatchingSlashCommand(lua_State* L);
	static int addStructurestatusSlashCommand(lua_State* L);
	static int addStunningBlowSlashCommand(lua_State* L);
	static int addStunRecoverySlashCommand(lua_State* L);
	static int addSuppressionFireSlashCommand(lua_State* L);
	static int addSurrenderSkillSlashCommand(lua_State* L);
	static int addSurveySlashCommand(lua_State* L);
	static int addSweepAttackSlashCommand(lua_State* L);
	static int addSwitchWeaponModeSlashCommand(lua_State* L);
	static int addSwordFlurrySlashCommand(lua_State* L);
	static int addSynchronizedUiListenSlashCommand(lua_State* L);
	static int addSynchronizedUiStopListeningSlashCommand(lua_State* L);
	static int addSystemMessageSlashCommand(lua_State* L);
	static int addTakeCoverSlashCommand(lua_State* L);
	static int addTameSlashCommand(lua_State* L);
	static int addTargetSlashCommand(lua_State* L);
	static int addTauntSlashCommand(lua_State* L);
	static int addTeachSlashCommand(lua_State* L);
	static int addTeleportSlashCommand(lua_State* L);
	static int addTeleportTargetSlashCommand(lua_State* L);
	static int addTeleportToSlashCommand(lua_State* L);
	static int addTellpetSlashCommand(lua_State* L);
	static int addThrowGrenadeSlashCommand(lua_State* L);
	static int addThrowTrapSlashCommand(lua_State* L);
	static int addThyroidRuptureSlashCommand(lua_State* L);
	static int addTipSlashCommand(lua_State* L);
	static int addToggleAwayFromKeyBoardSlashCommand(lua_State* L);
	static int addToggleCombatTauntsSlashCommand(lua_State* L);
	static int addToggleDisplayingFactionRankSlashCommand(lua_State* L);
	static int addTorsoShotSlashCommand(lua_State* L);
	static int addTotalHealSlashCommand(lua_State* L);
	static int addTransferForceSlashCommand(lua_State* L);
	static int addTransferItemSlashCommand(lua_State* L);
	static int addTransferItemArmorSlashCommand(lua_State* L);
	static int addTransferItemMiscSlashCommand(lua_State* L);
	static int addTransferItemWeaponSlashCommand(lua_State* L);
	static int addTransferstructureSlashCommand(lua_State* L);
	static int addTraumatizeSlashCommand(lua_State* L);
	static int addUnassociateDroidControlDeviceWithShipSlashCommand(lua_State* L);
	static int addUnCityBanSlashCommand(lua_State* L);
	static int addUnconsentSlashCommand(lua_State* L);
	static int addUnderhandShotSlashCommand(lua_State* L);
	static int addUnfreezePlayerSlashCommand(lua_State* L);
	static int addUninstallShipComponentSlashCommand(lua_State* L);
	static int addUninviteSlashCommand(lua_State* L);
	static int addUnsnoopSlashCommand(lua_State* L);
	static int addUseDoctorBagSlashCommand(lua_State* L);
	static int addUseReconDroneSlashCommand(lua_State* L);
	static int addUseSkillBuffSlashCommand(lua_State* L);
	static int addVentriloquismSlashCommand(lua_State* L);
	static int addVertFurnitureSlashCommand(lua_State* L);
	static int addVitalizeSlashCommand(lua_State* L);
	static int addVolleyFireSlashCommand(lua_State* L);
	static int addVolleyFireAttackSlashCommand(lua_State* L);
	static int addWarcrySlashCommand(lua_State* L);
	static int addWarningShotSlashCommand(lua_State* L);
	static int addWatchSlashCommand(lua_State* L);
	static int addWaypointSlashCommand(lua_State* L);
	static int addWipeItemsSlashCommand(lua_State* L);
	static int addWookieeRoarSlashCommand(lua_State* L);

};

}
}
}
}

using namespace server::zone::managers::command;



#endif /*SLASHCOMMANDCONFIGMANAGER_H_*/
