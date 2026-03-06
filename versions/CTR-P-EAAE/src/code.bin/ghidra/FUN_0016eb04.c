/**
 * FUN_0016eb04.c
 * Source line: 186045
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0016eb04(Item_t *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = Item_IsID(param_1,(uint)*(ushort *)(&UNK_008800b8 + iVar2 * 2));
    if (iVar1 != 0) {
      return 1;
    }
    iVar2 += 1;
  } while (iVar2 < 6);
  return 0;
}
