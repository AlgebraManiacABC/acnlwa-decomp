/**
 * FUN_001ff500.c
 * Source line: 260593
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_001ff500(int *param_1)

{
  if (param_1[0x3e] != 0) {
    if ((char)param_1[0x3f] == '\0') {
      FUN_002b6cac(param_1,param_1 + 0x38);
    }
    else {
      FUN_002b6af8(0,param_1,param_1 + 0x38);
    }
    (**(code **)(*(int *)param_1[7] + 0xc))();
    FUN_002b6a3c(param_1,param_1 + 0x38);
  }
          // WARNING: Could not recover jumptable at 0x001ff564. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x1c))(param_1,0);
  return;
}
