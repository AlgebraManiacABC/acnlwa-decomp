/**
 * FUN_003d0b50.c
 * Source line: 542504
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_003d0b50(int param_1)

{
  bool bVar1;
  
  bVar1 = param_1 == 0;
  if (!bVar1) {
    param_1 += -4;
    bVar1 = param_1 == 0;
  }
  if (!bVar1) {
    if (*(code **)(param_1 + -8) != NULL) {
          // WARNING: Could not recover jumptable at 0x003d0b68. Too many branches
          // WARNING: Treating indirect jump as call
      (**(code **)(param_1 + -8))();
      return;
    }
    FUN_002f83b0();
    return;
  }
  return;
}
