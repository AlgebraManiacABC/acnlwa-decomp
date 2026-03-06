/**
 * FUN_00584fe0.c
 * Source line: 831367
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00584fe0(int param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0xc) == '\x12') {
    piVar1 = *(int **)(param_1 + 8);
    *(undefined1 *)((int)piVar1 + 0x2a) = 1;
          // WARNING: Could not recover jumptable at 0x00585000. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}
