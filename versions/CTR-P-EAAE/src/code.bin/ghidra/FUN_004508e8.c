/**
 * FUN_004508e8.c
 * Source line: 616602
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_004508e8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14);
  for (iVar1 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x14); iVar1 != (param_1 - iVar2) + 8;
      iVar1 = *(int *)(iVar1 + *(int *)(param_1 + 0x14) + 4) - *(int *)(param_1 + 0x14)) {
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}
