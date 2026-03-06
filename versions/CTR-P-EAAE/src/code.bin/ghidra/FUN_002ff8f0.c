/**
 * FUN_002ff8f0.c
 * Source line: 397739
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_002ff8f0(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 + 0x29200;
  while( true ) {
    if (uVar2 <= param_1) {
      return 0;
    }
    iVar1 = FUN_00311a34(param_1 + 0x55a6,param_2);
    if (iVar1 != 0) break;
    param_1 += 0xa480;
  }
  if (param_1 == 0) {
    return 0;
  }
  return 1;
}
