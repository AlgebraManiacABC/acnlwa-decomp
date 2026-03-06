/**
 * FUN_002e5f84.c
 * Source line: 381016
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_002e5f84(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if ((iVar1 == 0) || (*(int *)(param_1 + 0x10) != *(int *)(iVar1 + 0xc))) {
    iVar1 = 0;
  }
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1b4) = *param_2;
    *(undefined4 *)(iVar1 + 0x1b8) = param_2[1];
    *(undefined4 *)(iVar1 + 0x1bc) = param_2[2];
    *(undefined1 *)(iVar1 + 0x1cd) = 1;
  }
  return;
}
