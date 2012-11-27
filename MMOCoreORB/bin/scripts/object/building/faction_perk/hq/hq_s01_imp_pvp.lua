--Copyright (C) 2010 <SWGEmu>


--This File is part of Core3.

--This program is free software; you can redistribute 
--it and/or modify it under the terms of the GNU Lesser 
--General Public License as published by the Free Software
--Foundation; either version 2 of the License, 
--or (at your option) any later version.

--This program is distributed in the hope that it will be useful, 
--but WITHOUT ANY WARRANTY; without even the implied warranty of 
--MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
--See the GNU Lesser General Public License for
--more details.

--You should have received a copy of the GNU Lesser General 
--Public License along with this program; if not, write to
--the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

--Linking Engine3 statically or dynamically with other modules 
--is making a combined work based on Engine3. 
--Thus, the terms and conditions of the GNU Lesser General Public License 
--cover the whole combination.

--In addition, as a special exception, the copyright holders of Engine3 
--give you permission to combine Engine3 program with free software 
--programs or libraries that are released under the GNU LGPL and with 
--code included in the standard release of Core3 under the GNU LGPL 
--license (or modified versions of such code, with unchanged license). 
--You may copy and distribute such a system following the terms of the 
--GNU LGPL for Engine3 and the licenses of the other code concerned, 
--provided that you include the source code of that other code when 
--and as the GNU LGPL requires distribution of source code.

--Note that people who make modified versions of Engine3 are not obligated 
--to grant this special exception for their modified versions; 
--it is their choice whether to do so. The GNU Lesser General Public License 
--gives permission to release a modified version without this exception; 
--this exception also makes it possible to release a modified version 


object_building_faction_perk_hq_hq_s01_imp_pvp = object_building_faction_perk_hq_shared_hq_s01_imp_pvp:new {
		lotSize = 0,
		maintenanceCost = 5,
		baseMaintenanceRate = 5,
		dataObjectComponent = "DestructibleBuildingDataComponent",
		allowedZones = {"dantooine", "naboo", "rori","tatooine"},
		constructionMarker = "object/building/player/construction/construction_player_house_generic_medium_style_01.iff",
		length = 7,
		width = 6,
		faction = "imperial",
	 	pvpFaction = "imperial",
	
		childObjects = {
		
			-- wall 1
			{templateFile = "object/static/structure/military/military_wall_med_imperial_style_01.iff", x=-9.5, z=0, y=14, ox=0, oy=-0, oz=0, ow=1, cellid=-1, containmentType=-1}, -- left wall 1
			{templateFile = "object/static/structure/military/military_wall_med_imperial_style_01.iff", x=9.5, z=0, y=14, ox=0, oy=0, oz=0, ow=1, cellid=-1, containmentType=-1}, 
						
			-- Wall 2
			{templateFile = "object/static/structure/military/military_wall_med_imperial_style_01.iff", x=-13, z=0, y=10, ox=0, oy=-.7, oz=0, ow=.7, cellid=-1, containmentType=-1}, -- left wall 2
			{templateFile = "object/static/structure/military/military_wall_med_imperial_style_01.iff", x=13, z=0, y=10, ox=0, oy=-.7, oz=0, ow=.7, cellid=-1, containmentType=-1}, 
			
			-- Wall 3
			{templateFile = "object/static/structure/military/military_wall_med_imperial_style_01.iff", x=-17, z=0, y=5, ox=0, oy=-0, oz=0, ow=1, cellid=-1, containmentType=-1}, -- left wall 3
			{templateFile = "object/static/structure/military/military_wall_med_imperial_style_01.iff", x=17, z=0, y=5, ox=0, oy=0, oz=0, ow=1, cellid=-1, containmentType=-1}, 
			
			-- wall 4
			{templateFile = "object/static/structure/military/military_wall_med_imperial_16_style_01.iff", x=-21.5, z=0, y=-2, ox=0, oy=-.7, oz=0, ow=.7, cellid=-1, containmentType=-1}, -- left wall 2
			{templateFile = "object/static/structure/military/military_wall_med_imperial_16_style_01.iff", x=21.5, z=0, y=-2, ox=0, oy=-.7, oz=0, ow=.7, cellid=-1, containmentType=-1}, 
						
			-- outside back walls
			{templateFile = "object/static/structure/military/military_wall_med_imperial_16_style_01.iff", x=13, z=0, y=-11, ox=0, oy=-0, oz=0, ow=1, cellid=-1, containmentType=-1}, -- left wall 3
			{templateFile = "object/static/structure/military/military_wall_med_imperial_style_01.iff", x=0, z=0, y=-11, ox=0, oy=-0, oz=0, ow=1, cellid=-1, containmentType=-1}, -- left wall 3
			{templateFile = "object/static/structure/military/military_wall_med_imperial_16_style_01.iff", x=-13, z=0, y=-11, ox=0, oy=-0, oz=0, ow=1, cellid=-1, containmentType=-1}, -- left wall 3
			
			-- back columns
			{templateFile = "object/static/structure/military/military_column_med_imperial_style_01.iff", x=4, z=0, y=-11, ox=0, oy=-0, oz=0, ow=1, cellid=-1, containmentType=-1}, -- left column
			{templateFile = "object/static/structure/military/military_column_med_imperial_style_01.iff", x=-4, z=0, y=-11, ox=0, oy=0, oz=0, ow=1, cellid=-1, containmentType=-1}, 
					
		
			 {templateFile = "object/tangible/terminal/terminal_hq_imperial.iff", x = 0, z = 0, y = -6, ox = 0, oy = 0, oz = 0, ow = 1, cellid = 3, containmentType = -1 },
			 {templateFile = "object/tangible/hq_destructible/uplink_terminal.iff", x = 4, z = 0, y = -5.5, ox = 0, oy = 0, oz = 0, ow = 1, cellid = 5, containmentType = -1 },
			 {templateFile = "object/tangible/hq_destructible/security_terminal.iff", x = -4, z = 0, y = -6, ox = 0, oy = 0, oz = 0, ow = 1, cellid = 6, containmentType = -1 },
			  {templateFile = "object/tangible/hq_destructible/power_regulator.iff", x = -4, z = 0, y = -.5, ox = 0, oy = 1, oz = 0, ow = 0, cellid = 6, containmentType = -1 },
			  {templateFile = "object/tangible/hq_destructible/override_terminal.iff", x = 1, z = 0, y = -1, ow =-.685, ox =0, oz = 0, oy =.728, cellid = 3, containmentType = -1},
		},
}

ObjectTemplates:addTemplate(object_building_faction_perk_hq_hq_s01_imp_pvp, "object/building/faction_perk/hq/hq_s01_imp_pvp.iff")
