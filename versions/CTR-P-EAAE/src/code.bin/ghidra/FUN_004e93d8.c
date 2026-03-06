/**
 * FUN_004e93d8.c
 * Source line: 731179
 * Body lines: 13
 */
#include "../../../include/types.h"

uint FUN_004e93d8(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  Item_t *src;
  int iVar2;
  uint uVar3;
  Item_t IStack_14;
  
  uVar1 = FUN_006a5e34();
  src = (Item_t *)FUN_004e0cec(param_1,param_2,0,uVar1,0);
  Item_CopyAndReturn(&IStack_14,src);
  if ((param_3 == 0) && (iVar2 = FUN_00303acc(&IStack_14), iVar2 != 0)) {
    return 0;
  }
  uVar3 = FUN_00768d60(&IStack_14);
  return uVar3 ^ 1;
}
