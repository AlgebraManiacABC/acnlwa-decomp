/**
 * FUN_00622be8.c
 * Source line: 936558
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00622be8(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  
  if (param_3 < 0x20) {
    FUN_00135748();
    iVar1 = param_1 + param_3 * 4;
    if (*(undefined4 **)(iVar1 + 0x4024) != NULL) {
      *param_2 = **(undefined4 **)(iVar1 + 0x4024);
      *(undefined2 *)(param_2 + 1) = *(undefined2 *)(iVar1 + 0x3860);
      *(undefined2 *)((int)param_2 + 6) = *(undefined2 *)(iVar1 + 0x3862);
      FUN_001357ec(param_1);
      return;
    }
    FUN_001357ec(param_1);
  }
  FUN_006256d0(param_2);
  return;
}
