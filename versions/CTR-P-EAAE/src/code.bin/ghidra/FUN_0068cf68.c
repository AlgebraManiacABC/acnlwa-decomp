/**
 * FUN_0068cf68.c
 * Source line: 993222
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined1 * FUN_0068cf68(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  Item_t IStack_18;
  Item_t aIStack_14 [2];
  
  puVar1 = (undefined4 *)Item_Clear(&IStack_18);
  *puVar1 = *(undefined4 *)(param_2 + 0xe);
  puVar1 = (undefined4 *)Item_Clear(aIStack_14);
  *puVar1 = *(undefined4 *)(param_2 + 0x12);
  iVar2 = FUN_002fe8a8(param_1);
  if (iVar2 != 0) {
    Item_Copy((Item_t *)(iVar2 + 10),&IStack_18);
    Item_Copy((Item_t *)(iVar2 + 0xe),aIStack_14);
  }
  return (undefined1 *)&IStack_18;
}
