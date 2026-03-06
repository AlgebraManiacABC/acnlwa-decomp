/**
 * FUN_005c7258.c
 * Source line: 876121
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_005c7258(undefined4 param_1,undefined4 param_2,undefined4 param_3,Item_t param_4)

{
  int iVar1;
  undefined4 uVar2;
  Item_t IStack_18;
  
  uVar2 = 0;
  if (_DAT_00aaf14c != 0) {
    IStack_18 = param_4;
    Item_Set(&IStack_18,0x33aa);
    FUN_006bb91c(&IStack_18,param_1);
    iVar1 = FUN_005c33d0(4,0);
    uVar2 = 0;
    if ((iVar1 != 0) && (-1 < (int)((uint)*(byte *)(iVar1 + 0x8c5) << 0x1a))) {
      uVar2 = FUN_00660d14(iVar1,&IStack_18,0);
    }
  }
  return uVar2;
}
