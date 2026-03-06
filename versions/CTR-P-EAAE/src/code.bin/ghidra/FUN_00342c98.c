/**
 * FUN_00342c98.c
 * Source line: 440516
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00342c98(int param_1)

{
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  FUN_0032bcf8(param_1 + 0xc);
  if (*(char *)(param_1 + 0x7c) != '\0') {
    if (*(int *)(param_1 + 0x74) != 0) {
      FUN_00136e58(*(int *)(param_1 + 0x74),0,extraout_r2,extraout_r3,unaff_r4,unaff_lr);
    }
    *(undefined1 *)(param_1 + 0x7c) = 2;
  }
  return;
}
