/**
 * FUN_0072b04c.c
 * Source line: 1083438
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_0072b04c(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)(param_1 + 0x105c);
  (**(code **)(*piVar1 + 8))();
  if (((*(int *)(*(int *)(param_1 + 0x10b4) + 0x18) == 0) &&
      (*(int *)(param_1 + 0x10b8) == *(int *)(param_1 + 0x10bc))) &&
     (*(char *)(param_1 + 0x1084) != '\0')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return uVar2;
}
