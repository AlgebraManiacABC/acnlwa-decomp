/**
 * FUN_0076efc8.c
 * Source line: 1132182
 * Body lines: 11
 */
#include "../../../include/types.h"

uint FUN_0076efc8(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = Item_IsNullItem((Item_t *)(param_1 + (uVar2 + (param_2 * 9 + param_3) * 10) * 4));
    if (iVar1 != 0) {
      return uVar2;
    }
    uVar2 += 1;
  } while (uVar2 < 10);
  return 0xffffffff;
}
