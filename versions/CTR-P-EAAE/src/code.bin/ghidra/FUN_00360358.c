/**
 * FUN_00360358.c
 * Source line: 465047
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00360358(undefined4 param_1,int *param_2)

{
  if (param_2[0x24] != 0) {
    switchD_001d462c::caseD_3(param_2[0x24],0);
    FUN_003d46dc(param_2[0x24],0);
    switchD_001d462c::caseD_3(param_2,0);
    FUN_003d46dc(param_2,0);
    *(undefined4 *)(param_2[0x24] + 0x74) = 0;
    FUN_003d47a8(param_2[0x24]);
    param_2[0x24] = 0;
  }
  if (param_2 != NULL) {
          // WARNING: Could not recover jumptable at 0x003603cc. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*param_2 + 4))(param_2);
    return;
  }
  return;
}
