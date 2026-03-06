/**
 * FUN_0052c374.c
 * Source line: 771394
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0052c374(int param_1)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined1 *)(iVar1 + 0x18) = 0;
    *(undefined1 *)(iVar1 + 0x19) = 0xe;
    *(undefined1 *)(iVar1 + 0x1a) = 0;
    *(undefined1 *)(iVar1 + 0x1b) = 0;
    *(undefined1 *)(iVar1 + 0x1c) = 0;
  }
  FUN_00132478();
  return;
}
