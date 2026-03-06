/**
 * FUN_00384a80.c
 * Source line: 490652
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00384a80(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x105c);
  (**(code **)(*piVar1 + 8))();
  *(undefined1 *)(param_1 + 0x10ce) = 1;
          // WARNING: Could not recover jumptable at 0x00384abc. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}
