/**
 * FUN_005c1db4.c
 * Source line: 871402
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_005c1db4(void)

{
  int iVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_lr;
  
  iVar1 = FUN_0052bf54();
  if (iVar1 != 0) {
    iVar1 = FUN_003170f8(5,0,extraout_r2,extraout_r3,unaff_lr);
    if (iVar1 != 0) {
      *(undefined1 *)(DAT_009516ac + 0x1a) = 1;
    }
    return;
  }
  return;
}
