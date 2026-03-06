/**
 * FUN_006ee02c.c
 * Source line: 1047367
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_006ee02c(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *(undefined4 *)(param_1 + 0x4e0) = *param_2;
  *(undefined4 *)(param_1 + 0x4e4) = uVar1;
  if (*(byte *)(param_1 + 0x474) < 0x1d) {
    uVar1 = param_2[1];
    *(undefined4 *)(param_1 + 0x478) = *param_2;
    *(undefined4 *)(param_1 + 0x47c) = uVar1;
  }
  return;
}
