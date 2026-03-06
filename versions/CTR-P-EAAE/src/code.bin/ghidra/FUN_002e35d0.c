/**
 * FUN_002e35d0.c
 * Source line: 379458
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_002e35d0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x298) != 0) {
    FUN_004b9b64(param_1 + 0x134,param_1 + 0x280);
    if (param_2 == 0) {
      FUN_00569508(param_1 + 0x280);
    }
    else {
      FUN_005697e0(0,param_1 + 0x280);
    }
          // WARNING: Subroutine does not return
    FUN_00568c10(param_1 + 0x134);
  }
  *(byte *)(param_1 + 0xd9) = (byte)param_2 ^ 1;
  *(byte *)(param_1 + 0x12d) = (byte)param_2 ^ 1;
  return;
}
