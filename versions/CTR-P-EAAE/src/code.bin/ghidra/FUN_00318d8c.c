/**
 * FUN_00318d8c.c
 * Source line: 419405
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_00318d8c(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < 3) {
    iVar1 = (int)*(char *)(param_1 + param_2 + 0x56);
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}
