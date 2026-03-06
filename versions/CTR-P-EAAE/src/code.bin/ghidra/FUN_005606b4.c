/**
 * FUN_005606b4.c
 * Source line: 805340
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_005606b4(int *param_1)

{
  (**(code **)(*param_1 + 0x3c))(param_1);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x10))(param_1,0);
  (**(code **)(*param_1 + 0x14))(param_1,0);
          // WARNING: Could not recover jumptable at 0x00560714. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x30))(param_1);
  return;
}
