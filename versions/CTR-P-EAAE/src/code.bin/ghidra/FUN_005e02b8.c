/**
 * FUN_005e02b8.c
 * Source line: 891656
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_005e02b8(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0075a29c(param_2,4);
  if (*(int *)(param_1 + 4) != 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar1 * 2;
  }
  return;
}
