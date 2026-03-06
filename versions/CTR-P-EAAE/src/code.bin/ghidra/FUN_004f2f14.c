/**
 * FUN_004f2f14.c
 * Source line: 740700
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_004f2f14(undefined4 *param_1,int param_2,int param_3)

{
  if (param_1 != NULL && param_2 != 0) {
    param_2 += param_3 * 0x58 + 0x16c;
    *param_1 = *(undefined4 *)(param_2 + 0x1c);
    param_1[1] = *(undefined4 *)(param_2 + 0x20);
  }
  return;
}
