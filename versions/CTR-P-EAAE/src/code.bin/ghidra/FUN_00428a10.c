/**
 * FUN_00428a10.c
 * Source line: 592354
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_00428a10(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 + *(int *)(param_1 + 0x5b8);
  if (uVar2 < 0x5b7) {
    iVar1 = param_1 + *(int *)(param_1 + 0x5b8);
    *(uint *)(param_1 + 0x5b8) = uVar2;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
