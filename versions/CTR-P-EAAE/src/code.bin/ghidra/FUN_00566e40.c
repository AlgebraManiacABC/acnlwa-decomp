/**
 * FUN_00566e40.c
 * Source line: 808891
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00566e40(int *param_1)

{
  (**(code **)(*param_1 + 0x24))(param_1);
  if ((int *)param_1[0xd] != NULL) {
          // WARNING: Could not recover jumptable at 0x00566e70. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*(int *)param_1[0xd] + 0x10))();
    return;
  }
  return;
}
