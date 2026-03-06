/**
 * FUN_0060a20c.c
 * Source line: 923083
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0060a20c(int param_1)

{
  if (DAT_0095262c != 0) {
    FUN_002cd640(&DAT_009b3ac0,0,0);
    FUN_002cd508(&DAT_009b3ac0);
    FUN_0081c0a0(param_1);
    return;
  }
  *(code **)(param_1 + 0xc) = FUN_00609f5c;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}
