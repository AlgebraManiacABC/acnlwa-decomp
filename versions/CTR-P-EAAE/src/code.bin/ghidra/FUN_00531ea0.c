/**
 * FUN_00531ea0.c
 * Source line: 775173
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_00531ea0(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = FUN_007460e8(param_1 + 0x298);
  if (iVar1 != 0) {
    fVar2 = (float)FUN_007461b4(param_1 + 0x298);
    fVar3 = (float)FUN_007460b8(param_1 + 0x298);
    if ((fVar2 == fVar3) &&
       (fVar3 = *(float *)(*(int *)(param_1 + 0x2b4) + 0x14),
       fVar2 = (float)FUN_007460b8(param_1 + 0x298), fVar3 == fVar2)) {
      return 1;
    }
  }
  return 0;
}
