/**
 * FUN_0020aec0.c
 * Source line: 267516
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0020aec0(int param_1)

{
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  FUN_00136cc8(param_1 + 0x44);
  if (*(char *)(param_1 + 0x34) != '\0') {
    FUN_001d7b90(DAT_0094d080 + 0x754,param_1,extraout_r2,extraout_r3,unaff_r4,unaff_lr);
    *(undefined1 *)(param_1 + 0x34) = 0;
  }
  return;
}
