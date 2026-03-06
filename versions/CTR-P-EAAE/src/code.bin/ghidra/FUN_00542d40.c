/**
 * FUN_00542d40.c
 * Source line: 786346
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00542d40(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x1c);
  if (uVar3 != 0) {
    uVar2 = 0;
    do {
      uVar1 = FUN_004c05f8(param_1 + 4,uVar2 + 0x4000000);
      FUN_004bf030(uVar1,param_2);
      uVar2 += 1;
    } while (uVar2 < uVar3);
  }
  return;
}
