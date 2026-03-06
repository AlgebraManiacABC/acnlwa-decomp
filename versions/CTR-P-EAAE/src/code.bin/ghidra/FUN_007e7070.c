/**
 * FUN_007e7070.c
 * Source line: 1190222
 * Body lines: 5
 */
#include "../../../include/types.h"

float FUN_007e7070(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007e6a8c();
  return *(float *)(param_1 + 0xc) +
         (float)((uint)*(byte *)(iVar1 + 1) + (uint)*(byte *)(iVar1 + 2) * 0x100) *
         *(float *)(param_1 + 8);
}
