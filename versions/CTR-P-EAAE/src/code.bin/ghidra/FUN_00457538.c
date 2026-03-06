/**
 * FUN_00457538.c
 * Source line: 621445
 * Body lines: 10
 */
#include "../../../include/types.h"

int FUN_00457538(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 0x300) < 0x20) {
    *(undefined4 *)(param_1 + *(uint *)(param_1 + 0x300) * 0x18) = param_2;
    iVar1 = *(int *)(param_1 + 0x300);
    *(int *)(param_1 + 0x300) = iVar1 + 1;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}
