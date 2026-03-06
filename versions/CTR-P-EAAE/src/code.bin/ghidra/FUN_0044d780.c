/**
 * FUN_0044d780.c
 * Source line: 613880
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_0044d780(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_2 + param_1[1];
  uVar1 = *(uint *)*param_1;
  if ((int)uVar1 <= (int)uVar3) {
    uVar3 -= uVar1;
  }
  if (uVar3 < uVar1) {
    iVar2 = ((uint *)*param_1)[1] + uVar3 * 0x5ec;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}
