/**
 * FUN_00397550.c
 * Source line: 503525
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00397550(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x18);
  (**(code **)(*piVar1 + 8))(piVar1);
  FUN_0035ad54(param_1,param_2,param_3);
          // WARNING: Could not recover jumptable at 0x00397594. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}
