/**
 * FUN_005b216c.c
 * Source line: 863309
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_005b216c(int param_1,int param_2,undefined1 param_3,undefined1 param_4,undefined1 param_5,
                 undefined1 param_6)

{
  param_1 += param_2 * 0x18;
  *(undefined1 *)(param_1 + 0x12) = param_3;
  *(undefined1 *)(param_1 + 0x13) = param_4;
  *(undefined1 *)(param_1 + 0x14) = param_5;
  *(undefined1 *)(param_1 + 0x15) = param_6;
  return;
}
