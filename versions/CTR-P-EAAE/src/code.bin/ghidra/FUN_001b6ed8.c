/**
 * FUN_001b6ed8.c
 * Source line: 222338
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_001b6ed8(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  uVar1 = FUN_002fd108(0x1ac,*(undefined4 *)(*param_1 + *(int *)(*param_1 + 0x14) * 4),4);
  puVar2 = (undefined4 *)FUN_00120540(uVar1,param_1,"SystemTask",extraout_r3,unaff_r4,unaff_lr);
  *puVar2 = &UNK_008eb4e8;
  return;
}
