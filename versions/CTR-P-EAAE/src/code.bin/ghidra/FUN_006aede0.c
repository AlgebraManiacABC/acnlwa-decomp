/**
 * FUN_006aede0.c
 * Source line: 1008723
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_006aede0(int param_1)

{
  FUN_0022c720(param_1 + 0xe30,2);
  *(byte *)(*(int *)(param_1 + 0x6344) + 0xb7) =
       *(byte *)(*(int *)(param_1 + 0x6344) + 0xb7) & 0xfe | 1;
  FUN_0058d3b4(0,0x100041b);
  return;
}
