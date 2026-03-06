/**
 * FUN_00426734.c
 * Source line: 590294
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00426734(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[1] = (char)((uint)param_4 >> 0x10);
  param_1[2] = (char)((uint)param_4 >> 8);
  param_1[4] = (char)((uint)param_3 >> 0x18);
  param_1[5] = (char)((uint)param_3 >> 0x10);
  param_1[6] = (char)((uint)param_3 >> 8);
  *param_1 = (char)((uint)param_4 >> 0x18);
  param_1[3] = (char)param_4;
  param_1[7] = (char)param_3;
  return;
}
