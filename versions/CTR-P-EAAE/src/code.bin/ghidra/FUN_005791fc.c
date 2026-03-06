/**
 * FUN_005791fc.c
 * Source line: 822277
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_005791fc(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x960) != NULL) {
          // WARNING: Could not recover jumptable at 0x00579214. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)**(undefined4 **)(param_1 + 0x960))();
    return;
  }
  return;
}
