/**
 * FUN_00307040.c
 * Source line: 404951
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00307040(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  param_1[1] = param_2;
  *param_1 = &UNK_008ef708;
  param_1[2] = (uint)((param_2 & 0x1f) != 0) +
               ((int)(param_2 + ((uint)((int)param_2 >> 0x1f) >> 0x1b)) >> 5);
  param_1[4] = 0xffffffff;
  param_1[3] = param_3;
  return;
}
