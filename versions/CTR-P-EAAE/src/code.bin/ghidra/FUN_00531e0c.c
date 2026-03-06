/**
 * FUN_00531e0c.c
 * Source line: 775135
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_00531e0c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = FUN_007460e8(param_1 + 0x298);
  if (((iVar1 == 0) || (fVar3 = (float)FUN_007461b4(param_1 + 0x298), fVar3 != 0.0)) ||
     (fVar4 = *(float *)(*(int *)(param_1 + 0x2b4) + 0x14),
     fVar3 = (float)FUN_007460b8(param_1 + 0x298), fVar4 != fVar3)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
