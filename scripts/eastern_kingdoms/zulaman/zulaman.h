/* Copyright (C) 2006 - 2011 ScriptDev2 <https://scriptdev2.svn.sourceforge.net/>
 * This program is free software licensed under GPL version 2
 * Please see the included DOCS/LICENSE.TXT for more information */

#ifndef DEF_ZULAMAN_H
#define DEF_ZULAMAN_H

/* Database Condition IDs for the Chest-loot: (1-16)
** 1,2,3,4 to check, if the first chest should contain loot 1,2,3 or 4  tanzar  (bear)
** 5,6,7,8 to check, if the second chest should contain loot 1,2,3 or 4 kraz    (phoenix)
** 9,10,11,12 for the third chest                                       ashli   (lynx)
** 13,14,15,16 for the forth chest                                      harkor  (eagle)

** NPC_<name> (of EventChest NPCs) isRescued, Condition ID by its entry
*/

enum InstanceZA
{
    MAX_ENCOUNTER           = 8,
    MAX_VENDOR              = 2,
    MAX_CHESTS              = 4,

    SAY_INST_RELEASE        = -1568067,
    SAY_INST_BEGIN          = -1568068,
    SAY_INST_PROGRESS_1     = -1568069,
    SAY_INST_PROGRESS_2     = -1568070,
    SAY_INST_PROGRESS_3     = -1568071,
    SAY_INST_WARN_1         = -1568072,
    SAY_INST_WARN_2         = -1568073,
    SAY_INST_WARN_3         = -1568074,
    SAY_INST_WARN_4         = -1568075,
    SAY_INST_SACRIF1        = -1568076,
    SAY_INST_SACRIF2        = -1568077,
    SAY_INST_COMPLETE       = -1568078,

    WORLD_STATE_ID          = 3104,
    WORLD_STATE_COUNTER     = 3106,

    TYPE_EVENT_RUN          = 1,
    TYPE_AKILZON            = 2,
    TYPE_NALORAKK           = 3,
    TYPE_JANALAI            = 4,
    TYPE_HALAZZI            = 5,
    TYPE_MALACRASS          = 6,
    TYPE_ZULJIN             = 7,

    TYPE_RAND_VENDOR_1      = 8,
    TYPE_RAND_VENDOR_2      = 9,

    TYPE_RUN_EVENT_TIME     = 10,

    TYPE_J_EGGS_RIGHT       = 11,
    TYPE_J_EGGS_LEFT        = 12,

    // Data for Chest loot, places 1-16

    NPC_AKILZON             = 23574,
    NPC_NALORAKK            = 23576,
    NPC_JANALAI             = 23578,
    NPC_HALAZZI             = 23577,
    NPC_MALACRASS           = 24239,
    NPC_ZULJIN              = 23863,

    NPC_EGG                 = 23817,
    NPC_SPIRIT_LYNX         = 24143,

    NPC_HARRISON            = 24358,
    // Time Run Event NPCs
    NPC_TANZAR              = 23790,                        // at bear
    NPC_KRAZ                = 24024,                        // at phoenix
    NPC_ASHLI               = 24001,                        // at lynx
    NPC_HARKOR              = 23999,                        // at eagle
    // unused (handled by DB (SpawnSpecial :P)
    NPC_TANZAR_CORPSE       = 24442,
    NPC_KRAZ_CORPSE         = 24444,
    NPC_ASHIL_CORPSE        = 24441,
    NPC_HARKOR_CORPSE       = 24443,

    GO_STRANGE_GONG         = 187359,
    GO_MASSIVE_GATE         = 186728,
    GO_HEXLORD_ENTRANCE     = 186305,

    GO_TANZARS_TRUNK        = 186648,
    GO_KRAZS_PACKAGE        = 186667,
    GO_ASHLIS_BAG           = 186672,
    GO_HARKORS_SATCHEL      = 187021,
};

enum BossToChestIndex
{
    INDEX_NALORAKK          = 0,
    INDEX_JANALAI           = 1,
    INDEX_HALAZZI           = 2,
    INDEX_AKILZON           = 3
};

#endif

/* A few notes about spells:
** Ahli Encounter
http://www.wowhead.com/spell=43515 Ashli Fireball
http://www.wowhead.com/spell=43520 Ashli Fireball 1
http://www.wowhead.com/spell=43525 Ashli Fireball 2
http://www.wowhead.com/spell=46440 Ashli Fireball Test
43552 - Jar explosion visual, needed for Ashli Event, looks good


** Summon Gos
43756 Summon Amani Charm Chest (a few related)
http://www.wowhead.com/spell=43774 Summon Money Bag
*/
