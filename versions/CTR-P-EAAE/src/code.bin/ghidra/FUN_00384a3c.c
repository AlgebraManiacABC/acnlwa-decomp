/**
 * FUN_00384a3c.c
 * Source line: 490636
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00384a3c(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x105c);
  (**(code **)(*piVar1 + 8))();
  *(undefined1 *)(param_1 + 0x1086) = 1;
          // WARNING: Could not recover jumptable at 0x00384a78. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}
