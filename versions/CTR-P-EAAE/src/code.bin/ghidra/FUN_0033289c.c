/**
 * FUN_0033289c.c
 * Source line: 434954
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0033289c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0xc80) != 0) {
    do {
      FUN_006bbc24(param_1 + uVar1 * 0x280,param_2,param_3,param_4);
      uVar1 += 1;
    } while (uVar1 < *(uint *)(param_1 + 0xc80));
  }
  return;
}
