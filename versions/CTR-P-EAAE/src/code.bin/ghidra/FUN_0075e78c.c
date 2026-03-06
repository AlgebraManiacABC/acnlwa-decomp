/**
 * FUN_0075e78c.c
 * Source line: 1118869
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_0075e78c(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < 4) {
    param_1 += param_2 * 4;
    iVar1 = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 4);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
