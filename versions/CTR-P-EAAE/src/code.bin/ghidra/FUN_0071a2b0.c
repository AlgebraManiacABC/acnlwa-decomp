/**
 * FUN_0071a2b0.c
 * Source line: 1072840
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0071a2b0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  do {
    iVar3 = param_1 + uVar2 * 0xa480;
    FUN_00712bac(iVar3,uVar2);
    uVar1 = FUN_003193e8(iVar3 + 0x6b8c,0x38f4,0xffffffff);
    uVar2 += 1;
    *(undefined4 *)(iVar3 + 0x6b88) = uVar1;
  } while (uVar2 < 4);
  return;
}
