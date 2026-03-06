/**
 * FUN_004c5444.c
 * Source line: 705720
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_004c5444(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (param_2 + 1) * (param_2 + 1);
  *(short *)(param_1 + 0x14) = (short)((iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1e)) * 0x4000 >> 0x10);
  return;
}
