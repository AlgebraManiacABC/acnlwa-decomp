/**
 * FUN_003e6e00.c
 * Source line: 559638
 * Body lines: 13
 */
#include "../../../include/types.h"

uint FUN_003e6e00(int param_1)

{
  uint uVar1;
  uint unaff_r5;
  
  uVar1 = FUN_003e2a88(*(undefined4 *)(param_1 + 0x44));
  if ((uVar1 & 0x80000000) == 0) {
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  *(char **)(param_1 + 0x2c) = "NatDetectionJob::StepComplete";
  *(undefined **)(param_1 + 0x24) = &UNK_003e6bcc;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return unaff_r5 & 0xff00 | 6;
}
