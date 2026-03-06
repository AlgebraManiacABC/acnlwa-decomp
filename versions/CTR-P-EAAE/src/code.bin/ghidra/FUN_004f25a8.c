/**
 * FUN_004f25a8.c
 * Source line: 740064
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_004f25a8(int param_1)

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
