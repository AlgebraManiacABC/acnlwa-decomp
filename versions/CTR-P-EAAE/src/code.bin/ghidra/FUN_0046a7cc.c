/**
 * FUN_0046a7cc.c
 * Source line: 636517
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_0046a7cc(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != 0) {
    param_4 = *(int *)(param_1 + 0x10);
  }
  if ((iVar2 != 0 && param_4 != 0) && (param_2 < *(ushort *)(param_1 + 4))) {
    uVar1 = *(undefined4 *)(iVar2 + param_2 * 4);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}
