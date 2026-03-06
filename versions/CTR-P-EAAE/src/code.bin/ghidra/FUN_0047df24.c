/**
 * FUN_0047df24.c
 * Source line: 650657
 * Body lines: 4
 */
#include "../../../include/types.h"

float FUN_0047df24(uint param_1)

{
  int iVar1;
  
  iVar1 = (param_1 >> 8) * 0x10;
  return *(float *)(&UNK_008a13c4 + iVar1) +
         *(float *)(&UNK_008a13cc + iVar1) * (float)(param_1 & 0xff) * 0.00390625;
}
