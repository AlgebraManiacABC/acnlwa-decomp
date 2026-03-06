/**
 * FUN_00762324.c
 * Source line: 1121326
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_00762324(int param_1,Item_t *param_2,undefined4 param_3,Item_t param_4)

{
  int iVar1;
  Item_t *pIVar2;
  undefined4 uVar3;
  Item_t IStack_10;
  
  IStack_10 = param_4;
  iVar1 = FUN_002fe8a8(*(undefined1 *)(param_1 + 0x1ac));
  uVar3 = 0;
  if (iVar1 != 0) {
    pIVar2 = Item_CopyAndReturn(&IStack_10,param_2);
    uVar3 = FUN_007701b8(iVar1 + 0x6c20,pIVar2);
  }
  return uVar3;
}
