/**
 * FUN_00728bb8.c
 * Source line: 1081965
 * Body lines: 10
 */
#include "../../../include/types.h"

uint FUN_00728bb8(uint *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = _ll_sdiv(CONCAT44(param_1[1] + 0x395f + (uint)(0x83037bff < *param_1),
                            *param_1 + 0x7cfc8400),86400000);
  uVar1 = (int)lVar3 - 0xb2401;
  iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
  uVar1 = uVar1 + ((iVar2 >> 2) - (iVar2 >> 0x1f)) * -7 + 7;
  iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
  return ((iVar2 >> 2) - (iVar2 >> 0x1f)) * -7 + uVar1 & 0xff;
}
