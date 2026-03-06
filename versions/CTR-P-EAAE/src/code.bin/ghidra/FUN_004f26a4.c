/**
 * FUN_004f26a4.c
 * Source line: 740136
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_004f26a4(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[2];
  if (puVar1 != NULL) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(int *)puVar1[1] + 0xc))((int *)puVar1[1],puVar1);
    param_1[2] = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2,0);
  FUN_004ee958(param_1,param_2);
          // WARNING: Could not recover jumptable at 0x004f2720. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x1c))(param_1);
  return;
}
