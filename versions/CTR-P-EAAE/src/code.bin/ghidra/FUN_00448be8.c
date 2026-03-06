/**
 * FUN_00448be8.c
 * Source line: 610392
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00448be8(void)

{
  undefined4 *puVar1;
  
  for (puVar1 = (undefined4 *)(iRam00974a6c + 0x3c);
      puVar1 != (undefined4 *)(iRam00974a6c + *(int *)(iRam00974a6c + 0x38) * 4 + 0x3c);
      puVar1 = puVar1 + 1) {
    FUN_0045edb0(*puVar1);
  }
  return;
}
