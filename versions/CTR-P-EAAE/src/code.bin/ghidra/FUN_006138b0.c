/**
 * FUN_006138b0.c
 * Source line: 926636
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_006138b0(int param_1,int param_2,int param_3)

{
  if (param_2 != 0) {
    GET_DAT_0095bf74();
    return;
  }
  if ((param_3 != 0) && (DAT_009502f5 != '\0')) {
    *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 0x1c;
    FUN_002fb94c();
    return;
  }
  uRam009502f4 = 0;
  DAT_009502f5 = 0;
  return;
}
