/**
 * FUN_007e6f98.c
 * Source line: 1190211
 * Body lines: 3
 */
#include "../../../include/types.h"

float FUN_007e6f98(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007e69c8();
  return *(float *)(param_1 + 0xc) + (float)*(ushort *)(iVar1 + 2) * *(float *)(param_1 + 8);
}
