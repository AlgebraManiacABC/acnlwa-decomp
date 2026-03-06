/**
 * thunk_FUN_006bd3b8.c
 * Source line: 411918
 * Body lines: 10
 */
#include "../../../include/types.h"

void thunk_FUN_006bd3b8(int param_1,int param_2)

{
  if (0 < param_2) {
    param_2 += (uint)*(ushort *)(param_1 + 0x8f28);
    if (param_2 < 0xffff) {
      *(short *)(param_1 + 0x8f28) = (short)param_2;
    }
    else {
      *(undefined2 *)(param_1 + 0x8f28) = 0xffff;
    }
  }
  return;
}
