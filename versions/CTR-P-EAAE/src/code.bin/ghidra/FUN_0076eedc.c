/**
 * FUN_0076eedc.c
 * Source line: 1132111
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_0076eedc(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = 0;
  do {
    iVar1 = Item_IsNullItem((Item_t *)(param_1 + uVar2 * 4));
    if (iVar1 != 0) {
      iVar3 += 1;
    }
    uVar2 += 1;
  } while (uVar2 < 0xb4);
  return iVar3;
}
