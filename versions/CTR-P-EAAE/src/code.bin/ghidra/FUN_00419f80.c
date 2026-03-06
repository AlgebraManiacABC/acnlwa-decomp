/**
 * FUN_00419f80.c
 * Source line: 584013
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_00419f80(int param_1,int param_2)

{
  if (param_2 != 0xff) {
    *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & ~(1 << (param_2 - 1U & 0xff));
  }
  return;
}
