/**
 * FUN_002e64bc.c
 * Source line: 381404
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_002e64bc(int param_1)

{
  int iVar1;
  
  FUN_002e6368();
  *(undefined1 *)(param_1 + 0x14) = 0;
  iVar1 = *(int *)(param_1 + 0xc);
  if ((iVar1 == 0) || (*(int *)(param_1 + 0x10) != *(int *)(iVar1 + 0xc))) {
    iVar1 = 0;
  }
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xf8) = 0;
  }
  return;
}
