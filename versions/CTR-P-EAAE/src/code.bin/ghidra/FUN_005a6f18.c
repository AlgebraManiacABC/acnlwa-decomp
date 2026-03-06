/**
 * FUN_005a6f18.c
 * Source line: 854525
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_005a6f18(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined1 *)(param_1 + 8) = 0;
  iVar1 = param_1[7];
  puVar2 = (undefined4 *)*param_1;
  if (iVar1 != 0) {
    FUN_005a6bbc(iVar1);
    (**(code **)(*(int *)*puVar2 + 4))((int *)*puVar2,iVar1);
  }
  param_1[7] = 0;
  return;
}
