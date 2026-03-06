/**
 * FUN_00631c2c.c
 * Source line: 948329
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00631c2c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x102c) != 0) &&
     (iVar1 = FUN_00318944(*(int *)(param_1 + 0x102c) + 0x28), iVar1 != 0)) {
    return;
  }
  FUN_00579b98(param_1,param_2);
  return;
}
