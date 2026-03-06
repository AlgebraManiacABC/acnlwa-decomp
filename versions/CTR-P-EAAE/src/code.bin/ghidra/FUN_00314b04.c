/**
 * FUN_00314b04.c
 * Source line: 416790
 * Body lines: 13
 */
#include "../../../include/types.h"

uint FUN_00314b04(int *param_1,int *param_2)

{
  uint uVar1;
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
  return uVar1 ^ 1;
}
