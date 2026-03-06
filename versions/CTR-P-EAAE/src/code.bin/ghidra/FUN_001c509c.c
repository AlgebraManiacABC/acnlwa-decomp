/**
 * FUN_001c509c.c
 * Source line: 230572
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_001c509c(int *param_1)

{
  FUN_004b9b64(param_1 + 0xb,param_1 + 0x5e);
  FUN_005697e0(0,param_1 + 0x5e);
  *(undefined1 *)((int)param_1 + 0x14e) = 1;
  *(undefined1 *)(param_1 + 0x274) = 1;
          // WARNING: Could not recover jumptable at 0x001c50d8. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x4c))(param_1);
  return;
}
