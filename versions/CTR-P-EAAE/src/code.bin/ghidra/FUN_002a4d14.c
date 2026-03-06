/**
 * FUN_002a4d14.c
 * Source line: 345645
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_002a4d14(int *param_1)

{
  undefined2 uVar1;
  
  uVar1 = (**(code **)(*(int *)(*param_1 + 500) + 0xc))();
  *(undefined2 *)(param_1 + 0x153) = uVar1;
  *(undefined2 *)((int)param_1 + 0x54e) = 0;
  *(undefined1 *)(param_1 + 0x14d) = 0;
  return;
}
