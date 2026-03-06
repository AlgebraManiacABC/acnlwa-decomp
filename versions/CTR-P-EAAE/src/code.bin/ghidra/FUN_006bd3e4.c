/**
 * FUN_006bd3e4.c
 * Source line: 1019269
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_006bd3e4(int param_1,Item_t *param_2,undefined2 param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    uVar1 = Item_IsValidID((Item_t *)(param_1 + iVar2 * 6 + 0xa468));
    if (uVar1 == 0) {
      param_1 += iVar2 * 6;
      Item_Copy((Item_t *)(param_1 + 0xa468),param_2);
      *(undefined2 *)(param_1 + 0xa46c) = param_3;
      return;
    }
    iVar2 += 1;
  } while (iVar2 < 3);
  return;
}
