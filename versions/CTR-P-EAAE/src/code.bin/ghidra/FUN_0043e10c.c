/**
 * FUN_0043e10c.c
 * Source line: 605041
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0043e10c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  while (puVar1 != (undefined4 *)(param_1 + 8)) {
    puVar2 = (undefined4 *)puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_00429000(param_1 + 0x14,param_1 + 0x18,*(int *)(param_1 + 0x24) + (int)puVar1);
    puVar1 = puVar2;
  }
  FUN_00429150(param_1 + 4);
  return;
}
