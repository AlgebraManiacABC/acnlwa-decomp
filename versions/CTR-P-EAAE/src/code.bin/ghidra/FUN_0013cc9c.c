/**
 * FUN_0013cc9c.c
 * Source line: 149486
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 * FUN_0013cc9c(int param_1)

{
  undefined4 *puVar1;
  
  FUN_00135748();
  puVar1 = *(undefined4 **)(param_1 + 0x24);
  if (puVar1 != NULL) {
    *(undefined4 *)(param_1 + 0x24) = *puVar1;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
      FUN_0013a768(puVar1,*(int *)(param_1 + 0x18) + (int)puVar1,0);
    }
  }
  FUN_001357ec(param_1 + 0x30);
  return puVar1;
}
