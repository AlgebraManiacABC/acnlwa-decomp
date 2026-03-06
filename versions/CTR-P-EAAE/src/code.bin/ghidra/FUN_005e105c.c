/**
 * FUN_005e105c.c
 * Source line: 892459
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_005e105c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0075a29c(param_2,3);
  if (*(int *)(param_1 + 4) != 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar1 * 2;
  }
  return;
}
