/**
 * FUN_005a6f5c.c
 * Source line: 854544
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_005a6f5c(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)**(undefined4 **)*param_1)(*(undefined4 **)*param_1,0x60,4);
  if (iVar1 != 0) {
    FUN_005a6b8c();
  }
  param_1[7] = iVar1;
  FUN_005a686c(iVar1,*param_1,*(undefined1 *)(param_1 + 1));
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}
