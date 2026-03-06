/**
 * FUN_0020bfb4.c
 * Source line: 268470
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0020bfb4(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  do {
    FUN_001b3f24(param_1 + uVar1 * 0x870,0x16);
    uVar2 = uVar1 + 1;
    *(char *)(param_1 + uVar1 + 0x5460) = (char)uVar1;
    uVar1 = uVar2;
  } while (uVar2 < 10);
  return;
}
