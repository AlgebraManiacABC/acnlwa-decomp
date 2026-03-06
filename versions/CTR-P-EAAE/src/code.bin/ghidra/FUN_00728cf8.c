/**
 * FUN_00728cf8.c
 * Source line: 1082013
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_00728cf8(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int extraout_r2;
  
  _ll_sdiv(CONCAT44(param_1[1] + 0x395f + (uint)(0x83037bff < *param_1),*param_1 + 0x7cfc8400),
           86400000);
  uVar1 = extraout_r2 / 60000;
  iVar2 = (int)((longlong)(int)uVar1 * -0x77777777 + ((ulonglong)uVar1 << 0x20) >> 0x20);
  return uVar1 + ((iVar2 >> 5) - (iVar2 >> 0x1f)) * -0x3c;
}
