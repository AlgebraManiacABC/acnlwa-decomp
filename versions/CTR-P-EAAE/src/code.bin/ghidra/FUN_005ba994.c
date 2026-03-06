/**
 * FUN_005ba994.c
 * Source line: 866944
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_005ba994(int param_1,undefined4 param_2)

{
  FUN_005cdf48(param_1,param_2,0xffffffff,0x7fffffff);
  *(undefined1 *)(param_1 + 8) = 0x21;
  FUN_00303cdc(param_1);
  *(undefined1 *)(param_1 + 9) = 0xff;
  *(undefined1 *)(param_1 + 10) = 9;
  *(undefined1 *)(param_1 + 8) = 0x21;
  FUN_00303cdc(param_1);
  *(undefined1 *)(param_1 + 9) = 0xff;
  *(undefined1 *)(param_1 + 10) = 9;
  FUN_003084d0(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0x3d) = 0xff;
  *(undefined1 *)(param_1 + 0x3c) = 0xff;
  *(undefined1 *)(param_1 + 0x3e) = 0xe;
  return param_1;
}
