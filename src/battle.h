#ifndef BATTLE_H_
#define BATTLE_H_

#include "types.h"

typedef struct battle_data
{
	u16 species;
	u16 stats[5];
	u16 move_ids[4];
	u32 ivs;
	u8 stat_buffs[8];
	u8 ability_id;
	u8 type1;
	u8 type2;
	u8 padding;
	u8 current_pp[4];
	u16 current_hp;
	u8 level;
	u8 happiness;
	u16 max_hp;
	u16 held_item;
	char name[11];
	u8 field_3B;
	u8 trainer_name[8];
	u32 padding3;
	u32  pid;
	u32 status1;
	u32 status2;
	u32  otid;
} battle_data;

#endif