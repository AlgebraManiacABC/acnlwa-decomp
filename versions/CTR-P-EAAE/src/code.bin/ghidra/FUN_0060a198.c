/**
 * FUN_0060a198.c
 * Source line: 923049
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0060a198(int param_1)

{
  int iVar1;
  
  FUN_005cd270(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = 0x28001800;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = FUN_00304640(param_1 + 0x28);
  if (iVar1 != 0) {
    FUN_0081c0a0(param_1);
  }
  return;
}
