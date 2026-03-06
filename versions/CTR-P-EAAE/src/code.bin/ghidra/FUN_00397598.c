/**
 * FUN_00397598.c
 * Source line: 503541
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00397598(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x18);
  (**(code **)(*piVar1 + 8))(piVar1);
  FUN_0035ae18(param_1);
          // WARNING: Could not recover jumptable at 0x003975cc. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}
