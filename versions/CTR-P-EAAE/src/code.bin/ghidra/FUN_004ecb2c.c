/**
 * FUN_004ecb2c.c
 * Source line: 734090
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_004ecb2c(int param_1)

{
  undefined4 *puVar1;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != NULL) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(int *)puVar1[1] + 0xc))((int *)puVar1[1],puVar1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  FUN_002f747c(param_1 + 0xc);
  return;
}
