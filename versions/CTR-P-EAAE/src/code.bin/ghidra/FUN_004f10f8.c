/**
 * FUN_004f10f8.c
 * Source line: 738722
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_004f10f8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  if (*(int *)(iVar2 + 0x148) != 0) {
    iVar1 = *(int *)(iVar2 + 0x28);
    iVar2 = *(int *)(iVar2 + 0x14c);
    if (((-1 < iVar2) && (iVar2 < *(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc) >> 2)) &&
       (0 < *(int *)(iVar1 + 0x28))) {
      *(undefined4 *)(*(int *)(iVar1 + 0x1c) + iVar2 * *(int *)(iVar1 + 0x28) * 4) = 0;
    }
  }
  return;
}
