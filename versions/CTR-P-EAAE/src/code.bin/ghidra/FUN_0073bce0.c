/**
 * FUN_0073bce0.c
 * Source line: 1095301
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0073bce0(int param_1)

{
  if (*(int **)(param_1 + 0xc) != NULL) {
          // WARNING: Could not recover jumptable at 0x0073bcfc. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(param_1 + 0xc) + 0x14))();
    return;
  }
  FUN_0047de14();
  return;
}
