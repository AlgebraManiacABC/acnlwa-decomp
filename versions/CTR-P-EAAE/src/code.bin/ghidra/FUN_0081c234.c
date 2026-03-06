/**
 * FUN_0081c234.c
 * Source line: 1227810
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0081c234(int param_1)

{
  int iVar1;
  
  FUN_005cd270(param_1 + 0x28);
  *(undefined **)(param_1 + 0x30) = &DAT_00400002;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = FUN_00304640(param_1 + 0x28);
  if (iVar1 != 0) {
    FUN_0081c0a0(param_1);
  }
  return;
}
