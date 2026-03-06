/**
 * FUN_00540bd0.c
 * Source line: 785069
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00540bd0(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  while (1 < (int)uVar4) {
    uVar1 = FUN_0055cb58(param_2);
    iVar2 = (int)((ulonglong)uVar4 * (ulonglong)uVar1 >> 0x20);
    uVar1 = param_1[2];
    uVar4 -= 1;
    uVar3 = *(undefined4 *)(uVar1 + uVar4 * 4);
    *(undefined4 *)(uVar1 + uVar4 * 4) = *(undefined4 *)(uVar1 + iVar2 * 4);
    *(undefined4 *)(param_1[2] + iVar2 * 4) = uVar3;
  }
  return;
}
