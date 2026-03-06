/**
 * FUN_004f1164.c
 * Source line: 738771
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_004f1164(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (*(int *)(iVar2 + 0x150) != 0) {
    iVar1 = *(int *)(iVar2 + 0x28);
    iVar2 = *(int *)(iVar2 + 0x154);
    if (((-1 < iVar2) && (iVar2 < *(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc) >> 2)) &&
       (0 < *(int *)(iVar1 + 0x28))) {
      *(undefined4 *)(*(int *)(iVar1 + 0x1c) + iVar2 * *(int *)(iVar1 + 0x28) * 4) =
           *(undefined4 *)(param_2 + 8);
    }
  }
  return;
}
