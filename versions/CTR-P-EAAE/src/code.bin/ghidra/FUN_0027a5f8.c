/**
 * FUN_0027a5f8.c
 * Source line: 323941
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0027a5f8(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  do {
    iVar3 = param_1 + uVar2 * 0xa480;
    iVar1 = FUN_002fbd54(iVar3 + 0x55a6);
    if (iVar1 != 0) {
      FUN_001187b4(iVar3,param_2,uVar2 & 0xff);
    }
    uVar2 += 1;
  } while (uVar2 < 4);
  return;
}
