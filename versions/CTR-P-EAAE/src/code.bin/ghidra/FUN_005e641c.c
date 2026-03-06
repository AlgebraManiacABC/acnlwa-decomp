/**
 * FUN_005e641c.c
 * Source line: 896278
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_005e641c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x6c) == *(int *)(param_1 + 0x68)) &&
     (iVar1 = FUN_005ea1d0(param_1 + 0x60,param_1 + 100,param_2), iVar1 == 0)) {
    *(undefined1 *)(param_1 + 0x71) = 1;
  }
  return;
}
