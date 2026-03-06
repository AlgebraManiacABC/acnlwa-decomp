/**
 * FUN_003113b8.c
 * Source line: 414606
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_003113b8(int param_1,undefined4 param_2)

{
  FUN_005cdf48(param_1 + 0x16,param_2,0xffffffff,0x7fffffff);
  *(undefined1 *)(param_1 + 0x1e) = 0x21;
  FUN_00303cdc(param_1 + 0x16);
  *(undefined1 *)(param_1 + 0x1f) = 0xff;
  *(undefined1 *)(param_1 + 0x20) = 9;
  *(undefined1 *)(param_1 + 0x1e) = 0x21;
  FUN_00303cdc(param_1 + 0x16);
  *(undefined1 *)(param_1 + 0x1f) = 0xff;
  *(undefined1 *)(param_1 + 0x20) = 9;
  FUN_0027a48c(param_1);
  *(undefined1 *)(param_1 + 0x21) = 0xff;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  return param_1;
}
