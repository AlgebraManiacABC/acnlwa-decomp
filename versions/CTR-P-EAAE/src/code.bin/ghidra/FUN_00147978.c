/**
 * FUN_00147978.c
 * Source line: 160312
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_00147978(uint param_1)

{
  int iVar1;
  short sVar2;
  
  iVar1 = 0;
  if (param_1 != 0) {
    sVar2 = 0;
    for (; (param_1 & 0xffffff80) != 0; param_1 >>= 1) {
      sVar2 += 1;
    }
    iVar1 = (int)(short)(*(short *)(&UNK_008c576a + (short)param_1 * 2) + sVar2 * 0x400);
  }
  return iVar1;
}
