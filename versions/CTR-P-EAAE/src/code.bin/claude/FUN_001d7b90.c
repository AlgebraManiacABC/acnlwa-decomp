/**
 * FUN_001d7b90.c
 * Source line: 240585
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_001d7b90(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x98) == param_2) {
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  return;
}
