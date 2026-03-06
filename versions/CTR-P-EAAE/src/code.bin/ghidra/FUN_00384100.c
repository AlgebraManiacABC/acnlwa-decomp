/**
 * FUN_00384100.c
 * Source line: 490231
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00384100(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x10) != 0) {
    uVar1 = FUN_003d1dc8();
    FUN_003cf308(uVar1,*(int *)(param_2 + 0xc) + *(int *)(param_2 + 0x18),
                 *(undefined4 *)(param_2 + 0x10),0xffffffff);
    return;
  }
  return;
}
