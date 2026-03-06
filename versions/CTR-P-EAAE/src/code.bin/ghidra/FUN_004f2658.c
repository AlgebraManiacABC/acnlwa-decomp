/**
 * FUN_004f2658.c
 * Source line: 740119
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_004f2658(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != NULL) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(int *)puVar1[1] + 0xc))((int *)puVar1[1],puVar1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  FUN_002f747c(param_1 + 0xc);
  return;
}
