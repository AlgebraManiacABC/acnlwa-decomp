/**
 * FUN_00440748.c
 * Source line: 606430
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00440748(int *param_1)

{
  if ((char)param_1[0x10] == '\x01') {
    FUN_004261f4(param_1 + 0x10);
  }
  FUN_0042632c(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x15) = 0;
  (**(code **)(*param_1 + 0x10))(param_1);
          // WARNING: Could not recover jumptable at 0x00440794. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 8))(param_1,1);
  return;
}
