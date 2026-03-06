/**
 * FUN_00426714.c
 * Source line: 590282
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00426714(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = (char)((uint)param_2 >> 0x18);
  param_1[1] = (char)((uint)param_2 >> 0x10);
  param_1[2] = (char)((uint)param_2 >> 8);
  param_1[3] = (char)param_2;
  return;
}
