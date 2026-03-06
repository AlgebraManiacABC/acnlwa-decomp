/**
 * FUN_005bbd70.c
 * Source line: 867513
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_005bbd70(int param_1,uint param_2)

{
  if (param_2 < 3) {
    *(byte *)(param_1 + 0x5b) = *(byte *)(param_1 + 0x5b) | (byte)(1 << (param_2 & 0xff));
  }
  return;
}
