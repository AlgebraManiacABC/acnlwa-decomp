/**
 * FUN_00213718.c
 * Source line: 272543
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00213718(int *param_1,int param_2)

{
  undefined1 auStack_4c [68];
  
  if (param_2 != 0) {
    param_1[0x10c] = param_2;
    FUN_00312bd0(auStack_4c);
    FUN_00312c4c(auStack_4c,param_1[0x10c],10,10,4);
    FUN_005e2e50(param_1 + 0x10e,auStack_4c);
    FUN_005e2f94(param_1 + 0x10e);
    FUN_00312cb0(auStack_4c);
    return;
  }
          // WARNING: Could not recover jumptable at 0x00213790. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x14))();
  return;
}
