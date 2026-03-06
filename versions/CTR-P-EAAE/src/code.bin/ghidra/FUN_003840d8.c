/**
 * FUN_003840d8.c
 * Source line: 490214
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_003840d8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_003755cc(param_2,param_1);
  if (*(int *)(param_1 + 0x44) != 0) {
    uVar1 = FUN_003d1dc8(param_2);
    FUN_003cf308(uVar1,*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x4c),
                 *(undefined4 *)(param_1 + 0x44),0xffffffff);
    return;
  }
  return;
}
