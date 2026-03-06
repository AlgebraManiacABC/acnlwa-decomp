/**
 * FUN_0023c730.c
 * Source line: 292589
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0023c730(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *(byte *)(param_1 + 0x3e0) - 1;
  if (uVar1 < 3) {
    *(char *)(param_1 + 0x3e0) = (char)uVar1;
    uVar2 = FUN_004b4fc0(param_1 + 0x24,*(undefined4 *)((uVar1 & 0xff) * 4 + 0x953f0c),1);
    FUN_00568630(param_1 + 0x24,param_1 + 0x3b8,uVar2,0);
    FUN_005697e0(0x3f800000,param_1 + 0x3b8);
          // WARNING: Subroutine does not return
    FUN_00568c10(param_1 + 0x24);
  }
  return;
}
