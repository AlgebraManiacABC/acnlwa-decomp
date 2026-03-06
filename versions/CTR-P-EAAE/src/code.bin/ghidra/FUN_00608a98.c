/**
 * FUN_00608a98.c
 * Source line: 922220
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00608a98(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0075cd98(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x18));
  if ((iVar1 != 0) &&
     (iVar1 = FUN_0075cd4c(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x18)), iVar1 != 0)) {
    FUN_0081c0a0(param_1);
  }
  return;
}
