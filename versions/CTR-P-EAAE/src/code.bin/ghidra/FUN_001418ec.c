/**
 * FUN_001418ec.c
 * Source line: 154100
 * Body lines: 7
 */
#include "../../../include/types.h"

int FUN_001418ec(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(char *)(param_1 + 3) != '\0') {
    iVar1 = FUN_001416bc(*param_1);
    iVar1 = *(int *)(param_1[1] + param_2 * 0xc + 8) + iVar1 + 8;
  }
  return iVar1;
}
