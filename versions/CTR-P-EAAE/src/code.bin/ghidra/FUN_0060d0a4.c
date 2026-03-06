/**
 * FUN_0060d0a4.c
 * Source line: 924172
 * Body lines: 2
 */
#include "../../../include/types.h"

void FUN_0060d0a4(int param_1,uint param_2,uint param_3,undefined1 param_4)

{
  *(undefined1 *)(param_1 + (param_3 & 0xf) * 0xa0 + (param_2 & 0xf) * 10 + 0x24) = param_4;
  return;
}
