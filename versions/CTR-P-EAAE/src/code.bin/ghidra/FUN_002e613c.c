/**
 * FUN_002e613c.c
 * Source line: 381140
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_002e613c(int param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if ((iVar1 == 0) || (*(int *)(param_1 + 0x10) != *(int *)(iVar1 + 0xc))) {
    iVar1 = 0;
  }
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x1ce) = param_2;
  }
  return;
}
