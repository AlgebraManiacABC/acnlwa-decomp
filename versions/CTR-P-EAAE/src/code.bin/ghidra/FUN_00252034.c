/**
 * FUN_00252034.c
 * Source line: 303354
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_00252034(float param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  if ((*(char *)(param_2 + 0x11d1) == '\x02') &&
     (fVar1 = *param_3 - *(float *)(param_2 + 0x11b8),
     fVar2 = param_3[2] - *(float *)(param_2 + 0x11c0),
     fVar1 * fVar1 + fVar2 * fVar2 < param_1 * param_1)) {
    return 1;
  }
  return 0;
}
