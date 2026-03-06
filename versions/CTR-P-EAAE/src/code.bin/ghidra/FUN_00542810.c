/**
 * FUN_00542810.c
 * Source line: 786127
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00542810(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x1c);
  if (uVar3 != 0) {
    uVar2 = 0;
    do {
      uVar1 = FUN_004c05f8(param_1 + 4,uVar2 + 0x4000000);
      FUN_004bf06c(uVar1,0,param_2);
      uVar2 += 1;
    } while (uVar2 < uVar3);
    *(undefined1 *)(param_1 + 0x14c) = 0;
  }
  return;
}
