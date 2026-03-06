/**
 * FUN_00700558.c
 * Source line: 1057211
 * Body lines: 15
 */
#include "../../../include/types.h"

float FUN_00700558(uint param_1,uint param_2)

{
  float fVar1;
  
  fVar1 = 1.0;
  if (param_2 < 0x53) {
    if (*(float *)(&UNK_008688c8 + param_2 * 0x50) != 0.0) {
      fVar1 = ((float)param_1 - (float)*(ushort *)(&UNK_008688c4 + param_2 * 0x50)) /
              (*(float *)(&UNK_008688c8 + param_2 * 0x50) * 10.0) + 1.0;
      if ((int)fVar1 < 0x3f333333) {
        fVar1 = 0.7;
      }
      else if (0x3fa66666 < (int)fVar1) {
        fVar1 = 1.3;
      }
    }
  }
  return fVar1;
}
