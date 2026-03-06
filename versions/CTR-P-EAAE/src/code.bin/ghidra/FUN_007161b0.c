/**
 * FUN_007161b0.c
 * Source line: 1070325
 * Body lines: 14
 */
#include "../../../include/types.h"

Item_t * FUN_007161b0(Item_t *param_1,int param_2,undefined4 param_3,Item_t param_4)

{
  uint uVar1;
  uint uVar2;
  Item_t *pIVar3;
  Item_t local_10;
  
  uVar1 = *(byte *)(param_2 + 0xc) & 7;
  uVar2 = uVar1 * 5 + ((*(byte *)(param_2 + 0xc) & 0x38) >> 3);
  local_10 = param_4;
  if ((uVar1 == 4) && (uVar2 -= 5, 0x13 < uVar2)) {
    pIVar3 = (Item_t *)Item_Set(param_1,0x7ffe);
    return pIVar3;
  }
  Item_Set(&local_10,(uint)*(ushort *)(&UNK_0088ef8a + uVar2 * 8));
  Item_CopyAndReturn(param_1,&local_10);
  return &local_10;
}
