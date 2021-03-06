// Copyright (C) 2004 WoWD Team

#ifndef _UPDATEFIELDS_H
#define _UPDATEFIELDS_H


enum ObjectUpdateFields
{
	OBJECT_FIELD_GUID = 0, // 2 4 1
	OBJECT_FIELD_TYPE = 2, // 1 1 1
	OBJECT_FIELD_ENTRY = 3, // 1 1 1
	OBJECT_FIELD_SCALE_X = 4, // 1 3 1
	OBJECT_FIELD_PADDING = 5, // 1 1 0
	OBJECT_END = 6
};

enum ItemUpdateFields
{
	ITEM_FIELD_OWNER = 6, // 2 4 1
	ITEM_FIELD_CONTAINED = 8, // 2 4 1
	ITEM_FIELD_CREATOR = 10, // 2 4 1
	ITEM_FIELD_GIFTCREATOR = 12, // 2 4 1
	ITEM_FIELD_STACK_COUNT = 14, // 1 1 20
	ITEM_FIELD_DURATION = 15, // 1 1 20
	ITEM_FIELD_SPELL_CHARGES = 16, // 5 1 20
	ITEM_FIELD_FLAGS = 21, // 1 2 1
	ITEM_FIELD_ENCHANTMENT = 22, // 21 1 1
	ITEM_FIELD_PROPERTY_SEED = 43, // 1 1 1
	ITEM_FIELD_RANDOM_PROPERTIES_ID = 44, // 1 1 1
	ITEM_FIELD_ITEM_TEXT_ID = 45, // 1 1 4
	ITEM_FIELD_DURABILITY = 46, // 1 1 20
	ITEM_FIELD_MAXDURABILITY = 47, // 1 1 20
	ITEM_END = 48
};

enum ContainerUpdateFields
{
	CONTAINER_FIELD_NUM_SLOTS = 48, // 1 1 1
	CONTAINER_ALIGN_PAD = 49, // 1 5 0
	CONTAINER_FIELD_SLOT_1 = 50, // 40 4 1
	CONTAINER_END = 90
};

enum UnitUpdateFields
{
	UNIT_FIELD_CHARM = 6, // 2 4 1
	UNIT_FIELD_SUMMON = 8, // 2 4 1
	UNIT_FIELD_CHARMEDBY = 10, // 2 4 1
	UNIT_FIELD_SUMMONEDBY = 12, // 2 4 1
	UNIT_FIELD_CREATEDBY = 14, // 2 4 1
	UNIT_FIELD_TARGET = 16, // 2 4 1
	UNIT_FIELD_PERSUADED = 18, // 2 4 1
	UNIT_FIELD_CHANNEL_OBJECT = 20, // 2 4 1
	UNIT_FIELD_HEALTH = 22, // 1 1 256
	UNIT_FIELD_POWER1 = 23, // 1 1 1
	UNIT_FIELD_POWER2 = 24, // 1 1 1
	UNIT_FIELD_POWER3 = 25, // 1 1 1
	UNIT_FIELD_POWER4 = 26, // 1 1 1
	UNIT_FIELD_POWER5 = 27, // 1 1 1
	UNIT_FIELD_MAXHEALTH = 28, // 1 1 256
	UNIT_FIELD_MAXPOWER1 = 29, // 1 1 1
	UNIT_FIELD_MAXPOWER2 = 30, // 1 1 1
	UNIT_FIELD_MAXPOWER3 = 31, // 1 1 1
	UNIT_FIELD_MAXPOWER4 = 32, // 1 1 1
	UNIT_FIELD_MAXPOWER5 = 33, // 1 1 1
	UNIT_FIELD_LEVEL = 34, // 1 1 1
	UNIT_FIELD_FACTIONTEMPLATE = 35, // 1 1 1
	UNIT_FIELD_BYTES_0 = 36, // 1 5 1
	UNIT_VIRTUAL_ITEM_SLOT_DISPLAY = 37, // 3 1 1
	UNIT_VIRTUAL_ITEM_INFO = 40, // 6 5 1
	UNIT_FIELD_FLAGS = 46, // 1 1 1
	UNIT_FIELD_AURA = 47, // 56 1 1
	UNIT_FIELD_AURALEVELS = 103, // 10 5 1
	UNIT_FIELD_AURAAPPLICATIONS = 113, // 10 5 1
	UNIT_FIELD_AURAFLAGS = 123, // 7 5 1
	UNIT_FIELD_AURASTATE = 130, // 1 1 1
	UNIT_FIELD_BASEATTACKTIME = 131, // 2 1 1
	UNIT_FIELD_RANGEDATTACKTIME = 133, // 1 1 2
	UNIT_FIELD_BOUNDINGRADIUS = 134, // 1 3 1
	UNIT_FIELD_COMBATREACH = 135, // 1 3 1
	UNIT_FIELD_DISPLAYID = 136, // 1 1 1
	UNIT_FIELD_NATIVEDISPLAYID = 137, // 1 1 1
	UNIT_FIELD_MOUNTDISPLAYID = 138, // 1 1 1
	UNIT_FIELD_MINDAMAGE = 139, // 1 3 38
	UNIT_FIELD_MAXDAMAGE = 140, // 1 3 38
	UNIT_FIELD_MINOFFHANDDAMAGE = 141, // 1 3 38
	UNIT_FIELD_MAXOFFHANDDAMAGE = 142, // 1 3 38
	UNIT_FIELD_BYTES_1 = 143, // 1 5 1
	UNIT_FIELD_PETNUMBER = 144, // 1 1 1
	UNIT_FIELD_PET_NAME_TIMESTAMP = 145, // 1 1 1
	UNIT_FIELD_PETEXPERIENCE = 146, // 1 1 4
	UNIT_FIELD_PETNEXTLEVELEXP = 147, // 1 1 4
	UNIT_DYNAMIC_FLAGS = 148, // 1 1 256
	UNIT_CHANNEL_SPELL = 149, // 1 1 1
	UNIT_MOD_CAST_SPEED = 150, // 1 1 1
	UNIT_CREATED_BY_SPELL = 151, // 1 1 1
	UNIT_NPC_FLAGS = 152, // 1 1 1
	UNIT_NPC_EMOTESTATE = 153, // 1 1 1
	UNIT_TRAINING_POINTS = 154, // 1 2 4
	UNIT_FIELD_STAT0 = 155, // 1 1 6
	UNIT_FIELD_STAT1 = 156, // 1 1 6
	UNIT_FIELD_STAT2 = 157, // 1 1 6
	UNIT_FIELD_STAT3 = 158, // 1 1 6
	UNIT_FIELD_STAT4 = 159, // 1 1 6
	UNIT_FIELD_RESISTANCES = 160, // 7 1 38
	UNIT_FIELD_ATTACKPOWER = 167, // 1 1 6
	UNIT_FIELD_BASE_MANA = 168, // 1 1 6
	UNIT_FIELD_ATTACK_POWER_MODS = 169, // 1 2 6
	UNIT_FIELD_BYTES_2 = 170, // 1 5 1
	UNIT_FIELD_RANGEDATTACKPOWER = 171, // 1 1 6
	UNIT_FIELD_RANGED_ATTACK_POWER_MODS = 172, // 1 2 6
	UNIT_FIELD_MINRANGEDDAMAGE = 173, // 1 3 6
	UNIT_FIELD_MAXRANGEDDAMAGE = 174, // 1 3 6
	UNIT_FIELD_PADDING = 175, // 1 1 0
	UNIT_END = 176
};

enum PlayerUpdateFields
{
	PLAYER_SELECTION = 176, // 2 4 1
	PLAYER_DUEL_ARBITER = 178, // 2 4 1
	PLAYER_FLAGS = 180, // 1 1 1
	PLAYER_GUILDID = 181, // 1 1 1
	PLAYER_GUILDRANK = 182, // 1 1 1
	PLAYER_BYTES = 183, // 1 5 1
	PLAYER_BYTES_2 = 184, // 1 5 1
	PLAYER_BYTES_3 = 185, // 1 5 1
	PLAYER_DUEL_TEAM = 186, // 1 1 1
	PLAYER_GUILD_TIMESTAMP = 187, // 1 1 1
	PLAYER_QUEST_LOG_1_1 = 188, // 1 1 64
	PLAYER_QUEST_LOG_1_2 = 189, // 2 1 2
	PLAYER_QUEST_LOG_2_1 = 191, // 1 1 64
	PLAYER_QUEST_LOG_2_2 = 192, // 2 1 2
	PLAYER_QUEST_LOG_3_1 = 194, // 1 1 64
	PLAYER_QUEST_LOG_3_2 = 195, // 2 1 2
	PLAYER_QUEST_LOG_4_1 = 197, // 1 1 64
	PLAYER_QUEST_LOG_4_2 = 198, // 2 1 2
	PLAYER_QUEST_LOG_5_1 = 200, // 1 1 64
	PLAYER_QUEST_LOG_5_2 = 201, // 2 1 2
	PLAYER_QUEST_LOG_6_1 = 203, // 1 1 64
	PLAYER_QUEST_LOG_6_2 = 204, // 2 1 2
	PLAYER_QUEST_LOG_7_1 = 206, // 1 1 64
	PLAYER_QUEST_LOG_7_2 = 207, // 2 1 2
	PLAYER_QUEST_LOG_8_1 = 209, // 1 1 64
	PLAYER_QUEST_LOG_8_2 = 210, // 2 1 2
	PLAYER_QUEST_LOG_9_1 = 212, // 1 1 64
	PLAYER_QUEST_LOG_9_2 = 213, // 2 1 2
	PLAYER_QUEST_LOG_10_1 = 215, // 1 1 64
	PLAYER_QUEST_LOG_10_2 = 216, // 2 1 2
	PLAYER_QUEST_LOG_11_1 = 218, // 1 1 64
	PLAYER_QUEST_LOG_11_2 = 219, // 2 1 2
	PLAYER_QUEST_LOG_12_1 = 221, // 1 1 64
	PLAYER_QUEST_LOG_12_2 = 222, // 2 1 2
	PLAYER_QUEST_LOG_13_1 = 224, // 1 1 64
	PLAYER_QUEST_LOG_13_2 = 225, // 2 1 2
	PLAYER_QUEST_LOG_14_1 = 227, // 1 1 64
	PLAYER_QUEST_LOG_14_2 = 228, // 2 1 2
	PLAYER_QUEST_LOG_15_1 = 230, // 1 1 64
	PLAYER_QUEST_LOG_15_2 = 231, // 2 1 2
	PLAYER_QUEST_LOG_16_1 = 233, // 1 1 64
	PLAYER_QUEST_LOG_16_2 = 234, // 2 1 2
	PLAYER_QUEST_LOG_17_1 = 236, // 1 1 64
	PLAYER_QUEST_LOG_17_2 = 237, // 2 1 2
	PLAYER_QUEST_LOG_18_1 = 239, // 1 1 64
	PLAYER_QUEST_LOG_18_2 = 240, // 2 1 2
	PLAYER_QUEST_LOG_19_1 = 242, // 1 1 64
	PLAYER_QUEST_LOG_19_2 = 243, // 2 1 2
	PLAYER_QUEST_LOG_20_1 = 245, // 1 1 64
	PLAYER_QUEST_LOG_20_2 = 246, // 2 1 2
	PLAYER_VISIBLE_ITEM_1_0 = 248, // 8 1 1
	PLAYER_VISIBLE_ITEM_1_PROPERTIES = 256, // 1 2 1
	PLAYER_VISIBLE_ITEM_2_0 = 257, // 8 1 1
	PLAYER_VISIBLE_ITEM_2_PROPERTIES = 265, // 1 2 1
	PLAYER_VISIBLE_ITEM_3_0 = 266, // 8 1 1
	PLAYER_VISIBLE_ITEM_3_PROPERTIES = 274, // 1 2 1
	PLAYER_VISIBLE_ITEM_4_0 = 275, // 8 1 1
	PLAYER_VISIBLE_ITEM_4_PROPERTIES = 283, // 1 2 1
	PLAYER_VISIBLE_ITEM_5_0 = 284, // 8 1 1
	PLAYER_VISIBLE_ITEM_5_PROPERTIES = 292, // 1 2 1
	PLAYER_VISIBLE_ITEM_6_0 = 293, // 8 1 1
	PLAYER_VISIBLE_ITEM_6_PROPERTIES = 301, // 1 2 1
	PLAYER_VISIBLE_ITEM_7_0 = 302, // 8 1 1
	PLAYER_VISIBLE_ITEM_7_PROPERTIES = 310, // 1 2 1
	PLAYER_VISIBLE_ITEM_8_0 = 311, // 8 1 1
	PLAYER_VISIBLE_ITEM_8_PROPERTIES = 319, // 1 2 1
	PLAYER_VISIBLE_ITEM_9_0 = 320, // 8 1 1
	PLAYER_VISIBLE_ITEM_9_PROPERTIES = 328, // 1 2 1
	PLAYER_VISIBLE_ITEM_10_0 = 329, // 8 1 1
	PLAYER_VISIBLE_ITEM_10_PROPERTIES = 337, // 1 2 1
	PLAYER_VISIBLE_ITEM_11_0 = 338, // 8 1 1
	PLAYER_VISIBLE_ITEM_11_PROPERTIES = 346, // 1 2 1
	PLAYER_VISIBLE_ITEM_12_0 = 347, // 8 1 1
	PLAYER_VISIBLE_ITEM_12_PROPERTIES = 355, // 1 2 1
	PLAYER_VISIBLE_ITEM_13_0 = 356, // 8 1 1
	PLAYER_VISIBLE_ITEM_13_PROPERTIES = 364, // 1 2 1
	PLAYER_VISIBLE_ITEM_14_0 = 365, // 8 1 1
	PLAYER_VISIBLE_ITEM_14_PROPERTIES = 373, // 1 2 1
	PLAYER_VISIBLE_ITEM_15_0 = 374, // 8 1 1
	PLAYER_VISIBLE_ITEM_15_PROPERTIES = 382, // 1 2 1
	PLAYER_VISIBLE_ITEM_16_0 = 383, // 8 1 1
	PLAYER_VISIBLE_ITEM_16_PROPERTIES = 391, // 1 2 1
	PLAYER_VISIBLE_ITEM_17_0 = 392, // 8 1 1
	PLAYER_VISIBLE_ITEM_17_PROPERTIES = 400, // 1 2 1
	PLAYER_VISIBLE_ITEM_18_0 = 401, // 8 1 1
	PLAYER_VISIBLE_ITEM_18_PROPERTIES = 409, // 1 2 1
	PLAYER_VISIBLE_ITEM_19_0 = 410, // 8 1 1
	PLAYER_VISIBLE_ITEM_19_PROPERTIES = 418, // 1 2 1
	PLAYER_FIELD_PAD_0 = 419, // 1 1 0
	PLAYER_FIELD_INV_SLOT_HEAD = 420, // 46 4 1
	PLAYER_FIELD_PACK_SLOT_1 = 466, // 32 4 2
	PLAYER_FIELD_BANK_SLOT_1 = 498, // 48 4 2
	PLAYER_FIELD_BANKBAG_SLOT_1 = 546, // 12 4 2
	PLAYER_FIELD_VENDORBUYBACK_SLOT = 558, // 2 4 2
	PLAYER_FARSIGHT = 560, // 2 4 2
	PLAYER__FIELD_COMBO_TARGET = 562, // 2 4 2
	PLAYER_FIELD_BUYBACK_NPC = 564, // 2 4 2
	PLAYER_XP = 566, // 1 1 2
	PLAYER_NEXT_LEVEL_XP = 567, // 1 1 2
	PLAYER_SKILL_INFO_1_1 = 568, // 384 2 2
	PLAYER_CHARACTER_POINTS1 = 952, // 1 1 2
	PLAYER_CHARACTER_POINTS2 = 953, // 1 1 2
	PLAYER_TRACK_CREATURES = 954, // 1 1 2
	PLAYER_TRACK_RESOURCES = 955, // 1 1 2
	PLAYER_CHAT_FILTERS = 956, // 1 1 2
	PLAYER_BLOCK_PERCENTAGE = 957, // 1 3 2
	PLAYER_DODGE_PERCENTAGE = 958, // 1 3 2
	PLAYER_PARRY_PERCENTAGE = 959, // 1 3 2
	PLAYER_CRIT_PERCENTAGE = 960, // 1 3 2
	PLAYER_EXPLORED_ZONES_1 = 961, // 32 5 2
	PLAYER_REST_STATE_EXPERIENCE = 993, // 1 1 2
	PLAYER_FIELD_COINAGE = 994, // 1 1 2
	PLAYER_FIELD_POSSTAT0 = 995, // 1 1 2
	PLAYER_FIELD_POSSTAT1 = 996, // 1 1 2
	PLAYER_FIELD_POSSTAT2 = 997, // 1 1 2
	PLAYER_FIELD_POSSTAT3 = 998, // 1 1 2
	PLAYER_FIELD_POSSTAT4 = 999, // 1 1 2
	PLAYER_FIELD_NEGSTAT0 = 1000, // 1 1 2
	PLAYER_FIELD_NEGSTAT1 = 1001, // 1 1 2
	PLAYER_FIELD_NEGSTAT2 = 1002, // 1 1 2
	PLAYER_FIELD_NEGSTAT3 = 1003, // 1 1 2
	PLAYER_FIELD_NEGSTAT4 = 1004, // 1 1 2
	PLAYER_FIELD_RESISTANCEBUFFMODSPOSITIVE = 1005, // 7 1 2
	PLAYER_FIELD_RESISTANCEBUFFMODSNEGATIVE = 1012, // 7 1 2
	PLAYER_FIELD_MOD_DAMAGE_DONE_POS = 1019, // 7 1 2
	PLAYER_FIELD_MOD_DAMAGE_DONE_NEG = 1026, // 7 1 2
	PLAYER_FIELD_MOD_DAMAGE_DONE_PCT = 1033, // 7 1 2
	PLAYER_FIELD_BYTES = 1040, // 1 5 2
	PLAYER_AMMO_ID = 1041, // 1 1 2
	PLAYER_FIELD_PVP_MEDALS = 1042, // 1 1 2
	PLAYER_FIELD_BUYBACK_ITEM_ID = 1043, // 1 1 2
	PLAYER_FIELD_BUYBACK_RANDOM_PROPERTIES_ID = 1044, // 1 1 2
	PLAYER_FIELD_BUYBACK_SEED = 1045, // 1 1 2
	PLAYER_FIELD_BUYBACK_PRICE = 1046, // 1 1 2
	PLAYER_FIELD_BUYBACK_DURABILITY = 1047, // 1 1 2
	PLAYER_FIELD_BUYBACK_COUNT = 1048, // 1 1 2
	PLAYER_FIELD_PADDING = 1049, // 1 1 0
	PLAYER_END = 1050
};

enum GameObjectUpdateFields
{
	GAMEOBJECT_DISPLAYID = 6, // 1 1 1
	GAMEOBJECT_FLAGS = 7, // 1 1 1
	GAMEOBJECT_ROTATION = 8, // 4 3 1
	GAMEOBJECT_STATE = 12, // 1 1 1
	GAMEOBJECT_TIMESTAMP = 13, // 1 1 1
	GAMEOBJECT_POS_X = 14, // 1 3 1
	GAMEOBJECT_POS_Y = 15, // 1 3 1
	GAMEOBJECT_POS_Z = 16, // 1 3 1
	GAMEOBJECT_FACING = 17, // 1 3 1
	GAMEOBJECT_DYN_FLAGS = 18, // 1 1 256
	GAMEOBJECT_FACTION = 19, // 1 1 1
	GAMEOBJECT_TYPE_ID = 20, // 1 1 1
	GAMEOBJECT_LEVEL = 21, // 1 1 1
	GAMEOBJECT_END = 22
};

enum DynamicObjectUpdateFields
{
	DYNAMICOBJECT_CASTER = 6, // 2 4 1
	DYNAMICOBJECT_BYTES = 8, // 1 5 1
	DYNAMICOBJECT_SPELLID = 9, // 1 1 1
	DYNAMICOBJECT_RADIUS = 10, // 1 3 1
	DYNAMICOBJECT_POS_X = 11, // 1 3 1
	DYNAMICOBJECT_POS_Y = 12, // 1 3 1
	DYNAMICOBJECT_POS_Z = 13, // 1 3 1
	DYNAMICOBJECT_FACING = 14, // 1 3 1
	DYNAMICOBJECT_PAD = 15, // 1 5 1
	DYNAMICOBJECT_END = 16
};

enum CorpseUpdateFields
{
	CORPSE_FIELD_OWNER = 6, // 2 4 1
	CORPSE_FIELD_FACING = 8, // 1 3 1
	CORPSE_FIELD_POS_X = 9, // 1 3 1
	CORPSE_FIELD_POS_Y = 10, // 1 3 1
	CORPSE_FIELD_POS_Z = 11, // 1 3 1
	CORPSE_FIELD_DISPLAY_ID = 12, // 1 1 1
	CORPSE_FIELD_ITEM = 13, // 19 1 1
	CORPSE_FIELD_BYTES_1 = 32, // 1 5 1
	CORPSE_FIELD_BYTES_2 = 33, // 1 5 1
	CORPSE_FIELD_GUILD = 34, // 1 1 1
	CORPSE_FIELD_FLAGS = 35, // 1 1 1
	CORPSE_END = 36
};

#endif