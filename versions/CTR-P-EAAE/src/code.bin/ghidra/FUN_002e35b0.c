/**
 * FUN_002e35b0.c
 * Source line: 379436
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_002e35b0(int param_1,int param_2,int param_3)

{
  param_1 += (param_2 - *(int *)(param_1 + 0xc)) * 0x2b4;
  if (*(int *)(param_1 + 0x66c) != 0) {
    FUN_004b9b64(param_1 + 0x508,param_1 + 0x654);
    if (param_3 == 0) {
      FUN_00569508(param_1 + 0x654);
    }
    else {
      FUN_005697e0(0,param_1 + 0x654);
    }
          // WARNING: Subroutine does not return
    FUN_00568c10(param_1 + 0x508);
  }
  *(byte *)(param_1 + 0x4ad) = (byte)param_3 ^ 1;
  *(byte *)(param_1 + 0x501) = (byte)param_3 ^ 1;
  return;
}
