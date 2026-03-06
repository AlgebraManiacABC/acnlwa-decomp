/**
 * FUN_007525fc.c
 * Source line: 1108623
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_007525fc(float *param_1,float *param_2)

{
  float fVar1;
  
  if (DAT_0094edd8 == 0) {
    return 0;
  }
  fVar1 = *(float *)(*(int *)(DAT_0094edd8 + 0x1a4) + 0x24);
  if ((fVar1 + *param_1 < *param_2) && (*param_2 < fVar1 + param_1[3])) {
    fVar1 = *(float *)(*(int *)(DAT_0094edd8 + 0x1a4) + 0x2c);
    if ((fVar1 + param_1[2] < param_2[2]) && (param_2[2] < fVar1 + param_1[5])) {
      return 0;
    }
  }
  return 1;
}
