/**
 * FUN_00740190.c
 * Source line: 1098539
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00740190(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  iVar1 = FUN_00141728(*(undefined4 *)(param_1 + 0x3c));
  if (iVar1 != 0) {
    FUN_00141a9c(iVar1 + 0x14,param_4,*(undefined4 *)(&UNK_008b5224 + param_3 * 4),param_4,unaff_r4,
                 unaff_lr);
    return;
  }
  return;
}
