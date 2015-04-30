#ifndef MEGA_H_
#define MEGA_H_

#include "types.h"
#include "battle.h"
#include "evo.h"

typedef struct mega_data {
	u8 trigger[4];
} mega_data;

// Some unused RAM again
mega_data *megadata = (mega_data *) 0x02022B40;

evolution *can_mega_evolve(battle_data *pokemon);

#endif