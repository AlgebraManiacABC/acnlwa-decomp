/**
 * FUN_003e0244.c
 * Source line: 555079
 * Body lines: 15
 */
#include "../../../include/types.h"

uint FUN_003e0244(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00346330(0,param_2,0x10302,0x400db,0,1,1);
  if (iVar1 < 0x801) {
    uVar2 = FUN_00345a30(&UNK_008a24c8,0,0x10302,0x400db,0,1,1,*(undefined4 *)(param_1 + 0x28),0x800
                         ,0);
    if ((uVar2 & 0x80000000) == 0) {
      uVar2 = 0;
      *(undefined1 *)(param_1 + 0x19) = 1;
    }
  }
  else {
    uVar2 = 0xd820ebec;
  }
  return uVar2;
}
