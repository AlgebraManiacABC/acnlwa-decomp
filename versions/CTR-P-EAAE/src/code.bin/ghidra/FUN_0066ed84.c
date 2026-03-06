/**
 * FUN_0066ed84.c
 * Source line: 977903
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0066ed84(int param_1,int param_2)

{
  if (param_2 != 0x48) {
    FUN_001d1cd0(0x3f800000,param_1 + 0x1b4);
  }
  *(byte *)(param_1 + 0x172) = *(byte *)(param_1 + 0x172) & 0xf7;
  return;
}
