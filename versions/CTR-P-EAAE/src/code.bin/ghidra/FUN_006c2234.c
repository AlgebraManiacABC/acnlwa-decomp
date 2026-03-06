/**
 * FUN_006c2234.c
 * Source line: 1022262
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_006c2234(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  *(undefined4 *)(param_1 + 0x644) = *param_4;
  *(undefined4 *)(param_1 + 0x648) = param_4[1];
  *(undefined4 *)(param_1 + 0x64c) = param_4[2];
  FUN_006c00b8(param_1,7,param_2,param_3);
  return;
}
