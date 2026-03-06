/**
 * FUN_0075256c.c
 * Source line: 1108601
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_0075256c(float *param_1,int param_2)

{
  float fVar1;
  
  if (DAT_0094edd8 == 0) {
    return 0;
  }
  fVar1 = *(float *)(*(int *)(DAT_0094edd8 + 0x1a4) + 0x24);
  if ((fVar1 + *param_1 < *(float *)(param_2 + 0x14)) &&
     (*(float *)(param_2 + 0x14) < fVar1 + param_1[3])) {
    fVar1 = *(float *)(*(int *)(DAT_0094edd8 + 0x1a4) + 0x2c);
    if ((fVar1 + param_1[2] < *(float *)(param_2 + 0x1c)) &&
       (*(float *)(param_2 + 0x1c) < fVar1 + param_1[5])) {
      return 0;
    }
  }
  return 1;
}
