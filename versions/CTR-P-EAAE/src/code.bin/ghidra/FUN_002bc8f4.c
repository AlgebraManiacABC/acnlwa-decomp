/**
 * FUN_002bc8f4.c
 * Source line: 358003
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_002bc8f4(int *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = __aeabi_idivmod(param_2,param_1[5]);
          // WARNING: Could not recover jumptable at 0x002bc91c. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 4))(param_1,(int)((ulonglong)uVar1 >> 0x20),(int)uVar1);
  return;
}
