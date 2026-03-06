/**
 * FUN_007200fc.c
 * Source line: 1077347
 * Body lines: 11
 */
#include "../../../include/types.h"

uint FUN_007200fc(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = Item_IsNullItem((Item_t *)(param_1 + (uVar2 + param_2 * 10) * 4));
    if (iVar1 != 0) {
      return uVar2;
    }
    uVar2 += 1;
  } while (uVar2 < 10);
  return 0xffffffff;
}
