/**
 * FUN_0070d83c.c
 * Source line: 1065139
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_0070d83c(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1[1] != 0) {
    iVar2 = param_2[1];
  }
  if ((param_1[1] != 0 && iVar2 != 0) && (*param_1 == *param_2)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
