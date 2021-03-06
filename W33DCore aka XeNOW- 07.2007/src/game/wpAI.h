/* 
 * Copyright (C) 2005,2006,2007 MaNGOS <http://www.mangosproject.org/>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
  */

#ifndef MANGOS_WPAI_H
#define MANGOS_WPAI_H

#include "WaypointMovementGenerator.h"
#include "Creature.h"
#include "ObjectMgr.h"
#include <ctime>

void
WaypointMovementGenerator::WPAIScript(Creature &creature, const char * aiscript) {
	string *sAIScript = new string();
	*sAIScript = aiscript;

time_t curr;  
tm local; 
time(&curr); // get current time_t value  
local=*(localtime(&curr)); //
int cT = ((local.tm_hour*100)+local.tm_min);

	sLog.outDebug("WPAIScript: %s", aiscript);

	if( *sAIScript == "demo") {//demo script for WP-AI System
        if(!( (cT < 1800) && (cT > 800) ))//If time not smaler than 1800 and not bigger than 800 (24 hour format)
            {//try to set model of Off-hand (shield) to 0 (imo it doesn't work...)
            creature.SetUInt32Value( UNIT_VIRTUAL_ITEM_SLOT_DISPLAY+1, 0);
            creature.SetUInt32Value( UNIT_VIRTUAL_ITEM_INFO + 2, 234948100);
            creature.SetUInt32Value( UNIT_VIRTUAL_ITEM_INFO + 2 + 1, 4);

            creature.SetUInt32Value( UNIT_VIRTUAL_ITEM_SLOT_DISPLAY+1, 7557);//set new Off-Hand Item as lamp
            creature.SetUInt32Value( UNIT_VIRTUAL_ITEM_INFO + 2, 385941508);
            creature.SetUInt32Value( UNIT_VIRTUAL_ITEM_INFO + 2 + 1, 7);
            }else{//else do it in other direction...
                creature.SetUInt32Value( UNIT_VIRTUAL_ITEM_SLOT_DISPLAY+1, 0);
                creature.SetUInt32Value( UNIT_VIRTUAL_ITEM_INFO + 2, 385941508);
                creature.SetUInt32Value( UNIT_VIRTUAL_ITEM_INFO + 2 + 1, 7);

                creature.SetUInt32Value( UNIT_VIRTUAL_ITEM_SLOT_DISPLAY+1, 2080);
                creature.SetUInt32Value( UNIT_VIRTUAL_ITEM_INFO + 2, 234948100);
                creature.SetUInt32Value( UNIT_VIRTUAL_ITEM_INFO + 2 + 1, 4);
            }
		sLog.outDebug("demo");
	}
}

#endif
