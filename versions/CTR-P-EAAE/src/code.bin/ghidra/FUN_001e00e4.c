/**
 * FUN_001e00e4.c
 * Source line: 246511
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_001e00e4(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    FUN_001b3f24(param_1 + uVar1 * 0x870,0x16);
    uVar1 += 1;
  } while (uVar1 < 8);
  return;
}
