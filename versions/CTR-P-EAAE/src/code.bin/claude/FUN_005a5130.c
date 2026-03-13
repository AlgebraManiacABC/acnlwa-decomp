/**
 * FUN_005a5130.c
 * Source line: 853290
 * Body lines: 2
 */
#include "../../../include/types.h"

void FUN_005a5130(int param_1,int param_2)

{
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xf0000fff | param_2 << 0xc;
  return;
}
