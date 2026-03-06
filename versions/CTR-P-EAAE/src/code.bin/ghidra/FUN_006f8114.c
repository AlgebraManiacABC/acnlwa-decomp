/**
 * FUN_006f8114.c
 * Source line: 1053148
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_006f8114(undefined4 param_1,int param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_2 + 8) = *param_3;
  *(undefined4 *)(param_2 + 0xc) = param_3[1];
  *(undefined4 *)(param_2 + 0x10) = param_3[2];
  *(undefined4 *)(param_2 + 0x14) = param_1;
  return;
}
