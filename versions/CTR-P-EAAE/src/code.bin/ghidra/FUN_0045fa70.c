/**
 * FUN_0045fa70.c
 * Source line: 627477
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0045fa70(void)

{
  if ((iRam00974a70 - 0x100000U < 0x3ff00000) && (*(int **)(iRam00974a70 + 8) != NULL)) {
          // WARNING: Could not recover jumptable at 0x0045fa9c. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(iRam00974a70 + 8) + 8))();
    return;
  }
  return;
}
