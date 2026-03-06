/**
 * FUN_00735538.c
 * Source line: 1090773
 * Body lines: 4
 */
#include "../../../include/types.h"

uint FUN_00735538(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 4) + 8);
  return ((uVar1 >> 0x10) << 0x18 | (uVar1 >> 0x18) << 0x10) >> 0x10 |
         ((uVar1 & 0xff) << 8 | uVar1 >> 8 & 0xff) << 0x10;
}
