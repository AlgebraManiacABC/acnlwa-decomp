/**
 * FUN_00420750.c
 * Source line: 587232
 * Body lines: 6
 */
#include "../../../include/types.h"

uint FUN_00420750(int param_1)

{
  uint unaff_r4;
  
  (**(code **)(*piRam00974a50 + 4))();
  *(char **)(param_1 + 0x2c) = "LocalMatchCreateSessionJob::DestroyLocalNetwork";
  *(code **)(param_1 + 0x24) = FUN_004209a8;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return unaff_r4 & 0xff00;
}
