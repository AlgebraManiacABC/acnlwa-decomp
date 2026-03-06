/**
 * FUN_005c5290.c
 * Source line: 874605
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_005c5290(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  Item_t aIStack_18 [2];
  
  iVar1 = FUN_005c33d0(4,0);
  if ((iVar1 != 0) && (-1 < (int)((uint)*(byte *)(iVar1 + 0x8c5) << 0x1a))) {
    Item_Clear(aIStack_18);
    FUN_006bbbd8(aIStack_18,param_1);
    uVar2 = FUN_006839a8(iVar1,0xffffffff,0xffffffff,0xffffffff,aIStack_18,param_2);
    return uVar2;
  }
  return 0;
}
