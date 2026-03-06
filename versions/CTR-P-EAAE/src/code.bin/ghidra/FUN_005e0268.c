/**
 * FUN_005e0268.c
 * Source line: 891628
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_005e0268(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0075a29c(param_2,2);
  if (*(int *)(param_1 + 4) != 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar1 * 2;
  }
  return;
}
