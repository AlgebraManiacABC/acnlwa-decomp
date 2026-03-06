/**
 * FUN_005697f8.c
 * Source line: 811111
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_005697f8(undefined4 param_1,undefined4 param_2,float param_3,int param_4,undefined1 param_5
                 )

{
  *(undefined4 *)(param_4 + 4) = param_1;
  if (param_3 < 0.0) {
    param_3 = 0.0;
  }
  *(float *)(param_4 + 8) = param_3;
  *(undefined4 *)(param_4 + 0x10) = param_2;
  *(undefined1 *)(param_4 + 0x14) = param_5;
  *(float *)(param_4 + 0xc) = param_3;
  if (*(int *)(param_4 + 0x18) != 0) {
    *(undefined4 *)(*(int *)(param_4 + 0x18) + 0x10) = *(undefined4 *)(param_4 + 8);
  }
  return;
}
