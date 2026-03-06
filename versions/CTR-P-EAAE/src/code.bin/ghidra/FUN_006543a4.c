/**
 * FUN_006543a4.c
 * Source line: 964175
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_006543a4(int param_1)

{
  if (-1 < (int)((uint)*(byte *)(param_1 + 0x66) << 0x1a)) {
    FUN_00277e1c(param_1 + 0x5ec);
    *(byte *)(param_1 + 0x173) = *(byte *)(param_1 + 0x173) | 6;
    FUN_00659674(param_1 + 0x424,1);
    return;
  }
  return;
}
