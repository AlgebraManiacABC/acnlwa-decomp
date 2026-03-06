/**
 * FUN_00267784.c
 * Source line: 313157
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00267784(int param_1)

{
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  uint uVar1;
  undefined4 unaff_lr;
  
  uVar1 = 0;
  do {
    FUN_004a6ea8(param_1 + uVar1 * 0x290 + 0x1b30);
    uVar1 += 1;
  } while (uVar1 < 4);
  FUN_002f747c(param_1 + 0x18ac);
  FUN_004b6dc8(*(undefined4 *)(param_1 + 0xd30),*(undefined4 *)(param_1 + 0xa90),extraout_r2,
               extraout_r3,unaff_r4,unaff_lr);
          // WARNING: Subroutine does not return
  FUN_001323b4(param_1 + 0xa70);
}
