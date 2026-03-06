/**
 * FUN_00307fdc.c
 * Source line: 406102
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00307fdc(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if ((iVar1 == 0) || (*(int *)(param_1 + 0x10) != *(int *)(iVar1 + 0xc))) {
    iVar1 = 0;
  }
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xf8) = param_2;
  }
  return;
}
