/**
 * FUN_00574730.c
 * Source line: 818984
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00574730(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  if (param_4 < 2) {
    FUN_004ef9a4(param_2 + 0x2c8);
    FUN_004ee904(param_2 + 0x2c8,param_4);
    FUN_004ee9a8(param_1,param_2 + 0x2c8);
    FUN_004ee9cc(*(undefined4 *)(param_3 + 0x14),param_2 + 0x2c8);
  }
  *(undefined1 *)(param_2 + 0x30e) = 1;
  return;
}
