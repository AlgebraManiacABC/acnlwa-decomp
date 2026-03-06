/**
 * FUN_0036ed0c.c
 * Source line: 476238
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0036ed0c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0036cf38();
  if ((iVar1 != 0) && (iVar1 = FUN_00382f30(param_1,param_1 + 0x10), iVar1 != 0)) {
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  return;
}
