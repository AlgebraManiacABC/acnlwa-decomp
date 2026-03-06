/**
 * FUN_001402b0.c
 * Source line: 152630
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_001402b0(int param_1)

{
  if ((param_1 != 0) && (piRam0097d808 != NULL)) {
          // WARNING: Could not recover jumptable at 0x001402d0. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*piRam0097d808 + 4))();
    return;
  }
  return;
}
