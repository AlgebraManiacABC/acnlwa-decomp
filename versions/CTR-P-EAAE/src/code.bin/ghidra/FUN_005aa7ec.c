/**
 * FUN_005aa7ec.c
 * Source line: 857154
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_005aa7ec(int param_1,uint param_2)

{
  *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & ~(byte)(1 << (param_2 & 0xff));
  *(undefined4 *)(param_1 + param_2 * 4 + 0x10) = 0;
  return;
}
