/**
 * FUN_00448e5c.c
 * Source line: 610556
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00448e5c(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    uRam00ae5c88 = *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x18);
  }
  if (*(char *)(param_1 + 0xa4) == '\0') {
    piVar1 = *(int **)(param_1 + 0x84);
    if (piVar1 + -0x40000 < (int *)0x3ff00000) {
          // WARNING: Could not recover jumptable at 0x00448ea0. Too many branches
          // WARNING: Treating indirect jump as call
      (**(code **)(*piVar1 + 0x10))(piVar1,0);
      return;
    }
  }
  return;
}
