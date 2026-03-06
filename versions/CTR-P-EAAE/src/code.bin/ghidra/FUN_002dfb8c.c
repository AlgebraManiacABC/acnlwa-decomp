/**
 * FUN_002dfb8c.c
 * Source line: 377364
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_002dfb8c(int *param_1)

{
  if (*(char *)((int)param_1 + 0x181) == '\x01') {
    FUN_002b6cac(param_1,param_1 + 0x4c);
    FUN_002b6cac(param_1,param_1 + 0x56);
  }
  else {
    FUN_002b6cac(param_1,param_1 + 0x1c);
    FUN_002b6cac(param_1,param_1 + 0x26);
  }
          // WARNING: Could not recover jumptable at 0x002dfbc8. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x38))(param_1);
  return;
}
