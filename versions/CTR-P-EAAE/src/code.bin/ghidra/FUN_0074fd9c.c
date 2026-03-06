/**
 * FUN_0074fd9c.c
 * Source line: 1106522
 * Body lines: 11
 */
#include "../../../include/types.h"

float FUN_0074fd9c(int param_1)

{
  float fVar1;
  
  if ((*(byte *)(param_1 + 0x14) & 2) == 0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = *(float *)(param_1 + 4);
    if ((*(byte *)(param_1 + 0x14) & 1) != 0) {
      fVar1 = fVar1 - 1.0;
    }
  }
  return fVar1;
}
