/**
 * FUN_00356298.c
 * Source line: 457272
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00356298(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_003619b0(0x120);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_0037e64c();
  }
  *(undefined4 *)(iVar2 + 4) = param_1;
  return;
}
