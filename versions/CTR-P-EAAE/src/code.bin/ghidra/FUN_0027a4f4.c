/**
 * FUN_0027a4f4.c
 * Source line: 323862
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0027a4f4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  FUN_005c6760();
  uVar2 = 0;
  do {
    iVar3 = param_1 + uVar2 * 0xa480;
    iVar1 = FUN_002fbd54(iVar3 + 0x55a6);
    if (iVar1 != 0) {
      FUN_006bca58(iVar3,param_2,param_3,uVar2 & 0xff);
    }
    uVar2 += 1;
  } while (uVar2 < 4);
  return;
}
