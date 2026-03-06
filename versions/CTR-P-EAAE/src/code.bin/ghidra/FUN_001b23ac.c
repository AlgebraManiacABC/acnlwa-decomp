/**
 * FUN_001b23ac.c
 * Source line: 219658
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_001b23ac(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00301d0c(param_1,Item_Clear,4,0x10);
  uVar2 = 0;
  do {
    Item_Copy((Item_t *)(iVar1 + uVar2 * 4),(Item_t *)&DAT_0095bfdc);
    uVar2 += 1;
  } while (uVar2 < 0x10);
  return iVar1;
}
