/**
 * FUN_006e0fec.c
 * Source line: 1040327
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_006e0fec(int param_1)

{
  float fVar1;
  
  fVar1 = (float)(longlong)((int)*(float *)(param_1 + 0x14) % 0x96) * 0.006666667;
  *(float *)(param_1 + 0x18) = fVar1;
  fVar1 = (float)__hardfp_cosf(fVar1 * 6.2831855);
  *(float *)(param_1 + 0x18) = (fVar1 + 1.0) * 0.5;
  return 2;
}
