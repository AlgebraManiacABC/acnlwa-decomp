/**
 * FUN_0060a1d4.c
 * Source line: 923066
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0060a1d4(int param_1)

{
  int iVar1;
  
  FUN_005cd270(param_1 + 0x28);
  *(undefined **)(param_1 + 0x30) = &UNK_00408802;
  *(undefined4 *)(param_1 + 0x34) = 0x10;
  iVar1 = FUN_00304640(param_1 + 0x28);
  if (iVar1 != 0) {
    FUN_0081c0a0(param_1);
  }
  return;
}
