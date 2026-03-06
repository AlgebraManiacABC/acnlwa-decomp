/**
 * FUN_00615b2c.c
 * Source line: 928105
 * Body lines: 15
 */
#include "../../../include/types.h"

float FUN_00615b2c(int param_1,uint param_2)

{
  float fVar1;
  
  fVar1 = 1.0;
  if (param_2 < 0x6b) {
    if ((float)(longlong)*(int *)(&UNK_0086a2f0 + param_2 * 0x4c) != 0.0) {
      fVar1 = (float)(longlong)(int)(param_1 - (*(uint *)(&UNK_0086a2ec + param_2 * 0x4c) & 0xffff))
              / ((float)(longlong)*(int *)(&UNK_0086a2f0 + param_2 * 0x4c) * 10.0) + 1.0;
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
