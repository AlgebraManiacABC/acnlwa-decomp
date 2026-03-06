/**
 * FUN_001d7070.c
 * Source line: 239932
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_001d7070(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0x1e;
  }
  else {
    FUN_001b0544(0,param_1 + 0xf4,2);
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x108) = uVar1;
  return;
}
