/**
 * FUN_0068a94c.c
 * Source line: 992015
 * Body lines: 14
 */
#include "../../../include/types.h"

Item_t * FUN_0068a94c(undefined4 param_1,int param_2,undefined4 param_3,Item_t param_4)

{
  int iVar1;
  undefined4 *puVar2;
  Item_t *pIVar3;
  Item_t IStack_10;
  
  IStack_10 = param_4;
  iVar1 = FUN_002fe8a8();
  pIVar3 = NULL;
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)Item_Clear(&IStack_10);
    *puVar2 = *(undefined4 *)(param_2 + 0xe);
    Item_Copy((Item_t *)(iVar1 + 0x26),&IStack_10);
    pIVar3 = &IStack_10;
  }
  return pIVar3;
}
