/**
 * FUN_007e70a0.c
 * Source line: 1190235
 * Body lines: 3
 */
#include "../../../include/types.h"

float FUN_007e70a0(int param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_007e6b44();
  return *(float *)(param_1 + 0xc) + (float)(*puVar1 >> 0xc) * *(float *)(param_1 + 8);
}
