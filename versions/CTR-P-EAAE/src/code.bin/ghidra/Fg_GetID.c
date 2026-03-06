/**
 * Fg_GetID.c
 * Source line: 1126869
 * Body lines: 6
 */
#include "../../../include/types.h"

uint Fg_GetID(Fg_t *param_1)

{
  uint tmp;
  
  tmp = param_1->raw_id & ~0x00008000;
  if (NUM_FG_PARAMS < tmp) {
    tmp = 0xffffffff;
  }
  return tmp;
}
