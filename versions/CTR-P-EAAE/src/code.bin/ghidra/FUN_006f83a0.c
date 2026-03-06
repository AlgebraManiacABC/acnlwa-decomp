/**
 * FUN_006f83a0.c
 * Source line: 1053281
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_006f83a0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  *(undefined4 *)(param_3 + 0x18) = *param_4;
  *(undefined4 *)(param_3 + 0x1c) = param_4[1];
  *(undefined4 *)(param_3 + 0x20) = param_4[2];
  *(undefined4 *)(param_3 + 0x24) = param_1;
  *(undefined4 *)(param_3 + 0x28) = param_2;
  return;
}
