/**
 * FUN_007046e0.c
 * Source line: 1059246
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 * FUN_007046e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  iVar1 = FUN_006e09c0(&uStack_18);
  uVar2 = 0;
  if (iVar1 * 2 != 0) {
    do {
      FUN_001dd05c(&uStack_18,uVar2 + 0x42 & 0xff,uVar2 + 0x43 & 0xff,*(undefined4 *)(param_1 + 8));
      uVar2 += 2;
    } while (uVar2 < (uint)(iVar1 * 2));
  }
  return &uStack_18;
}
