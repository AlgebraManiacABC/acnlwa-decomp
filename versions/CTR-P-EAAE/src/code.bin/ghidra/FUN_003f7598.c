/**
 * FUN_003f7598.c
 * Source line: 564960
 * Body lines: 15
 */
#include "../../../include/types.h"

uint FUN_003f7598(undefined1 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r4;
  uint unaff_r5;
  uint unaff_r7;
  int unaff_r10;
  
  *(undefined1 *)(unaff_r4 + 0xc0) = param_1;
  *(undefined4 *)(unaff_r4 + 0x178) = 0xd8a14825;
  FUN_00432974();
  uVar1 = *(undefined4 *)(unaff_r10 + 0x10);
  uVar2 = *(undefined4 *)(unaff_r10 + 0x14);
  *(char **)(unaff_r4 + 0x2c) = "NexJointSessionJob::ProcessFailure";
  *(undefined4 *)(unaff_r4 + 0x24) = uVar1;
  *(undefined4 *)(unaff_r4 + 0x28) = uVar2;
  return (unaff_r5 & 0xffffff00 | unaff_r7) & 0xffff | unaff_r7 << 0x10;
}
