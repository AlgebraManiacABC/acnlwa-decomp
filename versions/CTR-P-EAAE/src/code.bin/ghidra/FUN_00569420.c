/**
 * FUN_00569420.c
 * Source line: 810865
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00569420(int param_1,int param_2)

{
  int *piVar1;
  
  *(undefined1 *)(param_2 + 0x1c) = 0;
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != NULL) {
          // WARNING: Could not recover jumptable at 0x004b9bb4. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*piVar1 + 0x40))(piVar1,*(undefined4 *)(param_2 + 0x18),1);
    return;
  }
  return;
}
