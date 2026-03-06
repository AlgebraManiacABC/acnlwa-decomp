/**
 * FUN_003431b4.c
 * Source line: 440758
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_003431b4(int *param_1,uint param_2,uint param_3)

{
  if ((param_2 & param_3) != 0) {
    (**(code **)(*param_1 + 0x3c))(param_1);
  }
  *(char *)((int)param_1 + 0xd7) = (char)param_2;
  (**(code **)(*param_1 + 0x34))(param_1,param_1 + 8,param_2);
          // WARNING: Could not recover jumptable at 0x0034320c. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x34))(param_1,param_1 + 0x12,param_2);
  return;
}
