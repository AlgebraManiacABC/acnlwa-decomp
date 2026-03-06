/**
 * FUN_001d9cdc.c
 * Source line: 241843
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_001d9cdc(int param_1,uint param_2)

{
  if (param_2 < 3) {
    *(uint *)(param_1 + 0x80) = param_2;
  }
  return;
}
