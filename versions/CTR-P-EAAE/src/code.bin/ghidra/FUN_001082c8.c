/**
 * FUN_001082c8.c
 * Source line: 107982
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_001082c8(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    __rt_memclr((undefined4 *)(iVar1 * 0x1ac + param_1),0x1ac);
    iVar1 += 1;
  } while (iVar1 < 0xf);
  return;
}
