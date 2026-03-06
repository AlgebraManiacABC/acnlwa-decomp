/**
 * FUN_0042b9d8.c
 * Source line: 594241
 * Body lines: 6
 */
#include "../../../include/types.h"

uint FUN_0042b9d8(int param_1)

{
  uint unaff_r5;
  
  FUN_0044966c(uRam0097d428,param_1 + 0x88);
  *(undefined **)(param_1 + 0x24) = &UNK_00429c0c;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "JoinMeshJob::WaitLeaveMesh";
  return unaff_r5 & 0xff00 | 5;
}
