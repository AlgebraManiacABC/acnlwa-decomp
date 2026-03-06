/**
 * FUN_005c1814.c
 * Source line: 871056
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_005c1814(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_005c33d0();
  if (piVar1 != NULL) {
          // WARNING: Could not recover jumptable at 0x005c1830. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*piVar1 + 0x5c))();
    return;
  }
  return;
}
