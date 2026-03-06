/**
 * FUN_0075d7fc.c
 * Source line: 1117919
 * Body lines: 1
 */
#include "../../../include/types.h"

byte FUN_0075d7fc(int param_1,uint param_2,uint param_3)

{
  return *(byte *)(param_1 + (param_3 & 0xf) * 0xa0 + (param_2 & 0xf) * 10 + 0x25) & 3;
}
