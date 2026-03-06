/**
 * FUN_0068d064.c
 * Source line: 993266
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0068d064(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  iVar1 = FUN_005ce12c(param_1,0);
  if ((iVar1 != 2) || (fVar3 = (float)FUN_006c5ef8(param_1,0), fVar3 <= *(float *)(param_1 + 4))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
