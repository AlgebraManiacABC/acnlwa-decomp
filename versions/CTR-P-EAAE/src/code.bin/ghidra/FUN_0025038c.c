/**
 * FUN_0025038c.c
 * Source line: 302198
 * Body lines: 8
 */
#include "../../../include/types.h"

bool FUN_0025038c(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x44) == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 0xb0);
  }
  return iVar1 == param_2;
}
