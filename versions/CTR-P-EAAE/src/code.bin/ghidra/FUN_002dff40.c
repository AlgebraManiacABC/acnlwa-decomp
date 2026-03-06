/**
 * FUN_002dff40.c
 * Source line: 377547
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_002dff40(int *param_1,uint param_2,uint param_3)

{
  if ((param_2 & param_3) != 0) {
    (**(code **)(*param_1 + 0x3c))(param_1);
  }
  *(char *)((int)param_1 + 0xd7) = (char)param_2;
  if ((char)param_1[0x60] != '\x01') {
    (**(code **)(*param_1 + 0x34))(param_1,param_1 + 8);
          // WARNING: Could not recover jumptable at 0x002dffa4. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0x34))(param_1,param_1 + 0x12,param_2);
    return;
  }
  (**(code **)(*param_1 + 0x34))(param_1,param_1 + 0x38,param_2);
          // WARNING: Could not recover jumptable at 0x002dffcc. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x34))(param_1,param_1 + 0x42,param_2);
  return;
}
