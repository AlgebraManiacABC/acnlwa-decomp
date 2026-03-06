/**
 * FUN_005a50e0.c
 * Source line: 853270
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_005a50e0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  uVar1 = FUN_00754090(iVar2);
  if (param_2 != 0) {
    *(undefined4 *)(iVar2 + 4) = 5;
    FUN_005a5130(iVar2,uVar1 & 0xff | 0x80);
    return;
  }
  *(undefined4 *)(iVar2 + 4) = 4;
  *(uint *)(iVar2 + 0x30) = *(uint *)(iVar2 + 0x30) & 0xf0000fff | (uVar1 & 0x7f) << 0xc;
  return;
}
