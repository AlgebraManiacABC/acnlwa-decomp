/**
 * FUN_005bd3fc.c
 * Source line: 868322
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_005bd3fc(int param_1,undefined4 param_2)

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
  *(undefined2 *)(param_1 + 0xc) = 0x7ffe;
  *(undefined1 *)(param_1 + 0xe) = 4;
  *(undefined1 *)(param_1 + 0xf) = 0xff;
  return param_1;
}
