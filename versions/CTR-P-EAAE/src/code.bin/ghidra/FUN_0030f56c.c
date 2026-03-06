/**
 * FUN_0030f56c.c
 * Source line: 413460
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0030f56c(undefined2 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar2 = *(undefined1 *)((int)param_2 + 5);
  *param_1 = (short)*param_2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((int)param_1 + 3) = uVar2;
  return;
}
