/**
 * FUN_006958c4.c
 * Source line: 999075
 * Body lines: 4
 */
#include "../../../include/types.h"

bool FUN_006958c4(int param_1,int param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0xf114) + *(float *)(param_2 + 0x18);
  *(float *)(param_1 + 0xf114) = fVar1;
  return 0x41400000 < (int)fVar1;
}
