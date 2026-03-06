/**
 * FUN_004c8800.c
 * Source line: 708209
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_004c8800(int param_1,undefined4 param_2,uint param_3)

{
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined1 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0x17c) = param_2;
  *(uint *)(param_1 + 0x180) = param_3 >> 2;
  FUN_0013cbdc(param_1,param_1 + 0x34,0x20);
  FUN_0013cbdc(param_1 + 0xb4,param_1 + 0xe8,0x21);
  *(undefined1 *)(param_1 + 0x18d) = 1;
  return;
}
