/**
 * FUN_006f81f0.c
 * Source line: 1053198
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_006f81f0(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  *(undefined4 *)(param_2 + 8) = *param_3;
  *(undefined4 *)(param_2 + 0xc) = param_3[1];
  *(undefined4 *)(param_2 + 0x10) = param_3[2];
  *(undefined4 *)(param_2 + 0x14) = *param_4;
  *(undefined4 *)(param_2 + 0x18) = param_4[1];
  *(undefined4 *)(param_2 + 0x1c) = param_4[2];
  *(undefined4 *)(param_2 + 0x20) = param_1;
  return;
}
