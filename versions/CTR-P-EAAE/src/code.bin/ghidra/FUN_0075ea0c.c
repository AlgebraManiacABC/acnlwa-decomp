/**
 * FUN_0075ea0c.c
 * Source line: 1119121
 * Body lines: 7
 */
#include "../../../include/types.h"

int FUN_0075ea0c(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (((param_2 < 4) && (*(char *)(param_1 + param_2 + 0x14) != '\0')) &&
     (iVar1 = *(int *)(param_1 + param_2 * 4 + 4), iVar1 != 0)) {
    iVar1 += 2;
  }
  return iVar1;
}
