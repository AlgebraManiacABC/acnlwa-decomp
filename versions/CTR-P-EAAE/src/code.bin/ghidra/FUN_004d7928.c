/**
 * FUN_004d7928.c
 * Source line: 719655
 * Body lines: 6
 */
#include "../../../include/types.h"

int FUN_004d7928(int param_1,int param_2,undefined4 param_3)

{
  FUN_00148790(param_1 + 0x34,param_3);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x34) = 0x13f02c1;
  *(undefined4 *)(param_1 + 0x84) = 0;
  __rt_memcpy_w(param_2,param_1 + 0x28,0x60);
  return param_2 + 0x60;
}
