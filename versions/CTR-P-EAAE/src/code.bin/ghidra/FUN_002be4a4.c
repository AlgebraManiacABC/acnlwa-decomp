/**
 * FUN_002be4a4.c
 * Source line: 358999
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_002be4a4(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    iVar1 = FUN_002fbd54();
    if ((iVar1 == 0) ||
       (iVar1 = FUN_002fe940(param_1 + uVar2 * 0x14b0 + 0x1428,param_2 + 0x55a6), iVar1 != 0))
    break;
    uVar2 += 1;
    if (0x1f < uVar2) {
      return;
    }
  }
  FUN_0020b838(param_1 + uVar2 * 0x14b0 + 8,param_2,param_3);
  return;
}
