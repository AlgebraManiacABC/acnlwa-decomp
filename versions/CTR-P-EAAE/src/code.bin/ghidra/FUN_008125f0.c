/**
 * FUN_008125f0.c
 * Source line: 1221702
 * Body lines: 3
 */
#include "../../../include/types.h"

undefined8 FUN_008125f0(float param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = (float)__hardfp_cosf(*param_3 * param_1 * 6.2831855);
  return CONCAT44(fVar1 * param_3[1],param_1);
}
