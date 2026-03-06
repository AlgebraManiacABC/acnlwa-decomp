/**
 * FUN_0014dc0c.c
 * Source line: 162196
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0014dc0c(undefined4 param_1,uint param_2,code *param_3)

{
  int iStack_8;
  
  if ((param_2 & 0xfffffffe) != 0) {
    param_2 += 1;
  }
  (&iStack_8)[-param_2] = param_2 * 4;
  (*param_3)(param_1,&stack0xfffffffc + param_2 * -4);
          // WARNING: Could not recover jumptable at 0x0014dc34. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(&stack0xfffffffc + (&iStack_8)[-param_2] + param_2 * -4))();
  return;
}
