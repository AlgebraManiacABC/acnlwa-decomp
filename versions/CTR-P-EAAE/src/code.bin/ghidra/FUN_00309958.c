/**
 * FUN_00309958.c
 * Source line: 407781
 * Body lines: 1
 */
#include "../../../include/types.h"

bool FUN_00309958(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 0x44) & 1 << (param_2 & 0xff)) != 0;
}
