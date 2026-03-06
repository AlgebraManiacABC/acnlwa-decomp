/**
 * FUN_006ad3a0.c
 * Source line: 1008013
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_006ad3a0(undefined4 param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  
  if (param_2 != 0) {
    fVar1 = (float)FUN_005e9e68(param_2,param_3);
    fVar2 = *(float *)(param_2 + 0xe4);
    fVar1 = fVar2 * fVar1;
    *(byte *)(param_2 + 0xfe) = *(byte *)(param_2 + 0xfe) | fVar2 != fVar1;
    if (fVar2 != fVar1) {
      *(float *)(param_2 + 0xe4) = fVar1;
      *(undefined4 *)(param_2 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
    }
  }
  return;
}
