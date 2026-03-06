/**
 * FUN_007e6f64.c
 * Source line: 1190198
 * Body lines: 5
 */
#include "../../../include/types.h"

float FUN_007e6f64(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007e6918();
  return *(float *)(param_1 + 0xc) +
         (float)((uint)*(byte *)(iVar1 + 1) + (*(byte *)(iVar1 + 2) & 0xf) * 0x100) *
         *(float *)(param_1 + 8);
}
