/**
 * FUN_00751f40.c
 * Source line: 1108265
 * Body lines: 10
 */
#include "../../../include/types.h"

float FUN_00751f40(int param_1,undefined4 param_2,float *param_3,undefined4 param_4)

{
  float *pfVar1;
  
  pfVar1 = (float *)FUN_005c2ce0(param_2,param_4);
  if (param_3 == NULL) {
    param_3 = (float *)(param_1 + 0x14);
  }
  if (pfVar1 != NULL) {
    return SQRT((*param_3 - *pfVar1) * (*param_3 - *pfVar1) +
                (param_3[2] - pfVar1[2]) * (param_3[2] - pfVar1[2]));
  }
  return 5120.0;
}
