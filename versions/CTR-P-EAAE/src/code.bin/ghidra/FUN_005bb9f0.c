/**
 * FUN_005bb9f0.c
 * Source line: 867364
 * Body lines: 12
 */
#include "../../../include/types.h"

int FUN_005bb9f0(int param_1,undefined4 param_2)

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
  *(undefined1 *)(param_1 + 0xb) = 0xff;
  *(undefined1 *)(param_1 + 0xc) = 0xff;
  return param_1;
}
