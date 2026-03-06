/**
 * FUN_00311744.c
 * Source line: 414793
 * Body lines: 12
 */
#include "../../../include/types.h"

int FUN_00311744(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    param_3 = 399;
  }
  if (iVar1 == 0 || param_3 <= param_2) {
    iVar1 = 0;
  }
  else {
    iVar1 += param_2 * 0x58;
  }
  return iVar1;
}
