/**
 * FUN_00751d00.c
 * Source line: 1108128
 * Body lines: 9
 */
#include "../../../include/types.h"

float FUN_00751d00(int param_1)

{
  float fVar1;
  
  if (*(int *)(param_1 + 0x5f4) == 0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = (float)(longlong)(int)*(char *)(*(int *)(param_1 + 0x5f4) + 3) +
            *(float *)(param_1 + 0x18);
  }
  return fVar1;
}
