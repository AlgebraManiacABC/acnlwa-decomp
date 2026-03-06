/**
 * FUN_00419e14.c
 * Source line: 583951
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_00419e14(int param_1,int param_2,int param_3)

{
  if ((*(int *)(param_1 + 0x48) == param_3) && (param_2 != 0xff)) {
    *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & ~(1 << (param_2 - 1U & 0xff));
  }
  return;
}
