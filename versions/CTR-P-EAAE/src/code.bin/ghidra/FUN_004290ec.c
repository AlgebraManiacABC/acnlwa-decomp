/**
 * FUN_004290ec.c
 * Source line: 592758
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_004290ec(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  puVar1 = *(undefined4 **)(param_1 + 0x54);
  while (puVar1 != (undefined4 *)(param_1 + 0x50)) {
    puVar2 = (undefined4 *)puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_00429000(param_1 + 0x5c,param_1 + 0x60,*(int *)(param_1 + 0x6c) + (int)puVar1);
    puVar1 = puVar2;
  }
  *(int *)(param_1 + 0x50) = param_1 + 0x50;
  *(int *)(param_1 + 0x54) = param_1 + 0x50;
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}
