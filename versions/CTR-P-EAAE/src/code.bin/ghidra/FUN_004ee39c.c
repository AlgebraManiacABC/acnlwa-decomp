/**
 * FUN_004ee39c.c
 * Source line: 736231
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_004ee39c(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 != NULL) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(int *)puVar1[1] + 0xc))((int *)puVar1[1],puVar1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}
