/**
 * FUN_0010c6e4.c
 * Source line: 110164
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_0010c6e4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0030800c(param_1 + 0xb06,0x20);
  if ((iVar1 != 0) && (iVar1 = *(int *)(param_1 + 0xaa0), iVar1 != 0)) {
    FUN_00308198(iVar1,4);
    FUN_0030802c(iVar1,*(undefined1 *)(param_1 + 0x95e));
  }
  return 1;
}
