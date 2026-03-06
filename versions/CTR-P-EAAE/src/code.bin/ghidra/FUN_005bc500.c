/**
 * FUN_005bc500.c
 * Source line: 867764
 * Body lines: 6
 */
#include "../../../include/types.h"

int FUN_005bc500(int param_1,undefined4 param_2)

{
  FUN_005cdf48(param_1,param_2,0xffffffff,0x7fffffff);
  *(undefined1 *)(param_1 + 8) = 0x21;
  FUN_00303cdc(param_1);
  *(undefined1 *)(param_1 + 9) = 0xff;
  *(undefined1 *)(param_1 + 10) = 9;
  return param_1;
}
