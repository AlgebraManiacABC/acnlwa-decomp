/**
 * FUN_0067a484.c
 * Source line: 983842
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0067a484(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  bool bVar3;
  
  FUN_0068db1c(0,0x3f800000,0x40a00000,0x40c00000,0x40c00000,param_1,0x5e,1,0,1);
  bVar3 = (int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0;
  iVar2 = 0;
  if (bVar3) {
    iVar2 = *(int *)(param_1 + 0x844);
  }
  if (bVar3 && iVar2 != -1) {
    uVar1 = FUN_0059ec30();
    *(undefined1 *)(param_1 + 0x8d1) = uVar1;
  }
  return;
}
