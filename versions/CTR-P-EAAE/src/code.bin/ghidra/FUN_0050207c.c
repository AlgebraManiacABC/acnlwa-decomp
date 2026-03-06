/**
 * FUN_0050207c.c
 * Source line: 747067
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0050207c(int param_1)

{
  int *piVar1;
  undefined1 auStack_18 [12];
  
  piVar1 = (int *)(param_1 + 0x8ac);
  FUN_005cc4b4(auStack_18,*(undefined4 *)(param_1 + 0xa74));
  (**(code **)(*piVar1 + 0x14))(piVar1,auStack_18);
  FUN_00524528(param_1 + 0xa50,piVar1);
  return;
}
