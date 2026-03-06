/**
 * FUN_0023c87c.c
 * Source line: 292635
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0023c87c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00567e24(param_1 + 0x170,"Layout/photoBox/photo_box.arc");
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x110) = param_1 + 0x170;
    FUN_00569184(param_1 + 0x24,"photo_box_00.bclyt",0,0x2000);
    FUN_005695e4(param_1 + 0x3b8,"photo_box_00_count.bclan",param_1 + 0x170);
    *(undefined1 *)(param_1 + 0x144) = 1;
    *(undefined4 *)(param_1 + 0x150) = 0x41200000;
          // WARNING: Subroutine does not return
    FUN_00568c10(param_1 + 0x24);
  }
  return;
}
