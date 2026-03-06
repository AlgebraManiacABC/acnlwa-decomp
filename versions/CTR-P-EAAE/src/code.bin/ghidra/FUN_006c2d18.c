/**
 * FUN_006c2d18.c
 * Source line: 1022338
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_006c2d18(int param_1)

{
  *(undefined4 *)(param_1 + 0x668) = 0;
  if ((*(int *)(param_1 + 0x704) != 0) &&
     (*(int *)(param_1 + 0x708) == *(int *)(*(int *)(param_1 + 0x704) + 0xc))) {
    FUN_002e6368(param_1 + 0x6f8);
    return;
  }
  return;
}
