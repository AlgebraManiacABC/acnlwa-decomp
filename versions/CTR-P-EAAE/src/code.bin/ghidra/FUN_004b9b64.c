/**
 * FUN_004b9b64.c
 * Source line: 697079
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_004b9b64(int param_1,int param_2)

{
  int *piVar1;
  
  *(undefined1 *)(param_2 + 0x1c) = 1;
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != NULL) {
          // WARNING: Could not recover jumptable at 0x004b9b94. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)(param_2 + 0x18),1,0);
    return;
  }
  return;
}
